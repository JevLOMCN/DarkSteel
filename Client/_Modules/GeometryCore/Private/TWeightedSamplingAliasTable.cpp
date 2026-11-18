// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 12

// TWeightedSamplingAliasTable<float> @ 1435e2ab0

TWeightedSamplingAliasTable<float> * __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::TWeightedSamplingAliasTable<float>
          (TWeightedSamplingAliasTable<float> *this,TArrayView<float_const_,int> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  TArrayView<float_const_,int> local_18;
  
  pfVar2 = param_1->DataPtr;
  (this->Probability).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Probability).ArrayNum = 0;
  (this->Probability).ArrayMax = 0;
  bVar3 = false;
  (this->Alias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alias).ArrayNum = 0;
  (this->Alias).ArrayMax = 0;
  fVar4 = 0.0;
  pfVar1 = pfVar2 + param_1->ArrayNum;
  for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 1) {
    if (0.0 <= *pfVar2) {
      fVar4 = fVar4 + *pfVar2;
    }
    else {
      bVar3 = true;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  Init(this,&local_18,fVar4,bVar3);
  return this;
}

// TWeightedSamplingAliasTable<float> @ 1435e2b30

TWeightedSamplingAliasTable<float> * __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::TWeightedSamplingAliasTable<float>
          (TWeightedSamplingAliasTable<float> *this,TArrayView<float_const_,int> *param_1,
          float param_2,bool param_3)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->Probability).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Probability).ArrayNum = 0;
  (this->Probability).ArrayMax = 0;
  (this->Alias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alias).ArrayNum = 0;
  (this->Alias).ArrayMax = 0;
  Init(this,&local_18,param_2,param_3);
  return this;
}

// TWeightedSamplingAliasTable<double> @ 1435e2b70

TWeightedSamplingAliasTable<double> * __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::TWeightedSamplingAliasTable<double>
          (TWeightedSamplingAliasTable<double> *this,TArrayView<double_const_,int> *param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  TArrayView<double_const_,int> local_18;
  
  pdVar2 = param_1->DataPtr;
  (this->Probability).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Probability).ArrayNum = 0;
  (this->Probability).ArrayMax = 0;
  bVar3 = false;
  (this->Alias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alias).ArrayNum = 0;
  (this->Alias).ArrayMax = 0;
  dVar4 = 0.0;
  pdVar1 = pdVar2 + param_1->ArrayNum;
  for (; pdVar2 != pdVar1; pdVar2 = pdVar2 + 1) {
    if (0.0 <= *pdVar2) {
      dVar4 = dVar4 + *pdVar2;
    }
    else {
      bVar3 = true;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  Init(this,&local_18,dVar4,bVar3);
  return this;
}

// TWeightedSamplingAliasTable<double> @ 1435e2bf0

TWeightedSamplingAliasTable<double> * __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::TWeightedSamplingAliasTable<double>
          (TWeightedSamplingAliasTable<double> *this,TArrayView<double_const_,int> *param_1,
          double param_2,bool param_3)

{
  TArrayView<double_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->Probability).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Probability).ArrayNum = 0;
  (this->Probability).ArrayMax = 0;
  (this->Alias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alias).ArrayNum = 0;
  (this->Alias).ArrayMax = 0;
  Init(this,&local_18,param_2,param_3);
  return this;
}

// Init @ 1436098a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::Init
          (TWeightedSamplingAliasTable<float> *this,TArrayView<float_const_,int> *param_1,
          float param_2,bool param_3)

{
  float *pfVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  TArrayView<float_const_,int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 local_res8 [8];
  TArrayView<float_const_,int> *local_res10;
  undefined1 local_res18 [8];
  char local_res20;
  uint local_e8;
  uint local_e4;
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  TArray<float,TSizedDefaultAllocator<32>_> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<float_const_,int> local_98 [5];
  
  piVar21 = &(this->Probability).ArrayMax;
  uVar13 = 0;
  (this->Probability).ArrayNum = 0;
  local_res10 = param_1;
  local_res20 = param_3;
  if (*piVar21 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar21);
  }
  (this->Alias).ArrayNum = 0;
  if ((this->Alias).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Alias).AllocatorInstance,0,&(this->Alias).ArrayMax);
  }
  uVar12 = param_1->ArrayNum;
  uVar19 = (ulonglong)(int)uVar12;
  local_c0 = uVar12;
  if (0.0 < param_2) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Probability,uVar12,Default);
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_c8 = 0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar12 < 0) goto LAB_14360a67a;
    if (0 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_d0,0,(int *)((longlong)&local_c8 + 4));
    }
    if (local_d4 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_e0,local_d8,&local_d4);
    }
    pTVar6 = local_res10;
    fVar5 = __real_3f800000;
    local_bc = 0xffffffff;
    uVar15 = uVar12;
    uVar14 = 0xffffffff;
    local_e8 = uVar12;
    while (uVar18 = local_e8 - 1, local_e8 = uVar18, -1 < (int)uVar18) {
      uVar15 = 0;
      if ((int)uVar18 < pTVar6->ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uVar15 = local_e8;
      fVar23 = pTVar6->DataPtr[(int)uVar18];
      uVar18 = 0;
      if ((int)local_e8 < (this->Probability).ArrayNum) {
        uVar18 = ~local_e8 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      *(float *)((this->Probability).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) =
           ((float)(int)uVar12 / param_2) * fVar23;
      uVar18 = uVar14;
      if (param_3) {
        lVar16 = (longlong)(int)local_e8;
        uVar15 = 0;
        if ((int)local_e8 < (this->Probability).ArrayNum) {
          uVar15 = ~local_e8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar3 = (this->Probability).AllocatorInstance.Data + lVar16 * 4;
        uVar18 = local_e8;
        if (*(float *)pFVar3 <= 0.0 && *(float *)pFVar3 != 0.0) {
          lVar16 = (longlong)(int)local_e8;
          uVar15 = 0;
          if ((int)local_e8 < (this->Probability).ArrayNum) {
            uVar15 = ~local_e8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          *(undefined4 *)((this->Probability).AllocatorInstance.Data + lVar16 * 4) = 0;
          uVar18 = uVar14;
        }
      }
      lVar16 = (longlong)(int)local_e8;
      uVar15 = 0;
      if ((int)local_e8 < (this->Probability).ArrayNum) {
        uVar15 = ~local_e8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar3 = (this->Probability).AllocatorInstance.Data + lVar16 * 4;
      if (fVar5 < *(float *)pFVar3 || fVar5 == *(float *)pFVar3) {
        if (((local_e0.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < local_e0.Data + (longlong)local_d4 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = local_d8;
        if (local_d8 == local_d4) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_e0,&local_d4);
        }
        local_d8 = iVar10 + 1;
        FVar17.Data = local_e0.Data;
      }
      else {
        if (((local_d0.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < local_d0.Data + (longlong)local_c8._4_4_ * 4))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = (int)local_c8;
        if ((int)local_c8 == local_c8._4_4_) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
        }
        local_c8 = CONCAT44(local_c8._4_4_,iVar10 + 1);
        FVar17.Data = local_d0.Data;
      }
      *(uint *)(FVar17.Data + (longlong)iVar10 * 4) = local_e8;
      uVar15 = local_c0;
      uVar14 = uVar18;
    }
    piVar21 = &(this->Probability).ArrayMax;
    local_bc = uVar14;
    if ((param_3) && (uVar14 == 0xffffffff)) {
      (this->Probability).ArrayNum = 0;
      if (*piVar21 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)this,0,piVar21);
      }
      bVar9 = false;
    }
    else {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Alias,uVar15,Default);
      FVar17.Data = local_e0.Data;
      iVar10 = local_d8;
      while ((local_e0.Data = FVar17.Data, local_d8 = iVar10, (int)local_c8 != 0 && (iVar10 != 0)))
      {
        iVar10 = (int)local_c8;
        if ((int)local_c8 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (int)local_c8;
        }
        iVar20 = iVar10 + -1;
        uVar12 = *(uint *)(local_d0.Data + (longlong)iVar20 * 4);
        iVar11 = (iVar10 - iVar20) + -1;
        if (iVar11 != 0) {
          memmove(local_d0.Data + (longlong)iVar20 * 4,local_d0.Data + (longlong)iVar20 * 4 + 4,
                  (longlong)iVar11 << 2);
          iVar10 = (int)local_c8;
        }
        local_c8 = CONCAT44(local_c8._4_4_,iVar10 + -1);
        if ((local_d8 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = local_d8 + -1;
        uVar15 = *(uint *)(local_e0.Data + (longlong)iVar10 * 4);
        iVar20 = (local_d8 - iVar10) + -1;
        if (iVar20 != 0) {
          memmove(local_e0.Data + (longlong)iVar10 * 4,local_e0.Data + (longlong)iVar10 * 4 + 4,
                  (longlong)iVar20 << 2);
        }
        local_d8 = local_d8 + -1;
        uVar14 = 0;
        if ((int)uVar12 < (this->Alias).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        local_e4 = uVar15;
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        *(uint *)((this->Alias).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar15;
        uVar14 = 0;
        uVar15 = uVar14;
        if ((int)uVar12 < (this->Probability).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        lVar16 = (longlong)(int)local_e4;
        pFVar3 = (this->Probability).AllocatorInstance.Data;
        uVar15 = uVar14;
        if ((int)local_e4 < (this->Probability).ArrayNum) {
          uVar15 = ~local_e4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        fVar23 = *(float *)((this->Probability).AllocatorInstance.Data + lVar16 * 4);
        lVar16 = (longlong)(int)local_e4;
        fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar12 * 4);
        uVar12 = uVar14;
        if ((int)local_e4 < (this->Probability).ArrayNum) {
          uVar12 = ~local_e4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        *(float *)((this->Probability).AllocatorInstance.Data + lVar16 * 4) =
             (fVar23 + fVar2) - fVar5;
        lVar16 = (longlong)(int)local_e4;
        if ((int)local_e4 < (this->Probability).ArrayNum) {
          uVar14 = ~local_e4 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar3 = (this->Probability).AllocatorInstance.Data + lVar16 * 4;
        if (fVar5 < *(float *)pFVar3 || fVar5 == *(float *)pFVar3) {
          if (((local_e0.Data <= (FScriptContainerElement *)&local_e4) &&
              ((FScriptContainerElement *)&local_e4 < local_e0.Data + (longlong)local_d4 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = local_d8;
          if (local_d8 == local_d4) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_e0,&local_d4);
          }
          local_d8 = iVar10 + 1;
          FVar17.Data = local_e0.Data;
        }
        else {
          if (((local_d0.Data <= (FScriptContainerElement *)&local_e4) &&
              ((FScriptContainerElement *)&local_e4 < local_d0.Data + (longlong)local_c8._4_4_ * 4))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (int)local_c8;
          if ((int)local_c8 == local_c8._4_4_) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
          }
          local_c8 = CONCAT44(local_c8._4_4_,iVar10 + 1);
          FVar17.Data = local_d0.Data;
        }
        *(uint *)(FVar17.Data + (longlong)iVar10 * 4) = local_e4;
        FVar17.Data = local_e0.Data;
        iVar10 = local_d8;
      }
      pFVar3 = FVar17.Data + (longlong)iVar10 * 4;
      while( true ) {
        if (local_d8 != iVar10) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar17.Data == pFVar3) break;
        uVar12 = *(uint *)FVar17.Data;
        uVar15 = 0;
        if ((int)uVar12 < (this->Probability).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar17.Data = FVar17.Data + 4;
        *(undefined4 *)((this->Probability).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
             0x7f7fffff;
      }
      iVar10 = (int)local_c8;
      uVar13 = (ulonglong)(int)local_c8;
      pFVar3 = local_d0.Data + uVar13 * 4;
      FVar17.Data = local_d0.Data;
      while( true ) {
        if ((int)uVar13 != iVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar17.Data == pFVar3) break;
        uVar12 = *(uint *)FVar17.Data;
        lVar16 = (longlong)(int)uVar12;
        uVar15 = ~uVar12 >> 0x1f;
        if (local_res20 == '\0') {
LAB_14360a5cb:
          uVar14 = 0;
          if ((int)uVar12 < (this->Probability).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar17.Data = FVar17.Data + 4;
          *(undefined4 *)((this->Probability).AllocatorInstance.Data + lVar16 * 4) = 0x7f7fffff;
          uVar13 = local_c8 & 0xffffffff;
        }
        else {
          uVar14 = 0;
          if ((int)uVar12 < local_res10->ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (0.0 < local_res10->DataPtr[lVar16] || local_res10->DataPtr[lVar16] == 0.0)
          goto LAB_14360a5cb;
          uVar14 = 0;
          if ((int)uVar12 < (this->Probability).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          *(undefined4 *)((this->Probability).AllocatorInstance.Data + lVar16 * 4) = 0;
          uVar14 = 0;
          if ((int)uVar12 < (this->Alias).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar17.Data = FVar17.Data + 4;
          *(uint *)((this->Alias).AllocatorInstance.Data + lVar16 * 4) = local_bc;
          uVar13 = local_c8 & 0xffffffff;
        }
      }
      bVar9 = (this->Probability).ArrayNum != 0;
    }
    FVar17.Data = local_d0.Data;
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
      FVar17.Data = local_d0.Data;
    }
LAB_14360a63b:
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  else {
    if (param_3) {
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b8,uVar12,Default);
      pTVar6 = local_res10;
      fVar5 = __real_3f800000;
      bVar9 = false;
      fVar23 = 0.0;
      uVar22 = uVar13;
      if (0 < (int)uVar12) {
        do {
          uVar14 = (uint)uVar13;
          uVar18 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < pTVar6->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pfVar1 = pTVar6->DataPtr + uVar22;
          if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
            fVar23 = fVar23 + fVar5;
            uVar15 = 0;
            if ((int)uVar14 < local_b8.ArrayNum) {
              uVar15 = uVar18;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            *(undefined4 *)(local_b8.AllocatorInstance.Data + uVar22 * 4) = 0x3f800000;
          }
          else {
            bVar9 = true;
            uVar15 = 0;
            if ((int)uVar14 < local_b8.ArrayNum) {
              uVar15 = uVar18;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            *(undefined4 *)(local_b8.AllocatorInstance.Data + uVar22 * 4) = 0xbf800000;
          }
          uVar13 = (ulonglong)(uVar14 + 1);
          uVar22 = uVar22 + 1;
        } while ((longlong)uVar22 < (longlong)uVar19);
        if (bVar9) {
          if (fVar23 == 0.0) {
            bVar9 = false;
            FVar17.Data = local_b8.AllocatorInstance.Data;
          }
          else {
            iVar10 = local_b8.ArrayNum;
            local_a8 = local_b8.AllocatorInstance.Data;
            if ((local_b8.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            iStack_a0 = iVar10;
            local_98[0]._12_4_ = uStack_9c;
            local_98[0].ArrayNum = iVar10;
            local_98[0].DataPtr = (float *)local_a8;
            bVar9 = Init(this,local_98,param_2,true);
            FVar17.Data = local_b8.AllocatorInstance.Data;
          }
          goto LAB_14360a63b;
        }
        uVar19 = (ulonglong)uVar12;
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
    piVar21 = &(this->Probability).ArrayMax;
    iVar10 = (int)uVar19;
    if (iVar10 < 0) {
LAB_14360a67a:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar19 & 0xffffffff);
    }
    (this->Probability).ArrayNum = 0;
    if (*piVar21 != iVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar10,(ForAnyElementType *)this,0,piVar21);
    }
    if (0 < iVar10) {
      uVar19 = uVar19 & 0xffffffff;
      do {
        pFVar3 = (this->Probability).AllocatorInstance.Data;
        if (((pFVar3 < (FScriptContainerElement *)0x150aa6e05) &&
            (&TMathUtilConstants<float>::MaxReal < pFVar3 + (longlong)*piVar21 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = (this->Probability).ArrayNum;
        if (iVar10 == *piVar21) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)this,piVar21);
        }
        (this->Probability).ArrayNum = iVar10 + 1;
        *(undefined4 *)((this->Probability).AllocatorInstance.Data + (longlong)iVar10 * 4) =
             0x7f7fffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    bVar9 = (this->Probability).ArrayNum != 0;
  }
  return bVar9;
}

// Init @ 14360a690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::Init
          (TWeightedSamplingAliasTable<double> *this,TArrayView<double_const_,int> *param_1,
          double param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint local_res8;
  undefined1 local_res18 [8];
  char local_res20;
  uint local_f8;
  uint local_f4;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_c8;
  uint local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<double_const_,int> local_98 [5];
  
  piVar19 = &(this->Probability).ArrayMax;
  uVar13 = 0;
  (this->Probability).ArrayNum = 0;
  local_res20 = param_3;
  if (*piVar19 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar19);
  }
  (this->Alias).ArrayNum = 0;
  if ((this->Alias).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Alias).AllocatorInstance,0,&(this->Alias).ArrayMax);
  }
  uVar12 = param_1->ArrayNum;
  local_b8 = uVar12;
  if (0.0 < param_2) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Probability,uVar12,Default);
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    local_d8 = 0;
    local_f0.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_e0,0,(int *)((longlong)&local_d8 + 4));
    }
    if (local_e4 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_f0,local_e8,&local_e4);
    }
    cVar6 = local_res20;
    dVar5 = __real_3ff0000000000000;
    local_res8 = 0xffffffff;
    local_f8 = uVar12;
    while (uVar15 = local_f8 - 1, local_f8 = uVar15, -1 < (int)uVar15) {
      uVar14 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uVar14 = local_f8;
      dVar2 = param_1->DataPtr[(int)uVar15];
      uVar15 = 0;
      if ((int)local_f8 < (this->Probability).ArrayNum) {
        uVar15 = ~local_f8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      *(double *)((this->Probability).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
           ((double)(int)uVar12 / param_2) * dVar2;
      if (cVar6 != '\0') {
        lVar16 = (longlong)(int)local_f8;
        uVar15 = 0;
        if ((int)local_f8 < (this->Probability).ArrayNum) {
          uVar15 = ~local_f8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar1 = (this->Probability).AllocatorInstance.Data + lVar16 * 8;
        if (0.0 < *(double *)pFVar1 || *(double *)pFVar1 == 0.0) {
          local_res8 = local_f8;
        }
        else {
          lVar16 = (longlong)(int)local_f8;
          uVar15 = 0;
          if ((int)local_f8 < (this->Probability).ArrayNum) {
            uVar15 = ~local_f8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          *(undefined8 *)((this->Probability).AllocatorInstance.Data + lVar16 * 8) = 0;
        }
      }
      lVar16 = (longlong)(int)local_f8;
      uVar15 = 0;
      if ((int)local_f8 < (this->Probability).ArrayNum) {
        uVar15 = ~local_f8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar1 = (this->Probability).AllocatorInstance.Data + lVar16 * 8;
      if (dVar5 < *(double *)pFVar1 || dVar5 == *(double *)pFVar1) {
        if (((local_f0.Data <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < local_f0.Data + (longlong)local_e4 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = local_e8;
        if (local_e8 == local_e4) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f0,&local_e4);
        }
        local_e8 = iVar10 + 1;
        FVar17.Data = local_f0.Data;
      }
      else {
        if (((local_e0.Data <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < local_e0.Data + (longlong)local_d8._4_4_ * 4))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = (int)local_d8;
        if ((int)local_d8 == local_d8._4_4_) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
        FVar17.Data = local_e0.Data;
      }
      *(uint *)(FVar17.Data + (longlong)iVar10 * 4) = local_f8;
    }
    piVar19 = &(this->Probability).ArrayMax;
    if ((local_res20 == '\0') || (local_res8 != 0xffffffff)) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Alias,uVar12,Default);
      FVar17.Data = local_f0.Data;
      iVar10 = local_e8;
      while ((local_f0.Data = FVar17.Data, local_e8 = iVar10, (int)local_d8 != 0 && (iVar10 != 0)))
      {
        iVar10 = (int)local_d8;
        if ((int)local_d8 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (int)local_d8;
        }
        iVar21 = iVar10 + -1;
        uVar12 = *(uint *)(local_e0.Data + (longlong)iVar21 * 4);
        iVar11 = (iVar10 - iVar21) + -1;
        if (iVar11 != 0) {
          memmove(local_e0.Data + (longlong)iVar21 * 4,local_e0.Data + (longlong)iVar21 * 4 + 4,
                  (longlong)iVar11 << 2);
          iVar10 = (int)local_d8;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar10 + -1);
        if ((local_e8 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = local_e8 + -1;
        uVar15 = *(uint *)(local_f0.Data + (longlong)iVar10 * 4);
        iVar21 = (local_e8 - iVar10) + -1;
        if (iVar21 != 0) {
          memmove(local_f0.Data + (longlong)iVar10 * 4,local_f0.Data + (longlong)iVar10 * 4 + 4,
                  (longlong)iVar21 << 2);
        }
        local_e8 = local_e8 + -1;
        uVar14 = 0;
        if ((int)uVar12 < (this->Alias).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        local_f4 = uVar15;
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        *(uint *)((this->Alias).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar15;
        uVar14 = 0;
        uVar15 = uVar14;
        if ((int)uVar12 < (this->Probability).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        lVar16 = (longlong)(int)local_f4;
        pFVar1 = (this->Probability).AllocatorInstance.Data;
        uVar15 = uVar14;
        if ((int)local_f4 < (this->Probability).ArrayNum) {
          uVar15 = ~local_f4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        dVar2 = *(double *)((this->Probability).AllocatorInstance.Data + lVar16 * 8);
        lVar16 = (longlong)(int)local_f4;
        dVar3 = *(double *)(pFVar1 + (longlong)(int)uVar12 * 8);
        uVar12 = uVar14;
        if ((int)local_f4 < (this->Probability).ArrayNum) {
          uVar12 = ~local_f4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        *(double *)((this->Probability).AllocatorInstance.Data + lVar16 * 8) =
             (dVar2 + dVar3) - dVar5;
        lVar16 = (longlong)(int)local_f4;
        if ((int)local_f4 < (this->Probability).ArrayNum) {
          uVar14 = ~local_f4 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar1 = (this->Probability).AllocatorInstance.Data + lVar16 * 8;
        if (dVar5 < *(double *)pFVar1 || dVar5 == *(double *)pFVar1) {
          if (((local_f0.Data <= (FScriptContainerElement *)&local_f4) &&
              ((FScriptContainerElement *)&local_f4 < local_f0.Data + (longlong)local_e4 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = local_e8;
          if (local_e8 == local_e4) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_f0,&local_e4);
          }
          local_e8 = iVar10 + 1;
          FVar17.Data = local_f0.Data;
        }
        else {
          if (((local_e0.Data <= (FScriptContainerElement *)&local_f4) &&
              ((FScriptContainerElement *)&local_f4 < local_e0.Data + (longlong)local_d8._4_4_ * 4))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
          FVar17.Data = local_e0.Data;
        }
        *(uint *)(FVar17.Data + (longlong)iVar10 * 4) = local_f4;
        FVar17.Data = local_f0.Data;
        iVar10 = local_e8;
      }
      pFVar1 = FVar17.Data + (longlong)iVar10 * 4;
      while( true ) {
        if (local_e8 != iVar10) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar17.Data == pFVar1) break;
        uVar12 = *(uint *)FVar17.Data;
        uVar15 = 0;
        if ((int)uVar12 < (this->Probability).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar17.Data = FVar17.Data + 4;
        *(undefined8 *)((this->Probability).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) =
             0x7fefffffffffffff;
      }
      iVar10 = (int)local_d8;
      uVar13 = (ulonglong)(int)local_d8;
      pFVar1 = local_e0.Data + uVar13 * 4;
      FVar17.Data = local_e0.Data;
      while( true ) {
        if ((int)uVar13 != iVar10) {
          local_d0[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d0);
        }
        if (FVar17.Data == pFVar1) break;
        uVar12 = *(uint *)FVar17.Data;
        lVar16 = (longlong)(int)uVar12;
        uVar15 = ~uVar12 >> 0x1f;
        if (local_res20 == '\0') {
LAB_14360b353:
          uVar14 = 0;
          if ((int)uVar12 < (this->Probability).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar17.Data = FVar17.Data + 4;
          *(undefined8 *)((this->Probability).AllocatorInstance.Data + lVar16 * 8) =
               0x7fefffffffffffff;
          uVar13 = local_d8 & 0xffffffff;
        }
        else {
          uVar14 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (0.0 < param_1->DataPtr[lVar16] || param_1->DataPtr[lVar16] == 0.0) goto LAB_14360b353;
          uVar14 = 0;
          if ((int)uVar12 < (this->Probability).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          *(undefined8 *)((this->Probability).AllocatorInstance.Data + lVar16 * 8) = 0;
          uVar14 = 0;
          if ((int)uVar12 < (this->Alias).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar17.Data = FVar17.Data + 4;
          *(uint *)((this->Alias).AllocatorInstance.Data + lVar16 * 4) = local_res8;
          uVar13 = local_d8 & 0xffffffff;
        }
      }
      bVar9 = (this->Probability).ArrayNum != 0;
    }
    else {
      (this->Probability).ArrayNum = 0;
      if (*piVar19 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar19);
      }
      bVar9 = false;
    }
    FVar17.Data = local_e0.Data;
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
      FVar17.Data = local_e0.Data;
    }
LAB_14360b3cc:
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  else {
    if (param_3) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_c8,uVar12,Default);
      dVar2 = __real_3ff0000000000000;
      bVar9 = false;
      dVar5 = 0.0;
      uVar18 = uVar13;
      if (0 < (int)uVar12) {
        do {
          uVar14 = (uint)uVar13;
          uVar20 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar15 = uVar20;
          }
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (0.0 < param_1->DataPtr[uVar18] || param_1->DataPtr[uVar18] == 0.0) {
            dVar5 = dVar5 + dVar2;
            uVar15 = 0;
            if ((int)uVar14 < local_c8.ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            *(undefined8 *)(local_c8.AllocatorInstance.Data + uVar18 * 8) = 0x3ff0000000000000;
          }
          else {
            bVar9 = true;
            uVar15 = 0;
            if ((int)uVar14 < local_c8.ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            *(undefined8 *)(local_c8.AllocatorInstance.Data + uVar18 * 8) = 0xbff0000000000000;
          }
          uVar13 = (ulonglong)(uVar14 + 1);
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)(int)uVar12);
        uVar12 = local_b8;
        if (bVar9) {
          if (dVar5 == 0.0) {
            bVar9 = false;
            FVar17.Data = local_c8.AllocatorInstance.Data;
          }
          else {
            iVar10 = local_c8.ArrayNum;
            local_a8 = local_c8.AllocatorInstance.Data;
            if ((local_c8.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            iStack_a0 = iVar10;
            local_98[0]._12_4_ = uStack_9c;
            local_98[0].ArrayNum = iVar10;
            local_98[0].DataPtr = (double *)local_a8;
            bVar9 = Init(this,local_98,param_2,true);
            FVar17.Data = local_c8.AllocatorInstance.Data;
          }
          goto LAB_14360b3cc;
        }
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    TArray<double,TSizedDefaultAllocator<32>_>::Init
              (&this->Probability,&TMathUtilConstants<double>::MaxReal,uVar12);
    bVar9 = (this->Probability).ArrayNum != 0;
  }
  return bVar9;
}

// IsValid @ 14360d7f0

bool __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::IsValid(TWeightedSamplingAliasTable<float> *this)

{
  return (this->Probability).ArrayNum != 0;
}

// IsValid @ 14360d800

bool __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::IsValid
          (TWeightedSamplingAliasTable<double> *this)

{
  return (this->Probability).ArrayNum != 0;
}

// Num @ 143611120

int __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::Num(TWeightedSamplingAliasTable<float> *this)

{
  return (this->Probability).ArrayNum;
}

// Num @ 143611130

int __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::Num(TWeightedSamplingAliasTable<double> *this)

{
  return (this->Probability).ArrayNum;
}

// Sample @ 143619200

int __thiscall
UE::Geometry::TWeightedSamplingAliasTable<float>::Sample
          (TWeightedSamplingAliasTable<float> *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->Probability).ArrayNum;
  iVar4 = (int)((float)iVar3 * param_1);
  if ((iVar4 < 0 || iVar3 <= iVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (*(float *)((this->Probability).AllocatorInstance.Data + (longlong)iVar4 * 4) <= param_2) {
    if ((iVar4 < 0 || (this->Alias).ArrayNum <= iVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar4 = *(int *)((this->Alias).AllocatorInstance.Data + (longlong)iVar4 * 4);
  }
  return iVar4;
}

// Sample @ 143619310

int __thiscall
UE::Geometry::TWeightedSamplingAliasTable<double>::Sample
          (TWeightedSamplingAliasTable<double> *this,double param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->Probability).ArrayNum;
  iVar4 = (int)((double)iVar3 * param_1);
  if ((iVar4 < 0 || iVar3 <= iVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (*(double *)((this->Probability).AllocatorInstance.Data + (longlong)iVar4 * 8) <= param_2) {
    if ((iVar4 < 0 || (this->Alias).ArrayNum <= iVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar4 = *(int *)((this->Alias).AllocatorInstance.Data + (longlong)iVar4 * 4);
  }
  return iVar4;
}

