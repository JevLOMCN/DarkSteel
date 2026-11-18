// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// DisableEQSRendering @ 146feeca0

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
FVisualLoggerExtension::DisableEQSRendering(FVisualLoggerExtension *this,AActor *param_1)

{
  code *pcVar1;
  UEQSRenderingComponent *this_00;
  UClass *local_res10 [3];
  
  if (param_1 != (AActor *)0x0) {
    this->SelectedEQSId = -1;
    pcVar1 = *(code **)(param_1->_padding_ + 0x738);
    local_res10[0] = Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    this_00 = (UEQSRenderingComponent *)(*pcVar1)(param_1,local_res10);
    if (this_00 != (UEQSRenderingComponent *)0x0) {
      USceneComponent::SetHiddenInGame((USceneComponent *)this_00,true,DirtyOnly);
      (**(code **)(*(longlong *)this_00 + 0x2c0))(this_00);
      UEQSRenderingComponent::ClearStoredDebugData(this_00);
    }
  }
  return;
}

// DrawData @ 146feed30

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
FVisualLoggerExtension::DrawData
          (FVisualLoggerExtension *this,UWorld *param_1,UEQSRenderingComponent *param_2,
          UCanvas *param_3,AActor *param_4,FName *param_5,FVisualLogDataBlock *param_6,
          double param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FSceneView *pFVar6;
  bool bVar7;
  code *pcVar8;
  ITextData *pIVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  UFont *pUVar14;
  FText *pFVar15;
  int iVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float local_488 [4];
  FQueryData local_478;
  FLinearColor_u_0 local_3e8;
  FString local_3d8;
  undefined1 local_3c8 [16];
  double local_3b8;
  float local_3b0 [2];
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  TVector2<double>_u_0 local_398;
  TStringView<wchar_t> local_388;
  TVector2<double>_u_0 local_378;
  FCanvasTileItem local_368;
  undefined1 local_2b8 [140];
  float local_22c;
  float local_228;
  float local_224;
  longlong local_220;
  longlong lStack_218;
  
  pwVar17 = L"";
  if (EVisLogTags::TAG_EQS.Data.ArrayNum != 0) {
    pwVar17 = (wchar_t *)EVisLogTags::TAG_EQS.Data.AllocatorInstance.Data;
  }
  bVar11 = ::FName::Equals(*param_5,pwVar17);
  if (bVar11) {
    uVar20 = 0;
    local_478.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Items.ArrayNum = 0;
    local_478.Items.ArrayMax = 0;
    local_478.Tests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Tests.ArrayNum = 0;
    local_478.Tests.ArrayMax = 0;
    local_478.SolidSpheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.SolidSpheres.ArrayNum = 0;
    local_478.SolidSpheres.ArrayMax = 0;
    local_478.Texts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Texts.ArrayNum = 0;
    local_478.Texts.ArrayMax = 0;
    local_478.RenderDebugHelpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.RenderDebugHelpers.ArrayNum = 0;
    local_478.RenderDebugHelpers.ArrayMax = 0;
    local_478.Options.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Options.ArrayNum = 0;
    local_478.Options.ArrayMax = 0;
    local_478.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Name.Data.ArrayNum = 0;
    local_478.Name.Data.ArrayMax = 0;
    UEnvQueryDebugHelpers::BlobArrayToDebugData(&param_6->Data,&local_478,false);
    if (((param_2 != (UEQSRenderingComponent *)0x0) && (param_3 == (UCanvas *)0x0)) &&
       ((this->SelectedEQSId == local_478.Id || (this->SelectedEQSId == -1)))) {
      USceneComponent::SetHiddenInGame((USceneComponent *)param_2,false,DirtyOnly);
      (**(code **)(*(longlong *)param_2 + 0x2b8))(param_2,0);
      UEQSRenderingComponent::StoreDebugData(param_2,&local_478);
    }
    lVar22 = 0xffffffff;
    if (((this->SelectedEQSId != -1) && (local_478.Id == this->SelectedEQSId)) &&
       (param_3 != (UCanvas *)0x0)) {
      pFVar6 = param_3->SceneView;
      uVar28 = 0;
      uVar29 = 0;
      dVar2 = (pFVar6->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
      dVar3 = (pFVar6->ViewMatrices).ViewMatrix.M[0][2];
      dVar4 = (pFVar6->ViewMatrices).ViewMatrix.M[1][2];
      dVar5 = (pFVar6->ViewMatrices).ViewMatrix.M[2][2];
      pIVar9 = (ITextData *)(pFVar6->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
      dVar10 = (pFVar6->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
      uVar21 = uVar20;
      iVar16 = local_478.RenderDebugHelpers.ArrayNum;
      local_3c8._0_8_ = pIVar9;
      local_3c8._8_8_ = dVar10;
      local_3b8 = dVar2;
      if (0 < local_478.RenderDebugHelpers.ArrayNum) {
        do {
          uVar18 = (uint)uVar20;
          uVar12 = 0;
          if ((int)uVar18 < iVar16) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar16 = local_478.RenderDebugHelpers.ArrayNum;
          }
          dVar27 = *(double *)(local_478.RenderDebugHelpers.AllocatorInstance.Data + uVar21 + 8) -
                   dVar10;
          dVar26 = *(double *)(local_478.RenderDebugHelpers.AllocatorInstance.Data + uVar21) -
                   (double)pIVar9;
          dVar25 = *(double *)(local_478.RenderDebugHelpers.AllocatorInstance.Data + uVar21 + 0x10)
                   - dVar2;
          auVar23._0_8_ = dVar26 * dVar3;
          auVar23._8_8_ = 0;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar27 * dVar27 + dVar26 * dVar26 + dVar25 * dVar25;
          auVar24 = sqrtpd(auVar23,auVar24);
          dVar27 = (dVar27 * dVar4 + auVar23._0_8_ + dVar25 * dVar5) / auVar24._0_8_;
          bVar11 = dVar27 == (double)CONCAT44(uVar29,uVar28);
          bVar7 = dVar27 < (double)CONCAT44(uVar29,uVar28);
          if (dVar27 <= (double)CONCAT44(uVar29,uVar28)) {
            dVar27 = (double)CONCAT44(uVar29,uVar28);
          }
          uVar12 = uVar18;
          if (bVar7 || bVar11) {
            uVar12 = (uint)lVar22;
          }
          uVar20 = (ulonglong)(uVar18 + 1);
          lVar22 = (longlong)(int)uVar12;
          uVar28 = SUB84(dVar27,0);
          uVar29 = (undefined4)((ulonglong)dVar27 >> 0x20);
          uVar21 = uVar21 + 0x38;
        } while ((int)(uVar18 + 1) < iVar16);
        if (uVar12 != 0xffffffff) {
          uVar19 = ~uVar12 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar12 < iVar16) {
            uVar18 = uVar19;
          }
          if (uVar18 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar16 = local_478.RenderDebugHelpers.ArrayNum;
          }
          lVar22 = lVar22 * 0x38;
          fVar1 = *(float *)(local_478.RenderDebugHelpers.AllocatorInstance.Data + lVar22 + 0x18);
          uVar18 = 0;
          if ((int)uVar12 < iVar16) {
            uVar18 = uVar19;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          DrawDebugSphere(param_1,(TVector<double> *)
                                  (local_478.RenderDebugHelpers.AllocatorInstance.Data + lVar22),
                          fVar1,8,&FColor::Red,false,__real_bf800000,'\0',0.0);
          uVar18 = 0;
          if ((int)uVar12 < local_478.RenderDebugHelpers.ArrayNum) {
            uVar18 = uVar19;
          }
          if (uVar18 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar18 = *(uint *)(local_478.RenderDebugHelpers.AllocatorInstance.Data + lVar22 + 0x1c);
          if (uVar18 != 0xffffffff) {
            uVar13 = 0;
            if ((int)uVar12 < local_478.RenderDebugHelpers.ArrayNum) {
              uVar13 = uVar19;
            }
            iVar16 = local_478.RenderDebugHelpers.ArrayNum;
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar16 = local_478.RenderDebugHelpers.ArrayNum;
            }
            uVar13 = 0;
            if ((int)uVar12 < iVar16) {
              uVar13 = uVar19;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar12 = 0;
            if ((int)uVar18 < local_478.Tests.ArrayNum) {
              uVar12 = ~uVar18 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar12 = 0;
            if ((int)uVar18 < local_478.Tests.ArrayNum) {
              uVar12 = ~uVar18 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            ::FString::PrintfImpl
                      (&local_3d8,
                       L"Selected item failed with test %d: %s (%s)\n\'%s\' with score %3.3f");
            local_3a8 = local_3d8.Data.AllocatorInstance.Data;
            iStack_3a0 = local_3d8.Data.ArrayNum + -1;
            if (local_3d8.Data.ArrayNum == 0) {
              iStack_3a0 = 0;
            }
            pUVar14 = UEngine::GetSmallFont();
            local_388._12_4_ = uStack_39c;
            local_388.Size = iStack_3a0;
            local_388.DataPtr = (wchar_t *)local_3a8;
            UCanvas::StrLen(param_3,pUVar14,&local_388,local_3b0,local_488,false);
            fVar1 = __real_40000000;
            local_3e8._s_0.R = FLinearColor::sRGBToLinearTable[0];
            local_3e8._s_0.G = FLinearColor::sRGBToLinearTable[0];
            local_3e8._s_0.B = FLinearColor::sRGBToLinearTable[0];
            local_398._s_0.X = (double)param_3->SizeX;
            local_3e8._s_0.A = 0.7843138;
            local_398._s_0.Y = (double)(local_488[0] * __real_40000000);
            local_378._s_0.X = ___xmm_40240000000000004024000000000000;
            local_378._s_0.Y = _UNK_15104e4d8;
            FCanvasTileItem::FCanvasTileItem
                      (&local_368,(TVector2<double> *)&local_378._s_0,GWhiteTexture,
                       (TVector2<double> *)&local_398._s_0,(FLinearColor *)&local_3e8._s_0);
            local_368._padding_._4_4_ = 2;
            UCanvas::DrawItem(param_3,(FCanvasItem *)&local_368,0.0,
                              (float)param_3->SizeY - local_488[0] * fVar1);
            pUVar14 = UEngine::GetSmallFont();
            pFVar15 = FText::FromString((FText *)local_3c8,&local_3d8);
            FCanvasTextItem::FCanvasTextItem
                      ((FCanvasTextItem *)local_2b8,&UE::Math::TVector2<double>::ZeroVector,pFVar15,
                       pUVar14,&FLinearColor::White);
            if ((ITextData *)local_3c8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_3c8._0_8_ + 0x10))();
            }
            local_2b8._136_4_ = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.R];
            local_2b8._72_4_ = local_2b8._72_4_ | 2;
            local_2b8._68_4_ = 0x3f8ccccd;
            local_22c = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.G];
            local_220 = ___xmm_3ff00000000000003ff0000000000000;
            lStack_218 = _UNK_150689688;
            local_228 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.B];
            local_224 = (float)FColor::Black.field0_0x0._3_1_ * __real_3b808081;
            UCanvas::DrawItem(param_3,(FCanvasItem *)local_2b8,__real_40a00000,
                              (float)param_3->SizeY - local_488[0] * fVar1);
            FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2b8);
            local_368._padding_ = (longlong)&___7FCanvasItem__6B_;
            if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    if (local_478.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Name.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_478.Options.AllocatorInstance.Data,local_478.Options.ArrayNum);
    if (local_478.Options.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Options.AllocatorInstance.Data);
    }
    DestructItems<EQSDebug::FDebugHelper,int>
              ((FDebugHelper *)local_478.RenderDebugHelpers.AllocatorInstance.Data,
               local_478.RenderDebugHelpers.ArrayNum);
    if ((FDebugHelper *)local_478.RenderDebugHelpers.AllocatorInstance.Data != (FDebugHelper *)0x0)
    {
      FMemory::Free(local_478.RenderDebugHelpers.AllocatorInstance.Data);
    }
    DestructItems<FDebugRenderSceneProxy::FText3d,int>
              ((FText3d *)local_478.Texts.AllocatorInstance.Data,local_478.Texts.ArrayNum);
    if ((FText3d *)local_478.Texts.AllocatorInstance.Data != (FText3d *)0x0) {
      FMemory::Free(local_478.Texts.AllocatorInstance.Data);
    }
    if (local_478.SolidSpheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.SolidSpheres.AllocatorInstance.Data);
    }
    DestructItems<EQSDebug::FTestData,int>
              ((FTestData *)local_478.Tests.AllocatorInstance.Data,local_478.Tests.ArrayNum);
    if ((FTestData *)local_478.Tests.AllocatorInstance.Data != (FTestData *)0x0) {
      FMemory::Free(local_478.Tests.AllocatorInstance.Data);
    }
    DestructItems<EQSDebug::FItemData,int>
              ((FItemData *)local_478.Items.AllocatorInstance.Data,local_478.Items.ArrayNum);
    if ((FItemData *)local_478.Items.AllocatorInstance.Data != (FItemData *)0x0) {
      FMemory::Free(local_478.Items.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawData @ 146fef5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FVisualLoggerExtension::DrawData
          (FVisualLoggerExtension *this,IVisualLoggerEditorInterface *param_1,UCanvas *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  IVisualLoggerEditorInterface IVar3;
  FWeakObjectPtr *pFVar4;
  AActor *pAVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  UEQSRenderingComponent *pUVar13;
  UWorld *pUVar14;
  undefined8 *puVar15;
  USceneComponent *this_00;
  UObject *pUVar16;
  FString *pFVar17;
  UEQSRenderingComponent *this_01;
  UClass *pUVar18;
  ulonglong uVar19;
  longlong lVar20;
  FWeakObjectPtr *this_02;
  FVisualLogDataBlock *pFVar21;
  FScriptContainerElement *pFVar22;
  IVisualLoggerEditorInterface *pIVar23;
  FVisualLogDataBlock *pFVar24;
  uint uVar25;
  undefined1 auStackY_198 [32];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [2];
  FWeakObjectPtr local_144;
  ForAnyElementType local_138;
  uint local_130;
  int local_12c;
  uint local_128;
  uint local_124;
  IVisualLoggerEditorInterface *local_120;
  longlong local_118;
  FScriptContainerElement *local_110;
  FName local_108;
  AActor *local_100;
  UClass *local_f8;
  UEQSRenderingComponent *local_f0;
  UWorld *local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = param_1;
  if ((param_2 == (UCanvas *)0x0) &&
     (plVar12 = (longlong *)(**(code **)((longlong)*param_1 + 0x40))(param_1,0),
     plVar12 != (longlong *)0x0)) {
    this->SelectedEQSId = -1;
    pcVar2 = *(code **)(*plVar12 + 0x738);
    local_f8 = Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8);
    }
    pUVar13 = (UEQSRenderingComponent *)(*pcVar2)(plVar12,&local_f8);
    if (pUVar13 != (UEQSRenderingComponent *)0x0) {
      USceneComponent::SetHiddenInGame((USceneComponent *)pUVar13,true,DirtyOnly);
      (**(code **)(*(longlong *)pUVar13 + 0x2c0))(pUVar13);
      UEQSRenderingComponent::ClearStoredDebugData(pUVar13);
    }
  }
  pUVar14 = (UWorld *)(**(code **)((longlong)*param_1 + 0x38))(param_1);
  local_e8 = pUVar14;
  local_100 = (AActor *)(**(code **)((longlong)*param_1 + 0x40))(param_1,0);
  if ((pUVar14 != (UWorld *)0x0) && (local_100 != (AActor *)0x0)) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
    local_138.Data = (FScriptContainerElement *)0x0;
    local_110 = (FScriptContainerElement *)0x0;
    local_130 = *(uint *)(puVar15 + 1);
    lVar20 = (longlong)(int)local_130;
    _Src = (void *)*puVar15;
    if (local_130 == 0) {
      local_12c = 0;
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar20 << 3);
      local_110 = local_138.Data;
      local_124 = local_130;
    }
    uVar19 = (ulonglong)(int)local_124;
    local_e0 = local_110 + uVar19 * 8;
    local_138.Data = local_110;
    uVar11 = local_124;
    while( true ) {
      pFVar6 = local_e0;
      pFVar22 = local_110;
      if (uVar11 != (uint)uVar19) {
        local_148 = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_148)
        ;
      }
      pIVar23 = local_120;
      if (pFVar22 == pFVar6) break;
      iVar9 = (**(code **)((longlong)*local_120 + 8))(local_120,*(undefined8 *)pFVar22);
      if (iVar9 != -1) {
        IVar3 = *pIVar23;
        uVar10 = (**(code **)((longlong)IVar3 + 8))(pIVar23,*(undefined8 *)pFVar22);
        cVar7 = (**(code **)((longlong)IVar3 + 0x30))(pIVar23,*(undefined8 *)pFVar22,uVar10);
        if (cVar7 != '\0') {
          local_118 = (**(code **)((longlong)*pIVar23 + 0x18))(pIVar23,*(undefined8 *)pFVar22);
          if (param_2 == (UCanvas *)0x0) {
            this_02 = (FWeakObjectPtr *)(this->EQSRenderingComponents).AllocatorInstance.Data;
            iVar9 = (this->EQSRenderingComponents).ArrayNum;
            pFVar4 = this_02 + iVar9;
            while( true ) {
              if ((this->EQSRenderingComponents).ArrayNum != iVar9) {
                local_147 = 0;
                `TCheckedPointerIterator<TWeakObjectPtr<UEQSRenderingComponent,FWeakObjectPtr>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_147);
              }
              pIVar23 = local_120;
              if (this_02 == pFVar4) break;
              bVar8 = FWeakObjectPtr::IsValid(this_02);
              if (bVar8) {
                this_00 = (USceneComponent *)FWeakObjectPtr::Get(this_02);
                USceneComponent::SetHiddenInGame(this_00,true,DirtyOnly);
                pUVar16 = FWeakObjectPtr::Get(this_02);
                (**(code **)(*(longlong *)pUVar16 + 0x2c0))(pUVar16);
                pUVar13 = (UEQSRenderingComponent *)FWeakObjectPtr::Get(this_02);
                UEQSRenderingComponent::ClearStoredDebugData(pUVar13);
              }
              this_02 = this_02 + 1;
            }
          }
          local_128 = *(uint *)(local_118 + 0xa0);
          uVar19 = (ulonglong)(int)local_128;
          pFVar21 = *(FVisualLogDataBlock **)(local_118 + 0x98);
          pFVar24 = pFVar21 + uVar19;
          while( true ) {
            if (*(int *)(local_118 + 0xa0) != (int)uVar19) {
              local_146[0] = 0;
              `TCheckedPointerIterator<FVisualLogDataBlock_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_146);
            }
            pFVar22 = local_110;
            if (pFVar21 == pFVar24) break;
            local_108 = pFVar21->TagName;
            pcVar2 = *(code **)((longlong)*pIVar23 + 0x48);
            pFVar17 = ::FName::ToString(&local_108,&local_d8);
            cVar7 = (*pcVar2)(pIVar23,pFVar17,7);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (cVar7 != '\0') {
              if (((param_2 == (UCanvas *)0x0) && (-1 < (int)uVar25)) &&
                 ((int)uVar25 < (this->EQSRenderingComponents).ArrayNum)) {
                uVar11 = 0;
                if ((int)uVar25 < (this->EQSRenderingComponents).ArrayNum) {
                  uVar11 = ~uVar25 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                this_01 = (UEQSRenderingComponent *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((this->EQSRenderingComponents).AllocatorInstance.Data
                                              + (longlong)(int)uVar25 * 8));
                pUVar13 = this_01;
              }
              else {
                this_01 = (UEQSRenderingComponent *)0x0;
                pUVar13 = (UEQSRenderingComponent *)param_2;
              }
              pAVar5 = local_100;
              if (pUVar13 == (UEQSRenderingComponent *)0x0) {
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)local_100,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
                pUVar18 = Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                          ((FStaticConstructObjectParameters *)local_c8,pUVar18);
                local_c8._8_8_ = pAVar5;
                this_01 = (UEQSRenderingComponent *)
                          StaticConstructObject_Internal
                                    ((FStaticConstructObjectParameters *)local_c8);
                if (local_c8._64_8_ != 0) {
                  plVar12 = (longlong *)(local_c8 + 0x50);
                  if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                    plVar12 = (longlong *)local_c8._104_8_;
                  }
                  (**(code **)(*plVar12 + 0x10))();
                }
                this_01->bDrawOnlyWhenSelected = 0;
                UActorComponent::RegisterComponent((UActorComponent *)this_01);
                USceneComponent::SetHiddenInGame((USceneComponent *)this_01,false,DirtyOnly);
                (**(code **)(*(longlong *)this_01 + 0x2b8))(this_01,0);
                UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                local_144.ObjectIndex = 0;
                local_144.ObjectSerialNumber = 0;
                local_f0 = this_01;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                FWeakObjectPtr::operator=(&local_144,(FObjectPtr)&local_f0);
                pFVar4 = (FWeakObjectPtr *)(this->EQSRenderingComponents).AllocatorInstance.Data;
                if (((pFVar4 <= &local_144) &&
                    (&local_144 < pFVar4 + (this->EQSRenderingComponents).ArrayMax)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar9 = (this->EQSRenderingComponents).ArrayNum;
                piVar1 = &(this->EQSRenderingComponents).ArrayMax;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&(this->EQSRenderingComponents).AllocatorInstance,piVar1)
                  ;
                }
                (this->EQSRenderingComponents).ArrayNum = iVar9 + 1;
                *(FWeakObjectPtr *)
                 ((this->EQSRenderingComponents).AllocatorInstance.Data + (longlong)iVar9 * 8) =
                     local_144;
                pIVar23 = local_120;
              }
              DrawData(this,local_e8,this_01,param_2,local_100,&local_108,pFVar21,
                       *(double *)(local_118 + 0x18));
            }
            uVar19 = (ulonglong)local_128;
            uVar25 = uVar25 + 1;
            pFVar21 = pFVar21 + 1;
          }
        }
      }
      local_110 = pFVar22 + 8;
      uVar19 = (ulonglong)local_124;
      uVar11 = local_130;
    }
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
  }
  return;
}

// OnItemsSelectionChanged @ 146ff1a60

void __thiscall
FVisualLoggerExtension::OnItemsSelectionChanged
          (FVisualLoggerExtension *this,IVisualLoggerEditorInterface *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ff1a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  return;
}

// OnLogLineSelectionChanged @ 146ff1d10

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
FVisualLoggerExtension::OnLogLineSelectionChanged
          (FVisualLoggerExtension *this,IVisualLoggerEditorInterface *param_1,
          TSharedPtr<FLogEntryItem,1> *param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  AActor *this_00;
  
  if (param_2->Object == (FLogEntryItem *)0x0) {
    param_3 = 0xffffffff;
  }
  else if (param_3 != (int)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SelectedEQSId = (int)param_3;
  this_00 = (AActor *)(**(code **)((longlong)*param_1 + 0x40))(param_1,0);
  AActor::MarkComponentsRenderStateDirty(this_00);
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ResetData @ 146ff2ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FVisualLoggerExtension::ResetData
          (FVisualLoggerExtension *this,IVisualLoggerEditorInterface *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  UEQSRenderingComponent *this_00;
  UClass *local_res10 [3];
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0x40))(param_1,0);
  if (plVar2 != (longlong *)0x0) {
    this->SelectedEQSId = -1;
    pcVar1 = *(code **)(*plVar2 + 0x738);
    local_res10[0] = Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    this_00 = (UEQSRenderingComponent *)(*pcVar1)(plVar2,local_res10);
    if (this_00 != (UEQSRenderingComponent *)0x0) {
      USceneComponent::SetHiddenInGame((USceneComponent *)this_00,true,DirtyOnly);
      (**(code **)(*(longlong *)this_00 + 0x2c0))(this_00);
      UEQSRenderingComponent::ClearStoredDebugData(this_00);
    }
  }
  return;
}

