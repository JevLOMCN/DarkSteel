// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// Resize @ 1433c5cd0

void __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<int,32>::Resize
          (TBasicBlockedDenseGrid3<int,32> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBlock3 *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  TBlockedGrid3Layout<32>::Resize((TBlockedGrid3Layout<32> *)this,param_1,param_2,param_3);
  piVar1 = &(this->Blocks).ArrayMax;
  piVar2 = &(this->Blocks).ArrayNum;
  pFVar4 = (FBlock3 *)(this->Blocks).AllocatorInstance.Data;
  uVar13 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,32>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Blocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,32>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  uVar11 = 0;
  iVar3 = *piVar2;
  if (iVar3 < (int)uVar13) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar13 - iVar3,&(this->Blocks).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,32>::FBlock3,int>
              ((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 0x10,uVar13 - iVar3);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar3) {
      uVar10 = iVar3 - uVar13;
      if (((int)(uVar10 | uVar13) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Geometry::TBasicBlockedDenseGrid3<int,32>::FBlock3,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->Blocks,uVar13,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Blocks).AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  lVar12 = (longlong)(int)uVar13;
  uVar14 = uVar11;
  if (0 < (int)uVar13) {
    do {
      uVar10 = (uint)uVar11;
      uVar13 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Blocks).AllocatorInstance.Data;
      pvVar6 = *(void **)(pFVar5 + uVar14);
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(pFVar5 + uVar14) = 0;
        ::operator_delete(pvVar6,0x20004);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      *(int *)(pFVar5 + uVar14 + 8) = this->DefaultValue;
      lVar12 = lVar12 + -1;
      uVar14 = uVar14 + 0x10;
    } while (lVar12 != 0);
  }
  return;
}

// Resize @ 1433c5ee0

void __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<float,32>::Resize
          (TBasicBlockedDenseGrid3<float,32> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBlock3 *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  TBlockedGrid3Layout<32>::Resize((TBlockedGrid3Layout<32> *)this,param_1,param_2,param_3);
  piVar1 = &(this->Blocks).ArrayMax;
  piVar2 = &(this->Blocks).ArrayNum;
  pFVar4 = (FBlock3 *)(this->Blocks).AllocatorInstance.Data;
  uVar12 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,32>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Blocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,32>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  uVar11 = 0;
  iVar3 = *piVar2;
  if (iVar3 < (int)uVar12) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar12 - iVar3,&(this->Blocks).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,32>::FBlock3,int>
              ((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 0x10,uVar12 - iVar3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar3) {
      uVar10 = iVar3 - uVar12;
      if (((int)(uVar10 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Geometry::TBasicBlockedDenseGrid3<float,32>::FBlock3,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->Blocks,uVar12,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Blocks).AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  lVar14 = (longlong)(int)uVar12;
  uVar13 = uVar11;
  if (0 < (int)uVar12) {
    do {
      uVar10 = (uint)uVar13;
      uVar12 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Blocks).AllocatorInstance.Data;
      pvVar6 = *(void **)(pFVar5 + uVar11);
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(pFVar5 + uVar11) = 0;
        ::operator_delete(pvVar6,0x20004);
      }
      *(float *)(pFVar5 + uVar11 + 8) = this->DefaultValue;
      uVar11 = uVar11 + 0x10;
      lVar14 = lVar14 + -1;
      uVar13 = (ulonglong)(uVar10 + 1);
    } while (lVar14 != 0);
  }
  return;
}

// TouchBlockData @ 1433da3e0

TBlockData3<int,32> * __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<int,32>::TouchBlockData
          (TBasicBlockedDenseGrid3<int,32> *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
  pFVar4 = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar4 == 0) {
    piVar2 = ::operator_new(0x20004);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)piVar2 + lVar3 + 4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 8) = *(undefined4 *)(pFVar4 + 8);
        lVar3 = lVar3 + 8;
      } while (lVar3 < 0x20000);
    }
    if (pFVar4 != local_18) {
      pvVar1 = *(void **)pFVar4;
      *(int **)pFVar4 = piVar2;
      piVar2 = (int *)0x0;
      ::operator_delete(pvVar1,0x20004);
    }
    ::operator_delete(piVar2,0x20004);
  }
  return *(TBlockData3<int,32> **)pFVar4;
}

// TouchBlockData @ 1433da490

TBlockData3<float,32> * __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<float,32>::TouchBlockData
          (TBasicBlockedDenseGrid3<float,32> *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
  pFVar4 = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar4 == 0) {
    piVar2 = ::operator_new(0x20004);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      lVar3 = 0xc;
      do {
        *(undefined4 *)((longlong)piVar2 + lVar3 + -8) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + -4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 8) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0xc) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0x10) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0x14) = *(undefined4 *)(pFVar4 + 8);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 < 0x2000c);
    }
    if (pFVar4 != local_18) {
      pvVar1 = *(void **)pFVar4;
      *(int **)pFVar4 = piVar2;
      piVar2 = (int *)0x0;
      ::operator_delete(pvVar1,0x20004);
    }
    ::operator_delete(piVar2,0x20004);
  }
  return *(TBlockData3<float,32> **)pFVar4;
}

