// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// FPCGTextureDataProviderProxy @ 149739f00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPCGTextureDataProviderProxy * __thiscall
FPCGTextureDataProviderProxy::FPCGTextureDataProviderProxy
          (FPCGTextureDataProviderProxy *this,
          TWeakObjectPtr<UPCGTextureDataProvider,FWeakObjectPtr> param_1)

{
  TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar2;
  int *piVar3;
  TArray<FPCGTextureInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  int iVar6;
  FPCGTextureBindingInfo *pFVar7;
  void *_Src;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  FPCGTextureDataProviderProxy *pFVar11;
  UObject *pUVar12;
  FWeakObjectPtr local_res10;
  FPCGDataCollectionDesc *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar1 = &this->BindingInfos;
  pTVar2 = &this->PinDesc;
  piVar3 = &(this->BindingInfos).ArrayMax;
  pTVar4 = &this->TextureInfos;
  this->_padding_ = (longlong)&___7FPCGTextureDataProviderProxy__6B_;
  piVar5 = &(this->TextureInfos).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BindingInfos).ArrayNum = 0;
  *piVar3 = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TextureInfos).ArrayNum = 0;
  *piVar5 = 0;
  this->ExportMode = NoExport;
  pTVar2->Object = (FPCGDataCollectionDesc *)0x0;
  (this->PinDesc).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OutputPinLabel).ComparisonIndex = 0;
  (this->OutputPinLabel).Number = 0;
  (this->OutputPinLabelAlias).ComparisonIndex = 0;
  (this->OutputPinLabelAlias).Number = 0;
  this->OriginatingGenerationCount = 0;
  (this->DataProviderWeakPtr_GT).WeakPtr = (FWeakObjectPtr)0x0;
  this->TextureInfosBufferSRV = (FRDGBufferSRV *)0x0;
  local_res10 = param_1.WeakPtr;
  bVar10 = IsInGameThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                        ,0x181,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FPCGTextureDataProviderProxy *)(*pcVar8)();
      return pFVar11;
    }
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InDataProvider.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                        ,0x182,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FPCGTextureDataProviderProxy *)(*pcVar8)();
      return pFVar11;
    }
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  if (pTVar1 != (TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[5].field_0x10
     ) {
    DestructItems<FPCGTextureBindingInfo,int>
              ((FPCGTextureBindingInfo *)(pTVar1->AllocatorInstance).Data,
               (this->BindingInfos).ArrayNum);
    iVar6 = *(int *)&pUVar12[5].field_0x18;
    pFVar7 = *(FPCGTextureBindingInfo **)&pUVar12[5].field_0x10;
    (this->BindingInfos).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,iVar6,*piVar3,&pTVar1->AllocatorInstance,iVar6,piVar3);
      ConstructItems<FPCGTextureBindingInfo,FPCGTextureBindingInfo,int>
                ((pTVar1->AllocatorInstance).Data,pFVar7,iVar6);
    }
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  if (pTVar4 != (TArray<FPCGTextureInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[5].field_0x20) {
    iVar6 = *(int *)(pUVar12 + 6);
    _Src = *(void **)&pUVar12[5].field_0x20;
    (this->TextureInfos).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar5 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,*piVar5,&pTVar4->AllocatorInstance,iVar6,piVar5);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar6 << 3);
      }
    }
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  this->ExportMode = pUVar12[3].field_0x20;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar9 = *(undefined4 *)&pUVar12[1].field_0x8;
  (this->OutputPinLabel).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar12[1].field_0x4;
  (this->OutputPinLabel).Number = uVar9;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar9 = *(undefined4 *)&pUVar12[1].field_0x10;
  (this->OutputPinLabelAlias).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar12[1].field_0xc;
  (this->OutputPinLabelAlias).Number = uVar9;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  this->OriginatingGenerationCount = *(ulong64 *)&pUVar12[3].field_0x18;
  (this->DataProviderWeakPtr_GT).WeakPtr = local_res10;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  local_30.ReferenceController = *(TReferenceControllerBase<1> **)&pUVar12[5].field_0x8;
  local_38 = *(FPCGDataCollectionDesc **)(pUVar12 + 5);
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)&local_38) {
    pTVar2->Object = local_38;
    local_38 = (FPCGDataCollectionDesc *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PinDesc).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return this;
}

// operator() @ 14973ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>::operator()(void *this)

{
  EPCGExportMode EVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  ForElementType<int> FVar6;
  FName FVar7;
  FName FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  UPCGComputeDataProvider *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  UPCGTextureData *pUVar20;
  FPCGDataDesc *pFVar21;
  UPCGSettings *pUVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  ForElementType<int> FVar26;
  uint uVar27;
  undefined1 auStackY_268 [32];
  FLLMScope local_228 [2];
  longlong local_220;
  longlong *local_218;
  UPCGTextureData *local_210;
  FString local_208;
  UPCGComputeDataProvider *local_1f8;
  UPCGDataBinding *local_1f0;
  FMemScope local_1e8;
  TArrayView<FPCGDataDesc_const_,int> local_1e0;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined1 local_198 [128];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_118;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FLLMScope::FLLMScope(local_228,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_208.Data._4_8_ = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope
            (&local_1e8,(FName *)((longlong)&local_208.Data.AllocatorInstance.Data + 4),true);
  this_00 = (UPCGComputeDataProvider *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  local_1f8 = this_00;
  if (this_00 == (UPCGComputeDataProvider *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else if (this_00->GenerationCounter == *(atomic<unsigned___int64> *)((longlong)this + 0x40)) {
    if (*(char *)&this_00[1].ProducerSettings.SoftObjectPtr == '\0') {
      if (*(longlong *)((longlong)this + 0x18) == 0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4301770094700135018>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                            ,0x26a,"PinDesc");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_1497406f3;
      }
      local_1f0 = (UPCGDataBinding *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00[1].GraphBindingIndex);
      if (local_1f0 != (UPCGDataBinding *)0x0) {
        pTVar17 = UPCGDataBinding::GetStringTable(local_1f0);
        dVar12 = __real_4000000000000000;
        iVar25 = *(int *)&this_00[1].ProducerKernel.field0_0x0;
        uVar27 = 0;
        if (0 < iVar25) {
          local_220 = 0;
          do {
            lVar23 = local_220;
            uVar14 = 0;
            if ((int)uVar27 < iVar25) {
              uVar14 = ~uVar27 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar2 = *(longlong *)&this_00[1].bProducedByCPU;
            if ((((int)uVar27 < 0) || (*(int *)((longlong)this + 8) <= (int)uVar27)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExportedTextures.IsValidIndex(TextureDataIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                                    ,0x278,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((*(longlong *)((longlong)this + 0x18) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar25 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8);
            if ((iVar25 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((((int)uVar27 < 0) || (iVar25 <= (int)uVar27)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PinDesc->GetDataDescriptions().IsValidIndex(TextureDataIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                                    ,0x279,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar25 = *(int *)(lVar23 + lVar2);
            if (((iVar25 < 0) || (this_00[1].DownstreamInputPinLabelAliases.ArrayNum <= iVar25)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BindingInfos_GT.IsValidIndex(TextureInfo.BindingIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                                    ,0x27a,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar14 = *(uint *)(lVar23 + lVar2);
            uVar16 = 0;
            if ((int)uVar14 < this_00[1].DownstreamInputPinLabelAliases.ArrayNum) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar3 = this_00[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data;
            uVar16 = *(uint *)(local_220 + lVar2);
            uVar15 = 0;
            if ((int)uVar16 < this_00[1].DownstreamInputPinLabelAliases.ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar4 = this_00[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar16 * 0xd0;
            local_c8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar23 + 0x30);
            local_c8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar23 + 0x30 + 8);
            local_c8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar23 + 0x40);
            local_c8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar23 + 0x40 + 8);
            local_c8.Translation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar23 + 0x50);
            local_c8.Translation.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar23 + 0x50 + 8);
            local_c8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar23 + 0x60);
            local_c8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar23 + 0x60 + 8);
            local_1d0 = *(double *)(pFVar4 + lVar23 + 0x70);
            dStack_1c8 = *(double *)(pFVar4 + lVar23 + 0x70 + 8);
            local_1c0 = *(double *)(pFVar4 + lVar23 + 0x80);
            local_c8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar23 + 0x80 + 8);
            uVar5 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar14 * 0xd0 + 0x18);
            dVar10 = (local_1d0 * dVar12) / (double)(int)uVar5;
            dVar11 = (dStack_1c8 * dVar12) / (double)(int)((ulonglong)uVar5 >> 0x20);
            local_1b8 = local_1d0;
            dStack_1b0 = dStack_1c8;
            local_1a8 = local_1c0;
            local_c8.Scale3D.XY.m128d_f64[0] = local_1d0;
            local_c8.Scale3D.XY.m128d_f64[1] = dStack_1c8;
            local_c8.Scale3D.ZW.m128d_f64[0] = local_1c0;
            pUVar18 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar18,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar19 = Z_Construct_UClass_UPCGTextureData_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_198,pUVar19);
            local_198._8_8_ = pUVar18;
            pUVar20 = (UPCGTextureData *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
            local_210 = pUVar20;
            if (local_198._64_8_ != 0) {
              plVar24 = (longlong *)(local_198 + 0x50);
              if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
                plVar24 = (longlong *)local_198._104_8_;
              }
              (**(code **)(*plVar24 + 0x10))();
            }
            lVar23 = local_220;
            if (dVar11 <= dVar10) {
              dVar10 = dVar11;
            }
            *(float *)&pUVar20->field_0x1ac = (float)dVar10;
            uVar14 = *(uint *)(local_220 + 4 + lVar2);
            uVar16 = 0;
            if ((int)uVar27 < *(int *)((longlong)this + 8)) {
              uVar16 = ~uVar27 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_218 = *(longlong **)(lVar23 + *(longlong *)this);
            if (local_218 != (longlong *)0x0) {
              (**(code **)(*local_218 + 0x30))();
            }
            UPCGTextureData::Initialize
                      (local_210,(IPooledRenderTarget *)&local_218,uVar14,&local_c8,true);
            local_118.Elements._0_8_ = 0;
            local_118.Elements._8_8_ = 0;
            local_118.Elements._32_8_ = 0;
            local_118.Elements._40_4_ = 0;
            local_118.Elements._44_4_ = 0x80;
            local_118.Elements._48_4_ = 0xffffffff;
            local_118.Elements._52_4_ = 0;
            local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_118.HashSize = 0;
            if ((*(longlong *)((longlong)this + 0x18) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_1e0.DataPtr = (FPCGDataDesc *)**(undefined8 **)((longlong)this + 0x18);
            iVar25 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
            if ((iVar25 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_1e0.ArrayNum = iVar25;
            pFVar21 = TArrayView<FPCGDataDesc_const_,int>::operator[](&local_1e0,uVar27);
            iVar25 = (pFVar21->TagStringKeys).ArrayNum;
            FVar6 = (pFVar21->TagStringKeys).AllocatorInstance.SecondaryData;
            FVar26 = (ForElementType<int>)&pFVar21->TagStringKeys;
            if (FVar6 != (ForElementType<int>)0x0) {
              FVar26 = FVar6;
            }
            if ((iVar25 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar6 = (ForElementType<int>)((longlong)FVar26 + (longlong)iVar25 * 4);
            for (; FVar26 != FVar6; FVar26 = (ForElementType<int>)((longlong)FVar26 + 4)) {
              iVar25 = *(int *)FVar26;
              if ((iVar25 < 0) || (pTVar17->ArrayNum <= iVar25)) {
                bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4301770094700135049>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                                    ,0x289,"StringTable.IsValidIndex(TagStringKey)");
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              else {
                if ((iVar25 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>
                          (&local_118,&local_208,
                           (bool *)((pTVar17->AllocatorInstance).Data + (longlong)iVar25 * 0x10));
              }
              this_00 = local_1f8;
            }
            FVar7 = *(FName *)((longlong)this + 0x34);
            FVar8 = *(FName *)((longlong)this + 0x28);
            EVar1 = *(EPCGExportMode *)((longlong)this + 0x30);
            pUVar22 = UPCGComputeDataProvider::GetProducerSettings(this_00);
            UPCGDataBinding::ReceiveDataFromGPU_GameThread
                      (local_1f0,(UPCGData *)local_210,pUVar22,EVar1,FVar8,FVar7,&local_118);
            local_118.HashSize = 0;
            if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_118.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_118.Elements);
            uVar27 = uVar27 + 1;
            iVar25 = *(int *)&this_00[1].ProducerKernel.field0_0x0;
            local_220 = local_220 + 8;
          } while ((int)uVar27 < iVar25);
        }
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this_00[1]._padding_);
  }
LAB_1497406f3:
  FMemScope::~FMemScope(&local_1e8);
  FLLMScope::~FLLMScope(local_228);
  return;
}

// AllocateResources @ 1497485a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::AllocateResources
          (FPCGTextureDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  FLLMScope local_res20 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  CreateDefaultTextures(this,param_1);
  CreateTextures(this,param_1);
  PackTextureInfos(this,param_1);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// CreateDefaultTextures @ 14974b9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::CreateDefaultTextures
          (FPCGTextureDataProviderProxy *this,FRDGBuilder *param_1)

{
  int *piVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar2;
  FRDGUserValidation *pFVar3;
  char cVar4;
  undefined2 uVar5;
  longlong lVar6;
  FRDGTexture *pFVar7;
  FMemStackBase *this_00;
  FRDGBuilder *pFVar8;
  int iVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FRDGTextureSRV *pFVar12;
  FRDGTextureUAV *pFVar13;
  FRDGTextureSRV **ppFVar14;
  undefined1 auStackY_128 [32];
  FRDGTextureSRVDesc local_f8;
  FRDGUserValidation *local_e0;
  longlong local_d8;
  FMemStackBase *local_d0;
  FRDGBuilder *local_c8;
  FRDGTexture *local_c0;
  FPCGTextureDataProviderProxy *local_b8;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8 = param_1;
  local_b8 = this;
  pFVar10 = FSystemTextures::GetDefaultTexture2D
                      ((FSystemTextures *)&GSystemTextures,param_1,PF_G8,0.0);
  pFVar11 = FSystemTextures::GetDefaultTexture
                      ((FSystemTextures *)&GSystemTextures,param_1,Texture2DArray,PF_G8,0.0);
  local_90 = FClearValueBinding::Black.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_e0 = (FRDGUserValidation *)&DAT_100000001;
  local_a8._0_8_ = 0x20008;
  local_a8._8_8_ = FClearValueBinding::Black._0_8_;
  local_a8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_88 = 0;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x3000101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  local_c0 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_a8,L"PCGTextureDI_DummyTextureForUAV",None)
  ;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  local_90 = FClearValueBinding::Black.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_e0 = (FRDGUserValidation *)&DAT_100000001;
  local_84 = &DAT_100000001;
  local_a8._0_8_ = 0x20008;
  local_a8._8_8_ = FClearValueBinding::Black._0_8_;
  local_a8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_88 = 0;
  local_7c = 0x10001;
  local_78 = 0x3010101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  FRDGBuilder::CreateTexture
            (param_1,(FRDGTextureDesc *)local_a8,L"PCGTextureDI_DummyTextureArrayForUAV",None);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  local_e0 = &param_1->UserValidation;
  local_d8 = 8;
  local_d0 = (FMemStackBase *)&param_1->_padding_;
  pTVar2 = &param_1->Views;
  ppFVar14 = this->TextureArraySRV;
  do {
    this_00 = local_d0;
    local_f8._padding_._2_1_ = (pFVar10->Desc).field_0x30;
    cVar4 = (pFVar10->Desc).field_0x32;
    local_f8._padding_._0_2_ = 0;
    local_f8._padding_._3_1_ = 0;
    local_f8._padding_._4_2_ = 0;
    local_f8._padding_._6_1_ = 0;
    local_f8._padding_._7_1_ = 0;
    local_f8._padding_._0_1_ = 0;
    local_f8._padding_._2_1_ = '\0';
    if ((cVar4 == '\x01') || (cVar4 == '\x04')) {
      uVar5 = *(undefined2 *)&(pFVar10->Desc).field_0x2e;
      local_f8._padding_._6_1_ = (undefined1)uVar5;
      local_f8._padding_._7_1_ = (undefined1)((ushort)uVar5 >> 8);
    }
    local_f8.Texture = pFVar10;
    FRDGUserValidation::ValidateCreateSRV(local_e0,&local_f8);
    pFVar7 = local_f8.Texture;
    pFVar12 = FMemStackBase::Alloc(this_00,0x48,8);
    pFVar12->_padding_ = pFVar7->_padding_;
    *(byte *)&pFVar12->_padding_ = (byte)pFVar12->_padding_ & 0xfe;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
    *(undefined1 *)&pFVar12->_padding_ = 1;
    *(undefined8 *)((longlong)&pFVar12->_padding_ + 4) = 0xffffffffffffffff;
    *(undefined1 *)&(pFVar12->Desc)._padding_ = (undefined1)local_f8._padding_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 1) = local_f8._padding_._1_1_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 2) = local_f8._padding_._2_1_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 3) = local_f8._padding_._3_1_;
    *(undefined2 *)((longlong)&(pFVar12->Desc)._padding_ + 4) = local_f8._padding_._4_2_;
    *(ushort *)((longlong)&(pFVar12->Desc)._padding_ + 6) =
         CONCAT11(local_f8._padding_._7_1_,local_f8._padding_._6_1_);
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 2) = 0;
    *(char *)&(pFVar12->Desc)._padding_ = (char)local_f8._padding_;
    *(char *)((longlong)&(pFVar12->Desc)._padding_ + 2) = local_f8._padding_._2_1_;
    if (local_f8._padding_._2_1_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 1) = local_f8._padding_._1_1_;
    }
    (pFVar12->Desc).Texture = local_f8.Texture;
    iVar9 = (param_1->Views).Array.ArrayNum;
    if (iVar9 == (param_1->Views).Array.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax
                        );
    }
    pFVar3 = local_e0;
    (param_1->Views).Array.ArrayNum = iVar9 + 1;
    (pTVar2->Array).AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar12;
    *(int *)((longlong)&pFVar12->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateSRV(local_e0,pFVar12);
    ppFVar14[-8] = pFVar12;
    local_f8._padding_._4_2_ = 0;
    local_f8._padding_._6_1_ = 0;
    local_f8._padding_._7_1_ = 0;
    local_f8._padding_._0_1_ = 0;
    local_f8._padding_._2_1_ = '\0';
    local_f8._padding_._2_1_ = (pFVar11->Desc).field_0x30;
    cVar4 = (pFVar11->Desc).field_0x32;
    local_f8._padding_._0_2_ = 0;
    local_f8._padding_._3_1_ = 0;
    if ((cVar4 == '\x01') || (cVar4 == '\x04')) {
      uVar5 = *(undefined2 *)&(pFVar11->Desc).field_0x2e;
      local_f8._padding_._6_1_ = (undefined1)uVar5;
      local_f8._padding_._7_1_ = (undefined1)((ushort)uVar5 >> 8);
    }
    local_f8.Texture = pFVar11;
    FRDGUserValidation::ValidateCreateSRV(pFVar3,&local_f8);
    pFVar7 = local_f8.Texture;
    pFVar12 = FMemStackBase::Alloc(local_d0,0x48,8);
    lVar6 = pFVar7->_padding_;
    *(byte *)&pFVar12->_padding_ = (byte)pFVar12->_padding_ & 0xfe;
    pFVar12->_padding_ = lVar6;
    pFVar12->_padding_ = 0;
    *(undefined1 *)&pFVar12->_padding_ = 1;
    *(undefined8 *)((longlong)&pFVar12->_padding_ + 4) = 0xffffffffffffffff;
    pFVar12->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
    *(undefined1 *)&(pFVar12->Desc)._padding_ = (undefined1)local_f8._padding_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 1) = local_f8._padding_._1_1_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 2) = local_f8._padding_._2_1_;
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 3) = local_f8._padding_._3_1_;
    *(undefined2 *)((longlong)&(pFVar12->Desc)._padding_ + 4) = local_f8._padding_._4_2_;
    *(ushort *)((longlong)&(pFVar12->Desc)._padding_ + 6) =
         CONCAT11(local_f8._padding_._7_1_,local_f8._padding_._6_1_);
    *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 2) = 0;
    *(char *)&(pFVar12->Desc)._padding_ = (char)local_f8._padding_;
    *(char *)((longlong)&(pFVar12->Desc)._padding_ + 2) = local_f8._padding_._2_1_;
    if (local_f8._padding_._2_1_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar12->Desc)._padding_ + 1) = local_f8._padding_._1_1_;
    }
    (pFVar12->Desc).Texture = local_f8.Texture;
    iVar9 = (param_1->Views).Array.ArrayNum;
    if (iVar9 == (param_1->Views).Array.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax
                        );
    }
    (param_1->Views).Array.ArrayNum = iVar9 + 1;
    (pTVar2->Array).AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar12;
    *(int *)((longlong)&pFVar12->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateSRV(local_e0,pFVar12);
    pFVar8 = local_c8;
    *ppFVar14 = pFVar12;
    ppFVar14 = ppFVar14 + 1;
    local_d8 = local_d8 + -1;
  } while (local_d8 != 0);
  local_f8.Texture = local_c0;
  local_f8._padding_._0_1_ = (local_c0->Desc).field_0x34;
  pFVar3 = &local_c8->UserValidation;
  local_f8._padding_._1_1_ = 0;
  local_f8._padding_._2_1_ = 0;
  local_f8._padding_._3_1_ = 0;
  local_f8._padding_._4_2_ = 0;
  pTVar2 = &local_c8->Views;
  local_f8._padding_._6_1_ = 0;
  local_f8._padding_._0_1_ = '\0';
  FRDGUserValidation::ValidateCreateUAV(pFVar3,(FRDGTextureUAVDesc *)&local_f8);
  pFVar10 = local_f8.Texture;
  pFVar13 = FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x50,8);
  pFVar13->_padding_ = pFVar10->_padding_;
  *(byte *)&pFVar13->_padding_ = (byte)pFVar13->_padding_ & 0xfe;
  pFVar13->_padding_ = 0;
  *(undefined1 *)&pFVar13->_padding_ = 0;
  *(undefined1 *)&pFVar13->_padding_ = 0;
  pFVar13->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined8 *)((longlong)&pFVar13->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&(pFVar13->Desc)._padding_ = (undefined1)local_f8._padding_;
  *(undefined1 *)((longlong)&(pFVar13->Desc)._padding_ + 1) = local_f8._padding_._1_1_;
  *(ushort *)((longlong)&(pFVar13->Desc)._padding_ + 2) =
       CONCAT11(local_f8._padding_._3_1_,local_f8._padding_._2_1_);
  *(undefined2 *)((longlong)&(pFVar13->Desc)._padding_ + 4) = local_f8._padding_._4_2_;
  *(undefined1 *)&(pFVar13->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar13->Desc)._padding_ + 6) = local_f8._padding_._6_1_;
  *(char *)&(pFVar13->Desc)._padding_ = (char)local_f8._padding_;
  if ((char)local_f8._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar13->Desc)._padding_ + 7) = local_f8._padding_._7_1_;
  }
  piVar1 = &(pFVar8->Views).Array.ArrayMax;
  (pFVar13->Desc).Texture = local_f8.Texture;
  iVar9 = (pFVar8->Views).Array.ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                      (0x808,(ForElementType<FRDGView_*> *)pTVar2,piVar1);
  }
  (pFVar8->Views).Array.ArrayNum = iVar9 + 1;
  (pTVar2->Array).AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar13;
  *(int *)((longlong)&pFVar13->_padding_ + 4) = (pFVar8->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(pFVar3,pFVar13);
  local_b8->TextureUAV[0] = pFVar13;
  return;
}

// CreateTextures @ 14974f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::CreateTextures
          (FPCGTextureDataProviderProxy *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  code *pcVar4;
  undefined4 uVar5;
  FRDGTexture *pFVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TRefCountPtr<IPooledRenderTarget> TVar12;
  FRDGTexture *pFVar13;
  FRDGTextureSRV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FScriptContainerElement *pFVar16;
  TRHIGlobal<int> TVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FRDGTextureUAV **ppFVar22;
  ulonglong uVar23;
  undefined1 auStackY_1b8 [32];
  undefined1 local_167 [7];
  TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> local_160;
  FRDGTextureSRVDesc local_150;
  wchar_t *local_138;
  FRDGBuilder *local_130;
  FRDGTextureUAV **local_128;
  FRDGTextureSRVDesc local_120;
  undefined4 local_108;
  undefined4 uStack_104;
  FRDGTexture *local_100;
  undefined1 local_f8 [24];
  float fStack_e0;
  float fStack_dc;
  wchar_t **local_d8;
  undefined1 *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  wchar_t **local_b8;
  undefined1 *local_b0;
  wchar_t **local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  float fStack_88;
  float fStack_84;
  float local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ForElementType<EPixelFormat> local_60;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar18 = 0;
  local_100 = (FRDGTexture *)0x0;
  local_130 = param_1;
  if (0 < (this->BindingInfos).ArrayNum) {
    ppFVar22 = this->TextureUAV;
    local_f8._8_8_ = (longlong)&local_100 - (longlong)this;
    uVar23 = uVar18;
    do {
      uVar20 = (uint)uVar18;
      bVar8 = false;
      uVar19 = ~uVar20 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
        uVar9 = uVar19;
      }
      local_128 = ppFVar22;
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
      if ((this->BindingInfos).AllocatorInstance.Data[uVar23] == (FScriptContainerElement)0x0) {
        uVar9 = 0;
        if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
          uVar9 = uVar19;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->BindingInfos).AllocatorInstance.Data + uVar23 + 8) == 0)
        goto LAB_14974f1e0;
        uVar9 = 0;
        if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
          uVar9 = uVar19;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TVar12 = CreateRenderTarget((FRHITexture *)local_f8,
                                    *(wchar_t **)
                                     ((this->BindingInfos).AllocatorInstance.Data + uVar23 + 8));
        pFVar13 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar12.Reference,None);
        if ((longlong *)local_f8._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_f8._0_8_ + 0x38))();
        }
LAB_14974f573:
        if (pFVar13 != (FRDGTexture *)0x0) {
          iVar10 = (this->BindingInfos).ArrayNum;
          *(FRDGTexture **)(local_f8._8_8_ + -0xe0 + (longlong)ppFVar22) = pFVar13;
          uVar9 = 0;
          if ((int)uVar20 < iVar10) {
            uVar9 = uVar19;
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
          if ((this->BindingInfos).AllocatorInstance.Data[uVar23 + 0x20] ==
              (FScriptContainerElement)0x0) {
            local_150._padding_._2_1_ = (pFVar13->Desc).field_0x30;
            cVar3 = (pFVar13->Desc).field_0x32;
            local_150._padding_._0_2_ = 0;
            local_150._padding_._3_1_ = 0;
            local_150._padding_._4_4_ = 0;
            local_150._padding_._0_1_ = 0;
            local_150._padding_._2_1_ = '\0';
            if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
              local_150._padding_._4_4_ = (uint)*(ushort *)&(pFVar13->Desc).field_0x2e << 0x10;
            }
            local_150.Texture = pFVar13;
            FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_150);
            pFVar6 = local_150.Texture;
            pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
            pFVar14->_padding_ = pFVar6->_padding_;
            *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
            pFVar14->_padding_ = 0;
            pFVar14->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
            *(undefined1 *)&pFVar14->_padding_ = 1;
            *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
            *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_150._padding_;
            *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_150._padding_._1_1_;
            *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_150._padding_._2_1_;
            *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 3) = local_150._padding_._3_1_;
            *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 4) = local_150._padding_._4_2_;
            *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 6) = local_150._padding_._6_2_;
            *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = 0;
            *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_150._padding_;
            *(char *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_150._padding_._2_1_;
            if (local_150._padding_._2_1_ != '\0') {
              *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_150._padding_._1_1_;
            }
            piVar1 = &(param_1->Views).Array.ArrayMax;
            (pFVar14->Desc).Texture = local_150.Texture;
            iVar10 = (param_1->Views).Array.ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                                 (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
            }
            (param_1->Views).Array.ArrayNum = iVar10 + 1;
            (param_1->Views).Array.AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar14;
            *(int *)((longlong)&pFVar14->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
            FRDGUserValidation::ValidateCreateSRV(&local_130->UserValidation,pFVar14);
            ppFVar22 = local_128;
            param_1 = local_130;
            local_128[-0x10] = (FRDGTextureUAV *)pFVar14;
            if (bVar8) {
              pFVar15 = FRDGBuilder::CreateUAV(local_130,pFVar13,None,PF_Unknown);
              *ppFVar22 = pFVar15;
            }
          }
          else {
            uVar9 = 0;
            if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
              uVar9 = uVar19;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((this->BindingInfos).AllocatorInstance.Data[uVar23 + 0x20] ==
                (FScriptContainerElement)0x1) {
              local_120._padding_._2_1_ = (pFVar13->Desc).field_0x30;
              cVar3 = (pFVar13->Desc).field_0x32;
              local_120._padding_._0_2_ = 0;
              local_120._padding_._3_1_ = 0;
              local_120._padding_._4_4_ = 0;
              local_120._padding_._0_1_ = 0;
              local_120._padding_._2_1_ = 0;
              if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
                local_120._padding_._4_4_ = (uint)*(ushort *)&(pFVar13->Desc).field_0x2e << 0x10;
              }
              local_120.Texture = pFVar13;
              pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_120);
              ppFVar22[-8] = (FRDGTextureUAV *)pFVar14;
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                                 ,0x237,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
        }
      }
      else {
LAB_14974f1e0:
        uVar9 = 0;
        if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
          uVar9 = uVar19;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->BindingInfos).AllocatorInstance.Data[uVar23] == (FScriptContainerElement)0x1) {
          uVar9 = 0;
          if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
            uVar9 = uVar19;
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
          if (*(longlong *)((this->BindingInfos).AllocatorInstance.Data + uVar23 + 0x10) != 0) {
            uVar9 = 0;
            if ((int)uVar20 < (this->BindingInfos).ArrayNum) {
              uVar9 = uVar19;
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
            pFVar13 = FRDGBuilder::RegisterExternalTexture
                                (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                         ((this->BindingInfos).AllocatorInstance.Data +
                                         (longlong)(int)uVar20 * 0xd0 + 0x10),None);
            goto LAB_14974f573;
          }
        }
        uVar5 = FClearValueBinding::Black.Value.Color[3];
        if (uVar20 == 0) {
          local_f8._16_4_ = FClearValueBinding::Black.ColorBinding;
          local_f8._20_4_ = FClearValueBinding::Black.Value.Color[0];
          fStack_e0 = FClearValueBinding::Black.Value.Color[1];
          fStack_dc = FClearValueBinding::Black.Value.Color[2];
          if (((this->BindingInfos).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
          local_78 = 0;
          local_50 = 0;
          _local_74 = *(undefined8 *)((this->BindingInfos).AllocatorInstance.Data + uVar23 + 0x18);
          local_108 = (undefined4)_local_74;
          uStack_104 = SUB84(_local_74,4);
          local_138 = L"PCGTextureDI_UAV";
          local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
          local_4c = 1;
          local_66 = 0xff000a00;
          local_98._0_8_ = 0x20008;
          local_6c = 0x10001;
          local_68 = 0x101;
          local_80 = (float)uVar5;
          local_98._8_4_ = local_f8._16_4_;
          local_98._12_4_ = local_f8._20_4_;
          fStack_88 = fStack_e0;
          fStack_84 = fStack_dc;
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                    (1,1,0,1,&local_60,0,&local_4c);
          if ((int)local_74 < 1) {
            local_d8 = &local_138;
            local_d0 = local_98;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_d8);
          }
          if ((int)uStack_70 < 1) {
            local_c8 = &local_138;
            local_c0 = local_98;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_c8);
          }
          uVar9 = uStack_70;
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value < local_74) {
            local_b8 = &local_138;
            local_b0 = local_98;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_b8);
            uVar9 = uStack_70;
          }
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar9) {
            local_a8 = &local_138;
            local_a0 = local_98;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_a8);
            uVar9 = uStack_70;
          }
          TVar17.Value = GRHIGlobals.MaxTextureDimensions.Value;
          if ((int)local_74 < GRHIGlobals.MaxTextureDimensions.Value) {
            TVar17.Value = local_74;
          }
          local_74 = 1;
          if (1 < TVar17.Value) {
            local_74 = TVar17.Value;
          }
          TVar17.Value = GRHIGlobals.MaxTextureDimensions.Value;
          if ((int)uVar9 < GRHIGlobals.MaxTextureDimensions.Value) {
            TVar17.Value = uVar9;
          }
          uStack_70 = 1;
          if (1 < TVar17.Value) {
            uStack_70 = TVar17.Value;
          }
          FRDGUserValidation::ValidateCreateTexture
                    (&param_1->UserValidation,(FRDGTextureDesc *)local_98,local_138,None);
          pFVar13 = FMemStackBase::Alloc((FMemStackBase *)&local_130->_padding_,0x158,8);
          pFVar13 = FRDGTexture::FRDGTexture(pFVar13,local_138,(FRDGTextureDesc *)local_98,None);
          piVar1 = &(param_1->Textures).Array.ArrayMax;
          iVar10 = (param_1->Textures).Array.ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                               (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,piVar1);
          }
          (param_1->Textures).Array.ArrayNum = iVar10 + 1;
          (param_1->Textures).Array.AllocatorInstance.Data[iVar10] = pFVar13;
          (pFVar13->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
          FRDGUserValidation::ValidateCreateTexture(&param_1->UserValidation,pFVar13);
          param_1 = local_130;
          FRDGTrace::AddResource(&local_130->Trace,(FRDGViewableResource *)pFVar13);
          if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_60.SecondaryData);
          }
          bVar8 = true;
          ppFVar22 = local_128;
          goto LAB_14974f573;
        }
      }
      ppFVar22 = ppFVar22 + 1;
      uVar18 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 + 0xd0;
      local_128 = ppFVar22;
    } while ((int)(uVar20 + 1) < (this->BindingInfos).ArrayNum);
  }
  if (this->ExportMode == NoExport) {
    return;
  }
  pFVar21 = (this->TextureInfos).AllocatorInstance.Data;
  iVar10 = (this->TextureInfos).ArrayNum;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  pFVar2 = pFVar21 + (longlong)iVar10 * 8;
  do {
    while( true ) {
      if ((this->TextureInfos).ArrayNum != iVar10) {
        local_167[0] = 0;
        `TCheckedPointerIterator<FPCGTextureInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_167);
      }
      if (pFVar21 == pFVar2) {
        ExportTextureUAVs(this,&local_160);
        DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
                  ((TRefCountPtr<IPooledRenderTarget> *)local_160.AllocatorInstance.Data,
                   local_160.ArrayNum);
        if (local_160.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_160.AllocatorInstance.Data);
        return;
      }
      if ((*(int *)pFVar21 < 0) || (*(int *)pFVar21 != 0)) break;
      if (local_100 == (FRDGTexture *)0x0) goto LAB_14974f9b2;
      pFVar16 = (FScriptContainerElement *)
                FRDGBuilder::ConvertToExternalTexture(local_130,local_100);
      if (((local_160.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_160.AllocatorInstance.Data + (longlong)local_160.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = local_160.ArrayNum;
      if (local_160.ArrayNum == local_160.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_160.AllocatorInstance,&local_160.ArrayMax);
      }
      local_160.ArrayNum = iVar11 + 1;
      *(undefined8 *)(local_160.AllocatorInstance.Data + (longlong)iVar11 * 8) = 0;
      TVar12.Reference = *(IPooledRenderTarget **)pFVar16;
      *(IPooledRenderTarget **)(local_160.AllocatorInstance.Data + (longlong)iVar11 * 8) =
           TVar12.Reference;
      if (TVar12.Reference == (IPooledRenderTarget *)0x0) goto LAB_14974f9b2;
      (**(code **)((TVar12.Reference)->_padding_ + 0x30))();
      pFVar21 = pFVar21 + 8;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4301770094700134977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                       ,0x241,
                       "TextureInfo.BindingIndex >= 0 && TextureInfo.BindingIndex < PCGTextureDataInterfaceConstants::MAX_NUM_UAV_BINDINGS"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14974f9b2:
    pFVar21 = pFVar21 + 8;
  } while( true );
}

// ExportTextureUAVs @ 149750800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::ExportTextureUAVs
          (FPCGTextureDataProviderProxy *this,
          TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr FVar5;
  FPCGDataCollectionDesc *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  EPCGExportMode EVar9;
  FName FVar10;
  code *pcVar11;
  code **ppcVar12;
  undefined1 auStackY_128 [32];
  FLLMScope local_e8;
  undefined4 local_e4;
  FName local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FWeakObjectPtr local_c8;
  FPCGDataCollectionDesc *local_c0;
  TReferenceControllerBase<1> *local_b8;
  FName local_b0;
  EPCGExportMode local_a8;
  FName local_a4;
  code *local_98;
  FScriptContainerElement *local_90;
  FTSTicker *local_88;
  FMemScope local_80;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FLLMScope::FLLMScope(&local_e8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_e0 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_80,&local_e0,true);
  iVar3 = param_1->ArrayNum;
  local_98 = (code *)this->OriginatingGenerationCount;
  pFVar4 = (param_1->AllocatorInstance).Data;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (iVar3 == 0) {
    local_d0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&local_d8,iVar3,(int *)((longlong)&local_d0 + 4));
    ConstructItems<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<IPooledRenderTarget>,int>
              (local_d8.Data,(TRefCountPtr<IPooledRenderTarget> *)pFVar4,iVar3);
  }
  local_c8 = (this->DataProviderWeakPtr_GT).WeakPtr;
  local_c0 = (this->PinDesc).Object;
  local_b8 = (this->PinDesc).SharedReferenceCount.ReferenceController;
  if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = this->OutputPinLabel;
  local_a8 = this->ExportMode;
  local_a4 = this->OutputPinLabelAlias;
  local_88 = FTSTicker::GetCoreTicker();
  pcVar11 = local_98;
  FVar10 = local_a4;
  EVar9 = local_a8;
  FVar8 = local_b0;
  pTVar7 = local_b8;
  pFVar6 = local_c0;
  FVar5 = local_c8;
  local_90 = local_d8.Data;
  local_e4 = (int)local_d0;
  local_e0.ComparisonIndex.Value = local_d0._4_4_;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8 = (TReferenceControllerBase<1> *)0x0;
  local_c0 = (FPCGDataCollectionDesc *)0x0;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x50,8);
  local_40[1] = (code *)local_90;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(undefined4 *)(local_40 + 2) = local_e4;
  *(uint *)((longlong)local_40 + 0x14) = local_e0.ComparisonIndex.Value;
  *(FWeakObjectPtr *)(local_40 + 3) = FVar5;
  local_40[4] = (code *)pFVar6;
  local_40[5] = (code *)pTVar7;
  *(FName *)(local_40 + 6) = FVar8;
  *(EPCGExportMode *)(local_40 + 7) = EVar9;
  *(FName *)((longlong)local_40 + 0x3c) = FVar10;
  local_40[9] = pcVar11;
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker
            (local_88,&local_78,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp(595)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
    }
  }
  if (local_68[0] != (code *)0x0) {
    ppcVar12 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar12 = local_40;
    }
    (**(code **)(*ppcVar12 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>((TRefCountPtr<IPooledRenderTarget> *)0x0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)local_d8.Data,(int)local_d0);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_e8);
  return;
}

// GatherDispatchData @ 149752f40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::GatherDispatchData
          (FPCGTextureDataProviderProxy *this,FDispatchData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uchar *puVar13;
  int iVar14;
  longlong lVar15;
  FRDGTextureSRV **ppFVar16;
  
  iVar4 = param_1->NumInvocations;
  iVar5 = param_1->ParameterBufferOffset;
  puVar13 = param_1->ParameterBuffer;
  iVar6 = param_1->ParameterBufferStride;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar6 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((longlong)iVar6 & 0xfU) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = 0;
  if (0 < iVar4) {
    puVar13 = puVar13 + ((longlong)iVar5 - (longlong)this) + -0xa0;
    do {
      ppFVar16 = this->TextureArraySRV;
      if ((iVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(FRHISamplerState **)((longlong)this[1].TextureSRV + (longlong)(puVar13 + -0x30)) =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      uVar10 = 0;
      *(FRHISamplerState **)((longlong)this[1].TextureSRV + (longlong)(puVar13 + -0x28)) =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      lVar15 = 0;
      pfVar11 = (float *)((longlong)this[1].TextureSRV + (longlong)(puVar13 + -0x10));
      *(int *)((longlong)this[1].TextureArraySRV + (longlong)(puVar13 + 0x28)) =
           (this->TextureInfos).ArrayNum;
      *(FRDGBufferSRV **)((longlong)this[1].TextureArraySRV + (longlong)(puVar13 + 0x30)) =
           this->TextureInfosBufferSRV;
      do {
        *(FRDGTextureSRV **)(puVar13 + (longlong)ppFVar16) = ppFVar16[-8];
        *(FRDGTextureSRV **)(puVar13 + 0x40 + (longlong)ppFVar16) = *ppFVar16;
        if ((int)uVar10 < (this->BindingInfos).ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
          if (((int)uVar10 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar1 = *(double *)((this->BindingInfos).AllocatorInstance.Data + lVar15 + 0xb0);
          uVar9 = 0;
          if ((int)uVar10 < (this->BindingInfos).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar2 = *(double *)((this->BindingInfos).AllocatorInstance.Data + lVar15 + 0xa8);
          uVar9 = 0;
          if ((int)uVar10 < (this->BindingInfos).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar3 = *(double *)((this->BindingInfos).AllocatorInstance.Data + lVar15 + 0x98);
          uVar9 = 0;
          if ((int)uVar10 < (this->BindingInfos).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pfVar11[-2] = (float)*(double *)
                                ((this->BindingInfos).AllocatorInstance.Data + lVar15 + 0x90);
          pfVar11[-1] = (float)dVar3;
          *pfVar11 = (float)dVar2;
          pfVar11[1] = (float)dVar1;
        }
        else {
          pfVar11[-2] = 0.0;
          pfVar11[-1] = 0.0;
          pfVar11[0] = 0.0;
          pfVar11[1] = 0.0;
        }
        uVar10 = uVar10 + 1;
        pfVar11 = pfVar11 + 4;
        ppFVar16 = ppFVar16 + 1;
        lVar15 = lVar15 + 0xd0;
      } while (uVar10 < 8);
      iVar14 = iVar14 + 1;
      *(FRDGTextureUAV **)((longlong)this[1].TextureSRV + (longlong)(puVar13 + -0x38)) =
           this->TextureUAV[0];
      puVar13 = puVar13 + iVar6;
    } while (iVar14 < iVar4);
  }
  return;
}

// GatherPermutations @ 149753ed0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::GatherPermutations
          (FPCGTextureDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FComputeKernelPermutationVector *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  this_00 = param_1->PermutationVector;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l2::Name,
                       PCGTextureDataInterfaceConstants::EnableMultipleTextureObjectsPermutationName
                      );
    atexit(`FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds'::__l2::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar8 = 0;
  if ((*piVar7 < `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    uVar5 = `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.ArrayNum - 1;
    FVar3 = `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l2::Name.Data.ArrayNum == 0) {
      uVar5 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l2::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar3.Data);
    _Init_thread_footer(&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  uVar5 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l2::Name,
                     `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l2::Hash,1);
  uVar10 = uVar8;
  if (0 < param_1->NumInvocations) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = 0;
      if (1 < (this->BindingInfos).ArrayNum) {
        uVar11 = uVar5;
      }
      uVar6 = 0;
      if ((int)uVar9 < (param_1->PermutationIds).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + uVar8;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar11;
      uVar8 = uVar8 + 4;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14976c240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGTextureDataProviderProxy::IsValid(FPCGTextureDataProviderProxy *this,FValidationData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BindingInfos).ArrayNum;
  pFVar2 = (this->BindingInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xd0;
  while( true ) {
    if ((this->BindingInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTextureBindingInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((*pFVar2 == (FScriptContainerElement)0x2) || (*(int *)(pFVar2 + 0x18) < 1)) ||
       ((*(int *)(pFVar2 + 0x1c) < 1 ||
        ((GRHIGlobals.MaxTextureDimensions.Value < *(int *)(pFVar2 + 0x18) ||
         (GRHIGlobals.MaxTextureDimensions.Value < *(int *)(pFVar2 + 0x1c))))))) {
      if ((byte)LogPCG._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return false;
    }
    pFVar2 = pFVar2 + 0xd0;
  }
  pFVar3 = (this->TextureInfos).AllocatorInstance.Data;
  iVar1 = (this->TextureInfos).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->TextureInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTextureInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (((*(int *)pFVar3 < 0) || ((this->BindingInfos).ArrayNum <= *(int *)pFVar3)) ||
       (*(int *)(pFVar3 + 4) < 0)) {
      if ((byte)LogPCG._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return false;
    }
    pFVar3 = pFVar3 + 8;
  }
  return param_1->ParameterStructSize == 0x130;
}

// PackTextureInfos @ 14976d1d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGTextureDataProviderProxy::PackTextureInfos
          (FPCGTextureDataProviderProxy *this,FRDGBuilder *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FRDGBuffer *pFVar13;
  FRDGBufferSRV *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType local_d8;
  EBufferUsageFlags aEStack_d0 [4];
  longlong local_c0;
  FScriptContainerElement *local_b8;
  FRDGBuffer *local_b0;
  FRDGBufferSRVDesc local_a8;
  FRDGBufferSRVDesc local_88;
  FScriptContainerElement *local_68 [2];
  FShaderParametersMetadata *local_58;
  
  iVar3 = (this->TextureInfos).ArrayNum;
  if (iVar3 == 0) {
    local_88.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_88._padding_._4_4_ = 0;
    local_88._padding_._0_4_ = 0xffffffff;
    local_88._padding_ = 0;
    local_88._padding_._0_1_ = 0;
    if ((((local_88.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_88._padding_._0_1_ = 0x1c;
    }
    pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_88);
    this->TextureInfosBufferSRV = pFVar14;
    return;
  }
  aEStack_d0[0] = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_d8.Data._4_4_ = iVar3 * 2;
  local_d8.Data._0_4_ = 0x10;
  uVar15 = 0;
  aEStack_d0[2] = None;
  aEStack_d0[3] = None;
  local_68[0] = local_d8.Data;
  local_68[1] = (FScriptContainerElement *)aEStack_d0._0_8_;
  local_58 = (FShaderParametersMetadata *)0x0;
  pFVar13 = FRDGBuilder::CreateBuffer
                      (param_1,(FRDGBufferDesc *)local_68,L"PCGTextureDI_InfosBuffer",None);
  local_a8._padding_._4_4_ = 0;
  local_a8._padding_._0_4_ = 0xffffffff;
  local_a8._padding_ = 0;
  local_a8._padding_._0_1_ = 0;
  if (((pFVar13->Desc).Usage & DrawIndirect) != None) {
    local_a8._padding_._0_1_ = 0x1c;
  }
  local_b0 = pFVar13;
  local_a8.Buffer = pFVar13;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_a8);
  this->TextureInfosBufferSRV = pFVar14;
  uVar10 = (this->TextureInfos).ArrayNum * 2;
  local_d8.Data = (FScriptContainerElement *)0x0;
  aEStack_d0[0] = None;
  aEStack_d0[1] = None;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&local_d8,(int *)aEStack_d0,(int *)(aEStack_d0 + 1));
  }
  if (0 < (this->TextureInfos).ArrayNum) {
    local_c0 = 0;
    uVar18 = uVar15;
    uVar21 = uVar15;
    do {
      lVar16 = local_c0;
      uVar17 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar17 < (this->TextureInfos).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (this->TextureInfos).AllocatorInstance.Data + lVar16;
      uVar10 = *(uint *)pFVar19;
      uVar11 = 0;
      uVar12 = uVar11;
      if ((int)uVar10 < (this->BindingInfos).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = *(uint *)pFVar19;
      uVar20 = (uint)uVar21;
      uVar4 = *(uint *)(pFVar19 + 4);
      pFVar19 = (this->BindingInfos).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xd0;
      FVar1 = pFVar19[0x20];
      FVar2 = pFVar19[0x21];
      uVar10 = uVar11;
      if ((int)uVar20 < (int)aEStack_d0[0]) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      local_b8 = pFVar19;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)(local_d8.Data + uVar18) = uVar12;
      *(uint *)(local_d8.Data + uVar18 + 4) = uVar4;
      *(uint *)(local_d8.Data + uVar18 + 8) = (uint)(byte)FVar1;
      *(uint *)(local_d8.Data + uVar18 + 0xc) = (uint)(byte)FVar2;
      uVar5 = *(undefined4 *)(pFVar19 + 0x18);
      uVar6 = *(undefined4 *)(local_b8 + 0x1c);
      if ((int)(uVar20 + 1) < (int)aEStack_d0[0]) {
        uVar11 = ~(uVar20 + 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = (ulonglong)(uVar17 + 1);
      uVar21 = (ulonglong)(uVar20 + 2);
      *(undefined4 *)(local_d8.Data + uVar18 + 0x10) = uVar5;
      *(undefined4 *)(local_d8.Data + uVar18 + 0x14) = uVar6;
      local_c0 = local_c0 + 8;
      *(undefined8 *)(local_d8.Data + uVar18 + 0x18) = 0;
      uVar18 = uVar18 + 0x20;
      pFVar13 = local_b0;
    } while ((int)(uVar17 + 1) < (this->TextureInfos).ArrayNum);
  }
  FVar8.Data = local_d8.Data;
  lVar16 = (longlong)(int)aEStack_d0[0];
  if (((int)aEStack_d0[0] < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FRDGBuilder::QueueBufferUpload(param_1,pFVar13,FVar8.Data,lVar16 << 4,None);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

