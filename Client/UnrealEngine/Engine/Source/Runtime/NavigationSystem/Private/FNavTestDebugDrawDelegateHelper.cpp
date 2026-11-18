// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// FNavTestDebugDrawDelegateHelper @ 146dd5cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavTestDebugDrawDelegateHelper * __thiscall
FNavTestDebugDrawDelegateHelper::FNavTestDebugDrawDelegateHelper
          (FNavTestDebugDrawDelegateHelper *this)

{
  undefined1 *puVar1;
  
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper((FDebugDrawDelegateHelper *)this);
  this->_padding_ = (longlong)&___7FNavTestDebugDrawDelegateHelper__6B_;
  *(undefined8 *)&(this->NodeDebug).Elements = 0;
  *(undefined8 *)&(this->NodeDebug).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDebug).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x30 = 0xffffffff;
  (this->NodeDebug).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodeDebug).HashSize = 0;
  this->bShowBestPath = 0;
  this->bShowDiff = 0;
  this->NavTestActor = (ANavigationTestingActor *)0x0;
  (this->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathPoints).ArrayNum = 0;
  (this->PathPoints).ArrayMax = 0;
  (this->PathPointFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathPointFlags).ArrayNum = 0;
  (this->PathPointFlags).ArrayMax = 0;
  (this->BestNodeId).Index = -1;
  return this;
}

// ~FNavTestDebugDrawDelegateHelper @ 146dd9a70

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
FNavTestDebugDrawDelegateHelper::~FNavTestDebugDrawDelegateHelper
          (FNavTestDebugDrawDelegateHelper *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->PathPointFlags).AllocatorInstance.Data,
             (this->PathPointFlags).ArrayNum);
  pFVar1 = (this->PathPointFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->NodeDebug).HashSize = 0;
  FVar2 = (this->NodeDebug).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodeDebug).Elements);
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// DrawDebugLabels @ 146deffd0

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
FNavTestDebugDrawDelegateHelper::DrawDebugLabels
          (FNavTestDebugDrawDelegateHelper *this,UCanvas *param_1,APlayerController *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FSceneView *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  UFont *pUVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  FColor_u_0 local_res8 [2];
  UCanvas *local_res10;
  FColor_u_0 local_res20 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  FFontRenderInfo local_118;
  FFontRenderInfo local_d8;
  TVector<double> local_98;
  TVector<double> local_80 [3];
  
  if (this->NavTestActor != (ANavigationTestingActor *)0x0) {
    local_res20[0] = (param_1->DrawColor).field0_0x0;
    local_res10 = param_1;
    UCanvas::SetDrawColor(param_1,&FColor::White);
    fVar9 = __real_3f800000;
    pFVar6 = param_1->SceneView;
    if (*(int *)&(this->NodeDebug).Elements.field_0x8 ==
        *(int *)&(this->NodeDebug).Elements.field_0x34) {
      uVar12 = 0;
      if (0 < (this->PathPoints).ArrayNum) {
        lVar17 = 0;
        lVar23 = 0;
        do {
          uVar18 = ~uVar12 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar12 < (this->PathPoints).ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar10 = FConvexVolume::IntersectBox
                             (&pFVar6->ViewFrustum,
                              (TVector<double> *)
                              ((this->PathPoints).AllocatorInstance.Data +
                              (longlong)(int)uVar12 * 0x18),&UE::Math::TVector<double>::ZeroVector);
          if (bVar10) {
            uVar14 = 0;
            if ((int)uVar12 < (this->PathPoints).ArrayNum) {
              uVar14 = uVar18;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->PathPoints).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar23;
            local_138._s_0.X = (double)*(undefined8 *)pFVar1;
            local_138._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
            local_138._s_0.Z = (double)*(undefined8 *)(pFVar7 + lVar23 + 0x10);
            pTVar16 = UCanvas::Project(local_res10,local_80,(TVector<double> *)&local_138._s_0,true)
            ;
            dVar3 = (pTVar16->field0_0x0)._s_0.X;
            dVar4 = (pTVar16->field0_0x0)._s_0.Y;
            pUVar15 = UEngine::GetSmallFont();
            local_d8._0_4_ = local_d8._0_4_ & 0xfffffffc;
            local_d8.GlowInfo._0_4_ = local_d8.GlowInfo._0_4_ & 0xfffffffe;
            uVar14 = 0;
            if ((int)uVar12 < (this->PathPointFlags).ArrayNum) {
              uVar14 = uVar18;
            }
            local_d8.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
            local_d8.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
            local_d8.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
            local_d8.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
            local_d8.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
            local_d8.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar1 = (this->PathPointFlags).AllocatorInstance.Data;
            local_188 = *(wchar_t **)(pFVar1 + lVar17);
            iVar5 = *(int *)(pFVar1 + lVar17 + 8);
            iStack_180 = iVar5 + -1;
            if (iVar5 == 0) {
              iStack_180 = 0;
            }
            local_168._12_4_ = uStack_17c;
            local_168.Size = iStack_180;
            local_168.DataPtr = local_188;
            UCanvas::DrawText(local_res10,pUVar15,&local_168,(float)dVar3,(float)dVar4,fVar9,fVar9,
                              &local_d8);
          }
          uVar12 = uVar12 + 1;
          lVar23 = lVar23 + 0x18;
          lVar17 = lVar17 + 0x10;
          param_1 = local_res10;
        } while ((int)uVar12 < (this->PathPoints).ArrayNum);
      }
    }
    else {
      pUVar15 = UEngine::GetSmallFont();
      fVar9 = __real_3f800000;
      TStack_1c0.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeDebug).Elements.field_0x10;
      iVar20 = 0;
      iVar5 = *(int *)&(this->NodeDebug).Elements.field_0x28;
      uVar12 = 1;
      iVar21 = 0;
      iVar13 = 0;
      if (iVar5 != 0) {
        puVar22 = *(uint **)&(this->NodeDebug).Elements.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)TStack_1c0.Array;
        }
        uVar14 = *puVar22;
        while (uVar14 == 0) {
          lVar17 = (longlong)iVar20;
          iVar21 = iVar21 + 0x20;
          iVar20 = iVar20 + 1;
          iVar13 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_146df00c9;
          uVar14 = puVar22[lVar17 + 1];
        }
        uVar12 = -uVar14 & uVar14;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar13 = (int)lVar17 + -1 + iVar21;
        if (iVar5 < iVar13) {
          iVar13 = iVar5;
        }
      }
LAB_146df00c9:
      TStack_1c0._padding_ = CONCAT44(uVar12,iVar20);
      TStack_1c0.CurrentBitIndex = iVar13;
      TStack_1c0.UnvisitedBitMask = 0xffffffff;
      TStack_1c0._28_4_ = iVar13;
      TStack_1c0.BaseBitIndex = iVar21;
      if (iVar13 < iVar5) {
        do {
          lVar19 = (longlong)iVar13 * 0x40;
          lVar23 = *(longlong *)&(this->NodeDebug).Elements;
          lVar17 = lVar19 + lVar23;
          bVar10 = FConvexVolume::IntersectBox
                             (&pFVar6->ViewFrustum,(TVector<double> *)(lVar17 + 8),
                              &UE::Math::TVector<double>::ZeroVector);
          if (bVar10) {
            uVar12 = *(uint *)(lVar19 + 0x34 + lVar23);
            local_res8[0] = FColor::White.field0_0x0;
            if ((uVar12 & 1) != 0) {
              local_res8[0].Bits = 0xff404040;
            }
            if ((this->bShowBestPath == 0) && (iVar13 == (this->BestNodeId).Index)) {
              local_res8[0] = FColor::Red.field0_0x0;
            }
            if (this->bShowDiff != 0) {
              uVar11 = 0x40;
              if ((uVar12 & 4) != 0) {
                uVar11 = 0xff;
              }
              local_res8[0]._s_0.A = uVar11;
            }
            UCanvas::SetDrawColor(param_1,(FColor *)&local_res8[0]._s_0);
            local_158._s_0.X = *(double *)(lVar17 + 8);
            local_158._s_0.Y = *(double *)(lVar17 + 0x10);
            local_158._s_0.Z = *(double *)(lVar17 + 0x18);
            pTVar16 = UCanvas::Project(param_1,&local_98,(TVector<double> *)&local_158._s_0,true);
            local_118._0_4_ = local_118._0_4_ & 0xfffffffc;
            local_198 = *(wchar_t **)(lVar19 + 0x20 + lVar23);
            local_118.GlowInfo._0_4_ = local_118.GlowInfo._0_4_ & 0xfffffffe;
            iVar5 = *(int *)(lVar19 + 0x28 + lVar23);
            local_118.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
            local_118.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
            local_118.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
            local_118.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
            iStack_190 = iVar5 + -1;
            local_118.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
            local_118.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
            if (iVar5 == 0) {
              iStack_190 = 0;
            }
            local_178._12_4_ = uStack_18c;
            local_178.Size = iStack_190;
            local_178.DataPtr = local_198;
            UCanvas::DrawText(param_1,pUVar15,&local_178,
                              (float)((this->NavTestActor->TextCanvasOffset).field0_0x0._s_0.X +
                                     (pTVar16->field0_0x0)._s_0.X),
                              (float)((this->NavTestActor->TextCanvasOffset).field0_0x0._s_0.Y +
                                     (pTVar16->field0_0x0)._s_0.Y),fVar9,fVar9,&local_118);
          }
          TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
          iVar13 = TStack_1c0.CurrentBitIndex;
        } while (TStack_1c0.CurrentBitIndex < (TStack_1c0.Array)->NumBits);
      }
    }
    UCanvas::SetDrawColor(param_1,(FColor *)&local_res20[0]._s_0);
  }
  return;
}

// SetupFromProxy @ 146e29890

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
FNavTestDebugDrawDelegateHelper::SetupFromProxy
          (FNavTestDebugDrawDelegateHelper *this,FNavTestSceneProxy *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  pTVar3 = &this->PathPoints;
  piVar1 = &(this->PathPoints).ArrayMax;
  (this->PathPoints).ArrayNum = 0;
  if ((this->PathPoints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if (pTVar3 == &param_1->PathPoints) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar5 = (param_1->PathPoints).ArrayNum;
  if (iVar5 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar5,&pTVar3->AllocatorInstance,&(this->PathPoints).ArrayNum,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x18,
           (param_1->PathPoints).AllocatorInstance.Data,(longlong)iVar5 * 0x18);
  }
  pTVar4 = &this->PathPointFlags;
  piVar1 = &(this->PathPointFlags).ArrayMax;
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  piVar2 = &(this->PathPointFlags).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar6,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar6,*piVar2);
    *piVar2 = 0;
  }
  if (pTVar4 == &param_1->PathPointFlags) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar5 = (param_1->PathPointFlags).ArrayNum;
  if (iVar5 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar5,&pTVar4->AllocatorInstance,piVar2,piVar1);
    ConstructItems<FString,FString,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
               (FString *)(param_1->PathPointFlags).AllocatorInstance.Data,iVar5);
  }
  if (*(int *)&(this->NodeDebug).Elements.field_0x8 !=
      *(int *)&(this->NodeDebug).Elements.field_0x34) {
    TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->NodeDebug);
    TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&(this->NodeDebug).Elements,0,*(int *)&(this->NodeDebug).Elements.field_0x8);
    iVar5 = *(int *)&(this->NodeDebug).Elements.field_0xc;
    *(undefined4 *)&(this->NodeDebug).Elements.field_0x8 = 0;
    if (iVar5 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)&this->NodeDebug,0,
                 (int *)&(this->NodeDebug).Elements.field_0xc);
    }
    *(undefined4 *)&(this->NodeDebug).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NodeDebug).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->NodeDebug).Elements.field_0x28 = 0;
  }
  TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>(&this->NodeDebug,&param_1->NodeDebug);
  this->NavTestActor = param_1->NavTestActor;
  (this->BestNodeId).Index = (param_1->BestNodeId).Index;
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0xe4,0,1) ^ param_1->bShowBestPath) & 1 ^
           *(undefined4 *)&this->field_0xe4;
  *(uint *)&this->field_0xe4 = uVar10;
  *(uint *)&this->field_0xe4 = (*(uint *)&param_1->field_0x3ac >> 1 ^ uVar10) & 2 ^ uVar10;
  return;
}

