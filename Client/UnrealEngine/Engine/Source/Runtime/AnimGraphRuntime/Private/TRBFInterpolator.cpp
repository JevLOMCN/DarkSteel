// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// Interpolate<FRBFEntry,TMemStackAllocator<0>_> @ 1463f8fa0

void __thiscall
TRBFInterpolator<FRBFEntry>::Interpolate<FRBFEntry,TMemStackAllocator<0>_>
          (TRBFInterpolator<FRBFEntry> *this,TArray<float,TMemStackAllocator<0>_> *param_1,
          FRBFEntry *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  FRBFEntry *pFVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  longlong local_a8;
  code *local_a0;
  ForElementType<float> local_98;
  int local_90 [20];
  
  uVar11 = (this->Nodes).ArrayNum;
  local_ac = uVar11;
  if ((char)this->_padding_ == '\0') {
    local_b4 = 0.0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
                (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar11) {
      uVar18 = (ulonglong)uVar11;
      do {
        pfVar3 = (param_1->AllocatorInstance).Data;
        if (((pfVar3 <= &local_b4) && (&local_b4 < pfVar3 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        (param_1->AllocatorInstance).Data[iVar9] = local_b4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      return;
    }
  }
  else {
    uVar18 = 0;
    if ((int)uVar11 < 2) {
      iVar9 = param_1->ArrayMax;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = 0;
      if (uVar11 == 1) {
        if (iVar9 < 1) {
          UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
                    (4,4,1,&param_1->AllocatorInstance,0,piVar1);
          iVar9 = param_1->ArrayMax;
        }
        pfVar3 = (param_1->AllocatorInstance).Data;
        local_b0 = 1.0;
        if (((pfVar3 <= &local_b0) && (&local_b0 < pfVar3 + iVar9)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                            (0x404,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar9;
        }
        param_1->ArrayNum = iVar9 + 1;
        (param_1->AllocatorInstance).Data[iVar9] = local_b0;
      }
      else if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
                  (4,4,0,&param_1->AllocatorInstance,0,piVar1);
      }
    }
    else {
      local_98.Data = (float *)0x0;
      local_90[0] = 0;
      local_90[1] = 0;
      iVar9 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                        (4,4,uVar11,&local_98,local_90,local_90 + 1);
      memset(local_98.Data + iVar9,0,(longlong)(int)uVar11 << 2);
      uVar22 = uVar18;
      uVar19 = uVar18;
      uVar10 = uVar11;
      if (0 < (int)uVar11) {
        do {
          uVar14 = (uint)uVar22;
          uVar10 = 0;
          if ((int)uVar14 < (this->Nodes).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->Nodes).DataPtr;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightFunc);
          plVar13 = *(longlong **)&(this->WeightFunc).field_0x28;
          local_a0 = *(code **)&this->WeightFunc;
          if (plVar13 == (longlong *)0x0) {
            plVar13 = (longlong *)&(this->WeightFunc).field_0x10;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          fVar23 = (float)(*local_a0)(uVar12,param_2,pFVar4 + (int)uVar14);
          uVar10 = 0;
          if ((int)uVar14 < local_90[0]) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_98.Data[uVar19] = fVar23;
          uVar19 = uVar19 + 1;
          uVar22 = (ulonglong)(uVar14 + 1);
          uVar10 = local_ac;
        } while ((longlong)uVar19 < (longlong)(int)uVar11);
      }
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax < (int)uVar10) {
        UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
                  (4,4,uVar10,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
      local_a0 = (code *)(ulonglong)uVar10;
      local_ac = 0;
      local_a8 = 0;
      lVar20 = (longlong)(int)uVar10;
      uVar22 = uVar18;
      do {
        lVar7 = local_a8;
        uVar14 = 0;
        uVar11 = uVar14;
        if ((int)(uint)uVar22 < (int)this->_padding_) {
          uVar11 = ~(uint)uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = this->_padding_;
        local_b8 = 0.0;
        uVar22 = uVar18;
        uVar19 = uVar18;
        if (0 < (int)uVar10) {
          do {
            uVar15 = (uint)uVar22;
            uVar11 = uVar14;
            if ((int)uVar15 < local_90[0]) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar2 = uVar19 * 4;
            uVar22 = (ulonglong)(uVar15 + 1);
            pfVar3 = local_98.Data + uVar19;
            uVar19 = uVar19 + 1;
            local_b8 = local_b8 + *(float *)(lVar5 + lVar7 * 4 + lVar2) * *pfVar3;
          } while ((longlong)uVar19 < lVar20);
        }
        pfVar3 = (param_1->AllocatorInstance).Data;
        piVar1 = &param_1->ArrayMax;
        if (((pfVar3 <= &local_b8) && (&local_b8 < pfVar3 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        local_ac = local_ac + uVar10;
        uVar22 = (ulonglong)local_ac;
        local_a8 = local_a8 + lVar20;
        local_a0 = (code *)((longlong)local_a0 - 1);
        param_1->ArrayNum = iVar9 + 1;
        (param_1->AllocatorInstance).Data[iVar9] = local_b8;
        fVar23 = __real_3f800000;
      } while (local_a0 != (code *)0x0);
      uVar11 = 0;
      if (param_4) {
        fVar23 = 0.0;
        local_a0 = (code *)0x0;
        if (param_3) {
          uVar22 = uVar18;
          uVar19 = uVar18;
          if ((int)uVar10 < 1) {
            return;
          }
          do {
            uVar16 = (uint)uVar22;
            uVar15 = uVar14;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pfVar3 = (param_1->AllocatorInstance).Data + uVar19;
            if (*pfVar3 <= fVar23 && fVar23 != *pfVar3) {
              uVar15 = uVar11;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar23 = (param_1->AllocatorInstance).Data[uVar19];
            }
            uVar19 = uVar19 + 1;
            uVar17 = uVar18;
            uVar22 = (ulonglong)(uVar16 + 1);
            uVar21 = uVar18;
          } while ((longlong)uVar19 < lVar20);
          do {
            uVar16 = (uint)uVar21;
            uVar15 = uVar11;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pfVar3 = (param_1->AllocatorInstance).Data;
            pfVar3[uVar17] = pfVar3[uVar17] - fVar23;
            uVar17 = uVar17 + 1;
            uVar21 = (ulonglong)(uVar16 + 1);
          } while ((longlong)uVar17 < lVar20);
        }
        else if ((int)uVar10 < 1) {
          return;
        }
        fVar23 = 0.0;
        uVar22 = uVar18;
        uVar19 = uVar18;
        do {
          uVar16 = (uint)uVar22;
          uVar15 = uVar14;
          if ((int)uVar16 < param_1->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar25 = __real_3f800000;
          uVar22 = (ulonglong)(uVar16 + 1);
          fVar23 = fVar23 + (param_1->AllocatorInstance).Data[uVar19];
          uVar19 = uVar19 + 1;
        } while ((longlong)uVar19 < lVar20);
        if (0 < (int)uVar10) {
          fVar23 = __real_3f800000 / fVar23;
          uVar22 = uVar18;
          do {
            uVar15 = (uint)uVar18;
            uVar10 = uVar14;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar24 = fVar23 * (param_1->AllocatorInstance).Data[uVar22];
            uVar10 = uVar11;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if (fVar25 <= fVar24) {
              fVar24 = fVar25;
            }
            if (fVar24 <= 0.0) {
              fVar24 = 0.0;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar18 = (ulonglong)(uVar15 + 1);
            (param_1->AllocatorInstance).Data[uVar22] = fVar24;
            uVar22 = uVar22 + 1;
          } while ((longlong)uVar22 < lVar20);
        }
      }
      else if ((param_3) && (0 < (int)uVar10)) {
        local_a0 = (code *)0x0;
        uVar22 = uVar18;
        do {
          uVar14 = (uint)uVar18;
          uVar10 = uVar11;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar25 = (param_1->AllocatorInstance).Data[uVar22];
          if (fVar23 <= fVar25) {
            fVar25 = fVar23;
          }
          uVar10 = uVar11;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar18 = (ulonglong)(uVar14 + 1);
          (param_1->AllocatorInstance).Data[uVar22] = fVar25;
          uVar22 = uVar22 + 1;
        } while ((longlong)uVar22 < lVar20);
      }
    }
  }
  return;
}

// GetIdenticalNodePairs @ 14644aaf0

bool __cdecl
TRBFInterpolator<FRBFEntry>::GetIdenticalNodePairs
          (TArrayView<FRBFEntry,int> *param_1,
          TFunction<float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)> *param_2,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  TFunction<float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FRBFEntry *pFVar11;
  FRBFEntry *pFVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  uint local_98;
  uint local_94;
  uint uStack_90;
  longlong local_88;
  int local_80;
  uint local_7c;
  uint local_78;
  longlong local_70;
  TFunction<float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)> *local_68;
  longlong *local_60;
  longlong local_58;
  
  iVar10 = param_1->ArrayNum;
  local_80 = iVar10;
  local_68 = param_2;
  if (iVar10 < 2) {
    if (*(longlong *)param_2 != 0) {
      plVar14 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar14 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    return false;
  }
  pFVar11 = TArrayView<FRBFEntry,int>::operator[](param_1,0);
  pFVar12 = TArrayView<FRBFEntry,int>::operator[](param_1,0);
  fVar17 = UE::Core::Private::Function::
           TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)>
           ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)>
                         *)param_2,pFVar12,pFVar11);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  local_98 = 0;
  if (0 < iVar10 + -1) {
    local_70 = 0;
    local_88 = 0;
    do {
      uVar15 = local_98 + 1;
      local_58 = local_88 + 1;
      local_78 = uVar15;
      if ((int)uVar15 < iVar10) {
        local_7c = ~local_98 >> 0x1f;
        local_60 = (longlong *)&param_2->field_0x10;
        lVar4 = local_70;
        do {
          uVar5 = local_7c;
          uVar9 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pFVar11 = param_1->DataPtr;
          uVar9 = 0;
          if ((int)local_98 < param_1->ArrayNum) {
            uVar9 = uVar5;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pTVar6 = local_68;
          lVar16 = (longlong)&(param_1->DataPtr->Values).AllocatorInstance.Data + local_70;
          UE::Core::Private::Function::CheckCallable(*(void **)local_68);
          pcVar3 = *(code **)pTVar6;
          plVar14 = (longlong *)local_60[3];
          if ((longlong *)local_60[3] == (longlong *)0x0) {
            plVar14 = local_60;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          fVar18 = (float)(*pcVar3)(uVar13,lVar16,
                                    (longlong)&pFVar11[1].Values.AllocatorInstance.Data + lVar4);
          bVar7 = FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>(fVar18,fVar17,0x20);
          if (bVar7) {
            pFVar2 = (param_3->AllocatorInstance).Data;
            local_94 = local_98;
            piVar1 = &param_3->ArrayMax;
            uStack_90 = uVar15;
            if (((pFVar2 <= (FScriptContainerElement *)&local_94) &&
                ((FScriptContainerElement *)&local_94 < pFVar2 + (longlong)*piVar1 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            iVar10 = param_3->ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar10 + 1;
            *(ulonglong *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) =
                 CONCAT44(uStack_90,local_94);
          }
          uVar15 = uVar15 + 1;
          param_2 = local_68;
          iVar10 = local_80;
          lVar4 = lVar4 + 0x10;
        } while ((int)uVar15 < local_80);
      }
      local_70 = local_70 + 0x10;
      local_98 = local_78;
      local_88 = local_58;
    } while ((int)local_78 < iVar10 + -1);
  }
  iVar10 = param_3->ArrayNum;
  if (*(longlong *)param_2 != 0) {
    plVar14 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return iVar10 != 0;
}

// MakeUpperKernel @ 14645e240

void __thiscall TRBFInterpolator<FRBFEntry>::MakeUpperKernel(TRBFInterpolator<FRBFEntry> *this)

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
      local_70 = (longlong)&(((this->Nodes).DataPtr)->Values).AllocatorInstance.Data + lVar13;
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
      lVar12 = (longlong)&(((this->Nodes).DataPtr)->Values).AllocatorInstance.Data + local_80;
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
      lVar13 = lVar13 + 0x10;
      uVar9 = (ulonglong)local_res8;
      FVar14.Data[iVar6] = local_88[0];
      uVar10 = iVar6 + 1;
      uVar11 = (ulonglong)uVar10;
      local_60 = CONCAT44(local_60._4_4_,uVar10);
    } while ((int)(uVar15 + 1) < iVar1);
    local_res8 = local_res8 + 1;
    uVar9 = (ulonglong)local_res8;
    local_80 = local_80 + 0x10;
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

