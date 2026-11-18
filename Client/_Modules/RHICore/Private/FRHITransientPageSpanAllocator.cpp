// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 13

// AllocSpan @ 1446d1570

int __thiscall FRHITransientPageSpanAllocator::AllocSpan(FRHITransientPageSpanAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->UnusedSpanListCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnusedSpanListCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                       ,0x350,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar5 = this->UnusedSpanListCount - 1;
  uVar4 = 0;
  if ((int)uVar5 < (this->UnusedSpanList).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = *(int *)((this->UnusedSpanList).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  this->UnusedSpanListCount = this->UnusedSpanListCount - 1;
  return iVar3;
}

// Allocate @ 1446d25f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHITransientPageSpanAllocator::Allocate
          (FRHITransientPageSpanAllocator *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2,uint param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  char cVar2;
  ERHIPipeline EVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_58;
  
  *param_4 = 0;
  if (this->FreePageCount == 0) {
    return false;
  }
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  uVar18 = 0xffffffff;
  uVar13 = *(uint *)((this->PageSpans).AllocatorInstance.Data + 0x24);
  uVar19 = param_3;
  uVar4 = 0xffffffff;
  do {
    do {
      do {
        uVar10 = uVar13;
        if (((uVar10 == 1) || (uVar10 == 0xffffffff)) || (uVar19 == 0)) {
          uVar19 = param_3 - uVar19;
          if (uVar19 != 0) {
            this->FreePageCount = this->FreePageCount - uVar19;
            this->AllocationCount = this->AllocationCount + 1;
            *param_5 = uVar4;
            *param_4 = uVar19;
          }
          return uVar19 != 0;
        }
        uVar13 = 0;
        if ((int)uVar10 < (this->PageSpans).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        pFVar5 = (this->PageSpans).AllocatorInstance.Data;
        uVar13 = *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x24);
        uVar14 = (uint)((ulonglong)*(undefined8 *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x18) >>
                       0x20);
        uVar15 = (uint)*(undefined8 *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x18);
      } while (((uVar15 <= uVar14) && (uVar15 < param_2->Graphics)) && (param_2->Graphics < uVar14))
      ;
      uVar15 = (param_2->GraphicsForkJoin).Max;
      uVar17 = (param_2->GraphicsForkJoin).Min;
    } while ((((uVar17 <= uVar15) &&
              (uVar17 < *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x10))) &&
             (*(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x10) < uVar15)) ||
            (((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false &&
              (pFVar5[(longlong)(int)uVar10 * 0x30 + 0x20] == (FScriptContainerElement)0x3)) &&
             ((param_2->Pipelines == AsyncCompute && (uVar17 < uVar14))))));
    if (uVar19 <= *(ushort *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 2)) {
      if (uVar19 < *(ushort *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 2)) {
        SplitSpan(this,uVar10,uVar19);
      }
      if ((uVar19 != *(ushort *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 2)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumPagesToFind == Span.Count",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                              ,0x3a9,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
    }
    uVar13 = *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x24);
    pFVar5[(longlong)(int)uVar10 * 0x30 + 0x2c] = (FScriptContainerElement)0x1;
    Unlink(this,uVar10);
    local_58 = uVar10;
    if (uVar4 != 0xffffffff) {
      InsertAfter(this,uVar18,uVar10);
      local_58 = uVar4;
    }
    if (*(longlong *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 8) != 0) {
      if ((param_2->Pipelines == All) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Acquire.IsSinglePipeline()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,0x1c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar18 = *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x10);
      if (uVar18 == 0xffffffff) {
        if (param_2->AsyncCompute == 0xffffffff) {
LAB_1446d2853:
          uVar18 = *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x1c);
        }
        else {
          uVar18 = *(uint *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x14);
        }
      }
      else if (*(int *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 0x14) != -1) {
        if (param_2->AsyncCompute == 0xffffffff) goto LAB_1446d2853;
        uVar18 = (param_2->GraphicsForkJoin).Min;
      }
      lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 8);
      if ((*(char *)(lVar6 + 0xa5) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InBeforeResource->IsAcquired()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,0xf6,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      if (GRHIValidationEnabled != false) {
        cVar2 = *(char *)(lVar6 + 0xa8);
        if ((*(longlong *)(lVar6 + 0x10) != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ResourceTask.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                                ,0x133,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        iVar16 = (param_1->AliasingOverlaps).ArrayNum;
        piVar1 = &(param_1->AliasingOverlaps).ArrayMax;
        uVar7 = *(undefined8 *)(lVar6 + 8);
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(param_1->AliasingOverlaps).AllocatorInstance,piVar1);
        }
        (param_1->AliasingOverlaps).ArrayNum = iVar16 + 1;
        pFVar8 = (param_1->AliasingOverlaps).AllocatorInstance.Data;
        *(undefined8 *)(pFVar8 + (longlong)iVar16 * 0x10) = uVar7;
        pFVar8[(longlong)iVar16 * 0x10 + 8] = (FScriptContainerElement)(cVar2 != '\0');
      }
      uVar4 = (param_1->AcquirePasses).Min;
      if (uVar18 < uVar4) {
        uVar18 = uVar4;
      }
      EVar3 = param_1->AcquirePipeline;
      (param_1->AcquirePasses).Min = uVar18;
      if ((EVar3 == AsyncCompute) && (*(char *)(lVar6 + 0xa6) != '\0')) {
        if (*(uint *)(lVar6 + 0xa0) < uVar18) {
          uVar18 = *(uint *)(lVar6 + 0xa0);
        }
        *(uint *)(lVar6 + 0xa0) = uVar18;
      }
      else {
        uVar18 = (param_1->AcquirePasses).Max;
        if (*(uint *)(lVar6 + 0xa0) < uVar18) {
          uVar18 = *(uint *)(lVar6 + 0xa0);
        }
        *(uint *)(lVar6 + 0xa0) = uVar18;
      }
      if (((param_1->AcquirePasses).Max < (param_1->AcquirePasses).Min) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("AcquirePasses.Min <= AcquirePasses.Max",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,0x109,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
    }
    if ((uVar19 < *(ushort *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 2)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumPagesToFind >= Span.Count",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                            ,0x3bf,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    uVar19 = uVar19 - *(ushort *)(pFVar5 + (longlong)(int)uVar10 * 0x30 + 2);
    uVar18 = uVar10;
    uVar4 = local_58;
  } while( true );
}

// Deallocate @ 1446d7060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientPageSpanAllocator::Deallocate
          (FRHITransientPageSpanAllocator *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TInterval<unsigned_int> TVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_3 != 0xffffffff) {
    if (this->AllocationCount == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x3d9,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    do {
      uVar5 = 0;
      if ((int)param_3 < (this->PageSpans).ArrayNum) {
        uVar5 = ~param_3 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (this->PageSpans).AllocatorInstance.Data;
      if (pFVar1[(longlong)(int)param_3 * 0x30 + 0x2c] == (FScriptContainerElement)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FreedSpan.bAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                           ,0x3dd,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this->FreePageCount =
           this->FreePageCount + (uint)*(ushort *)(pFVar1 + (longlong)(int)param_3 * 0x30 + 2);
      uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_3 * 0x30 + 0x24);
      *(FRHITransientResource **)(pFVar1 + (longlong)(int)param_3 * 0x30 + 8) = param_1;
      TVar3 = param_2->GraphicsForkJoin;
      *(undefined8 *)(pFVar1 + (longlong)(int)param_3 * 0x30 + 0x10) = *(undefined8 *)param_2;
      *(TInterval<unsigned_int> *)(pFVar1 + (longlong)(int)param_3 * 0x30 + 0x18) = TVar3;
      *(undefined4 *)(pFVar1 + (longlong)(int)param_3 * 0x30 + 0x20) =
           *(undefined4 *)&param_2->Pipelines;
      pFVar1[(longlong)(int)param_3 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
      Unlink(this,param_3);
      InsertAfter(this,0,param_3);
      param_3 = uVar5;
    } while (uVar5 != 0xffffffff);
    this->AllocationCount = this->AllocationCount - 1;
  }
  return;
}

// Flush @ 1446daae0

void __thiscall FRHITransientPageSpanAllocator::Flush(FRHITransientPageSpanAllocator *this)

{
  ushort uVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 0;
  uVar12 = 0;
  if (this->MaxPageCount != 0) {
    do {
      uVar6 = uVar12;
      if ((int)uVar11 < (this->PageToSpanStart).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
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
      uVar6 = *(uint *)((this->PageToSpanStart).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      if ((uVar6 == 0xffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SpanIndex != InvalidIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                             ,0x426,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar12;
      if ((int)uVar6 < (this->PageSpans).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
      if (pFVar10[0x2c] == (FScriptContainerElement)0x0) {
        *(undefined8 *)(pFVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar10 + 0x18) = 0xffffffff;
        *(undefined4 *)(pFVar10 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + 8) = 0;
        while( true ) {
          uVar1 = *(ushort *)(pFVar10 + 2);
          uVar2 = *(ushort *)pFVar10;
          if (((this->PageToSpanStart).ArrayNum <= (int)((uint)uVar2 + (uint)uVar1)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = *(uint *)((this->PageToSpanStart).AllocatorInstance.Data +
                           (ulonglong)((uint)uVar2 + (uint)uVar1) * 4);
          lVar9 = (longlong)(int)uVar7;
          if (uVar7 == 0xffffffff) goto LAB_1446dad29;
          uVar8 = uVar12;
          if ((int)uVar7 < (this->PageSpans).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->PageSpans).AllocatorInstance.Data;
          if (pFVar3[lVar9 * 0x30 + 0x2c] != (FScriptContainerElement)0x0) break;
          *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 8) = 0;
          Unlink(this,uVar6);
          InsertBefore(this,uVar7,uVar6);
          MergeSpans(this,uVar6,uVar7);
        }
        uVar11 = uVar11 + *(ushort *)(pFVar3 + lVar9 * 0x30 + 2);
      }
LAB_1446dad29:
      uVar11 = uVar11 + *(ushort *)(pFVar10 + 2);
    } while (uVar11 < this->MaxPageCount);
  }
  return;
}

// GetAllocationPageCount @ 1446dda30

uint __thiscall
FRHITransientPageSpanAllocator::GetAllocationPageCount
          (FRHITransientPageSpanAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(int)param_1;
  if ((param_1 == 0xffffffff) || (this->MaxSpanCount <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpanIndex != InvalidIndex && SpanIndex < MaxSpanCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x487,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->PageSpans).AllocatorInstance.Data[uVar6 * 0x30 + 0x2c] == (FScriptContainerElement)0x0)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageSpans[SpanIndex].bAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x488,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  do {
    uVar5 = (uint)uVar6;
    uVar4 = 0;
    if ((int)uVar5 < (this->PageSpans).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    uVar3 = uVar3 + *(ushort *)
                     ((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 2);
    uVar4 = 0;
    if ((int)uVar5 < (this->PageSpans).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    uVar4 = *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x24)
    ;
    uVar6 = (ulonglong)uVar4;
  } while (uVar4 != 0xffffffff);
  return uVar3;
}

// Init @ 1446df2f0

void __thiscall FRHITransientPageSpanAllocator::Init(FRHITransientPageSpanAllocator *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (this->MaxSpanCount != this->MaxPageCount + 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxSpanCount == MaxPageCount + 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x343,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = this->MaxPageCount + 1;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar5,(ForAnyElementType *)this,&(this->PageToSpanStart).ArrayNum,
                     &(this->PageToSpanStart).ArrayMax);
  memset((this->PageToSpanStart).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar5 << 2
        );
  iVar5 = this->MaxPageCount + 1;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar5,&(this->PageToSpanEnd).AllocatorInstance,
                     &(this->PageToSpanEnd).ArrayNum,&(this->PageToSpanEnd).ArrayMax);
  memset((this->PageToSpanEnd).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar5 << 2);
  uVar1 = this->MaxSpanCount;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,uVar1,&(this->PageSpans).AllocatorInstance,&(this->PageSpans).ArrayNum,
                     &(this->PageSpans).ArrayMax);
  DefaultConstructItems<FRHITransientPageSpanAllocator::FPageSpan,int>
            ((this->PageSpans).AllocatorInstance.Data + (longlong)iVar4 * 0x30,uVar1);
  uVar1 = this->MaxSpanCount;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar1,&(this->UnusedSpanList).AllocatorInstance,
                     &(this->UnusedSpanList).ArrayNum,&(this->UnusedSpanList).ArrayMax);
  memset((this->UnusedSpanList).AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)(int)uVar1 << 2);
  Reset(this);
  return;
}

// InsertAfter @ 1446dfe50

void __thiscall
FRHITransientPageSpanAllocator::InsertAfter
          (FRHITransientPageSpanAllocator *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertPosition != InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x44f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertSpanIndex != InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x450,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->PageSpans).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->PageSpans).AllocatorInstance.Data;
  if (((*(int *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x24) != -1) ||
      (*(int *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x28) != -1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SpanToInsert.IsLinked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x453,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x24) =
       *(undefined4 *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x24);
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x24);
  if (uVar5 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar5 < (this->PageSpans).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x28) =
         param_2;
  }
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x24) = param_2;
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x28) = param_1;
  return;
}

// InsertBefore @ 1446e0040

void __thiscall
FRHITransientPageSpanAllocator::InsertBefore
          (FRHITransientPageSpanAllocator *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_1 + 1 & 0xfffffffe) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertPosition != InvalidIndex && InsertPosition != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x463,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertSpanIndex != InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x464,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->PageSpans).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->PageSpans).AllocatorInstance.Data;
  if (((*(int *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x24) != -1) ||
      (*(int *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x28) != -1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SpanToInsert.IsLinked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x467,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x28) =
       *(int *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x28);
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x28);
  if (uVar5 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar5 < (this->PageSpans).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x24) =
         param_2;
  }
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x28) = param_2;
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x24) = param_1;
  return;
}

// MergeSpans @ 1446e07b0

void __thiscall
FRHITransientPageSpanAllocator::MergeSpans
          (FRHITransientPageSpanAllocator *this,uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar5 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (this->PageSpans).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30;
  uVar5 = 0;
  if ((int)param_2 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)param_2 * 0x30;
  pFVar9 = (this->PageSpans).AllocatorInstance.Data + lVar6;
  if ((uint)*(ushort *)pFVar7 + (uint)*(ushort *)(pFVar7 + 2) != (uint)*(ushort *)pFVar9) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Span0.Offset + Span0.Count == Span1.Offset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x40d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar7[0x2c] != pFVar9[0x2c]) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Span0.bAllocated == Span1.bAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x40e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar7 + 0x24) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Span0.NextSpanIndex == SpanIndex1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x40f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar9 + 0x28) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Span1.PrevSpanIndex == SpanIndex0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x410,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(ushort *)pFVar7;
  if ((this->PageToSpanStart).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)((this->PageToSpanStart).AllocatorInstance.Data + (ulonglong)uVar1 * 4) = param_1;
  uVar1 = *(ushort *)pFVar9;
  if ((this->PageToSpanStart).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((this->PageToSpanStart).AllocatorInstance.Data + (ulonglong)uVar1 * 4) =
       0xffffffff;
  uVar1 = *(ushort *)pFVar7;
  uVar2 = *(ushort *)(pFVar7 + 2);
  if ((this->PageToSpanEnd).ArrayNum <= (int)((uint)uVar2 + (uint)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)
   ((this->PageToSpanEnd).AllocatorInstance.Data + (ulonglong)((uint)uVar2 + (uint)uVar1) * 4) =
       0xffffffff;
  uVar1 = *(ushort *)(pFVar9 + 2);
  uVar2 = *(ushort *)pFVar9;
  if ((this->PageToSpanEnd).ArrayNum <= (int)((uint)uVar2 + (uint)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)((this->PageToSpanEnd).AllocatorInstance.Data +
           (ulonglong)((uint)uVar2 + (uint)uVar1) * 4) = param_1;
  *(ushort *)(pFVar7 + 2) = *(ushort *)(pFVar7 + 2) + *(ushort *)(pFVar9 + 2);
  Unlink(this,param_2);
  uVar5 = 0;
  if ((int)param_2 < (this->PageSpans).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (this->PageSpans).AllocatorInstance.Data;
  if ((*(int *)(pFVar7 + lVar6 + 0x24) != -1) || (*(int *)(pFVar7 + lVar6 + 0x28) != -1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PageSpans[SpanIndex].IsLinked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                       ,0x359,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = this->UnusedSpanListCount;
  uVar8 = 0;
  if ((int)uVar5 < (this->UnusedSpanList).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)((this->UnusedSpanList).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = param_2;
  this->UnusedSpanListCount = this->UnusedSpanListCount + 1;
  if (this->MaxPageCount < this->UnusedSpanListCount) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnusedSpanListCount <= MaxPageCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                       ,0x35c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 1446e2c20

void __thiscall FRHITransientPageSpanAllocator::Reset(FRHITransientPageSpanAllocator *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  uVar12 = 0;
  this->FreePageCount = this->MaxPageCount;
  uVar5 = this->MaxSpanCount;
  this->AllocationCount = 0;
  uVar6 = 0;
  uVar14 = uVar12;
  if (uVar5 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar14 < (this->UnusedSpanList).ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar14 + 1;
      *(uint *)((this->UnusedSpanList).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
           ~uVar14 + uVar5;
      uVar6 = this->MaxSpanCount;
      uVar5 = uVar6;
      uVar14 = uVar11;
    } while (uVar11 < uVar6);
  }
  this->UnusedSpanListCount = uVar6;
  uVar5 = AllocSpan(this);
  uVar6 = AllocSpan(this);
  if ((uVar5 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeadSpanIndex == FreeSpanListHeadIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x35d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((uVar6 != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TailSpanIndex == FreeSpanListTailIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x35e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = 0;
  if (this->MaxPageCount == 0) {
    uVar12 = 0;
    if ((int)uVar5 < (this->PageSpans).ArrayNum) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x24) = uVar6
    ;
    if ((int)uVar6 < (this->PageSpans).ArrayNum) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30 + 0x28) = uVar5
    ;
    return;
  }
  uVar11 = AllocSpan(this);
  lVar13 = (longlong)(int)uVar11;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)((this->PageSpans).AllocatorInstance.Data + 8) = 0;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)(this->PageSpans).AllocatorInstance.Data = 0;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)((this->PageSpans).AllocatorInstance.Data + 2) = 0;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->PageSpans).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x14) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x18) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x1c) = 0;
  *(undefined4 *)(pFVar1 + 0x20) = 0;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + 0x24) = 0xffffffff;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + 0x28) = 0xffffffff;
  if (((this->PageSpans).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PageSpans).AllocatorInstance.Data[0x2c] = (FScriptContainerElement)0x0;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)((this->PageSpans).AllocatorInstance.Data + 0x38) = 0;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)((this->PageSpans).AllocatorInstance.Data + 0x30) = 0;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)((this->PageSpans).AllocatorInstance.Data + 0x32) = 0;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->PageSpans).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x44) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x48) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0x4c) = 0;
  *(undefined4 *)(pFVar1 + 0x50) = 0;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + 0x54) = 0xffffffff;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + 0x58) = 0xffffffff;
  if (((this->PageSpans).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PageSpans).AllocatorInstance.Data[0x5c] = (FScriptContainerElement)0x0;
  uVar7 = 0;
  if ((int)uVar5 < (this->PageSpans).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x24) = uVar11;
  uVar8 = 0;
  uVar7 = uVar8;
  if ((int)uVar6 < (this->PageSpans).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar10 = ~uVar11 >> 0x1f;
  *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30 + 0x28) = uVar11;
  uVar7 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)((this->PageSpans).AllocatorInstance.Data + lVar13 * 0x30 + 8) = 0;
  uVar7 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)((this->PageSpans).AllocatorInstance.Data + lVar13 * 0x30) = 0;
  uVar7 = this->MaxPageCount;
  uVar9 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(short *)((this->PageSpans).AllocatorInstance.Data + lVar13 * 0x30 + 2) = (short)uVar7;
  uVar7 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->PageSpans).AllocatorInstance.Data;
  pFVar1 = pFVar2 + lVar13 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = 0xffffffff;
  *(undefined4 *)(pFVar1 + 4) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 8) = 0xffffffff;
  *(undefined4 *)(pFVar1 + 0xc) = 0;
  *(undefined4 *)(pFVar2 + lVar13 * 0x30 + 0x20) = 0;
  uVar7 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)((this->PageSpans).AllocatorInstance.Data + lVar13 * 0x30 + 0x28) = uVar5;
  uVar5 = uVar8;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar5 = uVar10;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)((this->PageSpans).AllocatorInstance.Data + lVar13 * 0x30 + 0x24) = uVar6;
  if ((int)uVar11 < (this->PageSpans).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PageSpans).AllocatorInstance.Data[lVar13 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
  if (this->MaxPageCount != 0xffffffff) {
    do {
      uVar5 = uVar14;
      if ((int)uVar12 < (this->PageToSpanStart).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = (longlong)(int)uVar12;
      *(undefined4 *)((this->PageToSpanStart).AllocatorInstance.Data + lVar13 * 4) = 0xffffffff;
      uVar5 = uVar14;
      if ((int)uVar12 < (this->PageToSpanEnd).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(undefined4 *)((this->PageToSpanEnd).AllocatorInstance.Data + lVar13 * 4) = 0xffffffff;
    } while (uVar12 < this->MaxPageCount + 1);
  }
  if (((this->PageToSpanStart).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)(this->PageToSpanStart).AllocatorInstance.Data = uVar11;
  uVar5 = this->MaxPageCount;
  uVar6 = 0;
  if ((int)uVar5 < (this->PageToSpanEnd).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)((this->PageToSpanEnd).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar11;
  return;
}

// SplitSpan @ 1446e4fc0

void __thiscall
FRHITransientPageSpanAllocator::SplitSpan
          (FRHITransientPageSpanAllocator *this,uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  short sVar10;
  uint uVar11;
  
  uVar7 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (this->PageSpans).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30;
  if (*(ushort *)(pFVar8 + 2) < param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPageCount <= Span.Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x3ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 < *(ushort *)(pFVar8 + 2)) {
    uVar6 = AllocSpan(this);
    uVar7 = 0;
    if ((int)uVar6 < (this->PageSpans).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar9 = (this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
    *(undefined8 *)(pFVar9 + 8) = *(undefined8 *)(pFVar8 + 8);
    uVar4 = *(undefined8 *)(pFVar8 + 0x18);
    *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
    *(undefined8 *)(pFVar9 + 0x18) = uVar4;
    *(undefined4 *)(pFVar9 + 0x20) = *(undefined4 *)(pFVar8 + 0x20);
    *(undefined4 *)(pFVar9 + 0x24) = *(undefined4 *)(pFVar8 + 0x24);
    *(uint *)(pFVar9 + 0x28) = param_1;
    sVar10 = (short)param_2;
    *(short *)(pFVar9 + 2) = *(short *)(pFVar8 + 2) - sVar10;
    *(short *)pFVar9 = sVar10 + *(short *)pFVar8;
    pFVar9[0x2c] = pFVar8[0x2c];
    *(short *)(pFVar8 + 2) = sVar10;
    *(uint *)(pFVar8 + 0x24) = uVar6;
    uVar7 = *(uint *)(pFVar9 + 0x24);
    if (uVar7 != 0xffffffff) {
      uVar11 = 0;
      if ((int)uVar7 < (this->PageSpans).ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x28) =
           uVar6;
    }
    uVar1 = *(ushort *)pFVar9;
    if ((this->PageToSpanEnd).ArrayNum <= (int)(uint)uVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)((this->PageToSpanEnd).AllocatorInstance.Data + (ulonglong)uVar1 * 4) = param_1;
    uVar1 = *(ushort *)pFVar9;
    if ((this->PageToSpanStart).ArrayNum <= (int)(uint)uVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)((this->PageToSpanStart).AllocatorInstance.Data + (ulonglong)uVar1 * 4) = uVar6;
    uVar1 = *(ushort *)pFVar9;
    uVar2 = *(ushort *)(pFVar9 + 2);
    if ((this->PageToSpanEnd).ArrayNum <= (int)((uint)uVar2 + (uint)uVar1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)((this->PageToSpanEnd).AllocatorInstance.Data +
             (ulonglong)((uint)uVar2 + (uint)uVar1) * 4) = uVar6;
  }
  return;
}

// Unlink @ 1446e7020

void __thiscall
FRHITransientPageSpanAllocator::Unlink(FRHITransientPageSpanAllocator *this,uint param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->PageSpans).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->PageSpans).AllocatorInstance.Data;
  if (param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpanIndex != FreeSpanListHeadIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x478,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x28);
  if (uVar6 != 0xffffffff) {
    uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x24);
    uVar5 = 0;
    if ((int)uVar6 < (this->PageSpans).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30 + 0x24) =
         uVar1;
  }
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x24);
  if (uVar6 != 0xffffffff) {
    uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x28);
    uVar5 = 0;
    if ((int)uVar6 < (this->PageSpans).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30 + 0x28) =
         uVar1;
  }
  *(undefined8 *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x24) = 0xffffffffffffffff;
  return;
}

// Validate @ 1446e7740

void __thiscall FRHITransientPageSpanAllocator::Validate(FRHITransientPageSpanAllocator *this)

{
  return;
}

