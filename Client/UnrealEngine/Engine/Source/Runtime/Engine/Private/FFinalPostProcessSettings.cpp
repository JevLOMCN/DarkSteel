// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FFinalPostProcessSettings @ 1485109a0

void __thiscall
FFinalPostProcessSettings::~FFinalPostProcessSettings(FFinalPostProcessSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->BlendableManager).Scratch.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BufferVisualizationPipes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BufferVisualizationPipes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BufferVisualizationPipes);
  pFVar1 = (this->BufferVisualizationOverviewSelectedTargetMaterialName).Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferVisualizationDumpBaseFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferVisualizationOverviewMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContributingLUTs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContributingCubemaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->field_0x758 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x758);
  }
  return;
}

// LerpTo @ 148533b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FFinalPostProcessSettings::LerpTo(FFinalPostProcessSettings *this,UTexture *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (UTexture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\FinalPostProcessSettings.h"
                         ,0x67,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  if (((param_2 < 0.0) || (__real_3f800000 < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Weight >= 0.0f && Weight <= 1.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\FinalPostProcessSettings.h"
                         ,0x68,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((___real_3f7efeff < param_2) || (iVar1 = (this->ContributingLUTs).ArrayNum, iVar1 == 0)) {
    (this->ContributingLUTs).ArrayNum = 0;
    if ((this->ContributingLUTs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ContributingLUTs).AllocatorInstance,0,
                 &(this->ContributingLUTs).ArrayMax);
    }
    PushLUT(this,param_1,fVar4);
  }
  else {
    uVar8 = 0;
    if (iVar1 != 0) {
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->ContributingLUTs).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->ContributingLUTs).AllocatorInstance.Data;
        lVar7 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        *(float *)(pFVar2 + lVar7 * 0x10) = (fVar4 - param_2) * *(float *)(pFVar2 + lVar7 * 0x10);
        uVar6 = (this->ContributingLUTs).ArrayNum;
      } while (uVar8 < uVar6);
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->ContributingLUTs).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar7 = (longlong)(int)uVar8;
          if (*(UTexture **)((this->ContributingLUTs).AllocatorInstance.Data + lVar7 * 0x10 + 8) ==
              param_1) {
            if (uVar8 != 0xffffffff) {
              uVar6 = 0;
              if ((int)uVar8 < (this->ContributingLUTs).ArrayNum) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->ContributingLUTs).AllocatorInstance.Data;
              *(float *)(pFVar2 + lVar7 * 0x10) = param_2 + *(float *)(pFVar2 + lVar7 * 0x10);
              return;
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(this->ContributingLUTs).ArrayNum);
      }
    }
    PushLUT(this,param_1,param_2);
  }
  return;
}

// PushLUT @ 14853c290

void __thiscall
FFinalPostProcessSettings::PushLUT(FFinalPostProcessSettings *this,UTexture *param_1,float param_2)

{
  int *piVar1;
  TArray<FFinalPostProcessSettings::FLUTBlenderEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  undefined4 uStack_24;
  UTexture *pUStack_20;
  
  if ((param_2 < 0.0) || (__real_3f800000 < param_2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Weight >= 0.0f && Weight <= 1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\FinalPostProcessSettings.h"
                       ,0x87,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = &this->ContributingLUTs;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_28 = param_2;
  pUStack_20 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(this->ContributingLUTs).ArrayMax * 0x10)) {
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
  iVar6 = (this->ContributingLUTs).ArrayNum;
  piVar1 = &(this->ContributingLUTs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ContributingLUTs).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(uStack_24,local_28);
  *(UTexture **)(pFVar3 + 8) = pUStack_20;
  return;
}

// UpdateEntry @ 14854b600

void __thiscall
FFinalPostProcessSettings::UpdateEntry
          (FFinalPostProcessSettings *this,FCubemapEntry *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TArray<FFinalPostProcessSettings::FCubemapEntry,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  float fVar19;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  UTexture *local_78;
  
  fVar10 = __real_3f800000;
  fVar9 = __real_3727c5ac;
  bVar12 = false;
  lVar18 = 0;
  for (uVar15 = 0; (-1 < (int)uVar15 && ((int)uVar15 < (this->ContributingCubemaps).ArrayNum));
      uVar15 = uVar15 + 1) {
    uVar16 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar15 < (this->ContributingCubemaps).ArrayNum) {
      uVar13 = uVar16;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (this->ContributingCubemaps).AllocatorInstance.Data;
    if (*(UTexture **)(pFVar7 + lVar18 + 0x10) == param_1->AmbientCubemap) {
      bVar12 = true;
      fVar4 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.G;
      fVar5 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.B;
      fVar6 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.A;
      *(float *)(pFVar7 + lVar18) =
           ((param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.R -
           *(float *)(pFVar7 + lVar18)) * param_2 + *(float *)(pFVar7 + lVar18);
      *(float *)(pFVar7 + lVar18 + 4) =
           (fVar4 - *(float *)(pFVar7 + lVar18 + 4)) * param_2 + *(float *)(pFVar7 + lVar18 + 4);
      *(float *)(pFVar7 + lVar18 + 8) =
           (fVar5 - *(float *)(pFVar7 + lVar18 + 8)) * param_2 + *(float *)(pFVar7 + lVar18 + 8);
      *(float *)(pFVar7 + lVar18 + 0xc) =
           (fVar6 - *(float *)(pFVar7 + lVar18 + 0xc)) * param_2 + *(float *)(pFVar7 + lVar18 + 0xc)
      ;
    }
    else {
      pFVar2 = pFVar7 + lVar18;
      fVar4 = *(float *)(pFVar2 + 4);
      fVar5 = *(float *)(pFVar2 + 8);
      fVar6 = *(float *)(pFVar2 + 0xc);
      fVar19 = fVar10 - param_2;
      pFVar3 = pFVar7 + lVar18;
      *(float *)pFVar3 = fVar19 * *(float *)pFVar2;
      *(float *)(pFVar3 + 4) = fVar19 * fVar4;
      *(float *)(pFVar3 + 8) = fVar19 * fVar5;
      *(float *)(pFVar3 + 0xc) = fVar19 * fVar6;
    }
    if (((*(float *)(pFVar7 + lVar18) * *(float *)(pFVar7 + lVar18) < fVar9) &&
        (*(float *)(pFVar7 + lVar18 + 4) * *(float *)(pFVar7 + lVar18 + 4) < fVar9)) &&
       (*(float *)(pFVar7 + lVar18 + 8) * *(float *)(pFVar7 + lVar18 + 8) < fVar9)) {
      uVar13 = 0;
      if ((int)uVar15 < (this->ContributingCubemaps).ArrayNum) {
        uVar13 = uVar16;
      }
      if (uVar13 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (this->ContributingCubemaps).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
      iVar14 = (this->ContributingCubemaps).ArrayNum + ~uVar15;
      if (iVar14 != 0) {
        memmove(pFVar7,pFVar7 + 0x18,(longlong)iVar14 * 0x18);
      }
      piVar1 = &(this->ContributingCubemaps).ArrayNum;
      *piVar1 = *piVar1 + -1;
      uVar15 = uVar15 - 1;
      lVar18 = lVar18 + -0x18;
    }
    lVar18 = lVar18 + 0x18;
  }
  if (!bVar12) {
    local_78 = param_1->AmbientCubemap;
    local_88 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.R * param_2;
    fStack_84 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.G * param_2;
    fStack_80 = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.B * param_2;
    fStack_7c = (param_1->AmbientCubemapTintMulScaleValue).field0_0x0._s_0.A * param_2;
    if (((fVar9 <= local_88 * local_88) || (fVar9 <= fStack_84 * fStack_84)) ||
       (fVar9 <= fStack_80 * fStack_80)) {
      pTVar17 = &this->ContributingCubemaps;
      pFVar7 = (pTVar17->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 <
          pFVar7 + (longlong)(this->ContributingCubemaps).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->ContributingCubemaps).ArrayNum;
      piVar1 = &(this->ContributingCubemaps).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar17->AllocatorInstance,piVar1);
      }
      (this->ContributingCubemaps).ArrayNum = iVar14 + 1;
      pFVar2 = (pTVar17->AllocatorInstance).Data;
      pFVar7 = pFVar2 + (longlong)iVar14 * 0x18;
      *(ulonglong *)pFVar7 = CONCAT44(fStack_84,local_88);
      *(ulonglong *)(pFVar7 + 8) = CONCAT44(fStack_7c,fStack_80);
      *(UTexture **)(pFVar2 + (longlong)iVar14 * 0x18 + 0x10) = local_78;
    }
  }
  return;
}

