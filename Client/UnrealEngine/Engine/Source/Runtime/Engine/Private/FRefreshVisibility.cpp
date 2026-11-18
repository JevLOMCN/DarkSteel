// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FRefreshVisibility @ 148805d50

FRefreshVisibility * __thiscall
RenderAssetInstanceTask::FRefreshVisibility::FRefreshVisibility
          (FRefreshVisibility *this,
          TDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>(&this->OnWorkDoneDelegate,param_1);
  (this->State).Reference = (FRenderAssetInstanceState *)0x0;
  this->BeginIndex = -1;
  this->EndIndex = -1;
  return this;
}

// operator() @ 148811bc0

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
RenderAssetInstanceTask::FRefreshVisibility::operator()(FRefreshVisibility *this,bool param_1)

{
  FRenderAssetInstanceState *pFVar1;
  UPrimitiveComponent *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UPrimitiveComponent *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  uVar9 = (ulonglong)this->BeginIndex;
  if (this->BeginIndex < this->EndIndex) {
    lVar10 = uVar9 * 8;
    do {
      pFVar1 = (this->State).Reference;
      uVar8 = (uint)uVar9;
      if (((int)uVar8 < 0) || ((pFVar1->Bounds4Components).ArrayNum <= (int)uVar8)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6552944750125646611>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x313,"Bounds4Components.IsValidIndex(BoundIndex)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (pFVar1->Bounds4Components).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(UPrimitiveComponent **)
                   ((pFVar1->Bounds4Components).AllocatorInstance.Data + lVar10);
        if (this_00 != (UPrimitiveComponent *)0x0) {
          uVar6 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 3U)) >> 2;
          uVar5 = 0;
          if ((int)uVar6 < (int)pFVar1->_padding_) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = pFVar1->_padding_;
          fVar11 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
          *(float *)(lVar2 + (longlong)(int)uVar6 * 0x150 + 0x140 + (ulonglong)(uVar8 & 3) * 4) =
               fVar11;
          pUVar7 = UPrimitiveComponent::GetLODParentPrimitive(this_00);
          if (pUVar7 != (UPrimitiveComponent *)0x0) {
            dVar13 = *(double *)&this_00->field_0x110 - *(double *)&pUVar7->field_0x110;
            dVar16 = *(double *)&this_00->field_0x118 - *(double *)&pUVar7->field_0x118;
            dVar12 = *(double *)&this_00->field_0x120 - *(double *)&pUVar7->field_0x120;
            auVar14._0_8_ = dVar13 * dVar13;
            auVar14._8_8_ = 0;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = dVar16 * dVar16 + auVar14._0_8_ + dVar12 * dVar12;
            auVar15 = sqrtpd(auVar14,auVar15);
            uVar5 = 0;
            if ((int)uVar6 < (int)pFVar1->_padding_) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            fVar11 = (float)(auVar15._0_8_ +
                            (double)((float)*(double *)&pUVar7->field_0x140 +
                                    pUVar7->MinDrawDistance));
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(float *)((longlong)(int)uVar6 * 0x150 + (ulonglong)(uVar8 & 3) * 4 + 0x130 +
                      pFVar1->_padding_) = fVar11 * fVar11;
          }
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar10 = lVar10 + 8;
    } while ((int)(uVar8 + 1) < this->EndIndex);
  }
  return;
}

// Init @ 148844f80

void __thiscall
RenderAssetInstanceTask::FRefreshVisibility::Init
          (FRefreshVisibility *this,FRenderAssetInstanceState *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  
  pFVar2 = (this->State).Reference;
  if (pFVar2 != param_1) {
    (this->State).Reference = param_1;
    if (param_1 != (FRenderAssetInstanceState *)0x0) {
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    }
    if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
      plVar1 = &pFVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  this->BeginIndex = param_2;
  this->EndIndex = param_3;
  return;
}

// Sync @ 14885b3d0

void __thiscall RenderAssetInstanceTask::FRefreshVisibility::Sync(FRefreshVisibility *this)

{
  int iVar1;
  int iVar2;
  FRenderAssetInstanceState *pFVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  iVar1 = this->EndIndex;
  iVar2 = this->BeginIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&(this->OnWorkDoneDelegate).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->OnWorkDoneDelegate).field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,iVar2,iVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar3 = (this->State).Reference;
  if (pFVar3 != (FRenderAssetInstanceState *)0x0) {
    (this->State).Reference = (FRenderAssetInstanceState *)0x0;
    plVar4 = &pFVar3->_padding_;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

