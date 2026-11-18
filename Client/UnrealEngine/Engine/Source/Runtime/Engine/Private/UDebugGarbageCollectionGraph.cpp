// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147aa59c0

UClass * __cdecl UDebugGarbageCollectionGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugGarbageCollectionGraph",
               &Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton,
               StaticRegisterNativesUDebugGarbageCollectionGraph,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDebugGarbageCollectionGraph>,
               InternalVTableHelperCtorCaller<UDebugGarbageCollectionGraph>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton;
}

// UDebugGarbageCollectionGraph @ 147abd230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDebugGarbageCollectionGraph * __thiscall
UDebugGarbageCollectionGraph::UDebugGarbageCollectionGraph
          (UDebugGarbageCollectionGraph *this,FVTableHelper *param_1)

{
  undefined1 auStack_68 [32];
  allocator<UDebugGarbageCollectionGraph::HistoryItem> local_48 [16];
  initializer_list<UDebugGarbageCollectionGraph::HistoryItem> local_38;
  HistoryItem local_28;
  HistoryItem local_18;
  
  local_18.Time = (double)(__security_cookie.value ^ (ulonglong)auStack_68);
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDebugGarbageCollectionGraph__6B_;
  local_38._First = &local_28;
  local_38._Last = &local_18;
  local_28.Time = 0.0;
  local_28.Duration = 0.0;
  std::
  vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
  ::
  vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
            (&this->History,&local_38,local_48);
  (this->DrawHandle).ID = 0;
  return this;
}

// UDebugGarbageCollectionGraph @ 147abd2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDebugGarbageCollectionGraph * __thiscall
UDebugGarbageCollectionGraph::UDebugGarbageCollectionGraph
          (UDebugGarbageCollectionGraph *this,FObjectInitializer *param_1)

{
  undefined1 auStack_68 [32];
  allocator<UDebugGarbageCollectionGraph::HistoryItem> local_48 [16];
  initializer_list<UDebugGarbageCollectionGraph::HistoryItem> local_38;
  HistoryItem local_28;
  HistoryItem local_18;
  
  local_18.Time = (double)(__security_cookie.value ^ (ulonglong)auStack_68);
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDebugGarbageCollectionGraph__6B_;
  local_38._First = &local_28;
  local_38._Last = &local_18;
  local_28.Time = 0.0;
  local_28.Duration = 0.0;
  std::
  vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
  ::
  vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
            (&this->History,&local_38,local_48);
  (this->DrawHandle).ID = 0;
  return this;
}

// ~UDebugGarbageCollectionGraph @ 147abf710

void __thiscall
UDebugGarbageCollectionGraph::~UDebugGarbageCollectionGraph(UDebugGarbageCollectionGraph *this)

{
  this->_padding_ = (longlong)&___7UDebugGarbageCollectionGraph__6B_;
  std::
  vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
  ::_Tidy(&this->History);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147ac1f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
`UDebugGarbageCollectionGraph::Draw'::__l2::<lambda_2>::operator()
          (void *this,FString *param_1,int param_2,int param_3)

{
  FText *pFVar1;
  UFont *pUVar2;
  TVector2<double>_u_0 local_248;
  FText local_238;
  undefined1 local_228 [152];
  longlong local_190;
  longlong lStack_188;
  undefined2 local_170;
  
  local_248._s_0.X = (double)param_2;
  local_248._s_0.Y = (double)param_3;
  pFVar1 = FText::FromString(&local_238,param_1);
  pUVar2 = UEngine::GetSmallFont();
  FCanvasTextItem::FCanvasTextItem
            ((FCanvasTextItem *)local_228,(TVector2<double> *)&local_248._s_0,pFVar1,pUVar2,
             &FLinearColor::Yellow);
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  local_228._72_4_ = local_228._72_4_ | 2;
  local_228._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_170 = 0x101;
  local_190 = ___xmm_3ff00000000000003ff0000000000000;
  lStack_188 = _UNK_150689688;
  UCanvas::DrawItem(*(UCanvas **)this,(FCanvasItem *)local_228);
  FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_228);
  return;
}

// Draw @ 147ad2740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDebugGarbageCollectionGraph::Draw
          (UDebugGarbageCollectionGraph *this,UCanvas *param_1,APlayerController *param_2)

{
  HistoryItem **ppHVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FLinearColor FVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  HistoryItem *pHVar14;
  FLinearColor *pFVar15;
  FText *pFVar16;
  UFont *pUVar17;
  longlong lVar18;
  longlong lVar19;
  void *pvVar20;
  LARGE_INTEGER local_res8;
  TVector2<double>_u_0 local_398;
  FCanvasItem local_388;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  FString local_308;
  FText local_2f8;
  undefined1 local_2e8 [152];
  longlong local_250;
  longlong lStack_248;
  undefined2 local_230;
  
  pvVar20 = (void *)GetLastGCTime();
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((double)pvVar20 != (this->History)._Mypair._Myval2._Mylast[-1].Time) {
    local_398._s_0.X = (double)pvVar20;
    local_398._s_0.Y = GetLastGCDuration();
    pHVar14 = (this->History)._Mypair._Myval2._Mylast;
    if (pHVar14 == (this->History)._Mypair._Myval2._Myend) {
      std::
      vector<UDebugGarbageCollectionGraph::HistoryItem,std::allocator<UDebugGarbageCollectionGraph::HistoryItem>_>
      ::_Emplace_reallocate<UDebugGarbageCollectionGraph::HistoryItem>
                (&this->History,pHVar14,(HistoryItem *)&local_398._s_0);
    }
    else {
      pHVar14->Time = (double)pvVar20;
      pHVar14->Duration = local_398._s_0.Y;
      ppHVar1 = &(this->History)._Mypair._Myval2._Mylast;
      *ppHVar1 = *ppHVar1 + 1;
    }
  }
  dVar9 = __real_403e000000000000;
  pHVar14 = (this->History)._Mypair._Myval2._Myfirst;
  if (pHVar14 != (this->History)._Mypair._Myval2._Mylast) {
    do {
      if (dVar4 - pHVar14->Time <= dVar9) break;
      memmove(pHVar14,pHVar14 + 1,
              (longlong)(this->History)._Mypair._Myval2._Mylast - (longlong)(pHVar14 + 1));
      ppHVar1 = &(this->History)._Mypair._Myval2._Mylast;
      *ppHVar1 = *ppHVar1 + -1;
      pHVar14 = (this->History)._Mypair._Myval2._Myfirst;
    } while (pHVar14 != (this->History)._Mypair._Myval2._Mylast);
  }
  dVar10 = _UNK_151444f88;
  dVar5 = ___xmm_40340000000000004034000000000000;
  dVar9 = __real_407a400000000000;
  FVar6.field0_0x0 = FLinearColor::White.field0_0x0;
  local_348 = (double)___xmm_407a4000000000004034000000000000;
  dStack_340 = (double)_UNK_15185d578;
  local_328 = (double)___xmm_0000000000000000407a400000000000;
  uStack_320 = _UNK_15185d518;
  local_388.Position.field0_0x0._s_0.X = ___xmm_40340000000000004034000000000000;
  local_388.Position.field0_0x0._s_0.Y = __real_407a400000000000;
  local_388.StereoDepth = 0;
  local_388.BlendMode = SE_BLEND_Opaque;
  local_388.bFreezeTime = false;
  local_388.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_388._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_338 = ___xmm_407a4000000000000000000000000000;
  dStack_330 = (double)_UNK_15185d568;
  local_388.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
  local_318 = 0x3f800000;
  local_res8 = (LARGE_INTEGER)param_1;
  UCanvas::DrawItem(param_1,&local_388);
  local_388.StereoDepth = 0;
  local_388.BlendMode = SE_BLEND_Opaque;
  local_328 = (double)___xmm_0000000000000000407a400000000000;
  uStack_320 = _UNK_15185d518;
  local_388.Position.field0_0x0._s_0.X = dVar5;
  local_388.Position.field0_0x0._s_0.Y = dVar10;
  local_388.bFreezeTime = false;
  local_388.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_388._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_348 = dVar5;
  dStack_340 = dVar10;
  local_338 = ___xmm_40340000000000000000000000000000;
  dStack_330 = (double)_UNK_151444f78;
  local_388.Color.field0_0x0._s_0 = FVar6.field0_0x0;
  local_318 = 0x3f800000;
  UCanvas::DrawItem(param_1,&local_388);
  local_348 = (double)___xmm_4034000000000000407a400000000000;
  dStack_340 = (double)_UNK_15185d538;
  local_328 = (double)___xmm_0000000000000000407a400000000000;
  uStack_320 = _UNK_15185d518;
  local_388.Position.field0_0x0._s_0.X = dVar9;
  local_388.Position.field0_0x0._s_0.Y = dVar5;
  local_388.StereoDepth = 0;
  local_388.BlendMode = SE_BLEND_Opaque;
  local_388.bFreezeTime = false;
  local_388.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_388._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_338 = ___xmm_407a4000000000000000000000000000;
  dStack_330 = (double)_UNK_15185d568;
  local_388.Color.field0_0x0._s_0 = FVar6.field0_0x0;
  local_318 = 0x3f800000;
  UCanvas::DrawItem(param_1,&local_388);
  ::FString::FString((FString *)&local_398._s_0,L"GC Mark Durations");
  `UDebugGarbageCollectionGraph::Draw'::__l2::<lambda_2>::operator()
            (&local_res8,(FString *)&local_398._s_0,0xdc,0x1b4);
  if ((void *)local_398._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_398._s_0.X);
  }
  dVar12 = __real_40a2c00000000000;
  dVar11 = __real_407a300000000000;
  dVar10 = __real_402aaaaaaaaaaaab;
  lVar8 = _UNK_150689688;
  lVar7 = ___xmm_3ff00000000000003ff0000000000000;
  dVar5 = __real_3f50624dd2f1a9fc;
  iVar13 = (int)((longlong)(this->History)._Mypair._Myval2._Mylast -
                 (longlong)(this->History)._Mypair._Myval2._Myfirst >> 4) + -1;
  lVar18 = (longlong)iVar13;
  if (-1 < iVar13) {
    lVar19 = lVar18 << 4;
    do {
      pHVar14 = (this->History)._Mypair._Myval2._Myfirst;
      pFVar15 = &FLinearColor::Red;
      local_388.Position.field0_0x0._s_0.Y = dVar11;
      dStack_340 = dVar11;
      local_338 = 0;
      uStack_320 = 0;
      local_388.StereoDepth = 0;
      local_388.BlendMode = SE_BLEND_Opaque;
      local_388.bFreezeTime = false;
      local_388.BatchedElementParameters = (FBatchedElementParameters *)0x0;
      local_388._padding_ = (longlong)&___7FCanvasLineItem__6B_;
      local_318 = 0x40400000;
      dVar3 = dVar9 - (dVar4 - *(double *)((longlong)&pHVar14->Time + lVar19)) * dVar10;
      dVar2 = dVar9 - *(double *)((longlong)&pHVar14->Duration + lVar19) * dVar12;
      if (*(double *)((longlong)&pHVar14->Duration + lVar19) <=
          (double)SafeDurationThreshold * dVar5) {
        pFVar15 = &FLinearColor::Green;
      }
      local_388.Color.field0_0x0 = pFVar15->field0_0x0;
      local_388.Position.field0_0x0._s_0.X = dVar3;
      local_348 = dVar3;
      dStack_330 = dVar3;
      local_328 = dVar2;
      UCanvas::DrawItem(param_1,&local_388);
      ::FString::PrintfImpl(&local_308,L"%dms");
      local_398._s_0.X = (double)(int)dVar3;
      local_398._s_0.Y = (double)(int)(dVar2 - __real_4026000000000000);
      pFVar16 = FText::FromString(&local_2f8,&local_308);
      pUVar17 = UEngine::GetSmallFont();
      FCanvasTextItem::FCanvasTextItem
                ((FCanvasTextItem *)local_2e8,(TVector2<double> *)&local_398._s_0,pFVar16,pUVar17,
                 &FLinearColor::Yellow);
      if (local_2f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
      }
      local_2e8._72_4_ = local_2e8._72_4_ | 2;
      local_230 = 0x101;
      local_2e8._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
      local_250 = lVar7;
      lStack_248 = lVar8;
      UCanvas::DrawItem(param_1,(FCanvasItem *)local_2e8);
      FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2e8);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      lVar19 = lVar19 + -0x10;
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  return;
}

// GetPrivateStaticClass @ 147aeb5b0

UClass * __cdecl UDebugGarbageCollectionGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugGarbageCollectionGraph",
               &Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton,
               StaticRegisterNativesUDebugGarbageCollectionGraph,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDebugGarbageCollectionGraph>,
               InternalVTableHelperCtorCaller<UDebugGarbageCollectionGraph>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.InnerSingleton;
}

// StartDrawing @ 147b16460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDebugGarbageCollectionGraph::StartDrawing(UDebugGarbageCollectionGraph *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  UDebugGarbageCollectionGraph *local_res8;
  wchar_t local_res10 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if ((this->DrawHandle).ID == 0) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDebugGarbageCollectionGraph____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = Draw;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FVar3 = UDebugDrawService::Register
                      (local_res10,
                       (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                        *)L"Game");
                    /* WARNING: Load size is inaccurate */
    (this->DrawHandle).ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// StaticRegisterNativesUDebugGarbageCollectionGraph @ 147b172b0

void __cdecl UDebugGarbageCollectionGraph::StaticRegisterNativesUDebugGarbageCollectionGraph(void)

{
  return;
}

// StopDrawing @ 147b17570

void __thiscall UDebugGarbageCollectionGraph::StopDrawing(UDebugGarbageCollectionGraph *this)

{
  if ((this->DrawHandle).ID != 0) {
    UDebugDrawService::Unregister((FDelegateHandle)(this->DrawHandle).ID);
    (this->DrawHandle).ID = 0;
  }
  return;
}

