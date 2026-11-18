// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// ~FNavMeshDebugDrawDelegateHelper @ 146dd9500

void __thiscall
FNavMeshDebugDrawDelegateHelper::~FNavMeshDebugDrawDelegateHelper
          (FNavMeshDebugDrawDelegateHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNavMeshSceneProxyData::FDebugText,int>
            ((FDebugText *)(this->DebugLabels).AllocatorInstance.Data,(this->DebugLabels).ArrayNum);
  pFVar1 = (this->DebugLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// DrawDebugLabels @ 146defc00

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
FNavMeshDebugDrawDelegateHelper::DrawDebugLabels
          (FNavMeshDebugDrawDelegateHelper *this,UCanvas *param_1,APlayerController *param_2)

{
  FSceneView *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  UFont *this_00;
  FScriptContainerElement *pFVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  FColor_u_0 local_res10 [2];
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  FFontRenderInfo local_130;
  FFontRenderInfo local_f0 [3];
  
  if ((param_1 != (UCanvas *)0x0) &&
     ((((param_1->SceneView != (FSceneView *)0x0 &&
        ((param_1->SceneView->Family->EngineShowFlags).Navigation != 0)) ||
       (this->bForceRendering != 0)) &&
      ((this->bNeedsNewData == 0 && ((this->DebugLabels).ArrayNum != 0)))))) {
    local_res10[0] = (param_1->DrawColor).field0_0x0;
    UCanvas::SetDrawColor(param_1,&FColor::White);
    pFVar1 = param_1->SceneView;
    this_00 = UEngine::GetSmallFont();
    dVar8 = __real_3fb0000000000000;
    dVar7 = __real_7fefffffffffffff;
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar4 = __real_41200000;
    fVar3 = __real_3f800000;
    pFVar11 = (this->DebugLabels).AllocatorInstance.Data;
    iVar12 = 0;
    fVar17 = __real_428c0000;
    if (0 < (this->DebugLabels).ArrayNum) {
      do {
        if (((dVar7 == *(double *)&pFVar11->field_0x0) && (dVar7 == *(double *)(pFVar11 + 8))) &&
           (dVar7 == *(double *)(pFVar11 + 0x10))) {
          local_188.DataPtr = *(wchar_t **)&pFVar11[0x18].field_0x0;
          local_130.bEnableShadow = 0;
          local_130.bClipText = 0;
          local_130.GlowInfo.bEnableGlow = 0;
          local_130.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
          local_130.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
          iVar10 = *(int *)(pFVar11 + 0x20) + -1;
          if (*(int *)(pFVar11 + 0x20) == 0) {
            iVar10 = 0;
          }
          local_130.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
          local_130.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
          local_188._12_4_ = uStack_19c;
          local_188.Size = iVar10;
          local_130.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
          local_130.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
          UCanvas::DrawText(param_1,this_00,&local_188,fVar4,fVar17,fVar3,fVar3,&local_130);
          if (*(int *)(pFVar11 + 0x20) < 2) {
            fVar13 = UFont::GetMaxCharHeight(this_00);
            fVar17 = fVar17 + fVar13;
          }
          else {
            iVar10 = UFont::GetStringHeightSize(this_00,*(wchar_t **)&pFVar11[0x18].field_0x0);
            fVar17 = fVar17 + (float)iVar10;
          }
        }
        else {
          bVar9 = FNavMeshRenderingHelpers::PointInView((TVector<double> *)pFVar11,pFVar1);
          if (bVar9) {
            local_168._s_0.X = (double)*(undefined8 *)&pFVar11->field_0x0;
            local_168._s_0.Y = (double)*(undefined8 *)(pFVar11 + 8);
            local_168._s_0.Z = (double)*(undefined8 *)(pFVar11 + 0x10);
            UCanvas::Project(param_1,(TVector<double> *)&local_148._s_0,
                             (TVector<double> *)&local_168._s_0,true);
            INSERT(local_f0[0]._0_4_,0,1,1);
            INSERT(local_f0[0]._0_4_,0,0,1);
            INSERT(local_f0[0].GlowInfo._0_4_,0,0,1);
            local_f0[0].GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
            local_f0[0].GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
            local_f0[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
            local_f0[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
            local_f0[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
            local_f0[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
            fVar13 = (float)local_148._s_0.Y;
            dVar14 = (double)fVar13 - local_148._s_0.Y;
            if ((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar6,
                                          SUB84(dVar14,0) & uVar5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FloatFitsIn<OutType>(In, Precision)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            fVar18 = (float)local_148._s_0.X;
            dVar14 = (double)fVar18 - local_148._s_0.X;
            uVar15 = SUB84(dVar14,0) & uVar5;
            uVar16 = (uint)((ulonglong)dVar14 >> 0x20) & uVar6;
            if ((dVar8 <= (double)CONCAT44(uVar16,uVar15) &&
                 (double)CONCAT44(uVar16,uVar15) != dVar8) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FloatFitsIn<OutType>(In, Precision)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_178.DataPtr = *(wchar_t **)&pFVar11[0x18].field_0x0;
            iVar10 = *(int *)(pFVar11 + 0x20) + -1;
            if (*(int *)(pFVar11 + 0x20) == 0) {
              iVar10 = 0;
            }
            local_178._12_4_ = uStack_18c;
            local_178.Size = iVar10;
            UCanvas::DrawText(param_1,this_00,&local_178,fVar18,fVar13,fVar3,fVar3,local_f0);
          }
        }
        iVar12 = iVar12 + 1;
        pFVar11 = pFVar11 + 0x28;
      } while (iVar12 < (this->DebugLabels).ArrayNum);
    }
    UCanvas::SetDrawColor(param_1,(FColor *)&local_res10[0]._s_0);
  }
  return;
}

// SetupFromProxy @ 146e29750

void __thiscall
FNavMeshDebugDrawDelegateHelper::SetupFromProxy
          (FNavMeshDebugDrawDelegateHelper *this,FNavMeshSceneProxy *param_1)

{
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FDebugText *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  pTVar1 = &this->DebugLabels;
  piVar2 = &(this->DebugLabels).ArrayMax;
  iVar5 = (this->DebugLabels).ArrayNum;
  piVar3 = &(this->DebugLabels).ArrayNum;
  pFVar6 = (FDebugText *)(pTVar1->AllocatorInstance).Data;
  if ((this->DebugLabels).ArrayMax < 0) {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar6,iVar5);
    *piVar3 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar6,iVar5);
    *piVar3 = 0;
  }
  pTVar4 = &(param_1->ProxyData).DebugLabels;
  if (pTVar1 == pTVar4) {
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
  iVar5 = (param_1->ProxyData).DebugLabels.ArrayNum;
  if (iVar5 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar5,&pTVar1->AllocatorInstance,piVar3,piVar2);
    ConstructItems<FNavMeshSceneProxyData::FDebugText,FNavMeshSceneProxyData::FDebugText,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x28,
               (FDebugText *)(pTVar4->AllocatorInstance).Data,iVar5);
  }
  uVar10 = (this->bForceRendering ^ param_1->bForceRendering) & 1 ^ *(uint *)&this->field_0x78;
  *(uint *)&this->field_0x78 = uVar10;
  *(uint *)&this->field_0x78 = (uVar10 ^ *(uint *)&(param_1->ProxyData).field_0x120) & 2 ^ uVar10;
  return;
}

