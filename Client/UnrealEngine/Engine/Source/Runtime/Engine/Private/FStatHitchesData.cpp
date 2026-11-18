// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DrawStat @ 14892fe70

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

int __thiscall
FStatHitchesData::DrawStat
          (FStatHitchesData *this,FViewport *param_1,FCanvas *param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  UFont *pUVar14;
  size_t sVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  FLinearColor_u_0 local_33c;
  LARGE_INTEGER local_328;
  FScriptContainerElement *local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  FString local_310;
  TVector2<double>_u_0 local_300;
  undefined1 local_2f0 [8];
  FCanvasTextItemBase local_2e8;
  UFont *local_150;
  TReferenceControllerBase<1> *local_110;
  char local_e8;
  FScriptContainerElement *local_e0;
  undefined8 uStack_d8;
  
  QueryPerformanceCounter(&local_328);
  dVar4 = (double)local_328.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (0.0 < this->LastTime) {
    fVar18 = FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS();
    dVar19 = dVar4 - this->LastTime;
    fVar20 = (float)dVar19;
    if (fVar18 * __real_3a83126f < fVar20) {
      uVar2 = this->OverwriteIndex;
      uVar10 = 0;
      if ((int)uVar2 < (this->Hitches).ArrayNum) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      *(float *)((this->Hitches).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) = fVar20;
      uVar2 = this->OverwriteIndex;
      uVar10 = 0;
      if ((int)uVar2 < (this->When).ArrayNum) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      *(double *)((this->When).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = dVar4;
      this->OverwriteIndex = (this->OverwriteIndex + 1) % 0x14;
      if (2 < (byte)LogClient._0_1_) {
        this->Count = this->Count + 1;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
      }
    }
    lVar13 = (**(code **)(param_2->RenderTarget->_padding_ + 0x28))(param_2->RenderTarget,local_2f0)
    ;
    dVar8 = __real_bfce79e79e79e79e;
    dVar7 = __real_4010cccccccccccd;
    dVar6 = _UNK_150689688;
    dVar5 = ___xmm_3ff00000000000003ff0000000000000;
    fVar18 = __real_3b808081;
    iVar16 = 0;
    lVar17 = 0;
    iVar11 = *(int *)(lVar13 + 4);
    do {
      if (((this->When).ArrayNum <= iVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      if (0.0 < *(double *)((this->When).AllocatorInstance.Data + lVar17)) {
        if (((this->When).ArrayNum <= iVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        if (*(double *)((this->When).AllocatorInstance.Data + lVar17) <= dVar4) {
          if (((this->When).ArrayNum <= iVar16) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            iVar11 = (*pcVar3)();
            return iVar11;
          }
          fVar20 = SUB84(dVar19,0);
          pFVar1 = (this->When).AllocatorInstance.Data + lVar17;
          if (dVar4 - dVar7 < *(double *)pFVar1 || dVar4 - dVar7 == *(double *)pFVar1) {
            if (((this->Hitches).ArrayNum <= iVar16) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              iVar11 = (*pcVar3)();
              return iVar11;
            }
            UEngine::GetFrameTimeDisplayColor(GEngine,fVar20);
            if (((this->When).ArrayNum <= iVar16) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              iVar11 = (*pcVar3)();
              return iVar11;
            }
            dVar19 = *(double *)((this->When).AllocatorInstance.Data + lVar17);
            ::FString::PrintfImpl(&local_310,L"%5d");
            local_33c._s_0.R = FLinearColor::sRGBToLinearTable[local_resa];
            local_33c._s_0.G = FLinearColor::sRGBToLinearTable[local_res9];
            local_33c._s_0.B = FLinearColor::sRGBToLinearTable[local_res8];
            local_33c._s_0.A = (float)local_resb * fVar18;
            pUVar14 = UEngine::GetSmallFont();
            if (local_310.Data.ArrayNum == 0) {
              local_320 = (FScriptContainerElement *)0x15060d16c;
LAB_1489302f5:
              sVar15 = wcslen((wchar_t *)local_320);
              uVar12 = (undefined4)sVar15;
            }
            else {
              uVar12 = 0;
              local_320 = local_310.Data.AllocatorInstance.Data;
              if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_1489302f5;
            }
            local_300._s_0.X = (double)param_3;
            dVar19 = (double)(param_4 -
                             (int)((float)((dVar4 - dVar19) * dVar8) * (float)(iVar11 - param_4)));
            uStack_318 = uVar12;
            local_300._s_0.Y = dVar19;
            FCanvasTextItemBase::FCanvasTextItemBase
                      (&local_2e8,(TVector2<double> *)&local_300._s_0,
                       (FLinearColor *)&local_33c._s_0);
            local_e8 = '\0';
            local_2e8._padding_._4_4_ = 2;
            local_2e8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
            uStack_d8 = CONCAT44(uStack_314,uStack_318);
            local_e0 = local_320;
            if ((pUVar14 == (UFont *)0x0) || ((pUVar14->ImportOptions).bUseDistanceFieldAlpha == 0))
            {
              local_2e8.FontRenderInfo._0_4_ = local_2e8.FontRenderInfo._0_4_ | 2;
              local_2e8.ShadowOffset.field0_0x0._s_0.X = dVar5;
              local_2e8.ShadowOffset.field0_0x0._s_0.Y = dVar6;
              local_2e8.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
            }
            else {
              local_2e8._padding_._4_4_ = 6;
            }
            local_150 = pUVar14;
            FCanvasTextItemBase::Draw(&local_2e8,param_2);
            if (param_2->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(param_2,false);
            }
            if (local_e8 != '\0') {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_110);
            }
            local_2e8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
            local_2e8._padding_ = (longlong)&___7FCanvasItem__6B_;
            if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      iVar16 = iVar16 + 1;
      lVar17 = lVar17 + 8;
    } while (iVar16 < 0x14);
  }
  this->LastTime = dVar4;
  return param_4;
}

