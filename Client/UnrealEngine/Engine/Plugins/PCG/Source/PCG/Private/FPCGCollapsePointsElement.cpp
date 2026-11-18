// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149ad9330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
`FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
          *param_1,FCollapsePointsSettings *param_2,FCollapsePointsState *param_3,uint param_4)

{
  TArray<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  ulonglong uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UPCGBasePointData *pUVar9;
  long64 lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  ForElementType<int> *pFVar31;
  ForElementType<int> *pFVar32;
  TTransform<double> *pTVar33;
  float *pfVar34;
  TVector<double> *pTVar35;
  TVector4<double> *pTVar36;
  int *piVar37;
  long64 *plVar38;
  byte bVar39;
  longlong lVar40;
  ForElementType<FSetElementId> FVar41;
  uint *puVar42;
  uint uVar43;
  ForElementType<int> *pFVar44;
  FScriptContainerElement *pFVar45;
  longlong lVar46;
  longlong lVar47;
  uint uVar48;
  uint uVar49;
  longlong lVar50;
  double dVar51;
  double dVar52;
  undefined1 auStackY_7b8 [32];
  undefined1 local_767;
  undefined1 local_766 [2];
  undefined1 local_764 [12];
  undefined1 local_758 [24];
  undefined1 local_740 [24];
  longlong *local_728;
  undefined8 uStack_720;
  TBitArray<FDefaultBitArrayAllocator> *local_718;
  FPCGCrc FStack_710;
  TObjectPtr<UPCGMetadata>_u_0 local_708;
  FScriptContainerElement *pFStack_700;
  undefined1 *local_6f8;
  int local_6f0;
  int local_6ec;
  FScriptContainerElement *local_6e8 [2];
  longlong *local_6d8;
  longlong lStack_6d0;
  TBitArray<FDefaultBitArrayAllocator> *local_6c8;
  FPCGCrc FStack_6c0;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *local_6b8;
  FScriptContainerElement *pFStack_6b0;
  undefined1 *local_6a8;
  longlong *local_698;
  undefined1 auStack_690 [20];
  uint uStack_67c;
  TObjectPtr<UPCGMetadata>_u_0 local_678;
  FScriptContainerElement *pFStack_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  TRotator<double> local_628;
  TVector2<double>_u_0 local_608;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  TVector<double>_u_0 local_5d8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  TVector4<double>_u_0 local_598;
  TQuat<double> local_578;
  TTransform<double> local_558;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [48];
  int local_498;
  undefined4 local_46c;
  undefined1 local_468 [32];
  uint *local_448;
  uint local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int local_434;
  undefined1 local_430 [8];
  ForElementType<FSetElementId> local_428;
  int local_420;
  FPCGPointValueRanges local_418;
  FConstPCGPointValueRanges local_288;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar24)) {
    pcVar11 = (code *)swi(3);
    uVar25 = (*pcVar11)();
    return (bool)uVar25;
  }
  uVar43 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar43 = ~param_4 >> 0x1f;
  }
  if ((uVar43 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar11 = (code *)swi(3);
    uVar25 = (*pcVar11)();
    return (bool)uVar25;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] !=
      (FScriptContainerElement)0x2) {
    bVar24 = (*param_2->PairSelectionFunc)(*(FPCGContext **)this,param_2,param_3);
    if (bVar24) {
      (*param_2->MergeSelectionFunc)(*(FPCGContext **)this,param_2,param_3);
      PCGCollapsePoints::Algo::RebuildOctree(*(FPCGContext **)this,param_2,param_3);
      return false;
    }
    bVar24 = -1 < CpuChannel->Enabled;
    if (bVar24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId493,
                 "FPCGCollapsePointsElement::Execute::ComputeFinalResults",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                 ,0x1ed);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId493);
    }
    iVar28 = (param_3->Merged).ArrayNum;
    uVar43 = 0;
    if (0 < iVar28) {
      lVar46 = 0;
      do {
        uVar48 = ~uVar43 >> 0x1f;
        while( true ) {
          uVar29 = 0;
          if ((int)uVar43 < (param_3->Merged).ArrayNum) {
            uVar29 = uVar48;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          if (*(int *)((param_3->Merged).AllocatorInstance.Data + lVar46) == -1) break;
          uVar29 = 0;
          if ((int)uVar43 < (param_3->Merged).ArrayNum) {
            uVar29 = uVar48;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          uVar29 = *(uint *)((param_3->Merged).AllocatorInstance.Data + lVar46);
          uVar49 = 0;
          if ((int)uVar29 < (param_3->Merged).ArrayNum) {
            uVar49 = ~uVar29 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          if (*(int *)((param_3->Merged).AllocatorInstance.Data + (longlong)(int)uVar29 * 4) == -1)
          break;
          uVar29 = 0;
          if ((int)uVar43 < (param_3->Merged).ArrayNum) {
            uVar29 = uVar48;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          uVar29 = *(uint *)((param_3->Merged).AllocatorInstance.Data + lVar46);
          uVar49 = 0;
          if ((int)uVar29 < (param_3->Merged).ArrayNum) {
            uVar49 = ~uVar29 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          uVar27 = *(undefined4 *)
                    ((param_3->Merged).AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
          uVar29 = 0;
          if ((int)uVar43 < (param_3->Merged).ArrayNum) {
            uVar29 = uVar48;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          *(undefined4 *)((param_3->Merged).AllocatorInstance.Data + lVar46) = uVar27;
        }
        iVar28 = (param_3->Merged).ArrayNum;
        uVar43 = uVar43 + 1;
        lVar46 = lVar46 + 4;
      } while ((int)uVar43 < iVar28);
      uVar43 = 0;
      if (0 < iVar28) {
        lVar46 = 0;
        do {
          uVar48 = 0;
          if ((int)uVar43 < iVar28) {
            uVar48 = ~uVar43 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          if (*(int *)((param_3->Merged).AllocatorInstance.Data + lVar46) == -1) {
            uVar48 = 0;
            if ((int)uVar43 < (param_3->Merged).ArrayNum) {
              uVar48 = ~uVar43 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            *(uint *)((param_3->Merged).AllocatorInstance.Data + lVar46) = uVar43;
          }
          iVar28 = (param_3->Merged).ArrayNum;
          uVar43 = uVar43 + 1;
          lVar46 = lVar46 + 4;
        } while ((int)uVar43 < iVar28);
      }
    }
    local_468._0_8_ = 0;
    local_468._8_8_ = 0;
    local_448 = (uint *)0x0;
    local_440 = 0;
    local_43c = 0x80;
    local_438 = 0xffffffff;
    local_434 = 0;
    local_428 = (ForElementType<FSetElementId>)0x0;
    local_420 = 0;
    local_764._0_4_ = 0;
    if (0 < iVar28) {
      do {
        uVar27 = local_764._0_4_;
        uVar43 = 0;
        if ((int)local_764._0_4_ < iVar28) {
          uVar43 = (uint)~local_764._0_4_ >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar11 = (code *)swi(3);
          uVar25 = (*pcVar11)();
          return (bool)uVar25;
        }
        pFVar8 = (param_3->Merged).AllocatorInstance.Data;
        uVar43 = *(uint *)(pFVar8 + (longlong)(int)uVar27 * 4);
        if (local_468._8_4_ != local_434) {
          FVar41 = (ForElementType<FSetElementId>)local_430;
          if (local_428 != (ForElementType<FSetElementId>)0x0) {
            FVar41 = local_428;
          }
          uVar48 = *(uint *)((longlong)FVar41 + (ulonglong)(local_420 - 1U & uVar43) * 4);
          while (uVar48 != 0xffffffff) {
            puVar42 = (uint *)((longlong)(int)uVar48 * 0x40 + local_468._0_8_);
            if (*puVar42 == uVar43) {
              if (puVar42 != (uint *)0x0) goto LAB_149ad9942;
              break;
            }
            uVar48 = puVar42[0xe];
          }
        }
        local_6e8[0] = pFVar8 + (longlong)(int)uVar27 * 4;
        TSet<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                    *)local_468,(int)local_740 + 8,(TKeyInitializer<int_const_&> *)(ulonglong)uVar43
                   ,(bool *)local_6e8);
        puVar42 = (uint *)((longlong)(int)local_740._8_4_ * 0x40 + local_468._0_8_);
LAB_149ad9942:
        pFVar32 = *(ForElementType<int> **)(puVar42 + 10);
        pFVar44 = (ForElementType<int> *)(puVar42 + 2);
        pFVar31 = pFVar32;
        if (pFVar32 == (ForElementType<int> *)0x0) {
          pFVar31 = pFVar44;
        }
        if (pFVar31 <= (ForElementType<int> *)local_764) {
          if (pFVar32 == (ForElementType<int> *)0x0) {
            pFVar32 = pFVar44;
          }
          if ((local_764 < pFVar32->InlineData + (longlong)(int)puVar42[0xd] * 4) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
        }
        uVar43 = puVar42[0xc];
        if (uVar43 == puVar42[0xd]) {
          uVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,pFVar44,(int *)(puVar42 + 0xd));
        }
        puVar42[0xc] = uVar43 + 1;
        if (*(ForElementType<int> **)(puVar42 + 10) != (ForElementType<int> *)0x0) {
          pFVar44 = *(ForElementType<int> **)(puVar42 + 10);
        }
        *(undefined4 *)(pFVar44->InlineData + (longlong)(int)uVar43 * 4) = local_764._0_4_;
        iVar28 = (param_3->Merged).ArrayNum;
        local_764._0_4_ = local_764._0_4_ + 1;
      } while ((int)local_764._0_4_ < iVar28);
    }
    if ((param_3->SourcePointData == (UPCGBasePointData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("CollapseState.SourcePointData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                            ,0x20c,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    if ((param_3->OutputPointData == (UPCGBasePointData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("CollapseState.OutputPointData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                            ,0x20d,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    (**(code **)(param_3->OutputPointData->_padding_ + 0x490))
              (param_3->OutputPointData,local_468._8_4_ - local_434,0);
    pUVar9 = param_3->OutputPointData;
    pcVar11 = *(code **)(pUVar9->_padding_ + 0x498);
    uVar27 = (**(code **)(param_3->SourcePointData->_padding_ + 0x640))(param_3->SourcePointData,1);
    (*pcVar11)(pUVar9,uVar27);
    (**(code **)(param_3->OutputPointData->_padding_ + 0x4b0))
              (param_3->OutputPointData,param_3->SourcePointData);
    uVar43 = 0;
    local_758._0_8_ = (FScriptContainerElement *)0x0;
    local_758[8] = '\0';
    local_758[9] = '\0';
    local_758[10] = '\0';
    local_758[0xb] = '\0';
    local_758[0xc] = '\0';
    local_758[0xd] = '\0';
    local_758[0xe] = '\0';
    local_758[0xf] = '\0';
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)local_4c8);
    PCGAttributeAccessorHelpers::CreateKeys
              ((UPCGData *)(local_740 + 0x10),
               (FPCGAttributePropertySelector *)param_3->OutputPointData);
    DestructItems<FString,int>((FString *)local_4c8._40_8_,local_498);
    if ((FString *)local_4c8._40_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_4c8._40_8_);
    }
    if (((undefined8 *)local_740._16_8_ == (undefined8 *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputKeys",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                            ,0x217,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    if (((param_3->SourceMergeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("SourceKeys",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                            ,0x219,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    FPCGPointValueRanges::FPCGPointValueRanges(&local_418,param_3->OutputPointData,false);
    FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_288,param_3->SourcePointData);
    if (((param_3->OutputMergeAccessors).ArrayNum != 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("CollapseState.OutputMergeAccessors.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                            ,0x21f,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    if (0 < (param_3->SourceMergeAccessors).ArrayNum) {
      do {
        uVar48 = 0;
        if ((int)uVar43 < (param_3->OutputMergeSelectors).ArrayNum) {
          uVar48 = ~uVar43 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar11 = (code *)swi(3);
          uVar25 = (*pcVar11)();
          return (bool)uVar25;
        }
        PCGAttributeAccessorHelpers::CreateAccessor
                  ((UPCGData *)local_740,(FPCGAttributePropertySelector *)param_3->OutputPointData,
                   (bool)((char)(param_3->OutputMergeSelectors).AllocatorInstance.Data +
                         (char)((longlong)(int)uVar43 * 0x40)));
        if ((undefined8 *)local_740._0_8_ == (undefined8 *)0x0) {
          uVar48 = 0;
          if ((int)uVar43 < (param_3->OutputMergeSelectors).ArrayNum) {
            uVar48 = ~uVar43 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar25 = (*pcVar11)();
            return (bool)uVar25;
          }
          PCGLog::Metadata::LogFailToCreateAccessorError
                    ((FPCGAttributePropertySelector *)
                     ((param_3->OutputMergeSelectors).AllocatorInstance.Data +
                     (longlong)(int)uVar43 * 0x40),(FPCGContext *)param_1);
          if ((undefined8 *)local_740._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_740._0_8_)(local_740._0_8_,1);
          }
          goto LAB_149ada1d8;
        }
        pTVar1 = &param_3->OutputMergeAccessors;
        pFVar8 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_740) &&
            ((FScriptContainerElement *)local_740 <
             pFVar8 + (longlong)(param_3->OutputMergeAccessors).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar11 = (code *)swi(3);
          uVar25 = (*pcVar11)();
          return (bool)uVar25;
        }
        iVar28 = (param_3->OutputMergeAccessors).ArrayNum;
        piVar37 = &(param_3->OutputMergeAccessors).ArrayMax;
        if (iVar28 == *piVar37) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar37);
        }
        (param_3->OutputMergeAccessors).ArrayNum = iVar28 + 1;
        uVar43 = uVar43 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 8) = local_740._0_8_;
        local_740._0_8_ = (undefined8 *)0x0;
      } while ((int)uVar43 < (param_3->SourceMergeAccessors).ArrayNum);
    }
    uVar48 = local_440;
    uVar43 = 0;
    uVar29 = 1;
    local_764._4_4_ = 0;
    local_708._0_4_ = 0;
    FStack_710._4_4_ = local_708._0_4_;
    if (local_440 != 0) {
      puVar42 = (uint *)(local_468 + 0x10);
      if (local_448 != (uint *)0x0) {
        puVar42 = local_448;
      }
      uVar49 = *puVar42;
      local_708._0_4_ = 0;
      uVar43 = 0;
      while (uVar49 == 0) {
        lVar46 = (longlong)(int)uVar43;
        local_708._0_4_ = local_708._0_4_ + 0x20;
        uVar43 = uVar43 + 1;
        FStack_710._4_4_ = local_440;
        if ((int)((local_440 - 1) + ((int)(local_440 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar43)
        goto LAB_149ad9db3;
        uVar49 = puVar42[lVar46 + 1];
      }
      uVar29 = -uVar49 & uVar49;
      uVar2 = (ulonglong)uVar29 * 2 + 1;
      lVar46 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar46 == 0; lVar46 = lVar46 + -1) {
        }
      }
      local_6f0 = (int)lVar46;
      FStack_710._4_4_ = (local_708._0_4_ - 1) + local_6f0;
      if ((int)local_440 < (int)FStack_710._4_4_) {
        FStack_710._4_4_ = local_440;
      }
    }
LAB_149ad9db3:
    local_728 = (longlong *)local_468;
    local_718 = (TBitArray<FDefaultBitArrayAllocator> *)(local_468 + 0x10);
    uVar49 = local_440 & 0xffffffe0;
    FStack_710.Value = 0xffffffff;
    uStack_720 = CONCAT44(uVar29,uVar43);
    pFStack_700 = (FScriptContainerElement *)CONCAT44(pFStack_700._4_4_,local_468._8_4_ - local_434)
    ;
    local_708._4_4_ = local_46c;
    auStack_690._0_8_ = uStack_720;
    iVar28 = (int)local_440 >> 5;
    bVar39 = (byte)local_440;
    local_758._16_4_ = local_440;
    local_678 = local_708;
    pFStack_670 = pFStack_700;
    stack0xfffffffffffff980 = FStack_710;
    local_698 = local_728;
    auStack_690._8_8_ = local_718;
    if (((int)local_440 < 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar26)) {
      pcVar11 = (code *)swi(3);
      uVar25 = (*pcVar11)();
      return (bool)uVar25;
    }
    uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar43 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar21 = __real_3e45798ee2308c3a;
    dVar20 = __real_3ff0000000000000;
    dVar51 = ___xmm_3ff00000000000000000000000000000;
    dVar52 = _UNK_15061cbc8;
    if (uVar48 != local_440) {
      puVar42 = (uint *)(local_468 + 0x10);
      if (local_448 != (uint *)0x0) {
        puVar42 = local_448;
      }
      uVar48 = -1 << (bVar39 & 0x1f) & puVar42[iVar28];
      while (uVar48 == 0) {
        lVar46 = (longlong)iVar28;
        uVar49 = uVar49 + 0x20;
        iVar28 = iVar28 + 1;
        if ((int)((local_440 - 1) + ((int)(local_440 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28) {
          local_758._16_4_ = local_440;
          uVar48 = local_440;
          goto LAB_149ad9f10;
        }
        uVar48 = puVar42[lVar46 + 1];
      }
      uVar2 = (ulonglong)(-uVar48 & uVar48) * 2 + 1;
      lVar46 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar46 == 0; lVar46 = lVar46 + -1) {
        }
      }
      local_6ec = (int)lVar46;
      uVar48 = (uVar49 - 1) + local_6ec;
      local_758._16_4_ = uVar48;
      if ((int)local_440 < (int)uVar48) {
        uVar48 = local_440;
        local_758._16_4_ = local_440;
      }
    }
LAB_149ad9f10:
    while( true ) {
      plVar23 = local_698;
      iVar28 = local_764._4_4_;
      if ((int)local_698[1] - *(int *)((longlong)local_698 + 0x34) != (int)pFStack_670) {
        local_767 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_767);
      }
      if (((uStack_67c == uVar48) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_690._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)(local_468 + 0x10))) &&
         (plVar23 == (longlong *)local_468)) break;
      lVar46 = *plVar23;
      iVar6 = *(int *)((longlong)(int)uStack_67c * 0x40 + lVar46);
      lVar46 = lVar46 + 8 + (longlong)(int)uStack_67c * 0x40;
      if (local_418.TransformRange.NumElements != 0) {
        pTVar33 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_288.TransformRange,iVar6);
        dVar51 = (pTVar33->Rotation).XY.m128d_f64[0];
        dVar52 = (pTVar33->Rotation).XY.m128d_f64[1];
        dVar4 = (pTVar33->Rotation).ZW.m128d_f64[0];
        dVar5 = (pTVar33->Rotation).ZW.m128d_f64[1];
        dVar12 = (pTVar33->Translation).XY.m128d_f64[0];
        dVar13 = (pTVar33->Translation).XY.m128d_f64[1];
        dVar14 = (pTVar33->Translation).ZW.m128d_f64[0];
        dVar15 = (pTVar33->Translation).ZW.m128d_f64[1];
        dVar16 = (pTVar33->Scale3D).XY.m128d_f64[0];
        dVar17 = (pTVar33->Scale3D).XY.m128d_f64[1];
        dVar18 = (pTVar33->Scale3D).ZW.m128d_f64[0];
        dVar19 = (pTVar33->Scale3D).ZW.m128d_f64[1];
        pTVar33 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_418.TransformRange,iVar28);
        (pTVar33->Rotation).XY.m128d_f64[0] = dVar51;
        (pTVar33->Rotation).XY.m128d_f64[1] = dVar52;
        (pTVar33->Rotation).ZW.m128d_f64[0] = dVar4;
        (pTVar33->Rotation).ZW.m128d_f64[1] = dVar5;
        (pTVar33->Translation).XY.m128d_f64[0] = dVar12;
        (pTVar33->Translation).XY.m128d_f64[1] = dVar13;
        (pTVar33->Translation).ZW.m128d_f64[0] = dVar14;
        (pTVar33->Translation).ZW.m128d_f64[1] = dVar15;
        dVar52 = _UNK_15061cbc8;
        dVar51 = ___xmm_3ff00000000000000000000000000000;
        (pTVar33->Scale3D).XY.m128d_f64[0] = dVar16;
        (pTVar33->Scale3D).XY.m128d_f64[1] = dVar17;
        (pTVar33->Scale3D).ZW.m128d_f64[0] = dVar18;
        (pTVar33->Scale3D).ZW.m128d_f64[1] = dVar19;
      }
      if (local_418.DensityRange.NumElements != 0) {
        pfVar34 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_288.DensityRange,iVar6);
        fVar3 = *pfVar34;
        pfVar34 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_418.DensityRange,iVar28);
        *pfVar34 = fVar3;
      }
      if (local_418.SteepnessRange.NumElements != 0) {
        pfVar34 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_288.SteepnessRange,iVar6);
        fVar3 = *pfVar34;
        pfVar34 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_418.SteepnessRange,iVar28);
        *pfVar34 = fVar3;
      }
      if (local_418.BoundsMinRange.NumElements != 0) {
        pTVar35 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_288.BoundsMinRange,iVar6);
        dVar5 = (pTVar35->field0_0x0)._s_0.X;
        dVar12 = (pTVar35->field0_0x0)._s_0.Y;
        dVar4 = (pTVar35->field0_0x0)._s_0.Z;
        pTVar35 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_418.BoundsMinRange,iVar28);
        (pTVar35->field0_0x0)._s_0.X = dVar5;
        (pTVar35->field0_0x0)._s_0.Y = dVar12;
        (pTVar35->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_418.BoundsMaxRange.NumElements != 0) {
        pTVar35 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_288.BoundsMaxRange,iVar6);
        dVar5 = (pTVar35->field0_0x0)._s_0.X;
        dVar12 = (pTVar35->field0_0x0)._s_0.Y;
        dVar4 = (pTVar35->field0_0x0)._s_0.Z;
        pTVar35 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_418.BoundsMaxRange,iVar28);
        (pTVar35->field0_0x0)._s_0.X = dVar5;
        (pTVar35->field0_0x0)._s_0.Y = dVar12;
        (pTVar35->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_418.ColorRange.NumElements != 0) {
        pTVar36 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_288.ColorRange,iVar6);
        dVar4 = (pTVar36->field0_0x0)._s_0.X;
        dVar5 = (pTVar36->field0_0x0)._s_0.Y;
        dVar12 = (pTVar36->field0_0x0)._s_0.Z;
        dVar13 = (pTVar36->field0_0x0)._s_0.W;
        pTVar36 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_418.ColorRange,iVar28);
        (pTVar36->field0_0x0)._s_0.X = dVar4;
        (pTVar36->field0_0x0)._s_0.Y = dVar5;
        (pTVar36->field0_0x0)._s_0.Z = dVar12;
        (pTVar36->field0_0x0)._s_0.W = dVar13;
      }
      if (local_418.SeedRange.NumElements != 0) {
        piVar37 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_288.SeedRange,iVar6);
        iVar7 = *piVar37;
        piVar37 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_418.SeedRange,iVar28);
        *piVar37 = iVar7;
      }
      if (local_418.MetadataEntryRange.NumElements != 0) {
        plVar38 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_288.MetadataEntryRange,iVar6);
        lVar10 = *plVar38;
        plVar38 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_418.MetadataEntryRange,iVar28);
        *plVar38 = lVar10;
      }
      uVar48 = *(uint *)(lVar46 + 0x28);
      if (uVar48 != 1) {
        dVar4 = 0.0;
        if ((int)local_758._8_4_ < (int)uVar48) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar48 - local_758._8_4_,(ForAnyElementType *)local_758,
                     (int *)(local_758 + 8),(int *)(local_758 + 0xc));
        }
        else {
          if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
          }
          if ((int)uVar48 < (int)local_758._8_4_) {
            uVar49 = local_758._8_4_ - uVar48;
            if (((int)(uVar49 | uVar48) < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            if (uVar49 != 0) {
              iVar28 = (local_758._8_4_ - uVar48) - uVar49;
              if (iVar28 != 0) {
                memmove((FScriptContainerElement *)(local_758._0_8_ + (longlong)(int)uVar48 * 8),
                        (FScriptContainerElement *)(local_758._0_8_ + (longlong)(int)uVar48 * 8) +
                        (longlong)(int)uVar49 * 8,(longlong)iVar28 << 3);
              }
              iVar28 = local_758._8_4_ - uVar49;
              local_758._8_4_ = iVar28;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)local_758,iVar28,(int *)(local_758 + 0xc));
            }
          }
        }
        iVar28 = *(int *)(lVar46 + 0x28);
        uVar48 = 0;
        if (0 < iVar28) {
          lVar50 = 0;
          lVar47 = 0;
          dVar4 = 0.0;
          do {
            uVar49 = 0;
            if ((int)uVar48 < iVar28) {
              uVar49 = ~uVar48 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            lVar40 = lVar46;
            if (*(longlong *)(lVar46 + 0x20) != 0) {
              lVar40 = *(longlong *)(lVar46 + 0x20);
            }
            uVar49 = *(uint *)(lVar40 + lVar47);
            uVar30 = 0;
            if ((int)uVar49 < (param_3->OriginalWeights).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            dVar5 = *(double *)
                     ((param_3->OriginalWeights).AllocatorInstance.Data + (longlong)(int)uVar49 * 8)
            ;
            dVar4 = dVar4 + dVar5;
            uVar49 = 0;
            if ((int)uVar48 < (int)local_758._8_4_) {
              uVar49 = ~uVar48 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            uVar48 = uVar48 + 1;
            lVar47 = lVar47 + 4;
            *(double *)(local_758._0_8_ + lVar50) = dVar5;
            lVar50 = lVar50 + 8;
            iVar28 = *(int *)(lVar46 + 0x28);
          } while ((int)uVar48 < iVar28);
        }
        uVar27 = local_758._8_4_;
        pFVar8 = (FScriptContainerElement *)(local_758._0_8_ + (longlong)(int)local_758._8_4_ * 8);
        pFVar45 = (FScriptContainerElement *)local_758._0_8_;
        while( true ) {
          if (local_758._8_4_ != uVar27) {
            local_766[0] = 0;
            `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_766);
          }
          uVar22 = local_764._4_4_;
          if (pFVar45 == pFVar8) break;
          if (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar29,
                                        SUB84(dVar4,0) & uVar43)) {
            *(double *)pFVar45 = *(double *)pFVar45 / dVar4;
            pFVar45 = pFVar45 + 8;
          }
          else {
            *(double *)pFVar45 = dVar20 / (double)(int)local_758._8_4_;
            pFVar45 = pFVar45 + 8;
          }
        }
        uVar48 = 0;
        lVar47 = 0;
        iVar28 = local_764._4_4_;
        if (0 < (param_3->SourceMergeAccessors).ArrayNum) {
          do {
            uVar49 = 0;
            if ((int)uVar48 < (param_3->SourceMergeAccessors).ArrayNum) {
              uVar49 = ~uVar48 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            pFVar8 = (param_3->SourceMergeAccessors).AllocatorInstance.Data;
            uVar49 = 0;
            if ((int)uVar48 < (param_3->OutputMergeAccessors).ArrayNum) {
              uVar49 = ~uVar48 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar25 = (*pcVar11)();
              return (bool)uVar25;
            }
            local_728 = (longlong *)CONCAT44(local_728._4_4_,uVar22);
            pFStack_700 = (param_3->OutputMergeAccessors).AllocatorInstance.Data + lVar47 * 8;
            local_718 = (TBitArray<FDefaultBitArrayAllocator> *)local_758;
            FStack_710 = (FPCGCrc)((longlong)pFVar8 + lVar47 * 8);
            local_708.DebugPtr = (UPCGMetadata *)&param_3->SourceMergeKeys;
            local_6f8 = local_740 + 0x10;
            local_6d8 = local_728;
            uStack_720 = lVar46;
            lStack_6d0 = lVar46;
            local_6c8 = local_718;
            FStack_6c0 = FStack_710;
            local_6b8 = (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                         *)local_708;
            pFStack_6b0 = pFStack_700;
            local_6a8 = local_6f8;
            switch(*(undefined2 *)(*(longlong *)pFStack_700 + 10)) {
            case 0:
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<float>(&local_6d8,0.0);
              break;
            case 1:
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<double>(&local_6d8,0.0);
              break;
            case 2:
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<int>(&local_6d8,0);
              break;
            case 3:
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<__int64>(&local_6d8,0);
              break;
            case 4:
              local_4d8 = 0;
              uStack_4d0 = 0;
              local_608._s_0.X = 0.0;
              local_608._s_0.Y = 0.0;
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TVector2<double>_>
                        (&local_6d8,(TVector2<double> *)&local_608._s_0);
              break;
            case 5:
              local_5d8._s_0.X = 0.0;
              local_5d8._s_0.Y = 0.0;
              local_5f8 = 0;
              uStack_5f0 = 0;
              local_5e8 = 0;
              local_5d8._s_0.Z = 0.0;
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TVector<double>_>
                        (&local_6d8,(TVector<double> *)&local_5d8._s_0);
              break;
            case 6:
              local_598._s_0.X = 0.0;
              local_598._s_0.Y = 0.0;
              local_598._s_0.Z = dVar51;
              local_598._s_0.W = dVar52;
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TVector4<double>_>
                        (&local_6d8,(TVector4<double> *)&local_598._s_0);
              break;
            case 7:
              local_4f8 = 0;
              uStack_4f0 = 0;
              local_4e8 = 0;
              uStack_4e0 = 0;
              local_578.X = 0.0;
              local_578.Y = 0.0;
              local_578.Z = 0.0;
              local_578.W = 0.0;
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TQuat<double>_>(&local_6d8,&local_578);
              break;
            case 8:
              local_558.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_558.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_558.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_558.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_558.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_558.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_558.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_558.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_558.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_558.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_558.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_558.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_558.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_558.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TTransform<double>_>(&local_6d8,&local_558);
              break;
            case 0xb:
              local_628.Pitch = 0.0;
              local_628.Yaw = 0.0;
              local_5b8 = 0;
              uStack_5b0 = 0;
              local_5a8 = 0;
              local_628.Roll = 0.0;
              ``FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l82::
              <lambda_1>::operator()<UE::Math::TRotator<double>_>(&local_6d8,&local_628);
              break;
            case 0xd:
              local_668 = 0;
              local_660 = 0;
              local_658 = 0;
              local_650 = 0;
              break;
            case 0xe:
              local_648 = 0;
              local_640 = 0;
              local_638 = 0;
              local_630 = 0;
            }
            uVar48 = uVar48 + 1;
            lVar47 = lVar47 + 1;
            iVar28 = local_764._4_4_;
          } while ((int)uVar48 < (param_3->SourceMergeAccessors).ArrayNum);
        }
      }
      auStack_690._16_4_ = auStack_690._16_4_ & ~auStack_690._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_690);
      local_764._4_4_ = iVar28 + 1;
      uVar48 = local_758._16_4_;
    }
LAB_149ada1d8:
    if ((undefined8 *)local_740._16_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_740._16_8_)(local_740._16_8_,1);
    }
    if ((FScriptContainerElement *)local_758._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_758._0_8_);
    }
    local_420 = 0;
    if (local_428 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_428);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_468);
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return true;
}

// operator() @ 149adbc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGCollapsePointsElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
          *param_1,FCollapsePointsSettings *param_2)

{
  double dVar1;
  UPCGCollapsePointsSettings *pUVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  pUVar2 = *(UPCGCollapsePointsSettings **)this;
  if (pUVar2->Mode == PairwiseClosest) {
    pcVar4 = PCGCollapsePoints::Modes::PairwiseSelection;
  }
  else {
    if (pUVar2->Mode != AbsoluteClosest) {
      return AbortExecution;
    }
    pcVar4 = PCGCollapsePoints::Modes::ClosestPairSelection;
  }
  if (pUVar2->ComparisonMode == Position) {
    pcVar3 = PCGCollapsePoints::ComparisonModes::GetPosition;
    pcVar5 = PCGCollapsePoints::ComparisonModes::GetPositionPointRef;
    pcVar6 = PCGCollapsePoints::ComparisonModes::GetPositionSearchBounds;
  }
  else {
    if (pUVar2->ComparisonMode != Center) {
      return AbortExecution;
    }
    pcVar3 = PCGCollapsePoints::ComparisonModes::GetCenter;
    pcVar5 = PCGCollapsePoints::ComparisonModes::GetCenterPointRef;
    pcVar6 = PCGCollapsePoints::ComparisonModes::GetCenterSearchBounds;
  }
  dVar1 = pUVar2->DistanceThreshold;
  param_2->Settings = pUVar2;
  param_2->PairSelectionFunc = pcVar4;
  param_2->MergeSelectionFunc = PCGCollapsePoints::Algo::MergePairs;
  param_2->GetPointPositionFunc = pcVar3;
  param_2->GetPointReferenceFunc = pcVar5;
  param_2->GetPointSearchBoundsFunc = pcVar6;
  param_2->DistanceThreshold = dVar1;
  param_2->GetPositionFunc = (_func___cdecl_TVector<double>_FPCGPoint_ptr *)0x0;
  param_2->GetPointRefFunc = (_func___cdecl_FPCGPointRef_FPCGPoint_ptr *)0x0;
  param_2->GetSearchBoundsFunc = (_func___cdecl_FBoxCenterAndExtent_FPCGPoint_ptr_double_ptr *)0x0;
  return Success;
}

// operator() @ 149ae3910

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGCollapsePointsElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,FCollapsePointsState *param_1,FCollapsePointsSettings *param_2,uint param_3)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<FPCGAttributePropertyOutputSelector,TSizedDefaultAllocator<32>_> *pTVar4;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *pTVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  IPCGAttributeAccessorKeys *pIVar12;
  code *pcVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 this_00;
  bool bVar16;
  EPCGTimeSliceInitResult EVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  UClass *pUVar22;
  FCollapsePointsState *pFVar23;
  UPCGPointData *pUVar24;
  ulonglong uVar25;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar26;
  FPCGDataPtrWrapper *this_01;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  FPCGAttributePropertySelector *pFVar29;
  int iVar30;
  longlong lVar31;
  FPCGAttributePropertySelector *pFVar32;
  FPCGAttributePropertySelector *pFVar33;
  int iVar34;
  UPCGPointData *pUVar35;
  undefined1 local_res20 [8];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296 [2];
  uint local_294;
  undefined1 local_290 [32];
  undefined1 local_270 [16];
  undefined1 local_260 [24];
  FScriptContainerElement *local_248;
  uint uStack_240;
  bool bStack_23c;
  undefined3 uStack_23b;
  FPCGAttributePropertySelector local_238;
  FPCGAttributePropertySelector local_1f8;
  FPCGAttributePropertySelector local_1b8;
  FPCGAttributePropertySelector local_178;
  FPCGAttributePropertySelector local_138;
  void *local_f8 [2];
  TArrayView<double,int> local_e8;
  FPCGInitializeFromDataParams local_d8;
  undefined1 local_98 [48];
  int local_68;
  
  plVar10 = *(longlong **)this;
  uVar19 = 0;
  if ((int)param_3 < (int)plVar10[1]) {
    uVar19 = ~param_3 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar13 = (code *)swi(3);
    EVar17 = (*pcVar13)();
    return EVar17;
  }
  local_290._16_8_ = *(undefined8 *)((longlong)(int)param_3 * 0x78 + *plVar10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGPointData *)local_290._16_8_ != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_290._16_8_);
  }
  if ((UPCGPointData *)local_290._16_8_ == (UPCGPointData *)0x0) {
    return NoOperation;
  }
  pUVar22 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  bVar16 = FObjectPtr::IsA((FObjectPtr *)(local_290 + 0x10),pUVar22);
  pUVar35 = (UPCGPointData *)local_290._16_8_;
  if (!bVar16) {
    return NoOperation;
  }
  local_290._8_8_ = local_290._16_8_;
  if ((UPCGPointData *)local_290._16_8_ == (UPCGPointData *)0x0) {
    return NoOperation;
  }
  iVar18 = (**(code **)(*(longlong *)local_290._16_8_ + 0x488))(local_290._16_8_);
  if (iVar18 == 0) {
    return NoOperation;
  }
  param_1->SourcePointData = (UPCGBasePointData *)pUVar35;
  pUVar22 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar18 = (int)pUVar22->_padding_;
  if ((*(int *)(*(longlong *)((longlong)pUVar35 + 0x10) + 0x38) < iVar18) ||
     (pUVar24 = pUVar35,
     (longlong *)
     *(undefined1 **)
      (*(longlong *)(*(longlong *)((longlong)pUVar35 + 0x10) + 0x30) + (longlong)iVar18 * 8) !=
     &pUVar22->_padding_)) {
    local_290._8_8_ = pUVar35;
    pUVar24 = (UPCGPointData *)0x0;
  }
  param_1->SourceData = pUVar24;
  pFVar23 = (FCollapsePointsState *)(**(code **)(*&pUVar35->_padding_ + 0x4b8))(pUVar35,local_f8);
  if (param_1 != pFVar23) {
    pFVar11 = (param_1->PointTransforms).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (param_1->PointTransforms).AllocatorInstance.Data =
         (pFVar23->PointTransforms).AllocatorInstance.Data;
    (pFVar23->PointTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->PointTransforms).ArrayNum = (pFVar23->PointTransforms).ArrayNum;
    (param_1->PointTransforms).ArrayMax = (pFVar23->PointTransforms).ArrayMax;
    (pFVar23->PointTransforms).ArrayNum = 0;
    (pFVar23->PointTransforms).ArrayMax = 0;
  }
  if (local_f8[0] != (void *)0x0) {
    FMemory::Free(local_f8[0]);
  }
  uVar19 = (**(code **)(*&pUVar35->_padding_ + 0x488))(pUVar35);
  pTVar2 = &param_1->Weights;
  local_294 = uVar19;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar2,uVar19,Default);
  if (((param_1->PointTransforms).ArrayNum != (param_1->Weights).ArrayNum) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1991220325316034877>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                          ,0x13d,"OutState.PointTransforms.Num() == OutState.Weights.Num()"), bVar16
     )) {
    pcVar13 = (code *)swi(3);
    EVar17 = (*pcVar13)();
    return EVar17;
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x118) != '\0') {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 8) + 0x120),
               (FPCGAttributePropertyInputSelector *)&local_238,(UPCGData *)pUVar35);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)local_270,(FPCGAttributePropertySelector *)pUVar35,SUB81(&local_238,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)(local_290 + 0x18),(FPCGAttributePropertySelector *)pUVar35);
    this_00 = local_270._0_8_;
    uVar15 = local_290._24_8_;
    if (((IPCGAttributeAccessor *)local_270._0_8_ == (IPCGAttributeAccessor *)0x0) ||
       ((IPCGAttributeAccessorKeys *)local_290._24_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_238,*(FPCGContext **)((longlong)this + 0x10));
    }
    else {
      local_248 = (pTVar2->AllocatorInstance).Data;
      uVar27 = (param_1->Weights).ArrayNum;
      if (((int)uVar27 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        EVar17 = (*pcVar13)();
        return EVar17;
      }
      local_e8._12_1_ = bStack_23c;
      local_e8._13_3_ = uStack_23b;
      local_e8.ArrayNum = uVar27;
      local_e8.DataPtr = (double *)local_248;
      uStack_240 = uVar27;
      bVar16 = IPCGAttributeAccessor::GetRange<double>
                         ((IPCGAttributeAccessor *)this_00,&local_e8,0,
                          (IPCGAttributeAccessorKeys *)uVar15,StrictType);
      if (bVar16) {
        pFVar28 = (param_1->Weights).AllocatorInstance.Data;
        iVar18 = (param_1->Weights).ArrayNum;
        pFVar11 = pFVar28 + (longlong)iVar18 * 8;
        while( true ) {
          if ((param_1->Weights).ArrayNum != iVar18) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar28 == pFVar11) break;
          dVar6 = *(double *)pFVar28;
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          *(double *)pFVar28 = dVar6;
          pFVar28 = pFVar28 + 8;
        }
        if ((IPCGAttributeAccessorKeys *)local_290._24_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_290._24_8_)(local_290._24_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_270._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_270._0_8_)(local_270._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_238.ExtraNames.AllocatorInstance.Data,
                   local_238.ExtraNames.ArrayNum);
        if (local_238.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_149ae3c81;
      }
      PCGLog::Metadata::LogFailToGetAttributeError
                (&local_238,*(FPCGContext **)((longlong)this + 0x10));
    }
    if ((IPCGAttributeAccessorKeys *)local_290._24_8_ != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)*(longlong *)local_290._24_8_)(local_290._24_8_,1);
    }
    if ((IPCGAttributeAccessor *)local_270._0_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_270._0_8_)(local_270._0_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_238.ExtraNames.AllocatorInstance.Data,local_238.ExtraNames.ArrayNum)
    ;
LAB_149ae3d08:
    if (local_238.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.ExtraNames.AllocatorInstance.Data);
    }
    return NoOperation;
  }
  pFVar28 = (pTVar2->AllocatorInstance).Data;
  iVar18 = (param_1->Weights).ArrayNum;
  pFVar11 = pFVar28 + (longlong)iVar18 * 8;
  while( true ) {
    if ((param_1->Weights).ArrayNum != iVar18) {
      local_298 = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (pFVar28 == pFVar11) break;
    *(undefined8 *)pFVar28 = 0x3ff0000000000000;
    pFVar28 = pFVar28 + 8;
  }
LAB_149ae3c81:
  pTVar2 = &param_1->OriginalWeights;
  if (pTVar2 != &param_1->Weights) {
    iVar18 = (param_1->Weights).ArrayNum;
    piVar1 = &(param_1->OriginalWeights).ArrayMax;
    pFVar11 = (param_1->Weights).AllocatorInstance.Data;
    (param_1->OriginalWeights).ArrayNum = iVar18;
    if ((iVar18 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar18,*piVar1,&pTVar2->AllocatorInstance,iVar18,piVar1);
      if (iVar18 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar11,(longlong)iVar18 << 3);
      }
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0xd0) == '\0') {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_1->VisitOrder,uVar19,Default);
    uVar27 = 0;
    lVar31 = 0;
    if (0 < (int)uVar19) {
      do {
        uVar20 = 0;
        if ((int)uVar27 < (param_1->VisitOrder).ArrayNum) {
          uVar20 = ~uVar27 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          EVar17 = (*pcVar13)();
          return EVar17;
        }
        *(uint *)((param_1->VisitOrder).AllocatorInstance.Data + lVar31 * 4) = uVar27;
        uVar27 = uVar27 + 1;
        lVar31 = lVar31 + 1;
      } while (lVar31 < (int)uVar19);
    }
    cVar7 = *(char *)(*(longlong *)((longlong)this + 8) + 0xd2);
    if (cVar7 != '\0') {
      if (cVar7 == '\x01') {
        uVar27 = FPCGContext::GetSeed(*(FPCGContext **)((longlong)this + 0x10));
        fVar14 = __real_3f800000;
        iVar34 = (param_1->VisitOrder).ArrayNum;
        iVar30 = 0;
        lVar31 = 0;
        iVar18 = iVar34 + -1;
        pUVar35 = (UPCGPointData *)local_290._8_8_;
        uVar19 = local_294;
        if (0 < iVar18) {
          do {
            if (iVar34 < 1) {
              iVar21 = 0;
            }
            else {
              uVar27 = uVar27 * 0xbb38435 + 0x3619636b;
              iVar21 = (int)(((float)(uVar27 >> 9 | 0x3f800000) - fVar14) * (float)iVar34);
            }
            iVar21 = iVar21 + iVar30;
            if (iVar30 != iVar21) {
              if ((iVar21 < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0xce6,L""), bVar16)) {
                pcVar13 = (code *)swi(3);
                EVar17 = (*pcVar13)();
                return EVar17;
              }
              iVar8 = (param_1->VisitOrder).ArrayNum;
              if (((iVar8 <= iVar30) || (iVar8 <= iVar21)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0xce7,L""), bVar16)) {
                pcVar13 = (code *)swi(3);
                EVar17 = (*pcVar13)();
                return EVar17;
              }
              pFVar11 = (param_1->VisitOrder).AllocatorInstance.Data;
              uVar9 = *(undefined4 *)(pFVar11 + lVar31 * 4);
              *(undefined4 *)(pFVar11 + lVar31 * 4) =
                   *(undefined4 *)(pFVar11 + (longlong)iVar21 * 4);
              *(undefined4 *)(pFVar11 + (longlong)iVar21 * 4) = uVar9;
            }
            iVar30 = iVar30 + 1;
            iVar34 = iVar34 + -1;
            lVar31 = lVar31 + 1;
            pUVar35 = (UPCGPointData *)local_290._8_8_;
            uVar19 = local_294;
          } while (lVar31 < iVar18);
        }
      }
      else {
        if (1 < (byte)(cVar7 - 2U)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                              ,0x184,L"");
          if (!bVar16) {
            return NoOperation;
          }
          pcVar13 = (code *)swi(3);
          EVar17 = (*pcVar13)();
          return EVar17;
        }
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 8) + 0xd8),
                   (FPCGAttributePropertyInputSelector *)&local_1f8,(UPCGData *)pUVar35);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_260,(FPCGAttributePropertySelector *)pUVar35,
                   SUB81(&local_1f8,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)(local_270 + 8),(FPCGAttributePropertySelector *)pUVar35);
        if (((FPCGCrc)local_260._0_8_ == (FPCGCrc)0x0) ||
           ((IPCGAttributeAccessorKeys *)local_270._8_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError
                    (&local_1f8,*(FPCGContext **)((longlong)this + 0x10));
          if ((IPCGAttributeAccessorKeys *)local_270._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_270._8_8_)(local_270._8_8_,1);
          }
          if ((FPCGCrc)local_260._0_8_ != (FPCGCrc)0x0) {
            (*(code *)**(undefined8 **)local_260._0_8_)(local_260._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_1f8.ExtraNames.AllocatorInstance.Data,
                     local_1f8.ExtraNames.ArrayNum);
          local_238.ExtraNames.AllocatorInstance.Data = local_1f8.ExtraNames.AllocatorInstance.Data;
          goto LAB_149ae3d08;
        }
        PCGAttributeAccessorHelpers::
        SortByAttribute<int,PCGAttributeAccessorHelpers::Private::<lambda_24>,PCGAttributeAccessorHelpers::Private::<lambda_25>_>
                  ((IPCGAttributeAccessor *)local_260._0_8_,
                   (IPCGAttributeAccessorKeys *)local_270._8_8_,&param_1->VisitOrder,
                   *(char *)(*(longlong *)((longlong)this + 8) + 0xd2) == '\x02',
                   PCGAttributeAccessorHelpers::Private::DefaultIndexGetter,
                   PCGAttributeAccessorHelpers::Private::DefaultStableCompareLessLambda);
        if ((IPCGAttributeAccessorKeys *)local_270._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_270._8_8_)(local_270._8_8_,1);
        }
        if ((FPCGCrc)local_260._0_8_ != (FPCGCrc)0x0) {
          (*(code *)**(undefined8 **)local_260._0_8_)(local_260._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_1f8.ExtraNames.AllocatorInstance.Data,
                   local_1f8.ExtraNames.ArrayNum);
        if (local_1f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.ExtraNames.AllocatorInstance.Data);
        }
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&param_1->Merged,uVar19,Default);
  pFVar28 = (param_1->Merged).AllocatorInstance.Data;
  iVar18 = (param_1->Merged).ArrayNum;
  pFVar11 = pFVar28 + (longlong)iVar18 * 4;
  while( true ) {
    if ((param_1->Merged).ArrayNum != iVar18) {
      local_297 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_297);
    }
    if (pFVar28 == pFVar11) break;
    *(undefined4 *)pFVar28 = 0xffffffff;
    pFVar28 = pFVar28 + 4;
  }
  pUVar24 = (UPCGPointData *)
            FPCGContext::NewPointData_AnyThread(*(FPCGContext **)((longlong)this + 0x10));
  local_290._8_8_ = pUVar24;
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_d8,(UPCGSpatialData *)pUVar35);
  local_d8.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)pUVar24,&local_d8);
  param_1->OutputPointData = (UPCGBasePointData *)pUVar24;
  if (pUVar24 != (UPCGPointData *)0x0) {
    pUVar22 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar18 = (int)pUVar22->_padding_;
    if ((iVar18 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
        &pUVar22->_padding_)) goto LAB_149ae4185;
  }
  pUVar24 = (UPCGPointData *)0x0;
LAB_149ae4185:
  param_1->OutData = pUVar24;
  lVar31 = *(longlong *)((longlong)this + 8);
  local_294 = *(uint *)(lVar31 + 0x168);
  uVar25 = (ulonglong)(int)local_294;
  pFVar32 = *(FPCGAttributePropertySelector **)(lVar31 + 0x160);
  pFVar33 = pFVar32 + uVar25;
  do {
    if (*(int *)(lVar31 + 0x168) != (int)uVar25) {
      local_296[0] = 0;
      `TCheckedPointerIterator<FPCGAttributePropertyOutputNoSourceSelector_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_296);
    }
    if (pFVar32 == pFVar33) {
      FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                ((FPCGAttributePropertyInputSelector *)local_98);
      TVar26 = PCGAttributeAccessorHelpers::CreateConstKeys
                         ((UPCGData *)(local_260 + 8),(FPCGAttributePropertySelector *)pUVar35);
      pTVar5 = &param_1->SourceMergeKeys;
      if ((IPCGAttributeAccessorKeys *)pTVar5 != TVar26.Ptr) {
        pIVar12 = pTVar5->Ptr;
        pTVar5->Ptr = (IPCGAttributeAccessorKeys *)(TVar26.Ptr)->_padding_;
        (TVar26.Ptr)->_padding_ = 0;
        if (pIVar12 != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)pIVar12->_padding_)(pIVar12,1);
        }
      }
      if ((UPCGMetadata *)local_260._8_8_ != (UPCGMetadata *)0x0) {
        (**(code **)*(longlong *)local_260._8_8_)(local_260._8_8_,1);
      }
      DestructItems<FString,int>((FString *)local_98._40_8_,local_68);
      if ((FString *)local_98._40_8_ != (FString *)0x0) {
        FMemory::Free((void *)local_98._40_8_);
      }
      if ((param_1->SourceMergeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) {
        EVar17 = NoOperation;
      }
      else {
        PCGCollapsePoints::Algo::RebuildOctree
                  (*(FPCGContext **)((longlong)this + 0x10),param_2,param_1);
        lVar31 = *(longlong *)((longlong)this + 0x10);
        iVar18 = *(int *)(lVar31 + 0x40);
        if (iVar18 == *(int *)(lVar31 + 0x44)) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)(lVar31 + 0x38),(int *)(lVar31 + 0x44));
        }
        *(int *)(lVar31 + 0x40) = iVar18 + 1;
        this_01 = (FPCGDataPtrWrapper *)((longlong)iVar18 * 0x78 + *(longlong *)(lVar31 + 0x38));
        this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
        this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)local_290._8_8_);
        EVar17 = Success;
      }
      DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                 local_d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                 local_d8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
      if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
          local_d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
          (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
        FMemory::Free(local_d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                      Data);
      }
      if (local_d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        return EVar17;
      }
      return EVar17;
    }
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_138);
    FPCGAttributePropertySelector::ImportFromOtherSelector(&local_138,pFVar32);
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)&local_138,
               (FPCGAttributePropertyInputSelector *)&local_1b8,(UPCGData *)pUVar35);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)local_290,(FPCGAttributePropertySelector *)pUVar35,SUB81(&local_1b8,0));
    if ((undefined8 *)local_290._0_8_ == (undefined8 *)0x0) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_1b8,*(FPCGContext **)((longlong)this + 0x10));
    }
    else {
      FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                ((FPCGAttributePropertyOutputSelector *)&local_178);
      FPCGAttributePropertySelector::ImportFromOtherSelector(&local_178,&local_1b8);
      pTVar3 = &param_1->SourceMergeAccessors;
      pFVar11 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_290) &&
          ((FScriptContainerElement *)local_290 <
           pFVar11 + (longlong)(param_1->SourceMergeAccessors).ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar13 = (code *)swi(3);
        EVar17 = (*pcVar13)();
        return EVar17;
      }
      iVar18 = (param_1->SourceMergeAccessors).ArrayNum;
      piVar1 = &(param_1->SourceMergeAccessors).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      (param_1->SourceMergeAccessors).ArrayNum = iVar18 + 1;
      pTVar4 = &param_1->OutputMergeSelectors;
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_290._0_8_;
      pFVar29 = (FPCGAttributePropertySelector *)(pTVar4->AllocatorInstance).Data;
      local_290._0_8_ = (undefined8 *)0x0;
      if (((pFVar29 <= &local_178) &&
          (&local_178 < pFVar29 + (param_1->OutputMergeSelectors).ArrayMax)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar13 = (code *)swi(3);
        EVar17 = (*pcVar13)();
        return EVar17;
      }
      iVar18 = (param_1->OutputMergeSelectors).ArrayNum;
      piVar1 = &(param_1->OutputMergeSelectors).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar4->AllocatorInstance,piVar1);
      }
      (param_1->OutputMergeSelectors).ArrayNum = iVar18 + 1;
      pFVar29 = (FPCGAttributePropertySelector *)
                ((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 0x40);
      FPCGAttributePropertySelector::FPCGAttributePropertySelector(pFVar29,&local_178);
      pFVar29->_padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
      DestructItems<FString,int>
                ((FString *)local_178.ExtraNames.AllocatorInstance.Data,
                 local_178.ExtraNames.ArrayNum);
      if (local_178.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.ExtraNames.AllocatorInstance.Data);
      }
    }
    if ((undefined8 *)local_290._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_290._0_8_)(local_290._0_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_1b8.ExtraNames.AllocatorInstance.Data,local_1b8.ExtraNames.ArrayNum)
    ;
    if (local_1b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_138.ExtraNames.AllocatorInstance.Data,local_138.ExtraNames.ArrayNum)
    ;
    if (local_138.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ExtraNames.AllocatorInstance.Data);
    }
    uVar25 = (ulonglong)local_294;
    pFVar32 = pFVar32 + 1;
  } while( true );
}

// ExecuteInternal @ 149b0d830

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
FPCGCollapsePointsElement::ExecuteInternal(FPCGCollapsePointsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UPCGCollapsePointsSettings *pUVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  FPCGContext *local_res18 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId452,"FPCGCollapsePointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
               ,0x1c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                         ,0x1c7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                      *)param_1);
  if (bVar4) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\x02')
    {
      FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
    }
    else {
      pUVar7 = FPCGContext::GetInputSettings<UPCGCollapsePointsSettings>(param_1);
      if ((pUVar7 == (UPCGCollapsePointsSettings *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Settings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                             ,0x1d5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      local_res18[0] = param_1;
      bVar4 = TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                          *)param_1);
      if (((bVar4) ||
          (local_res10[0] = bVar4,
          bVar4 = `TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                  ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
         (param_1[1].SourceComponent.WeakPtr.ObjectIndex != 0)) {
        do {
          uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
          uVar6 = 0;
          if ((int)uVar2 < param_1[1].SourceComponent.WeakPtr.ObjectIndex) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = `FPCGCollapsePointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                            (local_res18,
                             (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                              *)param_1,(FCollapsePointsSettings *)&param_1[1].InputData.DataCrcs,
                             (FCollapsePointsState *)
                             (param_1[1].ExecutionSource.InterfaceInstance +
                             (longlong)(int)uVar2 * 0x48),uVar2);
          if (!bVar4) {
            bVar4 = false;
            goto LAB_149b0d8d0;
          }
          piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                  param_1[1].SourceComponent.WeakPtr.ObjectIndex) &&
                (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
        bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                param_1[1].SourceComponent.WeakPtr.ObjectIndex;
        goto LAB_149b0d8d0;
      }
    }
  }
  bVar4 = true;
LAB_149b0d8d0:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// PrepareDataInternal @ 149b224d0

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
FPCGCollapsePointsElement::PrepareDataInternal(FPCGCollapsePointsElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPCGTimeSliceInitResult EVar4;
  UPCGCollapsePointsSettings *pUVar5;
  bool bVar6;
  UPCGCollapsePointsSettings *local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_30;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_28;
  UPCGCollapsePointsSettings *local_20;
  FPCGContext *local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId228,"FPCGCollapsePointsElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
               ,0xe4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId228);
  }
  pUVar5 = FPCGContext::GetInputSettings<UPCGCollapsePointsSettings>(param_1);
  if ((pUVar5 == (UPCGCollapsePointsSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                         ,0xe7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapsePoints.cpp"
                         ,0xea,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_48,&PCGPinConstants::DefaultInputLabel);
  if (local_48.ArrayNum != 0) {
    local_res10 = pUVar5;
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
      EVar4 = `FPCGCollapsePointsElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
                        (&local_res10,
                         (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                          *)param_1,(FCollapsePointsSettings *)&param_1[1].InputData.DataCrcs);
      *(EPCGTimeSliceInitResult *)
       ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar4;
    }
    local_28 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGCollapsePointsElement::PrepareDataInternal'::__l2::<lambda_2>,enum_EPCGTimeSliceInitResult,PCGCollapsePoints::FCollapsePointsState_&,PCGCollapsePoints::FCollapsePointsSettings_const_&,unsigned_int>
               ::Call;
    local_20 = pUVar5;
    local_18 = param_1;
    TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
    ::InitializePerIterationStates
              ((TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                *)param_1,local_48.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGCollapsePoints::FCollapsePointsState_&,PCGCollapsePoints::FCollapsePointsSettings_const_&,unsigned_int)>
                *)&local_38);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

