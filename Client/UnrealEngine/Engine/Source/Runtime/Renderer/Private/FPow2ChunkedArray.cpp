// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 20

// ~FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216> @ 1456dd2f0

void __thiscall
FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
~FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>
          (FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  
  aVar2 = this->Size;
  uVar3 = 0;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      aVar1 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar1 < 0x10) {
        aVar1 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar2 < (uint)aVar1) {
        aVar1 = aVar2;
      }
      aVar2 = (atomic<unsigned_int>)((int)aVar2 - (int)aVar1);
      FMemory::Free((void *)this->Buckets[uVar3]);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (aVar2 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216> @ 1456dd370

void __thiscall
FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>::
~FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
           *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  
  aVar2 = this->Size;
  uVar3 = 0;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      aVar1 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar1 < 0x10) {
        aVar1 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar2 < (uint)aVar1) {
        aVar1 = aVar2;
      }
      aVar2 = (atomic<unsigned_int>)((int)aVar2 - (int)aVar1);
      FMemory::Free((void *)this->Buckets[uVar3]);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (aVar2 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216> @ 1456dd3f0

void __thiscall
FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>::
~FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
           *this)

{
  void *pvVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  ulonglong uVar7;
  
  aVar6 = this->Size;
  uVar7 = 0;
  if (aVar6 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar7];
      aVar5 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar5 < 0x10) {
        aVar5 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar6 < (uint)aVar5) {
        aVar5 = aVar6;
      }
      uVar3 = 0;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        do {
          if (*(char *)(uVar3 * 0x40 + 0x30 + (longlong)pvVar1) != '\0') {
            FStateStreamHandle::~FStateStreamHandle
                      ((FStateStreamHandle *)(uVar3 * 0x40 + 0x18 + (longlong)pvVar1));
          }
          aVar2 = (atomic<unsigned_int>)((int)uVar3 + 1);
          uVar3 = (ulonglong)(uint)aVar2;
        } while (aVar2 != aVar5);
      }
      FMemory::Free(pvVar1);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      aVar6 = (atomic<unsigned_int>)((int)aVar6 - (int)aVar5);
    } while (aVar6 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216> @ 1456dd4b0

void __thiscall
FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
~FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  atomic<unsigned_int> aVar3;
  ulonglong uVar4;
  atomic<unsigned_int> aVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  
  aVar9 = this->Size;
  uVar7 = 0;
  if (aVar9 != (atomic<unsigned_int>)0x0) {
    uVar8 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar7];
      aVar5 = (atomic<unsigned_int>)(uVar8 << 4 | uVar8 >> 0x1c);
      if ((uint)aVar5 < 0x10) {
        aVar5 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar9 < (uint)aVar5) {
        aVar5 = aVar9;
      }
      uVar4 = 0;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        do {
          lVar6 = uVar4 * 0x60;
          if (*(char *)(lVar6 + 0x50 + (longlong)pvVar1) != '\0') {
            pvVar2 = *(void **)(lVar6 + 0x40 + (longlong)pvVar1);
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
            FStateStreamHandle::~FStateStreamHandle
                      ((FStateStreamHandle *)((longlong)pvVar1 + lVar6 + 0x28));
          }
          aVar3 = (atomic<unsigned_int>)((int)uVar4 + 1);
          uVar4 = (ulonglong)(uint)aVar3;
        } while (aVar3 != aVar5);
      }
      FMemory::Free(pvVar1);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      aVar9 = (atomic<unsigned_int>)((int)aVar9 - (int)aVar5);
    } while (aVar9 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216> @ 1456dd590

void __thiscall
FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>::
~FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
           *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  
  aVar2 = this->Size;
  uVar3 = 0;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      aVar1 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar1 < 0x10) {
        aVar1 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar2 < (uint)aVar1) {
        aVar1 = aVar2;
      }
      aVar2 = (atomic<unsigned_int>)((int)aVar2 - (int)aVar1);
      FMemory::Free((void *)this->Buckets[uVar3]);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (aVar2 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216> @ 1456dd610

void __thiscall
FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::
~FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
          (FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  
  aVar9 = this->Size;
  uVar7 = 0;
  if (aVar9 != (atomic<unsigned_int>)0x0) {
    uVar8 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar7];
      aVar4 = (atomic<unsigned_int>)(uVar8 << 4 | uVar8 >> 0x1c);
      if ((uint)aVar4 < 0x10) {
        aVar4 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar9 < (uint)aVar4) {
        aVar4 = aVar9;
      }
      uVar6 = 0;
      if (aVar4 != (atomic<unsigned_int>)0x0) {
        do {
          lVar3 = uVar6 * 0x68;
          if (*(char *)(lVar3 + 0x58 + (longlong)pvVar1) != '\0') {
            pvVar2 = *(void **)(lVar3 + 0x40 + (longlong)pvVar1);
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
            pvVar2 = *(void **)(lVar3 + 0x30 + (longlong)pvVar1);
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
            FStateStreamHandle::~FStateStreamHandle
                      ((FStateStreamHandle *)((longlong)pvVar1 + lVar3 + 0x18));
          }
          aVar5 = (atomic<unsigned_int>)((int)uVar6 + 1);
          uVar6 = (ulonglong)(uint)aVar5;
        } while (aVar5 != aVar4);
      }
      FMemory::Free(pvVar1);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      aVar9 = (atomic<unsigned_int>)((int)aVar9 - (int)aVar4);
    } while (aVar9 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216> @ 1456dd6f0

void __thiscall
FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::
~FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>
          (FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216> *this)

{
  void *pvVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  ulonglong uVar7;
  
  aVar6 = this->Size;
  uVar7 = 0;
  if (aVar6 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar7];
      aVar5 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar5 < 0x10) {
        aVar5 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar6 < (uint)aVar5) {
        aVar5 = aVar6;
      }
      uVar3 = 0;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        do {
          FStateStreamHandle::~FStateStreamHandle
                    ((FStateStreamHandle *)(uVar3 * 0x20 + 8 + (longlong)pvVar1));
          aVar2 = (atomic<unsigned_int>)((int)uVar3 + 1);
          uVar3 = (ulonglong)(uint)aVar2;
        } while (aVar2 != aVar5);
      }
      FMemory::Free(pvVar1);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      aVar6 = (atomic<unsigned_int>)((int)aVar6 - (int)aVar5);
    } while (aVar6 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216> @ 1456dd7b0

void __thiscall
FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::
~FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>
          (FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216> *this)

{
  void *pvVar1;
  void *pvVar2;
  atomic<unsigned_int> aVar3;
  ulonglong uVar4;
  atomic<unsigned_int> aVar5;
  ulonglong uVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  
  aVar8 = this->Size;
  uVar6 = 0;
  if (aVar8 != (atomic<unsigned_int>)0x0) {
    uVar7 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar6];
      aVar5 = (atomic<unsigned_int>)(uVar7 << 4 | uVar7 >> 0x1c);
      if ((uint)aVar5 < 0x10) {
        aVar5 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar8 < (uint)aVar5) {
        aVar5 = aVar8;
      }
      uVar4 = 0;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        do {
          pvVar2 = *(void **)((longlong)pvVar1 + uVar4 * 0x30 + 0x20);
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          FStateStreamHandle::~FStateStreamHandle
                    ((FStateStreamHandle *)(uVar4 * 0x30 + 8 + (longlong)pvVar1));
          aVar3 = (atomic<unsigned_int>)((int)uVar4 + 1);
          uVar4 = (ulonglong)(uint)aVar3;
        } while (aVar3 != aVar5);
      }
      FMemory::Free(pvVar1);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      aVar8 = (atomic<unsigned_int>)((int)aVar8 - (int)aVar5);
    } while (aVar8 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216> @ 1456dd880

void __thiscall
FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::
~FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>
          (FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  uint uVar4;
  
  aVar2 = this->Size;
  uVar3 = 0;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    uVar4 = 1;
    do {
      aVar1 = (atomic<unsigned_int>)(uVar4 << 4 | uVar4 >> 0x1c);
      if ((uint)aVar1 < 0x10) {
        aVar1 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar2 < (uint)aVar1) {
        aVar1 = aVar2;
      }
      aVar2 = (atomic<unsigned_int>)((int)aVar2 - (int)aVar1);
      FMemory::Free((void *)this->Buckets[uVar3]);
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (aVar2 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216> @ 1456dd900

void __thiscall
FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::
~FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>
          (FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216> *this)

{
  void *pvVar1;
  void *pvVar2;
  atomic<unsigned_int> aVar3;
  ulonglong uVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  ulonglong uVar7;
  atomic<unsigned_int> aVar8;
  
  aVar8 = this->Size;
  uVar7 = 0;
  if (aVar8 != (atomic<unsigned_int>)0x0) {
    uVar5 = 1;
    do {
      pvVar1 = (void *)this->Buckets[uVar7];
      aVar6 = (atomic<unsigned_int>)(uVar5 << 4 | uVar5 >> 0x1c);
      if ((uint)aVar6 < 0x10) {
        aVar6 = (atomic<unsigned_int>)0x10;
      }
      if ((uint)aVar8 < (uint)aVar6) {
        aVar6 = aVar8;
      }
      uVar4 = 0;
      if (aVar6 != (atomic<unsigned_int>)0x0) {
        do {
          pvVar2 = *(void **)((longlong)pvVar1 + uVar4 * 0x48 + 0x30);
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          pvVar2 = *(void **)((longlong)pvVar1 + uVar4 * 0x48 + 0x20);
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          FStateStreamHandle::~FStateStreamHandle
                    ((FStateStreamHandle *)((longlong)pvVar1 + uVar4 * 0x48 + 8));
          aVar3 = (atomic<unsigned_int>)((int)uVar4 + 1);
          uVar4 = (ulonglong)(uint)aVar3;
        } while (aVar3 != aVar6);
      }
      FMemory::Free(pvVar1);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      aVar8 = (atomic<unsigned_int>)((int)aVar8 - (int)aVar6);
    } while (aVar8 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// operator[] @ 1456df110

FExponentialHeightFogDynamicState * __thiscall
FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FExponentialHeightFogDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FExponentialHeightFogDynamicState *)(*pcVar2)();
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
  return (FExponentialHeightFogDynamicState *)
         ((ulonglong)(param_1 - iVar6) * 0xc0 + this->Buckets[uVar1]);
}

// operator[] @ 1456df190

FParticleSystemDynamicState * __thiscall
FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleSystemDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleSystemDynamicState *)(*pcVar2)();
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
  return (FParticleSystemDynamicState *)((ulonglong)(param_1 - iVar6) * 0x20 + this->Buckets[uVar1])
  ;
}

// operator[] @ 1456df210

FSkinnedMeshDynamicState * __thiscall
FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkinnedMeshDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkinnedMeshDynamicState *)(*pcVar2)();
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
  return (FSkinnedMeshDynamicState *)((ulonglong)(param_1 - iVar6) * 0x30 + this->Buckets[uVar1]);
}

// operator[] @ 1456df290

FSkyAtmosphereDynamicState * __thiscall
FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkyAtmosphereDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkyAtmosphereDynamicState *)(*pcVar2)();
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
  return (FSkyAtmosphereDynamicState *)((ulonglong)(param_1 - iVar6) * 0x160 + this->Buckets[uVar1])
  ;
}

// operator[] @ 1456df320

FStaticMeshDynamicState * __thiscall
FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
          (FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216> *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FStaticMeshDynamicState *pFVar5;
  int iVar6;
  
  if ((uint)this->Size <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStaticMeshDynamicState *)(*pcVar2)();
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
  return (FStaticMeshDynamicState *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0x48);
}

// GetElementAt @ 145709b30

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>::
GetElementAt(FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
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
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0xe0);
}

// GetElementAt @ 145709bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>::
GetElementAt(FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
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
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0x40);
}

// GetElementAt @ 145709c30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
GetElementAt(FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
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
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0x60);
}

// GetElementAt @ 145709cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>::
GetElementAt(FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
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
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 400);
}

// GetElementAt @ 145709d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstance * __thiscall
FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::GetElementAt
          (FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
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
  return (FInstance *)(this->Buckets[uVar1] + (ulonglong)(param_1 - iVar6) * 0x68);
}

