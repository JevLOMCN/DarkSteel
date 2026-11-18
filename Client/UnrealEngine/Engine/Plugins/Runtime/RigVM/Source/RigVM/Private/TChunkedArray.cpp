// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> @ 14a0bc370

TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x91) / 0x92;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fe0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x92;
        lVar9 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar9 + -0xc) = 0;
          *(undefined8 *)(lVar9 + -4) = 0;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          *(undefined8 *)(lVar9 + 0x14) = 0;
          *(undefined8 *)(lVar9 + 0x1c) = 0;
          *(undefined8 *)(lVar9 + 0x24) = 0xffffffffffffffff;
          *(undefined4 *)(lVar9 + 0x2c) = 0xffffffff;
          *(undefined8 *)(lVar9 + 0x34) = 0;
          *(undefined8 *)(lVar9 + 0x3c) = 0;
          *(undefined8 *)(lVar9 + 0x44) = 0;
          *(undefined8 *)(lVar9 + 0x4c) = 0;
          *(undefined8 *)(lVar9 + 0x54) = 0;
          *(undefined8 *)(lVar9 + 0x5c) = 0;
          lVar9 = lVar9 + 0x70;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> @ 14a0bc520

TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FRigVMTemplate *pFVar7;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FRigVMTemplate *pFVar10;
  FRigVMTemplate *this_00;
  ulonglong uVar11;
  FRigVMTemplate *local_28 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x2f) / 0x30;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    uVar11 = (ulonglong)uVar4;
    do {
      pFVar7 = ::operator_new(0x3f00);
      pFVar10 = (FRigVMTemplate *)0x0;
      if (pFVar7 != (FRigVMTemplate *)0x0) {
        lVar9 = 0x30;
        this_00 = pFVar7;
        do {
          FRigVMTemplate::FRigVMTemplate(this_00);
          this_00 = this_00 + 1;
          lVar9 = lVar9 + -1;
          pFVar10 = pFVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      local_28[0] = pFVar10;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(FRigVMTemplate **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_28[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator[] @ 14a0c8790

FRigVMFunction * __thiscall
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FRigVMFunction *pFVar5;
  
  uVar2 = param_1 / 0x92;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRigVMFunction *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FRigVMFunction *)
         ((ulonglong)(uint)(param_1 % 0x92) * 0x70 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// operator[] @ 14a0c8830

FRigVMFunction * __thiscall
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FRigVMFunction *pFVar5;
  
  uVar2 = param_1 / 0x92;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRigVMFunction *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FRigVMFunction *)
         ((longlong)(param_1 % 0x92) * 0x70 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// operator[] @ 14a0c88d0

FRigVMTemplate * __thiscall
TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FRigVMTemplate *pFVar5;
  
  uVar2 = param_1 / 0x30;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FRigVMTemplate *)
         ((ulonglong)(uint)(param_1 % 0x30) * 0x150 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// operator[] @ 14a0c8980

FRigVMTemplate * __thiscall
TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FRigVMTemplate *pFVar5;
  
  uVar2 = param_1 / 0x30;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FRigVMTemplate *)
         ((longlong)(param_1 % 0x30) * 0x150 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// Add @ 14a0ca6f0

int __thiscall
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x91) / 0x92;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x92;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -0xc) = 0;
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 0x14) = 0;
          *(undefined8 *)(lVar8 + 0x1c) = 0;
          *(undefined8 *)(lVar8 + 0x24) = 0xffffffffffffffff;
          *(undefined4 *)(lVar8 + 0x2c) = 0xffffffff;
          *(undefined8 *)(lVar8 + 0x34) = 0;
          *(undefined8 *)(lVar8 + 0x3c) = 0;
          *(undefined8 *)(lVar8 + 0x44) = 0;
          *(undefined8 *)(lVar8 + 0x4c) = 0;
          *(undefined8 *)(lVar8 + 0x54) = 0;
          *(undefined8 *)(lVar8 + 0x5c) = 0;
          lVar8 = lVar8 + 0x70;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// AddElement @ 14a0cab80

int __thiscall
TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::AddElement
          (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this,
          FRigVMFunction *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FRigVMFunction *this_00;
  
  iVar4 = Add(this,1);
  uVar2 = iVar4 / 0x92;
  uVar5 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  this_00 = (FRigVMFunction *)
            (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
            (ulonglong)(uint)(iVar4 % 0x92) * 0x70);
  if (this_00 != (FRigVMFunction *)0x0) {
    FRigVMFunction::FRigVMFunction(this_00,param_1);
  }
  return this->NumElements + -1;
}

