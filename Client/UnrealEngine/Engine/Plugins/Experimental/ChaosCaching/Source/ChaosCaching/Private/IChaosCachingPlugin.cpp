// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 2

// StartupModule @ 14dada640

void __thiscall IChaosCachingPlugin::StartupModule(IChaosCachingPlugin *this)

{
  TUniquePtr<Chaos::FGeometryCollectionCacheAdapter,TDefaultDelete<Chaos::FGeometryCollectionCacheAdapter>_>
  *pTVar1;
  TUniquePtr<Chaos::FStaticMeshCacheAdapter,TDefaultDelete<Chaos::FStaticMeshCacheAdapter>_> *pTVar2
  ;
  FGeometryCollectionCacheAdapter *pFVar3;
  FGeometryCollectionCacheAdapter *_Dst;
  FStaticMeshCacheAdapter *pFVar4;
  undefined8 *puVar5;
  FStaticMeshCacheAdapter *pFVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  _Dst = ::operator_new(0xd0);
  if (_Dst == (FGeometryCollectionCacheAdapter *)0x0) {
    _Dst = (FGeometryCollectionCacheAdapter *)0x0;
  }
  else {
    memset(_Dst,0,0xd0);
    *(undefined4 *)((longlong)&_Dst->_padding_ + 4) = 0x7f7fffff;
    _Dst->_padding_ = (longlong)&___7FGeometryCollectionCacheAdapter_Chaos__6B_;
    *(undefined8 *)&(_Dst->SolversListenedToForEvents).Elements = 0;
    *(undefined8 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x8 = 0;
    *(undefined8 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x20 = 0;
    *(undefined4 *)&_Dst->_padding_ = 0xff7fffff;
    *(undefined4 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x28 = 0;
    *(undefined4 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(_Dst->SolversListenedToForEvents).Elements.field_0x34 = 0;
    (_Dst->SolversListenedToForEvents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (_Dst->SolversListenedToForEvents).HashSize = 0;
    *(undefined8 *)&_Dst->CachedData = 0;
    *(undefined8 *)&(_Dst->CachedData).field_0x8 = 0;
    *(undefined8 *)&(_Dst->CachedData).field_0x20 = 0;
    *(undefined4 *)&(_Dst->CachedData).field_0x28 = 0;
    *(undefined4 *)&(_Dst->CachedData).field_0x2c = 0x80;
    *(undefined4 *)&(_Dst->CachedData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(_Dst->CachedData).field_0x34 = 0;
    *(undefined8 *)&(_Dst->CachedData).field_0x40 = 0;
    *(undefined4 *)&(_Dst->CachedData).field_0x48 = 0;
  }
  pFVar6 = (FStaticMeshCacheAdapter *)0x0;
  pTVar1 = &this->GeometryCollectionAdapter;
  if (pTVar1 == (TUniquePtr<Chaos::FGeometryCollectionCacheAdapter,TDefaultDelete<Chaos::FGeometryCollectionCacheAdapter>_>
                 *)&local_18) {
    if (_Dst != (FGeometryCollectionCacheAdapter *)0x0) {
      puVar5 = (undefined8 *)_Dst->_padding_;
      goto LAB_14dada729;
    }
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = _Dst;
    if (pFVar3 != (FGeometryCollectionCacheAdapter *)0x0) {
      puVar5 = (undefined8 *)pFVar3->_padding_;
      _Dst = pFVar3;
LAB_14dada729:
      (*(code *)*puVar5)(_Dst,1);
    }
  }
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FStaticMeshCacheAdapter *)0x0) {
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined ***)pFVar4 = &___7FStaticMeshCacheAdapter_Chaos__6B_;
    *(undefined4 *)&pFVar4->field_0xc = 0x7f7fffff;
    *(undefined4 *)&pFVar4->field_0x10 = 0xff7fffff;
    pFVar6 = pFVar4;
  }
  pTVar2 = &this->StaticMeshAdapter;
  if (pTVar2 == (TUniquePtr<Chaos::FStaticMeshCacheAdapter,TDefaultDelete<Chaos::FStaticMeshCacheAdapter>_>
                 *)&local_10) {
    if (pFVar6 == (FStaticMeshCacheAdapter *)0x0) goto LAB_14dada7a5;
    puVar5 = *(undefined8 **)pFVar6;
  }
  else {
    pFVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar6;
    if (pFVar4 == (FStaticMeshCacheAdapter *)0x0) goto LAB_14dada7a5;
    puVar5 = *(undefined8 **)pFVar4;
    pFVar6 = pFVar4;
  }
  (*(code *)*puVar5)(pFVar6,1);
LAB_14dada7a5:
  Chaos::RegisterAdapter((FComponentCacheAdapter *)pTVar1->Ptr);
  Chaos::RegisterAdapter((FComponentCacheAdapter *)pTVar2->Ptr);
  return;
}

// ShutdownModule @ 14dada7d0

void __thiscall IChaosCachingPlugin::ShutdownModule(IChaosCachingPlugin *this)

{
  FStaticMeshCacheAdapter *pFVar1;
  FGeometryCollectionCacheAdapter *pFVar2;
  code *pcVar3;
  bool bVar4;
  IModularFeatures *pIVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = (this->StaticMeshAdapter).Ptr;
  if ((pFVar1 == (FStaticMeshCacheAdapter *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAdapter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\Adapters\\CacheAdapter.cpp"
                         ,0x4b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar5 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (pIVar5,&local_28,Chaos::FComponentCacheAdapter::FeatureName);
  for (FVar6.Data = local_28.AllocatorInstance.Data;
      FVar6.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
      FVar6.Data = FVar6.Data + 8) {
    if (*(FStaticMeshCacheAdapter **)FVar6.Data == pFVar1) {
      plVar7 = (longlong *)&pFVar1->field_0x8;
      if (pFVar1 == (FStaticMeshCacheAdapter *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)((longlong)*pIVar5 + 0x30))
                (pIVar5,Chaos::FComponentCacheAdapter::FeatureName,plVar7);
      break;
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  pFVar2 = (this->GeometryCollectionAdapter).Ptr;
  if ((pFVar2 == (FGeometryCollectionCacheAdapter *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAdapter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\Adapters\\CacheAdapter.cpp"
                         ,0x4b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar5 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (pIVar5,&local_18,Chaos::FComponentCacheAdapter::FeatureName);
  FVar6.Data = local_18.AllocatorInstance.Data;
  do {
    if (FVar6.Data == local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
LAB_14dada920:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      pFVar1 = (this->StaticMeshAdapter).Ptr;
      (this->StaticMeshAdapter).Ptr = (FStaticMeshCacheAdapter *)0x0;
      if (pFVar1 != (FStaticMeshCacheAdapter *)0x0) {
        (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
      }
      pFVar2 = (this->GeometryCollectionAdapter).Ptr;
      (this->GeometryCollectionAdapter).Ptr = (FGeometryCollectionCacheAdapter *)0x0;
      if (pFVar2 != (FGeometryCollectionCacheAdapter *)0x0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
      return;
    }
    if (*(FGeometryCollectionCacheAdapter **)FVar6.Data == pFVar2) {
      plVar7 = &pFVar2->_padding_;
      if (pFVar2 == (FGeometryCollectionCacheAdapter *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)((longlong)*pIVar5 + 0x30))
                (pIVar5,Chaos::FComponentCacheAdapter::FeatureName,plVar7);
      goto LAB_14dada920;
    }
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

