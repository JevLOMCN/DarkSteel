// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Draw @ 14928cbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGraph<double>::Draw(FGraph<double> *this,FLinearColor *param_1,FLinearColor *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  HHitProxy *pHVar6;
  UFont *pUVar7;
  double dVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined4 uVar11;
  FBatchedElements *this_00;
  size_t sVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FHitProxyId FVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  TVector<double>_u_0 local_188;
  FLinearColor_u_0 local_168;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  FString local_138;
  FLinearColor_u_0 local_128;
  TVector<double>_u_0 local_118;
  FDepthFieldGlowInfo local_100 [3];
  
  fVar16 = UFont::GetMaxCharHeight(this->Font);
  fVar1 = this->EstYAxisLabelWidth;
  fVar2 = (this->Size).field0_0x0._s_0.Y;
  fVar16 = fVar16 + __real_3f800000;
  fVar3 = (this->Location).field0_0x0._s_0.Y;
  fVar4 = (this->Location).field0_0x0._s_0.X;
  fVar18 = fVar2 + fVar3;
  fVar5 = (this->Size).field0_0x0._s_0.X;
  fVar20 = fVar4 + fVar1;
  FCanvas::DrawTile(this->Canvas,(double)fVar4,(double)(fVar3 - fVar16),
                    (double)(fVar5 + fVar1 + fVar1),(double)(fVar2 + fVar16 + fVar16),0.0,0.0,0.0,
                    0.0,param_2,(FTexture *)0x0,true);
  INSERT(local_100[0]._0_4_,0,0,1);
  local_100[0].GlowColor.field0_0x0._0_8_ = 0;
  local_100[0].GlowColor.field0_0x0._8_8_ = 0;
  local_100[0].GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_100[0].GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_100[0].GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_100[0].GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (this->Canvas,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,
                       SE_BLEND_MAX,local_100,true);
  FBatchedElements::AddReserveLines(this_00,7,false,false);
  fVar1 = __real_40400000;
  pHVar6 = (this->Canvas->CurrentHitProxy).Reference;
  if (pHVar6 == (HHitProxy *)0x0) {
    FVar15.Index = -1;
  }
  else {
    FVar15.Index = (pHVar6->Id).Index;
  }
  local_168._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_168._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pwVar9 = (wchar_t *)(double)fVar20;
  _uStack_150 = (undefined8)fVar3;
  dVar8 = (double)fVar18;
  local_188._s_0.Z = 0.0;
  local_148 = 0.0;
  local_188._s_0.X = (double)pwVar9;
  local_188._s_0.Y = dVar8;
  local_158 = pwVar9;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_158,(TVector<double> *)&local_188._s_0,
             (FLinearColor *)&local_168._s_0,FVar15,__real_40400000,0.0,false);
  local_188._s_0.Z = 0.0;
  local_188._s_0.X = (double)(fVar5 + fVar20);
  local_148 = 0.0;
  local_188._s_0.Y = dVar8;
  local_158 = pwVar9;
  _uStack_150 = dVar8;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_158,(TVector<double> *)&local_188._s_0,
             (FLinearColor *)&local_168._s_0,FVar15,fVar1,0.0,false);
  fVar5 = _UNK_15068962c;
  fVar4 = _UNK_150689628;
  fVar2 = _UNK_150689624;
  fVar1 = ___xmm_3f0000003f0000003f0000003f000000;
  iVar14 = 1;
  do {
    ::FString::SanitizeFloat
              (&local_138,
               (double)((this->MaxValues).field0_0x0._s_0.Y * __real_3e4ccccd * (float)iVar14),1);
    fVar16 = UFont::GetMaxCharHeight(this->Font);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar13.Data = local_138.Data.AllocatorInstance.Data;
    }
    iVar10 = UFont::GetStringSize(this->Font,(wchar_t *)FVar13.Data);
    local_128._s_0.R = local_168._s_0.R * fVar1;
    local_128._s_0.G = local_168._s_0.G * fVar2;
    local_128._s_0.B = local_168._s_0.B * fVar4;
    local_128._s_0.A = local_168._s_0.A * fVar5;
    local_188._s_0.Z = 0.0;
    fVar17 = (float)iVar14 * __real_3e4ccccd * (fVar3 - fVar18) + fVar18;
    local_118._s_0.Z = 0.0;
    local_188._s_0.X = (double)(fVar20 + (this->Size).field0_0x0._s_0.X);
    local_188._s_0.Y = (double)fVar17;
    local_118._0_8_ = pwVar9;
    local_118._s_0.Y = local_188._s_0.Y;
    FBatchedElements::AddLine
              (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_188._s_0,
               (FLinearColor *)&local_128._s_0,FVar15,__real_3f800000,0.0,false);
    pUVar7 = this->Font;
    fVar19 = (fVar20 - (float)iVar10) - __real_40000000;
    if (local_138.Data.ArrayNum == 0) {
      local_158 = L"";
LAB_14928cf84:
      sVar12 = wcslen(local_158);
      uVar11 = (undefined4)sVar12;
    }
    else {
      uVar11 = 0;
      local_158 = (wchar_t *)local_138.Data.AllocatorInstance.Data;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14928cf84;
    }
    uStack_150 = uVar11;
    local_188._s_0.X = (double)local_158;
    local_188._s_0.Y = (double)_uStack_150;
    FCanvas::DrawShadowedString
              (this->Canvas,(double)fVar19,(double)(fVar17 - fVar16 * fVar1),
               (TStringView<wchar_t> *)&local_188._s_0,pUVar7,(FLinearColor *)&local_168._s_0,
               &FLinearColor::Black);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    iVar14 = iVar14 + 1;
    if (5 < iVar14) {
      return;
    }
  } while( true );
}

// DrawLine @ 149294120

void __thiscall
FGraph<double>::DrawLine
          (FGraph<double> *this,FString *param_1,FLinearColor *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  double dVar2;
  HHitProxy *pHVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FBatchedElements *this_00;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  FHitProxyId FVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  FDepthFieldGlowInfo local_108 [3];
  
  if (param_3->ArrayNum == 0) {
    pFVar12 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    INSERT(local_108[0]._0_4_,0,0,1);
    local_108[0].GlowColor.field0_0x0._0_8_ = 0;
    local_108[0].GlowColor.field0_0x0._8_8_ = 0;
    local_108[0].GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_108[0].GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_108[0].GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_108[0].GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    this_00 = FCanvas::GetBatchedElements
                        (this->Canvas,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,
                         SE_BLEND_MAX,local_108,true);
    FBatchedElements::AddReserveLines(this_00,param_3->ArrayNum + -1,false,false);
    fVar8 = __real_3f800000;
    dVar7 = __real_3ff0000000000000;
    pHVar3 = (this->Canvas->CurrentHitProxy).Reference;
    if (pHVar3 == (HHitProxy *)0x0) {
      FVar16.Index = -1;
    }
    else {
      FVar16.Index = (pHVar3->Id).Index;
    }
    iVar13 = param_3->ArrayNum;
    fVar1 = (this->Location).field0_0x0._s_0.Y;
    fVar17 = fVar1 + (this->Size).field0_0x0._s_0.Y;
    fVar19 = this->EstYAxisLabelWidth + (this->Location).field0_0x0._s_0.X;
    fVar20 = (this->Size).field0_0x0._s_0.X / (float)iVar13;
    if (0 < iVar13 + -1) {
      lVar15 = 0;
      dVar5 = (double)(fVar1 - fVar17);
      dVar6 = (double)fVar17;
      uVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar14 < iVar13) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar14 + 1;
        dVar2 = *(double *)((param_3->AllocatorInstance).Data + lVar15);
        uVar11 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar15 = lVar15 + 8;
        dVar18 = dVar7 / (double)(this->MaxValues).field0_0x0._s_0.Y;
        local_138._s_0.Z = 0.0;
        local_120._s_0.Z = 0.0;
        local_138._s_0.X = (double)((float)(int)uVar10 * fVar20 + fVar19);
        local_138._s_0.Y =
             (double)(float)(dVar18 * *(double *)((param_3->AllocatorInstance).Data + lVar15) *
                             dVar5 + dVar6);
        local_120._s_0.X = (double)((float)(int)uVar14 * fVar20 + fVar19);
        local_120._s_0.Y = (double)(float)(dVar18 * dVar2 * dVar5 + dVar6);
        FBatchedElements::AddLine
                  (this_00,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0,
                   param_2,FVar16,fVar8,0.0,false);
        iVar13 = param_3->ArrayNum;
        uVar14 = uVar10;
      } while ((int)uVar10 < iVar13 + -1);
    }
    pFVar12 = (param_1->Data).AllocatorInstance.Data;
  }
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  return;
}

