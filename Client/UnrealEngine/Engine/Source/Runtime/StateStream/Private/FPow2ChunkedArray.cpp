// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 4

// ~FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216> @ 143125710

void __thiscall
FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
::
~FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           *this)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  
  aVar10 = this->Size;
  uVar8 = 0;
  if (aVar10 != (atomic<unsigned_int>)0x0) {
    uVar9 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar8];
      aVar5 = (atomic<unsigned_int>)(uVar9 << 4 | uVar9 >> 0x1c);
      if ((uint)aVar5 < 0x10) {
        aVar5 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar10 < (uint)aVar5) {
        aVar5 = aVar10;
      }
      uVar7 = 0;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        do {
          lVar4 = uVar7 * 0xd0;
          if (*(char *)(lVar4 + 0xb0 + (longlong)pvVar1) != '\0') {
            plVar2 = *(longlong **)(lVar4 + 0x90 + (longlong)pvVar1);
            if ((plVar2 != (longlong *)0x0) && (*(int *)(lVar4 + 0x98 + (longlong)pvVar1) == 0)) {
              (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(lVar4 + 0x9c + (longlong)pvVar1));
            }
            pvVar3 = *(void **)(lVar4 + 0x80 + (longlong)pvVar1);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
          }
          aVar6 = (atomic<unsigned_int>)((int)uVar7 + 1);
          uVar7 = (ulonglong)(uint)aVar6;
        } while (aVar6 != aVar5);
      }
      FMemory::Free(pvVar1);
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      aVar10 = (atomic<unsigned_int>)((int)aVar10 - (int)aVar5);
    } while (aVar10 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<FTransformDynamicState,16,16777216> @ 143125810

void __thiscall
FPow2ChunkedArray<FTransformDynamicState,16,16777216>::
~FPow2ChunkedArray<FTransformDynamicState,16,16777216>
          (FPow2ChunkedArray<FTransformDynamicState,16,16777216> *this)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  atomic<unsigned_int> aVar4;
  ulonglong uVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  ulonglong uVar8;
  atomic<unsigned_int> aVar9;
  
  aVar9 = this->Size;
  uVar8 = 0;
  if (aVar9 != (atomic<unsigned_int>)0x0) {
    uVar6 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar8];
      aVar7 = (atomic<unsigned_int>)(uVar6 << 4 | uVar6 >> 0x1c);
      if ((uint)aVar7 < 0x10) {
        aVar7 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar9 < (uint)aVar7) {
        aVar7 = aVar9;
      }
      uVar5 = 0;
      if (aVar7 != (atomic<unsigned_int>)0x0) {
        do {
          plVar2 = *(longlong **)((longlong)pvVar1 + uVar5 * 0xa0 + 0x80);
          if ((plVar2 != (longlong *)0x0) && (*(int *)((longlong)pvVar1 + uVar5 * 0xa0 + 0x88) == 0)
             ) {
            (**(code **)(*plVar2 + 8))
                      (plVar2,*(undefined4 *)((longlong)pvVar1 + uVar5 * 0xa0 + 0x8c));
          }
          pvVar3 = *(void **)((longlong)pvVar1 + uVar5 * 0xa0 + 0x70);
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          aVar4 = (atomic<unsigned_int>)((int)uVar5 + 1);
          uVar5 = (ulonglong)(uint)aVar4;
        } while (aVar4 != aVar7);
      }
      FMemory::Free(pvVar1);
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      aVar9 = (atomic<unsigned_int>)((int)aVar9 - (int)aVar7);
    } while (aVar9 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// operator[] @ 143126140

FTransformDynamicState * __thiscall
FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FTransformDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTransformDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTransformDynamicState *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = (param_1 >> 4) + 1;
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (0x10 << ((byte)uVar1 & 0x1f)) + -0x10;
  }
  return (FTransformDynamicState *)((ulonglong)(param_1 - iVar6) * 0xa0 + this->Buckets[uVar1]);
}

// GetElementAt @ 143127ba0

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
::GetElementAt(FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
               *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FInstance *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInstance *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = (param_1 >> 4) + 1;
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (0x10 << ((byte)uVar1 & 0x1f)) + -0x10;
  }
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0xd0);
}

