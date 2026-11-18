// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 1452f0390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingDebugResources::InitRHI(FRayTracingDebugResources *this,FRHICommandListBase *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->MaxPickingBuffers;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&(this->PickingBuffers).AllocatorInstance,
                     &(this->PickingBuffers).ArrayNum,&(this->PickingBuffers).ArrayMax);
  memset((this->PickingBuffers).AllocatorInstance.Data + (longlong)iVar2 * 8,0,(longlong)iVar1 << 3)
  ;
  iVar1 = this->MaxHitStatsBuffers;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&(this->HitStatsBuffers).AllocatorInstance,
                     &(this->HitStatsBuffers).ArrayNum,&(this->HitStatsBuffers).ArrayMax);
  memset((this->HitStatsBuffers).AllocatorInstance.Data + (longlong)iVar2 * 8,0,(longlong)iVar1 << 3
        );
  return;
}

// ReleaseRHI @ 1452f0440

void __thiscall FRayTracingDebugResources::ReleaseRHI(FRayTracingDebugResources *this)

{
  TArray<FRHIGPUBufferReadback_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  uVar7 = 0;
  pTVar1 = &this->PickingBuffers;
  uVar12 = uVar7;
  if (0 < (this->PickingBuffers).ArrayNum) {
    do {
      uVar10 = (uint)uVar7;
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->PickingBuffers).ArrayNum) {
        uVar6 = uVar9;
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
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + uVar12) != 0) {
        uVar6 = 0;
        if ((int)uVar10 < (this->PickingBuffers).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined8 **)((pTVar1->AllocatorInstance).Data + uVar12);
        if (puVar3 != (undefined8 *)0x0) {
          puVar11 = puVar3 + 0xb;
          lVar8 = 8;
          do {
            puVar2 = puVar11 + -1;
            puVar11 = puVar11 + -1;
            lVar8 = lVar8 + -1;
            if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
              FRHIResource::Release((FRHIResource *)*puVar2);
            }
          } while (lVar8 != 0);
          *puVar3 = &___7FRHIGPUMemoryReadback__6B_;
          if ((FRHIResource *)puVar3[1] != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)puVar3[1]);
          }
          ::operator_delete(puVar3,0x58);
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->PickingBuffers).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + uVar12) = 0;
      }
      uVar7 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < (this->PickingBuffers).ArrayNum);
  }
  uVar7 = 0;
  uVar12 = uVar7;
  if (0 < (this->HitStatsBuffers).ArrayNum) {
    do {
      uVar10 = (uint)uVar7;
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->HitStatsBuffers).ArrayNum) {
        uVar6 = uVar9;
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
      if (*(longlong *)((this->HitStatsBuffers).AllocatorInstance.Data + uVar12) != 0) {
        uVar6 = 0;
        if ((int)uVar10 < (this->HitStatsBuffers).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined8 **)((this->HitStatsBuffers).AllocatorInstance.Data + uVar12);
        if (puVar3 != (undefined8 *)0x0) {
          puVar11 = puVar3 + 0xb;
          lVar8 = 8;
          do {
            puVar2 = puVar11 + -1;
            puVar11 = puVar11 + -1;
            lVar8 = lVar8 + -1;
            if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
              FRHIResource::Release((FRHIResource *)*puVar2);
            }
          } while (lVar8 != 0);
          *puVar3 = &___7FRHIGPUMemoryReadback__6B_;
          if ((FRHIResource *)puVar3[1] != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)puVar3[1]);
          }
          ::operator_delete(puVar3,0x58);
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->HitStatsBuffers).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)((this->HitStatsBuffers).AllocatorInstance.Data + uVar12) = 0;
      }
      uVar7 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < (this->HitStatsBuffers).ArrayNum);
  }
  (this->PickingBuffers).ArrayNum = 0;
  if ((this->PickingBuffers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PickingBuffers).AllocatorInstance,0,&(this->PickingBuffers).ArrayMax);
  }
  (this->HitStatsBuffers).ArrayNum = 0;
  if ((this->HitStatsBuffers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HitStatsBuffers).AllocatorInstance,0,&(this->HitStatsBuffers).ArrayMax)
    ;
  }
  return;
}

