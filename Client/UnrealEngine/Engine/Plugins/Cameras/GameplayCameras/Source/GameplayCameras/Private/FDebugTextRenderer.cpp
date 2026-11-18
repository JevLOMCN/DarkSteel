// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// FDebugTextRenderer @ 14d58e770

FDebugTextRenderer * __thiscall
UE::Cameras::FDebugTextRenderer::FDebugTextRenderer
          (FDebugTextRenderer *this,FCanvas *param_1,FColor *param_2,UFont *param_3)

{
  float fVar1;
  
  this->bEndWithNewLine = false;
  this->Canvas = param_1;
  (this->DrawColor).field0_0x0 = param_2->field0_0x0;
  this->Font = param_3;
  this->RightMargin = 0.0;
  fVar1 = UFont::GetMaxCharHeight(param_3);
  this->LineSpacing = fVar1;
  this->LeftMargin = 0.0;
  return this;
}

// AddDrawCommand @ 14d5980b0

void __thiscall
UE::Cameras::FDebugTextRenderer::AddDrawCommand
          (FDebugTextRenderer *this,wchar_t *param_1,wchar_t *param_2,bool param_3,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_2c;
  
  iVar6 = (int)((longlong)param_2 - (longlong)param_1 >> 1);
  if (iVar6 != 0) {
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar5 + 1;
    pFVar4 = (param_4->AllocatorInstance).Data;
    pFVar1 = pFVar4 + (longlong)iVar5 * 0x18;
    *(wchar_t **)pFVar1 = param_1;
    *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_2c,iVar6);
    pFVar4[(longlong)iVar5 * 0x18 + 0x10] = (FScriptContainerElement)0x0;
  }
  if (param_3) {
    iVar6 = param_4->ArrayNum;
    fVar2 = this->LineSpacing;
    fVar3 = this->LeftMargin;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      param_4->ArrayNum = iVar6;
    }
    lVar7 = (longlong)iVar6;
    param_4->ArrayNum = iVar6 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(float *)(pFVar1 + lVar7 * 0x18) = fVar2;
    *(float *)(pFVar1 + lVar7 * 0x18 + 4) = fVar3;
    pFVar1[lVar7 * 0x18 + 0x10] = (FScriptContainerElement)0x1;
  }
  return;
}

// AddTokenCommand @ 14d598a40

void __thiscall
UE::Cameras::FDebugTextRenderer::AddTokenCommand
          (FDebugTextRenderer *this,wchar_t *param_1,wchar_t *param_2,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FColor_u_0_s_0 *pFVar6;
  ForAnyElementType FVar7;
  FColor_u_0 FVar8;
  longlong lVar9;
  FColor_u_0 *pFVar10;
  FColor_u_0 local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_18,param_1,(int)((longlong)param_2 - (longlong)param_1 >> 1));
  if (&local_28 != pFVar5) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (FCameraDebugColors::ColorMap._8_4_ == FCameraDebugColors::ColorMap._52_4_) {
    FCameraDebugColors::UpdateColorMap(&FCameraDebugColors::CurrentColorScheme);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar7.Data);
  iVar4 = TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
                      *)&FCameraDebugColors::ColorMap,uVar3,&local_28);
  if (iVar4 != -1) {
    lVar9 = (longlong)iVar4 * 0x20 + FCameraDebugColors::ColorMap._0_8_;
    pFVar10 = (FColor_u_0 *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar10 = (FColor_u_0 *)0x0;
    }
    if (pFVar10 != (FColor_u_0 *)0x0) {
      FVar8 = *pFVar10;
      goto LAB_14d598b7a;
    }
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar2 = FColorList::IsValidColorName(&GColorList,(wchar_t *)FVar7.Data);
  if (bVar2) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar6 = (FColor_u_0_s_0 *)FColorList::GetFColorByName(&GColorList,(wchar_t *)FVar7.Data);
    FVar8._s_0 = *pFVar6;
  }
  else {
    FColor::InitFromString((FColor *)&local_res10[0]._s_0,&local_28);
    FVar8 = local_res10[0];
  }
LAB_14d598b7a:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  pFVar1 = (param_3->AllocatorInstance).Data;
  *(FColor_u_0 *)(pFVar1 + (longlong)iVar4 * 0x18) = FVar8;
  pFVar1[(longlong)iVar4 * 0x18 + 0x10] = (FScriptContainerElement)0x2;
  return;
}

// ExecuteCommands @ 14d5a3820

/* WARNING: Removing unreachable block (ram,0x00014d5a394d) */
/* WARNING: Removing unreachable block (ram,0x00014d5a3972) */
/* WARNING: Removing unreachable block (ram,0x00014d5a39a5) */
/* WARNING: Removing unreachable block (ram,0x00014d5a39ca) */
/* WARNING: Removing unreachable block (ram,0x00014d5a3906) */
/* WARNING: Removing unreachable block (ram,0x00014d5a392b) */

void __thiscall
UE::Cameras::FDebugTextRenderer::ExecuteCommands
          (FDebugTextRenderer *this,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  wchar_t *pwVar1;
  TVector2<float>_u_0_s_0 TVar2;
  uchar uVar3;
  wchar_t wVar4;
  FColor_u_0_s_0 FVar5;
  UFont *this_00;
  FCanvas *this_01;
  wchar_t wVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ulonglong uVar10;
  FColor_u_0_s_0 *pFVar11;
  wchar_t *pwVar12;
  FColor_u_0_s_0 *pFVar13;
  float fVar14;
  undefined1 local_res8 [8];
  TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
  *local_res10;
  undefined1 local_res18 [16];
  float local_318;
  uint local_314;
  FColor_u_0 local_310;
  FLinearColor_u_0 local_30c;
  float local_2fc;
  FColor_u_0_s_0 *local_2f8;
  FText local_2f0;
  TStringView<wchar_t> local_2d8;
  TVector2<double>_u_0 local_2c8;
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  FCanvasTextItem local_2a8;
  
  fVar8 = __real_3b808081;
  fVar7 = __real_bf000000;
  local_310 = (this->DrawColor).field0_0x0;
  pFVar13 = (FColor_u_0_s_0 *)(param_1->AllocatorInstance).Data;
  local_314 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_314;
  pFVar11 = pFVar13 + uVar10 * 6;
  local_res10 = param_1;
  local_2f8 = pFVar11;
  while( true ) {
    if (local_res10->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar11) break;
    uVar3 = pFVar13[4].B;
    if (uVar3 == '\0') {
      local_2d8.DataPtr = *(wchar_t **)pFVar13;
      local_2d8._8_8_ = *(undefined8 *)(pFVar13 + 2);
      this_00 = this->Font;
      this_01 = this->Canvas;
      FText::FromStringView(&local_2f0,&local_2d8);
      local_30c._s_0.R = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.R];
      local_30c._s_0.G = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.G];
      local_30c._s_0.B = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.B];
      TVar2 = (this->NextDrawPosition).field0_0x0._s_0;
      local_2c8._s_0.X = (double)TVar2.X;
      local_2c8._s_0.Y = (double)TVar2.Y;
      local_30c._s_0.A = (float)(this->DrawColor).field0_0x0._s_0.A * fVar8;
      FCanvasTextItem::FCanvasTextItem
                (&local_2a8,(TVector2<double> *)&local_2c8._s_0,&local_2f0,this_00,
                 (FLinearColor *)&local_30c._s_0);
      local_2a8._padding_._4_4_ = 2;
      FCanvas::DrawItem(this_01,(FCanvasItem *)&local_2a8);
      pwVar12 = *(wchar_t **)pFVar13;
      uStack_2b0 = *(undefined8 *)(pFVar13 + 2);
      fVar14 = 0.0;
      pwVar1 = pwVar12 + (int)*(undefined8 *)(pFVar13 + 2);
      wVar6 = L'\0';
      local_2b8 = pwVar12;
      for (; pwVar12 != pwVar1; pwVar12 = pwVar12 + 1) {
        wVar4 = *pwVar12;
        UFont::GetCharSize(this_00,wVar4,&local_318,&local_2fc);
        cVar9 = '\0';
        if (wVar6 != L'\0') {
          cVar9 = UFont::GetCharKerning(this_00,wVar6,wVar4);
        }
        fVar14 = fVar14 + (float)(int)cVar9 + local_318;
        pFVar11 = local_2f8;
        wVar6 = wVar4;
      }
      (this->NextDrawPosition).field0_0x0._s_0.X =
           (this->NextDrawPosition).field0_0x0._s_0.X -
           (float)((int)ROUND(fVar7 - (fVar14 + fVar14)) >> 1);
      FCanvasTextItem::~FCanvasTextItem(&local_2a8);
      if (local_2f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
      }
      fVar14 = (this->NextDrawPosition).field0_0x0._s_0.X;
      if (fVar14 <= this->RightMargin) {
        fVar14 = this->RightMargin;
      }
      pFVar13 = pFVar13 + 6;
      uVar10 = (ulonglong)local_314;
      this->RightMargin = fVar14;
    }
    else if (uVar3 == '\x01') {
      fVar14 = (this->NextDrawPosition).field0_0x0._s_0.Y;
      uVar10 = (ulonglong)local_314;
      (this->NextDrawPosition).field0_0x0._s_0.X = (float)pFVar13[1];
      FVar5 = *pFVar13;
      pFVar13 = pFVar13 + 6;
      (this->NextDrawPosition).field0_0x0._s_0.Y = fVar14 + (float)FVar5;
    }
    else if (uVar3 == '\x02') {
      FVar5 = *pFVar13;
      pFVar13 = pFVar13 + 6;
      uVar10 = (ulonglong)local_314;
      (this->DrawColor).field0_0x0._s_0 = FVar5;
    }
    else {
      local_res18[0] = 0;
      `UE::Cameras::FDebugTextRenderer::ExecuteCommands'::__l8::<lambda_1>::operator()(local_res18);
      pFVar13 = pFVar13 + 6;
      uVar10 = (ulonglong)local_314;
    }
  }
  (this->DrawColor).field0_0x0 = local_310;
  return;
}

// ExecuteCommands @ 14d5a3bb0

void __thiscall
UE::Cameras::FDebugTextRenderer::ExecuteCommands
          (FDebugTextRenderer *this,float param_1,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TVector2<float>_u_0 TVar1;
  
  TVar1._s_0.Y = param_1;
  TVar1._s_0.X = this->LeftMargin;
  (this->NextDrawPosition).field0_0x0 = TVar1;
  ExecuteCommands(this,param_2);
  return;
}

// ExecuteCommands @ 14d5a3be0

void __thiscall
UE::Cameras::FDebugTextRenderer::ExecuteCommands
          (FDebugTextRenderer *this,TVector2<float> param_1,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  (this->NextDrawPosition).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  ExecuteCommands(this,param_2);
  return;
}

// GetStringViewSize @ 14d5ab3f0

float __cdecl
UE::Cameras::FDebugTextRenderer::GetStringViewSize(UFont *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  char cVar4;
  wchar_t *pwVar5;
  float fVar6;
  float local_res10 [2];
  float local_res18 [2];
  
  pwVar5 = param_2->DataPtr;
  fVar6 = 0.0;
  pwVar1 = pwVar5 + param_2->Size;
  wVar3 = L'\0';
  for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 1) {
    wVar2 = *pwVar5;
    UFont::GetCharSize(param_1,wVar2,local_res10,local_res18);
    cVar4 = '\0';
    if (wVar3 != L'\0') {
      cVar4 = UFont::GetCharKerning(param_1,wVar3,wVar2);
    }
    fVar6 = fVar6 + (float)(int)cVar4 + local_res10[0];
    wVar3 = wVar2;
  }
  return (float)-((int)ROUND(__real_bf000000 - (fVar6 + fVar6)) >> 1);
}

// InterpretColor @ 14d5b4430

FColor __thiscall
UE::Cameras::FDebugTextRenderer::InterpretColor(FDebugTextRenderer *this,FString *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FColor_u_0 *pFVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString *in_R8;
  FColor_u_0 local_res18 [2];
  
  if (FCameraDebugColors::ColorMap._8_4_ == FCameraDebugColors::ColorMap._52_4_) {
    FCameraDebugColors::UpdateColorMap(&FCameraDebugColors::CurrentColorScheme);
  }
  iVar3 = (in_R8->Data).ArrayNum;
  pwVar8 = L"";
  if (iVar3 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar3 = TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
                      *)&FCameraDebugColors::ColorMap,uVar2,in_R8);
  if (iVar3 == -1) {
LAB_14d5b44be:
    if ((in_R8->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
    }
    bVar1 = FColorList::IsValidColorName(&GColorList,pwVar7);
    if (bVar1) {
      if ((in_R8->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
      }
      pFVar4 = &FColorList::GetFColorByName(&GColorList,pwVar8)->field0_0x0;
      *(FColor_u_0 *)&(param_1->Data).AllocatorInstance.Data = *pFVar4;
      goto LAB_14d5b450b;
    }
    FColor::InitFromString((FColor *)&local_res18[0]._s_0,in_R8);
  }
  else {
    lVar6 = (longlong)iVar3 * 0x20 + FCameraDebugColors::ColorMap._0_8_;
    pFVar4 = (FColor_u_0 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      pFVar4 = (FColor_u_0 *)0x0;
    }
    if (pFVar4 == (FColor_u_0 *)0x0) goto LAB_14d5b44be;
    local_res18[0] = *pFVar4;
  }
  *(FColor_u_0 *)&(param_1->Data).AllocatorInstance.Data = local_res18[0];
LAB_14d5b450b:
  return (FColor)SUB84(param_1,0);
}

// ParseText @ 14d5c42f0

void __thiscall
UE::Cameras::FDebugTextRenderer::ParseText
          (FDebugTextRenderer *this,TStringView<wchar_t> *param_1,
          TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  bool bVar9;
  wchar_t *pwVar10;
  undefined4 uStack_1c;
  
  pwVar8 = param_1->DataPtr;
  pwVar1 = pwVar8 + param_1->Size;
  do {
    bVar9 = false;
    pwVar10 = pwVar8;
LAB_14d5c4320:
    if ((pwVar8 == pwVar1) || (*pwVar8 == L'\0')) {
      bVar4 = true;
LAB_14d5c433d:
      bVar5 = bVar4;
      bVar4 = false;
    }
    else {
      bVar5 = false;
      bVar4 = false;
      if (*pwVar8 != L'\n') goto LAB_14d5c433d;
      bVar4 = true;
    }
    if (!bVar9) {
      if (bVar4) {
LAB_14d5c43bc:
        AddDrawCommand(this,pwVar10,pwVar8,true,param_2);
        if (bVar5) {
          return;
        }
        pwVar8 = pwVar8 + 1;
        pwVar10 = pwVar8;
      }
      else {
        if (bVar5) {
          if (this->bEndWithNewLine == false) {
            bVar9 = false;
            goto LAB_14d5c442b;
          }
          goto LAB_14d5c43bc;
        }
        if (*pwVar8 != L'{') goto LAB_14d5c440f;
        iVar6 = (int)((longlong)pwVar8 - (longlong)pwVar10 >> 1);
        if (iVar6 != 0) {
          iVar7 = param_2->ArrayNum;
          if (iVar7 == param_2->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar7 + 1;
          pFVar3 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
          *(wchar_t **)pFVar2 = pwVar10;
          *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_1c,iVar6);
          pFVar3[(longlong)iVar7 * 0x18 + 0x10] = (FScriptContainerElement)0x0;
        }
        pwVar8 = pwVar8 + 1;
        bVar9 = true;
        pwVar10 = pwVar8;
      }
      goto LAB_14d5c4320;
    }
    if (*pwVar8 != L'}') {
      if (!bVar4) {
        if (!bVar5) {
LAB_14d5c440f:
          pwVar8 = pwVar8 + 1;
          goto LAB_14d5c4320;
        }
        if (this->bEndWithNewLine == false) {
          bVar9 = false;
          goto LAB_14d5c442b;
        }
      }
      bVar9 = true;
LAB_14d5c442b:
      AddDrawCommand(this,pwVar10,pwVar8,bVar9,param_2);
      return;
    }
    AddTokenCommand(this,pwVar10,pwVar8,param_2);
    pwVar8 = pwVar8 + 1;
  } while( true );
}

// RenderText @ 14d5cba30

void __thiscall
UE::Cameras::FDebugTextRenderer::RenderText
          (FDebugTextRenderer *this,float param_1,TStringView<wchar_t> *param_2)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
  local_28;
  TStringView<wchar_t> local_18;
  
  fVar1 = this->LeftMargin;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ParseText(this,&local_18,&local_28);
  TVar2._s_0.Y = param_1;
  TVar2._s_0.X = fVar1;
  (this->NextDrawPosition).field0_0x0 = TVar2;
  ExecuteCommands(this,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// RenderText @ 14d5cbaa0

void __thiscall
UE::Cameras::FDebugTextRenderer::RenderText
          (FDebugTextRenderer *this,TVector2<float> param_1,TStringView<wchar_t> *param_2)

{
  TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
  local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ParseText(this,&local_18,&local_28);
  (this->NextDrawPosition).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  ExecuteCommands(this,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// UpdateRightMargin @ 14d5d43a0

void __thiscall UE::Cameras::FDebugTextRenderer::UpdateRightMargin(FDebugTextRenderer *this)

{
  float fVar1;
  
  fVar1 = (this->NextDrawPosition).field0_0x0._s_0.X;
  if (fVar1 <= this->RightMargin) {
    fVar1 = this->RightMargin;
  }
  this->RightMargin = fVar1;
  return;
}

// operator() @ 150583190

bool __thiscall
`UE::Cameras::FDebugTextRenderer::ExecuteCommands'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7078187557862768793>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7078187557862768793>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

