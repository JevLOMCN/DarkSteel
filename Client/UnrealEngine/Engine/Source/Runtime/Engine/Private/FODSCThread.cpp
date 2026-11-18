// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FODSCThread @ 148089c90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FODSCThread * __thiscall FODSCThread::FODSCThread(FODSCThread *this,FString *param_1)

{
  FName FVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FEvent *pFVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  *(undefined ***)this = &_vftable__for__FRunnable__;
  pTVar4 = (TNode *)0x0;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FSingleThreadRunnable__;
  (this->ExitRequest).Counter = 0;
  pTVar2 = ::operator_new(0x10);
  pTVar3 = pTVar4;
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    *(FODSCMessageHandler **)&pTVar2->Item = (FODSCMessageHandler *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->PendingMaterialThreadedRequests).Tail = (TNode *)pTVar3;
  (this->PendingMaterialThreadedRequests).Head = (TNode *)pTVar3;
  pTVar2 = ::operator_new(0x70);
  pTVar3 = pTVar4;
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    *(FODSCMessageHandler **)&pTVar2->Item = (FODSCMessageHandler *)0x0;
    *(undefined8 *)&(pTVar2->Item).QualityLevel = 0;
    (pTVar2->Item).MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).MaterialName.Data.ArrayNum = 0;
    (pTVar2->Item).MaterialName.Data.ArrayMax = 0;
    (pTVar2->Item).VertexFactoryName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).VertexFactoryName.Data.ArrayNum = 0;
    (pTVar2->Item).VertexFactoryName.Data.ArrayMax = 0;
    (pTVar2->Item).PipelineName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).PipelineName.Data.ArrayNum = 0;
    (pTVar2->Item).PipelineName.Data.ArrayMax = 0;
    (pTVar2->Item).ShaderTypeNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).ShaderTypeNames.ArrayNum = 0;
    (pTVar2->Item).ShaderTypeNames.ArrayMax = 0;
    *(undefined8 *)&(pTVar2->Item).PermutationId = 0;
    (pTVar2->Item).RequestHash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).RequestHash.Data.ArrayNum = 0;
    (pTVar2->Item).RequestHash.Data.ArrayMax = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).MaterialName.Data.ArrayNum = 0;
    (pTVar2->Item).MaterialName.Data.ArrayMax = 0;
    (pTVar2->Item).VertexFactoryName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).VertexFactoryName.Data.ArrayNum = 0;
    (pTVar2->Item).VertexFactoryName.Data.ArrayMax = 0;
    (pTVar2->Item).PipelineName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).PipelineName.Data.ArrayNum = 0;
    (pTVar2->Item).PipelineName.Data.ArrayMax = 0;
    (pTVar2->Item).ShaderTypeNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).ShaderTypeNames.ArrayNum = 0;
    (pTVar2->Item).ShaderTypeNames.ArrayMax = 0;
    (pTVar2->Item).RequestHash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).RequestHash.Data.ArrayNum = 0;
    (pTVar2->Item).RequestHash.Data.ArrayMax = 0;
    pTVar3 = pTVar2;
  }
  (this->PendingMeshMaterialThreadedRequests).Tail = pTVar3;
  (this->PendingMeshMaterialThreadedRequests).Head = pTVar3;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    *(FODSCMessageHandler **)&pTVar3->Item = (FODSCMessageHandler *)0x0;
    pTVar3->NextNode = (TNode *)0x0;
    pTVar4 = pTVar3;
  }
  (this->CompletedThreadedRequests).Tail = (TNode *)pTVar4;
  (this->CompletedThreadedRequests).Head = (TNode *)pTVar4;
  (this->RequestHashesRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestHashCriticalSection,4000);
  *(undefined8 *)&this->RequestHashes = 0;
  *(undefined8 *)&(this->RequestHashes).field_0x8 = 0;
  *(undefined8 *)&(this->RequestHashes).field_0x20 = 0;
  *(undefined4 *)&(this->RequestHashes).field_0x28 = 0;
  *(undefined4 *)&(this->RequestHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestHashes).field_0x34 = 0;
  *(undefined8 *)&(this->RequestHashes).field_0x40 = 0;
  *(undefined4 *)&(this->RequestHashes).field_0x48 = 0;
  *(undefined8 *)&this->ODSCPointerToNames = 0;
  *(undefined8 *)&(this->ODSCPointerToNames).field_0x8 = 0;
  *(undefined8 *)&(this->ODSCPointerToNames).field_0x20 = 0;
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x28 = 0;
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x34 = 0;
  *(undefined8 *)&(this->ODSCPointerToNames).field_0x40 = 0;
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x48 = 0;
  this->Thread = (FRunnableThread *)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->WakeupEvent = pFVar5;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->AllRequestsDoneEvent = pFVar5;
  (this->PendingRequestsMaterialAndGlobal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRequestsMaterialAndGlobal).ArrayNum = 0;
  (this->PendingRequestsMaterialAndGlobal).ArrayMax = 0;
  (this->PendingRequestsPipeline).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRequestsPipeline).ArrayNum = 0;
  (this->PendingRequestsPipeline).ArrayMax = 0;
  (this->CookOnTheFlyServerConnection).Ptr = (ICookOnTheFlyServerConnection *)0x0;
  ::FString::FString(&this->ODSCHostIP,param_1);
  this->bIsConnectedToODSCServer = (atomic<bool>)0x0;
  this->bHasPendingGlobalShaders = (atomic<bool>)0x0;
  this->NumPendingMaterialsRecompile = (atomic<unsigned_int>)0x0;
  this->NumPendingMaterialsShaders = (atomic<unsigned_int>)0x0;
  this->bHasDefaultConnection = false;
  this->MaxPayloadPerRequests = 0x7fffffff;
  if (4 < (byte)LogODSC._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
  }
  pFVar6 = ::FName::FName(&local_res8,L"CookOnTheFly");
  FVar1 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,local_18);
  this->bHasDefaultConnection = *plVar8 != 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (this->bHasDefaultConnection == false) {
    ConnectToODSCHost(this);
  }
  return this;
}

// ~FODSCThread @ 14808ea90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::~FODSCThread(FODSCThread *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  ICookOnTheFlyServerConnection *pIVar3;
  void *pvVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  code *pcVar8;
  BOOLEAN BVar9;
  bool bVar10;
  
  *(undefined ***)this = &_vftable__for__FRunnable__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FSingleThreadRunnable__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->AllRequestsDoneEvent);
  this->AllRequestsDoneEvent = (FEvent *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WakeupEvent);
  this->WakeupEvent = (FEvent *)0x0;
  pFVar2 = (this->ODSCHostIP).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->CookOnTheFlyServerConnection).Ptr;
  if (pIVar3 != (ICookOnTheFlyServerConnection *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar2 = (this->PendingRequestsPipeline).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PendingRequestsMaterialAndGlobal).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ODSCPointerToNames).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ODSCPointerToNames).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ODSCPointerToNames);
  *(undefined4 *)&(this->RequestHashes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->RequestHashes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestHashes);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestHashCriticalSection);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
  if (BVar9 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
  }
  pTVar5 = (this->CompletedThreadedRequests).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->CompletedThreadedRequests).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->CompletedThreadedRequests).Tail;
  }
  pTVar6 = (this->PendingMeshMaterialThreadedRequests).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->PendingMeshMaterialThreadedRequests).Tail = pTVar6->NextNode;
    FODSCRequestPayload::~FODSCRequestPayload(&pTVar6->Item);
    ::operator_delete(pTVar6,0x70);
    pTVar6 = (this->PendingMeshMaterialThreadedRequests).Tail;
  }
  pTVar7 = (this->PendingMaterialThreadedRequests).Tail;
  while (pTVar7 != (TNode *)0x0) {
    (this->PendingMaterialThreadedRequests).Tail = pTVar7->NextNode;
    ::operator_delete(pTVar7,0x10);
    pTVar7 = (this->PendingMaterialThreadedRequests).Tail;
  }
  *(undefined ***)&this->field_0x8 = &___7FSingleThreadRunnable__6B_;
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// AddRequest @ 148093da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCThread::AddRequest
          (FODSCThread *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          EShaderPlatform param_3,Type param_4,Type param_5,ODSCRecompileCommand param_6,
          FShaderCompilerFlags *param_7)

{
  FODSCMessageHandler *this_00;
  FODSCMessageHandler *local_res8;
  
  this_00 = ::operator_new(0x78);
  local_res8 = (FODSCMessageHandler *)0x0;
  if (this_00 != (FODSCMessageHandler *)0x0) {
    local_res8 = FODSCMessageHandler::FODSCMessageHandler
                           (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  TQueue<FODSCMessageHandler_*,0>::Enqueue(&this->PendingMaterialThreadedRequests,&local_res8);
  return;
}

// AddShaderPipelineRequest @ 148093e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FODSCThread::AddShaderPipelineRequest
          (FODSCThread *this,EShaderPlatform param_1,Type param_2,Type param_3,FMaterial *param_4,
          FPrimitiveSceneInfo *param_5,FString *param_6,FString *param_7,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_8,int param_9,
          TArray<FShaderId,TSizedDefaultAllocator<32>_> *param_10)

{
  FThreadSafeCounter *pFVar1;
  TMap<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
  *this_00;
  TNode *pTVar2;
  longlong *plVar3;
  FODSCThread *pFVar4;
  FMaterial *pFVar5;
  FPrimitiveSceneInfo *this_01;
  FString *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 SRWLock;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FName *pFVar11;
  FODSCShaderMapData *pFVar12;
  FHashedName *pFVar13;
  FName *pFVar14;
  UPrimitiveComponent *pUVar15;
  FString *pFVar16;
  FODSCThread *pFVar17;
  TNode *pTVar18;
  ForAnyElementType FVar19;
  int iVar20;
  undefined1 *puVar21;
  FName FVar22;
  int iVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  FODSCThread *pFVar26;
  uint uVar27;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  TQueue<FODSCRequestPayload,0> *pTVar30;
  bool bVar31;
  FODSCThread *local_res8;
  EShaderPlatform local_res10;
  Type local_res18;
  Type local_res20;
  FScriptContainerElement *local_140;
  FString local_138;
  int local_128;
  undefined1 local_124 [12];
  int local_118;
  int local_114;
  FString local_110;
  EShaderPlatform local_100;
  Type local_fc;
  Type local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  FString local_e0;
  FString local_d0;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  int local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FString local_98;
  ForAnyElementType local_88;
  ulonglong local_80;
  FHashedName local_78;
  FHashedName local_70;
  FHashedName local_68;
  undefined4 local_60;
  uint local_5c;
  FString local_58;
  
  local_124._4_8_ = &this->RequestHashesRWLock;
  local_140 = (FScriptContainerElement *)0x0;
  bVar31 = false;
  local_128 = 0;
  local_res8 = this;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  AcquireSRWLockExclusive((PSRWLOCK)local_124._4_8_);
  pFVar5 = param_4;
  this_00 = &this->ODSCPointerToNames;
  local_88.Data = (FScriptContainerElement *)param_4;
  uVar27 = (int)((ulonglong)param_4 >> 0x20) * 0x17 + (int)param_4;
  if (*(int *)&(this->ODSCPointerToNames).field_0x8 !=
      *(int *)&(this->ODSCPointerToNames).field_0x34) {
    puVar21 = *(undefined1 **)&(this->ODSCPointerToNames).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->ODSCPointerToNames).field_0x38;
    }
    iVar23 = *(int *)(puVar21 +
                     (ulonglong)(*(int *)&(this->ODSCPointerToNames).field_0x48 - 1U & uVar27) * 4);
    if (iVar23 != -1) {
      do {
        lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)iVar23 * 0x18;
        if (*(FMaterial **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar23 * 0x18) == param_4)
        {
          if (lVar9 != 0) goto LAB_148093f2d;
          break;
        }
        iVar23 = *(int *)(lVar9 + 0x10);
      } while (iVar23 != -1);
    }
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_88;
  TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_&&>_>
            ((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_124,(TKeyInitializer<unsigned___int64_&&> *)(ulonglong)uVar27,
             (bool *)&local_98);
  lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)(int)local_124._0_4_ * 0x18;
LAB_148093f2d:
  pFVar14 = (FName *)(lVar9 + 8);
  if (*pFVar14 == (FName)0x0) {
    puVar10 = (undefined8 *)(**(code **)(pFVar5->_padding_ + 0x530))(pFVar5,&local_138);
    iVar23 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar23 = 0;
    }
    pFVar11 = ::FName::FName((FName *)&local_98,iVar23,(wchar_t *)*puVar10,FNAME_Add);
    *pFVar14 = *pFVar11;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  cVar8 = (**(code **)(pFVar5->_padding_ + 0x418))(pFVar5);
  FVar22 = *pFVar14;
  uVar27 = ::GetTypeHash(FVar22.ComparisonIndex.Value);
  pFVar12 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                        *)&this->RequestHashes,uVar27 + FVar22.Number,pFVar14);
  plVar3 = (longlong *)CONCAT71(param_10._1_7_,(char)param_10);
  lVar9 = plVar3[1];
  plVar24 = (longlong *)*plVar3;
  plVar28 = plVar24 + (longlong)(int)lVar9 * 7;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar9) {
      `TCheckedPointerIterator<FShaderId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_10);
    }
    SRWLock = local_124._4_8_;
    this_01 = param_5;
    pFVar5 = param_4;
    if (plVar24 == plVar28) break;
    param_10._0_1_ = '\0';
    if (*plVar24 == 0) {
      pFVar13 = FHashedName::FHashedName((FHashedName *)&local_88,(wchar_t *)0x0);
    }
    else {
      pFVar13 = FHashedName::FHashedName((FHashedName *)&local_98,(FHashedName *)(*plVar24 + 0x28));
    }
    FHashedName::FHashedName(&local_78,pFVar13);
    if (plVar24[1] == 0) {
      pFVar13 = FHashedName::FHashedName((FHashedName *)&local_138,(wchar_t *)0x0);
    }
    else {
      pFVar13 = FHashedName::FHashedName
                          ((FHashedName *)&local_110,(FHashedName *)(plVar24[1] + 0x30));
    }
    FHashedName::FHashedName(&local_70,pFVar13);
    FHashedName::FHashedName(&local_68,(FHashedName *)(plVar24 + 2));
    local_60 = *(undefined4 *)((longlong)plVar24 + 0x2c);
    local_5c = (uint)*(ushort *)(plVar24 + 6) | local_5c & 0xffff0000;
    TSet<FODSCThread::FODSCShaderId,DefaultKeyFuncs<FODSCThread::FODSCShaderId,0>,FDefaultSetAllocator>
    ::Emplace<FODSCThread::FODSCShaderId>
              (&pFVar12->CurrentRequests,(FODSCShaderId *)local_124,(bool *)&local_78);
    if ((char)param_10 == '\0') {
      bVar31 = true;
    }
    plVar24 = plVar24 + 7;
  }
  if ((cVar8 == '\0') ||
     (*(int *)&(pFVar12->CurrentRequests).Elements.field_0x8 -
      *(int *)&(pFVar12->CurrentRequests).Elements.field_0x34 < 2)) {
    if ((bVar31) &&
       ((param_5 != (FPrimitiveSceneInfo *)0x0 &&
        (pUVar15 = FPrimitiveSceneInfo::GetComponentForDebugOnly(param_5),
        pUVar15 != (UPrimitiveComponent *)0x0)))) {
      pUVar15 = FPrimitiveSceneInfo::GetComponentForDebugOnly(this_01);
      if (*(UObjectBaseUtility **)&pUVar15->field_0xa8 != (UObjectBaseUtility *)0x0) {
        pFVar16 = UObjectBaseUtility::GetPathName
                            (*(UObjectBaseUtility **)&pUVar15->field_0xa8,&local_138,(UObject *)0x0)
        ;
        if (&local_58 != pFVar16) {
          local_140 = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128 = (pFVar16->Data).ArrayNum;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    bVar31 = false;
  }
  iVar23 = local_128;
  if (1 < local_128) {
    iVar20 = local_128 + -1;
    if (local_128 == 0) {
      iVar20 = 0;
    }
    pFVar14 = ::FName::FName((FName *)&param_4,iVar20,(wchar_t *)local_140,FNAME_Add);
    pFVar12->ActorPath = *pFVar14;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar31) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"AddShaderPipelineRequest_AddRequest");
    bVar31 = -1 < CpuChannel->Enabled;
    if (bVar31) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId450,"AddShaderPipelineRequest_AddRequest",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCThread.cpp"
                 ,0x1c2);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId450);
    }
    (**(code **)(pFVar5->_padding_ + 0x530))(pFVar5,&local_110);
    if ((cVar8 == '\0') && (1 < iVar23)) {
      ::FString::AppendChars(&local_110,":::",3);
      iVar20 = iVar23 + -1;
      if (iVar23 == 0) {
        iVar20 = 0;
      }
      ::FString::AppendChars(&local_110,(wchar_t *)local_140,iVar20);
    }
    ::FString::ConcatFF(&local_138,&local_110,param_6);
    pFVar16 = param_7;
    ::FString::ConcatFF(&local_98,&local_138,param_7);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    pTVar7 = param_8;
    iVar23 = param_8->ArrayNum;
    pFVar25 = (param_8->AllocatorInstance).Data;
    pFVar29 = pFVar25 + (longlong)iVar23 * 0x10;
    while( true ) {
      if (pTVar7->ArrayNum != iVar23) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_4);
      }
      if (pFVar25 == pFVar29) break;
      iVar20 = *(int *)(pFVar25 + 8) + -1;
      if (*(int *)(pFVar25 + 8) == 0) {
        iVar20 = 0;
      }
      ::FString::AppendChars(&local_98,*(wchar_t **)pFVar25,iVar20);
      pFVar25 = pFVar25 + 0x10;
    }
    FVar22 = (FName)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar22 = (FName)local_98.Data.AllocatorInstance.Data;
    }
    FMD5::HashAnsiString((FString *)&local_88,(wchar_t *)FVar22);
    FVar19.Data = local_110.Data.AllocatorInstance.Data;
    pFVar6 = param_6;
    iVar23 = local_110.Data.ArrayNum;
    if (cVar8 == '\0') {
      pTVar30 = &local_res8->PendingMeshMaterialThreadedRequests;
      local_100 = local_res10;
      local_fc = local_res18;
      local_f8 = local_res20;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = CONCAT44(local_e8._4_4_,iVar23);
      if (iVar23 == 0) {
        local_e8 = local_110.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar23,0,&local_f0,iVar23,(int *)((longlong)&local_e8 + 4));
        memcpy(local_f0.Data,FVar19.Data,(longlong)iVar23 * 2);
      }
      ::FString::FString(&local_e0,pFVar6);
      ::FString::FString(&local_d0,pFVar16);
      iVar23 = pTVar7->ArrayNum;
      pFVar25 = (pTVar7->AllocatorInstance).Data;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = CONCAT44(local_b8._4_4_,iVar23);
      if (iVar23 == 0) {
        local_b8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar23,0,&local_c0,iVar23,(int *)((longlong)&local_b8 + 4));
        ConstructItems<FString,FString,int>(local_c0.Data,(FString *)pFVar25,iVar23);
      }
      FVar19.Data = local_88.Data;
      local_b0 = param_9;
      local_a8.Data = (FScriptContainerElement *)0x0;
      iVar23 = (int)local_80;
      local_a0 = CONCAT44(local_a0._4_4_,iVar23);
      if (iVar23 == 0) {
        local_a0 = local_80 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar23,0,&local_a8,iVar23,(int *)((longlong)&local_a0 + 4));
        memcpy(local_a8.Data,FVar19.Data,(longlong)iVar23 * 2);
      }
      pTVar18 = ::operator_new(0x70);
      if (pTVar18 != (TNode *)0x0) {
        pTVar18->NextNode = (TNode *)0x0;
        (pTVar18->Item).ShaderPlatform = local_100;
        (pTVar18->Item).FeatureLevel = local_fc;
        (pTVar18->Item).QualityLevel = local_f8;
        (pTVar18->Item).MaterialName.Data.AllocatorInstance.Data = local_f0.Data;
        local_f0.Data = (FScriptContainerElement *)0x0;
        (pTVar18->Item).MaterialName.Data.ArrayNum = (int)local_e8;
        (pTVar18->Item).MaterialName.Data.ArrayMax = local_e8._4_4_;
        local_e8 = 0;
        (pTVar18->Item).VertexFactoryName.Data.AllocatorInstance.Data =
             local_e0.Data.AllocatorInstance.Data;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar18->Item).VertexFactoryName.Data.ArrayNum = local_e0.Data.ArrayNum;
        (pTVar18->Item).VertexFactoryName.Data.ArrayMax = local_e0.Data.ArrayMax;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        (pTVar18->Item).PipelineName.Data.AllocatorInstance.Data =
             local_d0.Data.AllocatorInstance.Data;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar18->Item).PipelineName.Data.ArrayNum = local_d0.Data.ArrayNum;
        (pTVar18->Item).PipelineName.Data.ArrayMax = local_d0.Data.ArrayMax;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        (pTVar18->Item).ShaderTypeNames.AllocatorInstance.Data = local_c0.Data;
        local_c0.Data = (FScriptContainerElement *)0x0;
        (pTVar18->Item).ShaderTypeNames.ArrayNum = (int)local_b8;
        (pTVar18->Item).ShaderTypeNames.ArrayMax = local_b8._4_4_;
        local_b8 = 0;
        (pTVar18->Item).PermutationId = local_b0;
        (pTVar18->Item).RequestHash.Data.AllocatorInstance.Data = local_a8.Data;
        local_a8.Data = (FScriptContainerElement *)0x0;
        (pTVar18->Item).RequestHash.Data.ArrayNum = (int)local_a0;
        (pTVar18->Item).RequestHash.Data.ArrayMax = local_a0._4_4_;
        local_a0 = 0;
        if (((ulonglong)pTVar30 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2 = pTVar30->Head;
        pTVar30->Head = pTVar18;
        UNLOCK();
        if (((ulonglong)pTVar2 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2->NextNode = pTVar18;
        UNLOCK();
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      DestructItems<FString,int>((FString *)local_c0.Data,(int)local_b8);
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      FVar19.Data = local_f0.Data;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        FVar19.Data = local_f0.Data;
      }
    }
    else {
      pFVar26 = (FODSCThread *)0x0;
      local_124._4_8_ = (FPlatformRWLock *)0x0;
      local_118 = iVar23;
      if (iVar23 == 0) {
        local_114 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar23,0,(ForAnyElementType *)(local_124 + 4),iVar23,&local_114);
        memcpy((void *)local_124._4_8_,FVar19.Data,(longlong)iVar23 * 2);
      }
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,(ForAnyElementType *)&local_138,1,&local_138.Data.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_138.Data.AllocatorInstance.Data,(FString *)(local_124 + 4),1);
      if ((FPlatformRWLock *)local_124._4_8_ != (FPlatformRWLock *)0x0) {
        FMemory::Free((void *)local_124._4_8_);
      }
      pFVar4 = local_res8;
      pFVar17 = ::operator_new(0x78);
      iVar23 = local_138.Data.ArrayNum;
      FVar19.Data = local_138.Data.AllocatorInstance.Data;
      if (pFVar17 != (FODSCThread *)0x0) {
        pFVar1 = &pFVar17->ExitRequest;
        *(undefined8 *)&pFVar17->field_0x8 = 0;
        *(undefined8 *)pFVar1 = 0;
        *(undefined ***)pFVar17 = &___7FODSCMessageHandler__6B_;
        *(int *)&pFVar17->field_0x18 = local_138.Data.ArrayNum;
        if (local_138.Data.ArrayNum == 0) {
          *(undefined4 *)&pFVar17->field_0x1c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_138.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                     local_138.Data.ArrayNum,(int *)&pFVar17->field_0x1c);
          ConstructItems<FString,FString,int>(*(void **)pFVar1,(FString *)FVar19.Data,iVar23);
        }
        (pFVar17->PendingMaterialThreadedRequests).Head = (TNode *)0x0;
        (pFVar17->PendingMaterialThreadedRequests).Tail = (TNode *)0x0;
        *(EShaderPlatform *)&(pFVar17->PendingMeshMaterialThreadedRequests).Head = local_res10;
        *(Type *)((longlong)&(pFVar17->PendingMeshMaterialThreadedRequests).Head + 4) = local_res18;
        *(Type *)&(pFVar17->PendingMeshMaterialThreadedRequests).Tail = local_res20;
        *(undefined4 *)((longlong)&(pFVar17->PendingMeshMaterialThreadedRequests).Tail + 4) = 3;
        (pFVar17->CompletedThreadedRequests).Head = (TNode *)0x0;
        (pFVar17->CompletedThreadedRequests).Tail = (TNode *)0x0;
        (pFVar17->RequestHashesRWLock).Mutex.Mutex.Ptr = (void *)0x0;
        (pFVar17->RequestHashCriticalSection).CriticalSection.Opaque1[0] = (void *)0x0;
        (pFVar17->RequestHashCriticalSection).CriticalSection.Opaque2[0] = 0;
        (pFVar17->RequestHashCriticalSection).CriticalSection.Opaque2[1] = 0;
        (pFVar17->RequestHashCriticalSection).CriticalSection.Opaque3[0] = (void *)0x0;
        (pFVar17->RequestHashCriticalSection).CriticalSection.Opaque3[1] = (void *)0x0;
        pFVar26 = pFVar17;
      }
      local_res8 = pFVar26;
      TQueue<FODSCMessageHandler_*,0>::Enqueue
                (&pFVar4->PendingMaterialThreadedRequests,(FODSCMessageHandler **)&local_res8);
      DestructItems<FString,int>
                ((FString *)local_138.Data.AllocatorInstance.Data,local_138.Data.ArrayNum);
      FVar19.Data = local_138.Data.AllocatorInstance.Data;
    }
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
    }
    if ((FMaterial *)local_88.Data != (FMaterial *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (local_140 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}

// CheckIfRequestAlreadySent @ 148098710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FODSCThread::CheckIfRequestAlreadySent
          (FODSCThread *this,TArray<FShaderId,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2)

{
  int iVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  uint uVar5;
  FName *pFVar6;
  FODSCShaderMapData *pFVar7;
  FHashedName *pFVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  FHashedName local_res20;
  FHashedName local_78;
  FHashedName local_70;
  FHashedName local_68;
  FODSCShaderId local_60;
  
  AcquireSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  pFVar6 = TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
           ::Find((TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
                   *)&this->ODSCPointerToNames,(ulong64)param_2);
  if (pFVar6 != (FName *)0x0) {
    pFVar7 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
             ::Find((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                     *)&this->RequestHashes,*pFVar6);
    if (pFVar7 != (FODSCShaderMapData *)0x0) {
      iVar1 = param_1->ArrayNum;
      pFVar13 = (param_1->AllocatorInstance).Data;
      pFVar15 = pFVar13 + (longlong)iVar1 * 0x38;
      while( true ) {
        if (param_1->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FShaderId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar13 == pFVar15) {
          bVar12 = true;
          goto LAB_1480988b1;
        }
        if (*(longlong *)pFVar13 == 0) {
          pFVar8 = FHashedName::FHashedName(&local_78,(wchar_t *)0x0);
        }
        else {
          pFVar8 = FHashedName::FHashedName
                             (&local_res20,(FHashedName *)(*(longlong *)pFVar13 + 0x28));
        }
        FHashedName::FHashedName(&local_60.ShaderTypeHashedName,pFVar8);
        if (*(longlong *)(pFVar13 + 8) == 0) {
          pFVar8 = FHashedName::FHashedName(&local_68,(wchar_t *)0x0);
        }
        else {
          pFVar8 = FHashedName::FHashedName
                             (&local_70,(FHashedName *)(*(longlong *)(pFVar13 + 8) + 0x30));
        }
        FHashedName::FHashedName(&local_60.VFTypeHashedName,pFVar8);
        FHashedName::FHashedName(&local_60.ShaderPipelineName,(FHashedName *)(pFVar13 + 0x10));
        iVar2 = *(int *)(pFVar13 + 0x2c);
        uVar11 = (uint)*(ushort *)(pFVar13 + 0x30) | local_60._28_4_ & 0xffff0000;
        local_60.PermutationId = iVar2;
        local_60._28_4_ = uVar11;
        uVar5 = ::GetTypeHash(&local_60);
        if (*(int *)&(pFVar7->CurrentRequests).Elements.field_0x8 ==
            *(int *)&(pFVar7->CurrentRequests).Elements.field_0x34) break;
        FVar3 = (pFVar7->CurrentRequests).Hash.SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&(pFVar7->CurrentRequests).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        iVar14 = *(int *)((longlong)FVar10 +
                         (ulonglong)((pFVar7->CurrentRequests).HashSize - 1U & uVar5) * 4);
        if (iVar14 == -1) break;
        lVar4 = *(longlong *)&(pFVar7->CurrentRequests).Elements;
        while ((((lVar9 = (longlong)iVar14,
                 *(ulong64 *)(lVar4 + lVar9 * 0x28) != local_60.ShaderTypeHashedName.Hash ||
                 (*(ulong64 *)(lVar4 + 0x10 + lVar9 * 0x28) != local_60.ShaderPipelineName.Hash)) ||
                (*(ulong64 *)(lVar4 + 8 + lVar9 * 0x28) != local_60.VFTypeHashedName.Hash)) ||
               ((*(int *)(lVar4 + 0x18 + lVar9 * 0x28) != iVar2 ||
                (((uVar11 ^ *(uint *)(lVar4 + 0x1c + lVar9 * 0x28)) & 0xffff) != 0))))) {
          iVar14 = *(int *)(lVar4 + 0x20 + lVar9 * 0x28);
          if (iVar14 == -1) goto LAB_1480988ae;
        }
        if (iVar14 == -1) break;
        pFVar13 = pFVar13 + 0x38;
      }
    }
  }
LAB_1480988ae:
  bVar12 = false;
LAB_1480988b1:
  ReleaseSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  return bVar12;
}

// CheckODSCConnection @ 1480988f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FODSCThread::CheckODSCConnection(FODSCThread *this)

{
  ICookOnTheFlyServerConnection *pIVar1;
  char cVar2;
  bool bVar3;
  
  pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
  if ((pIVar1 == (ICookOnTheFlyServerConnection *)0x0) ||
     (cVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(), cVar2 == '\0')) {
    if ((this->ExitRequest).Counter != 0) {
      return false;
    }
    if (3 < (byte)LogODSC._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
    }
    bVar3 = ConnectToODSCHost(this);
    if (!bVar3) {
      return false;
    }
  }
  pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
  if ((pIVar1 != (ICookOnTheFlyServerConnection *)0x0) &&
     (cVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(), cVar2 != '\0')) {
    return true;
  }
  return false;
}

// ConnectToODSCHost @ 14809a8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FODSCThread::ConnectToODSCHost(FODSCThread *this)

{
  FName FVar1;
  ICookOnTheFlyServerConnection *pIVar2;
  char cVar3;
  int iVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  undefined8 *puVar7;
  TUniquePtr<UE::Cook::ICookOnTheFlyServerConnection,TDefaultDelete<UE::Cook::ICookOnTheFlyServerConnection>_>
  *pTVar8;
  bool bVar9;
  undefined8 *local_res8;
  FName local_res10;
  ForAnyElementType local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_18 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  local_20 = CONCAT44(local_20._4_4_,iVar4 + 1);
  ::FString::FString((FString *)(local_28.Data + (longlong)iVar4 * 0x10),&this->ODSCHostIP);
  pFVar5 = ::FName::FName(&local_res10,L"CookOnTheFly");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,&local_res8,&local_28);
  pTVar8 = &this->CookOnTheFlyServerConnection;
  if (pTVar8 != (TUniquePtr<UE::Cook::ICookOnTheFlyServerConnection,TDefaultDelete<UE::Cook::ICookOnTheFlyServerConnection>_>
                 *)puVar7) {
    pIVar2 = pTVar8->Ptr;
    pTVar8->Ptr = (ICookOnTheFlyServerConnection *)*puVar7;
    *puVar7 = 0;
    if (pIVar2 != (ICookOnTheFlyServerConnection *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar8->Ptr == (ICookOnTheFlyServerConnection *)0x0) {
    if (2 < (byte)LogODSC._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
    }
    bVar9 = false;
  }
  else {
    cVar3 = (**(code **)((longlong)*pTVar8->Ptr + 0x30))();
    bVar9 = cVar3 != '\0';
  }
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return bVar9;
}

// Exit @ 14809fcd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::Exit(FODSCThread *this)

{
  return;
}

// FindMaterialShaderMap @ 1480a1df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderMap * __thiscall
FODSCThread::FindMaterialShaderMap(FODSCThread *this,FString *param_1,FMaterialShaderMapId *param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  FODSCShaderMapData *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FMaterialShaderMap *pFVar9;
  FName local_res8;
  
  AcquireSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  iVar3 = (param_1->Data).ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar7,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pFVar6 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           ::Find((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                   *)&this->RequestHashes,*pFVar5);
  pFVar9 = (FMaterialShaderMap *)0x0;
  if (pFVar6 != (FODSCShaderMapData *)0x0) {
    pFVar8 = (pFVar6->MaterialShaderMaps).AllocatorInstance.Data;
    iVar7 = (pFVar6->MaterialShaderMaps).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar7 * 8;
    while( true ) {
      if ((pFVar6->MaterialShaderMaps).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TRefCountPtr<FMaterialShaderMap>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      pFVar9 = (FMaterialShaderMap *)0x0;
      if (pFVar8 == pFVar1) break;
      pFVar9 = *(FMaterialShaderMap **)pFVar8;
      if (((param_2->QualityLevel == Num) ||
          (TVar2 = (pFVar9->ShaderMapId).QualityLevel, TVar2 == Num)) ||
         (param_2->QualityLevel == TVar2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((pFVar9->ShaderMapId).FeatureLevel == param_2->FeatureLevel) && (bVar4)) break;
      pFVar8 = pFVar8 + 8;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  return pFVar9;
}

// GetCompletedRequests @ 1480a41e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCThread::GetCompletedRequests
          (FODSCThread *this,TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FODSCMessageHandler *local_18 [2];
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCThread.cpp"
                         ,0x1e1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  while( true ) {
    pTVar1 = ((this->CompletedThreadedRequests).Tail)->NextNode;
    if (pTVar1 == (TNode *)0x0) {
      return;
    }
    local_18[0] = pTVar1->Item;
    pTVar2 = (this->CompletedThreadedRequests).Tail;
    (this->CompletedThreadedRequests).Tail = pTVar1;
    pTVar1->Item = (FODSCMessageHandler *)0x0;
    ::operator_delete(pTVar2,0x10);
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    *(FODSCMessageHandler **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0]
    ;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetPendingShaderData @ 1480a8730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FODSCThread::GetPendingShaderData
          (FODSCThread *this,bool *param_1,bool *param_2,uint *param_3,uint *param_4)

{
  atomic<unsigned_int> aVar1;
  
  *param_1 = (bool)this->bIsConnectedToODSCServer;
  *param_2 = (bool)this->bHasPendingGlobalShaders;
  *param_3 = (uint)this->NumPendingMaterialsRecompile;
  aVar1 = this->NumPendingMaterialsShaders;
  *param_4 = (uint)aVar1;
  if (((*param_2 == false) && (*param_3 == 0)) && (aVar1 == (atomic<unsigned_int>)0x0)) {
    return false;
  }
  return true;
}

// Init @ 1480ae8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FODSCThread::Init(FODSCThread *this)

{
  return true;
}

// Process @ 1480bdf80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::Process(FODSCThread *this)

{
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  atomic<bool> aVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TNode *pTVar12;
  ulonglong uVar13;
  TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  atomic<unsigned_int> aVar18;
  ulonglong uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FODSCMessageHandler *local_68;
  FODSCMessageHandler *local_60;
  FODSCMessageHandler *local_58;
  TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> local_50;
  
  iVar9 = GODSCMaxPayloadPerRequests;
  if (GODSCMaxPayloadPerRequests < 1) {
    iVar9 = 1;
  }
  this->MaxPayloadPerRequests = iVar9;
  local_60 = (FODSCMessageHandler *)0x0;
  while (pTVar2 = ((this->PendingMaterialThreadedRequests).Tail)->NextNode, pTVar2 != (TNode *)0x0)
  {
    local_60 = pTVar2->Item;
    pTVar3 = (this->PendingMaterialThreadedRequests).Tail;
    (this->PendingMaterialThreadedRequests).Tail = pTVar2;
    pTVar2->Item = (FODSCMessageHandler *)0x0;
    ::operator_delete(pTVar3,0x10);
    pTVar14 = &this->PendingRequestsMaterialAndGlobal;
    pFVar4 = (pTVar14->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 <
         pFVar4 + (longlong)(this->PendingRequestsMaterialAndGlobal).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->PendingRequestsMaterialAndGlobal).ArrayNum;
    piVar1 = &(this->PendingRequestsMaterialAndGlobal).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar14->AllocatorInstance,piVar1);
    }
    (this->PendingRequestsMaterialAndGlobal).ArrayNum = iVar9 + 1;
    *(FODSCMessageHandler **)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_60;
  }
  if (this->bHasDefaultConnection == false) {
    aVar8 = (atomic<bool>)CheckODSCConnection(this);
  }
  else {
    aVar8 = (atomic<bool>)0x1;
  }
  pTVar14 = &this->PendingRequestsMaterialAndGlobal;
  LOCK();
  this->bIsConnectedToODSCServer = aVar8;
  UNLOCK();
  if (this->bIsConnectedToODSCServer != (atomic<bool>)0x0) {
    pFVar16 = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    uVar11 = (this->PendingRequestsMaterialAndGlobal).ArrayNum;
    uVar13 = (ulonglong)(int)uVar11;
    local_50.ArrayMax = (this->PendingRequestsMaterialAndGlobal).ArrayMax;
    aVar18 = (atomic<unsigned_int>)0x0;
    pFVar4 = pFVar16 + uVar13 * 8;
    aVar8 = (atomic<bool>)0x0;
    (this->PendingRequestsMaterialAndGlobal).ArrayNum = 0;
    (this->PendingRequestsMaterialAndGlobal).ArrayMax = 0;
    local_50.AllocatorInstance.Data = pFVar16;
    local_50.ArrayNum = uVar11;
    while( true ) {
      if ((uint)uVar13 != uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FODSCMessageHandler_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        uVar13 = (ulonglong)(uint)local_50.ArrayNum;
      }
      iVar9 = local_50.ArrayNum;
      if (pFVar16 == pFVar4) break;
      if (*(int *)(*(longlong *)pFVar16 + 0x3c) == 3) {
        aVar18 = (atomic<unsigned_int>)((int)aVar18 + *(int *)(*(longlong *)pFVar16 + 0x18));
        pFVar16 = pFVar16 + 8;
      }
      else {
        aVar8 = (atomic<bool>)0x1;
        pFVar16 = pFVar16 + 8;
      }
    }
    this->bHasPendingGlobalShaders = aVar8;
    uVar13 = (ulonglong)local_50.ArrayNum;
    this->NumPendingMaterialsRecompile = aVar18;
    pFVar4 = local_50.AllocatorInstance.Data + uVar13 * 8;
    FVar17.Data = local_50.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar13 != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FODSCMessageHandler_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar17.Data == pFVar4) break;
      local_58 = *(FODSCMessageHandler **)FVar17.Data;
      bVar7 = SendMessageToServer(this,(IFileServerMessageHandler *)local_58);
      if (bVar7) {
        pTVar12 = ::operator_new(0x10);
        if (pTVar12 == (TNode *)0x0) goto LAB_1480be26b;
        pTVar12->NextNode = (TNode *)0x0;
        pTVar12->Item = local_58;
        pTVar5 = (this->CompletedThreadedRequests).Head;
        (this->CompletedThreadedRequests).Head = pTVar12;
        pTVar5->NextNode = pTVar12;
        FVar17.Data = FVar17.Data + 8;
        uVar13 = (ulonglong)(uint)local_50.ArrayNum;
      }
      else {
        pFVar16 = (pTVar14->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar16 + (longlong)(this->PendingRequestsMaterialAndGlobal).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->PendingRequestsMaterialAndGlobal).ArrayNum;
        if (iVar10 == (this->PendingRequestsMaterialAndGlobal).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar14->AllocatorInstance,
                              &(this->PendingRequestsMaterialAndGlobal).ArrayMax);
          (this->PendingRequestsMaterialAndGlobal).ArrayNum = iVar10;
        }
        (this->PendingRequestsMaterialAndGlobal).ArrayNum = iVar10 + 1;
        *(FODSCMessageHandler **)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_58;
LAB_1480be26b:
        uVar13 = (ulonglong)(uint)local_50.ArrayNum;
        FVar17.Data = FVar17.Data + 8;
      }
    }
    pTVar14 = &this->PendingRequestsPipeline;
    uVar13 = 0;
    this->bHasPendingGlobalShaders = (atomic<bool>)0x0;
    this->NumPendingMaterialsRecompile = (atomic<unsigned_int>)0x0;
    if (&local_50 != pTVar14) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      local_50.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = (this->PendingRequestsPipeline).ArrayNum;
      local_50.ArrayMax = (this->PendingRequestsPipeline).ArrayMax;
      (this->PendingRequestsPipeline).ArrayNum = 0;
      (this->PendingRequestsPipeline).ArrayMax = 0;
    }
    this->NumPendingMaterialsShaders = (atomic<unsigned_int>)0x0;
    CollectPendingMeshMaterialRequests
              (&this->PendingMeshMaterialThreadedRequests,&local_50,
               &this->NumPendingMaterialsShaders,this->MaxPayloadPerRequests);
    uVar19 = uVar13;
    if (0 < local_50.ArrayNum) {
      do {
        uVar15 = (uint)uVar13;
        uVar11 = 0;
        if ((int)uVar15 < local_50.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_68 = *(FODSCMessageHandler **)(local_50.AllocatorInstance.Data + uVar19);
        bVar7 = SendMessageToServer(this,(IFileServerMessageHandler *)local_68);
        if (bVar7) {
          pTVar12 = ::operator_new(0x10);
          if (pTVar12 != (TNode *)0x0) {
            pTVar12->NextNode = (TNode *)0x0;
            pTVar12->Item = local_68;
            pTVar5 = (this->CompletedThreadedRequests).Head;
            (this->CompletedThreadedRequests).Head = pTVar12;
            pTVar5->NextNode = pTVar12;
          }
        }
        else {
          pFVar4 = (pTVar14->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               pFVar4 + (longlong)(this->PendingRequestsPipeline).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (this->PendingRequestsPipeline).ArrayNum;
          piVar1 = &(this->PendingRequestsPipeline).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar14->AllocatorInstance,piVar1);
          }
          (this->PendingRequestsPipeline).ArrayNum = iVar9 + 1;
          *(FODSCMessageHandler **)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               local_68;
        }
        LOCK();
        this->NumPendingMaterialsShaders =
             (atomic<unsigned_int>)
             ((int)this->NumPendingMaterialsShaders - (local_68->RequestBatch).ArrayNum);
        UNLOCK();
        CollectPendingMeshMaterialRequests
                  (&this->PendingMeshMaterialThreadedRequests,&local_50,
                   &this->NumPendingMaterialsShaders,this->MaxPayloadPerRequests);
        uVar13 = (ulonglong)(uVar15 + 1);
        uVar19 = uVar19 + 8;
      } while ((int)(uVar15 + 1) < local_50.ArrayNum);
    }
    this->NumPendingMaterialsShaders = (atomic<unsigned_int>)0x0;
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->WakeupEvent->_padding_ + 0x18))();
  (**(code **)(this->AllRequestsDoneEvent->_padding_ + 0x10))();
  return;
}

// RegisterMaterialShaderMaps @ 1480c2090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCThread::RegisterMaterialShaderMaps
          (FODSCThread *this,FString *param_1,
          TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FODSCShaderMapData *pFVar10;
  FHashedName *pFVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  longlong *plVar18;
  uint *puVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 auStackY_268 [32];
  undefined1 local_228;
  undefined1 local_227 [3];
  uint local_224;
  int local_220;
  FODSCShaderId local_218;
  int local_1f8;
  FName local_1f4;
  TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_> *local_1e8;
  FScriptContainerElement *local_1e0;
  FPlatformRWLock *local_1d8;
  FODSCShaderId local_1d0;
  longlong *local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  FName local_150;
  FHashedName local_148;
  FHashedName local_140;
  FHashedName local_138;
  FHashedName local_130;
  FHashedName local_128;
  FHashedName local_120;
  FHashedName local_118;
  FHashedName local_110 [4];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  FHashedName local_88;
  longlong local_80;
  longlong lStack_78;
  undefined4 local_70;
  int local_6c;
  ushort local_68;
  longlong local_60;
  longlong lStack_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d8 = &this->RequestHashesRWLock;
  local_1e8 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)local_1d8);
  iVar17 = (param_1->Data).ArrayNum;
  iVar15 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar15 = 0;
  }
  pFVar9 = ::FName::FName(&local_150,iVar15,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar3 = *pFVar9;
  local_1f4 = FVar3;
  uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  pFVar10 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                        *)&this->RequestHashes,uVar8 + FVar3.Number,&local_1f4);
  if (pFVar10 != (FODSCShaderMapData *)param_2) {
    DestructItems<TRefCountPtr<FMaterialShaderMap>,int>
              ((TRefCountPtr<FMaterialShaderMap> *)
               (pFVar10->MaterialShaderMaps).AllocatorInstance.Data,
               (pFVar10->MaterialShaderMaps).ArrayNum);
    iVar17 = param_2->ArrayNum;
    piVar1 = &(pFVar10->MaterialShaderMaps).ArrayMax;
    pFVar21 = (param_2->AllocatorInstance).Data;
    (pFVar10->MaterialShaderMaps).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,(ForAnyElementType *)pFVar10,iVar17,piVar1);
      ConstructItems<TRefCountPtr<FMaterialShaderMap>,TRefCountPtr<FMaterialShaderMap>,int>
                ((pFVar10->MaterialShaderMaps).AllocatorInstance.Data,
                 (TRefCountPtr<FMaterialShaderMap> *)pFVar21,iVar17);
    }
  }
  local_224 = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)local_224;
  pFVar21 = (param_2->AllocatorInstance).Data;
  local_1e0 = pFVar21 + uVar13 * 8;
  do {
    pFVar6 = local_1e0;
    if (param_2->ArrayNum != (int)uVar13) {
      local_228 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FMaterialShaderMap>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_228);
    }
    if (pFVar21 == pFVar6) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_1d8);
      return;
    }
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    uVar8 = 0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    FMaterialShaderMap::GetShaderList
              (*(FMaterialShaderMap **)pFVar21,
               (TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
                *)local_e8);
    uVar20 = local_c0;
    uStack_1a4 = 1;
    uStack_194 = uVar8;
    local_190 = uVar8;
    if (local_c0 != 0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar22 = *puVar19;
      local_190 = 0;
      uVar8 = 0;
      while (uVar22 == 0) {
        lVar14 = (longlong)(int)uVar8;
        local_190 = local_190 + 0x20;
        uVar8 = uVar8 + 1;
        uStack_194 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
        goto LAB_1480c22a1;
        uVar22 = puVar19[lVar14 + 1];
      }
      uStack_1a4 = -uVar22 & uVar22;
      uVar13 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1f8 = (int)lVar14;
      uStack_194 = (local_190 - 1) + local_1f8;
      if ((int)local_c0 < (int)uStack_194) {
        uStack_194 = local_c0;
      }
    }
LAB_1480c22a1:
    local_1b0 = (longlong *)local_e8;
    uStack_18c = local_ec;
    local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uVar22 = local_c0 & 0xffffffe0;
    iStack_188 = local_e8._8_4_ - local_b4;
    TStack_178._padding_ = CONCAT44(uStack_1a4,uVar8);
    uStack_198 = 0xffffffff;
    TStack_178.CurrentBitIndex = uStack_194;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)local_c0 >> 5;
    TStack_178._28_4_ = local_ec;
    TStack_178.BaseBitIndex = local_190;
    uStack_158 = CONCAT44(uStack_184,iStack_188);
    bVar12 = (byte)local_c0;
    uStack_1a8 = uVar8;
    local_180 = local_1b0;
    TStack_178.Array = local_1a0;
    if (((int)local_c0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar20 != local_c0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar8 = -1 << (bVar12 & 0x1f) & puVar19[iVar17];
      while (uVar8 == 0) {
        lVar14 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar20 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1480c23d0;
        uVar8 = puVar19[lVar14 + 1];
      }
      uVar13 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_220 = (int)lVar14;
      uVar20 = local_220 + -1 + uVar22;
      if ((int)local_c0 < (int)uVar20) {
        uVar20 = local_c0;
      }
    }
LAB_1480c23d0:
    while( true ) {
      plVar18 = local_180;
      if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
        local_227[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
      }
      if (((TStack_178.CurrentBitIndex == uVar20) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar18 == (longlong *)local_e8)) break;
      plVar18 = (longlong *)(*plVar18 + (longlong)TStack_178.CurrentBitIndex * 0x50);
      local_98 = *plVar18;
      local_90 = plVar18[1];
      FHashedName::FHashedName(&local_88,(FHashedName *)(plVar18 + 2));
      local_80 = plVar18[3];
      lStack_78 = plVar18[4];
      local_70 = (undefined4)plVar18[5];
      local_6c = *(int *)((longlong)plVar18 + 0x2c);
      local_68 = *(ushort *)(plVar18 + 6);
      local_60 = plVar18[7];
      lStack_58 = plVar18[8];
      if (local_98 == 0) {
        pFVar11 = FHashedName::FHashedName(&local_140,(wchar_t *)0x0);
      }
      else {
        pFVar11 = FHashedName::FHashedName(&local_148,(FHashedName *)(local_98 + 0x28));
      }
      FHashedName::FHashedName(&local_218.ShaderTypeHashedName,pFVar11);
      if (local_90 == 0) {
        pFVar11 = FHashedName::FHashedName(&local_130,(wchar_t *)0x0);
      }
      else {
        pFVar11 = FHashedName::FHashedName(&local_138,(FHashedName *)(local_90 + 0x30));
      }
      FHashedName::FHashedName(&local_218.VFTypeHashedName,pFVar11);
      FHashedName::FHashedName(&local_218.ShaderPipelineName,&local_88);
      iVar17 = local_6c;
      uVar22 = local_218._28_4_ & 0xffff0000 | (uint)local_68;
      local_218.PermutationId = local_6c;
      local_218._28_4_ = uVar22;
      uVar8 = ::GetTypeHash(&local_218);
      if (*(int *)&(pFVar10->CurrentRequests).Elements.field_0x8 !=
          *(int *)&(pFVar10->CurrentRequests).Elements.field_0x34) {
        FVar4 = (pFVar10->CurrentRequests).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(pFVar10->CurrentRequests).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar4;
        }
        iVar15 = *(int *)((longlong)FVar16 +
                         (ulonglong)((pFVar10->CurrentRequests).HashSize - 1U & uVar8) * 4);
        if (iVar15 != -1) {
          lVar14 = *(longlong *)&(pFVar10->CurrentRequests).Elements;
          do {
            lVar2 = lVar14 + (longlong)iVar15 * 0x28;
            if (((*(ulong64 *)(lVar14 + (longlong)iVar15 * 0x28) ==
                  local_218.ShaderTypeHashedName.Hash) &&
                (*(ulong64 *)(lVar2 + 0x10) == local_218.ShaderPipelineName.Hash)) &&
               ((*(ulong64 *)(lVar2 + 8) == local_218.VFTypeHashedName.Hash &&
                ((*(int *)(lVar2 + 0x18) == iVar17 &&
                 (((uVar22 ^ *(uint *)(lVar2 + 0x1c)) & 0xffff) == 0)))))) {
              if ((iVar15 != -1) && (lVar2 != 0)) {
                if (local_98 == 0) {
                  pFVar11 = FHashedName::FHashedName(&local_120,(wchar_t *)0x0);
                }
                else {
                  pFVar11 = FHashedName::FHashedName(&local_128,(FHashedName *)(local_98 + 0x28));
                }
                FHashedName::FHashedName(&local_1d0.ShaderTypeHashedName,pFVar11);
                if (local_90 == 0) {
                  pFVar11 = FHashedName::FHashedName(local_110,(wchar_t *)0x0);
                }
                else {
                  pFVar11 = FHashedName::FHashedName(&local_118,(FHashedName *)(local_90 + 0x30));
                }
                FHashedName::FHashedName(&local_1d0.VFTypeHashedName,pFVar11);
                FHashedName::FHashedName(&local_1d0.ShaderPipelineName,&local_88);
                local_1d0.PermutationId = local_6c;
                local_1d0._28_4_ = local_1d0._28_4_ & 0xffff0000 | (uint)local_68;
                if (*(int *)&(pFVar10->CurrentRequests).Elements.field_0x8 !=
                    *(int *)&(pFVar10->CurrentRequests).Elements.field_0x34) {
                  uVar8 = ::GetTypeHash(&local_1d0);
                  TSet<FODSCThread::FODSCShaderId,DefaultKeyFuncs<FODSCThread::FODSCShaderId,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FODSCThread::FODSCShaderId>
                            (&pFVar10->CurrentRequests,uVar8,&local_1d0);
                }
              }
              break;
            }
            iVar15 = *(int *)(lVar2 + 0x20);
          } while (iVar15 != -1);
        }
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    uVar13 = (ulonglong)local_224;
    pFVar21 = pFVar21 + 8;
    param_2 = local_1e8;
  } while( true );
}

// ResetMaterialsODSCData @ 1480cc650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FODSCThread::ResetMaterialsODSCData(FODSCThread *this,EShaderPlatform param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  TMap<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
  *this_00;
  longlong lVar10;
  undefined1 auStackY_138 [32];
  TObjectIterator<UMaterialInterface> local_108;
  FMaterialUpdateContext local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FlushRenderingCommands();
  AcquireSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
  FMaterialUpdateContext::FMaterialUpdateContext(&local_e8,6,GMaxRHIShaderPlatform);
  this_00 = &this->RequestHashes;
  bVar6 = 1 < *(int *)&(this->RequestHashes).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RequestHashes).field_0x8);
  puVar1 = &(this->RequestHashes).field_0xc;
  *(undefined4 *)&(this->RequestHashes).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RequestHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestHashes).field_0x34 = 0;
  iVar3 = *(int *)&(this->RequestHashes).field_0x2c;
  *(undefined4 *)&(this->RequestHashes).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RequestHashes).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RequestHashes).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->RequestHashes).field_0x48 = 1;
    TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_108.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectArray.ArrayNum = 0;
  local_108.ObjectArray.ArrayMax = 0;
  local_108.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  GetObjectsOfClass(pUVar9,&local_108.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_108);
    lVar10 = (longlong)local_108.Index;
    if ((local_108.Index < 0) || (local_108.ObjectArray.ArrayNum <= local_108.Index)) {
      if (local_108.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.ObjectArray.AllocatorInstance.Data);
      }
      FMaterialUpdateContext::~FMaterialUpdateContext(&local_e8);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
      return;
    }
    uVar8 = 0;
    if (local_108.Index < local_108.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_108.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pUVar4 = *(UMaterialInterface **)(local_108.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      lVar10 = (**(code **)(pUVar4->_padding_ + 0x390))(pUVar4,param_1,4);
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        puVar2 = (uint *)(*(longlong *)(lVar10 + 0x10) + 0x80);
        *puVar2 = *puVar2 & 0xffffffef;
        *(undefined1 *)(lVar10 + 0x21) = 0;
      }
      FMaterialUpdateContext::AddMaterialInterface(&local_e8,pUVar4);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// RetrieveMissedMaterials @ 1480cd070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCThread::RetrieveMissedMaterials
          (FODSCThread *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  longlong lVar8;
  FName *this_00;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint *puVar11;
  FString local_a8;
  FString local_98;
  TMap<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  pTVar1 = &this->RequestHashes;
  AcquireSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  iVar6 = *(int *)&(this->RequestHashes).field_0x28;
  local_78 = &(this->RequestHashes).field_0x10;
  uStack_7c = 1;
  iStack_80 = 0;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar6 != 0) {
    puVar11 = *(uint **)&(this->RequestHashes).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)local_78;
    }
    uVar3 = *puVar11;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_1480cd130;
      uVar3 = puVar11[lVar8 + 1];
    }
    uStack_7c = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_7c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar8;
    if (iVar6 < iStack_6c) {
      iStack_6c = iVar6;
    }
  }
LAB_1480cd130:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  local_88 = pTVar1;
  iStack_64 = iStack_6c;
  local_58 = pTVar1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar6) {
    do {
      this_00 = (FName *)((longlong)TStack_50.CurrentBitIndex * 0x78 + *(longlong *)local_58);
      if (this_00[4].ComparisonIndex.Value != this_00[9].Number) {
        ::FName::ToString(this_00,&local_a8);
        bVar5 = ::FName::IsWithinBounds((FNameEntryId)this_00[0xd].ComparisonIndex.Value);
        if (bVar5) {
          ::FString::AppendChars(&local_a8,":::",3);
          pFVar7 = ::FName::ToString(this_00 + 0xd,&local_98);
          iVar6 = (pFVar7->Data).ArrayNum;
          iVar10 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar10 = 0;
          }
          ::FString::AppendChars(&local_a8,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar10);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        pFVar9 = (param_1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar9 + (longlong)param_1->ArrayMax * 0x10)) &&
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
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        _Src.Data = local_a8.Data.AllocatorInstance.Data;
        pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        param_1->ArrayNum = iVar6 + 1;
        *(undefined8 *)&pFVar9->field_0x0 = 0;
        iVar6 = local_a8.Data.ArrayNum;
        *(int *)&pFVar9[8].field_0x0 = iVar6;
        if (iVar6 == 0) {
          *(int *)(pFVar9 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,(ForAnyElementType *)pFVar9,iVar6,(int *)(pFVar9 + 0xc));
          memcpy(*(void **)&pFVar9->field_0x0,_Src.Data,(longlong)iVar6 * 2);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
                    /* WARNING: Could not recover jumptable at 0x0001480cd336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->RequestHashesRWLock);
  return;
}

// Run @ 1480cd350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FODSCThread::Run(FODSCThread *this)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (this->ExitRequest).Counter;
  while (iVar1 == 0) {
    cVar2 = (**(code **)(this->WakeupEvent->_padding_ + 0x20))(this->WakeupEvent,0xffffffff,0);
    if (cVar2 != '\0') {
      Process(this);
    }
    iVar1 = (this->ExitRequest).Counter;
  }
  return 0;
}

// SendMessageToServer @ 1480ce2c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FODSCThread::SendMessageToServer(FODSCThread *this,IFileServerMessageHandler *param_1)

{
  ICookOnTheFlyServerConnection *pIVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IFileManager *pIVar7;
  longlong *plVar8;
  size_t _Size;
  undefined8 *local_res8;
  undefined8 *local_res18;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FCookOnTheFlyMessage local_78;
  FCookOnTheFlyMessage local_50;
  
  if (this->bHasDefaultConnection != false) {
    pIVar7 = IFileManager::Get();
    (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,L"RecompileShaders",param_1);
    return true;
  }
  pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
  if ((pIVar1 == (ICookOnTheFlyServerConnection *)0x0) ||
     (cVar4 = (**(code **)((longlong)*pIVar1 + 0x30))(), cVar4 == '\0')) {
    if ((this->ExitRequest).Counter != 0) {
      return false;
    }
    if (3 < (byte)LogODSC._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
    }
    bVar5 = ConnectToODSCHost(this);
    if (!bVar5) {
      return false;
    }
  }
  pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
  if ((pIVar1 == (ICookOnTheFlyServerConnection *)0x0) ||
     (cVar4 = (**(code **)((longlong)*pIVar1 + 0x30))(), cVar4 == '\0')) {
    return false;
  }
  local_50.Header.MessageStatus = Ok;
  local_50.Header.CorrelationId = 0;
  local_50.Body.ArrayNum = 0;
  local_50.Body.ArrayMax = 0;
  local_50.Header.MessageType = RecompileShaders|Request;
  local_50.Header.Timestamp = 0;
  local_50.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Cook::FCookOnTheFlyMessage::WriteBody(&local_50);
  (**(code **)((longlong)*param_1 + 8))(param_1,local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_88,&local_50);
  if (*plVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((*plVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lVar2 = *plVar8;
  while (*(char *)(lVar2 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff,0);
  }
  local_78.Header._0_8_ = *(undefined8 *)(lVar2 + 0x70);
  local_78.Header._8_8_ = *(undefined8 *)(lVar2 + 0x78);
  local_78.Header.Timestamp = *(long64 *)(lVar2 + 0x80);
  local_78.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Body.ArrayNum = *(int *)(lVar2 + 0x90);
  _Size = (size_t)local_78.Body.ArrayNum;
  _Src = *(void **)(lVar2 + 0x88);
  if (local_78.Body.ArrayNum == 0) {
    local_78.Body.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_78.Body.ArrayNum,0,&local_78.Body.AllocatorInstance,local_78.Body.ArrayNum,
               &local_78.Body.ArrayMax);
    memcpy(local_78.Body.AllocatorInstance.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (local_78.Header.MessageStatus == Ok) {
    UE::Cook::FCookOnTheFlyMessage::ReadBody(&local_78);
    (**(code **)((longlong)*param_1 + 0x10))(param_1,local_res18);
    if (local_res18 != (undefined8 *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    bVar5 = true;
  }
  else {
    if (3 < (byte)LogODSC._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogODSC);
    }
    pIVar1 = (this->CookOnTheFlyServerConnection).Ptr;
    if (pIVar1 != (ICookOnTheFlyServerConnection *)0x0) {
      (this->CookOnTheFlyServerConnection).Ptr = (ICookOnTheFlyServerConnection *)0x0;
      (**(code **)*pIVar1)(pIVar1,1);
    }
    bVar5 = false;
  }
  if (local_78.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Body.AllocatorInstance.Data);
  }
  if (local_50.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Body.AllocatorInstance.Data);
    return bVar5;
  }
  return bVar5;
}

// StartThread @ 1480d5620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::StartThread(FODSCThread *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = FRunnableThread::Create
                     ((FRunnable *)this,L"ODSCThread",0x20000,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar1;
  return;
}

// Stop @ 1480d5800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::Stop(FODSCThread *this)

{
  LOCK();
  (this->ExitRequest).Counter = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001480d5812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WakeupEvent->_padding_ + 0x10))();
  return;
}

// StopThread @ 1480d58b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::StopThread(FODSCThread *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  return;
}

// Tick @ 1480dbb30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::Tick(FODSCThread *this)

{
  Process((FODSCThread *)&this[-1].field_0x188);
  return;
}

// UnregisterMaterialName @ 1480e03e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::UnregisterMaterialName(FODSCThread *this,FMaterial *param_1)

{
  FMaterial *local_res8;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
  local_res8 = param_1;
  if (*(int *)&(this->ODSCPointerToNames).field_0x8 !=
      *(int *)&(this->ODSCPointerToNames).field_0x34) {
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
                *)&this->ODSCPointerToNames,(int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1,
               (ulong64 *)&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001480e043c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RequestHashesRWLock);
  return;
}

// WaitUntilAllRequestsDone @ 1480e35c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::WaitUntilAllRequestsDone(FODSCThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001480e35d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->AllRequestsDoneEvent->_padding_ + 0x20))
            (this->AllRequestsDoneEvent,0xffffffff,0);
  return;
}

// Wakeup @ 1480e35e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCThread::Wakeup(FODSCThread *this)

{
  (**(code **)(this->AllRequestsDoneEvent->_padding_ + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001480e3605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WakeupEvent->_padding_ + 0x10))();
  return;
}

