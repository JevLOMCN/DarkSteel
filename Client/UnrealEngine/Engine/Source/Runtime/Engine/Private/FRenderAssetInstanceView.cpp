// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FRenderAssetInstanceView @ 148805e50

FRenderAssetInstanceView * __thiscall
FRenderAssetInstanceView::FRenderAssetInstanceView(FRenderAssetInstanceView *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRenderAssetInstanceView__6B_;
  (this->Bounds4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds4).ArrayNum = 0;
  (this->Bounds4).ArrayMax = 0;
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
            (&this->Elements,0);
  *(undefined8 *)&this->RenderAssetMap = 0;
  *(undefined8 *)&(this->RenderAssetMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderAssetMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderAssetMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderAssetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderAssetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderAssetMap).field_0x34 = 0;
  *(undefined8 *)&(this->RenderAssetMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderAssetMap).field_0x48 = 0;
  *(undefined8 *)&this->CompiledRenderAssetMap = 0;
  *(undefined8 *)&(this->CompiledRenderAssetMap).field_0x8 = 0;
  *(undefined8 *)&(this->CompiledRenderAssetMap).field_0x20 = 0;
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x28 = 0;
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x34 = 0;
  *(undefined8 *)&(this->CompiledRenderAssetMap).field_0x40 = 0;
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x48 = 0;
  *(undefined8 *)&this->CompiledNumForcedLODCompMap = 0;
  *(undefined8 *)&(this->CompiledNumForcedLODCompMap).field_0x8 = 0;
  *(undefined8 *)&(this->CompiledNumForcedLODCompMap).field_0x20 = 0;
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x28 = 0;
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x34 = 0;
  *(undefined8 *)&(this->CompiledNumForcedLODCompMap).field_0x40 = 0;
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x48 = 0;
  this->MaxTexelFactor = 3.4028235e+38;
  return this;
}

// ~FRenderAssetInstanceView @ 14880c440

void __thiscall FRenderAssetInstanceView::~FRenderAssetInstanceView(FRenderAssetInstanceView *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  *(undefined4 *)&(this->CompiledNumForcedLODCompMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompiledNumForcedLODCompMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompiledNumForcedLODCompMap);
  *(undefined4 *)&(this->CompiledRenderAssetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompiledRenderAssetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompiledRenderAssetMap);
  *(undefined4 *)&(this->RenderAssetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderAssetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderAssetMap);
  TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->Elements).Chunks);
  pFVar2 = (this->Bounds4).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// CreateView @ 14882dac0

TRefCountPtr<FRenderAssetInstanceView_const_> __cdecl
FRenderAssetInstanceView::CreateView(FRenderAssetInstanceView *param_1)

{
  int iVar1;
  FRenderAssetInstanceView *pFVar2;
  longlong in_RDX;
  
  pFVar2 = ::operator_new(0x130);
  if (pFVar2 == (FRenderAssetInstanceView *)0x0) {
    pFVar2 = (FRenderAssetInstanceView *)0x0;
  }
  else {
    pFVar2 = FRenderAssetInstanceView(pFVar2);
    if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    }
  }
  TArray<FBounds4,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar2->Bounds4,(TArray<FBounds4,TSizedDefaultAllocator<32>_> *)(in_RDX + 0x10));
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar2->Elements,
             (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *)
             (in_RDX + 0x20));
  TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
  ::operator=(&pFVar2->RenderAssetMap,
              (TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
               *)(in_RDX + 0x38));
  pFVar2->MaxTexelFactor = *(float *)(in_RDX + 0x128);
  iVar1 = (int)pFVar2->_padding_;
  param_1->_padding_ = (longlong)pFVar2;
  *(int *)&pFVar2->_padding_ = iVar1;
  if (iVar1 == 0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return (TRefCountPtr<FRenderAssetInstanceView_const_>)param_1;
}

// CreateViewWithUninitializedBounds @ 14882db70

TRefCountPtr<FRenderAssetInstanceView> __cdecl
FRenderAssetInstanceView::CreateViewWithUninitializedBounds(FRenderAssetInstanceView *param_1)

{
  longlong lVar1;
  FRenderAssetInstanceView *pFVar2;
  longlong in_RDX;
  
  pFVar2 = ::operator_new(0x130);
  if (pFVar2 == (FRenderAssetInstanceView *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar2 = FRenderAssetInstanceView(pFVar2);
    param_1->_padding_ = (longlong)pFVar2;
    if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    }
  }
  lVar1 = param_1->_padding_;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x150,0x10,*(int *)(in_RDX + 0x18),(ForAnyElementType *)(lVar1 + 0x10),
             (int *)(lVar1 + 0x18),(int *)(lVar1 + 0x1c));
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator=
            ((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *)
             (param_1->_padding_ + 0x20),
             (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *)
             (in_RDX + 0x20));
  TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
  ::operator=((TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
               *)(param_1->_padding_ + 0x38),
              (TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
               *)(in_RDX + 0x38));
  *(undefined4 *)(param_1->_padding_ + 0x128) = *(undefined4 *)(in_RDX + 0x128);
  return (TRefCountPtr<FRenderAssetInstanceView>)param_1;
}

// GetDistanceAndRange @ 14883dd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FRenderAssetInstanceView::GetDistanceAndRange
          (UPrimitiveComponent *param_1,TBoxSphereBounds<double,double> *param_2,float *param_3,
          float *param_4,float *param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  UPrimitiveComponent *pUVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  
  if ((param_1 == (UPrimitiveComponent *)0x0) || ((param_1->field_0x98 & 1) == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component && Component->IsRegistered()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                       ,0xf0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UPrimitiveComponent::GetLODParentPrimitive(param_1);
  dVar8 = (param_2->Origin).field0_0x0._s_0.X - *(double *)&param_1->field_0x110;
  dVar11 = (param_2->Origin).field0_0x0._s_0.Y - *(double *)&param_1->field_0x118;
  dVar5 = (param_2->Origin).field0_0x0._s_0.Z - *(double *)&param_1->field_0x120;
  auVar6._0_8_ = dVar5 * dVar5;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar11 * dVar11 + dVar8 * dVar8 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  dVar8 = ((double)param_1->MinDrawDistance - auVar7._0_8_) - param_2->SphereRadius;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  *param_3 = (float)dVar8 * (float)dVar8;
  fVar10 = param_1->MinDrawDistance;
  if (param_1->MinDrawDistance <= 0.0) {
    fVar10 = 0.0;
  }
  *param_4 = fVar10 * fVar10;
  if (pUVar4 == (UPrimitiveComponent *)0x0) {
    *param_5 = __real_7f7fffff;
  }
  else {
    dVar8 = *(double *)&param_1->field_0x118 - *(double *)&pUVar4->field_0x118;
    dVar11 = *(double *)&param_1->field_0x110 - *(double *)&pUVar4->field_0x110;
    dVar5 = *(double *)&param_1->field_0x120 - *(double *)&pUVar4->field_0x120;
    auVar9._0_8_ = dVar11 * dVar11;
    auVar9._8_8_ = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar8 * dVar8 + auVar9._0_8_ + dVar5 * dVar5;
    auVar7 = sqrtpd(auVar9,auVar2);
    fVar10 = (float)(auVar7._0_8_ +
                    (double)((float)*(double *)&pUVar4->field_0x140 + pUVar4->MinDrawDistance));
    *param_5 = fVar10 * fVar10;
  }
  return;
}

// GetMaxDrawDistSqWithLODParent @ 14883e6c0

float __cdecl
FRenderAssetInstanceView::GetMaxDrawDistSqWithLODParent
          (TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  
  dVar3 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  auVar4._0_8_ = dVar3 * dVar3;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6 * dVar6 + auVar4._0_8_ + dVar2 * dVar2;
  auVar5 = sqrtpd(auVar4,auVar5);
  fVar1 = (float)(auVar5._0_8_ + (double)(param_3 + param_4));
  return fVar1 * fVar1;
}

// OutputToLog @ 14884bc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FRenderAssetInstanceView::OutputToLog
          (TBoxSphereBounds<double,double> *param_1,int param_2,
          TArray<FBounds4,TSizedDefaultAllocator<32>_> *param_3,float param_4,bool param_5,
          float param_6,float param_7,wchar_t *param_8,UPrimitiveComponent *param_9)

{
  code *pcVar1;
  float fVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [4];
  
  if (param_9 == (UPrimitiveComponent *)0x0) {
    if (4 < (byte)LogContentStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    }
  }
  else if (4 < (byte)LogContentStreaming._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_9,local_58,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  fVar2 = __real_7f7fffff;
  if ((param_4 == __real_7f7fffff) || (param_5)) {
    if (4 < (byte)LogContentStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    }
  }
  else if (param_4 < 0.0) {
    if (4 < (byte)LogContentStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    }
  }
  else if (param_7 <= 0.0) {
    uVar7 = param_2 >> 0x1f & 3;
    uVar5 = param_2 + uVar7;
    uVar8 = (int)uVar5 >> 2;
    if (((int)uVar8 < 0) || (param_3->ArrayNum <= (int)uVar8)) {
      if (4 < (byte)LogContentStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_____OffScreenSi_151b92ea8,
                   (FLogCategoryBase *)&LogContentStreaming);
      }
    }
    else {
      uVar6 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((3 < (uVar5 & 3) - uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                             ,0x319,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (4 < (byte)LogContentStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      }
    }
  }
  else if (4 < (byte)LogContentStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  pTVar3 = CVarStreamingUseNewMetrics.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar3->ShadowedValue[0] == 0) {
    if ((param_4 < 0.0) || (fVar2 <= param_4)) {
      if ((byte)LogContentStreaming._0_1_ < 5) {
        return;
      }
      ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogContentStreaming._0_1_ < 5) {
        return;
      }
      ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    }
  }
  else if ((param_4 < 0.0) || (fVar2 <= param_4)) {
    if ((byte)LogContentStreaming._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogContentStreaming._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    local_78.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      local_78.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// SwapData @ 14885b050

void __cdecl
FRenderAssetInstanceView::SwapData
          (FRenderAssetInstanceView *param_1,FRenderAssetInstanceView *param_2)

{
  float fVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  bool bVar22;
  
  if ((param_1->Bounds4).ArrayNum != (param_2->Bounds4).ArrayNum) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Lfs->Bounds4.Num() == Rhs->Bounds4.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x105,L"");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Elements).NumElements != (param_2->Elements).NumElements) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Lfs->Elements.Num() == Rhs->Elements.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x106,L"");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&(param_1->RenderAssetMap).field_0x8 - *(int *)&(param_1->RenderAssetMap).field_0x34
      != *(int *)&(param_2->RenderAssetMap).field_0x8 -
         *(int *)&(param_2->RenderAssetMap).field_0x34) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Lfs->RenderAssetMap.Num() == Rhs->RenderAssetMap.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x107,L"");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(int *)&(param_1->CompiledRenderAssetMap).field_0x8 !=
       *(int *)&(param_1->CompiledRenderAssetMap).field_0x34) ||
     (*(int *)&(param_2->CompiledRenderAssetMap).field_0x8 !=
      *(int *)&(param_2->CompiledRenderAssetMap).field_0x34)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Lfs->CompiledRenderAssetMap.Num() == 0 && Rhs->CompiledRenderAssetMap.Num() == 0"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x108,L"");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(int *)&(param_1->CompiledNumForcedLODCompMap).field_0x8 !=
       *(int *)&(param_1->CompiledNumForcedLODCompMap).field_0x34) ||
     (*(int *)&(param_2->CompiledNumForcedLODCompMap).field_0x8 !=
      *(int *)&(param_2->CompiledNumForcedLODCompMap).field_0x34)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Lfs->CompiledNumForcedLODCompMap.Num() && !Rhs->CompiledNumForcedLODCompMap.Num()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x109,L"");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar15 = (param_2->Bounds4).ArrayNum;
  iVar16 = (param_2->Bounds4).ArrayMax;
  pFVar3 = (param_1->Bounds4).AllocatorInstance.Data;
  iVar17 = (param_1->Bounds4).ArrayNum;
  iVar18 = (param_1->Bounds4).ArrayMax;
  (param_1->Bounds4).AllocatorInstance.Data = (param_2->Bounds4).AllocatorInstance.Data;
  (param_1->Bounds4).ArrayNum = iVar15;
  (param_1->Bounds4).ArrayMax = iVar16;
  (param_2->Bounds4).AllocatorInstance.Data = pFVar3;
  (param_2->Bounds4).ArrayNum = iVar17;
  (param_2->Bounds4).ArrayMax = iVar18;
  iVar15 = (param_2->Elements).Chunks.Array.ArrayNum;
  iVar16 = (param_2->Elements).Chunks.Array.ArrayMax;
  pFVar3 = (param_1->Elements).Chunks.Array.AllocatorInstance.Data;
  iVar17 = (param_1->Elements).Chunks.Array.ArrayNum;
  iVar18 = (param_1->Elements).Chunks.Array.ArrayMax;
  iVar20 = (param_1->Elements).NumElements;
  uVar21 = *(undefined4 *)&(param_1->Elements).field_0x14;
  (param_1->Elements).Chunks.Array.AllocatorInstance.Data =
       (param_2->Elements).Chunks.Array.AllocatorInstance.Data;
  (param_1->Elements).Chunks.Array.ArrayNum = iVar15;
  (param_1->Elements).Chunks.Array.ArrayMax = iVar16;
  uVar19 = *(undefined4 *)&(param_2->Elements).field_0x14;
  (param_1->Elements).NumElements = (param_2->Elements).NumElements;
  *(undefined4 *)&(param_1->Elements).field_0x14 = uVar19;
  (param_2->Elements).Chunks.Array.AllocatorInstance.Data = pFVar3;
  (param_2->Elements).Chunks.Array.ArrayNum = iVar17;
  (param_2->Elements).Chunks.Array.ArrayMax = iVar18;
  (param_2->Elements).NumElements = iVar20;
  *(undefined4 *)&(param_2->Elements).field_0x14 = uVar21;
  uVar4 = *(undefined8 *)&(param_2->RenderAssetMap).field_0x8;
  uVar5 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x40;
  uVar6 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x48;
  uVar7 = *(undefined8 *)&param_1->RenderAssetMap;
  uVar8 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x8;
  uVar9 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x10;
  uVar10 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x18;
  uVar11 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x20;
  uVar12 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x28;
  uVar13 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x30;
  uVar14 = *(undefined8 *)&(param_1->RenderAssetMap).field_0x38;
  *(undefined8 *)&param_1->RenderAssetMap = *(undefined8 *)&param_2->RenderAssetMap;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_2->RenderAssetMap).field_0x18;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x10 =
       *(undefined8 *)&(param_2->RenderAssetMap).field_0x10;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&(param_2->RenderAssetMap).field_0x28;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x20 =
       *(undefined8 *)&(param_2->RenderAssetMap).field_0x20;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&(param_2->RenderAssetMap).field_0x38;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x30 =
       *(undefined8 *)&(param_2->RenderAssetMap).field_0x30;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&(param_2->RenderAssetMap).field_0x48;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x40 =
       *(undefined8 *)&(param_2->RenderAssetMap).field_0x40;
  *(undefined8 *)&(param_1->RenderAssetMap).field_0x48 = uVar4;
  *(undefined8 *)&param_2->RenderAssetMap = uVar7;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x8 = uVar8;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x10 = uVar9;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x18 = uVar10;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x20 = uVar11;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x28 = uVar12;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x30 = uVar13;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x38 = uVar14;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x40 = uVar5;
  *(undefined8 *)&(param_2->RenderAssetMap).field_0x48 = uVar6;
  fVar1 = param_1->MaxTexelFactor;
  param_1->MaxTexelFactor = param_2->MaxTexelFactor;
  param_2->MaxTexelFactor = fVar1;
  return;
}

