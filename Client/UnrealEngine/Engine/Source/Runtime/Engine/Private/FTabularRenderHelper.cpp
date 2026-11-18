// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddCol @ 147690a20

/* WARNING: Removing unreachable block (ram,0x000147690c5e) */

void __thiscall
Audio::FTabularRenderHelper::AddCol(FTabularRenderHelper *this,FString *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  int local_res8 [2];
  int local_res18 [2];
  FScriptContainerElement *local_98;
  undefined4 uStack_8c;
  FString local_88;
  TStringView<wchar_t> local_78;
  ForAnyElementType local_68;
  undefined8 local_60;
  int local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_2 == 0) && (iVar4 = (param_1->Data).ArrayNum, param_2 = iVar4 + -1, iVar4 == 0)) {
    param_2 = 0;
  }
  pFVar5 = ::FString::LeftPad(param_1,&local_88,param_2);
  if (param_1 != pFVar5) {
    pFVar7 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum == 0) {
    local_98 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_98 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = 0;
    if (local_98 == (FScriptContainerElement *)0x0) goto LAB_147690ad6;
  }
  sVar6 = wcslen((wchar_t *)local_98);
  iVar4 = (int)sVar6;
LAB_147690ad6:
  local_78._12_4_ = uStack_8c;
  local_78.Size = iVar4;
  local_78.DataPtr = (wchar_t *)local_98;
  StringSize(this->Font,local_res18,local_res8,&local_78);
  iVar4 = (param_1->Data).ArrayNum;
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  if (iVar4 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,&local_68,iVar4,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,pFVar7,(longlong)iVar4 * 2);
  }
  pFVar7 = (this->Cols).AllocatorInstance.Data;
  local_58 = local_res18[0];
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)(this->Cols).ArrayMax * 0x38)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->Cols).ArrayNum;
  piVar1 = &(this->Cols).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)this,piVar1);
  }
  (this->Cols).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Cols).AllocatorInstance.Data + (longlong)iVar4 * 0x38;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data;
  *(undefined4 *)(pFVar7 + 8) = (undefined4)local_60;
  *(undefined4 *)(pFVar7 + 0xc) = local_60._4_4_;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(int *)(pFVar7 + 0x10) = local_58;
  *(void **)(pFVar7 + 0x18) = local_50;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(undefined8 *)(pFVar7 + 0x28) = 0;
  *(undefined8 *)(pFVar7 + 0x28) = local_40;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_38;
  *(undefined4 *)(pFVar7 + 0x34) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// AddRow @ 147692f90

void __thiscall
Audio::FTabularRenderHelper::AddRow
          (FTabularRenderHelper *this,
          TArray<Audio::FTabularRenderHelper::FItem,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (this->Cols).ArrayNum)) {
        uVar9 = ~uVar7 >> 0x1f;
        if (((int)uVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->Cols).AllocatorInstance.Data + lVar12 + 0x18;
        uVar5 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar11;
        if (((*(FScriptContainerElement **)&pFVar10->field_0x0 <= pFVar8) &&
            (pFVar8 < *(FScriptContainerElement **)&pFVar10->field_0x0 +
                      (longlong)*(int *)(pFVar10 + 0xc) * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)&pFVar10[8].field_0x0;
        if (iVar6 == *(int *)(pFVar10 + 0xc)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
        }
        *(int *)&pFVar10[8].field_0x0 = iVar6 + 1;
        ::FString::FString((FString *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 0x10),
                           (FString *)pFVar8);
        uVar5 = 0;
        if ((int)uVar7 < (this->Cols).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->Cols).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + lVar11 + 0x10;
        if (((*(FScriptContainerElement **)(pFVar10 + lVar12 + 0x28) <= pFVar8) &&
            (pFVar8 < *(FScriptContainerElement **)(pFVar10 + lVar12 + 0x28) +
                      (longlong)*(int *)(pFVar10 + lVar12 + 0x34) * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)(pFVar10 + lVar12 + 0x30);
        if (iVar6 == *(int *)(pFVar10 + lVar12 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)(pFVar10 + lVar12 + 0x28),
                             (int *)(pFVar10 + lVar12 + 0x34));
        }
        *(int *)(pFVar10 + lVar12 + 0x30) = iVar6 + 1;
        uVar3 = *(undefined8 *)(pFVar8 + 8);
        puVar1 = (undefined8 *)(*(longlong *)(pFVar10 + lVar12 + 0x28) + (longlong)iVar6 * 0x10);
        *puVar1 = *(undefined8 *)pFVar8;
        puVar1[1] = uVar3;
      }
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + 0x38;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// Draw @ 1476a4ed0

void __thiscall
Audio::FTabularRenderHelper::Draw
          (FTabularRenderHelper *this,FCanvas *param_1,int param_2,int param_3)

{
  int iVar1;
  UFont *pUVar2;
  float fVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res8 [8];
  FCanvas *local_res10;
  int local_res18;
  int local_res20;
  int local_a8;
  uint local_a4;
  int local_a0;
  FLinearColor_u_0 local_9c;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68 [2];
  
  fVar3 = __real_3b808081;
  pFVar7 = (this->Cols).AllocatorInstance.Data;
  local_9c._s_0.R = FLinearColor::sRGBToLinearTable[(this->HeaderColor).field0_0x0._s_0.R];
  local_9c._s_0.G = FLinearColor::sRGBToLinearTable[(this->HeaderColor).field0_0x0._s_0.G];
  local_9c._s_0.B = FLinearColor::sRGBToLinearTable[(this->HeaderColor).field0_0x0._s_0.B];
  local_a4 = (this->Cols).ArrayNum;
  uVar6 = (ulonglong)(int)local_a4;
  pFVar8 = pFVar7 + uVar6 * 0x38;
  local_9c._s_0.A = (float)(this->HeaderColor).field0_0x0._s_0.A * __real_3b808081;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  do {
    if ((this->Cols).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<Audio::FTabularRenderHelper::FCol_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      fVar9 = UFont::GetMaxCharHeight(this->Font);
      local_9c._s_0.R = FLinearColor::sRGBToLinearTable[(this->RowColor).field0_0x0._s_0.R];
      local_9c._s_0.G = FLinearColor::sRGBToLinearTable[(this->RowColor).field0_0x0._s_0.G];
      local_9c._s_0.B = FLinearColor::sRGBToLinearTable[(this->RowColor).field0_0x0._s_0.B];
      local_9c._s_0.A = (float)(this->RowColor).field0_0x0._s_0.A * fVar3;
      DrawRows(this,param_1,local_res18,(int)(fVar9 + (float)local_res20),
               (FLinearColor *)&local_9c._s_0);
      return;
    }
    iVar1 = *(int *)(pFVar7 + 0x10);
    if (*(int *)(pFVar7 + 8) == 0) {
      local_88 = L"";
LAB_1476a4fb5:
      _Str = local_88;
      sVar5 = wcslen(local_88);
      iVar4 = (int)sVar5;
    }
    else {
      _Str = *(wchar_t **)pFVar7;
      iVar4 = 0;
      local_88 = _Str;
      if (_Str != (wchar_t *)0x0) goto LAB_1476a4fb5;
    }
    local_68[0]._12_4_ = uStack_7c;
    local_68[0].Size = iVar4;
    local_68[0].DataPtr = local_88;
    iStack_80 = iVar4;
    StringSize(this->Font,&local_a8,&local_a0,local_68);
    pUVar2 = this->Font;
    iVar4 = 0;
    local_78 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar4 = (int)sVar5;
    }
    param_1 = local_res10;
    local_68[0]._12_4_ = uStack_6c;
    local_68[0].Size = iVar4;
    local_68[0].DataPtr = local_78;
    iStack_70 = iVar4;
    FCanvas::DrawShadowedString
              (local_res10,(double)((iVar1 - local_a8) + param_2),(double)local_res20,local_68,
               pUVar2,(FLinearColor *)&local_9c._s_0,&FLinearColor::Black);
    param_2 = param_2 + *(int *)(pFVar7 + 0x10);
    uVar6 = (ulonglong)local_a4;
    pFVar7 = pFVar7 + 0x38;
  } while( true );
}

// DrawRows @ 1476a5e60

void __thiscall
Audio::FTabularRenderHelper::DrawRows
          (FTabularRenderHelper *this,FCanvas *param_1,int param_2,int param_3,FLinearColor *param_4
          )

{
  undefined8 *puVar1;
  int iVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  UFont *pUVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  int local_res20;
  undefined1 local_a8 [4];
  int local_a4;
  uint local_a0;
  int local_9c;
  FScriptContainerElement *local_98;
  ulonglong local_90;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FLinearColor_u_0 local_58;
  TStringView<wchar_t> local_48;
  
  TVar3 = (param_1->ParentSize).field0_0x0._s_0;
  iVar11 = 0;
  local_90 = (ulonglong)TVar3 >> 0x20;
  if (param_3 < TVar3.Y) {
    lVar14 = 0;
    local_res20 = param_3;
    do {
      local_a0 = (this->Cols).ArrayNum;
      uVar10 = (ulonglong)(int)local_a0;
      pFVar12 = (this->Cols).AllocatorInstance.Data;
      local_98 = pFVar12 + uVar10 * 0x38;
      iVar13 = param_2;
      while( true ) {
        pFVar6 = local_98;
        if ((this->Cols).ArrayNum != (int)uVar10) {
          local_a8[0] = 0;
          `TCheckedPointerIterator<Audio::FTabularRenderHelper::FCol_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_a8);
        }
        if (pFVar12 == pFVar6) break;
        if ((iVar11 < 0) || (*(int *)(pFVar12 + 0x30) <= iVar11)) {
          local_58._0_8_ = *(undefined8 *)&param_4->field0_0x0;
          local_58._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
          if (-1 < iVar11) goto LAB_1476a5f72;
        }
        else {
          if ((iVar11 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar1 = (undefined8 *)(*(longlong *)(pFVar12 + 0x28) + (longlong)iVar11 * 0x10);
          local_58._0_8_ = *puVar1;
          local_58._8_8_ = puVar1[1];
LAB_1476a5f72:
          if (iVar11 < *(int *)(pFVar12 + 0x20)) {
            if ((iVar11 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar2 = *(int *)(pFVar12 + 0x10);
            if (*(int *)(*(longlong *)(pFVar12 + 0x18) + 8 + lVar14) == 0) {
              local_88 = L"";
LAB_1476a5fdf:
              _Str = local_88;
              sVar9 = wcslen(local_88);
              iVar8 = (int)sVar9;
            }
            else {
              _Str = *(wchar_t **)(*(longlong *)(pFVar12 + 0x18) + lVar14);
              iVar8 = 0;
              local_88 = _Str;
              if (_Str != (wchar_t *)0x0) goto LAB_1476a5fdf;
            }
            local_78._12_4_ = uStack_7c;
            local_78.Size = iVar8;
            local_78.DataPtr = local_88;
            iStack_80 = iVar8;
            StringSize(this->Font,&local_a4,&local_9c,&local_78);
            pUVar4 = this->Font;
            iVar8 = 0;
            local_68 = _Str;
            if (_Str != (wchar_t *)0x0) {
              sVar9 = wcslen(_Str);
              iVar8 = (int)sVar9;
            }
            local_48._12_4_ = uStack_5c;
            local_48.Size = iVar8;
            local_48.DataPtr = local_68;
            iStack_60 = iVar8;
            FCanvas::DrawShadowedString
                      (param_1,(double)((iVar2 - local_a4) + iVar13),(double)local_res20,&local_48,
                       pUVar4,(FLinearColor *)&local_58._s_0,&FLinearColor::Black);
          }
        }
        iVar13 = iVar13 + *(int *)(pFVar12 + 0x10);
        pFVar12 = pFVar12 + 0x38;
        uVar10 = (ulonglong)local_a0;
      }
      fVar15 = UFont::GetMaxCharHeight(this->Font);
      iVar11 = iVar11 + 1;
      lVar14 = lVar14 + 0x10;
      local_res20 = (int)(fVar15 + (float)local_res20);
    } while (local_res20 < (int)local_90);
  }
  return;
}

