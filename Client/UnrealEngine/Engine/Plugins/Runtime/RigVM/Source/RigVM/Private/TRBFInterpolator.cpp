// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> @ 14a187e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRBFInterpolator<UE::Math::TQuat<double>_>::
Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
          (TRBFInterpolator<UE::Math::TQuat<double>_> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,TQuat<double> *param_2,bool param_3,
          bool param_4)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  TQuat<double> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b8;
  undefined4 local_b4 [2];
  float local_ac;
  longlong local_a8;
  code *local_a0;
  TArray<float,TMemStackAllocator<0>_> local_98 [5];
  
  uVar12 = (this->Nodes).ArrayNum;
  lVar16 = (longlong)(int)uVar12;
  if ((char)this->_padding_ == '\0') {
    local_ac = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(param_1,&local_ac,uVar12);
    return;
  }
  uVar21 = 0;
  if ((int)uVar12 < 2) {
    iVar11 = param_1->ArrayMax;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (uVar12 == 1) {
      if (iVar11 < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,&param_1->AllocatorInstance,0,piVar1);
        iVar11 = param_1->ArrayMax;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_b4[0] = 0x3f800000;
      if (((pFVar6 <= (FScriptContainerElement *)local_b4) &&
          ((FScriptContainerElement *)local_b4 < pFVar6 + (longlong)iVar11 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar11;
      }
      param_1->ArrayNum = iVar11 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b4[0];
    }
    else if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    local_98[0].AllocatorInstance.Data = (float *)0x0;
    local_98[0].ArrayNum = 0;
    local_98[0].ArrayMax = 0;
    TArray<float,TMemStackAllocator<0>_>::SetNum(local_98,uVar12,Default);
    uVar17 = uVar21;
    uVar23 = uVar21;
    if (0 < (int)uVar12) {
      do {
        uVar15 = (uint)uVar17;
        uVar22 = 0;
        if ((int)uVar15 < (this->Nodes).ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar4 = (this->Nodes).DataPtr;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightFunc);
        plVar14 = *(longlong **)&(this->WeightFunc).field_0x28;
        local_a0 = *(code **)&this->WeightFunc;
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)&(this->WeightFunc).field_0x10;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        fVar24 = (float)(*local_a0)(uVar13,param_2,pTVar4 + (int)uVar15);
        uVar22 = 0;
        if ((int)uVar15 < local_98[0].ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_98[0].AllocatorInstance.Data[uVar23] = fVar24;
        uVar23 = uVar23 + 1;
        uVar17 = (ulonglong)(uVar15 + 1);
      } while ((longlong)uVar23 < lVar16);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
    }
    local_a0 = (code *)(ulonglong)uVar12;
    uVar22 = 0;
    local_a8 = 0;
    uVar17 = uVar21;
    do {
      lVar8 = local_a8;
      uVar10 = 0;
      uVar15 = uVar10;
      if ((int)(uint)uVar17 < (int)this->_padding_) {
        uVar15 = ~(uint)uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = this->_padding_;
      local_b8 = 0.0;
      uVar17 = uVar21;
      uVar23 = uVar21;
      if (0 < lVar16) {
        do {
          uVar19 = (uint)uVar23;
          uVar15 = uVar10;
          if ((int)uVar19 < local_98[0].ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar23 = (ulonglong)(uVar19 + 1);
          pfVar3 = local_98[0].AllocatorInstance.Data + uVar17;
          lVar2 = uVar17 * 4;
          uVar17 = uVar17 + 1;
          local_b8 = local_b8 + *pfVar3 * *(float *)(lVar5 + lVar8 * 4 + lVar2);
        } while ((longlong)uVar17 < lVar16);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      uVar22 = uVar22 + uVar12;
      uVar17 = (ulonglong)uVar22;
      local_a8 = local_a8 + lVar16;
      local_a0 = (code *)((longlong)local_a0 - 1);
      param_1->ArrayNum = iVar11 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b8;
      fVar24 = __real_3f800000;
    } while (local_a0 != (code *)0x0);
    uVar12 = 0;
    if (param_4) {
      fVar24 = 0.0;
      local_a0 = (code *)0x0;
      if (param_3) {
        uVar17 = uVar21;
        uVar23 = uVar21;
        if (lVar16 < 1) {
          return;
        }
        do {
          uVar15 = (uint)uVar17;
          uVar22 = uVar10;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data + uVar23 * 4;
          if (*(float *)pFVar6 <= fVar24 && fVar24 != *(float *)pFVar6) {
            uVar22 = uVar12;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar22 = ~uVar15 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar24 = *(float *)((param_1->AllocatorInstance).Data + uVar23 * 4);
          }
          uVar23 = uVar23 + 1;
          uVar18 = uVar21;
          uVar20 = uVar21;
          uVar17 = (ulonglong)(uVar15 + 1);
        } while ((longlong)uVar23 < lVar16);
        do {
          uVar15 = (uint)uVar18;
          uVar22 = uVar12;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data;
          *(float *)(pFVar6 + uVar20 * 4) = *(float *)(pFVar6 + uVar20 * 4) - fVar24;
          uVar20 = uVar20 + 1;
          uVar18 = (ulonglong)(uVar15 + 1);
        } while ((longlong)uVar20 < lVar16);
      }
      else if (lVar16 < 1) {
        return;
      }
      fVar24 = 0.0;
      uVar17 = uVar21;
      uVar23 = uVar21;
      do {
        uVar15 = (uint)uVar23;
        uVar22 = uVar10;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar26 = __real_3f800000;
        uVar23 = (ulonglong)(uVar15 + 1);
        fVar24 = fVar24 + *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar16);
      if (0 < lVar16) {
        fVar24 = __real_3f800000 / fVar24;
        uVar17 = uVar21;
        do {
          uVar15 = (uint)uVar21;
          uVar22 = uVar10;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar25 = fVar24 * *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
          uVar22 = uVar12;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if (fVar26 <= fVar25) {
            fVar25 = fVar26;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = (ulonglong)(uVar15 + 1);
          *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4) = fVar25;
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < lVar16);
      }
    }
    else if ((param_3) && (0 < lVar16)) {
      local_a0 = (code *)0x0;
      uVar17 = uVar21;
      do {
        uVar15 = (uint)uVar21;
        uVar22 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar26 = *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
        if (fVar24 <= fVar26) {
          fVar26 = fVar24;
        }
        uVar22 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = (ulonglong)(uVar15 + 1);
        *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4) = fVar26;
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar16);
    }
  }
  return;
}

// Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> @ 14a188720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRBFInterpolator<UE::Math::TVector<double>_>::
Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
          (TRBFInterpolator<UE::Math::TVector<double>_> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,bool param_3,
          bool param_4)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  TVector<double> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b8;
  undefined4 local_b4 [2];
  float local_ac;
  longlong local_a8;
  code *local_a0;
  TArray<float,TMemStackAllocator<0>_> local_98 [5];
  
  uVar12 = (this->Nodes).ArrayNum;
  lVar16 = (longlong)(int)uVar12;
  if ((char)this->_padding_ == '\0') {
    local_ac = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(param_1,&local_ac,uVar12);
    return;
  }
  uVar21 = 0;
  if ((int)uVar12 < 2) {
    iVar11 = param_1->ArrayMax;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (uVar12 == 1) {
      if (iVar11 < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,&param_1->AllocatorInstance,0,piVar1);
        iVar11 = param_1->ArrayMax;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_b4[0] = 0x3f800000;
      if (((pFVar6 <= (FScriptContainerElement *)local_b4) &&
          ((FScriptContainerElement *)local_b4 < pFVar6 + (longlong)iVar11 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar11;
      }
      param_1->ArrayNum = iVar11 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b4[0];
    }
    else if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    local_98[0].AllocatorInstance.Data = (float *)0x0;
    local_98[0].ArrayNum = 0;
    local_98[0].ArrayMax = 0;
    TArray<float,TMemStackAllocator<0>_>::SetNum(local_98,uVar12,Default);
    uVar17 = uVar21;
    uVar23 = uVar21;
    if (0 < (int)uVar12) {
      do {
        uVar15 = (uint)uVar17;
        uVar22 = 0;
        if ((int)uVar15 < (this->Nodes).ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar4 = (this->Nodes).DataPtr;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightFunc);
        plVar14 = *(longlong **)&(this->WeightFunc).field_0x28;
        local_a0 = *(code **)&this->WeightFunc;
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)&(this->WeightFunc).field_0x10;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        fVar24 = (float)(*local_a0)(uVar13,param_2,pTVar4 + (int)uVar15);
        uVar22 = 0;
        if ((int)uVar15 < local_98[0].ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_98[0].AllocatorInstance.Data[uVar23] = fVar24;
        uVar23 = uVar23 + 1;
        uVar17 = (ulonglong)(uVar15 + 1);
      } while ((longlong)uVar23 < lVar16);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
    }
    local_a0 = (code *)(ulonglong)uVar12;
    uVar22 = 0;
    local_a8 = 0;
    uVar17 = uVar21;
    do {
      lVar8 = local_a8;
      uVar10 = 0;
      uVar15 = uVar10;
      if ((int)(uint)uVar17 < (int)this->_padding_) {
        uVar15 = ~(uint)uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = this->_padding_;
      local_b8 = 0.0;
      uVar17 = uVar21;
      uVar23 = uVar21;
      if (0 < lVar16) {
        do {
          uVar19 = (uint)uVar23;
          uVar15 = uVar10;
          if ((int)uVar19 < local_98[0].ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar23 = (ulonglong)(uVar19 + 1);
          pfVar3 = local_98[0].AllocatorInstance.Data + uVar17;
          lVar2 = uVar17 * 4;
          uVar17 = uVar17 + 1;
          local_b8 = local_b8 + *pfVar3 * *(float *)(lVar5 + lVar8 * 4 + lVar2);
        } while ((longlong)uVar17 < lVar16);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      uVar22 = uVar22 + uVar12;
      uVar17 = (ulonglong)uVar22;
      local_a8 = local_a8 + lVar16;
      local_a0 = (code *)((longlong)local_a0 - 1);
      param_1->ArrayNum = iVar11 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b8;
      fVar24 = __real_3f800000;
    } while (local_a0 != (code *)0x0);
    uVar12 = 0;
    if (param_4) {
      fVar24 = 0.0;
      local_a0 = (code *)0x0;
      if (param_3) {
        uVar17 = uVar21;
        uVar23 = uVar21;
        if (lVar16 < 1) {
          return;
        }
        do {
          uVar15 = (uint)uVar17;
          uVar22 = uVar10;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data + uVar23 * 4;
          if (*(float *)pFVar6 <= fVar24 && fVar24 != *(float *)pFVar6) {
            uVar22 = uVar12;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar22 = ~uVar15 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar24 = *(float *)((param_1->AllocatorInstance).Data + uVar23 * 4);
          }
          uVar23 = uVar23 + 1;
          uVar18 = uVar21;
          uVar20 = uVar21;
          uVar17 = (ulonglong)(uVar15 + 1);
        } while ((longlong)uVar23 < lVar16);
        do {
          uVar15 = (uint)uVar18;
          uVar22 = uVar12;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data;
          *(float *)(pFVar6 + uVar20 * 4) = *(float *)(pFVar6 + uVar20 * 4) - fVar24;
          uVar20 = uVar20 + 1;
          uVar18 = (ulonglong)(uVar15 + 1);
        } while ((longlong)uVar20 < lVar16);
      }
      else if (lVar16 < 1) {
        return;
      }
      fVar24 = 0.0;
      uVar17 = uVar21;
      uVar23 = uVar21;
      do {
        uVar15 = (uint)uVar23;
        uVar22 = uVar10;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar26 = __real_3f800000;
        uVar23 = (ulonglong)(uVar15 + 1);
        fVar24 = fVar24 + *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar16);
      if (0 < lVar16) {
        fVar24 = __real_3f800000 / fVar24;
        uVar17 = uVar21;
        do {
          uVar15 = (uint)uVar21;
          uVar22 = uVar10;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar25 = fVar24 * *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
          uVar22 = uVar12;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if (fVar26 <= fVar25) {
            fVar25 = fVar26;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = (ulonglong)(uVar15 + 1);
          *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4) = fVar25;
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < lVar16);
      }
    }
    else if ((param_3) && (0 < lVar16)) {
      local_a0 = (code *)0x0;
      uVar17 = uVar21;
      do {
        uVar15 = (uint)uVar21;
        uVar22 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar26 = *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4);
        if (fVar24 <= fVar26) {
          fVar26 = fVar24;
        }
        uVar22 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = (ulonglong)(uVar15 + 1);
        *(float *)((param_1->AllocatorInstance).Data + uVar17 * 4) = fVar26;
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar16);
    }
  }
  return;
}

// operator= @ 14a1921b0

TRBFInterpolator<UE::Math::TQuat<double>_> * __thiscall
TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
          (TRBFInterpolator<UE::Math::TQuat<double>_> *this,
          TRBFInterpolator<UE::Math::TQuat<double>_> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (this != param_1) {
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  iVar8 = (param_1->Nodes).ArrayNum;
  uVar9 = *(undefined4 *)&(param_1->Nodes).field_0xc;
  (this->Nodes).DataPtr = (param_1->Nodes).DataPtr;
  (this->Nodes).ArrayNum = iVar8;
  *(undefined4 *)&(this->Nodes).field_0xc = uVar9;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x8;
  uVar2 = *(undefined8 *)&this->WeightFunc;
  uVar3 = *(undefined8 *)&(this->WeightFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->WeightFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->WeightFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->WeightFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->WeightFunc).field_0x28;
  *(undefined8 *)&this->WeightFunc = *(undefined8 *)&param_1->WeightFunc;
  *(undefined8 *)&(this->WeightFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x18;
  *(undefined8 *)&(this->WeightFunc).field_0x10 = *(undefined8 *)&(param_1->WeightFunc).field_0x10;
  *(undefined8 *)&(this->WeightFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x28;
  *(undefined8 *)&(this->WeightFunc).field_0x20 = *(undefined8 *)&(param_1->WeightFunc).field_0x20;
  *(undefined8 *)&(this->WeightFunc).field_0x28 = uVar1;
  *(undefined8 *)&param_1->WeightFunc = uVar2;
  *(undefined8 *)&(param_1->WeightFunc).field_0x8 = uVar3;
  *(undefined8 *)&(param_1->WeightFunc).field_0x10 = uVar4;
  *(undefined8 *)&(param_1->WeightFunc).field_0x18 = uVar5;
  *(undefined8 *)&(param_1->WeightFunc).field_0x20 = uVar6;
  *(undefined8 *)&(param_1->WeightFunc).field_0x28 = uVar7;
  return this;
}

// operator= @ 14a192240

TRBFInterpolator<UE::Math::TVector<double>_> * __thiscall
TRBFInterpolator<UE::Math::TVector<double>_>::operator=
          (TRBFInterpolator<UE::Math::TVector<double>_> *this,
          TRBFInterpolator<UE::Math::TVector<double>_> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (this != param_1) {
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  iVar8 = (param_1->Nodes).ArrayNum;
  uVar9 = *(undefined4 *)&(param_1->Nodes).field_0xc;
  (this->Nodes).DataPtr = (param_1->Nodes).DataPtr;
  (this->Nodes).ArrayNum = iVar8;
  *(undefined4 *)&(this->Nodes).field_0xc = uVar9;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x8;
  uVar2 = *(undefined8 *)&this->WeightFunc;
  uVar3 = *(undefined8 *)&(this->WeightFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->WeightFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->WeightFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->WeightFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->WeightFunc).field_0x28;
  *(undefined8 *)&this->WeightFunc = *(undefined8 *)&param_1->WeightFunc;
  *(undefined8 *)&(this->WeightFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x18;
  *(undefined8 *)&(this->WeightFunc).field_0x10 = *(undefined8 *)&(param_1->WeightFunc).field_0x10;
  *(undefined8 *)&(this->WeightFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->WeightFunc).field_0x28;
  *(undefined8 *)&(this->WeightFunc).field_0x20 = *(undefined8 *)&(param_1->WeightFunc).field_0x20;
  *(undefined8 *)&(this->WeightFunc).field_0x28 = uVar1;
  *(undefined8 *)&param_1->WeightFunc = uVar2;
  *(undefined8 *)&(param_1->WeightFunc).field_0x8 = uVar3;
  *(undefined8 *)&(param_1->WeightFunc).field_0x10 = uVar4;
  *(undefined8 *)&(param_1->WeightFunc).field_0x18 = uVar5;
  *(undefined8 *)&(param_1->WeightFunc).field_0x20 = uVar6;
  *(undefined8 *)&(param_1->WeightFunc).field_0x28 = uVar7;
  return this;
}

// MakeUpperKernel @ 14a1b0db0

void __thiscall
TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
          (TRBFInterpolator<UE::Math::TQuat<double>_> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_res8;
  longlong local_res20;
  float local_88 [2];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ForElementType<float> local_68;
  undefined8 local_60;
  TArrayView<float,int> local_58;
  
  iVar1 = (this->Nodes).ArrayNum;
  if (iVar1 < 2) {
    *(undefined1 *)&this->_padding_ = 1;
    return;
  }
  uVar9 = 0;
  local_68.Data = (float *)0x0;
  local_60 = 0;
  uVar5 = ((iVar1 + -1) * iVar1) / 2;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  uVar11 = uVar9;
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
              (4,4,uVar5,&local_68,0,(int *)((longlong)&local_60 + 4));
    uVar11 = local_60 & 0xffffffff;
  }
  local_res20 = 0;
  local_res8 = 0;
  local_80 = 0;
  FVar14.Data = local_68.Data;
  do {
    uVar5 = (uint)uVar9;
    local_78 = local_res20;
    lVar13 = local_80;
    uVar16 = uVar9;
    do {
      iVar6 = (int)uVar11;
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < (this->Nodes).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_70 = (longlong)&((this->Nodes).DataPtr)->X + lVar13;
      uVar10 = 0;
      if ((int)uVar9 < (this->Nodes).ArrayNum) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = (longlong)&((this->Nodes).DataPtr)->X + local_80;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightFunc);
      plVar2 = *(longlong **)&(this->WeightFunc).field_0x28;
      pcVar3 = *(code **)&this->WeightFunc;
      plVar8 = (longlong *)&(this->WeightFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar8 = plVar2;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      local_88[0] = (float)(*pcVar3)(uVar7,lVar12,local_70);
      if (((FVar14.Data <= local_88) && (local_88 < FVar14.Data + local_60._4_4_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar6 == local_60._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                          (0x404,&local_68,(int *)((longlong)&local_60 + 4));
        FVar14.Data = local_68.Data;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      local_78 = local_78 + 1;
      lVar13 = lVar13 + 0x20;
      uVar9 = (ulonglong)local_res8;
      FVar14.Data[iVar6] = local_88[0];
      uVar10 = iVar6 + 1;
      uVar11 = (ulonglong)uVar10;
      local_60 = CONCAT44(local_60._4_4_,uVar10);
    } while ((int)(uVar15 + 1) < iVar1);
    local_res8 = local_res8 + 1;
    uVar9 = (ulonglong)local_res8;
    local_80 = local_80 + 0x20;
    local_res20 = local_res20 + 1;
    if (iVar1 <= (int)local_res8) {
      local_58.DataPtr = FVar14.Data;
      if (((int)uVar10 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58.ArrayNum = uVar10;
      bVar4 = FRBFInterpolatorBase::SetUpperKernel((FRBFInterpolatorBase *)this,&local_58,iVar1);
      *(bool *)&this->_padding_ = bVar4;
      return;
    }
  } while( true );
}

// MakeUpperKernel @ 14a1b10f0

void __thiscall
TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
          (TRBFInterpolator<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_res8;
  longlong local_res20;
  float local_88 [2];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ForElementType<float> local_68;
  undefined8 local_60;
  TArrayView<float,int> local_58;
  
  iVar1 = (this->Nodes).ArrayNum;
  if (iVar1 < 2) {
    *(undefined1 *)&this->_padding_ = 1;
    return;
  }
  uVar9 = 0;
  local_68.Data = (float *)0x0;
  local_60 = 0;
  uVar5 = ((iVar1 + -1) * iVar1) / 2;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  uVar11 = uVar9;
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
              (4,4,uVar5,&local_68,0,(int *)((longlong)&local_60 + 4));
    uVar11 = local_60 & 0xffffffff;
  }
  local_res20 = 0;
  local_res8 = 0;
  local_80 = 0;
  FVar14.Data = local_68.Data;
  do {
    uVar5 = (uint)uVar9;
    local_78 = local_res20;
    lVar13 = local_80;
    uVar16 = uVar9;
    do {
      iVar6 = (int)uVar11;
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < (this->Nodes).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_70 = (longlong)&((this->Nodes).DataPtr)->field0_0x0 + lVar13;
      uVar10 = 0;
      if ((int)uVar9 < (this->Nodes).ArrayNum) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = (longlong)&((this->Nodes).DataPtr)->field0_0x0 + local_80;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightFunc);
      plVar2 = *(longlong **)&(this->WeightFunc).field_0x28;
      pcVar3 = *(code **)&this->WeightFunc;
      plVar8 = (longlong *)&(this->WeightFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar8 = plVar2;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      local_88[0] = (float)(*pcVar3)(uVar7,lVar12,local_70);
      if (((FVar14.Data <= local_88) && (local_88 < FVar14.Data + local_60._4_4_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar6 == local_60._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                          (0x404,&local_68,(int *)((longlong)&local_60 + 4));
        FVar14.Data = local_68.Data;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      local_78 = local_78 + 1;
      lVar13 = lVar13 + 0x18;
      uVar9 = (ulonglong)local_res8;
      FVar14.Data[iVar6] = local_88[0];
      uVar10 = iVar6 + 1;
      uVar11 = (ulonglong)uVar10;
      local_60 = CONCAT44(local_60._4_4_,uVar10);
    } while ((int)(uVar15 + 1) < iVar1);
    local_res8 = local_res8 + 1;
    uVar9 = (ulonglong)local_res8;
    local_80 = local_80 + 0x18;
    local_res20 = local_res20 + 1;
    if (iVar1 <= (int)local_res8) {
      local_58.DataPtr = FVar14.Data;
      if (((int)uVar10 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58.ArrayNum = uVar10;
      bVar4 = FRBFInterpolatorBase::SetUpperKernel((FRBFInterpolatorBase *)this,&local_58,iVar1);
      *(bool *)&this->_padding_ = bVar4;
      return;
    }
  } while( true );
}

