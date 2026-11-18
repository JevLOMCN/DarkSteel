// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// Add<float,float,float> @ 14d64bcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::TCameraDebugGraph<3>::Add<float,float,float>
          (TCameraDebugGraph<3> *this,float param_1,float param_2,float param_3,float param_4)

{
  TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  float *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar7 = (this->Entries).ArrayNum;
  pTVar1 = &this->Entries;
  if (iVar7 == 0) {
    local_58 = 0.0;
  }
  else {
    uVar8 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_88 = (float *)(longlong)(int)uVar8;
      local_80 = (FScriptContainerElement *)(longlong)iVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_58 = param_1 + *(float *)((pTVar1->AllocatorInstance).Data +
                                   (longlong)(this->Entries).ArrayNum * 0x10 + -0x10);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  fStack_4c = param_4;
  fStack_54 = param_2;
  fStack_50 = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
     (lVar9 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_58 < pFVar3 + lVar9 * 0x10)) {
    local_70 = (longlong)(this->Entries).ArrayNum;
    local_68 = 0x10;
    local_88 = &local_58;
    local_80 = pFVar3;
    local_78 = lVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar1->AllocatorInstance,piVar2);
    (this->Entries).ArrayNum = iVar7;
  }
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(fStack_54,local_58);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(fStack_4c,fStack_50);
  return;
}

// operator= @ 14d658700

TCameraDebugGraph<3> * __thiscall
UE::Cameras::TCameraDebugGraph<3>::operator=
          (TCameraDebugGraph<3> *this,TCameraDebugGraph<3> *param_1)

{
  TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Entries;
  this->CurrentMinValue = param_1->CurrentMinValue;
  this->CurrentMaxValue = param_1->CurrentMaxValue;
  if (pTVar1 != &param_1->Entries) {
    iVar3 = (this->Entries).ArrayMax;
    piVar2 = &(this->Entries).ArrayMax;
    _Src = (param_1->Entries).AllocatorInstance.Data;
    iVar4 = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  return this;
}

// Draw @ 14d65e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::TCameraDebugGraph<1>::Draw
          (TCameraDebugGraph<1> *this,FCanvas *param_1,FCameraDebugGraphDrawParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FLinearColor> FVar5;
  uint uVar6;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FScriptContainerElement *local_138;
  int iStack_130;
  int iStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  int iStack_11c;
  FLinearColor_u_0 local_118;
  float local_108;
  float local_104;
  TArrayView<float,int> local_f8;
  TStridedView<float,int> local_e8;
  TStridedView<float,int> local_d8;
  FCameraDebugGraphRenderer local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  Update(this,param_2->HistoryTime);
  Cameras::Internal::FCameraDebugGraphRenderer::FCameraDebugGraphRenderer(&local_c8,param_1,param_2)
  ;
  iVar1 = (this->Entries).ArrayNum;
  if (iVar1 == 0) {
    Cameras::Internal::FCameraDebugGraphRenderer::DrawEmptyFrame(&local_c8);
  }
  else {
    uVar6 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar6 < iVar1) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_148 = (longlong)(int)uVar6;
      local_140 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_130 = 1;
    local_138 = (this->Entries).AllocatorInstance.Data +
                (longlong)((this->Entries).ArrayNum + -1) * 8 + 4;
    local_f8._12_4_ = iStack_12c;
    local_f8.ArrayNum = 1;
    local_f8.DataPtr = (float *)local_138;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawFrame(&local_c8,&local_f8);
    local_138 = (this->Entries).AllocatorInstance.Data;
    iStack_12c = (this->Entries).ArrayNum;
    iStack_130 = 8;
    if (iStack_12c < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_120 = 8;
    iVar1 = (param_2->GraphLineColors).ArrayNum;
    if (iVar1 < 1) {
      local_148 = 0;
      local_140 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5 = (param_2->GraphLineColors).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FLinearColor>)0x0) {
      FVar5 = (ForElementType<FLinearColor>)&param_2->GraphLineColors;
    }
    iVar1 = (this->Entries).ArrayNum;
    if (iVar1 < 1) {
      local_148 = 0;
      local_140 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_128 = (this->Entries).AllocatorInstance.Data + 4;
    iStack_11c = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_118._0_8_ = *(undefined8 *)FVar5;
    local_118._8_8_ = *(undefined8 *)((longlong)FVar5 + 8);
    local_104 = this->CurrentMinValue;
    local_108 = this->CurrentMaxValue;
    local_d8.NumElements = iStack_12c;
    local_d8.BytesBetweenElements = iStack_130;
    local_e8.NumElements = iStack_11c;
    local_e8.BytesBetweenElements = iStack_120;
    local_d8.FirstElementPtr = (float *)local_138;
    local_e8.FirstElementPtr = (float *)local_128;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawGraphLine
              (&local_c8,(FLineDrawParams *)&local_118._s_0,&local_d8,&local_e8);
  }
  if (local_c8.DrawParams.GraphLineColors.AllocatorInstance.SecondaryData !=
      (ForElementType<FLinearColor>)0x0) {
    FMemory::Free((void *)local_c8.DrawParams.GraphLineColors.AllocatorInstance.SecondaryData);
  }
  if (local_c8.DrawParams.GraphName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.DrawParams.GraphName.TextData.Reference + 0x10))();
  }
  return;
}

// Draw @ 14d65e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::TCameraDebugGraph<3>::Draw
          (TCameraDebugGraph<3> *this,FCanvas *param_1,FCameraDebugGraphDrawParams *param_2)

{
  TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ForElementType<FLinearColor> FVar10;
  uint uVar11;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  FScriptContainerElement *local_168;
  int iStack_160;
  int iStack_15c;
  FLinearColor_u_0 local_158;
  float local_148;
  float local_144;
  FScriptContainerElement *local_138;
  int iStack_130;
  int iStack_12c;
  TStridedView<float,int> local_128;
  TStridedView<float,int> local_118;
  TArrayView<float,int> local_108;
  FCameraDebugGraphRenderer local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  Update(this,param_2->HistoryTime);
  Cameras::Internal::FCameraDebugGraphRenderer::FCameraDebugGraphRenderer(&local_f8,param_1,param_2)
  ;
  iVar2 = (this->Entries).ArrayNum;
  if (iVar2 == 0) {
    Cameras::Internal::FCameraDebugGraphRenderer::DrawEmptyFrame(&local_f8);
  }
  else {
    uVar11 = iVar2 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar2) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_178 = (longlong)(int)uVar11;
      local_170 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iStack_130 = 3;
    local_138 = (this->Entries).AllocatorInstance.Data +
                (longlong)((this->Entries).ArrayNum + -1) * 0x10 + 4;
    local_108._12_4_ = iStack_12c;
    local_108.ArrayNum = 3;
    local_108.DataPtr = (float *)local_138;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawFrame(&local_f8,&local_108);
    local_138 = (this->Entries).AllocatorInstance.Data;
    iVar2 = (param_2->GraphLineColors).ArrayNum;
    iStack_12c = (this->Entries).ArrayNum;
    iStack_130 = 0x10;
    if (iStack_12c < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (param_2->GraphLineColors).ArrayNum;
    pTVar1 = &param_2->GraphLineColors;
    if (iVar3 < 1) {
      local_178 = 0;
      local_170 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar10 = (param_2->GraphLineColors).AllocatorInstance.SecondaryData;
    iVar3 = (this->Entries).ArrayNum;
    if (FVar10 == (ForElementType<FLinearColor>)0x0) {
      FVar10 = (ForElementType<FLinearColor>)pTVar1;
    }
    if (iVar3 < 1) {
      local_178 = 0;
      local_170 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_168 = (this->Entries).AllocatorInstance.Data + 4;
    iStack_160 = 0x10;
    iStack_15c = iVar3;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = local_138;
    local_158._0_8_ = *(undefined8 *)FVar10;
    local_158._8_8_ = *(undefined8 *)((longlong)FVar10 + 8);
    local_144 = this->CurrentMinValue;
    uVar5._4_4_ = iStack_12c;
    uVar5._0_4_ = iStack_130;
    local_148 = this->CurrentMaxValue;
    local_128.NumElements = iStack_15c;
    local_128.BytesBetweenElements = iStack_160;
    local_128.FirstElementPtr = (float *)local_168;
    local_118.FirstElementPtr = (float *)local_138;
    local_118._8_8_ = uVar5;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawGraphLine
              (&local_f8,(FLineDrawParams *)&local_158._s_0,&local_118,&local_128);
    uVar11 = (uint)(1 % (longlong)iVar2);
    iVar3 = (param_2->GraphLineColors).ArrayNum;
    uVar8 = 0;
    if ((int)uVar11 < iVar3) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_178 = (longlong)(int)uVar11;
      local_170 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar10 = (param_2->GraphLineColors).AllocatorInstance.SecondaryData;
    iVar3 = (this->Entries).ArrayNum;
    if (FVar10 == (ForElementType<FLinearColor>)0x0) {
      FVar10 = (ForElementType<FLinearColor>)pTVar1;
    }
    puVar9 = (undefined8 *)((longlong)FVar10 + (longlong)(int)uVar11 * 0x10);
    if (iVar3 < 1) {
      local_178 = 0;
      local_170 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_168 = (this->Entries).AllocatorInstance.Data + 8;
    iStack_15c = iVar3;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_158._0_8_ = *puVar9;
    local_158._8_8_ = puVar9[1];
    local_144 = this->CurrentMinValue;
    local_148 = this->CurrentMaxValue;
    local_128.NumElements = iStack_15c;
    local_128.BytesBetweenElements = iStack_160;
    local_128.FirstElementPtr = (float *)local_168;
    local_118.FirstElementPtr = (float *)pFVar6;
    local_118._8_8_ = uVar5;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawGraphLine
              (&local_f8,(FLineDrawParams *)&local_158._s_0,&local_118,&local_128);
    uVar11 = (uint)(2 % (longlong)iVar2);
    iVar2 = (param_2->GraphLineColors).ArrayNum;
    uVar8 = 0;
    if ((int)uVar11 < iVar2) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_178 = (longlong)(int)uVar11;
      local_170 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar10 = (param_2->GraphLineColors).AllocatorInstance.SecondaryData;
    iVar2 = (this->Entries).ArrayNum;
    if (FVar10 == (ForElementType<FLinearColor>)0x0) {
      FVar10 = (ForElementType<FLinearColor>)pTVar1;
    }
    puVar9 = (undefined8 *)((longlong)FVar10 + (longlong)(int)uVar11 * 0x10);
    if (iVar2 < 1) {
      local_178 = 0;
      local_170 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_168 = (this->Entries).AllocatorInstance.Data + 0xc;
    iStack_15c = iVar2;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_158._0_8_ = *puVar9;
    local_158._8_8_ = puVar9[1];
    local_144 = this->CurrentMinValue;
    local_148 = this->CurrentMaxValue;
    local_128.NumElements = iStack_15c;
    local_128.BytesBetweenElements = iStack_160;
    local_128.FirstElementPtr = (float *)local_168;
    local_118.FirstElementPtr = (float *)pFVar6;
    local_118._8_8_ = uVar5;
    Cameras::Internal::FCameraDebugGraphRenderer::DrawGraphLine
              (&local_f8,(FLineDrawParams *)&local_158._s_0,&local_118,&local_128);
  }
  if (local_f8.DrawParams.GraphLineColors.AllocatorInstance.SecondaryData !=
      (ForElementType<FLinearColor>)0x0) {
    FMemory::Free((void *)local_f8.DrawParams.GraphLineColors.AllocatorInstance.SecondaryData);
  }
  if (local_f8.DrawParams.GraphName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.DrawParams.GraphName.TextData.Reference + 0x10))();
  }
  return;
}

// Update @ 14d674440

void __thiscall UE::Cameras::TCameraDebugGraph<1>::Update(TCameraDebugGraph<1> *this,float param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  
  if (param_1 <= 0.0) {
    param_1 = FCameraDebugGraphDrawParams::GetDefaultMaxHistoryTime();
  }
  iVar7 = (this->Entries).ArrayNum;
  if (iVar7 == 0) {
    this->CurrentMinValue = 0.0;
    this->CurrentMaxValue = 0.0;
    return;
  }
  uVar8 = 0;
  if ((int)(iVar7 - 1U) < iVar7) {
    uVar8 = ~(iVar7 - 1U) >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (this->Entries).ArrayNum - 1;
  fVar2 = *(float *)((this->Entries).AllocatorInstance.Data +
                    (longlong)(this->Entries).ArrayNum * 8 + -8);
  this->CurrentMinValue = 3.4028235e+38;
  this->CurrentMaxValue = -3.4028235e+38;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Entries).AllocatorInstance.Data;
      fVar10 = *(float *)(pFVar3 + lVar9 + 4);
      if (this->CurrentMinValue <= *(float *)(pFVar3 + lVar9 + 4)) {
        fVar10 = this->CurrentMinValue;
      }
      this->CurrentMinValue = fVar10;
      fVar10 = *(float *)(pFVar3 + lVar9 + 4);
      if (*(float *)(pFVar3 + lVar9 + 4) <= this->CurrentMaxValue) {
        fVar10 = this->CurrentMaxValue;
      }
      this->CurrentMaxValue = fVar10;
      if (param_1 <= fVar2 - *(float *)(pFVar3 + lVar9)) {
        if (uVar8 == 0) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar8 <= (this->Entries).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Entries).AllocatorInstance.Data;
        iVar7 = (this->Entries).ArrayNum - uVar8;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + (ulonglong)uVar8 * 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Entries).ArrayNum;
        *piVar1 = *piVar1 - uVar8;
        return;
      }
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// Update @ 14d674640

void __thiscall UE::Cameras::TCameraDebugGraph<3>::Update(TCameraDebugGraph<3> *this,float param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if (param_1 <= 0.0) {
    param_1 = FCameraDebugGraphDrawParams::GetDefaultMaxHistoryTime();
  }
  iVar7 = (this->Entries).ArrayNum;
  if (iVar7 == 0) {
    this->CurrentMinValue = 0.0;
    this->CurrentMaxValue = 0.0;
    return;
  }
  uVar8 = 0;
  if ((int)(iVar7 - 1U) < iVar7) {
    uVar8 = ~(iVar7 - 1U) >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (this->Entries).ArrayNum - 1;
  fVar2 = *(float *)((this->Entries).AllocatorInstance.Data +
                    (longlong)(this->Entries).ArrayNum * 0x10 + -0x10);
  this->CurrentMinValue = 3.4028235e+38;
  this->CurrentMaxValue = -3.4028235e+38;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Entries).AllocatorInstance.Data;
      fVar11 = *(float *)(pFVar3 + lVar9 + 4);
      if (this->CurrentMinValue <= *(float *)(pFVar3 + lVar9 + 4)) {
        fVar11 = this->CurrentMinValue;
      }
      this->CurrentMinValue = fVar11;
      fVar10 = *(float *)(pFVar3 + lVar9 + 4);
      if (*(float *)(pFVar3 + lVar9 + 4) <= this->CurrentMaxValue) {
        fVar10 = this->CurrentMaxValue;
      }
      this->CurrentMaxValue = fVar10;
      if (*(float *)(pFVar3 + lVar9 + 8) <= fVar11) {
        fVar11 = *(float *)(pFVar3 + lVar9 + 8);
      }
      this->CurrentMinValue = fVar11;
      if (fVar10 <= *(float *)(pFVar3 + lVar9 + 8)) {
        fVar10 = *(float *)(pFVar3 + lVar9 + 8);
      }
      this->CurrentMaxValue = fVar10;
      if (*(float *)(pFVar3 + lVar9 + 0xc) <= fVar11) {
        fVar11 = *(float *)(pFVar3 + lVar9 + 0xc);
      }
      this->CurrentMinValue = fVar11;
      if (fVar10 <= *(float *)(pFVar3 + lVar9 + 0xc)) {
        fVar10 = *(float *)(pFVar3 + lVar9 + 0xc);
      }
      this->CurrentMaxValue = fVar10;
      if (param_1 <= fVar2 - *(float *)(pFVar3 + lVar9)) {
        if (uVar8 == 0) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar8 <= (this->Entries).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Entries).AllocatorInstance.Data;
        iVar7 = (this->Entries).ArrayNum - uVar8;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + (ulonglong)uVar8 * 0x10,(longlong)iVar7 << 4);
        }
        piVar1 = &(this->Entries).ArrayNum;
        *piVar1 = *piVar1 - uVar8;
        return;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

