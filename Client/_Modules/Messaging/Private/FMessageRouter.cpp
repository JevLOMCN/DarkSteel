// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 24

// FMessageRouter @ 142d3d9c0

FMessageRouter * __thiscall FMessageRouter::FMessageRouter(FMessageRouter *this)

{
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMessageRouter *pFVar10;
  FEvent *pFVar11;
  undefined1 *puVar12;
  int iVar13;
  
  this_00 = &this->ActiveSubscriptions;
  *(undefined8 *)&this->ActiveInterceptors = 0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  *(undefined8 *)&(this->ActiveInterceptors).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  *(undefined8 *)&(this->ActiveInterceptors).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveInterceptors).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveInterceptors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveInterceptors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveInterceptors).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveInterceptors).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveInterceptors).field_0x48 = 0;
  *(undefined8 *)&this->ActiveRecipients = 0;
  *(undefined8 *)&(this->ActiveRecipients).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveRecipients).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveRecipients).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveRecipients).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveRecipients).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveRecipients).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveRecipients).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveRecipients).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ActiveSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveSubscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x48 = 0;
  (this->ActiveRegistrationListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRegistrationListeners).ArrayNum = 0;
  (this->ActiveRegistrationListeners).ArrayMax = 0;
  (this->Commands).Head =
       (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
        )0x0;
  aVar8 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar8 = 0;
  (this->Commands).Head = aVar8;
  (this->Commands).Tail = (FNode *)aVar8;
  (this->CurrentTime).Ticks = 0;
  (this->DelayedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedMessages).ArrayNum = 0;
  (this->DelayedMessages).ArrayMax = 0;
  this->DelayedMessagesSequence = 0;
  this->Stopping = (TAtomic<bool>)0x0;
  pTVar9 = ::operator_new(0x250);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    (this->Tracer).Object = (FMessageTracer *)0x10;
    (this->Tracer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMessageTracer___00_SharedPointerInternals__6B_;
    FMessageTracer::FMessageTracer((FMessageTracer *)(pTVar9 + 1));
    (this->Tracer).SharedReferenceCount.ReferenceController = pTVar9;
    (this->Tracer).Object = (FMessageTracer *)(pTVar9 + 1);
    if (((FMessageTracer *)(pTVar9 + 1) == (FMessageTracer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FMessageRouter *)(*pcVar2)();
      return pFVar10;
    }
  }
  this->bAllowDelayedMessaging = false;
  FVar4 = IMessageBus::PATHNAME_All.AssetName;
  uVar6 = ::GetTypeHash(IMessageBus::PATHNAME_All.AssetName.ComparisonIndex.Value);
  FVar3 = IMessageBus::PATHNAME_All.PackageName;
  uVar7 = ::GetTypeHash(IMessageBus::PATHNAME_All.PackageName.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar3.Number;
  uVar7 = uVar7 * 0x40 + FVar4.Number + uVar6 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7;
  if (*(int *)&(this->ActiveSubscriptions).field_0x8 !=
      *(int *)&(this->ActiveSubscriptions).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ActiveSubscriptions).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ActiveSubscriptions).field_0x38;
    }
    iVar13 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->ActiveSubscriptions).field_0x48 - 1U & uVar7) * 4);
    if (iVar13 != -1) {
      do {
        lVar1 = *(longlong *)this_00 + (longlong)iVar13 * 0x28;
        if ((*(FName *)(*(longlong *)this_00 + (longlong)iVar13 * 0x28) ==
             IMessageBus::PATHNAME_All.PackageName) &&
           (*(FName *)(lVar1 + 8) == IMessageBus::PATHNAME_All.AssetName)) {
          if ((iVar13 != -1) && (lVar1 != 0)) goto LAB_142d3dc40;
          break;
        }
        iVar13 = *(int *)(lVar1 + 0x20);
      } while (iVar13 != -1);
    }
  }
  TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  ::EmplaceByHash<FTopLevelAssetPath_const_&>
            ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
              *)this_00,uVar7,&IMessageBus::PATHNAME_All);
LAB_142d3dc40:
  pFVar11 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->WorkEvent = pFVar11;
  FConfigCacheIni::GetBool
            (GConfig,L"Messaging",L"bAllowDelayedMessaging",&this->bAllowDelayedMessaging,
             &GEngineIni);
  return this;
}

// ~FMessageRouter @ 142d3edc0

void __thiscall FMessageRouter::~FMessageRouter(FMessageRouter *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WorkEvent);
  pTVar1 = (this->Tracer).SharedReferenceCount.ReferenceController;
  this->WorkEvent = (FEvent *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  DestructItems<FMessageRouter::FDelayedMessage,int>
            ((FDelayedMessage *)(this->DelayedMessages).AllocatorInstance.Data,
             (this->DelayedMessages).ArrayNum);
  pFVar2 = (this->DelayedMessages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  aVar3 = ((this->Commands).Tail)->Next;
  FMemory::Free((this->Commands).Tail);
  while (aVar3 != (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
                   )0x0) {
    (this->Commands).Tail = (FNode *)aVar3;
    aVar3 = *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
              *)aVar3;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&((this->Commands).Tail)->Value);
    FMemory::Free((this->Commands).Tail);
  }
  DestructItems<TWeakPtr<IBusListener,1>,int>
            ((TWeakPtr<IBusListener,1> *)(this->ActiveRegistrationListeners).AllocatorInstance.Data,
             (this->ActiveRegistrationListeners).ArrayNum);
  pFVar2 = (this->ActiveRegistrationListeners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveSubscriptions).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveSubscriptions);
  *(undefined4 *)&(this->ActiveRecipients).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveRecipients).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveRecipients);
  *(undefined4 *)&(this->ActiveInterceptors).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveInterceptors).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveInterceptors);
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// CalculateWaitTime @ 142d41ec0

FTimespan __thiscall FMessageRouter::CalculateWaitTime(FMessageRouter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimespan FVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *in_RDX;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = 0;
  auVar7._0_8_ = __real_412e848100000000;
  auVar7 = roundpd(auVar7,auVar7,1);
  if (0 < (this->DelayedMessages).ArrayNum) {
    pFVar1 = (this->DelayedMessages).AllocatorInstance.Data;
    if (*(longlong *)pFVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.Ticks = (*pcVar2)();
        return (FTimespan)FVar4.Ticks;
      }
    }
    plVar5 = (longlong *)(**(code **)(**(longlong **)pFVar1 + 0x68))();
    lVar6 = *plVar5 - (this->CurrentTime).Ticks;
    if (lVar6 < (longlong)auVar7._0_8_) {
      *in_RDX = lVar6;
      return (FTimespan)(long64)in_RDX;
    }
  }
  *in_RDX = (longlong)auVar7._0_8_;
  return (FTimespan)(long64)in_RDX;
}

// DispatchMessage @ 142d44380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::DispatchMessage(FMessageRouter *this,TSharedRef<IMessageContext,1> *param_1)

{
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TSharedRef<FMessageTracer,1> *pTVar1;
  IMessageContext *pIVar2;
  FMessageTracer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr *pFVar12;
  longlong *plVar13;
  FGuid *pFVar14;
  FTopLevelAssetPath *pFVar15;
  UStruct *this_01;
  TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>
  *pTVar16;
  TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  TGraphTask<FMessageDispatchTask> *this_02;
  undefined1 *puVar18;
  ForAnyElementType FVar19;
  FGuid *pFVar20;
  int iVar21;
  TSharedPtr<IMessageReceiver,1> *pTVar22;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> local_138;
  FTopLevelAssetPath local_128;
  Type local_118 [2];
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FConstructor local_b0;
  TSharedRef<IMessageReceiver,1> local_a8;
  TSharedRef<IMessageReceiver,1> local_98;
  FString local_88;
  FString local_78;
  FTopLevelAssetPath local_68;
  FTopLevelAssetPath local_58;
  
  pIVar2 = param_1->Object;
  lVar11 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar11 == 0) {
    return;
  }
  pFVar12 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
  bVar8 = FWeakObjectPtr::IsValid(pFVar12,false,true);
  if (!bVar8) {
    return;
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  lVar11 = (**(code **)((longlong)*param_1->Object + 0x30))();
  uVar9 = *(uint *)(lVar11 + 8);
  local_res18[0] = uVar9;
  if (0 < (int)uVar9) {
    if (5 < (byte)LogMessaging._0_1_) {
      plVar13 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x30))();
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar8 = true;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      lVar11 = plVar13[1];
      pFVar14 = (FGuid *)*plVar13;
      pFVar20 = pFVar14 + (int)lVar11;
      while( true ) {
        if ((int)plVar13[1] != (int)lVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        uVar9 = local_res18[0];
        if (pFVar14 == pFVar20) break;
        if (bVar8) {
          bVar8 = false;
        }
        else {
          ::FString::AppendChars(&local_110,L"+",1);
        }
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        FGuid::AppendString(pFVar14,&local_f0,Digits);
        iVar21 = local_f0.Data.ArrayNum + -1;
        if (local_f0.Data.ArrayNum == 0) {
          iVar21 = 0;
        }
        ::FString::AppendChars(&local_110,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar21);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        pFVar14 = pFVar14 + 1;
      }
      if (5 < (byte)LogMessaging._0_1_) {
        pFVar14 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        FGuid::AppendString(pFVar14,&local_e0,Digits);
        pFVar15 = IMessageContext::GetMessageTypePathName(param_1->Object,&local_68);
        FTopLevelAssetPath::ToString(pFVar15,&local_88);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    FilterRecipients(this,param_1,&local_138);
    if ((local_138.ArrayNum < (int)uVar9) && (5 < (byte)LogMessaging._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    }
    goto LAB_142d44955;
  }
  pIVar2 = param_1->Object;
  this_00 = &this->ActiveSubscriptions;
  lVar11 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar11 == 0) {
LAB_142d44646:
    local_128.PackageName.ComparisonIndex.Value = 0;
    local_128.PackageName.Number = 0;
    local_128.AssetName.ComparisonIndex.Value = 0;
    local_128.AssetName.Number = 0;
  }
  else {
    pFVar12 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar8 = FWeakObjectPtr::IsValid(pFVar12,false,true);
    if (!bVar8) goto LAB_142d44646;
    pFVar12 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar12);
    UStruct::GetStructPathName(this_01,&local_128);
  }
  FVar7 = local_128.AssetName;
  uVar9 = ::GetTypeHash(local_128.AssetName.ComparisonIndex.Value);
  FVar6 = local_128.PackageName;
  uVar10 = ::GetTypeHash(local_128.PackageName.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar6.Number;
  uVar10 = uVar10 * 0x40 + uVar9 + FVar7.Number + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  pTVar16 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindByHash<FTopLevelAssetPath>
                      ((TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00,uVar10,&local_128);
  if (pTVar16 ==
      (TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    pTVar17 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<FTopLevelAssetPath>
                        ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,uVar10,&local_128);
  }
  else {
    pTVar17 = (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *)
              &pTVar16->field_0x10;
  }
  FilterSubscriptions(this,pTVar17,param_1,&local_138);
  FVar7 = IMessageBus::PATHNAME_All.AssetName;
  uVar9 = ::GetTypeHash(IMessageBus::PATHNAME_All.AssetName.ComparisonIndex.Value);
  FVar6 = IMessageBus::PATHNAME_All.PackageName;
  uVar10 = ::GetTypeHash(IMessageBus::PATHNAME_All.PackageName.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar6.Number;
  uVar10 = uVar10 * 0x40 + -0x61c88647 + FVar7.Number + uVar9 + (uVar10 >> 2) ^ uVar10;
  if (*(int *)&(this->ActiveSubscriptions).field_0x8 !=
      *(int *)&(this->ActiveSubscriptions).field_0x34) {
    puVar18 = *(undefined1 **)&(this->ActiveSubscriptions).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->ActiveSubscriptions).field_0x38;
    }
    iVar21 = *(int *)(puVar18 +
                     (ulonglong)(*(int *)&(this->ActiveSubscriptions).field_0x48 - 1U & uVar10) * 4)
    ;
    if (iVar21 != -1) {
      do {
        lVar11 = *(longlong *)&this_00->field_0x0 + (longlong)iVar21 * 0x28;
        if ((*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar21 * 0x28) ==
             IMessageBus::PATHNAME_All.PackageName) &&
           (*(FName *)(lVar11 + 8) == IMessageBus::PATHNAME_All.AssetName)) {
          if ((iVar21 != -1) && (lVar11 != 0)) {
            pTVar17 = (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *)
                      (lVar11 + 0x10);
            goto LAB_142d44787;
          }
          break;
        }
        iVar21 = *(int *)(lVar11 + 0x20);
      } while (iVar21 != -1);
    }
  }
  pTVar17 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
            ::EmplaceByHash<FTopLevelAssetPath_const_&>
                      ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_00,uVar10,&IMessageBus::PATHNAME_All);
LAB_142d44787:
  FilterSubscriptions(this,pTVar17,param_1,&local_138);
  if (5 < (byte)LogMessaging._0_1_) {
    plVar13 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x30))();
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar8 = true;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    lVar11 = plVar13[1];
    pFVar14 = (FGuid *)*plVar13;
    pFVar20 = pFVar14 + (int)lVar11;
    while( true ) {
      if ((int)plVar13[1] != (int)lVar11) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar14 == pFVar20) break;
      if (bVar8) {
        bVar8 = false;
      }
      else {
        ::FString::AppendChars(&local_100,L"+",1);
      }
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar14,&local_d0,Digits);
      iVar21 = local_d0.Data.ArrayNum + -1;
      if (local_d0.Data.ArrayNum == 0) {
        iVar21 = 0;
      }
      ::FString::AppendChars(&local_100,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar21);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      pFVar14 = pFVar14 + 1;
    }
    if (5 < (byte)LogMessaging._0_1_) {
      pFVar14 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar14,&local_c0,Digits);
      pFVar15 = IMessageContext::GetMessageTypePathName(param_1->Object,&local_58);
      FTopLevelAssetPath::ToString(pFVar15,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
LAB_142d44955:
  iVar21 = local_138.ArrayNum;
  pTVar22 = (TSharedPtr<IMessageReceiver,1> *)
            (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 0x10);
  FVar19.Data = local_138.AllocatorInstance.Data;
  do {
    while( true ) {
      while( true ) {
        if (local_138.ArrayNum != iVar21) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<IMessageReceiver,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if ((TSharedPtr<IMessageReceiver,1> *)FVar19.Data == pTVar22) {
          DestructItems<TSharedPtr<IMessageReceiver,1>,int>
                    ((TSharedPtr<IMessageReceiver,1> *)local_138.AllocatorInstance.Data,
                     local_138.ArrayNum);
          if ((TSharedPtr<IMessageReceiver,1> *)local_138.AllocatorInstance.Data ==
              (TSharedPtr<IMessageReceiver,1> *)0x0) {
            return;
          }
          FMemory::Free(local_138.AllocatorInstance.Data);
          return;
        }
        if ((((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_118[0] = (**(code **)((longlong)
                                    *((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object + 0x10)
                       )();
        pTVar1 = &this->Tracer;
        if (local_118[0] != AnyNormalThreadNormalTask) break;
        pFVar3 = pTVar1->Object;
        if ((((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->SharedReferenceCount).
                 ReferenceController;
        local_a8.Object = ((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.SharedReferenceCount.ReferenceController = pTVar4;
        if ((local_a8.Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FMessageTracer::TraceDispatchedMessage(pFVar3,param_1,&local_a8,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if ((((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)((longlong)*((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object + 0x20))
                  (((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object,param_1);
        pFVar3 = pTVar1->Object;
        if ((((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->SharedReferenceCount).
                 ReferenceController;
        local_98.Object = ((TSharedPtr<IMessageReceiver,1> *)FVar19.Data)->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.SharedReferenceCount.ReferenceController = pTVar4;
        if ((local_98.Object == (IMessageReceiver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FMessageTracer::TraceHandledMessage(pFVar3,param_1,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        FVar19.Data = FVar19.Data + 0x10;
      }
      local_b0.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      this_02 = TGraphTask<FMessageDispatchTask>::FConstructor::
                ConstructAndHoldImpl<enum_ENamedThreads::Type_&,TSharedRef<IMessageContext,1>_const_&,TSharedPtr<IMessageReceiver,1>_&,TSharedRef<FMessageTracer,1>_&>
                          (&local_b0,local_118,param_1,(TSharedPtr<IMessageReceiver,1> *)FVar19.Data
                           ,pTVar1);
      if (this_02 != (TGraphTask<FMessageDispatchTask> *)0x0) break;
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x110);
LAB_142d44ba8:
      FVar19.Data = FVar19.Data + 0x10;
    }
    LOCK();
    *(int *)&this_02->_padding_ = (int)this_02->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_02,0x110);
    LOCK();
    plVar13 = &this_02->_padding_;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) goto LAB_142d44ba8;
    (**(code **)this_02->_padding_)(this_02,1);
    FVar19.Data = FVar19.Data + 0x10;
  } while( true );
}

// Exit @ 142d45f50

void __thiscall FMessageRouter::Exit(FMessageRouter *this)

{
  undefined1 *puVar1;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *pTVar7;
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *pTVar8;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  TWeakPtr<IMessageReceiver,1> *pTVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> local_158;
  ulonglong local_148;
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *local_100;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar14 = 0;
  puVar1 = &(this->ActiveRecipients).field_0x10;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_140 = &this->ActiveRecipients;
  iVar4 = *(int *)&(this->ActiveRecipients).field_0x28;
  iVar17 = 0;
  local_148 = 1;
  uStack_134 = 1;
  iStack_124 = iVar17;
  iStack_138 = iVar17;
  local_120 = iVar17;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ActiveRecipients).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uStack_134 = *puVar20;
    local_120 = iVar14;
    iStack_138 = iVar14;
    while (uStack_134 == 0) {
      lVar12 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_134 = 1;
      iStack_124 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_142d4600e;
      uStack_134 = puVar20[lVar12 + 1];
    }
    uStack_134 = -uStack_134 & uStack_134;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_110 = (int)lVar12;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar4 < iStack_124) {
      iStack_124 = iVar4;
    }
  }
LAB_142d4600e:
  uVar16 = *(uint *)&(this->ActiveRecipients).field_0x28;
  iStack_118 = *(int *)&(this->ActiveRecipients).field_0x8 -
               *(int *)&(this->ActiveRecipients).field_0x34;
  uVar21 = uVar16 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_130 = puVar1;
  local_100 = local_140;
  local_c8 = local_140;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_100;
  uVar5 = *(uint *)&(this->ActiveRecipients).field_0x28;
  if (uVar16 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveRecipients).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar21 = uVar21 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142d46130;
      uVar16 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_10c = (int)lVar12;
    uVar16 = local_10c + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_142d46130:
  while( true ) {
    pTVar8 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar16) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<IMessageReceiver,1>_const_&>
              (&local_158,
               (TWeakPtr<IMessageReceiver,1> *)
               (*(longlong *)pTVar8 + ((longlong)TStack_c0.CurrentBitIndex * 5 + 2) * 8));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_d8 = 0;
  puVar1 = &(this->ActiveSubscriptions).field_0x10;
  iVar4 = *(int *)&(this->ActiveSubscriptions).field_0x28;
  pTVar2 = &this->ActiveSubscriptions;
  iStack_dc = local_d8;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ActiveSubscriptions).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    local_d8 = iVar14;
    iVar17 = iVar14;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      local_d8 = local_d8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142d46221;
      uVar16 = puVar20[lVar12 + 1];
    }
    local_148 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = local_148 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_108 = (int)lVar12;
    iStack_dc = local_d8 + -1 + local_108;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_142d46221:
  uStack_ec = (undefined4)local_148;
  iStack_d4 = iStack_124;
  iStack_d0 = *(int *)&(this->ActiveSubscriptions).field_0x8 -
              *(int *)&(this->ActiveSubscriptions).field_0x34;
  uVar16 = *(uint *)&(this->ActiveSubscriptions).field_0x28;
  uStack_e0 = 0xffffffff;
  uVar21 = uVar16 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_ec,iVar17);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_90._28_4_ = iStack_124;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = pTVar2;
  iStack_f0 = iVar17;
  local_e8 = puVar1;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->ActiveSubscriptions).field_0x28;
  if (uVar16 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveSubscriptions).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar21 = uVar21 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142d46331;
      uVar16 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_104 = (int)lVar12;
    uVar16 = local_104 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_142d46331:
  while( true ) {
    pTVar9 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar16) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar12 = *(longlong *)pTVar9;
    iVar4 = *(int *)(lVar12 + 0x18 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    lVar12 = lVar12 + (longlong)TStack_90.CurrentBitIndex * 0x28;
    plVar15 = *(longlong **)(lVar12 + 0x10);
    plVar18 = plVar15 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)(lVar12 + 0x18) != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<IMessageSubscription,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (plVar15 == plVar18) break;
      if ((*plVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar11 = (TWeakPtr<IMessageReceiver,1> *)(**(code **)(*(longlong *)*plVar15 + 0x20))();
      TArray<TWeakPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakPtr<IMessageReceiver,1>_const_&>(&local_158,pTVar11);
      plVar15 = plVar15 + 2;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  DestructItems<TWeakPtr<IMessageReceiver,1>,int>
            ((TWeakPtr<IMessageReceiver,1> *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
  if ((TWeakPtr<IMessageReceiver,1> *)local_158.AllocatorInstance.Data !=
      (TWeakPtr<IMessageReceiver,1> *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// FilterRecipients @ 142d46450

/* WARNING: Removing unreachable block (ram,0x000142d465a8) */
/* WARNING: Removing unreachable block (ram,0x000142d465b7) */
/* WARNING: Removing unreachable block (ram,0x000142d465c2) */

void __thiscall
FMessageRouter::FilterRecipients
          (FMessageRouter *this,TSharedRef<IMessageContext,1> *param_1,
          TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
  *this_00;
  atomic<int> *paVar1;
  longlong lVar2;
  atomic<int> aVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  FMessageAddress *pFVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  atomic<int> aVar13;
  ulonglong uVar14;
  TReferenceControllerBase<1> *pTVar15;
  byte *pbVar16;
  IMessageReceiver *pIVar17;
  FMessageAddress *pFVar18;
  bool bVar19;
  undefined1 local_res20 [8];
  undefined2 local_88;
  undefined2 local_86;
  undefined1 local_84;
  byte local_83 [3];
  undefined2 local_80;
  undefined2 local_7e;
  TSharedPtr<IMessageReceiver,1> local_78;
  uint local_68;
  FMessageAddress *local_60;
  longlong *local_58;
  
  local_80 = 0x201;
  local_88 = 0x201;
  local_7e = 2;
  local_86 = 2;
  local_58 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x30))();
  bVar8 = local_86._1_1_;
  cVar7 = (char)local_86;
  bVar6 = local_88._1_1_;
  local_68 = *(uint *)(local_58 + 1);
  uVar14 = (ulonglong)(int)local_68;
  pFVar18 = (FMessageAddress *)*local_58;
  cVar5 = (char)local_88;
  local_60 = pFVar18 + uVar14;
  do {
    pFVar9 = local_60;
    if ((int)local_58[1] != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar18 == pFVar9) {
      return;
    }
    this_00 = &this->ActiveRecipients;
    uVar11 = FCrc::MemCrc_DEPRECATED(pFVar18,0x10,0);
    iVar12 = TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMessageAddress>
                       ((TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
                         *)this_00,uVar11,pFVar18);
    if ((iVar12 == -1) ||
       (lVar2 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x28, lVar2 == 0)) {
      pIVar17 = (IMessageReceiver *)0x0;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pIVar17 = *(IMessageReceiver **)(lVar2 + 0x10);
      pTVar15 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    local_78.Object = (IMessageReceiver *)0x0;
    local_78.SharedReferenceCount.ReferenceController = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar15->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar13 = pTVar15->SharedReferenceCount;
        bVar19 = aVar3 == aVar13;
        if (bVar19) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar13 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar13;
      } while (!bVar19);
      LOCK();
      paVar1 = &pTVar15->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
      }
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = pIVar17;
      }
    }
    if (local_78.Object == (IMessageReceiver *)0x0) {
      if (*(int *)&(this->ActiveRecipients).field_0x8 !=
          *(int *)&(this->ActiveRecipients).field_0x34) {
        uVar11 = FCrc::MemCrc_DEPRECATED(pFVar18,0x10,0);
        TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FMessageAddress>
                  ((TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
                    *)this_00,uVar11,pFVar18);
      }
    }
    else {
      if ((local_78.Object == (IMessageReceiver *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar10 = (**(code **)((longlong)*local_78.Object + 0x18))(local_78.Object);
      if (cVar10 == '\0') {
        local_83[0] = (**(code **)((longlong)*param_1->Object + 0x38))();
        local_84 = 1;
        cVar10 = cVar5;
        if (cVar5 == '\x02') {
          pbVar16 = (byte *)((longlong)&local_88 + 1);
LAB_142d4666d:
          if (cVar10 != cVar5) goto LAB_142d46707;
        }
        else {
          if (local_83[0] <= bVar6) {
            if ((local_83[0] < bVar6) ||
               (pbVar16 = (byte *)((longlong)&local_88 + 1), cVar5 != '\x01')) {
              pbVar16 = local_83;
            }
            cVar10 = '\x01';
            goto LAB_142d4666d;
          }
          pbVar16 = (byte *)((longlong)&local_88 + 1);
        }
        if ((cVar10 != '\x02') && (*pbVar16 != bVar6)) goto LAB_142d46707;
        local_83[1] = 1;
        local_83[2] = local_83[0];
        cVar10 = cVar7;
        if (cVar7 == '\x02') {
          pbVar16 = (byte *)((longlong)&local_86 + 1);
LAB_142d466b4:
          if (cVar10 != cVar7) goto LAB_142d46707;
        }
        else {
          if (bVar8 <= local_83[0]) {
            if ((bVar8 < local_83[0]) ||
               (pbVar16 = (byte *)((longlong)&local_86 + 1), cVar7 != '\x01')) {
              pbVar16 = local_83 + 2;
            }
            cVar10 = '\x01';
            goto LAB_142d466b4;
          }
          pbVar16 = (byte *)((longlong)&local_86 + 1);
        }
        if ((cVar10 != '\x02') && (*pbVar16 != bVar8)) goto LAB_142d46707;
      }
      TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedPtr<IMessageReceiver,1>_const_&>(param_2,&local_78);
    }
LAB_142d46707:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    pFVar18 = pFVar18 + 1;
    uVar14 = (ulonglong)local_68;
  } while( true );
}

// FilterSubscriptions @ 142d46740

void __thiscall
FMessageRouter::FilterSubscriptions
          (FMessageRouter *this,
          TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<IMessageContext,1> *param_2,
          TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  atomic<int> aVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  uint uVar16;
  longlong lVar17;
  char local_58;
  byte local_57;
  char local_56;
  byte local_55;
  TSharedPtr<IMessageReceiver,1> local_50;
  
  bVar6 = (**(code **)((longlong)*param_2->Object + 0x38))();
  iVar11 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar11) {
    lVar17 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar16 < iVar11) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar17 + 8);
      plVar3 = *(longlong **)(pFVar1 + lVar17);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar3 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar8 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (cVar8 != '\0') {
        if ((plVar3 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar13 = (char *)(**(code **)(*plVar3 + 0x18))(plVar3);
        local_58 = '\x01';
        local_57 = bVar6;
        if (*pcVar13 != '\x02') {
          pcVar15 = pcVar13;
          if (bVar6 <= (byte)pcVar13[1]) {
            if (bVar6 < (byte)pcVar13[1]) {
              pcVar15 = &local_58;
            }
            if (*pcVar13 != '\x01') goto LAB_142d46a56;
          }
          if (pcVar15[1] != pcVar13[1]) goto LAB_142d46a56;
        }
        pcVar15 = pcVar13 + 2;
        local_56 = '\x01';
        local_55 = bVar6;
        if (pcVar13[2] != '\x02') {
          if ((byte)pcVar13[3] <= bVar6) {
            if ((byte)pcVar13[3] < bVar6) {
              pcVar15 = &local_56;
            }
            if (pcVar13[2] != '\x01') goto LAB_142d46a56;
          }
          if (pcVar15[1] != pcVar13[3]) goto LAB_142d46a56;
        }
        if ((plVar3 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar3 + 0x20))();
        local_50.Object = (IMessageReceiver *)0x0;
        local_50.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar14[1];
        if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar5 = (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar5 == (atomic<int>)0x0) {
              local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_142d46967;
            }
            LOCK();
            aVar10 = (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar7 = aVar5 == aVar10;
            if (bVar7) {
              (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar5 + 1);
              aVar10 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar10;
          } while (!bVar7);
          if (local_50.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_50.Object = (IMessageReceiver *)*puVar14;
          }
        }
LAB_142d46967:
        if (local_50.Object == (IMessageReceiver *)0x0) {
          uVar9 = 0;
          if ((int)uVar16 < param_1->ArrayNum) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (param_1,uVar16);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          uVar16 = uVar16 - 1;
          lVar17 = lVar17 + -0x10;
        }
        else {
          if (bVar6 == 0) {
            if ((local_50.Object == (IMessageReceiver *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (**(code **)((longlong)*local_50.Object + 0x10))();
            iVar12 = (**(code **)((longlong)*param_2->Object + 0x58))();
            if (iVar11 != iVar12) goto LAB_142d46a4c;
          }
          TArray<TSharedPtr<IMessageReceiver,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedPtr<IMessageReceiver,1>_const_&>(param_3,&local_50);
        }
LAB_142d46a4c:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.SharedReferenceCount.ReferenceController);
      }
LAB_142d46a56:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar11 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar16 < iVar11);
  }
  return;
}

// GetSingleThreadInterface @ 142d47b70

FSingleThreadRunnable * __thiscall FMessageRouter::GetSingleThreadInterface(FMessageRouter *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FMessageRouter *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// HandleAddInterceptor @ 142d47f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleAddInterceptor
          (FMessageRouter *this,TSharedRef<IMessageInterceptor,1> *param_1,
          FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  FName FVar3;
  FName FVar4;
  FMessageTracer *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  IMessageInterceptor *pIVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  FName *this_00;
  TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *this_01;
  TNode *pTVar12;
  longlong *plVar13;
  atomic<int> *paVar14;
  undefined1 auStack_d8 [32];
  LARGE_INTEGER local_b8;
  TReferenceControllerBase<1> *local_b0;
  FString local_a8;
  FString local_98;
  code *local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (5 < (byte)LogMessaging._0_1_) {
    FTopLevelAssetPath::ToString(param_2,&local_98);
    this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,&local_b8);
    ::FName::ToString(this_00,&local_a8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  FVar3 = param_2->AssetName;
  uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  FVar4 = param_2->PackageName;
  uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar4.Number;
  uVar10 = uVar10 * 0x40 + uVar9 + FVar3.Number + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  pTVar11 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindByHash<FTopLevelAssetPath>
                      ((TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ActiveInterceptors,uVar10,param_2);
  if (pTVar11 ==
      (TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    this_01 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<FTopLevelAssetPath_const_&>
                        ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ActiveInterceptors,uVar10,param_2);
  }
  else {
    this_01 = (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *)
              &pTVar11->field_0x10;
  }
  local_b8.s = (_struct_19)param_1->Object;
  local_b0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSharedPtr<IMessageInterceptor,1>_>
            (this_01,(TSharedPtr<IMessageInterceptor,1> *)&local_b8.s);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  pFVar5 = (this->Tracer).Object;
  QueryPerformanceCounter(&local_b8);
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar1 = &pFVar5->Traces;
  pIVar7 = param_1->Object;
  dVar8 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar6->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  local_88 = (code *)0x0;
  local_60 = FMemory::Malloc(0x28,8);
  local_60[1] = (longlong)pFVar5;
  local_60[2] = (longlong)pIVar7;
  *local_60 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_60[3] = (longlong)pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  local_60[4] = (longlong)dVar8;
  if (local_60 != (longlong *)&DAT_fffffffffffffff8) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,void>::
               Call;
  }
  pTVar12 = ::operator_new(0x40);
  if (pTVar12 != (TNode *)0x0) {
    pTVar12->NextNode = (TNode *)0x0;
    *(code **)&pTVar12->Item = local_88;
    *(longlong **)&(pTVar12->Item).field_0x28 = local_60;
    local_60 = (longlong *)0x0;
    *(longlong *)&(pTVar12->Item).field_0x10 = local_78;
    *(undefined8 *)&(pTVar12->Item).field_0x18 = uStack_70;
    *(undefined8 *)&(pTVar12->Item).field_0x20 = local_68;
    if (*(longlong *)&pTVar12->Item != 0) {
      local_88 = (code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar12;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar12;
    UNLOCK();
  }
  if (local_88 != (code *)0x0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleAddListener @ 142d48230

void __thiscall
FMessageRouter::HandleAddListener(FMessageRouter *this,TWeakPtr<IBusListener,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakPtr<IBusListener,1>_const_&>(&this->ActiveRegistrationListeners,param_1);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142d4826a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// HandleAddRecipient @ 142d48280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleAddRecipient
          (FMessageRouter *this,FMessageAddress *param_1,TWeakPtr<IMessageReceiver,1> *param_2)

{
  atomic<int> *paVar1;
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar2;
  atomic<int> aVar3;
  TNode *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMessageTracer *pFVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  atomic<int> aVar11;
  uint uVar12;
  FName *this_00;
  TWeakPtr<IMessageReceiver,1> *pTVar13;
  TNode *pTVar14;
  longlong *plVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  FString local_d8;
  LARGE_INTEGER local_c8;
  FMessageRouter *local_c0;
  TWeakPtr<IMessageReceiver,1> *local_b8;
  FString local_b0;
  code *local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar17 = pTVar16;
  local_c0 = this;
  local_b8 = param_2;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_142d4858b;
      LOCK();
      aVar11 = pTVar5->SharedReferenceCount;
      bVar18 = aVar3 == aVar11;
      if (bVar18) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar11 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar11;
    } while (!bVar18);
    pTVar17 = (TReferenceControllerBase<1> *)param_2->Object;
  }
  pTVar16 = pTVar5;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    if (5 < (byte)LogMessaging._0_1_) {
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->UniqueId,&local_d8,Digits);
      this_00 = (FName *)(**(code **)pTVar17->_padding_)(pTVar17,&local_c8);
      ::FName::ToString(this_00,&local_b0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
    pTVar13 = TMapBase<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
              ::FindOrAddImpl<FMessageAddress_const_&>
                        ((TMapBase<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
                          *)&this->ActiveRecipients,uVar12,param_1);
    pTVar13->Object = (IMessageReceiver *)pTVar17;
    if (pTVar5 != (pTVar13->WeakReferenceCount).ReferenceController) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (pTVar13->WeakReferenceCount).ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      (pTVar13->WeakReferenceCount).ReferenceController = pTVar5;
    }
    pFVar7 = (this->Tracer).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    QueryPerformanceCounter(&local_c8);
    pTVar2 = &pFVar7->Traces;
    lVar9 = *(longlong *)&param_1->UniqueId;
    lVar10 = *(longlong *)&(param_1->UniqueId).C;
    dVar8 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98 = (code *)0x0;
    local_70 = FMemory::Malloc(0x38,8);
    local_70[1] = (longlong)pFVar7;
    *local_70 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    local_70[2] = lVar9;
    local_70[3] = lVar10;
    local_70[4] = (longlong)pTVar17;
    local_70[5] = (longlong)pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_70[6] = (longlong)dVar8;
    if (local_70 != (longlong *)&DAT_fffffffffffffff8) {
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,void>::
                 Call;
    }
    pTVar14 = ::operator_new(0x40);
    if (pTVar14 != (TNode *)0x0) {
      pTVar14->NextNode = (TNode *)0x0;
      *(code **)&pTVar14->Item = local_98;
      *(longlong **)&(pTVar14->Item).field_0x28 = local_70;
      local_70 = (longlong *)0x0;
      *(longlong *)&(pTVar14->Item).field_0x10 = local_88;
      *(undefined8 *)&(pTVar14->Item).field_0x18 = uStack_80;
      *(undefined8 *)&(pTVar14->Item).field_0x20 = local_78;
      if (*(longlong *)&pTVar14->Item != 0) {
        local_98 = (code *)0x0;
      }
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar4 = pTVar2->Head;
      pTVar2->Head = pTVar14;
      UNLOCK();
      if (((ulonglong)pTVar4 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar4->NextNode = pTVar14;
      UNLOCK();
    }
    if (local_98 != (code *)0x0) {
      plVar15 = &local_88;
      if (local_70 != (longlong *)0x0) {
        plVar15 = local_70;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    NotifyRegistration(local_c0,param_1,Registered);
  }
LAB_142d4858b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  pTVar5 = (local_b8->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// HandleAddSubscriber @ 142d48600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleAddSubscriber
          (FMessageRouter *this,TSharedRef<IMessageSubscription,1> *param_1)

{
  TNode *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FName FVar4;
  undefined8 *puVar5;
  FMessageTracer *pFVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  FTopLevelAssetPath *pFVar12;
  TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  FName *this_00;
  TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *this_01;
  TNode *pTVar14;
  undefined ***pppuVar15;
  TReferenceControllerBase<1> *pTVar16;
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  LARGE_INTEGER local_b8;
  TReferenceControllerBase<1> *local_b0;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [16];
  code *local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x20))();
  pTVar2 = (TReferenceControllerBase<1> *)plVar11[1];
  pTVar16 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar2->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (aVar7 == (atomic<int>)0x0) goto LAB_142d48661;
      LOCK();
      aVar8 = pTVar2->SharedReferenceCount;
      bVar18 = aVar7 == aVar8;
      if (bVar18) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar18);
    puVar5 = (undefined8 *)*plVar11;
    pTVar16 = pTVar2;
    if ((puVar5 != (undefined8 *)0x0) && (5 < (byte)LogMessaging._0_1_)) {
      pFVar12 = (FTopLevelAssetPath *)
                (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,local_88);
      FTopLevelAssetPath::ToString(pFVar12,&local_98);
      this_00 = (FName *)(**(code **)*puVar5)(puVar5,&local_b8);
      ::FName::ToString(this_00,&local_a8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142d48661:
  pFVar12 = (FTopLevelAssetPath *)
            (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,local_88);
  FVar3 = pFVar12->AssetName;
  uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  FVar4 = pFVar12->PackageName;
  uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar4.Number;
  uVar10 = uVar10 * 0x40 + uVar9 + FVar3.Number + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  pTVar13 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindByHash<FTopLevelAssetPath>
                      ((TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ActiveSubscriptions,uVar10,pFVar12);
  if (pTVar13 ==
      (TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    this_01 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<FTopLevelAssetPath>
                        ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ActiveSubscriptions,uVar10,pFVar12);
  }
  else {
    this_01 = (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *)
              &pTVar13->field_0x10;
  }
  local_b8.s = (_struct_19)param_1->Object;
  local_b0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSharedPtr<IMessageSubscription,1>_>
            (this_01,(TSharedPtr<IMessageSubscription,1> *)&local_b8.s);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  pFVar6 = (this->Tracer).Object;
  if (pFVar6->Running != false) {
    QueryPerformanceCounter(&local_b8);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_50 = (undefined ***)0x0;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,void>::
               Call;
    pTVar17 = &pFVar6->Traces;
    pTVar14 = ::operator_new(0x40);
    if (pTVar14 != (TNode *)0x0) {
      pTVar14->NextNode = (TNode *)0x0;
      *(code **)&pTVar14->Item = local_78;
      *(undefined ****)&(pTVar14->Item).field_0x28 = local_50;
      *(undefined ***)&(pTVar14->Item).field_0x10 = local_68;
      *(undefined8 *)&(pTVar14->Item).field_0x18 = uStack_60;
      *(undefined8 *)&(pTVar14->Item).field_0x20 = local_58;
      if (*(longlong *)&pTVar14->Item != 0) {
        local_78 = (code *)0x0;
      }
      if (((ulonglong)pTVar17 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar1 = pTVar17->Head;
      pTVar17->Head = pTVar14;
      UNLOCK();
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar1->NextNode = pTVar14;
      UNLOCK();
    }
    if (local_78 != (code *)0x0) {
      pppuVar15 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar15 = local_50;
      }
      (*(code *)(*pppuVar15)[2])();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleRemoveInterceptor @ 142d48940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleRemoveInterceptor
          (FMessageRouter *this,TSharedRef<IMessageInterceptor,1> *param_1,
          FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  IMessageInterceptor **ppIVar6;
  longlong *plVar7;
  FName FVar8;
  FName FVar9;
  FMessageTracer *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  code *pcVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  FMessageRouter *pFVar14;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar15;
  bool bVar16;
  FName *this_00;
  TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
  *pTVar17;
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *this_01;
  TNode *pTVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  ulonglong uVar24;
  atomic<int> *paVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  uint *puVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  int iVar33;
  ulonglong uVar34;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  undefined1 auStack_1d8 [32];
  IMessageInterceptor **local_1b8;
  IMessageInterceptor **local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_188 [4];
  uint local_184;
  FMessageRouter *local_180;
  IMessageInterceptor *local_178;
  TReferenceControllerBase<1> *local_170;
  int local_168;
  int local_164;
  longlong local_160;
  longlong local_158;
  TSharedRef<IMessageInterceptor,1> *local_150;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_148;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  FTopLevelAssetPath *local_138;
  LARGE_INTEGER local_130;
  TSharedPtr<IMessageInterceptor,1> local_128;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_180 = this;
  local_150 = param_1;
  local_138 = param_2;
  if (5 < (byte)LogMessaging._0_1_) {
    FTopLevelAssetPath::ToString(param_2,local_d0);
    this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,local_e8);
    ::FName::ToString(this_00,&local_e0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = local_180;
  if ((param_2->PackageName == IMessageBus::PATHNAME_All.PackageName) &&
     (param_2->AssetName == IMessageBus::PATHNAME_All.AssetName)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  this_02 = &local_180->ActiveInterceptors;
  local_148 = this_02;
  if (bVar16) {
    iVar28 = *(int *)&(local_180->ActiveInterceptors).field_0x28;
    TStack_110.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(local_180->ActiveInterceptors).field_0x10;
    iStack_90 = 0;
    uStack_8c = 1;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar28 != 0) {
      puVar31 = *(uint **)&(local_180->ActiveInterceptors).field_0x20;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)TStack_110.Array;
      }
      uVar27 = *puVar31;
      local_78 = 0;
      while (uVar27 == 0) {
        lVar19 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar28;
        if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_142d48acf;
        uVar27 = puVar31[lVar19 + 1];
      }
      uStack_8c = -uVar27 & uVar27;
      uVar29 = (ulonglong)uStack_8c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_168 = (int)lVar19;
      iStack_7c = local_78 + -1 + local_168;
      if (iVar28 < iStack_7c) {
        iStack_7c = iVar28;
      }
    }
LAB_142d48acf:
    uVar27 = *(uint *)&(local_180->ActiveInterceptors).field_0x28;
    uStack_74 = local_a4;
    pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_180->ActiveInterceptors).field_0x10;
    uStack_80 = 0xffffffff;
    uVar26 = uVar27 & 0xffffffe0;
    TStack_110.CurrentBitIndex = iStack_7c;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_8c,iStack_90);
    ppTStack_70 = (TBitArray<FDefaultBitArrayAllocator> **)
                  CONCAT44(ppTStack_70._4_4_,
                           *(int *)&(local_180->ActiveInterceptors).field_0x8 -
                           *(int *)&(local_180->ActiveInterceptors).field_0x34);
    iVar23 = (int)uVar27 >> 5;
    TStack_110._28_4_ = local_a4;
    TStack_110.BaseBitIndex = local_78;
    uStack_f0 = ppTStack_70;
    local_98 = this_02;
    local_184 = uVar27;
    local_140 = pTVar32;
    local_118 = this_02;
    local_88 = TStack_110.Array;
    if ((((int)uVar27 < 0) || (iVar28 < (int)uVar27)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar3 = *(uint *)&(pFVar14->ActiveInterceptors).field_0x28;
    if (uVar27 != uVar3) {
      puVar4 = *(undefined1 **)&(pFVar14->ActiveInterceptors).field_0x20;
      puVar30 = (undefined1 *)pTVar32;
      if (puVar4 != (undefined1 *)0x0) {
        puVar30 = puVar4;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar23 * 4);
      while (uVar27 == 0) {
        lVar19 = (longlong)iVar23;
        uVar26 = uVar26 + 0x20;
        iVar23 = iVar23 + 1;
        uVar27 = uVar3;
        local_184 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_142d48bf0;
        uVar27 = *(uint *)(puVar30 + lVar19 * 4 + 4);
      }
      uVar29 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_164 = (int)lVar19;
      uVar27 = local_164 + -1 + uVar26;
      local_184 = uVar27;
      if ((int)uVar3 < (int)uVar27) {
        uVar27 = uVar3;
        local_184 = uVar3;
      }
    }
LAB_142d48bf0:
    while( true ) {
      pTVar15 = local_118;
      if (*(int *)(&local_118->field_0x0 + 8) - *(int *)(&local_118->field_0x0 + 0x34) !=
          (int)uStack_f0) {
        local_188[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
      }
      lVar19 = (longlong)TStack_110.CurrentBitIndex;
      if (((TStack_110.CurrentBitIndex == uVar27) && (TStack_110.Array == pTVar32)) &&
         (param_2 = local_138, pTVar15 == this_02)) break;
      lVar5 = *(longlong *)&pTVar15->field_0x0;
      local_160 = lVar19 * 5;
      local_178 = param_1->Object;
      local_170 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_170 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
        UNLOCK();
      }
      ppIVar6 = *(IMessageInterceptor ***)(lVar5 + 0x10 + lVar19 * 0x28);
      local_158 = lVar5;
      if ((ppIVar6 <= &local_178) &&
         (lVar21 = (longlong)*(int *)(lVar5 + 0x1c + lVar19 * 0x28),
         &local_178 < ppIVar6 + lVar21 * 2)) {
        local_1a0 = (longlong)*(int *)(lVar5 + 0x18 + lVar19 * 0x28);
        local_198 = 0x10;
        local_1b8 = &local_178;
        local_1b0 = ppIVar6;
        local_1a8 = lVar21;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar16) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      iVar28 = *(int *)(lVar5 + 0x18 + lVar19 * 0x28);
      lVar21 = (longlong)iVar28;
      if (iVar28 != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x10 + lVar19 * 0x28);
        uVar24 = 0;
        bVar16 = (IMessageInterceptor *)*plVar7 != local_178;
        uVar29 = uVar24;
        uVar34 = uVar24;
        do {
          iVar28 = (int)uVar29;
          uVar24 = uVar24 + 1;
          uVar29 = (ulonglong)(iVar28 + 1);
          if ((longlong)uVar24 < lVar21) {
            plVar22 = plVar7 + uVar24 * 2;
            do {
              if (bVar16 != ((IMessageInterceptor *)*plVar22 != local_178)) break;
              uVar29 = (ulonglong)((int)uVar29 + 1);
              uVar24 = uVar24 + 1;
              plVar22 = plVar22 + 2;
            } while ((longlong)uVar24 < lVar21);
          }
          iVar23 = (int)uVar29 - iVar28;
          if (bVar16 == false) {
            DestructItems<TSharedPtr<IMessageInterceptor,1>,int>
                      ((TSharedPtr<IMessageInterceptor,1> *)(plVar7 + (longlong)iVar28 * 2),iVar23);
          }
          else {
            iVar33 = (int)uVar34;
            if (iVar33 != iVar28) {
              memmove(plVar7 + (longlong)iVar33 * 2,plVar7 + (longlong)iVar28 * 2,
                      (longlong)iVar23 << 4);
            }
            uVar34 = (ulonglong)(uint)(iVar33 + iVar23);
          }
          bVar16 = (bool)(bVar16 ^ 1);
        } while ((longlong)uVar24 < lVar21);
        *(int *)(local_158 + 0x18 + local_160 * 8) = (int)uVar34;
        param_1 = local_150;
        pTVar32 = local_140;
        this_02 = local_148;
        uVar27 = local_184;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
  }
  else {
    FVar8 = param_2->AssetName;
    uVar27 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
    FVar9 = param_2->PackageName;
    uVar26 = ::GetTypeHash(FVar9.ComparisonIndex.Value);
    uVar26 = uVar26 + FVar9.Number;
    uVar26 = uVar26 * 0x40 + uVar27 + FVar8.Number + (uVar26 >> 2) + 0x9e3779b9 ^ uVar26;
    pTVar17 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindByHash<FTopLevelAssetPath>
                        ((TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_02,uVar26,param_2);
    if (pTVar17 ==
        (TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      this_01 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                ::EmplaceByHash<FTopLevelAssetPath_const_&>
                          ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                            *)this_02,uVar26,param_2);
    }
    else {
      this_01 = (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *)
                &pTVar17->field_0x10;
    }
    local_128.Object = param_1->Object;
    local_128.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (this_01,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = (local_180->Tracer).Object;
  QueryPerformanceCounter(&local_130);
  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
            (param_1->SharedReferenceCount).ReferenceController;
  pTVar1 = &pFVar10->Traces;
  pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)param_1->Object;
  pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)
            ((double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000);
  if (pTVar32 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    paVar25 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar25 = (atomic<int> *)((longlong)(pTVar32->AllocatorInstance).InlineData + 8);
    LOCK();
    *paVar25 = (atomic<int>)((int)*paVar25 + 1);
    UNLOCK();
  }
  FVar8 = param_2->PackageName;
  FVar9 = param_2->AssetName;
  local_98 = (TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0;
  ppTStack_70 = FMemory::Malloc(0x38,8);
  ppTStack_70[1] = (TBitArray<FDefaultBitArrayAllocator> *)pFVar10;
  ppTStack_70[2] = pTVar11;
  *ppTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::`2'::<lambda_1>,0,1>
                  ::_vftable_;
  ppTStack_70[3] = pTVar32;
  if (pTVar32 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    LOCK();
    *paVar25 = (atomic<int>)((int)*paVar25 + 1);
    UNLOCK();
  }
  ppTStack_70[6] = pTVar13;
  *(FName *)(ppTStack_70 + 4) = FVar8;
  *(FName *)(ppTStack_70 + 5) = FVar9;
  if (ppTStack_70 != (TBitArray<FDefaultBitArrayAllocator> **)&DAT_fffffffffffffff8) {
    local_98 = (TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                *)UE::Core::Private::Function::
                  TFunctionRefCaller<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,void>
                  ::Call;
  }
  pTVar18 = ::operator_new(0x40);
  if (pTVar18 != (TNode *)0x0) {
    pTVar18->NextNode = (TNode *)0x0;
    *(TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
      **)&pTVar18->Item = local_98;
    *(TBitArray<FDefaultBitArrayAllocator> ***)&(pTVar18->Item).field_0x28 = ppTStack_70;
    ppTStack_70 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    *(TBitArray<FDefaultBitArrayAllocator> **)&(pTVar18->Item).field_0x10 = local_88;
    *(ulonglong *)&(pTVar18->Item).field_0x18 = CONCAT44(iStack_7c,uStack_80);
    *(ulonglong *)&(pTVar18->Item).field_0x20 = CONCAT44(uStack_74,local_78);
    if (*(longlong *)&pTVar18->Item != 0) {
      local_98 = (TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                  *)(code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar18;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar18;
    UNLOCK();
  }
  if (local_98 !=
      (TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    ppTVar20 = &local_88;
    if (ppTStack_70 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
      ppTVar20 = ppTStack_70;
    }
    (*(code *)((*ppTVar20)->AllocatorInstance).SecondaryData)();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar32);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleRemoveListener @ 142d49010

void __thiscall
FMessageRouter::HandleRemoveListener(FMessageRouter *this,TWeakPtr<IBusListener,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TWeakPtr<IBusListener,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar4 = (TWeakPtr<IBusListener,1> *)(this->ActiveRegistrationListeners).AllocatorInstance.Data;
  if (((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->ActiveRegistrationListeners).ArrayMax)) &&
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
  iVar3 = (this->ActiveRegistrationListeners).ArrayNum;
  if (iVar3 != 0) {
    iVar12 = 0;
    pTVar4 = (TWeakPtr<IBusListener,1> *)(this->ActiveRegistrationListeners).AllocatorInstance.Data;
    bVar8 = TWeakPtr<IBusListener,1>::UEOpEquals<IBusListener>(pTVar4,param_1);
    bVar8 = !bVar8;
    iVar10 = 0;
    do {
      iVar7 = iVar10;
      do {
        iVar7 = iVar7 + 1;
        if (iVar3 <= iVar7) break;
        bVar9 = TWeakPtr<IBusListener,1>::UEOpEquals<IBusListener>(pTVar4 + iVar7,param_1);
      } while (bVar8 == !bVar9);
      iVar11 = iVar7 - iVar10;
      if (bVar8 == false) {
        DestructItems<TWeakPtr<IBusListener,1>,int>(pTVar4 + iVar10,iVar11);
      }
      else {
        if (iVar12 != iVar10) {
          memmove(pTVar4 + iVar12,pTVar4 + iVar10,(longlong)iVar11 << 4);
        }
        iVar12 = iVar12 + iVar11;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar7;
    } while (iVar7 < iVar3);
    (this->ActiveRegistrationListeners).ArrayNum = iVar12;
  }
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142d491c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      return;
    }
  }
  return;
}

// HandleRemoveRecipient @ 142d491d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d492be) */
/* WARNING: Removing unreachable block (ram,0x000142d492c9) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageRouter::HandleRemoveRecipient(FMessageRouter *this,FMessageAddress *param_1)

{
  atomic<int> *paVar1;
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar2;
  longlong lVar3;
  atomic<int> aVar4;
  TNode *pTVar5;
  FMessageTracer *pFVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  atomic<int> aVar10;
  FName *this_00;
  TNode *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  FString local_c8;
  LARGE_INTEGER local_b8;
  FString local_b0;
  undefined8 uStack_a0;
  double dStack_98;
  code *local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar8 = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
  iVar9 = TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveRecipients,uVar8,param_1);
  if ((iVar9 == -1) ||
     (lVar3 = *(longlong *)&this->ActiveRecipients + (longlong)iVar9 * 0x28, lVar3 == 0)) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar15 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10);
    pTVar14 = *(TReferenceControllerBase<1> **)(lVar3 + 0x18);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar16 = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar14->SharedReferenceCount;
    do {
      pTVar16 = pTVar13;
      if (aVar4 == (atomic<int>)0x0) break;
      LOCK();
      aVar10 = pTVar14->SharedReferenceCount;
      bVar17 = aVar4 == aVar10;
      if (bVar17) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      pTVar16 = pTVar14;
      aVar4 = aVar10;
    } while (!bVar17);
    LOCK();
    paVar1 = &pTVar14->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar14->_padding_ + 8))(pTVar14);
    }
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = pTVar15;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    if (5 < (byte)LogMessaging._0_1_) {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->UniqueId,&local_c8,Digits);
      this_00 = (FName *)(**(code **)pTVar13->_padding_)(pTVar13,&local_b8);
      ::FName::ToString(this_00,&local_b0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if ((FMessageTracer *)local_b0.Data.AllocatorInstance.Data != (FMessageTracer *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    if (*(int *)&(this->ActiveRecipients).field_0x8 != *(int *)&(this->ActiveRecipients).field_0x34)
    {
      uVar8 = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
      TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMessageAddress>
                ((TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
                  *)&this->ActiveRecipients,uVar8,param_1);
    }
    pFVar6 = (this->Tracer).Object;
    QueryPerformanceCounter(&local_b8);
    local_b0.Data.ArrayNum = (param_1->UniqueId).A;
    local_b0.Data.ArrayMax = (param_1->UniqueId).B;
    uStack_a0._0_4_ = (param_1->UniqueId).C;
    uStack_a0._4_4_ = (param_1->UniqueId).D;
    local_88 = (code *)0x0;
    pTVar2 = &pFVar6->Traces;
    dVar7 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar6;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_60[1] = (longlong)local_b0.Data.AllocatorInstance.Data;
    local_60[2] = local_b0.Data._8_8_;
    *(undefined4 *)(local_60 + 3) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)local_60 + 0x1c) = uStack_a0._4_4_;
    local_60[4] = (longlong)dVar7;
    if (local_60 + 1 != (longlong *)0x0) {
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,void>
                 ::Call;
    }
    dStack_98 = dVar7;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TNode *)0x0) {
      pTVar11->NextNode = (TNode *)0x0;
      *(code **)&pTVar11->Item = local_88;
      *(longlong **)&(pTVar11->Item).field_0x28 = local_60;
      local_60 = (longlong *)0x0;
      *(longlong *)&(pTVar11->Item).field_0x10 = local_78;
      *(undefined8 *)&(pTVar11->Item).field_0x18 = uStack_70;
      *(undefined8 *)&(pTVar11->Item).field_0x20 = local_68;
      if (*(longlong *)&pTVar11->Item != 0) {
        local_88 = (code *)0x0;
      }
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar5 = pTVar2->Head;
      pTVar2->Head = pTVar11;
      UNLOCK();
      if (((ulonglong)pTVar5 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar5->NextNode = pTVar11;
      UNLOCK();
    }
    if (local_88 != (code *)0x0) {
      plVar12 = &local_78;
      if (local_60 != (longlong *)0x0) {
        plVar12 = local_60;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    NotifyRegistration(this,param_1,Unregistered);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// HandleRemoveSubscriber @ 142d49520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleRemoveSubscriber
          (FMessageRouter *this,TWeakPtr<IMessageReceiver,1> *param_1,FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  ulonglong uVar2;
  atomic<int> aVar3;
  TNode *pTVar4;
  undefined1 *puVar5;
  longlong lVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  FMessageTracer *pFVar9;
  code *pcVar10;
  FName FVar11;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  atomic<int> aVar13;
  longlong lVar14;
  undefined8 *puVar15;
  FTopLevelAssetPath *this_00;
  FName *this_01;
  TNode *pTVar16;
  byte bVar17;
  TReferenceControllerBase<1> *pTVar18;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar19;
  IMessageReceiver *pIVar20;
  atomic<int> *paVar21;
  uint uVar22;
  IMessageReceiver *pIVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  IMessageReceiver *pIVar30;
  undefined1 *puVar31;
  bool bVar32;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  int local_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  IMessageReceiver *local_180;
  FTopLevelAssetPath *local_178;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  int local_168;
  int local_164;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_160;
  FMessageRouter *local_158;
  TReferenceControllerBase<1> *local_150;
  TWeakPtr<IMessageReceiver,1> *local_148;
  TMap<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_118;
  undefined1 local_110 [8];
  LARGE_INTEGER local_108;
  FString local_100;
  FString local_f0;
  undefined8 local_d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [44];
  undefined4 local_84;
  IMessageReceiver *local_78;
  uint uStack_70;
  uint uStack_6c;
  TBitArray<FDefaultBitArrayAllocator> *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_150 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar18 = local_150;
  local_178 = param_2;
  local_158 = this;
  local_148 = param_1;
  if (local_150 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_150->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d49584;
      }
      LOCK();
      aVar13 = local_150->SharedReferenceCount;
      bVar32 = aVar3 == aVar13;
      if (bVar32) {
        local_150->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar13 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar13;
    } while (!bVar32);
    local_180 = param_1->Object;
    if (local_180 != (IMessageReceiver *)0x0) {
      pIVar30 = (IMessageReceiver *)0x0;
      uStack_70 = 0;
      uStack_6c = 1;
      puVar31 = &(this->ActiveSubscriptions).field_0x10;
      uVar25 = *(uint *)&(this->ActiveSubscriptions).field_0x28;
      local_160 = &this->ActiveSubscriptions;
      uVar27 = 0;
      uStack_5c = uStack_70;
      local_58 = uVar27;
      if (uVar25 != 0) {
        puVar28 = *(uint **)&(this->ActiveSubscriptions).field_0x20;
        if (puVar28 == (uint *)0x0) {
          puVar28 = (uint *)puVar31;
        }
        uVar26 = *puVar28;
        pIVar23 = pIVar30;
        pIVar20 = pIVar30;
        local_58 = 0;
        uStack_70 = 0;
        while (uVar26 == 0) {
          iVar29 = (int)pIVar23;
          local_58 = (int)pIVar20 + 0x20;
          pIVar20 = (IMessageReceiver *)(ulonglong)local_58;
          uStack_70 = iVar29 + 1;
          pIVar23 = (IMessageReceiver *)(ulonglong)uStack_70;
          uStack_5c = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_70)
          goto LAB_142d4968e;
          uVar26 = puVar28[(longlong)iVar29 + 1];
        }
        uStack_6c = -uVar26 & uVar26;
        uVar2 = (ulonglong)uStack_6c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_168 = (int)lVar14;
        uStack_5c = (local_58 - 1) + local_168;
        if ((int)uVar25 < (int)uStack_5c) {
          uStack_5c = uVar25;
        }
      }
LAB_142d4968e:
      uStack_54 = local_84;
      ppTStack_50 = (TBitArray<FDefaultBitArrayAllocator> **)
                    CONCAT44(ppTStack_50._4_4_,
                             *(int *)&(this->ActiveSubscriptions).field_0x8 -
                             *(int *)&(this->ActiveSubscriptions).field_0x34);
      uVar26 = *(uint *)&(this->ActiveSubscriptions).field_0x28;
      bVar17 = (byte)uVar26 & 0x1f;
      iVar29 = (int)uVar26 >> 5;
      uStack_19c = 1 << bVar17;
      uVar22 = -1 << bVar17;
      uVar24 = uVar26 & 0xffffffe0;
      uStack_60 = 0xffffffff;
      TStack_138._padding_ = CONCAT44(uStack_6c,uStack_70);
      TStack_138.CurrentBitIndex = uStack_5c;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      TStack_138._28_4_ = local_84;
      TStack_138.BaseBitIndex = local_58;
      ppTStack_118 = ppTStack_50;
      local_78 = (IMessageReceiver *)local_160;
      local_1a0 = iVar29;
      pTStack_198 = (TBitArray<FDefaultBitArrayAllocator> *)puVar31;
      local_190 = uVar22;
      uStack_18c = uVar26;
      uStack_188 = uVar24;
      local_140 = local_160;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar31;
      local_68 = (TBitArray<FDefaultBitArrayAllocator> *)puVar31;
      if ((((int)uVar26 < 0) || ((int)uVar25 < (int)uVar26)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar25 = *(uint *)&(this->ActiveSubscriptions).field_0x28;
      if (uVar26 != uVar25) {
        puVar5 = *(undefined1 **)&(this->ActiveSubscriptions).field_0x20;
        if (puVar5 != (undefined1 *)0x0) {
          puVar31 = puVar5;
        }
        uVar22 = uVar22 & *(uint *)(puVar31 + (longlong)iVar29 * 4);
        while (uVar22 == 0) {
          uStack_188 = uVar24 + 0x20;
          local_1a0 = iVar29 + 1;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a0)
          goto LAB_142d497de;
          uVar22 = *(uint *)(puVar31 + (longlong)iVar29 * 4 + 4);
          local_190 = 0xffffffff;
          iVar29 = local_1a0;
          uVar24 = uStack_188;
        }
        uStack_19c = -uVar22 & uVar22;
        uVar2 = (ulonglong)uStack_19c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_164 = (int)lVar14;
        uStack_18c = (uVar24 - 1) + local_164;
        if ((int)uVar25 < (int)uStack_18c) {
LAB_142d497de:
          uStack_18c = uVar25;
        }
      }
      local_d8 = CONCAT44(uStack_19c,local_1a0);
      local_c8 = CONCAT44(uStack_18c,local_190);
      uStack_c0 = CONCAT44(uStack_184,uStack_188);
      pTStack_d0 = pTStack_198;
      local_170 = pTStack_198;
      local_1a4 = uStack_18c;
      uVar25 = uStack_18c;
      while( true ) {
        pTVar12 = local_140;
        if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)ppTStack_118) {
          local_1a8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        lVar14 = (longlong)TStack_138.CurrentBitIndex;
        if (((TStack_138.CurrentBitIndex == uVar25) && (TStack_138.Array == local_170)) &&
           (pTVar12 == local_160)) break;
        lVar6 = *(longlong *)pTVar12;
        if (((local_178->PackageName == IMessageBus::PATHNAME_All.PackageName) &&
            (local_178->AssetName == IMessageBus::PATHNAME_All.AssetName)) ||
           ((local_178->PackageName == *(FName *)(lVar6 + lVar14 * 0x28) &&
            (local_178->AssetName == *(FName *)(lVar6 + 8 + lVar14 * 0x28))))) {
          lVar6 = lVar6 + lVar14 * 0x28;
          iVar29 = *(int *)(lVar6 + 0x18);
          pIVar23 = pIVar30;
          pIVar20 = pIVar30;
          uVar25 = local_1a4;
          if (0 < iVar29) {
            do {
              uVar26 = (uint)pIVar20;
              uVar25 = uVar27;
              if ((int)uVar26 < iVar29) {
                uVar25 = ~uVar26 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)
                        (&pIVar23[1].field_0x0 + *(longlong *)(lVar6 + 0x10));
              pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)
                        (&pIVar23->field_0x0 + *(longlong *)(lVar6 + 0x10));
              if (pTVar7 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                LOCK();
                paVar21 = (atomic<int> *)((longlong)(pTVar7->AllocatorInstance).InlineData + 8);
                *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                UNLOCK();
              }
              if ((pTVar8 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar32)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              puVar15 = (undefined8 *)
                        (**(code **)(*(longlong *)(pTVar8->AllocatorInstance).InlineData + 0x20))();
              pTVar18 = (TReferenceControllerBase<1> *)puVar15[1];
              pIVar20 = pIVar30;
              if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
                aVar3 = pTVar18->SharedReferenceCount;
                do {
                  if (aVar3 == (atomic<int>)0x0) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                    goto LAB_142d49979;
                  }
                  LOCK();
                  aVar13 = pTVar18->SharedReferenceCount;
                  bVar32 = aVar3 == aVar13;
                  if (bVar32) {
                    pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
                    aVar13 = aVar3;
                  }
                  UNLOCK();
                  aVar3 = aVar13;
                } while (!bVar32);
                pIVar20 = (IMessageReceiver *)*puVar15;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar18);
              if (pIVar20 == local_180) {
                if (5 < (byte)LogMessaging._0_1_) {
                  if ((pTVar8 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar32)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  this_00 = (FTopLevelAssetPath *)
                            (**(code **)(*(longlong *)(pTVar8->AllocatorInstance).InlineData + 0x10)
                            )(pTVar8,local_b0);
                  FTopLevelAssetPath::ToString(this_00,&local_f0);
                  this_01 = (FName *)(**(code **)*local_180)(local_180,local_110);
                  ::FName::ToString(this_01,&local_100);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging)
                  ;
                  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_100.Data.AllocatorInstance.Data);
                  }
                  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                  }
                }
                uVar25 = uVar27;
                if ((int)uVar26 < *(int *)(lVar6 + 0x18)) {
                  uVar25 = ~uVar26 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>::
                RemoveAtSwapImpl((TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>
                                  *)(lVar6 + 0x10),uVar26);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(ForAnyElementType *)(lVar6 + 0x10),*(int *)(lVar6 + 0x18),
                           (int *)(lVar6 + 0x1c));
                pFVar9 = (local_158->Tracer).Object;
                if ((pTVar8 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x408,L""), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (pTVar7 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  LOCK();
                  paVar21 = (atomic<int> *)((longlong)(pTVar7->AllocatorInstance).InlineData + 8);
                  *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                  UNLOCK();
                }
                if ((pTVar8 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x25d,L""), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (pFVar9->Running != false) {
                  QueryPerformanceCounter(&local_108);
                  pTVar1 = &pFVar9->Traces;
                  if (pTVar7 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    paVar21 = (atomic<int> *)&DAT_00000008;
                  }
                  else {
                    paVar21 = (atomic<int> *)((longlong)(pTVar7->AllocatorInstance).InlineData + 8);
                    LOCK();
                    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                    UNLOCK();
                  }
                  local_78 = (IMessageReceiver *)0x0;
                  ppTStack_50 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
                  ppTStack_50 = FMemory::Malloc(0x30,8);
                  ppTStack_50[1] = (TBitArray<FDefaultBitArrayAllocator> *)pFVar9;
                  ppTStack_50[2] = pTVar8;
                  *ppTStack_50 = (TBitArray<FDefaultBitArrayAllocator> *)
                                 &UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::`2'::<lambda_1>,0,1>
                                  ::_vftable_;
                  ppTStack_50[3] = pTVar7;
                  if (pTVar7 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    LOCK();
                    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                    UNLOCK();
                  }
                  FVar11 = local_178->AssetName;
                  *(FName *)(ppTStack_50 + 4) = local_178->PackageName;
                  *(FName *)(ppTStack_50 + 5) = FVar11;
                  if (ppTStack_50 != (TBitArray<FDefaultBitArrayAllocator> **)&DAT_fffffffffffffff8)
                  {
                    local_78 = (IMessageReceiver *)
                               UE::Core::Private::Function::
                               TFunctionRefCaller<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,void>
                               ::Call;
                  }
                  pTVar16 = ::operator_new(0x40);
                  if (pTVar16 != (TNode *)0x0) {
                    pTVar16->NextNode = (TNode *)0x0;
                    *(IMessageReceiver **)&pTVar16->Item = local_78;
                    *(TBitArray<FDefaultBitArrayAllocator> ***)&(pTVar16->Item).field_0x28 =
                         ppTStack_50;
                    ppTStack_50 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
                    *(TBitArray<FDefaultBitArrayAllocator> **)&(pTVar16->Item).field_0x10 = local_68
                    ;
                    *(ulonglong *)&(pTVar16->Item).field_0x18 = CONCAT44(uStack_5c,uStack_60);
                    *(ulonglong *)&(pTVar16->Item).field_0x20 = CONCAT44(uStack_54,local_58);
                    if (local_78 != (IMessageReceiver *)0x0) {
                      local_78 = pIVar30;
                    }
                    if (((ulonglong)pTVar1 & 7) != 0) {
                      FWindowsPlatformAtomics::HandleAtomicsFailure
                                (
                                L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                );
                    }
                    LOCK();
                    pTVar4 = pTVar1->Head;
                    pTVar1->Head = pTVar16;
                    UNLOCK();
                    if (((ulonglong)pTVar4 & 7) != 0) {
                      FWindowsPlatformAtomics::HandleAtomicsFailure
                                (
                                L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                );
                    }
                    LOCK();
                    pTVar4->NextNode = pTVar16;
                    UNLOCK();
                  }
                  if (local_78 != (IMessageReceiver *)0x0) {
                    ppTVar19 = &local_68;
                    if (ppTStack_50 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
                      ppTVar19 = ppTStack_50;
                    }
                    (*(code *)((*ppTVar19)->AllocatorInstance).SecondaryData)();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pTVar7);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)pTVar7);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)pTVar7);
                uVar25 = local_1a4;
                break;
              }
LAB_142d49979:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pTVar7);
              iVar29 = *(int *)(lVar6 + 0x18);
              pIVar23 = pIVar23 + 2;
              pIVar20 = (IMessageReceiver *)(ulonglong)(uVar26 + 1);
              uVar25 = local_1a4;
            } while ((int)(uVar26 + 1) < iVar29);
          }
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150)
      ;
      pTVar18 = (local_148->WeakReferenceCount).ReferenceController;
      goto LAB_142d49590;
    }
  }
LAB_142d49584:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  pTVar18 = (param_1->WeakReferenceCount).ReferenceController;
LAB_142d49590:
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar21 = &pTVar18->WeakReferenceCount;
    aVar3 = *paVar21;
    *paVar21 = (atomic<int>)((int)*paVar21 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar18->_padding_ + 8))(pTVar18,1);
    }
  }
  return;
}

// HandleRouteMessage @ 142d49d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageRouter::HandleRouteMessage(FMessageRouter *this,TSharedRef<IMessageContext,1> *param_1)

{
  int *piVar1;
  TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  FDelayedMessage *pFVar3;
  FDelayedMessage *this_00;
  long64 lVar4;
  IMessageContext *pIVar5;
  FMessageTracer *this_01;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FGuid *this_02;
  longlong lVar16;
  FWeakObjectPtr *pFVar17;
  UStruct *pUVar18;
  TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
  *pTVar19;
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *pTVar20;
  FName *this_03;
  longlong *plVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FTopLevelAssetPath local_b8;
  FString local_a8;
  FTopLevelAssetPath local_98;
  TSharedRef<IMessageInterceptor,1> local_88;
  FString local_78;
  FString local_68;
  IMessageContext *local_58;
  TReferenceControllerBase<1> *local_50;
  longlong local_48;
  
  if (5 < (byte)LogMessaging._0_1_) {
    this_02 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(this_02,&local_a8,Digits);
    pIVar5 = param_1->Object;
    lVar16 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5);
    if (lVar16 == 0) {
LAB_142d49dac:
      local_98.PackageName.ComparisonIndex.Value = 0;
      local_98.PackageName.Number = 0;
      local_98.AssetName.ComparisonIndex.Value = 0;
      local_98.AssetName.Number = 0;
    }
    else {
      pFVar17 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
      bVar11 = FWeakObjectPtr::IsValid(pFVar17,false,true);
      if (!bVar11) goto LAB_142d49dac;
      pFVar17 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
      pUVar18 = (UStruct *)FWeakObjectPtr::Get(pFVar17);
      UStruct::GetStructPathName(pUVar18,&local_98);
    }
    FTopLevelAssetPath::ToString(&local_98,&local_78);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  FMessageTracer::TraceRoutedMessage((this->Tracer).Object,param_1);
  pIVar5 = param_1->Object;
  lVar16 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5);
  if (lVar16 == 0) {
LAB_142d49e5e:
    local_b8.PackageName.ComparisonIndex.Value = 0;
    local_b8.PackageName.Number = 0;
    local_b8.AssetName.ComparisonIndex.Value = 0;
    local_b8.AssetName.Number = 0;
  }
  else {
    pFVar17 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
    bVar11 = FWeakObjectPtr::IsValid(pFVar17,false,true);
    if (!bVar11) goto LAB_142d49e5e;
    pFVar17 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
    pUVar18 = (UStruct *)FWeakObjectPtr::Get(pFVar17);
    UStruct::GetStructPathName(pUVar18,&local_b8);
  }
  FVar10 = local_b8.AssetName;
  uVar13 = ::GetTypeHash(local_b8.AssetName.ComparisonIndex.Value);
  FVar9 = local_b8.PackageName;
  uVar14 = ::GetTypeHash(local_b8.PackageName.ComparisonIndex.Value);
  uVar14 = uVar14 + FVar9.Number;
  uVar14 = uVar14 * 0x40 + uVar13 + FVar10.Number + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
  pTVar19 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindByHash<FTopLevelAssetPath>
                      ((TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ActiveInterceptors,uVar14,&local_b8);
  if (pTVar19 ==
      (TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    pTVar20 = TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<FTopLevelAssetPath>
                        ((TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ActiveInterceptors,uVar14,&local_b8);
  }
  else {
    pTVar20 = (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *)
              &pTVar19->field_0x10;
  }
  iVar15 = pTVar20->ArrayNum;
  pFVar22 = (pTVar20->AllocatorInstance).Data;
  pFVar23 = pFVar22 + (longlong)iVar15 * 0x10;
  while( true ) {
    if (pTVar20->ArrayNum != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMessageInterceptor,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar22 == pFVar23) {
      if ((this->bAllowDelayedMessaging == false) ||
         (plVar21 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x68))(),
         *plVar21 <= (this->CurrentTime).Ticks)) {
        DispatchMessage(this,param_1);
        goto LAB_142d4a1fb;
      }
      if (5 < (byte)LogMessaging._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      }
      pTVar2 = &this->DelayedMessages;
      local_48 = this->DelayedMessagesSequence + 1;
      this->DelayedMessagesSequence = local_48;
      local_58 = param_1->Object;
      local_50 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar22 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar22 + (longlong)(this->DelayedMessages).ArrayMax * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = (this->DelayedMessages).ArrayNum;
      piVar1 = &(this->DelayedMessages).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DelayedMessages).ArrayNum = iVar15 + 1;
      pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x18;
      *(IMessageContext **)pFVar22 = local_58;
      *(TReferenceControllerBase<1> **)(pFVar22 + 8) = local_50;
      local_50 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (IMessageContext *)0x0;
      *(longlong *)(pFVar22 + 0x10) = local_48;
      pFVar22 = (pTVar2->AllocatorInstance).Data;
      iVar15 = (this->DelayedMessages).ArrayNum + -1;
      if (0 < iVar15) goto LAB_142d4a190;
      goto LAB_142d4a1e5;
    }
    if ((*(longlong *)pFVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar12 = (**(code **)(**(longlong **)pFVar22 + 0x10))(*(longlong **)pFVar22,param_1);
    if (cVar12 != '\0') break;
    pFVar22 = pFVar22 + 0x10;
  }
  if (5 < (byte)LogMessaging._0_1_) {
    if ((*(longlong *)pFVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_03 = (FName *)(**(code **)**(undefined8 **)pFVar22)(*(undefined8 **)pFVar22,local_res10);
    ::FName::ToString(this_03,&local_68);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  this_01 = (this->Tracer).Object;
  if ((*(longlong *)pFVar22 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_88.Object = *(IMessageInterceptor **)pFVar22;
  pTVar6 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.SharedReferenceCount.ReferenceController = pTVar6;
  if ((local_88.Object == (IMessageInterceptor *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FMessageTracer::TraceInterceptedMessage(this_01,param_1,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142d4a1fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
  while( true ) {
    lVar4 = this_00->Sequence;
    pTVar6 = (pFVar3->Context).SharedReferenceCount.ReferenceController;
    pIVar5 = (this_00->Context).Object;
    pTVar8 = (this_00->Context).SharedReferenceCount.ReferenceController;
    (this_00->Context).Object = (pFVar3->Context).Object;
    (this_00->Context).SharedReferenceCount.ReferenceController = pTVar6;
    this_00->Sequence = pFVar3->Sequence;
    (pFVar3->Context).Object = pIVar5;
    (pFVar3->Context).SharedReferenceCount.ReferenceController = pTVar8;
    pFVar3->Sequence = lVar4;
    if (iVar15 < 1) break;
LAB_142d4a190:
    lVar16 = (longlong)iVar15;
    iVar15 = (iVar15 + -1) / 2;
    pFVar3 = (FDelayedMessage *)(pFVar22 + (longlong)iVar15 * 0x18);
    this_00 = (FDelayedMessage *)(pFVar22 + lVar16 * 0x18);
    bVar11 = FDelayedMessage::operator<(this_00,pFVar3);
    if (!bVar11) break;
  }
LAB_142d4a1e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  goto LAB_142d4a1fb;
}

// Init @ 142d4a2e0

bool __thiscall FMessageRouter::Init(FMessageRouter *this)

{
  return true;
}

// NotifyRegistration @ 142d4a800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FMessageRouter::NotifyRegistration
          (FMessageRouter *this,FMessageAddress *param_1,EMessageBusNotification param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> *paVar3;
  TArray<TWeakPtr<IBusListener,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<int> aVar5;
  atomic<unsigned_int> aVar6;
  longlong *plVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  atomic<int> aVar13;
  uint uVar14;
  FTaskBase *this_00;
  int iVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  FScriptContainerElement *pFVar18;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res20 [8];
  
  pTVar4 = &this->ActiveRegistrationListeners;
  uVar16 = 0;
LAB_142d4a830:
  do {
    while( true ) {
      if (((int)uVar16 < 0) || ((this->ActiveRegistrationListeners).ArrayNum <= (int)uVar16)) {
        return;
      }
      if (((int)uVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
      pTVar17 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) break;
LAB_142d4a8b4:
      uVar14 = 0;
      if ((int)uVar16 < (this->ActiveRegistrationListeners).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
      plVar7 = *(longlong **)(pFVar18 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      iVar15 = (this->ActiveRegistrationListeners).ArrayNum + ~uVar16;
      if (iVar15 != 0) {
        memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar15 << 4);
      }
      iVar15 = (this->ActiveRegistrationListeners).ArrayNum + -1;
      (this->ActiveRegistrationListeners).ArrayNum = iVar15;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar4->AllocatorInstance,iVar15,
                 &(this->ActiveRegistrationListeners).ArrayMax);
      uVar16 = uVar16 - 1;
LAB_142d4a971:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      uVar16 = uVar16 + 1;
    }
    aVar5 = pTVar17->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d4a8b4;
      }
      LOCK();
      aVar13 = pTVar17->SharedReferenceCount;
      bVar12 = aVar5 == aVar13;
      if (bVar12) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar13 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar13;
    } while (!bVar12);
    plVar7 = *(longlong **)pFVar18;
    if (plVar7 == (longlong *)0x0) goto LAB_142d4a8b4;
    iVar15 = (**(code **)(*plVar7 + 8))(plVar7);
    if (iVar15 != 0xff) {
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_00->_padding_ = (longlong)&___7__TGraphTask_VFBusNotificationDispatchTask____6B_;
      }
      uVar14 = (param_1->UniqueId).A;
      uVar9 = (param_1->UniqueId).B;
      uVar10 = (param_1->UniqueId).C;
      uVar11 = (param_1->UniqueId).D;
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
      *(int *)&this_00[1]._padding_ = iVar15;
      this_00[1]._padding_ = (longlong)plVar7;
      this_00[1]._padding_ = (longlong)pTVar17;
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
      *(uint *)&this_00[1]._padding_ = uVar14;
      *(uint *)((longlong)&this_00[1]._padding_ + 4) = uVar9;
      *(uint *)&this_00[1]._padding_ = uVar10;
      *(uint *)((longlong)&this_00[1]._padding_ + 4) = uVar11;
      *(EMessageBusNotification *)&this_00[1]._padding_ = param_2;
      LOCK();
      paVar2 = &pTVar17->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
      }
      UE::Tasks::Private::TranslatePriority((Type)this_00[1]._padding_,local_res20,local_res8);
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res20[0],local_res8[0],None);
      if (this_00 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        uVar16 = uVar16 + 1;
      }
      else {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x108);
        LOCK();
        paVar3 = &this_00->RefCount;
        aVar6 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_142d4a971;
        (**(code **)this_00->_padding_)(this_00,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        uVar16 = uVar16 + 1;
      }
      goto LAB_142d4a830;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    uVar16 = uVar16 + 1;
  } while( true );
}

// ProcessCommands @ 142d4ab40

void __thiscall FMessageRouter::ProcessCommands(FMessageRouter *this)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  int iVar2;
  ForAnyElementType FVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType local_70;
  int local_68;
  FDestructionSentinel local_60;
  char local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  char local_28;
  FReadAccessScope local_20;
  
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  while (aVar1 = ((this->Commands).Tail)->Next,
        aVar1 != (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
                  )0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)aVar1 + 8));
    local_48 = '\x01';
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)aVar1 + 8));
    FMemory::Free((this->Commands).Tail);
    (this->Commands).Tail = (FNode *)aVar1;
    local_28 = local_48;
    if (local_48 == '\0') break;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60);
    if (local_48 != '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60);
    }
    if (local_28 == '\0') break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
               (FWriteAccessScope *)&local_60);
    iVar2 = local_30;
    FVar3.Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (local_68 == 0) {
LAB_142d4ac55:
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
    else if (local_70.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
      local_68 = 0;
      goto LAB_142d4ac55;
    }
    local_70.Data = FVar3.Data;
    local_68 = iVar2;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_28 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
                 (FWriteAccessScope *)&local_60);
      if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_38.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
        local_30 = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_40);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_78,&local_20);
    FVar3.Data = (FScriptContainerElement *)0x0;
    if (local_68 != 0) {
      FVar3.Data = local_70.Data;
    }
    (**(code **)(*(longlong *)FVar3.Data + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// ProcessDelayedMessages @ 142d4adb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMessageRouter::ProcessDelayedMessages(FMessageRouter *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  IMessageContext *pIVar4;
  bool bVar5;
  longlong *plVar6;
  TLess<FMessageRouter::FDelayedMessage> local_res8 [8];
  TSharedRef<IMessageContext,1> local_38;
  FDelayedMessage local_28;
  
  local_28.Context.Object = (IMessageContext *)0x0;
  local_28.Context.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar1 = (this->DelayedMessages).ArrayNum;
  while (0 < iVar1) {
    if (((this->DelayedMessages).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->DelayedMessages).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar6 = (longlong *)(**(code **)(**(longlong **)pFVar2 + 0x68))();
    if ((this->CurrentTime).Ticks < *plVar6) break;
    TArray<FMessageRouter::FDelayedMessage,TSizedDefaultAllocator<32>_>::
    HeapPop<TLess<FMessageRouter::FDelayedMessage>_>
              (&this->DelayedMessages,&local_28,local_res8,Default);
    pIVar4 = local_28.Context.Object;
    if ((local_28.Context.Object == (IMessageContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38.Object = pIVar4;
    local_38.SharedReferenceCount.ReferenceController =
         local_28.Context.SharedReferenceCount.ReferenceController;
    if (local_28.Context.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.Context.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.Context.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    if ((pIVar4 == (IMessageContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DispatchMessage(this,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    iVar1 = (this->DelayedMessages).ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Context.SharedReferenceCount.ReferenceController);
  return;
}

// Run @ 142d4dec0

uint __thiscall FMessageRouter::Run(FMessageRouter *this)

{
  FEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FDateTime FVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar12 [16];
  
  uVar4 = __real_412e848100000000;
  do {
    if (this->Stopping != (TAtomic<bool>)0x0) {
      return 0;
    }
    FVar7 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->CurrentTime).Ticks = *FVar7.Ticks;
    ProcessCommands(this);
    ProcessDelayedMessages(this);
    pFVar1 = this->WorkEvent;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar4;
    auVar12 = roundpd(extraout_XMM0,auVar12,1);
    if ((this->DelayedMessages).ArrayNum < 1) {
LAB_142d4dfa1:
      lVar11 = (longlong)auVar12._0_8_;
    }
    else {
      pFVar2 = (this->DelayedMessages).AllocatorInstance.Data;
      if (*(longlong *)pFVar2 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
      }
      plVar8 = (longlong *)(**(code **)(**(longlong **)pFVar2 + 0x68))();
      lVar11 = *plVar8 - (this->CurrentTime).Ticks;
      if ((longlong)auVar12._0_8_ <= lVar11) goto LAB_142d4dfa1;
    }
    if (lVar11 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitTime.GetTicks() >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                         ,0x58,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    uVar9 = 0xffffffff;
    if (lVar11 / 10000 < 0xffffffff) {
      uVar9 = lVar11 / 10000;
    }
    uVar10 = 0;
    if (0 < (longlong)uVar9) {
      uVar10 = uVar9 & 0xffffffff;
    }
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,uVar10,0);
  } while( true );
}

// Stop @ 142d4e740

void __thiscall FMessageRouter::Stop(FMessageRouter *this)

{
  (**(code **)(((this->Tracer).Object)->_padding_ + 0x30))();
  LOCK();
  this->Stopping = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000142d4e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WorkEvent->_padding_ + 0x10))();
  return;
}

// Tick @ 142d4eb60

void __thiscall FMessageRouter::Tick(FMessageRouter *this)

{
  FDateTime FVar1;
  
  FVar1 = FDateTime::UtcNow();
  (this->Commands).Tail = *(FNode **)FVar1.Ticks;
  ProcessDelayedMessages((FMessageRouter *)&this[-1].bAllowDelayedMessaging);
  ProcessCommands((FMessageRouter *)&this[-1].bAllowDelayedMessaging);
  return;
}

