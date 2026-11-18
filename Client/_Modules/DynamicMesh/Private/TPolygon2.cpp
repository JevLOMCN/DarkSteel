// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// TPolygon2<double> @ 14c7b1f60

TPolygon2<double> * __thiscall
UE::Geometry::TPolygon2<double>::TPolygon2<double>
          (TPolygon2<double> *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  TVector2<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TPolygon2<double> *pTVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar10 = param_2->ArrayNum;
  uVar14 = (ulonglong)uVar10;
  uVar15 = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar13 = &(this->Vertices).ArrayNum;
  piVar1 = &(this->Vertices).ArrayMax;
  *piVar1 = 0;
  *piVar13 = 0;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar14);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,(ForAnyElementType *)this,piVar13,piVar1);
    uVar17 = uVar15;
    uVar18 = uVar15;
    do {
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < (int)uVar14) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar12;
      }
      uVar10 = *(uint *)(uVar18 + (longlong)param_2->DataPtr);
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar12;
      }
      pTVar2 = param_1->DataPtr + (int)uVar10;
      uVar5 = *(undefined4 *)&pTVar2->field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 0xc);
      uVar10 = 0;
      if ((int)uVar16 < (this->Vertices).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar12;
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar10 = param_2->ArrayNum;
      uVar14 = (ulonglong)uVar10;
      uVar18 = uVar18 + 4;
      pFVar3 = (this->Vertices).AllocatorInstance.Data + uVar15;
      *(undefined4 *)pFVar3 = uVar5;
      *(undefined4 *)(pFVar3 + 4) = uVar6;
      *(undefined4 *)(pFVar3 + 8) = uVar7;
      *(undefined4 *)(pFVar3 + 0xc) = uVar8;
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar16 + 1) < (int)uVar10);
  }
  return this;
}

// Simplify @ 14c82eb00

void __thiscall
UE::Geometry::TPolygon2<double>::Simplify(TPolygon2<double> *this,double param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  longlong local_res20;
  longlong local_98;
  longlong local_90;
  TArray<bool,TSizedDefaultAllocator<32>_> local_88;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_78 [4];
  
  iVar10 = (this->Vertices).ArrayNum;
  if (iVar10 < 3) {
    return;
  }
  iVar2 = iVar10 + 1;
  uVar16 = 0;
  local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0].ArrayNum = 0;
  local_78[0].ArrayMax = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,&local_78[0].AllocatorInstance,&local_78[0].ArrayNum,&local_78[0].ArrayMax
            );
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,&local_88.AllocatorInstance,&local_88.ArrayNum,&local_88.ArrayMax);
  uVar19 = uVar16;
  uVar15 = uVar16;
  do {
    uVar11 = (uint)uVar19;
    uVar18 = 0;
    if ((int)uVar11 < local_88.ArrayNum) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar19 = (ulonglong)(uVar11 + 1);
    local_88.AllocatorInstance.Data[uVar15] = (FScriptContainerElement)0x0;
    uVar15 = uVar15 + 1;
  } while ((int)(uVar11 + 1) < iVar2);
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  uVar6 = *(undefined8 *)pFVar3;
  uVar7 = *(undefined8 *)(pFVar3 + 8);
  if ((local_78[0].ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = 1;
  uVar19 = 1;
  *(undefined8 *)local_78[0].AllocatorInstance.Data = uVar6;
  *(undefined8 *)(local_78[0].AllocatorInstance.Data + 8) = uVar7;
  if (iVar10 < 2) {
LAB_14c82efe7:
    if (((this->Vertices).ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Vertices).AllocatorInstance.Data;
    uVar6 = *(undefined8 *)(pFVar3 + 0x10);
    uVar7 = *(undefined8 *)(pFVar3 + 0x18);
    if ((local_78[0].ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(local_78[0].AllocatorInstance.Data + 0x10) = uVar6;
    *(undefined8 *)(local_78[0].AllocatorInstance.Data + 0x18) = uVar7;
    if (((this->Vertices).ArrayNum < 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Vertices).AllocatorInstance.Data;
    uVar22 = *(undefined4 *)(pFVar3 + 0x20);
    uVar23 = *(undefined4 *)(pFVar3 + 0x24);
    uVar24 = *(undefined4 *)(pFVar3 + 0x28);
    uVar25 = *(undefined4 *)(pFVar3 + 0x2c);
LAB_14c82f0b4:
    if ((local_78[0].ArrayNum < 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = true;
    uVar18 = 3;
    *(undefined4 *)(local_78[0].AllocatorInstance.Data + 0x20) = uVar22;
    *(undefined4 *)(local_78[0].AllocatorInstance.Data + 0x24) = uVar23;
    *(undefined4 *)(local_78[0].AllocatorInstance.Data + 0x28) = uVar24;
    *(undefined4 *)(local_78[0].AllocatorInstance.Data + 0x2c) = uVar25;
  }
  else {
    lVar17 = 0;
    local_98 = 1;
    local_res20 = 0;
    lVar20 = 0x10;
    local_90 = 0x10;
    do {
      uVar11 = 0;
      if ((int)(uint)uVar16 < (this->Vertices).ArrayNum) {
        uVar11 = ~(uint)uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar17 = local_res20, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Vertices).AllocatorInstance.Data;
      uVar12 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar17 = local_res20, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->Vertices).AllocatorInstance.Data;
      dVar5 = *(double *)(pFVar3 + lVar17 + 8) - *(double *)(pFVar13 + lVar20 + 8);
      dVar21 = *(double *)(pFVar3 + lVar17) - *(double *)(pFVar13 + lVar20);
      if (param_1 * param_1 <= dVar5 * dVar5 + dVar21 * dVar21) {
        uVar11 = 0;
        if ((int)uVar12 < (this->Vertices).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data + lVar20;
        uVar6 = *(undefined8 *)pFVar3;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar11 = 0;
        if ((int)uVar18 < local_78[0].ArrayNum) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = uVar18 + 1;
        *(undefined8 *)(local_78[0].AllocatorInstance.Data + local_90) = uVar6;
        *(undefined8 *)(local_78[0].AllocatorInstance.Data + local_90 + 8) = uVar7;
        local_90 = local_90 + 0x10;
        uVar16 = uVar19;
        lVar17 = lVar20;
        local_res20 = lVar20;
      }
      uVar19 = (ulonglong)(uVar12 + 1);
      local_98 = local_98 + 1;
      lVar20 = lVar20 + 0x10;
    } while (local_98 < iVar10);
    bVar8 = false;
    if (uVar18 == 1) goto LAB_14c82efe7;
    if (uVar18 == 2) {
      iVar2 = (this->Vertices).ArrayNum;
      uVar18 = (uint)uVar16;
      uVar11 = uVar18 + 1;
      if ((int)uVar11 < iVar10) {
        uVar18 = 0;
        if ((int)uVar11 < iVar2) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
        uVar22 = *(undefined4 *)pFVar3;
        uVar23 = *(undefined4 *)(pFVar3 + 4);
        uVar24 = *(undefined4 *)(pFVar3 + 8);
        uVar25 = *(undefined4 *)(pFVar3 + 0xc);
      }
      else {
        uVar12 = uVar18 - 1;
        uVar11 = 0;
        if ((int)uVar12 < iVar2) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        uVar6 = *(undefined8 *)pFVar3;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        if ((local_78[0].ArrayNum < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(local_78[0].AllocatorInstance.Data + 0x10) = uVar6;
        *(undefined8 *)(local_78[0].AllocatorInstance.Data + 0x18) = uVar7;
        uVar11 = 0;
        if ((int)uVar18 < (this->Vertices).ArrayNum) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
        uVar22 = *(undefined4 *)pFVar3;
        uVar23 = *(undefined4 *)(pFVar3 + 4);
        uVar24 = *(undefined4 *)(pFVar3 + 8);
        uVar25 = *(undefined4 *)(pFVar3 + 0xc);
      }
      goto LAB_14c82f0b4;
    }
  }
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  uVar6 = *(undefined8 *)pFVar3;
  uVar7 = *(undefined8 *)(pFVar3 + 8);
  uVar11 = 0;
  if ((int)uVar18 < local_78[0].ArrayNum) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar17 = (longlong)(int)uVar18;
  *(undefined8 *)(local_78[0].AllocatorInstance.Data + lVar17 * 0x10) = uVar6;
  *(undefined8 *)(local_78[0].AllocatorInstance.Data + lVar17 * 0x10 + 8) = uVar7;
  if ((bVar8) || (param_2 <= 0.0)) {
    uVar11 = 0;
    if (0 < lVar17 + 1) {
      lVar20 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar11 < local_88.ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        local_88.AllocatorInstance.Data[lVar20] = (FScriptContainerElement)0x1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < lVar17 + 1);
    }
    iVar10 = local_88.ArrayNum;
    uVar11 = uVar18;
  }
  else {
    uVar11 = 0;
    if ((int)uVar18 < local_88.ArrayNum) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.AllocatorInstance.Data[lVar17] = (FScriptContainerElement)0x1;
    if ((local_88.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *local_88.AllocatorInstance.Data = (FScriptContainerElement)0x1;
    SimplifyDouglasPeucker(param_2,local_78,0,uVar18,&local_88);
    uVar12 = 0;
    if ((int)uVar18 < 1) goto LAB_14c82f550;
    lVar20 = 0;
    iVar10 = local_88.ArrayNum;
    uVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_88.ArrayNum;
      }
      uVar11 = uVar14 + 1;
      if (local_88.AllocatorInstance.Data[lVar20] == (FScriptContainerElement)0x0) {
        uVar11 = uVar14;
      }
      uVar12 = uVar12 + 1;
      lVar20 = lVar20 + 1;
      uVar14 = uVar11;
    } while ((int)uVar12 < (int)uVar18);
  }
  if (uVar11 == 2) {
    if (1 < (int)uVar18) {
      uVar19 = (ulonglong)(uVar18 - 1);
      do {
        if (iVar10 < 2) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = local_88.ArrayNum;
        }
        if (local_88.AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
          if ((iVar10 < 2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_88.AllocatorInstance.Data[1] = (FScriptContainerElement)0x1;
LAB_14c82f4ad:
          iVar10 = local_88.ArrayNum;
        }
        else {
          uVar12 = uVar18 - 1;
          uVar11 = 0;
          if ((int)uVar12 < iVar10) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = local_88.ArrayNum;
          }
          if (local_88.AllocatorInstance.Data[lVar17 + -1] == (FScriptContainerElement)0x0) {
            uVar11 = 0;
            if ((int)uVar12 < iVar10) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_88.AllocatorInstance.Data[lVar17 + -1] = (FScriptContainerElement)0x1;
            goto LAB_14c82f4ad;
          }
        }
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  else if (uVar11 == 1) {
    if ((iVar10 < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.AllocatorInstance.Data[1] = (FScriptContainerElement)0x1;
    if ((local_88.ArrayNum < 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.AllocatorInstance.Data[2] = (FScriptContainerElement)0x1;
  }
LAB_14c82f550:
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  if ((this->Vertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  uVar11 = 0;
  if (0 < (int)uVar18) {
    lVar20 = 0;
    lVar17 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar11 < local_88.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_88.AllocatorInstance.Data[lVar17] != (FScriptContainerElement)0x0) {
        uVar12 = 0;
        if ((int)uVar11 < local_78[0].ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        pFVar13 = local_78[0].AllocatorInstance.Data + lVar20;
        if (((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->Vertices).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->Vertices).ArrayNum = iVar10 + 1;
        uVar6 = *(undefined8 *)(pFVar13 + 8);
        pFVar3 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar3 = *(undefined8 *)pFVar13;
        *(undefined8 *)(pFVar3 + 8) = uVar6;
      }
      uVar11 = uVar11 + 1;
      lVar17 = lVar17 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar11 < (int)uVar18);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].AllocatorInstance.Data);
  }
  return;
}

// SimplifyDouglasPeucker @ 14c831570

void __cdecl
UE::Geometry::TPolygon2<double>::SimplifyDouglasPeucker
          (double param_1,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,int param_4,TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  TVector2<double>_u_0 local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  
  piVar1 = &param_5->ArrayNum;
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  uVar21 = (ulonglong)param_3;
  uVar16 = uVar21;
  while( true ) {
    uVar2 = param_2->ArrayNum;
    iVar14 = *piVar1;
    if (iVar14 < (int)uVar2) {
      iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar2 - iVar14,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
      memset((param_5->AllocatorInstance).Data + iVar13,0,(longlong)(int)(uVar2 - iVar14));
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar14) {
        uVar18 = iVar14 - uVar2;
        if (((int)(uVar2 | uVar18) < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar18 != 0) {
          pFVar17 = (param_5->AllocatorInstance).Data + (int)uVar2;
          iVar14 = (*piVar1 - uVar2) - uVar18;
          if (iVar14 != 0) {
            memmove(pFVar17,pFVar17 + (int)uVar18,(longlong)iVar14);
          }
          *piVar1 = *piVar1 - uVar18;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&param_5->AllocatorInstance,*piVar1,&param_5->ArrayMax);
        }
      }
    }
    uVar2 = (uint)uVar16;
    uVar18 = uVar2 + 1;
    if (param_4 <= (int)uVar18) {
      return;
    }
    uVar19 = uVar16 & 0xffffffff;
    uVar25 = 0;
    uVar26 = 0;
    uVar15 = 0;
    if (param_4 < param_2->ArrayNum) {
      uVar15 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = (param_2->AllocatorInstance).Data;
    uVar15 = 0;
    if ((int)uVar2 < param_2->ArrayNum) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSegment2<double>::TSegment2<double>
              ((TSegment2<double> *)&local_100._s_0,
               (TVector2<double> *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x10)
               ,(TVector2<double> *)(pFVar17 + (longlong)param_4 * 0x10));
    dVar10 = local_e0;
    dVar9 = local_e8;
    dVar8 = local_f0;
    uVar7 = local_100._s_0.Y;
    uVar6 = local_100._s_0.X;
    uVar5 = (ulonglong)local_e0 >> 0x20;
    uVar20 = uVar21;
    do {
      uVar20 = uVar20 + 1;
      uVar15 = 0;
      if ((int)uVar18 < param_2->ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = (param_2->AllocatorInstance).Data;
      dVar22 = *(double *)(pFVar17 + uVar20 * 0x10);
      dVar23 = *(double *)(pFVar17 + uVar20 * 0x10 + 8);
      dVar24 = (dVar23 - (double)uVar7) * dVar9 + (dVar22 - (double)uVar6) * dVar8;
      if (dVar24 < dVar10) {
        if ((double)CONCAT44((uint)uVar5 ^ (uint)uVar4,SUB84(dVar10,0) ^ uVar27) < dVar24) {
          dVar23 = dVar23 - (dVar9 * dVar24 + (double)uVar7);
          dVar22 = dVar22 - (dVar8 * dVar24 + (double)uVar6);
          dVar22 = dVar23 * dVar23 + dVar22 * dVar22;
        }
        else {
          dVar22 = ((double)uVar6 - dVar8 * dVar10) - dVar22;
          dVar23 = ((double)uVar7 - dVar9 * dVar10) - dVar23;
          dVar22 = dVar23 * dVar23 + dVar22 * dVar22;
        }
      }
      else {
        dVar23 = (dVar9 * dVar10 + (double)uVar7) - dVar23;
        dVar22 = (dVar8 * dVar10 + (double)uVar6) - dVar22;
        dVar22 = dVar23 * dVar23 + dVar22 * dVar22;
      }
      bVar12 = dVar22 <= (double)CONCAT44(uVar26,uVar25);
      uVar16 = (ulonglong)uVar18;
      if (dVar22 <= (double)CONCAT44(uVar26,uVar25)) {
        dVar22 = (double)CONCAT44(uVar26,uVar25);
      }
      uVar11 = uVar20;
      if (bVar12) {
        uVar16 = uVar19 & 0xffffffff;
        uVar11 = uVar21;
      }
      uVar21 = uVar11;
      uVar18 = uVar18 + 1;
      uVar15 = (uint)uVar16;
      uVar19 = (ulonglong)(int)uVar15;
      uVar25 = SUB84(dVar22,0);
      uVar26 = (undefined4)((ulonglong)dVar22 >> 0x20);
    } while ((int)uVar18 < param_4);
    if (dVar22 <= param_1 * param_1) {
      return;
    }
    uVar18 = 0;
    if ((int)uVar15 < *piVar1) {
      uVar18 = ~uVar15 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    (param_5->AllocatorInstance).Data[uVar21] = (FScriptContainerElement)0x1;
    SimplifyDouglasPeucker(param_1,param_2,uVar2,uVar15,param_5);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

