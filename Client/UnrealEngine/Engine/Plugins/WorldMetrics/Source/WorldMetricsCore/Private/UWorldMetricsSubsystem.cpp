// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 42

// StaticClass @ 14f130a00

UClass * __cdecl UWorldMetricsSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsSubsystem",
               &Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldMetricsSubsystem,0x2a48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UWorldMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton;
}

// UWorldMetricsSubsystem @ 14f133390

UWorldMetricsSubsystem * __thiscall
UWorldMetricsSubsystem::UWorldMetricsSubsystem(UWorldMetricsSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
  (this->UpdateTickerHandle).Object = (FElement *)0x0;
  (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Metrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metrics).ArrayNum = 0;
  (this->Metrics).ArrayMax = 0;
  *(undefined8 *)&(this->Extensions).field_0x2980 = 0;
  *(undefined4 *)&(this->Extensions).field_0x2988 = 0;
  *(undefined4 *)&(this->Extensions).field_0x298c = 0x10;
  *(undefined8 *)&(this->Extensions).field_0x2998 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a0 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a4 = 0x20;
  *(undefined4 *)&(this->Extensions).field_0x29ac = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a8 = 0xffffffff;
  *(undefined8 *)&(this->Extensions).field_0x29d0 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29d8 = 0;
  this->UpdateRateInSeconds = 0.0;
  this->WarmUpFrames = 8;
  this->PendingWarmUpFrames = 0;
  return this;
}

// UWorldMetricsSubsystem @ 14f133430

UWorldMetricsSubsystem * __thiscall
UWorldMetricsSubsystem::UWorldMetricsSubsystem(UWorldMetricsSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
  (this->UpdateTickerHandle).Object = (FElement *)0x0;
  (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Metrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metrics).ArrayNum = 0;
  (this->Metrics).ArrayMax = 0;
  *(undefined8 *)&(this->Extensions).field_0x2980 = 0;
  *(undefined4 *)&(this->Extensions).field_0x2988 = 0;
  *(undefined4 *)&(this->Extensions).field_0x298c = 0x10;
  *(undefined8 *)&(this->Extensions).field_0x2998 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a0 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a4 = 0x20;
  *(undefined4 *)&(this->Extensions).field_0x29ac = 0;
  *(undefined4 *)&(this->Extensions).field_0x29a8 = 0xffffffff;
  *(undefined8 *)&(this->Extensions).field_0x29d0 = 0;
  *(undefined4 *)&(this->Extensions).field_0x29d8 = 0;
  this->UpdateRateInSeconds = 0.0;
  this->WarmUpFrames = 8;
  this->PendingWarmUpFrames = 0;
  return this;
}

// ~UWorldMetricsSubsystem @ 14f133710

void __thiscall UWorldMetricsSubsystem::~UWorldMetricsSubsystem(UWorldMetricsSubsystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
  *(undefined4 *)&(this->Extensions).field_0x29d8 = 0;
  pvVar3 = *(void **)&(this->Extensions).field_0x29d0;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->Extensions);
  pFVar4 = (this->Metrics).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 14f133880

bool __thiscall
`UWorldMetricsSubsystem::Enable'::__l5::<lambda_1>::operator()(void *this,float param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  bVar9 = CpuChannel->Enabled < 0;
  if (!bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId353,"UWorldMetricsSubsystem::OnUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
               ,0x161);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId353);
  }
  if (*(int *)(lVar3 + 0x2a40) < 1) {
    plVar8 = *(longlong **)(lVar3 + 0x48);
    iVar2 = *(int *)(lVar3 + 0x50);
    plVar1 = plVar8 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x50) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar8 == plVar1) break;
      plVar4 = (longlong *)*plVar8;
      if ((plVar4 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Metric",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                             ,0x16b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      (**(code **)(*plVar4 + 0x2c8))(plVar4,param_1);
      plVar8 = plVar8 + 1;
    }
    if (bVar9) {
      return true;
    }
  }
  else {
    *(int *)(lVar3 + 0x2a40) = *(int *)(lVar3 + 0x2a40) + -1;
    if (bVar9) {
      return true;
    }
  }
  FCpuProfilerTrace::OutputEndEvent();
  return true;
}

// AcquireExistingExtension @ 14f133d90

UWorldMetricsExtension * __thiscall
UWorldMetricsSubsystem::AcquireExistingExtension
          (UWorldMetricsSubsystem *this,UObject *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  FExtension *pFVar1;
  TObjectPtr<UClass>_u_0 local_res8;
  UObject *local_res10 [3];
  
  local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
  local_res10[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pFVar1 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&local_res8);
  if (pFVar1 == (FExtension *)0x0) {
    return (UWorldMetricsExtension *)0x0;
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<UObject_*_&>(&pFVar1->Owners,(UObject **)&local_res8.DebugPtr,(bool *)local_res10);
  return (pFVar1->Instance).field0_0x0.DebugPtr;
}

// AcquireExtension @ 14f133e00

/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricsExtension * __thiscall
UWorldMetricsSubsystem::AcquireExtension
          (UWorldMetricsSubsystem *this,UWorldMetricsExtension *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FExtension *pFVar7;
  UWorldMetricsExtension *pUVar8;
  FStaticBasicLogRecord *pFVar9;
  TObjectPtr<UClass>_u_0 TStackX_10;
  UWorldMetricsExtension *pUStackX_20;
  FString FStack_28;
  
  if (param_1 == (UWorldMetricsExtension *)0x0) {
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (pUVar2 = (param_2->Class).field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
        pUVar5 = UWorldMetricsExtension::StaticClass();
        pUVar4 = (UClass *)0x0;
        pUVar6 = pUVar4;
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
          }
        }
        if ((pUVar6->ClassFlags & CLASS_Abstract) != CLASS_None) {
          if ((byte)LogWorldMetrics._0_1_ < 3) {
            return (UWorldMetricsExtension *)0x0;
          }
          pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
          if ((pUVar2 != (UClass *)0x0) &&
             (pUVar6 = UWorldMetricsExtension::StaticClass(), pUVar6 != (UClass *)0x0)) {
            iVar1 = (int)pUVar6->_padding_;
            if (((int)pUVar2->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pUVar4 = (param_2->Class).field0_0x0.DebugPtr;
            }
          }
          TStackX_10 = (TObjectPtr<UClass>_u_0)pUVar4->_padding_;
          ::FName::ToString((FName *)&TStackX_10.ObjectPtr,&FStack_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
          if (FStack_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return (UWorldMetricsExtension *)0x0;
          }
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
          return (UWorldMetricsExtension *)0x0;
        }
        TStackX_10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
        pUStackX_20 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TStackX_10.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TStackX_10.DebugPtr);
        }
        pFVar7 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                 ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                         *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&TStackX_10
                       );
        if (pFVar7 != (FExtension *)0x0) {
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Emplace<UObject_*_&>
                    (&pFVar7->Owners,(UObject **)&TStackX_10.DebugPtr,(bool *)&pUStackX_20);
          pUVar8 = (pFVar7->Instance).field0_0x0.DebugPtr;
          if (pUVar8 != (UWorldMetricsExtension *)0x0) goto LAB_14f133ff8;
        }
        pUVar8 = AddExtension(this,(UObject *)param_1,param_2);
        if (pUVar8 == (UWorldMetricsExtension *)0x0) {
          return (UWorldMetricsExtension *)0x0;
        }
LAB_14f133ff8:
        (**(code **)(*(longlong *)pUVar8 + 0x2c8))(pUVar8,param_1);
        return pUVar8;
      }
    }
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogWorldMetrics);
  return (UWorldMetricsExtension *)0x0;
}

// AcquireExtension @ 14f133e10

/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricsExtension * __thiscall
UWorldMetricsSubsystem::AcquireExtension
          (UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FExtension *pFVar7;
  UWorldMetricsExtension *pUVar8;
  FStaticBasicLogRecord *pFVar9;
  TObjectPtr<UClass>_u_0 TStackX_10;
  UWorldMetricInterface *pUStackX_20;
  FString FStack_28;
  
  if (param_1 == (UWorldMetricInterface *)0x0) {
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (pUVar2 = (param_2->Class).field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
        pUVar5 = UWorldMetricsExtension::StaticClass();
        pUVar4 = (UClass *)0x0;
        pUVar6 = pUVar4;
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
          }
        }
        if ((pUVar6->ClassFlags & CLASS_Abstract) != CLASS_None) {
          if ((byte)LogWorldMetrics._0_1_ < 3) {
            return (UWorldMetricsExtension *)0x0;
          }
          pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
          if ((pUVar2 != (UClass *)0x0) &&
             (pUVar6 = UWorldMetricsExtension::StaticClass(), pUVar6 != (UClass *)0x0)) {
            iVar1 = (int)pUVar6->_padding_;
            if (((int)pUVar2->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pUVar4 = (param_2->Class).field0_0x0.DebugPtr;
            }
          }
          TStackX_10 = (TObjectPtr<UClass>_u_0)pUVar4->_padding_;
          ::FName::ToString((FName *)&TStackX_10.ObjectPtr,&FStack_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
          if (FStack_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return (UWorldMetricsExtension *)0x0;
          }
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
          return (UWorldMetricsExtension *)0x0;
        }
        TStackX_10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
        pUStackX_20 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TStackX_10.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TStackX_10.DebugPtr);
        }
        pFVar7 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                 ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                         *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&TStackX_10
                       );
        if (pFVar7 != (FExtension *)0x0) {
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Emplace<UObject_*_&>
                    (&pFVar7->Owners,(UObject **)&TStackX_10.DebugPtr,(bool *)&pUStackX_20);
          pUVar8 = (pFVar7->Instance).field0_0x0.DebugPtr;
          if (pUVar8 != (UWorldMetricsExtension *)0x0) goto LAB_14f133ff8;
        }
        pUVar8 = AddExtension(this,(UObject *)param_1,param_2);
        if (pUVar8 == (UWorldMetricsExtension *)0x0) {
          return (UWorldMetricsExtension *)0x0;
        }
LAB_14f133ff8:
        (**(code **)(*(longlong *)pUVar8 + 0x2c8))(pUVar8,param_1);
        return pUVar8;
      }
    }
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogWorldMetrics);
  return (UWorldMetricsExtension *)0x0;
}

// AcquireExtensionInternal @ 14f133e20

/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricsExtension * __thiscall
UWorldMetricsSubsystem::AcquireExtensionInternal
          (UWorldMetricsSubsystem *this,UObject *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FExtension *pFVar7;
  UWorldMetricsExtension *pUVar8;
  FStaticBasicLogRecord *pFVar9;
  TObjectPtr<UClass>_u_0 local_res10;
  UObject *local_res20;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (pUVar2 = (param_2->Class).field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
        pUVar5 = UWorldMetricsExtension::StaticClass();
        pUVar4 = (UClass *)0x0;
        pUVar6 = pUVar4;
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
          }
        }
        if ((pUVar6->ClassFlags & CLASS_Abstract) != CLASS_None) {
          if ((byte)LogWorldMetrics._0_1_ < 3) {
            return (UWorldMetricsExtension *)0x0;
          }
          pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
          if ((pUVar2 != (UClass *)0x0) &&
             (pUVar6 = UWorldMetricsExtension::StaticClass(), pUVar6 != (UClass *)0x0)) {
            iVar1 = (int)pUVar6->_padding_;
            if (((int)pUVar2->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pUVar4 = (param_2->Class).field0_0x0.DebugPtr;
            }
          }
          local_res10 = (TObjectPtr<UClass>_u_0)pUVar4->_padding_;
          ::FName::ToString((FName *)&local_res10.ObjectPtr,&local_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return (UWorldMetricsExtension *)0x0;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return (UWorldMetricsExtension *)0x0;
        }
        local_res10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
        local_res20 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        pFVar7 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                 ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                         *)&this->Extensions,
                        (TSubclassOf<UWorldMetricsExtension_const_>)&local_res10);
        if (pFVar7 != (FExtension *)0x0) {
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Emplace<UObject_*_&>
                    (&pFVar7->Owners,(UObject **)&local_res10.DebugPtr,(bool *)&local_res20);
          pUVar8 = (pFVar7->Instance).field0_0x0.DebugPtr;
          if (pUVar8 != (UWorldMetricsExtension *)0x0) goto LAB_14f133ff8;
        }
        pUVar8 = AddExtension(this,param_1,param_2);
        if (pUVar8 == (UWorldMetricsExtension *)0x0) {
          return (UWorldMetricsExtension *)0x0;
        }
LAB_14f133ff8:
        (**(code **)(*(longlong *)pUVar8 + 0x2c8))(pUVar8,param_1);
        return pUVar8;
      }
    }
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return (UWorldMetricsExtension *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogWorldMetrics);
  return (UWorldMetricsExtension *)0x0;
}

// AddExtension @ 14f1342d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricsExtension * __thiscall
UWorldMetricsSubsystem::AddExtension
          (UWorldMetricsSubsystem *this,UObject *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  int iVar1;
  bool bVar2;
  FNameEntryId FVar3;
  ForAnyElementType FVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWorldMetricsExtension *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar10;
  UClass *pUVar11;
  UObject *local_res10 [2];
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  pUVar11 = (UClass *)0x0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar8 = pUVar11;
  local_res10[0] = param_1;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar5 = UWorldMetricsExtension::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar8 = (param_2->Class).field0_0x0.DebugPtr;
    }
  }
  FVar4.Data = local_d8.Data.AllocatorInstance.Data;
  if ((FName)local_d8.Data.AllocatorInstance.Data == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UWorldMetricsExtension::StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_8_ = FVar4.Data;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar7 = (UWorldMetricsExtension *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pUVar7 == (UWorldMetricsExtension *)0x0) {
    if (1 < (byte)LogWorldMetrics._0_1_) {
      pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
      if ((pUVar6 != (UClass *)0x0) &&
         (pUVar8 = UWorldMetricsExtension::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar11 = (param_2->Class).field0_0x0.DebugPtr;
        }
      }
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar11->_padding_;
      ::FName::ToString((FName *)&local_d8,&local_c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    pUVar7 = (UWorldMetricsExtension *)0x0;
  }
  else {
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
    TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Emplace<TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&>_>
              ((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)&this->Extensions,
               (TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&> *)&local_d8,
               (bool *)&local_c8);
    pTVar10 = *(TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                **)&(this->Extensions).field_0x2980;
    FVar3.Value = local_d8.Data.AllocatorInstance.Data._0_4_;
    if (pTVar10 ==
        (TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
         *)0x0) {
      pTVar10 = &this->Extensions;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    *(UWorldMetricsExtension **)(&pTVar10->field_0x0 + (longlong)(int)FVar3.Value * 0x298 + 8) =
         pUVar7;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Emplace<UObject_*_&>
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)(&pTVar10->field_0x0 + (longlong)(int)FVar3.Value * 0x298 + 0x10),
               (UObject **)&local_d8,(bool *)local_res10);
    (**(code **)(*(longlong *)pUVar7 + 0x2b8))(pUVar7);
    if (5 < (byte)LogWorldMetrics._0_1_) {
      pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
      if ((pUVar6 != (UClass *)0x0) &&
         (pUVar8 = UWorldMetricsExtension::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar11 = (param_2->Class).field0_0x0.DebugPtr;
        }
      }
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar11->_padding_;
      ::FName::ToString((FName *)&local_c8,&local_d8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      if ((FName)local_d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar7;
}

// AddMetric @ 14f1345a0

UWorldMetricInterface * __thiscall
UWorldMetricsSubsystem::AddMetric
          (UWorldMetricsSubsystem *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  UWorldMetricInterface *pUVar1;
  
  pUVar1 = CreateMetric(this,param_1);
  AddMetric(this,pUVar1);
  return pUVar1;
}

// AddMetric @ 14f1345e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::AddMetric(UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  UWorldMetricInterface *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10;
  FString local_18;
  
  if (param_1 == (UWorldMetricInterface *)0x0) {
    if ((byte)LogWorldMetrics._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    return false;
  }
  iVar3 = (this->Metrics).ArrayNum;
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < iVar3) {
    do {
      pUVar1 = *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + uVar4 * 8);
      if ((pUVar1 != (UWorldMetricInterface *)0x0) && (pUVar1 == param_1)) {
        if ((int)uVar5 != -1) {
          return false;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while ((longlong)uVar4 < (longlong)iVar3);
  }
  if (iVar3 == (this->Metrics).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Metrics).AllocatorInstance,&(this->Metrics).ArrayMax);
    (this->Metrics).ArrayNum = iVar3;
  }
  iVar3 = (this->Metrics).ArrayNum;
  (this->Metrics).ArrayNum = iVar3 + 1;
  *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + (longlong)iVar3 * 8) =
       param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
      (pTVar2 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    Enable(this,true);
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1);
  }
  if (5 < (byte)LogWorldMetrics._0_1_) {
    local_res10 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// AddReferencedObjects @ 14f134780

void __cdecl
UWorldMetricsSubsystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_2;
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UWorldMetricsSubsystem>(&local_68);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar8 = GetPrivateStaticClass();
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    pFVar9 = GetTypeName<UWorldMetricsSubsystem>(&local_58);
    pwVar14 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_48,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar13);
  }
  iVar15 = 0;
  iVar16 = 0;
  puVar2 = &param_1[0x10c].field_0x8;
  iVar3 = *(int *)&param_1[0x10c].field_0x18;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1[0x10c].field_0x10;
    if (*(uint **)&param_1[0x10c].field_0x10 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    iVar16 = iVar15;
    while (uVar12 == 0) {
      iVar15 = iVar15 + 1;
      iVar16 = iVar16 + 0x20;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14f13487b;
      uVar12 = puVar17[iVar15];
    }
    uVar6 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar7 = local_res18 + -1 + iVar16;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14f13487b:
  uVar12 = *(uint *)&param_1[0x10c].field_0x18;
  uVar18 = uVar12 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar15);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar16;
  uStack_70 = CONCAT44(uStack_9c,*(int *)(param_1 + 0x10c) - *(int *)&param_1[0x10c].field_0x24);
  TStack_90.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), param_2 = local_res10, bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1[0x10c].field_0x18;
  if (uVar12 != uVar6) {
    puVar11 = puVar2;
    if (*(undefined1 **)&param_1[0x10c].field_0x10 != (undefined1 *)0x0) {
      puVar11 = *(undefined1 **)&param_1[0x10c].field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      iVar15 = iVar15 + 1;
      uVar18 = uVar18 + 0x20;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar15) goto LAB_14f1349a0;
      uVar12 = *(uint *)(puVar11 + (longlong)iVar15 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14f1349a0:
  while( true ) {
    if (*(int *)(param_1 + 0x10c) - *(int *)&param_1[0x10c].field_0x24 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_90.CurrentBitIndex;
    if ((TStack_90.CurrentBitIndex == uVar12) &&
       (TStack_90.Array ==
        (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2)) break;
    puVar11 = &param_1[2].field_0x8;
    if (*(undefined1 **)&param_1[0x10b].field_0x20 != (undefined1 *)0x0) {
      puVar11 = *(undefined1 **)&param_1[0x10b].field_0x20;
    }
    (**(code **)(param_2->_padding_ + 0x88))(param_2,puVar11 + lVar10 * 0x298,0,0);
    (**(code **)(param_2->_padding_ + 0x88))(param_2,puVar11 + lVar10 * 0x298 + 8);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_90);
  }
  return;
}

// BeginDestroy @ 14f134e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::BeginDestroy(UWorldMetricsSubsystem *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((((this->UpdateTickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1676581561060818875>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                       ,0x45,"!IsEnabled()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (1 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    RemoveAllMetrics(this);
    TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Reset((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)&this->Extensions);
    if (5 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanHaveWorldMetrics @ 14f135170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UWorldMetricsSubsystem::CanHaveWorldMetrics(UWorld *param_1)

{
  bool bVar1;
  
  if (param_1 != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(param_1);
    if ((bVar1) || ((param_1->WorldType).Value == '\x02')) {
      return true;
    }
  }
  return false;
}

// Clear @ 14f1351b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::Clear(UWorldMetricsSubsystem *this)

{
  RemoveAllMetrics(this);
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reset((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)&this->Extensions);
  if (5 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    return;
  }
  return;
}

// ContainsMetric @ 14f135360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::ContainsMetric(UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  UWorldMetricInterface *pUVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar5;
  ulonglong uVar4;
  
  if (param_1 == (UWorldMetricInterface *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    return false;
  }
  lVar5 = (longlong)(this->Metrics).ArrayNum;
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < lVar5) {
    do {
      iVar3 = (int)uVar4;
      pUVar1 = *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + uVar2 * 8);
      if ((pUVar1 != (UWorldMetricInterface *)0x0) && (pUVar1 == param_1)) goto LAB_14f1353c9;
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)(iVar3 + 1);
    } while ((longlong)uVar2 < lVar5);
  }
  iVar3 = -1;
LAB_14f1353c9:
  return iVar3 != -1;
}

// CreateMetric @ 14f135830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldMetricInterface * __thiscall
UWorldMetricsSubsystem::CreateMetric
          (UWorldMetricsSubsystem *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  int iVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  FName local_c8;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar8 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar5 = UWorldMetricInterface::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pUVar8 = (param_1->Class).field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)) {
      pUVar6 = UWorldMetricInterface::StaticClass();
      pUVar5 = (UClass *)0x0;
      pUVar7 = pUVar5;
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        }
      }
      if ((pUVar7->ClassFlags & CLASS_Abstract) != CLASS_None) {
        if ((byte)LogWorldMetrics._0_1_ < 3) {
          return (UWorldMetricInterface *)0x0;
        }
        pUVar8 = (param_1->Class).field0_0x0.DebugPtr;
        if ((pUVar8 != (UClass *)0x0) &&
           (pUVar7 = UWorldMetricInterface::StaticClass(), pUVar7 != (UClass *)0x0)) {
          iVar1 = (int)pUVar7->_padding_;
          if (((int)pUVar8->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
          }
        }
        local_c8 = (FName)pUVar5->_padding_;
        ::FName::ToString(&local_c8,&local_c0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
        if (local_c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return (UWorldMetricInterface *)0x0;
        }
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        return (UWorldMetricInterface *)0x0;
      }
      pUVar8 = (param_1->Class).field0_0x0.DebugPtr;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      pUVar7 = pUVar5;
      if ((pUVar8 != (UClass *)0x0) &&
         (pUVar6 = UWorldMetricInterface::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        }
      }
      FVar3 = local_c8;
      if (local_c8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar8 = UWorldMetricInterface::StaticClass();
      CheckIsClassChildOf_Internal(pUVar8,pUVar7);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar7);
      FVar4 = local_c8;
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_c8.ComparisonIndex = FVar3.ComparisonIndex.Value;
      local_c8.Number = FVar3.Number;
      local_a8._16_4_ = local_c8.ComparisonIndex.Value;
      local_a8._20_4_ = local_c8.Number;
      local_a8._24_4_ = RF_Transient;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_c8 = FVar4;
      local_a8._8_8_ = this;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar10 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (pUVar9 != (UObject *)0x0) {
        return (UWorldMetricInterface *)pUVar9;
      }
      if ((byte)LogWorldMetrics._0_1_ < 2) {
        return (UWorldMetricInterface *)0x0;
      }
      pUVar8 = (param_1->Class).field0_0x0.DebugPtr;
      if ((pUVar8 != (UClass *)0x0) &&
         (pUVar7 = UWorldMetricInterface::StaticClass(), pUVar7 != (UClass *)0x0)) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
        }
      }
      local_c8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_c8,&local_c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        return (UWorldMetricInterface *)0x0;
      }
      return (UWorldMetricInterface *)0x0;
    }
  }
  if (2 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  }
  return (UWorldMetricInterface *)0x0;
}

// Deinitialize @ 14f135c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::Deinitialize(UWorldMetricsSubsystem *this)

{
  if (5 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  }
  RemoveAllMetrics(this);
  TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reset((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)&this->Extensions);
  if (5 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    return;
  }
  return;
}

// DeinitializeMetrics @ 14f135cf0

void __thiscall UWorldMetricsSubsystem::DeinitializeMetrics(UWorldMetricsSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Metrics).AllocatorInstance.Data;
  iVar2 = (this->Metrics).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Metrics).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metric",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                         ,0x62,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x2c0))(plVar3);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// Enable @ 14f136050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::Enable(UWorldMetricsSubsystem *this,bool param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  atomic<int> aVar5;
  int iVar6;
  FElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  UWorld *this_00;
  FTSTicker *this_01;
  undefined8 *puVar12;
  ulong64 uVar13;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  TWeakPtr<FTSTicker::FElement,1> local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  TWeakPtr<FTSTicker::FElement,1> local_48 [2];
  
  pFVar7 = (this->UpdateTickerHandle).Object;
  pTVar1 = &this->UpdateTickerHandle;
  if (param_1) {
    if (((pFVar7 == (FElement *)0x0) ||
        (pTVar8 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
        pTVar8 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar8->SharedReferenceCount < 1)) {
      this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      if (this_00 != (UWorld *)0x0) {
        bVar11 = UWorld::IsGameWorld(this_00);
        if ((bVar11) || ((this_00->WorldType).Value == '\x02')) {
          iVar6 = (this->Metrics).ArrayNum;
          if (iVar6 != 0) {
            pFVar15 = (this->Metrics).AllocatorInstance.Data;
            pFVar3 = pFVar15 + (longlong)iVar6 * 8;
            while( true ) {
              if ((this->Metrics).ArrayNum != iVar6) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res10);
              }
              if (pFVar15 == pFVar3) break;
              plVar9 = *(longlong **)pFVar15;
              if (plVar9 == (longlong *)0x0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Metric",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                                    ,0x51,L"");
                if (bVar11) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              (**(code **)(*plVar9 + 0x2b8))(plVar9);
              pFVar15 = pFVar15 + 8;
            }
            this->PendingWarmUpFrames = this->WarmUpFrames;
            if (this->WarmUpFrames < 0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1676581561060818859>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                                  ,0x55,"PendingWarmUpFrames >= 0");
              if (bVar11) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (2 < (byte)LogWorldMetrics._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
              }
              this->PendingWarmUpFrames = 0;
            }
            if (this->UpdateRateInSeconds <= 0.0 && this->UpdateRateInSeconds != 0.0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1676581561060818811>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                                  ,0x85,"UpdateRateInSeconds >= 0.f");
              if (bVar11) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (2 < (byte)LogWorldMetrics._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
              }
              this->UpdateRateInSeconds = 0.0;
            }
            this_01 = FTSTicker::GetCoreTicker();
            fVar4 = this->UpdateRateInSeconds;
            local_b8 = (undefined1  [8])0x0;
            local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_b0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                       (FWriteAccessScope *)&local_78);
            local_60 = &local_b0;
            puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_b0);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = &
                         ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar13 = FDelegateHandle::GenerateNewID();
              puVar12[2] = uVar13;
              *puVar12 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UWorldMetricsSubsystem::Enable'::`5'::<lambda_1>_>
                          ::_vftable_;
              puVar12[3] = this;
            }
            if (local_78.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
            }
            pTVar14 = FTSTicker::AddTicker
                                (this_01,&local_58,
                                 (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)
                                 local_b8,fVar4);
            if (pTVar1 != pTVar14) {
              pTVar1->Object = pTVar14->Object;
              pTVar14->Object = (FElement *)0x0;
              pTVar8 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController;
              (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController =
                   (pTVar14->WeakReferenceCount).ReferenceController;
              (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &pTVar8->WeakReferenceCount;
                aVar5 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar5 == (atomic<int>)0x1) {
                  (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
                }
              }
            }
            if (local_58.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_58.WeakReferenceCount.ReferenceController,1);
              }
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                       (FWriteAccessScope *)&local_90);
            if ((local_b0.DelegateSize != 0) &&
               (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_b0,0,0,0x10);
              local_b0.DelegateSize = 0;
            }
            if (local_90.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
            }
            if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_b0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_b8);
          }
        }
      }
    }
  }
  else if (((pFVar7 != (FElement *)0x0) &&
           (pTVar8 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
           pTVar8 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar8->SharedReferenceCount)
          ) {
    local_a0.Object = pTVar1->Object;
    local_a0.WeakReferenceCount.ReferenceController =
         (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_a0);
    if (pTVar1 != local_48) {
      pTVar8 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar8->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
        }
      }
    }
    pFVar15 = (this->Metrics).AllocatorInstance.Data;
    iVar6 = (this->Metrics).ArrayNum;
    pFVar3 = pFVar15 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Metrics).ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar15 == pFVar3) break;
      plVar9 = *(longlong **)pFVar15;
      if (plVar9 == (longlong *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Metric",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                            ,0x62,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      (**(code **)(*plVar9 + 0x2c0))(plVar9);
      pFVar15 = pFVar15 + 8;
    }
  }
  return;
}

// ForEachMetric @ 14f1365d0

void __thiscall
UWorldMetricsSubsystem::ForEachMetric
          (UWorldMetricsSubsystem *this,
          TFunctionRef<bool___cdecl(UWorldMetricInterface_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = (this->Metrics).AllocatorInstance.Data;
  iVar2 = (this->Metrics).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Metrics).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 == '\0') {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Get @ 14f136820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldMetricsSubsystem * __cdecl UWorldMetricsSubsystem::Get(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UWorldMetricsSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UWorldMetricsSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14f136858;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14f136858:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14f136888;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14f136888:
  pUVar5 = (UWorldMetricsSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 14f136fa0

UClass * __cdecl UWorldMetricsSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsSubsystem",
               &Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldMetricsSubsystem,0x2a48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UWorldMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton;
}

// HasAnyExtension @ 14f137140

bool __thiscall UWorldMetricsSubsystem::HasAnyExtension(UWorldMetricsSubsystem *this)

{
  return *(int *)&(this->Extensions).field_0x2988 != *(int *)&(this->Extensions).field_0x29ac;
}

// HasAnyMetric @ 14f137160

bool __thiscall UWorldMetricsSubsystem::HasAnyMetric(UWorldMetricsSubsystem *this)

{
  return (this->Metrics).ArrayNum != 0;
}

// Initialize @ 14f137320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldMetricsSubsystem::Initialize(UWorldMetricsSubsystem *this,FSubsystemCollectionBase *param_1)

{
  if (5 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  }
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  return;
}

// InitializeMetrics @ 14f137370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::InitializeMetrics(UWorldMetricsSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Metrics).AllocatorInstance.Data;
  iVar2 = (this->Metrics).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Metrics).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metric",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                         ,0x51,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x2b8))(plVar3);
    pFVar6 = pFVar6 + 8;
  }
  this->PendingWarmUpFrames = this->WarmUpFrames;
  if (this->WarmUpFrames < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1676581561060818859>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                       ,0x55,"PendingWarmUpFrames >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    this->PendingWarmUpFrames = 0;
  }
  return;
}

// NumExtensions @ 14f137820

int __thiscall UWorldMetricsSubsystem::NumExtensions(UWorldMetricsSubsystem *this)

{
  return *(int *)&(this->Extensions).field_0x2988 - *(int *)&(this->Extensions).field_0x29ac;
}

// NumMetrics @ 14f137840

int __thiscall UWorldMetricsSubsystem::NumMetrics(UWorldMetricsSubsystem *this)

{
  return (this->Metrics).ArrayNum;
}

// OnUpdate @ 14f137ac0

void __thiscall UWorldMetricsSubsystem::OnUpdate(UWorldMetricsSubsystem *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId353,"UWorldMetricsSubsystem::OnUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
               ,0x161);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId353);
  }
  if (this->PendingWarmUpFrames < 1) {
    pFVar6 = (this->Metrics).AllocatorInstance.Data;
    iVar2 = (this->Metrics).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Metrics).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      plVar3 = *(longlong **)pFVar6;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Metric",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                             ,0x16b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x2c8))(plVar3,param_1);
      pFVar6 = pFVar6 + 8;
    }
  }
  else {
    this->PendingWarmUpFrames = this->PendingWarmUpFrames + -1;
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ReleaseExtension @ 14f138070

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::ReleaseExtension
          (UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  UWorldMetricsExtension *pUVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FExtension *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UClass>_u_0 TStackX_10;
  FString FStack_18;
  
  if (param_1 == (UWorldMetricInterface *)0x0) {
    return false;
  }
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f138204:
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    return false;
  }
  iVar3 = (int)pUVar4->_padding_;
  if (((int)pUVar6->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) ||
     (TStackX_10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr,
     TStackX_10.DebugPtr == (UClass *)0x0)) goto LAB_14f138204;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TStackX_10.DebugPtr);
  }
  pFVar5 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&TStackX_10);
  if (pFVar5 == (FExtension *)0x0) {
    return false;
  }
  pUVar1 = (pFVar5->Instance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,param_1);
  iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Remove(&pFVar5->Owners,(UObject *)param_1);
  if ((iVar3 != 0) || ((byte)LogWorldMetrics._0_1_ < 2)) goto LAB_14f1381f5;
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f1381a0:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14f1381a0;
    pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  }
  TStackX_10 = (TObjectPtr<UClass>_u_0)pUVar6->_padding_;
  ::FName::ToString((FName *)&TStackX_10.ObjectPtr,&FStack_18);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
LAB_14f1381f5:
  TryRemoveExtension(this,param_2);
  return true;
}

// ReleaseExtension @ 14f138080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::ReleaseExtension
          (UWorldMetricsSubsystem *this,UWorldMetricsExtension *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  UWorldMetricsExtension *pUVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FExtension *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UClass>_u_0 TStackX_10;
  FString FStack_18;
  
  if (param_1 == (UWorldMetricsExtension *)0x0) {
    return false;
  }
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f138204:
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    return false;
  }
  iVar3 = (int)pUVar4->_padding_;
  if (((int)pUVar6->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) ||
     (TStackX_10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr,
     TStackX_10.DebugPtr == (UClass *)0x0)) goto LAB_14f138204;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TStackX_10.DebugPtr);
  }
  pFVar5 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&TStackX_10);
  if (pFVar5 == (FExtension *)0x0) {
    return false;
  }
  pUVar1 = (pFVar5->Instance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,param_1);
  iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Remove(&pFVar5->Owners,(UObject *)param_1);
  if ((iVar3 != 0) || ((byte)LogWorldMetrics._0_1_ < 2)) goto LAB_14f1381f5;
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f1381a0:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14f1381a0;
    pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  }
  TStackX_10 = (TObjectPtr<UClass>_u_0)pUVar6->_padding_;
  ::FName::ToString((FName *)&TStackX_10.ObjectPtr,&FStack_18);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
LAB_14f1381f5:
  TryRemoveExtension(this,param_2);
  return true;
}

// ReleaseExtensionInternal @ 14f138090

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::ReleaseExtensionInternal
          (UWorldMetricsSubsystem *this,UObject *param_1,
          TSubclassOf<UWorldMetricsExtension> *param_2)

{
  UWorldMetricsExtension *pUVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FExtension *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UClass>_u_0 local_res10;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f138204:
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
    return false;
  }
  iVar3 = (int)pUVar4->_padding_;
  if (((int)pUVar6->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) ||
     (local_res10.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr,
     local_res10.DebugPtr == (UClass *)0x0)) goto LAB_14f138204;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pFVar5 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&local_res10);
  if (pFVar5 == (FExtension *)0x0) {
    return false;
  }
  pUVar1 = (pFVar5->Instance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,param_1);
  iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Remove(&pFVar5->Owners,param_1);
  if ((iVar3 != 0) || ((byte)LogWorldMetrics._0_1_ < 2)) goto LAB_14f1381f5;
  pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar4 = UWorldMetricsExtension::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14f1381a0:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14f1381a0;
    pUVar6 = (param_2->Class).field0_0x0.DebugPtr;
  }
  local_res10 = (TObjectPtr<UClass>_u_0)pUVar6->_padding_;
  ::FName::ToString((FName *)&local_res10.ObjectPtr,&local_18);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14f1381f5:
  TryRemoveExtension(this,param_2);
  return true;
}

// RemoveAllMetrics @ 14f1385a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::RemoveAllMetrics(UWorldMetricsSubsystem *this)

{
  UObjectBase *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (0 < (this->Metrics).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Metrics).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(UObjectBase **)((this->Metrics).AllocatorInstance.Data + lVar7);
      if ((((this->UpdateTickerHandle).Object != (FElement *)0x0) &&
          (pTVar1 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
          pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount))
      {
        (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
        VerifyMetricReleasedAllExtensions(this,(UWorldMetricInterface *)this_00);
        pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
        pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        do {
          lVar2 = (pFVar5->field0_0x0).FlagsAndRefCount;
          uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
          if ((uVar6 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar5 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar4 = lVar2 == (pFVar5->field0_0x0).FlagsAndRefCount;
          if (bVar4) {
            (pFVar5->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar2 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar4);
        pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        FUObjectItem::ClearRootFlags(pFVar5,Async);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (this->Metrics).ArrayNum);
  }
  (this->Metrics).ArrayNum = 0;
  if ((this->Metrics).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Metrics).AllocatorInstance,0,&(this->Metrics).ArrayMax);
  }
  VerifyRemoveOrphanExtensions(this);
  Enable(this,false);
  return;
}

// RemoveMetric @ 14f138bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::RemoveMetric(UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  UWorldMetricInterface *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  FName local_res10;
  FString local_18;
  
  if (param_1 == (UWorldMetricInterface *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
    }
  }
  else {
    lVar4 = (longlong)(this->Metrics).ArrayNum;
    uVar3 = 0;
    uVar6 = uVar3;
    if (0 < lVar4) {
      do {
        pUVar1 = *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + uVar3 * 8);
        iVar5 = (int)uVar6;
        if ((pUVar1 != (UWorldMetricInterface *)0x0) && (pUVar1 == param_1)) {
          if (iVar5 == -1) {
            return false;
          }
          if ((((this->UpdateTickerHandle).Object != (FElement *)0x0) &&
              (pTVar2 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
              pTVar2 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar2->SharedReferenceCount)) {
            (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1);
            VerifyMetricReleasedAllExtensions(this,param_1);
          }
          TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Metrics,iVar5,Default);
          if ((this->Metrics).ArrayNum == 0) {
            VerifyRemoveOrphanExtensions(this);
            Enable(this,false);
          }
          if (5 < (byte)LogWorldMetrics._0_1_) {
            local_res10 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
            ::FName::ToString(&local_res10,&local_18);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
          return true;
        }
        uVar3 = uVar3 + 1;
        uVar6 = (ulonglong)(iVar5 + 1);
      } while ((longlong)uVar3 < lVar4);
    }
  }
  return false;
}

// SetUpdateRateInSeconds @ 14f1393e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldMetricsSubsystem::SetUpdateRateInSeconds(UWorldMetricsSubsystem *this,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (0.0 <= param_1) {
    if ((((param_1 != this->UpdateRateInSeconds) &&
         (this->UpdateRateInSeconds = param_1, (this->UpdateTickerHandle).Object != (FElement *)0x0)
         ) && (pTVar1 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
              pTVar1 != (TReferenceControllerBase<1> *)0x0)) &&
       (0 < (int)pTVar1->SharedReferenceCount)) {
      Enable(this,false);
      Enable(this,true);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1676581561060818768>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                       ,0xb0,"InSeconds >= 0.f");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      return;
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14f1394b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::ShouldCreateSubsystem(UWorldMetricsSubsystem *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = UWorld::IsGameWorld((UWorld *)param_1);
      if ((bVar2) || (param_1[9].field_0x22 == '\x02')) {
        return true;
      }
    }
  }
  return false;
}

// StaticRegisterNativesUWorldMetricsSubsystem @ 14f139550

void __cdecl UWorldMetricsSubsystem::StaticRegisterNativesUWorldMetricsSubsystem(void)

{
  return;
}

// TryRemoveExtension @ 14f139590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldMetricsSubsystem::TryRemoveExtension
          (UWorldMetricsSubsystem *this,TSubclassOf<UWorldMetricsExtension> *param_1)

{
  UObjectBaseUtility *this_00;
  FExtension *pFVar1;
  TObjectPtr<UClass>_u_0 local_res8;
  FString local_18;
  
  local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pFVar1 = TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           ::Find((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&local_res8);
  if ((pFVar1 != (FExtension *)0x0) &&
     (*(int *)&(pFVar1->Owners).Elements.field_0x208 ==
      *(int *)&(pFVar1->Owners).Elements.field_0x22c)) {
    this_00 = (UObjectBaseUtility *)(pFVar1->Instance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)this_00 + 0x2c0))(this_00);
    UObjectBaseUtility::MarkAsGarbage(this_00);
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
    ::Remove((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
              *)&this->Extensions,(TSubclassOf<UWorldMetricsExtension_const_>)&local_res8);
    if (5 < (byte)LogWorldMetrics._0_1_) {
      local_res8 = *(TObjectPtr<UClass>_u_0 *)(*(longlong *)&this_00->field_0x10 + 0x18);
      ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// VerifyMetricReleasedAllExtensions @ 14f139b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldMetricsSubsystem::VerifyMetricReleasedAllExtensions
          (UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  undefined1 *puVar1;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar2;
  ulonglong uVar3;
  uint uVar4;
  UClass *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar11;
  undefined8 *puVar12;
  ForAnyElementType FVar13;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  undefined1 local_178;
  undefined1 local_177 [7];
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  UWorldMetricInterface *local_138;
  FName local_130;
  FName local_128;
  FString local_120;
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *local_110;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> local_d0;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_44 = 0x10;
  puVar1 = &(this->Extensions).field_0x2990;
  local_d0.SecondaryData = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0;
  iStack_168 = 0;
  local_48 = 0;
  local_170 = &this->Extensions;
  iVar8 = *(int *)&(this->Extensions).field_0x29a0;
  uStack_164 = 1;
  local_150 = 0;
  iStack_154 = iStack_168;
  if (iVar8 != 0) {
    puVar18 = *(uint **)&(this->Extensions).field_0x2998;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_150 = 0;
    iStack_168 = 0;
    while (uVar16 == 0) {
      lVar9 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14f139bce;
      uVar16 = puVar18[lVar9 + 1];
    }
    uStack_164 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_164 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_140 = (int)lVar9;
    iStack_154 = local_150 + -1 + local_140;
    if (iVar8 < iStack_154) {
      iStack_154 = iVar8;
    }
  }
LAB_14f139bce:
  uVar16 = *(uint *)&(this->Extensions).field_0x29a0;
  iStack_148 = *(int *)&(this->Extensions).field_0x2988 - *(int *)&(this->Extensions).field_0x29ac;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_154;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar16 >> 5;
  TStack_108._28_4_ = iStack_154;
  TStack_108.BaseBitIndex = local_150;
  uStack_e8 = CONCAT44(uStack_144,iStack_148);
  local_160 = puVar1;
  iStack_14c = iStack_154;
  local_110 = local_170;
  TStack_108.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar8 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Extensions).field_0x29a0;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->Extensions).field_0x2998;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar10 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14f139cd9;
      uVar16 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14f139cd9:
  while( true ) {
    pTVar11 = local_110;
    if (*(int *)&local_110->field_0x2988 - *(int *)&local_110->field_0x29ac != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_178);
    }
    iVar8 = local_48;
    if (((TStack_108.CurrentBitIndex == uVar16) &&
        (TStack_108.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) &&
       (pTVar11 == &this->Extensions)) break;
    if (*(TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
          **)&pTVar11->field_0x2980 !=
        (TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
         *)0x0) {
      pTVar11 = *(TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                  **)&pTVar11->field_0x2980;
    }
    puVar12 = (undefined8 *)(&pTVar11->field_0x0 + (longlong)TStack_108.CurrentBitIndex * 0x298);
    local_138 = param_1;
    if ((*(int *)(puVar12 + 0x43) != *(int *)((longlong)puVar12 + 0x23c)) &&
       (uVar15 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595, uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb,
       iVar8 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               ::RemoveImpl<UObject_const_*>
                         ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)(puVar12 + 2),uVar15 >> 0x10 ^ uVar15,(UObject **)&local_138),
       iVar8 != 0)) {
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UWorldMetricsExtension>_>_>
                             (0x808,&local_d0,&local_44);
      }
      lVar9 = (longlong)local_48;
      FVar14 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
        FVar14 = local_d0.SecondaryData;
      }
      pUVar5 = (UClass *)*puVar12;
      local_48 = local_48 + 1;
      (((TSubclassOf<UWorldMetricsExtension> *)((longlong)FVar14 + lVar9 * 8))->Class).field0_0x0.
      DebugPtr = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if (2 < (byte)LogWorldMetrics._0_1_) {
        local_130 = *(FName *)(puVar12[1] + 0x18);
        ::FName::ToString(&local_130,&local_120);
        local_128.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_128.Number = *(uint *)&param_1->field_0x1c;
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar13.Data = local_120.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_128,&local_e0);
        local_188 = FVar13.Data;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_108);
  }
  FVar14 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)&local_d0;
  if (local_d0.SecondaryData != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
    FVar14 = local_d0.SecondaryData;
  }
  FVar2 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)
          ((longlong)FVar14 + (longlong)local_48 * 8);
  while( true ) {
    if (local_48 != iVar8) {
      `TCheckedPointerIterator<TSubclassOf<UWorldMetricsExtension>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_177);
    }
    if (FVar14 == FVar2) break;
    TryRemoveExtension(this,(TSubclassOf<UWorldMetricsExtension> *)FVar14);
    FVar14 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)((longlong)FVar14 + 8);
  }
  if (local_d0.SecondaryData != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
    FMemory::Free((void *)local_d0.SecondaryData);
  }
  return;
}

// VerifyRemoveOrphanExtensions @ 14f139f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsSubsystem::VerifyRemoveOrphanExtensions(UWorldMetricsSubsystem *this)

{
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *this_00;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar3;
  UObjectBaseUtility *this_01;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar10;
  undefined8 *puVar11;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  TObjectPtr<UClass>_u_0 local_e0;
  FName local_d8;
  UObject *local_d0;
  FString local_c8;
  TArray<TSubclassOf<UWorldMetricsExtension>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (((this->Metrics).ArrayNum == 0) &&
     (this_00 = &this->Extensions,
     *(int *)&(this->Extensions).field_0x2988 != *(int *)&(this->Extensions).field_0x29ac)) {
    local_b8.AllocatorInstance.SecondaryData =
         (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0x10;
    TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
    ::GenerateKeyArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              ((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                *)this_00,&local_b8);
    iVar5 = local_b8.ArrayNum;
    uVar9 = (ulonglong)local_b8.ArrayNum;
    FVar12 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
      FVar12 = local_b8.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)((longlong)FVar12 + uVar9 * 8);
    while( true ) {
      if ((uint)uVar9 != iVar5) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<TSubclassOf<UWorldMetricsExtension>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e8);
      }
      if (FVar12 == FVar1) break;
      TVar2.DebugPtr = *(UClass **)FVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      local_e0.DebugPtr = TVar2.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar2.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
      }
      uVar8 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      iVar7 = TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ::FindIndexByHash<TSubclassOf<UWorldMetricsExtension_const_>_>
                        ((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                          *)this_00,uVar8 >> 0x10 ^ uVar8,
                         (TSubclassOf<UWorldMetricsExtension_const_> *)&local_e0.ObjectPtr);
      if (iVar7 != -1) {
        pTVar3 = *(TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   **)&(this->Extensions).field_0x2980;
        pTVar10 = this_00;
        if (pTVar3 != (TMap<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                       *)0x0) {
          pTVar10 = pTVar3;
        }
        puVar11 = (undefined8 *)(&pTVar10->field_0x0 + (longlong)iVar7 * 0x298 + 8);
        if (&pTVar10->field_0x0 + (longlong)iVar7 * 0x298 == (undefined1 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        if (puVar11 != (undefined8 *)0x0) {
          this_01 = (UObjectBaseUtility *)*puVar11;
          if ((this_01 == (UObjectBaseUtility *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExtensionInstance",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsSubsystem.cpp"
                                 ,0x231,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (2 < (byte)LogWorldMetrics._0_1_) {
            local_d8.ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
            local_d8.Number = *(uint *)&this_01->field_0x1c;
            ::FName::ToString(&local_d8,&local_c8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          (**(code **)(*(longlong *)this_01 + 0x2c0))(this_01);
          UObjectBaseUtility::MarkAsGarbage(this_01);
          local_d0 = *(UObject **)FVar12;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_d0);
          }
          TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
          ::Remove((TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                    *)this_00,(TSubclassOf<UWorldMetricsExtension_const_>)&local_d0);
        }
      }
      uVar9 = (ulonglong)(uint)local_b8.ArrayNum;
      FVar12 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)((longlong)FVar12 + 8);
    }
    TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Reset((TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)this_00);
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

