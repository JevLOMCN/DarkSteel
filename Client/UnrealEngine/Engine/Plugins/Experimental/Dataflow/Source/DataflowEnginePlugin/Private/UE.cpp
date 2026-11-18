// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 12

// Construct<FCollectionAttributeKey> @ 14daae900

void __cdecl UE::CoreUObject::Private::Construct<FCollectionAttributeKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  return;
}

// ConstructForTests<FCollectionAttributeKey> @ 14daae930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCollectionAttributeKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  return;
}

// Destruct<FCollectionAttributeKey> @ 14daae960

void __cdecl UE::CoreUObject::Private::Destruct<FCollectionAttributeKey>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCollectionAttributeKey> @ 14daae9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FCollectionAttributeKey>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowDynamicMeshArray> @ 14daaea60

void __cdecl UE::CoreUObject::Private::Construct<FDataflowDynamicMeshArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowDynamicMeshArray> @ 14daaea70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowDynamicMeshArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowDynamicMeshArray> @ 14daaea80

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowDynamicMeshArray>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDataflowDynamicMeshArray> @ 14daaeaa0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowDynamicMeshArray>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
                    (pFVar6->Data,(TObjectPtr<UDynamicMesh> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14daaf010

FContextCacheElementBase * __cdecl
`UE::Dataflow::ContextCachingCallbacks'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,FContextCacheElementBase *param_2)

{
  FContextCacheElementBase *pFVar1;
  undefined1 local_res18 [16];
  
  pFVar1 = operator()(local_res18,param_1,param_2);
  return pFVar1;
}

// operator() @ 14dab0080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FContextCacheElementBase * __thiscall
`UE::Dataflow::ContextCachingCallbacks'::__l2::<lambda_1>::operator()
          (void *this,FArchive *param_1,FContextCacheElementBase *param_2)

{
  code *pcVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar2;
  bool bVar3;
  FContextCacheElementBase *pFVar4;
  FChaosArchiveContext *pFVar5;
  FChaosArchiveContext *pFVar6;
  FManagedArrayCollection *pFVar7;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FArchiveProxy local_2c8;
  FChaosArchiveContext *local_230;
  FChaosArchive local_228;
  FManagedArrayCollection local_188;
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      if ((param_2 != (FContextCacheElementBase *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Element == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineContextCaching.cpp"
                             ,0x27,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FContextCacheElementBase *)(*pcVar1)();
        return pFVar4;
      }
      FManagedArrayCollection::FManagedArrayCollection(&local_d8);
      FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_228,param_1);
      local_228._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
      pFVar6 = ::operator_new(0x158);
      pFVar5 = (FChaosArchiveContext *)0x0;
      local_228.Context.Ptr = pFVar5;
      if (pFVar6 != (FChaosArchiveContext *)0x0) {
        local_228.Context.Ptr = ::Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar6);
      }
      FManagedArrayCollection::Serialize(&local_d8,&local_228);
      pFVar6 = ::operator_new(0xe8);
      if (pFVar6 != (FChaosArchiveContext *)0x0) {
        *(ulong64 *)&(pFVar6->ObjToTag).field_0x20 = UE::Dataflow::FTimestamp::Invalid;
        local_2d8 = 0;
        uStack_2d0 = 0;
        (pFVar6->TagToObject).AllocatorInstance.Data =
             (FScriptContainerElement *)
             &___7__TContextCacheElement_UFManagedArrayCollection___Dataflow_UE__6B_;
        (pFVar6->TagToObject).ArrayNum = CacheElementTyped;
        (pFVar6->TagToObject).ArrayMax = 0;
        *(uint *)&(pFVar6->ObjToTag).field_0x0 = 0;
        *(undefined8 *)&(pFVar6->ObjToTag).field_0x4 = 0;
        *(undefined8 *)&(pFVar6->ObjToTag).field_0x10 = 0;
        *(undefined4 *)&(pFVar6->ObjToTag).field_0x18 = 0;
        FManagedArrayCollection::FManagedArrayCollection
                  ((FManagedArrayCollection *)&(pFVar6->ObjToTag).field_0x28,&local_d8);
        pFVar5 = pFVar6;
      }
      TVar2.Ptr = local_228.Context.Ptr;
      if (local_228.Context.Ptr != (FChaosArchiveContext *)0x0) {
        ::Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_228.Context.Ptr);
        ::operator_delete(TVar2.Ptr,0x158);
      }
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_228);
      FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
      return (FContextCacheElementBase *)pFVar5;
    }
  }
  else {
    if ((param_2 == (FContextCacheElementBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element!=nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineContextCaching.cpp"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FContextCacheElementBase *)(*pcVar1)();
      return pFVar4;
    }
    FManagedArrayCollection::FManagedArrayCollection(&local_188);
    if ((param_2 == (FContextCacheElementBase *)0x0) ||
       (pFVar7 = (FManagedArrayCollection *)(param_2 + 1), param_2->Type != CacheElementTyped)) {
      pFVar7 = &local_188;
    }
    FArchiveProxy::FArchiveProxy(&local_2c8,param_1);
    local_2c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar5 = ::operator_new(0x158);
    if (pFVar5 == (FChaosArchiveContext *)0x0) {
      local_230 = (FChaosArchiveContext *)0x0;
    }
    else {
      local_230 = ::Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar5);
    }
    (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_2c8);
    pFVar5 = local_230;
    if (local_230 != (FChaosArchiveContext *)0x0) {
      ::Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_230);
      ::operator_delete(pFVar5,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_2c8);
    FManagedArrayCollection::~FManagedArrayCollection(&local_188);
  }
  return (FContextCacheElementBase *)0x0;
}

// ContextCachingCallbacks @ 14dab1900

void __cdecl UE::Dataflow::ContextCachingCallbacks(void)

{
  FContextCachingFactory *pFVar1;
  FName local_res8;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if ((FContextCachingFactory::Instance == (FContextCachingFactory *)0x0) &&
     (pFVar1 = ::operator_new(0x50),
     FContextCachingFactory::Instance = (FContextCachingFactory *)0x0,
     pFVar1 != (FContextCachingFactory *)0x0)) {
    *(undefined8 *)&pFVar1->CachingMap = 0;
    *(undefined8 *)&(pFVar1->CachingMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->CachingMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->CachingMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->CachingMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->CachingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->CachingMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->CachingMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->CachingMap).field_0x48 = 0;
    FContextCachingFactory::Instance = pFVar1;
  }
  pFVar1 = FContextCachingFactory::Instance;
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6APEAUFContextCacheElementBase_Dataflow_UE__AEAVFArchive__PEAU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UE::Dataflow::ContextCachingCallbacks'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),UE::Dataflow::FContextCacheElementBase_*,FArchive_&,UE::Dataflow::FContextCacheElementBase_*>
                ::Call;
  ::FName::FName(&local_res8,"FManagedArrayCollection");
  FContextCachingFactory::RegisterSerializeFunction
            (pFVar1,&local_res8,
             (TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
              *)local_38);
  return;
}

// RegisterEngineAnyTypes @ 14dab56c0

void __cdecl UE::Dataflow::RegisterEngineAnyTypes(void)

{
  FName FVar1;
  FName *pFVar2;
  FAnyTypesRegistry *this;
  TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&> local_res8;
  FName local_res18;
  code *local_28;
  FName local_20;
  FTypeInfo **local_18;
  code **local_10;
  
  pFVar2 = ::FName::FName(&local_res18,"FDataflowDynamicMeshArray");
  FVar1 = *pFVar2;
  this = FAnyTypesRegistry::GetInstance();
  local_28 = TDataflowMultiTypePolicy<TObjectPtr<UDynamicMesh>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_20,L"TArray<TObjectPtr<UDynamicMesh>>");
  local_18 = &local_res8.Value;
  local_10 = &local_28;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_18);
  return;
}

