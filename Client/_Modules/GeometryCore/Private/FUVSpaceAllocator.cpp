// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 25

// FUVSpaceAllocator @ 1435e42d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FUVSpaceAllocator * __thiscall
UE::Geometry::FUVSpaceAllocator::FUVSpaceAllocator
          (FUVSpaceAllocator *this,EMode param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FUVSpaceAllocator *pFVar8;
  uint uVar9;
  uint uVar10;
  
  this->Width = param_2;
  this->Height = param_3;
  this->Mode = param_1;
  piVar1 = &(this->Bits).ArrayNum;
  this->Pitch = param_2 + 0x3f >> 6;
  piVar2 = &(this->Bits).ArrayMax;
  this->RasterWidth = 0;
  this->RasterHeight = 0;
  (this->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rows).ArrayNum = 0;
  (this->Rows).ArrayMax = 0;
  (this->Columns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).ArrayNum = 0;
  (this->Columns).ArrayMax = 0;
  (this->Bits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SortedRowsIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedRowsIndex).ArrayNum = 0;
  (this->SortedRowsIndex).ArrayMax = 0;
  (this->SortedColumnsIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedColumnsIndex).ArrayNum = 0;
  (this->SortedColumnsIndex).ArrayMax = 0;
  if ((0xffff < this->Width) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Width <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x12,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUVSpaceAllocator *)(*pcVar3)();
    return pFVar8;
  }
  if ((0xffff < this->Height) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Height <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x13,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUVSpaceAllocator *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = *piVar1;
  uVar9 = this->Pitch * this->Height + 1;
  if (iVar6 < (int)uVar9) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9 - iVar6,&(this->Bits).AllocatorInstance,piVar1,piVar2);
    memset((this->Bits).AllocatorInstance.Data + (longlong)iVar5 * 8,0,
           (longlong)(int)(uVar9 - iVar6) << 3);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar6) {
      uVar10 = iVar6 - uVar9;
      if (((int)(uVar10 | uVar9) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FUVSpaceAllocator *)(*pcVar3)();
        return pFVar8;
      }
      if (uVar10 != 0) {
        _Dst = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar6 = (*piVar1 - uVar10) - uVar9;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar10;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Bits).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Rows,this->Height,Default);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SortedRowsIndex,this->Height,Default);
  uVar10 = 0;
  uVar9 = uVar10;
  if (this->Height != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->SortedRowsIndex).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FUVSpaceAllocator *)(*pcVar3)();
        return pFVar8;
      }
      *(short *)((this->SortedRowsIndex).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) =
           (short)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar9 < this->Height);
  }
  TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Columns,this->Width,Default);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SortedColumnsIndex,this->Width,Default);
  uVar9 = 0;
  if (this->Width != 0) {
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->SortedColumnsIndex).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FUVSpaceAllocator *)(*pcVar3)();
        return pFVar8;
      }
      *(short *)((this->SortedColumnsIndex).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
           (short)uVar10;
      uVar10 = uVar10 + 1;
      uVar9 = this->Width;
    } while (uVar10 < uVar9);
  }
  InitRuns(this,&this->Rows,uVar9,this->RasterHeight);
  InitRuns(this,&this->Columns,this->Height,this->RasterWidth);
  memset((this->Bits).AllocatorInstance.Data,0,(ulonglong)(this->Pitch * this->RasterHeight * 8));
  this->RasterWidth = 0;
  this->RasterHeight = 0;
  return this;
}

// operator= @ 1435e4f70

FUVSpaceAllocator * __thiscall
UE::Geometry::FUVSpaceAllocator::operator=(FUVSpaceAllocator *this,FUVSpaceAllocator *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FUVSpaceAllocator *pFVar4;
  
  if (param_1 != this) {
    if (this->Mode != param_1->Mode) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == Other.Mode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x49,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FUVSpaceAllocator *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (this->Width != param_1->Width) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Width == Other.Width",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x4a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FUVSpaceAllocator *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (this->Height != param_1->Height) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Height == Other.Height",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x4b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FUVSpaceAllocator *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (this->Pitch != param_1->Pitch) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pitch == Other.Pitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x4c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FUVSpaceAllocator *)(*pcVar2)();
        return pFVar4;
      }
    }
    memcpy((this->Bits).AllocatorInstance.Data,(param_1->Bits).AllocatorInstance.Data,
           (ulonglong)(param_1->RasterHeight * this->Pitch * 8));
    uVar1 = param_1->RasterHeight;
    if (uVar1 < this->RasterHeight) {
      memset((this->Bits).AllocatorInstance.Data + (ulonglong)(this->Pitch * uVar1) * 8,0,
             (ulonglong)((this->RasterHeight - uVar1) * this->Pitch * 8));
    }
    this->RasterWidth = param_1->RasterWidth;
    this->RasterHeight = param_1->RasterHeight;
    CopyRuns(this,&this->Rows,&param_1->Rows,param_1->RasterHeight);
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
              (&this->SortedRowsIndex,&param_1->SortedRowsIndex);
    CopyRuns(this,&this->Columns,&param_1->Columns,param_1->RasterWidth);
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
              (&this->SortedColumnsIndex,&param_1->SortedColumnsIndex);
  }
  return this;
}

// operator() @ 1435e7e20

bool __thiscall
`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if ((int)param_2 < *(int *)(lVar1 + 0x20)) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x18) + (longlong)(int)param_2 * 0x28);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x20)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return uVar5 < *(uint *)(*(longlong *)(lVar1 + 0x18) + (longlong)(int)param_1 * 0x28);
}

// operator() @ 1435ea520

bool __thiscall
`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::operator()
          (void *this,uint param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if ((int)param_2 < *(int *)(lVar1 + 0x30)) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x28) + (longlong)(int)param_2 * 0x28);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x30)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return uVar5 < *(uint *)(*(longlong *)(lVar1 + 0x28) + (longlong)(int)param_1 * 0x28);
}

// AddUsedSegment @ 1435f03c0

void __thiscall
UE::Geometry::FUVSpaceAllocator::AddUsedSegment
          (FUVSpaceAllocator *this,FRun *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_18;
  uint uStack_14;
  
  pFVar2 = (param_1->Segments).AllocatorInstance.Data;
  local_18 = param_2;
  uStack_14 = param_3;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(param_1->Segments).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->Segments).ArrayNum;
  piVar1 = &(param_1->Segments).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(param_1->Segments).AllocatorInstance,piVar1);
  }
  (param_1->Segments).ArrayNum = iVar5 + 1;
  *(ulonglong *)((param_1->Segments).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       CONCAT44(uStack_14,local_18);
  if (param_1->LongestSegment < uStack_14) {
    param_1->LongestSegment = uStack_14;
  }
  return;
}

// Alloc @ 1435f0490

void __thiscall UE::Geometry::FUVSpaceAllocator::Alloc(FUVSpaceAllocator *this,FRect *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = param_1->Y;
  if (uVar10 < param_1->H + uVar10) {
    uVar7 = param_1->W;
    uVar2 = param_1->X;
    do {
      uVar8 = uVar7;
      uVar6 = uVar2;
      if (uVar2 < uVar7 + uVar2) {
        do {
          uVar9 = (uVar6 >> 6) + uVar10 * this->Pitch;
          uVar5 = 0;
          if ((int)uVar9 < (this->Bits).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = param_1->W;
          }
          pFVar1 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
          *(ulonglong *)pFVar1 = *(ulonglong *)pFVar1 | 1L << (uVar6 & 0x3f);
          if (this->RasterHeight <= uVar10) {
            this->RasterHeight = uVar10 + 1;
          }
          if (this->RasterWidth <= uVar6) {
            this->RasterWidth = uVar6 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2 + uVar7);
      }
      uVar7 = uVar8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_1->Y + param_1->H);
  }
  return;
}

// Alloc @ 1435f0600

void __thiscall
UE::Geometry::FUVSpaceAllocator::Alloc
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res10;
  
  local_res10 = 0;
  if (param_1->H != 0) {
    uVar2 = param_1->W;
    do {
      uVar6 = 0;
      if (uVar2 != 0) {
        do {
          uVar8 = local_res10 * param_2->Pitch + (uVar6 >> 6);
          uVar5 = 0;
          if ((int)uVar8 < (param_2->Bits).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(ulonglong *)((param_2->Bits).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) >>
               (uVar6 & 0x3f) & 1) != 0) {
            uVar7 = param_1->Y + local_res10;
            uVar9 = param_1->X + uVar6;
            uVar8 = uVar7 * this->Pitch + (uVar9 >> 6);
            uVar5 = 0;
            if ((int)uVar8 < (this->Bits).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
            *(ulonglong *)pFVar1 = *(ulonglong *)pFVar1 | 1L << (uVar9 & 0x3f);
            if (this->RasterHeight <= uVar7) {
              this->RasterHeight = uVar7 + 1;
            }
            if (this->RasterWidth <= uVar9) {
              this->RasterWidth = uVar9 + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < param_1->H);
  }
  MergeSegments(this,param_1,param_2);
  return;
}

// Clear @ 1435f4110

void __thiscall UE::Geometry::FUVSpaceAllocator::Clear(FUVSpaceAllocator *this)

{
  InitRuns(this,&this->Rows,this->Width,this->RasterHeight);
  InitRuns(this,&this->Columns,this->Height,this->RasterWidth);
  memset((this->Bits).AllocatorInstance.Data,0,(ulonglong)(this->Pitch * this->RasterHeight * 8));
  this->RasterWidth = 0;
  this->RasterHeight = 0;
  return;
}

// CopyRuns @ 1435f8790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FUVSpaceAllocator::CopyRuns
          (FUVSpaceAllocator *this,
          TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,param_2->ArrayNum,No);
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayNum < param_3) {
    param_3 = param_1->ArrayNum;
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if (0 < param_3) {
    pFVar4 = pFVar7 + 8;
    pFVar3 = pFVar6 + 0x14;
    uVar5 = (ulonglong)(uint)param_3;
    do {
      pFVar1 = pFVar3 + -0xc;
      *(undefined4 *)pFVar6 = *(undefined4 *)pFVar7;
      if (pFVar1 != pFVar4) {
        iVar2 = *(int *)&pFVar4[8].field_0x0;
        _Src = *(FScriptContainerElement **)&pFVar4->field_0x0;
        *(int *)(pFVar3 + -4) = iVar2;
        if ((iVar2 == 0) && (*(int *)pFVar3 == 0)) {
          *(undefined4 *)pFVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar2,*(int *)pFVar3,(ForAnyElementType *)pFVar1,iVar2,(int *)pFVar3);
          if (iVar2 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar3 + 4),
                 (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar4 + 0x10));
      pFVar6 = pFVar6 + 0x28;
      pFVar3 = pFVar3 + 0x28;
      pFVar7 = pFVar7 + 0x28;
      pFVar4 = pFVar4 + 0x28;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// CreateUsedSegments @ 1435f8930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(FUVSpaceAllocator *this)

{
  FRun *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint local_res8;
  FUVSpaceAllocator *local_res10;
  FUVSpaceAllocator *local_res18;
  
  if ((this->Mode != UsedSegments) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EMode::UsedSegments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x22f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SortedRowsIndex,this->RasterHeight,No);
  pFVar13 = (this->Bits).AllocatorInstance.Data;
  local_res8 = 0;
  if (this->RasterHeight != 0) {
    do {
      uVar12 = 0;
      uVar5 = 0;
      if ((int)local_res8 < (this->SortedRowsIndex).ArrayNum) {
        uVar5 = ~local_res8 >> 0x1f;
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
      lVar8 = (longlong)(int)local_res8;
      *(short *)((this->SortedRowsIndex).AllocatorInstance.Data + lVar8 * 2) = (short)local_res8;
      uVar5 = 0;
      if ((int)local_res8 < (this->Rows).ArrayNum) {
        uVar5 = ~local_res8 >> 0x1f;
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
      pFVar2 = (this->Rows).AllocatorInstance.Data;
      *(undefined4 *)(pFVar2 + lVar8 * 0x28) = 0;
      pFVar1 = (FRun *)(pFVar2 + lVar8 * 0x28);
      (pFVar1->Segments).ArrayNum = 0;
      if ((pFVar1->Segments).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(pFVar1->Segments).AllocatorInstance,0,&(pFVar1->Segments).ArrayMax);
      }
      uVar10 = this->Pitch;
      uVar5 = 0xffffffff;
      if (uVar10 != 0) {
        uVar6 = 0;
        do {
          uVar14 = *(ulonglong *)pFVar13;
          if (uVar14 == 0xffffffffffffffff) {
            uVar7 = uVar6;
            if (-1 < (int)uVar5) {
              uVar7 = uVar5;
            }
            uVar5 = uVar7;
            if (uVar12 == uVar10 - 1) {
              uVar10 = (uVar6 - uVar5) + 0x40;
LAB_1435f8ae0:
              AddUsedSegment(this,pFVar1,uVar5,uVar10);
              uVar5 = 0xffffffff;
            }
          }
          else if (uVar14 == 0) {
            if (-1 < (int)uVar5) {
              uVar10 = uVar6 - uVar5;
              goto LAB_1435f8ae0;
            }
          }
          else {
            uVar10 = 0;
            uVar9 = 1;
            do {
              if ((uVar14 & uVar9) == 0) {
                if (-1 < (int)uVar5) {
                  iVar11 = uVar6 - uVar5;
                  goto LAB_1435f8b30;
                }
              }
              else {
                if ((int)uVar5 < 0) {
                  uVar5 = uVar6 + uVar10;
                }
                if (uVar6 + uVar10 == this->Width - 1) {
                  iVar11 = (uVar6 - uVar5) + 1;
LAB_1435f8b30:
                  AddUsedSegment(this,pFVar1,uVar5,iVar11 + uVar10);
                  uVar5 = 0xffffffff;
                }
              }
              uVar10 = uVar10 + 1;
              uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
            } while (uVar10 < 0x40);
          }
          uVar10 = this->Pitch;
          uVar12 = uVar12 + 1;
          uVar6 = uVar6 + 0x40;
          pFVar13 = pFVar13 + 8;
        } while (uVar12 < uVar10);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < this->RasterHeight);
  }
  local_res10 = this;
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_1>_>_>
            ((ushort *)(this->SortedRowsIndex).AllocatorInstance.Data,
             (this->SortedRowsIndex).ArrayNum,local_res8._0_1_,(<lambda_1> *)&local_res10);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SortedColumnsIndex,this->RasterWidth,No);
  uVar14 = 0;
  if (this->RasterWidth != 0) {
    do {
      uVar12 = (uint)uVar14;
      uVar5 = 0;
      if ((int)uVar12 < (this->SortedColumnsIndex).ArrayNum) {
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
      lVar8 = (longlong)(int)uVar12;
      *(short *)((this->SortedColumnsIndex).AllocatorInstance.Data + lVar8 * 2) = (short)uVar14;
      uVar5 = 0;
      if ((int)uVar12 < (this->Columns).ArrayNum) {
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
      pFVar13 = (this->Columns).AllocatorInstance.Data;
      *(undefined4 *)(pFVar13 + lVar8 * 0x28) = 0;
      pFVar1 = (FRun *)(pFVar13 + lVar8 * 0x28);
      (pFVar1->Segments).ArrayNum = 0;
      if ((pFVar1->Segments).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(pFVar1->Segments).AllocatorInstance,0,&(pFVar1->Segments).ArrayMax);
      }
      uVar5 = 0xffffffff;
      uVar10 = 0;
      if (this->RasterHeight != 0) {
        do {
          uVar7 = uVar10 * this->Pitch + (int)(uVar14 >> 6);
          uVar6 = 0;
          if ((int)uVar7 < (this->Bits).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) >>
               ((byte)uVar14 & 0x3f) & 1) == 0) {
            if (-1 < (int)uVar5) {
              uVar6 = uVar10 - uVar5;
              goto LAB_1435f8d4a;
            }
          }
          else {
            uVar7 = uVar10;
            if (-1 < (int)uVar5) {
              uVar7 = uVar5;
            }
            uVar5 = uVar7;
            if (uVar10 == this->RasterHeight - 1) {
              uVar6 = (uVar10 - uVar7) + 1;
LAB_1435f8d4a:
              AddUsedSegment(this,pFVar1,uVar5,uVar6);
              uVar5 = 0xffffffff;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < this->RasterHeight);
      }
      uVar14 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < this->RasterWidth);
  }
  local_res18 = this;
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_2>_>_>
            ((ushort *)(this->SortedColumnsIndex).AllocatorInstance.Data,
             (this->SortedColumnsIndex).ArrayNum,local_res8._0_1_,(<lambda_2> *)&local_res18);
  return;
}

// Find @ 1435fb020

bool __thiscall UE::Geometry::FUVSpaceAllocator::Find(FUVSpaceAllocator *this,FRect *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  
  uVar2 = param_1->W;
  uVar3 = param_1->H;
  uVar10 = 0;
LAB_1435fb070:
  uVar11 = 0;
  local_58 = (ulonglong)uVar10;
LAB_1435fb080:
  uVar8 = local_58 >> 0x20;
  uVar7 = (uint)(local_58 >> 0x20);
  uVar12 = uVar3 + uVar7;
  if (uVar7 < uVar12) {
    do {
      for (uVar7 = uVar10; uVar7 < uVar2 + uVar10; uVar7 = uVar7 + 1) {
        uVar9 = (int)uVar8 * this->Pitch + (uVar7 >> 6);
        uVar6 = 0;
        if ((int)uVar9 < (this->Bits).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        if ((*(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) >>
             (uVar7 & 0x3f) & 1) != 0) {
          uVar11 = uVar11 + 1;
          local_58 = CONCAT44(uVar11,(undefined4)local_58);
          if (uVar11 <= this->Height - uVar3) goto LAB_1435fb080;
          uVar10 = uVar10 + 1;
          if (this->Width - uVar2 < uVar10) {
            return false;
          }
          goto LAB_1435fb070;
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar12);
  }
  param_1->X = (undefined4)local_58;
  param_1->Y = local_58._4_4_;
  param_1->W = uVar2;
  param_1->H = uVar3;
  return true;
}

// FindBitByBit @ 1435fbc40

bool __thiscall
UE::Geometry::FUVSpaceAllocator::FindBitByBit
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_res20;
  uint local_74;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  
  uVar5 = param_1->W;
  uVar6 = param_1->H;
  local_74 = 0;
LAB_1435fbc90:
  bVar7 = (byte)local_74 & 0x3f;
  local_res20 = 0;
  local_58 = (ulonglong)local_74;
LAB_1435fbcb2:
  uVar13 = 0;
  if (uVar6 != 0) {
    do {
      uVar14 = 0;
      uVar12 = this->Pitch * uVar13;
      uVar11 = (uVar13 + local_res20) * this->Pitch + (local_74 >> 6);
      uVar4 = uVar11;
      if (uVar5 != 0) {
        do {
          uVar4 = uVar4 + 1;
          uVar10 = 0;
          if ((int)uVar11 < (this->Bits).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          uVar1 = *(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
          uVar10 = 0;
          if ((int)uVar4 < (this->Bits).ArrayNum) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          lVar2 = *(longlong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
          uVar10 = 0;
          if ((int)uVar12 < (param_2->Bits).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          if ((*(ulonglong *)((param_2->Bits).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) &
              (lVar2 << (0x40 - bVar7 & 0x3f) | uVar1 >> bVar7)) != 0) {
            local_res20 = local_res20 + 1;
            local_58 = CONCAT44(local_res20,(undefined4)local_58);
            if (local_res20 <= this->Height - uVar6) goto LAB_1435fbcb2;
            local_74 = local_74 + 1;
            if (this->Width - uVar5 < local_74) {
              return false;
            }
            goto LAB_1435fbc90;
          }
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 + 1;
          uVar14 = uVar14 + 0x40;
        } while (uVar14 < (uint)uVar5);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)uVar6);
  }
  param_1->X = (undefined4)local_58;
  param_1->Y = local_58._4_4_;
  param_1->W = uVar5;
  param_1->H = uVar6;
  return true;
}

// FindWithSegments @ 143602e00

bool __thiscall
UE::Geometry::FUVSpaceAllocator::FindWithSegments
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::FUVSpaceAllocator::FRect_const_&)> *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  FRect local_38;
  
  uVar1 = param_1->H;
  uVar4 = param_1->X;
  uVar5 = param_1->Y;
  local_38.W = param_1->W;
  local_38.H = param_1->H;
  uVar6 = this->Width - param_1->W;
  uVar7 = this->Height - uVar1;
  if (param_1->W < (uint)uVar1) {
    for (; uVar4 <= uVar6; uVar4 = uVar4 + 1) {
      local_res8[0] = 1;
      local_38.Y = 0;
      local_38.X = uVar4;
      do {
        uVar5 = local_38.Y;
        cVar2 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1);
        if (cVar2 == '\0') {
          return false;
        }
        bVar3 = TestAllColumns(this,&local_38,param_2,local_res8);
        if (bVar3) {
LAB_143602f33:
          param_1->X = local_38.X;
          param_1->Y = local_38.Y;
          param_1->W = local_38.W;
          param_1->H = local_38.H;
          return true;
        }
        local_38.Y = uVar5 + local_res8[0];
      } while (local_38.Y <= uVar7);
    }
  }
  else {
    for (; uVar5 <= uVar7; uVar5 = uVar5 + 1) {
      local_res8[0] = 1;
      local_38.X = 0;
      local_38.Y = uVar5;
      do {
        uVar4 = local_38.X;
        cVar2 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1);
        if (cVar2 == '\0') {
          return false;
        }
        bVar3 = TestAllRows(this,&local_38,param_2,local_res8);
        if (bVar3) goto LAB_143602f33;
        local_38.X = uVar4 + local_res8[0];
      } while (local_38.X <= uVar6);
    }
  }
  return false;
}

// FlipX @ 143602f50

void __thiscall UE::Geometry::FUVSpaceAllocator::FlipX(FUVSpaceAllocator *this,FRect *param_1)

{
  int iVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_48;
  
  uVar4 = this->RasterHeight;
  puVar2 = &this->RasterWidth;
  if ((uVar4 != 0) || (*puVar2 != 0)) {
    uVar11 = 0;
    iVar1 = *puVar2 - 1;
    uVar10 = *puVar2 >> 1;
    do {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar16 = 0;
        local_48 = 1;
        do {
          uVar12 = (uint)uVar13;
          uVar17 = iVar1 - uVar12;
          uVar14 = uVar11 * this->Pitch + (int)(uVar13 >> 6);
          uVar15 = 0;
          if ((int)uVar14 < (this->Bits).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar6 = *(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
          uVar14 = uVar11 * this->Pitch + (uVar17 >> 6);
          uVar15 = 0;
          if ((int)uVar14 < (this->Bits).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar7 = *(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
          iVar5 = (this->Bits).ArrayNum;
          uVar15 = uVar11 * this->Pitch + (uVar17 >> 6);
          if ((uVar6 & local_48) == 0) {
            uVar14 = 0;
            if ((int)uVar15 < iVar5) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
            *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 & ~(1L << (uVar17 & 0x3f));
          }
          else {
            uVar14 = 0;
            if ((int)uVar15 < iVar5) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
            *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 | 1L << (uVar17 & 0x3f);
            if (this->RasterHeight <= uVar11) {
              this->RasterHeight = uVar11 + 1;
            }
            if (*puVar2 <= uVar17) {
              *puVar2 = (iVar1 - uVar12) + 1;
            }
          }
          iVar5 = (this->Bits).ArrayNum;
          uVar15 = uVar11 * this->Pitch + (int)(uVar13 >> 6);
          if ((1L << ((byte)uVar17 & 0x3f) & uVar7) == 0) {
            uVar14 = 0;
            if ((int)uVar15 < iVar5) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
            *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 & ~(1L << (uVar16 & 0x3f));
          }
          else {
            uVar14 = 0;
            if ((int)uVar15 < iVar5) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
            *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 | 1L << (uVar16 & 0x3f);
            if (this->RasterHeight <= uVar11) {
              this->RasterHeight = uVar11 + 1;
            }
            if (*puVar2 <= uVar12) {
              *puVar2 = uVar12 + 1;
            }
          }
          uVar16 = uVar16 + 1;
          uVar13 = (ulonglong)(uVar12 + 1);
          local_48 = local_48 << 1 | (ulonglong)((longlong)local_48 < 0);
        } while (uVar12 + 1 < uVar10);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= uVar4 - 1);
    CreateUsedSegments(this);
  }
  return;
}

// FlipY @ 143603320

void __thiscall UE::Geometry::FUVSpaceAllocator::FlipY(FUVSpaceAllocator *this,FRect *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar1 = this->RasterHeight;
  if (uVar1 == 0) {
    if (this->RasterWidth == 0) {
      return;
    }
    CreateUsedSegments(this);
    return;
  }
  uVar12 = 0;
  if (uVar1 >> 1 != 0) {
    do {
      uVar11 = 0;
      if (this->RasterWidth != 0) {
        uVar13 = (uVar1 - 1) - uVar12;
        do {
          uVar8 = uVar11 >> 6;
          uVar9 = uVar12 * this->Pitch + uVar8;
          uVar10 = 0;
          if ((int)uVar9 < (this->Bits).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar14 = 1L << ((byte)uVar11 & 0x3f);
          uVar3 = *(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
          uVar9 = uVar13 * this->Pitch + uVar8;
          uVar10 = 0;
          if ((int)uVar9 < (this->Bits).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar2 = (this->Bits).ArrayNum;
          uVar4 = *(ulonglong *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
          uVar10 = uVar13 * this->Pitch + uVar8;
          if ((uVar3 & uVar14) == 0) {
            uVar9 = 0;
            if ((int)uVar10 < iVar2) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->Bits).AllocatorInstance.Data;
            *(ulonglong *)(pFVar5 + (longlong)(int)uVar10 * 8) =
                 *(ulonglong *)(pFVar5 + (longlong)(int)uVar10 * 8) & ~(1L << (uVar11 & 0x3f));
          }
          else {
            uVar9 = 0;
            if ((int)uVar10 < iVar2) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->Bits).AllocatorInstance.Data;
            *(ulonglong *)(pFVar5 + (longlong)(int)uVar10 * 8) =
                 *(ulonglong *)(pFVar5 + (longlong)(int)uVar10 * 8) | 1L << (uVar11 & 0x3f);
            if (this->RasterHeight <= uVar13) {
              this->RasterHeight = uVar13 + 1;
            }
            if (this->RasterWidth <= uVar11) {
              this->RasterWidth = uVar11 + 1;
            }
          }
          iVar2 = (this->Bits).ArrayNum;
          uVar8 = uVar8 + uVar12 * this->Pitch;
          if ((uVar4 & uVar14) == 0) {
            uVar10 = 0;
            if ((int)uVar8 < iVar2) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->Bits).AllocatorInstance.Data;
            *(ulonglong *)(pFVar5 + (longlong)(int)uVar8 * 8) =
                 *(ulonglong *)(pFVar5 + (longlong)(int)uVar8 * 8) & ~(1L << (uVar11 & 0x3f));
          }
          else {
            uVar10 = 0;
            if ((int)uVar8 < iVar2) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->Bits).AllocatorInstance.Data;
            *(ulonglong *)(pFVar5 + (longlong)(int)uVar8 * 8) =
                 *(ulonglong *)(pFVar5 + (longlong)(int)uVar8 * 8) | 1L << (uVar11 & 0x3f);
            if (this->RasterHeight <= uVar12) {
              this->RasterHeight = uVar12 + 1;
            }
            if (this->RasterWidth <= uVar11) {
              this->RasterWidth = uVar11 + 1;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < this->RasterWidth);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1 >> 1);
  }
  CreateUsedSegments(this);
  return;
}

// GetRasterMD5 @ 143607240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __thiscall
UE::Geometry::FUVSpaceAllocator::GetRasterMD5
          (FUVSpaceAllocator *this,FMD5Hash *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FMD5::FMD5(&local_78);
  pFVar2 = (this->Rows).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (ulonglong)this->RasterHeight * 0x28;
  for (; pFVar2 < pFVar1; pFVar2 = pFVar2 + 0x28) {
    local_88[0] = *(int *)(pFVar2 + 0x10);
    FMD5::Update(&local_78,(uchar *)local_88,4);
    FMD5::Update(&local_78,*(uchar **)(pFVar2 + 8),(ulonglong)(uint)(local_88[0] * 8));
  }
  __return_storage_ptr__->bIsValid = false;
  FMD5::Final(&local_78,__return_storage_ptr__->Bytes);
  __return_storage_ptr__->bIsValid = true;
  FMD5::~FMD5(&local_78);
  return __return_storage_ptr__;
}

// GetUsedTexels @ 143607610

uint __thiscall UE::Geometry::FUVSpaceAllocator::GetUsedTexels(FUVSpaceAllocator *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar8 = (this->Rows).AllocatorInstance.Data;
  iVar2 = (this->Rows).ArrayNum;
  uVar6 = 0;
  pFVar7 = pFVar8 + 0x10;
  local_res10 = pFVar8 + (longlong)iVar2 * 0x28;
  while( true ) {
    pFVar4 = local_res10;
    if ((this->Rows).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FRun_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar4) break;
    lVar5 = *(longlong *)(pFVar7 + -8);
    iVar3 = *(int *)pFVar7;
    lVar1 = lVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if (*(int *)pFVar7 != iVar3) {
        `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FSegment_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar5 == lVar1) break;
      uVar6 = uVar6 + *(int *)(lVar5 + 4);
      lVar5 = lVar5 + 8;
    }
    pFVar8 = pFVar8 + 0x28;
    pFVar7 = pFVar7 + 0x28;
  }
  if (this->Mode == FreeSegments) {
    uVar6 = this->Height * this->Width - uVar6;
  }
  return uVar6;
}

// InitRuns @ 14360b420

void __thiscall
UE::Geometry::FUVSpaceAllocator::InitRuns
          (FUVSpaceAllocator *this,
          TArray<UE::Geometry::FUVSpaceAllocator::FRun,TSizedDefaultAllocator<32>_> *param_1,
          uint param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined4 local_48;
  uint uStack_44;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  if (this->Mode == FreeSegments) {
    pFVar8 = pFVar9 + 0x10;
    iVar4 = param_1->ArrayNum;
    local_48 = 0;
    pFVar3 = pFVar9 + (longlong)iVar4 * 0x28;
    uStack_44 = param_2;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FRun,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar3) break;
      pFVar1 = pFVar8 + 4;
      *(int *)pFVar8 = 0;
      pFVar2 = pFVar8 + -8;
      if (*(int *)(pFVar8 + 4) < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)pFVar2,0,(int *)pFVar1);
      }
      if (((*(FScriptContainerElement **)&pFVar2->field_0x0 <= (FScriptContainerElement *)&local_48)
          && ((FScriptContainerElement *)&local_48 <
              *(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)*(int *)pFVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)pFVar8;
      if (iVar7 == *(int *)pFVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar2,(int *)pFVar1);
      }
      *(int *)pFVar8 = iVar7 + 1;
      *(ulonglong *)(*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar7 * 8) =
           CONCAT44(uStack_44,local_48);
      *(uint *)pFVar9 = param_2;
      *(int *)(pFVar8 + 0x10) = 0;
      if (*(int *)(pFVar8 + 0x14) < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,(ForAnyElementType *)(pFVar8 + 8),0,(int *)(pFVar8 + 0x14));
      }
      pFVar9 = pFVar9 + 0x28;
      pFVar8 = pFVar8 + 0x28;
    }
  }
  else if (param_3 != 0) {
    pFVar9 = pFVar9 + 0x10;
    uVar10 = (ulonglong)param_3;
    do {
      *(undefined4 *)pFVar9 = 0;
      if (*(int *)(pFVar9 + 4) < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)(pFVar9 + -8),0,(int *)(pFVar9 + 4));
      }
      *(undefined4 *)(pFVar9 + -0x10) = 0;
      pFVar9 = pFVar9 + 0x28;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    return;
  }
  return;
}

// InitSegments @ 14360b610

void __thiscall UE::Geometry::FUVSpaceAllocator::InitSegments(FUVSpaceAllocator *this)

{
  InitRuns(this,&this->Rows,this->Width,this->RasterHeight);
  InitRuns(this,&this->Columns,this->Height,this->RasterWidth);
  return;
}

// MergeRun @ 1436108e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FUVSpaceAllocator::MergeRun
          (FUVSpaceAllocator *this,FRun *param_1,FRun *param_2,uint param_3,uint param_4,
          uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FRun *local_res18;
  uint local_res20;
  undefined1 local_58 [4];
  uint local_54;
  uint local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  FScriptContainerElement *local_40;
  
  local_54 = (param_2->Segments).ArrayNum;
  uVar10 = (ulonglong)(int)local_54;
  pFVar16 = (param_2->Segments).AllocatorInstance.Data;
  local_40 = pFVar16 + uVar10 * 8;
  uVar11 = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  do {
    pFVar4 = local_40;
    if ((param_2->Segments).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FSegment_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar16 == pFVar4) {
      AlgoImpl::
      IntroSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_>
                ((FSegment *)(param_1->Segments).AllocatorInstance.Data,(param_1->Segments).ArrayNum
                 ,param_6._0_1_,(TLess<void> *)local_58);
      TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum
                (&param_1->FreeSegmentsLookup,param_6,Default);
      pFVar16 = (param_1->Segments).AllocatorInstance.Data;
      pFVar4 = (param_1->FreeSegmentsLookup).AllocatorInstance.Data;
      param_1->LongestSegment = 0;
      uVar10 = uVar11;
      uVar14 = uVar11;
      if (0 < (param_1->Segments).ArrayNum) {
        do {
          iVar8 = (int)uVar11;
          pFVar15 = pFVar16 + (longlong)iVar8 * 8;
          uVar17 = *(uint *)(pFVar16 + (longlong)iVar8 * 8 + 4);
          if ((uint)uVar10 < uVar17) {
            param_1->LongestSegment = uVar17;
            uVar10 = (ulonglong)uVar17;
          }
          uVar17 = *(int *)pFVar15 + *(int *)(pFVar15 + 4);
          if ((uint)uVar14 < uVar17) {
            pFVar15 = pFVar4 + uVar14 * 2;
            for (uVar10 = (ulonglong)(uVar17 - (uint)uVar14); uVar10 != 0; uVar10 = uVar10 - 1) {
              *(short *)pFVar15 = (short)uVar11;
              pFVar15 = pFVar15 + 2;
            }
            uVar10 = (ulonglong)param_1->LongestSegment;
          }
          uVar11 = (ulonglong)(iVar8 + 1U);
          uVar14 = (ulonglong)uVar17;
        } while ((int)(iVar8 + 1U) < (param_1->Segments).ArrayNum);
      }
      if ((uint)uVar14 < param_6) {
        pFVar16 = pFVar4 + uVar14 * 2;
        for (uVar10 = (ulonglong)(param_6 - (uint)uVar14); uVar10 != 0; uVar10 = uVar10 - 1) {
          *(short *)pFVar16 = (short)uVar11;
          pFVar16 = pFVar16 + 2;
        }
      }
      return;
    }
    uVar10 = uVar11;
    uVar14 = uVar11;
    uVar17 = local_res20;
    if (0 < (param_1->Segments).ArrayNum) {
      do {
        uVar12 = (uint)uVar10;
        uVar18 = ~uVar12;
        uVar13 = uVar18 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar12 < (param_1->Segments).ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar17 = local_res20, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Segments).AllocatorInstance.Data;
        uVar7 = *(int *)pFVar16 + uVar17;
        uVar2 = *(uint *)(pFVar4 + uVar14);
        if ((uVar2 <= uVar7) && (iVar8 = *(int *)(pFVar4 + uVar14 + 4), uVar7 < iVar8 + uVar2)) {
          if (iVar8 == 1) {
            uVar17 = 0;
            if ((int)uVar12 < (param_1->Segments).ArrayNum) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = (param_1->Segments).ArrayNum;
            pFVar4 = (param_1->Segments).AllocatorInstance.Data;
            iVar8 = uVar18 + iVar3;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar4 + (longlong)(int)uVar12 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                      (longlong)iVar8 << 3);
            }
            piVar1 = &(param_1->Segments).ArrayNum;
            *piVar1 = *piVar1 + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,&(param_1->Segments).AllocatorInstance,(param_1->Segments).ArrayNum,
                       &(param_1->Segments).ArrayMax);
            param_2 = local_res18;
          }
          else {
            iStack_4c = uVar7 - uVar2;
            uVar9 = *(int *)(pFVar16 + 4) + *(int *)pFVar16;
            uVar7 = param_4;
            if (uVar9 < param_4) {
              uVar7 = uVar9;
            }
            local_48 = uVar7 + uVar17;
            iStack_44 = (iVar8 - local_48) + uVar2;
            uVar17 = 0;
            if ((int)uVar12 < (param_1->Segments).ArrayNum) {
              uVar17 = uVar13;
            }
            local_50 = uVar2;
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = (param_1->Segments).ArrayNum;
            pFVar4 = (param_1->Segments).AllocatorInstance.Data;
            iVar8 = uVar18 + iVar3;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar4 + (longlong)(int)uVar12 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                      (longlong)iVar8 << 3);
            }
            piVar1 = &(param_1->Segments).ArrayNum;
            *piVar1 = *piVar1 + -1;
            piVar1 = &(param_1->Segments).ArrayMax;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,&(param_1->Segments).AllocatorInstance,(param_1->Segments).ArrayNum,
                       piVar1);
            if (iStack_4c != 0) {
              pFVar4 = (param_1->Segments).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_50) &&
                  ((FScriptContainerElement *)&local_50 < pFVar4 + (longlong)*piVar1 * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = (param_1->Segments).ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&(param_1->Segments).AllocatorInstance,piVar1);
              }
              (param_1->Segments).ArrayNum = iVar8 + 1;
              *(ulonglong *)((param_1->Segments).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                   CONCAT44(iStack_4c,local_50);
            }
            param_2 = local_res18;
            if (iStack_44 != 0) {
              pFVar4 = (param_1->Segments).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = (param_1->Segments).ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&(param_1->Segments).AllocatorInstance,piVar1);
              }
              (param_1->Segments).ArrayNum = iVar8 + 1;
              *(ulonglong *)((param_1->Segments).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                   CONCAT44(iStack_44,local_48);
              param_2 = local_res18;
            }
          }
          break;
        }
        uVar10 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 8;
        param_2 = local_res18;
      } while ((int)(uVar12 + 1) < (param_1->Segments).ArrayNum);
    }
    pFVar16 = pFVar16 + 8;
    uVar10 = (ulonglong)local_54;
  } while( true );
}

// MergeSegments @ 143610dd0

void __thiscall
UE::Geometry::FUVSpaceAllocator::MergeSegments
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((this->Mode != FreeSegments) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EMode::FreeSegments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x306,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->Mode != UsedSegments) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.Mode == EMode::UsedSegments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVSpaceAllocator.cpp"
                         ,0x307,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = 0;
  if (param_2->RasterHeight != 0) {
    do {
      uVar1 = param_1->W;
      uVar2 = this->Height;
      uVar3 = this->Width;
      uVar4 = param_1->X;
      uVar8 = 0;
      if ((int)uVar10 < (param_2->Rows).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = param_1->Y + uVar10;
      pFVar5 = (param_2->Rows).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->Rows).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      MergeRun(this,(FRun *)((this->Rows).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28),
               (FRun *)(pFVar5 + (longlong)(int)uVar10 * 0x28),uVar4,uVar1,uVar3,uVar2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2->RasterHeight);
  }
  uVar10 = 0;
  if (param_2->RasterWidth != 0) {
    do {
      uVar1 = param_1->H;
      uVar2 = this->Width;
      uVar3 = this->Height;
      uVar4 = param_1->Y;
      uVar8 = 0;
      if ((int)uVar10 < (param_2->Columns).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = param_1->X + uVar10;
      pFVar5 = (param_2->Columns).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->Columns).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      MergeRun(this,(FRun *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28),
               (FRun *)(pFVar5 + (longlong)(int)uVar10 * 0x28),uVar4,uVar1,uVar3,uVar2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2->RasterWidth);
  }
  return;
}

// TestAllColumns @ 14361c6d0

bool __thiscall
UE::Geometry::FUVSpaceAllocator::TestAllColumns
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2,uint *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar16 = 0;
  if (param_2->RasterWidth != 0) {
    pFVar7 = (param_2->Columns).AllocatorInstance.Data;
    uVar15 = this->Height;
    uVar6 = param_1->H;
    do {
      uVar5 = *(ushort *)((param_2->SortedColumnsIndex).AllocatorInstance.Data + uVar16 * 2);
      uVar12 = (ulonglong)uVar5;
      pFVar2 = (this->Columns).AllocatorInstance.Data + (ulonglong)(param_1->X + (uint)uVar5) * 0x28
      ;
      if (*(uint *)pFVar2 < *(uint *)(pFVar7 + uVar12 * 0x28)) goto LAB_14361c824;
      puVar8 = *(uint **)(pFVar2 + 8);
      puVar3 = puVar8 + (longlong)(int)*(uint *)(pFVar2 + 0x10) * 2;
      if ((int)*(uint *)(pFVar2 + 0x10) < 0x11) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(pFVar2 + 0x18);
      }
      puVar14 = *(uint **)(pFVar7 + uVar12 * 0x28 + 8);
      puVar4 = puVar14 + (longlong)*(int *)(pFVar7 + uVar12 * 0x28 + 0x10) * 2;
      for (; (puVar14 < puVar4 && (uVar10 = *puVar14, uVar10 < uVar6)); puVar14 = puVar14 + 2) {
        uVar1 = uVar10 + param_1->Y;
        uVar10 = uVar10 + puVar14[1];
        uVar9 = uVar6;
        if (uVar10 < uVar6) {
          uVar9 = uVar10;
        }
        puVar11 = puVar8;
        if (lVar13 != 0) {
          puVar11 = puVar8 + (ulonglong)*(ushort *)(lVar13 + (ulonglong)uVar1 * 2) * 2;
        }
        if (puVar3 <= puVar11) goto LAB_14361c824;
        while( true ) {
          if (uVar1 < *puVar11) goto LAB_14361c803;
          if (uVar9 + param_1->Y <= *puVar11 + puVar11[1]) break;
          puVar11 = puVar11 + 2;
          if (puVar3 <= puVar11) {
            *param_3 = uVar15;
            return false;
          }
        }
      }
      uVar10 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar10;
    } while (uVar10 < param_2->RasterWidth);
  }
  return true;
LAB_14361c803:
  while (puVar11[1] < puVar14[1]) {
    puVar11 = puVar11 + 2;
    if (puVar3 <= puVar11) {
      *param_3 = uVar15;
      return false;
    }
  }
  uVar15 = *puVar11 - uVar1;
LAB_14361c824:
  *param_3 = uVar15;
  return false;
}

// TestAllRows @ 14361c850

bool __thiscall
UE::Geometry::FUVSpaceAllocator::TestAllRows
          (FUVSpaceAllocator *this,FRect *param_1,FUVSpaceAllocator *param_2,uint *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar16 = 0;
  if (param_2->RasterHeight != 0) {
    pFVar7 = (param_2->Rows).AllocatorInstance.Data;
    uVar15 = this->Width;
    uVar6 = param_1->W;
    do {
      uVar5 = *(ushort *)((param_2->SortedRowsIndex).AllocatorInstance.Data + uVar16 * 2);
      uVar12 = (ulonglong)uVar5;
      pFVar2 = (this->Rows).AllocatorInstance.Data + (ulonglong)(param_1->Y + (uint)uVar5) * 0x28;
      if (*(uint *)pFVar2 < *(uint *)(pFVar7 + uVar12 * 0x28)) goto LAB_14361c9a4;
      puVar8 = *(uint **)(pFVar2 + 8);
      puVar3 = puVar8 + (longlong)(int)*(uint *)(pFVar2 + 0x10) * 2;
      if ((int)*(uint *)(pFVar2 + 0x10) < 0x11) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(pFVar2 + 0x18);
      }
      puVar14 = *(uint **)(pFVar7 + uVar12 * 0x28 + 8);
      puVar4 = puVar14 + (longlong)*(int *)(pFVar7 + uVar12 * 0x28 + 0x10) * 2;
      for (; (puVar14 < puVar4 && (uVar10 = *puVar14, uVar10 < uVar6)); puVar14 = puVar14 + 2) {
        uVar1 = uVar10 + param_1->X;
        uVar10 = uVar10 + puVar14[1];
        uVar9 = uVar6;
        if (uVar10 < uVar6) {
          uVar9 = uVar10;
        }
        puVar11 = puVar8;
        if (lVar13 != 0) {
          puVar11 = puVar8 + (ulonglong)*(ushort *)(lVar13 + (ulonglong)uVar1 * 2) * 2;
        }
        if (puVar3 <= puVar11) goto LAB_14361c9a4;
        while( true ) {
          if (uVar1 < *puVar11) goto LAB_14361c983;
          if (uVar9 + param_1->X <= *puVar11 + puVar11[1]) break;
          puVar11 = puVar11 + 2;
          if (puVar3 <= puVar11) {
            *param_3 = uVar15;
            return false;
          }
        }
      }
      uVar10 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar10;
    } while (uVar10 < param_2->RasterHeight);
  }
  return true;
LAB_14361c983:
  while (puVar11[1] < puVar14[1]) {
    puVar11 = puVar11 + 2;
    if (puVar3 <= puVar11) {
      *param_3 = uVar15;
      return false;
    }
  }
  uVar15 = *puVar11 - uVar1;
LAB_14361c9a4:
  *param_3 = uVar15;
  return false;
}

// TestOneRun @ 14361ca40

bool __thiscall
UE::Geometry::FUVSpaceAllocator::TestOneRun
          (FUVSpaceAllocator *this,FRun *param_1,FRun *param_2,uint param_3,uint param_4,
          uint param_5,uint *param_6)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_2->LongestSegment <= param_1->LongestSegment) {
    iVar3 = (param_1->Segments).ArrayNum;
    pFVar4 = (param_1->Segments).AllocatorInstance.Data;
    if (iVar3 < 0x11) {
      pFVar8 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar8 = (param_1->FreeSegmentsLookup).AllocatorInstance.Data;
    }
    pFVar9 = (param_2->Segments).AllocatorInstance.Data;
    pFVar2 = pFVar9 + (longlong)(param_2->Segments).ArrayNum * 8;
    do {
      if ((pFVar2 <= pFVar9) || (uVar6 = *(uint *)pFVar9, param_4 <= uVar6)) {
        return true;
      }
      uVar1 = uVar6 + param_3;
      uVar6 = uVar6 + *(uint *)(pFVar9 + 4);
      uVar5 = param_4;
      if (uVar6 < param_4) {
        uVar5 = uVar6;
      }
      pFVar7 = pFVar4;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        pFVar7 = pFVar4 + (ulonglong)*(ushort *)(pFVar8 + (ulonglong)uVar1 * 2) * 8;
      }
      while( true ) {
        if (pFVar4 + (longlong)iVar3 * 8 <= pFVar7) goto LAB_14361cade;
        if (uVar1 < *(uint *)pFVar7) goto LAB_14361cb11;
        if (uVar5 + param_3 <= *(uint *)pFVar7 + *(uint *)(pFVar7 + 4)) break;
        pFVar7 = pFVar7 + 8;
      }
      pFVar9 = pFVar9 + 8;
    } while( true );
  }
LAB_14361cade:
  *param_6 = param_5;
  return false;
LAB_14361cb11:
  do {
    if (*(uint *)(pFVar9 + 4) <= *(uint *)(pFVar7 + 4)) {
      *param_6 = *(uint *)pFVar7 - uVar1;
      return false;
    }
    pFVar7 = pFVar7 + 8;
  } while (pFVar7 < pFVar4 + (longlong)iVar3 * 8);
  goto LAB_14361cade;
}

// ToString @ 14361ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Geometry::FUVSpaceAllocator::ToString(FUVSpaceAllocator *this,FString *__return_storage_ptr__)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  FMD5Hash *this_00;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined4 uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  ForAnyElementType local_a0;
  int local_98 [3];
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  FScriptContainerElement *local_80;
  FString *local_78;
  FScriptContainerElement *local_70;
  FString local_68;
  FMD5Hash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar10 = this->Width + 2;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = __return_storage_ptr__;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar10,&local_a0,local_98,local_98 + 1);
    memset(local_a0.Data + (longlong)iVar5 * 2,0,(longlong)(int)uVar10 * 2);
  }
  pFVar12 = (this->Rows).AllocatorInstance.Data;
  iVar5 = (this->Rows).ArrayNum;
  iVar16 = 1;
  pFVar13 = pFVar12 + (longlong)iVar5 * 0x28;
LAB_14361cf21:
  do {
    if ((this->Rows).ArrayNum != iVar5) {
      local_a8 = 0;
      `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FRun_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_a8);
    }
    if (pFVar12 == pFVar13) break;
    if (this->Mode == FreeSegments) {
      if (*(int *)(pFVar12 + 0x10) < 2) {
        pFVar12 = pFVar12 + 0x28;
        goto LAB_14361cf21;
      }
LAB_14361cf5f:
      iVar16 = iVar16 + 1;
    }
    else if ((this->Mode == UsedSegments) && (*(int *)(pFVar12 + 0x10) != 0)) goto LAB_14361cf5f;
    pFVar12 = pFVar12 + 0x28;
  } while( true );
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_98[2] = iVar16;
  ::FString::AppendChars(__return_storage_ptr__,L"BEGIN -----------------------\n",0x1e);
  pFVar13 = (this->Rows).AllocatorInstance.Data;
  local_88 = 0x20;
  bVar17 = this->Mode == FreeSegments;
  uVar14 = 0x2b;
  if (bVar17) {
    uVar14 = 0x20;
  }
  pFVar12 = pFVar13 + 0x10;
  local_84 = (this->Rows).ArrayNum;
  uVar9 = (ulonglong)(int)local_84;
  if (bVar17) {
    local_88 = 0x2d;
  }
  local_70 = pFVar13 + uVar9 * 0x28;
  local_8c = uVar14;
  while( true ) {
    pFVar4 = local_70;
    uVar3 = local_88;
    local_80 = pFVar13;
    if ((this->Rows).ArrayNum != (int)uVar9) {
      local_a7 = 0;
      `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FRun_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_a7);
    }
    if (pFVar13 == pFVar4) break;
    uVar10 = 0;
    if (this->Width != 0) {
      do {
        uVar11 = 0;
        if ((int)uVar10 < local_98[0]) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        lVar8 = (longlong)(int)uVar10;
        uVar10 = uVar10 + 1;
        *(short *)(local_a0.Data + lVar8 * 2) = (short)uVar3;
        uVar14 = local_8c;
      } while (uVar10 < this->Width);
    }
    puVar15 = *(uint **)(pFVar12 + -8);
    iVar5 = *(int *)pFVar12;
    puVar1 = puVar15 + (longlong)iVar5 * 2;
    while( true ) {
      if (*(int *)pFVar12 != iVar5) {
        local_a6[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FSegment_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_a6);
      }
      if (puVar15 == puVar1) break;
      uVar10 = *puVar15;
      if (uVar10 < puVar15[1] + uVar10) {
        do {
          uVar11 = 0;
          if ((int)uVar10 < local_98[0]) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          lVar8 = (longlong)(int)uVar10;
          uVar10 = uVar10 + 1;
          *(short *)(local_a0.Data + lVar8 * 2) = (short)uVar14;
        } while (uVar10 < *puVar15 + puVar15[1]);
      }
      puVar15 = puVar15 + 2;
    }
    uVar11 = local_98[0] - 2;
    uVar10 = 0;
    if ((int)uVar11 < local_98[0]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    *(undefined2 *)(local_a0.Data + (longlong)(int)uVar11 * 2) = 10;
    uVar11 = local_98[0] - 1;
    uVar10 = 0;
    if ((int)uVar11 < local_98[0]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    *(undefined2 *)(local_a0.Data + (longlong)(int)uVar11 * 2) = 0;
    sVar7 = wcslen((wchar_t *)local_a0.Data);
    __return_storage_ptr__ = local_78;
    ::FString::AppendChars(local_78,(wchar_t *)local_a0.Data,(int)sVar7);
    local_98[2] = local_98[2] + -1;
    if (local_98[2] == 0) break;
    pFVar13 = local_80 + 0x28;
    uVar9 = (ulonglong)local_84;
    pFVar12 = pFVar12 + 0x28;
  }
  this_00 = GetRasterMD5(this,&local_58);
  FMD5Hash::LexToString(this_00,&local_68);
  ::FString::AppendfImpl(__return_storage_ptr__,L"MD5 %s\n");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(__return_storage_ptr__,L"END -----------------------\n",0x1c);
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return __return_storage_ptr__;
}

