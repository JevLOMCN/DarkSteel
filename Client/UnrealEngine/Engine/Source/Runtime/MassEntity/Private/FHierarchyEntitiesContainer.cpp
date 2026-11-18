// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// StoreUnique @ 147250a80

void __thiscall
UE::Mass::FRelationManager::FHierarchyEntitiesContainer::StoreUnique
          (FHierarchyEntitiesContainer *this,uint param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  longlong lVar13;
  bool local_res18 [16];
  
  uVar10 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10;
    do {
      local_res18[0] = false;
      uVar9 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = uVar9;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar2 = *(undefined8 *)(pFVar1 + lVar13 * 8);
      uVar8 = (uint)((ulonglong)uVar2 >> 0x20);
      uVar12 = (int)uVar2 - uVar8 ^ uVar8 >> 0xd;
      uVar7 = (-0x61c88647 - uVar12) - uVar8 ^ uVar12 << 8;
      uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 >> 0xd;
      uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xc;
      uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 << 0x10;
      uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 >> 5;
      uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 3;
      uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 << 10;
      TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator>::
      FindOrAddByHash<FMassEntityHandle_const_&>
                (&this->ExistingElements,(uVar8 - uVar7) - uVar12 ^ uVar7 >> 0xf,
                 (FMassEntityHandle *)(pFVar1 + lVar13 * 8),local_res18);
      if (local_res18[0] != false) {
        uVar7 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar5 = param_2->ArrayNum + ~uVar10;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(pFVar1 + lVar13 * 8,pFVar1 + (longlong)(param_2->ArrayNum - iVar5) * 8,
                  (longlong)iVar5 << 3);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
      lVar13 = lVar13 + -1;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  if (param_2->ArrayNum != 0) {
    uVar10 = (this->ContainerPerLevel).ArrayNum;
    if (uVar10 <= param_1) {
      TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      AddDefaulted(&this->ContainerPerLevel,(param_1 - uVar10) + 1);
    }
    uVar10 = 0;
    if ((int)param_1 < (this->ContainerPerLevel).ArrayNum) {
      uVar10 = ~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar11 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              ((this->ContainerPerLevel).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
    if ((pTVar11 == param_2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar5,(ForAnyElementType *)pTVar11,&pTVar11->ArrayNum,
                         &pTVar11->ArrayMax);
      memcpy((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 8,
             (param_2->AllocatorInstance).Data,(longlong)iVar5 << 3);
    }
  }
  return;
}

// StoreUnique @ 147250d70

void __thiscall
UE::Mass::FRelationManager::FHierarchyEntitiesContainer::StoreUnique
          (FHierarchyEntitiesContainer *this,uint param_1,FMassEntityHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  bool local_res8 [8];
  FMassEntityHandle local_res18 [2];
  
  local_res8[0] = false;
  uVar4 = param_2.SerialNumber;
  uVar6 = param_2.Index - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 10;
  local_res18[0] = param_2;
  TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator>::
  FindOrAddByHash<FMassEntityHandle_const_&>
            (&this->ExistingElements,(uVar4 - uVar7) - uVar6 ^ uVar7 >> 0xf,local_res18,local_res8);
  if (local_res8[0] == false) {
    uVar4 = (this->ContainerPerLevel).ArrayNum;
    if (uVar4 <= param_1) {
      TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      AddDefaulted(&this->ContainerPerLevel,(param_1 - uVar4) + 1);
    }
    uVar4 = 0;
    if ((int)param_1 < (this->ContainerPerLevel).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->ContainerPerLevel).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
    if ((*(FMassEntityHandle **)&pFVar5->field_0x0 <= local_res18) &&
       (local_res18 < *(FMassEntityHandle **)&pFVar5->field_0x0 + *(int *)(pFVar5 + 0xc))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)&pFVar5[8].field_0x0;
    if (iVar3 == *(int *)(pFVar5 + 0xc)) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 0xc));
    }
    *(int *)&pFVar5[8].field_0x0 = iVar3 + 1;
    *(FMassEntityHandle *)(*(longlong *)&pFVar5->field_0x0 + (longlong)iVar3 * 8) = local_res18[0];
  }
  return;
}

