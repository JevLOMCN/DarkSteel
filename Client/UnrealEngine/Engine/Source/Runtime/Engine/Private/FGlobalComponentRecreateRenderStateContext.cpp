// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FGlobalComponentRecreateRenderStateContext @ 1477ec640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGlobalComponentRecreateRenderStateContext * __thiscall
FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
          (FGlobalComponentRecreateRenderStateContext *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UActorComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar8;
  FGlobalComponentRecreateRenderStateContext *pFVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res18 [16];
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_88;
  
  (this->ComponentContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentContexts).ArrayNum = 0;
  (this->ComponentContexts).ArrayMax = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x30 = 0xffffffff;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId489,
                 "FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                 ,0x1e9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId489);
    }
    FlushRenderingCommands();
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar11 == pFVar2) break;
      pUVar4 = *(UActorComponent **)pFVar11;
      if (pUVar4->bRegistered == '\x01' && pUVar4->bRenderStateCreated == '\x01') {
        iVar7 = (this->ComponentContexts).ArrayNum;
        if (iVar7 == (this->ComponentContexts).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,&(this->ComponentContexts).ArrayMax);
        }
        (this->ComponentContexts).ArrayNum = iVar7 + 1;
        FComponentRecreateRenderStateContext::FComponentRecreateRenderStateContext
                  ((FComponentRecreateRenderStateContext *)
                   ((this->ComponentContexts).AllocatorInstance.Data + (longlong)iVar7 * 0x18),
                   pUVar4,&this->ScenesToUpdateAllPrimitiveSceneInfos);
      }
      pFVar11 = pFVar11 + 8;
    }
    pTVar8 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
             TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                       (&local_88,&this->ScenesToUpdateAllPrimitiveSceneInfos);
    UpdateAllPrimitiveSceneInfosForScenes(pTVar8);
    if ((*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
         *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x215,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGlobalComponentRecreateRenderStateContext *)(*pcVar5)();
      return pFVar9;
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return this;
}

// FGlobalComponentRecreateRenderStateContext @ 1477ec890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGlobalComponentRecreateRenderStateContext * __thiscall
FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
          (FGlobalComponentRecreateRenderStateContext *this)

{
  IPrimitiveComponent *pIVar1;
  UActorComponent *pUVar2;
  code *pcVar3;
  uint uVar4;
  void *pvVar5;
  ForAnyElementType _Src;
  char cVar6;
  bool bVar7;
  int iVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  FObjectCacheContext *this_00;
  UClass *pUVar11;
  FGlobalComponentRecreateRenderStateContext *pFVar12;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar13;
  wchar_t *pwVar14;
  IPrimitiveComponent **ppIVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  FObjectCacheContextScope local_res8 [8];
  TObjectIterator<UActorComponent> local_c8;
  TObjectIterator<UActorComponent> local_b0;
  TObjectCacheIterator<IPrimitiveComponent> local_98;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_78;
  
  pvVar5 = ThreadLocalStoragePointer;
  (this->ComponentContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentContexts).ArrayNum = 0;
  (this->ComponentContexts).ArrayMax = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34 = 0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar14 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar14,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId452,
                 "FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                 ,0x1c4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
    }
    FlushRenderingCommands();
    FObjectCacheContextScope::FObjectCacheContextScope(local_res8);
    this_00 = FObjectCacheContextScope::GetContext(local_res8);
    FObjectCacheContext::GetPrimitiveComponents(this_00,&local_98);
    for (ppIVar15 = local_98.ArrayView.DataPtr;
        ppIVar15 != local_98.ArrayView.DataPtr + local_98.ArrayView.ArrayNum;
        ppIVar15 = ppIVar15 + 1) {
      pIVar1 = *ppIVar15;
      cVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      if ((cVar6 != '\0') && (cVar6 = (**(code **)*pIVar1)(pIVar1), cVar6 != '\0')) {
        iVar8 = (this->ComponentContexts).ArrayNum;
        if (iVar8 == (this->ComponentContexts).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,&(this->ComponentContexts).ArrayMax);
        }
        (this->ComponentContexts).ArrayNum = iVar8 + 1;
        FComponentRecreateRenderStateContext::FComponentRecreateRenderStateContext
                  ((FComponentRecreateRenderStateContext *)
                   ((this->ComponentContexts).AllocatorInstance.Data + (longlong)iVar8 * 0x18),
                   pIVar1,&this->ScenesToUpdateAllPrimitiveSceneInfos);
      }
    }
    if (local_98.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.OwnedArray.AllocatorInstance.Data);
    }
    local_b0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ObjectArray.ArrayNum = 0;
    local_b0.ObjectArray.ArrayMax = 0;
    local_b0.Index = 0xffffffff;
    EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar11 = UActorComponent::StaticClass();
    GetObjectsOfClass(pUVar11,&local_b0.ObjectArray,true,RF_ClassDefaultObject,
                      EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UActorComponent>::Advance(&local_b0);
    _Src.Data = local_b0.ObjectArray.AllocatorInstance.Data;
    local_c8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar17 = (longlong)local_b0.ObjectArray.ArrayNum;
    local_c8.ObjectArray.ArrayNum = local_b0.ObjectArray.ArrayNum;
    if (local_b0.ObjectArray.ArrayNum == 0) {
      local_c8.ObjectArray.ArrayMax = 0;
      uVar4 = local_b0.Index;
      uVar16 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_b0.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_c8,
                 local_b0.ObjectArray.ArrayNum,&local_c8.ObjectArray.ArrayMax);
      memcpy(local_c8.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar17 << 3);
      uVar4 = local_b0.Index;
      uVar16 = local_b0.ObjectArray.ArrayNum;
    }
    while (local_c8.Index = uVar4, uVar4 != uVar16) {
      uVar10 = 0;
      if ((int)uVar4 < local_c8.ObjectArray.ArrayNum) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FGlobalComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar12;
      }
      pUVar2 = *(UActorComponent **)
                (local_c8.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar8 = (int)pUVar11->_padding_;
      if (((*(int *)(pUVar2->_padding_ + 0x38) < iVar8) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
           &pUVar11->_padding_)) &&
         (pUVar2->bRegistered == '\x01' && pUVar2->bRenderStateCreated == '\x01')) {
        iVar8 = (this->ComponentContexts).ArrayNum;
        if (iVar8 == (this->ComponentContexts).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,&(this->ComponentContexts).ArrayMax);
        }
        (this->ComponentContexts).ArrayNum = iVar8 + 1;
        FComponentRecreateRenderStateContext::FComponentRecreateRenderStateContext
                  ((FComponentRecreateRenderStateContext *)
                   ((this->ComponentContexts).AllocatorInstance.Data + (longlong)iVar8 * 0x18),
                   pUVar2,&this->ScenesToUpdateAllPrimitiveSceneInfos);
      }
      TObjectIterator<UActorComponent>::Advance(&local_c8);
      uVar4 = local_c8.Index;
    }
    if (local_c8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ObjectArray.AllocatorInstance.Data);
    }
    if (local_b0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.ObjectArray.AllocatorInstance.Data);
    }
    pTVar13 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
              TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                        (&local_78,&this->ScenesToUpdateAllPrimitiveSceneInfos);
    UpdateAllPrimitiveSceneInfosForScenes(pTVar13);
    if ((*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
         *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x215,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FGlobalComponentRecreateRenderStateContext *)(*pcVar3)();
      return pFVar12;
    }
    FObjectCacheContextScope::~FObjectCacheContextScope(local_res8);
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return this;
}

// ~FGlobalComponentRecreateRenderStateContext @ 1477f33d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
          (FGlobalComponentRecreateRenderStateContext *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar5;
  wchar_t *pwVar6;
  bool bVar7;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_68;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId509,
               "FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x1fd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId509);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar6 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar6,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    ClearMaterialPSORequests();
    UMaterialInterface::PrecacheDefaultMaterialPSOs();
    DestructItems<FComponentRecreateRenderStateContext,int>
              ((FComponentRecreateRenderStateContext *)
               (this->ComponentContexts).AllocatorInstance.Data,(this->ComponentContexts).ArrayNum);
    (this->ComponentContexts).ArrayNum = 0;
    if ((this->ComponentContexts).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,&(this->ComponentContexts).ArrayMax);
    }
    pTVar5 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
             TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                       (&local_68,&this->ScenesToUpdateAllPrimitiveSceneInfos);
    UpdateAllPrimitiveSceneInfosForScenes(pTVar5);
    if ((*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
         *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x215,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  FVar1 = (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements);
  DestructItems<FComponentRecreateRenderStateContext,int>
            ((FComponentRecreateRenderStateContext *)
             (this->ComponentContexts).AllocatorInstance.Data,(this->ComponentContexts).ArrayNum);
  pFVar2 = (this->ComponentContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// UpdateAllPrimitiveSceneInfos @ 14787c400

void __thiscall
FGlobalComponentRecreateRenderStateContext::UpdateAllPrimitiveSceneInfos
          (FGlobalComponentRecreateRenderStateContext *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar3;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_58;
  
  pTVar3 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
           TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                     (&local_58,&this->ScenesToUpdateAllPrimitiveSceneInfos);
  UpdateAllPrimitiveSceneInfosForScenes(pTVar3);
  if (*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
      *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x215,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

