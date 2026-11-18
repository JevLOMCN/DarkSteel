// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FCanvasNGonItem @ 148905d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCanvasNGonItem * __thiscall
FCanvasNGonItem::FCanvasNGonItem
          (FCanvasNGonItem *this,TVector2<double> *param_1,TVector2<double> *param_2,int param_3,
          FLinearColor *param_4)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  FLinearColor FVar4;
  bool bVar5;
  FCanvasNGonItem *pFVar6;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar4 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasNGonItem__6B_;
  this->TriListItem = (FCanvasTriangleItem *)0x0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  (this->TriangleList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleList).ArrayNum = 0;
  (this->TriangleList).ArrayMax = 0;
  this->Texture = GWhiteTexture;
  lVar3 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_4->field0_0x0;
  this->_padding_ = lVar3;
  if (param_3 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSides >= 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x705,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCanvasNGonItem *)(*pcVar1)();
      return pFVar6;
    }
  }
  TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_>::SetNum(&this->TriangleList,param_3,Default);
  SetupPosition(this,param_1,param_2);
  return this;
}

// ~FCanvasNGonItem @ 14890db70

void __thiscall FCanvasNGonItem::~FCanvasNGonItem(FCanvasNGonItem *this)

{
  FCanvasTriangleItem *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FCanvasNGonItem__6B_;
  pFVar1 = this->TriListItem;
  if (pFVar1 != (FCanvasTriangleItem *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar2 = (this->TriangleList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

// Draw @ 14892afe0

void __thiscall FCanvasNGonItem::Draw(FCanvasNGonItem *this,FCanvas *param_1)

{
  *(undefined4 *)((longlong)&this->TriListItem->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
                    /* WARNING: Could not recover jumptable at 0x00014892aff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TriListItem->_padding_ + 0x18))();
  return;
}

// SetColor @ 14897e6e0

void __thiscall FCanvasNGonItem::SetColor(FCanvasNGonItem *this,FLinearColor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014897e6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TriListItem->_padding_ + 0x20))();
  return;
}

// SetupPosition @ 148980100

void __thiscall
FCanvasNGonItem::SetupPosition
          (FCanvasNGonItem *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FTexture *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  FLinearColor FVar15;
  TVector2<double> TVar16;
  bool bVar17;
  uint uVar18;
  FCanvasTriangleItem *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  pFVar19 = this->TriListItem;
  if (pFVar19 != (FCanvasTriangleItem *)0x0) {
    (**(code **)pFVar19->_padding_)(pFVar19,1);
  }
  uVar20 = 0;
  dVar10 = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = (this->TriangleList).ArrayNum + 1;
  pTVar1 = &this->TriangleList;
  uVar21 = uVar20;
  if (1 < iVar6) {
    do {
      iVar7 = (int)uVar20;
      dVar11 = (param_1->field0_0x0)._s_0.X;
      dVar12 = (param_1->field0_0x0)._s_0.Y;
      uVar22 = -(iVar7 + 1U) >> 0x1f;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data + uVar21;
      *(double *)pFVar4 = dVar11;
      *(double *)(pFVar4 + 8) = dVar12;
      lVar13 = this->_padding_;
      lVar14 = this->_padding_;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data + uVar21 + 0x20;
      *(longlong *)pFVar4 = lVar13;
      *(longlong *)(pFVar4 + 8) = lVar14;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data + uVar21 + 0x30;
      *(double *)pFVar4 = dVar10;
      *(double *)(pFVar4 + 8) = dVar5;
      lVar13 = this->_padding_;
      lVar14 = this->_padding_;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data + uVar21 + 0x50;
      *(longlong *)pFVar4 = lVar13;
      *(longlong *)(pFVar4 + 8) = lVar14;
      __libm_sse2_sincosf_();
      dVar5 = (double)extraout_XMM0_Da * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y
      ;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      dVar10 = (double)extraout_XMM0_Db * (param_2->field0_0x0)._s_0.X +
               (param_1->field0_0x0)._s_0.X;
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar4 + uVar21 + 0x60) = dVar10;
      *(double *)(pFVar4 + uVar21 + 0x68) = dVar5;
      lVar13 = this->_padding_;
      lVar14 = this->_padding_;
      uVar18 = 0;
      if (iVar7 < (this->TriangleList).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar20 = (ulonglong)(iVar7 + 1U);
      pFVar4 = (pTVar1->AllocatorInstance).Data + uVar21 + 0x80;
      *(longlong *)pFVar4 = lVar13;
      *(longlong *)(pFVar4 + 8) = lVar14;
      uVar21 = uVar21 + 0x90;
    } while (iVar7 + 2 < iVar6);
  }
  pFVar19 = ::operator_new(0x68);
  TVar16 = UE::Math::TVector2<double>::ZeroVector;
  if (pFVar19 == (FCanvasTriangleItem *)0x0) {
    this->TriListItem = (FCanvasTriangleItem *)0x0;
  }
  else {
    pFVar8 = this->Texture;
    pTVar2 = &pFVar19->TriangleList;
    pFVar19->_padding_ = 0;
    piVar3 = &(pFVar19->TriangleList).ArrayMax;
    *(TVector2<double>_u_0 *)&pFVar19->_padding_ = (TVector2<double>_u_0_s_0)TVar16.field0_0x0;
    *(undefined1 *)&pFVar19->_padding_ = 0;
    pFVar19->_padding_ = 0;
    FVar15 = FLinearColor::White;
    pFVar19->Texture = pFVar8;
    pFVar19->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    *(FLinearColor_u_0 *)&pFVar19->_padding_ = (FLinearColor_u_0_s_0)FVar15.field0_0x0;
    pFVar19->BatchedElementParameters = (FBatchedElementParameters *)0x0;
    pFVar19->_padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar19->TriangleList).ArrayNum = 0;
    *piVar3 = 0;
    if (((this->TriangleList).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTriangleList.Num() >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CanvasItem.h"
                            ,0x394,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pTVar2 != pTVar1) {
      iVar6 = (this->TriangleList).ArrayNum;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      iVar7 = *piVar3;
      (pFVar19->TriangleList).ArrayNum = iVar6;
      if (iVar6 == 0) {
        if (iVar7 == 0) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,0,iVar7,&pTVar2->AllocatorInstance,0,piVar3);
        }
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,iVar6,iVar7,&pTVar2->AllocatorInstance,iVar6,piVar3);
        memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar6 * 0x90);
      }
    }
    if (((pFVar19->TriangleList).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (pFVar19->TriangleList).AllocatorInstance.Data;
    lVar13 = *(longlong *)(pFVar4 + 8);
    pFVar19->_padding_ = *(longlong *)pFVar4;
    pFVar19->_padding_ = lVar13;
    this->TriListItem = pFVar19;
  }
  return;
}

