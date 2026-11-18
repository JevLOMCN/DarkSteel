// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// operator= @ 148253d90

TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> * __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::operator=
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Src;
  undefined1 auVar6 [16];
  ulong64 uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  
  if (this != param_1) {
    iVar4 = (param_1->Elements).ArrayNum;
    piVar1 = &(this->Elements).ArrayMax;
    _Src = (param_1->Elements).AllocatorInstance.Data;
    (this->Elements).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((this->Elements).AllocatorInstance.Data,_Src,(longlong)iVar4 * 0x24);
      }
    }
  }
  puVar2 = &(this->HashTable).field_0x4;
  puVar3 = &(this->HashTable).field_0x10;
  if (*(int *)&(this->HashTable).field_0x8 != 0) {
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)&(this->HashTable).field_0x8 = 0;
    operator_delete__(*(void **)puVar3);
    *(uint **)puVar3 = FHashTable::EmptyHash;
    operator_delete__(*(void **)&(this->HashTable).field_0x18);
    *(undefined8 *)&(this->HashTable).field_0x18 = 0;
  }
  puVar9 = &(this->HashTable).field_0x18;
  uVar5 = *(uint *)&param_1->HashTable;
  *(uint *)&this->HashTable = uVar5;
  *(undefined4 *)puVar2 = *(undefined4 *)&(param_1->HashTable).field_0x4;
  iVar4 = *(int *)&(param_1->HashTable).field_0x8;
  *(int *)&(this->HashTable).field_0x8 = iVar4;
  if (iVar4 != 0) {
    auVar6 = ZEXT816(4) * ZEXT416(uVar5);
    uVar7 = auVar6._0_8_;
    if (auVar6._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar8 = operator_new__(uVar7);
    *(void **)puVar3 = pvVar8;
    auVar6 = ZEXT816(4) * ZEXT416(*(uint *)&(this->HashTable).field_0x8);
    uVar7 = auVar6._0_8_;
    if (auVar6._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar8 = operator_new__(uVar7);
    iVar4 = *(int *)&this->HashTable;
    *(void **)puVar9 = pvVar8;
    memcpy(*(void **)puVar3,*(void **)&(param_1->HashTable).field_0x10,(ulonglong)(uint)(iVar4 << 2)
          );
    memcpy(*(void **)puVar9,*(void **)&(param_1->HashTable).field_0x18,
           (ulonglong)(uint)(*(int *)&(this->HashTable).field_0x8 << 2));
  }
  return this;
}

// Add @ 148260440

void __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Add
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FExternalSpatialAccelerationPayload *param_1,FAABBTreePayloadInfo *param_2)

{
  int *piVar1;
  int *piVar2;
  FObjectKey *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FUniqueIdx FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  
  uVar16 = (param_1->CachedUniqueIdx).Idx;
  iVar4 = param_2->NodeIdx;
  uVar9 = *(undefined8 *)param_2;
  uVar10 = *(undefined8 *)&param_2->LeafIdx;
  if ((uVar16 == 0xffffffff) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7431867033672745159>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                          ,199,"Idx.IsValid()"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = (param_1->CachedUniqueIdx).Idx;
  uVar16 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  uVar16 = uVar16 >> 0x10 ^ uVar16;
  if ((iVar14 == -1) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7431867033672745159>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                          ,199,"Idx.IsValid()"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &(this->Elements).ArrayNum;
  uVar17 = *(uint *)(*(longlong *)&(this->HashTable).field_0x10 +
                    (ulonglong)(*(uint *)&(this->HashTable).field_0x4 & uVar16) * 4);
  do {
    if (uVar17 == 0xffffffff) {
LAB_1482605c8:
      iVar14 = *piVar1;
      piVar2 = &(this->Elements).ArrayMax;
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,(ForAnyElementType *)this,piVar2);
        *piVar1 = iVar14;
      }
      *piVar1 = iVar14 + 1;
      lVar15 = (longlong)iVar14;
      iVar14 = param_1->BoneId;
      FVar11.Idx = (param_1->CachedUniqueIdx).Idx;
      pFVar6 = (this->Elements).AllocatorInstance.Data;
      pFVar3 = (FObjectKey *)(pFVar6 + lVar15 * 0x24);
      *pFVar3 = (param_1->Component).ObjectKey;
      pFVar3[1].ObjectIndex = iVar14;
      pFVar3[1].ObjectSerialNumber = FVar11.Idx;
      *(undefined8 *)(pFVar6 + lVar15 * 0x24 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(pFVar6 + lVar15 * 0x24 + 0x18) = 0xffffffffffffffff;
      *(undefined4 *)(pFVar6 + lVar15 * 0x24 + 0x20) = 0xffffffff;
      uVar17 = *piVar1 - 1;
      FHashTable::Add((FHashTable *)&this->HashTable,uVar16,uVar17);
LAB_148260630:
      uVar16 = 0;
      if ((int)uVar17 < *piVar1) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->Elements).AllocatorInstance.Data;
      pFVar6 = pFVar7 + (longlong)(int)uVar17 * 0x24 + 0x10;
      *(undefined8 *)pFVar6 = uVar9;
      *(undefined8 *)(pFVar6 + 8) = uVar10;
      *(int *)(pFVar7 + (longlong)(int)uVar17 * 0x24 + 0x20) = iVar4;
      return;
    }
    uVar13 = 0;
    if ((int)uVar17 < *piVar1) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar5 = *(int *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x24 + 0xc);
    if ((iVar5 == -1) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7431867033672745159>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                            ,199,"Idx.IsValid()"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (iVar5 == iVar14) {
      if (uVar17 != 0xffffffff) goto LAB_148260630;
      goto LAB_1482605c8;
    }
    uVar17 = *(uint *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar17 * 4);
  } while( true );
}

// Find @ 14827f540

FAABBTreePayloadInfo * __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FExternalSpatialAccelerationPayload *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAABBTreePayloadInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (param_1->CachedUniqueIdx).Idx;
  if ((uVar6 == 0xffffffff) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
    return pFVar4;
  }
  uVar5 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = *(uint *)(*(longlong *)&(this->HashTable).field_0x10 +
                   (ulonglong)((uVar5 >> 0x10 ^ uVar5) & *(uint *)&(this->HashTable).field_0x4) * 4)
  ;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return (FAABBTreePayloadInfo *)0x0;
    }
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
      return pFVar4;
    }
    uVar3 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x24 + 0xc);
    if ((uVar3 == 0xffffffff) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
      return pFVar4;
    }
    if (uVar3 == uVar6) break;
    uVar5 = *(uint *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar5 * 4);
  }
  if (uVar5 == 0xffffffff) {
    return (FAABBTreePayloadInfo *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
    return pFVar4;
  }
  return (FAABBTreePayloadInfo *)
         ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x24 + 0x10);
}

// Find @ 14827f710

FAABBTreePayloadInfo * __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FExternalSpatialAccelerationPayload *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAABBTreePayloadInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (param_1->CachedUniqueIdx).Idx;
  if ((uVar6 == 0xffffffff) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
    return pFVar4;
  }
  uVar5 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = *(uint *)(*(longlong *)&(this->HashTable).field_0x10 +
                   (ulonglong)((uVar5 >> 0x10 ^ uVar5) & *(uint *)&(this->HashTable).field_0x4) * 4)
  ;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return (FAABBTreePayloadInfo *)0x0;
    }
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
      return pFVar4;
    }
    uVar3 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x24 + 0xc);
    if ((uVar3 == 0xffffffff) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
      return pFVar4;
    }
    if (uVar3 == uVar6) break;
    uVar5 = *(uint *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar5 * 4);
  }
  if (uVar5 == 0xffffffff) {
    return (FAABBTreePayloadInfo *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAABBTreePayloadInfo *)(*pcVar1)();
    return pFVar4;
  }
  return (FAABBTreePayloadInfo *)
         ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x24 + 0x10);
}

// FindChecked @ 148280a40

FAABBTreePayloadInfo * __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::FindChecked
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FExternalSpatialAccelerationPayload *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (param_1->CachedUniqueIdx).Idx;
  if ((uVar7 == 0xffffffff) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
    return pFVar5;
  }
  uVar6 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  piVar1 = &(this->Elements).ArrayNum;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = *(uint *)(*(longlong *)&(this->HashTable).field_0x10 +
                   (ulonglong)((uVar6 >> 0x10 ^ uVar6) & *(uint *)&(this->HashTable).field_0x4) * 4)
  ;
  do {
    if (uVar6 == 0xffffffff) {
      uVar6 = 0xffffffff;
LAB_148280b6d:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,0x347,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
LAB_148280b9d:
      uVar7 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
      return (FAABBTreePayloadInfo *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x24 + 0x10);
    }
    uVar4 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    uVar4 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x24 + 0xc);
    if ((uVar4 == 0xffffffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    if (uVar4 == uVar7) {
      if (uVar6 == 0xffffffff) goto LAB_148280b6d;
      goto LAB_148280b9d;
    }
    uVar6 = *(uint *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar6 * 4);
  } while( true );
}

// Remove @ 1482a1110

void __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Remove
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FExternalSpatialAccelerationPayload *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  
  uVar13 = (param_1->CachedUniqueIdx).Idx;
  if ((uVar13 == 0xffffffff) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
  uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar7 = *(uint *)(*(longlong *)&(this->HashTable).field_0x10 +
                   (ulonglong)(uVar8 & *(uint *)&(this->HashTable).field_0x4) * 4);
  while( true ) {
    if (uVar7 == 0xffffffff) {
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->Elements).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
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
    uVar6 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x24 + 0xc);
    if ((uVar6 == 0xffffffff) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar6 == uVar13) break;
    uVar7 = *(uint *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar7 * 4);
  }
  if (uVar7 == 0xffffffff) {
    return;
  }
  if (uVar7 < *(uint *)&(this->HashTable).field_0x8) {
    uVar11 = (ulonglong)(uVar8 & *(uint *)&(this->HashTable).field_0x4);
    lVar2 = *(longlong *)&(this->HashTable).field_0x10;
    puVar12 = (undefined4 *)(lVar2 + uVar11 * 4);
    uVar13 = *(uint *)(lVar2 + uVar11 * 4);
    if (uVar13 == uVar7) {
      uVar9 = *(undefined4 *)(*(longlong *)&(this->HashTable).field_0x18 + (ulonglong)uVar7 * 4);
LAB_1482a1295:
      *puVar12 = uVar9;
    }
    else if (uVar13 != 0xffffffff) {
      lVar2 = *(longlong *)&(this->HashTable).field_0x18;
      do {
        puVar12 = (undefined4 *)(lVar2 + (ulonglong)uVar13 * 4);
        uVar13 = *(uint *)(lVar2 + (ulonglong)uVar13 * 4);
        if (uVar13 == uVar7) {
          uVar9 = *(undefined4 *)(lVar2 + (ulonglong)uVar7 * 4);
          goto LAB_1482a1295;
        }
      } while (uVar13 != 0xffffffff);
    }
  }
  iVar10 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayNum;
  if (iVar10 < 2) {
    *piVar1 = 0;
    if (-1 < (this->Elements).ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,&(this->Elements).ArrayMax);
    return;
  }
  uVar13 = iVar10 - 1;
  if (uVar7 == uVar13) {
    uVar13 = 0;
    if ((int)uVar7 < iVar10) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Elements).AllocatorInstance.Data;
    iVar10 = ~uVar7 + *piVar1;
    if (1 < iVar10) {
      iVar10 = 1;
    }
    if (iVar10 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar7 * 0x24,pFVar3 + (longlong)(*piVar1 - iVar10) * 0x24,
              (longlong)iVar10 * 0x24);
    }
    *piVar1 = *piVar1 + -1;
    return;
  }
  uVar8 = 0;
  if ((int)uVar13 < iVar10) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x24 + 0xc);
  if ((uVar8 == 0xffffffff) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  FHashTable::Remove((FHashTable *)&this->HashTable,uVar8,uVar13);
  uVar13 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Elements).AllocatorInstance.Data;
  iVar10 = *piVar1 + ~uVar7;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove(pFVar3 + (longlong)(int)uVar7 * 0x24,pFVar3 + (longlong)(*piVar1 - iVar10) * 0x24,
            (longlong)iVar10 * 0x24);
  }
  *piVar1 = *piVar1 + -1;
  FHashTable::Add((FHashTable *)&this->HashTable,uVar8,uVar7);
  return;
}

// ResizeHashBuckets @ 1482a7240

void __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::ResizeHashBuckets
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar2 = (this->Elements).ArrayNum;
  iVar9 = 1;
  if (uVar2 + 1 != 0) {
    iVar9 = uVar2 + 1;
  }
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  FHashTable::Clear((FHashTable *)&this->HashTable,param_1,1 << ((byte)lVar10 & 0x1f));
  uVar8 = 0;
  if (uVar2 != 0) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      uVar6 = *(uint *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x24 + 0xc)
      ;
      if ((uVar6 == 0xffffffff) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7431867033672745159>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,199,"Idx.IsValid()"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      if (*(uint *)&(this->HashTable).field_0x8 <= uVar8) {
        iVar9 = 1;
        if (uVar8 + 1 != 0) {
          iVar9 = uVar8 + 1;
        }
        uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar7 = 1 << ((byte)lVar3 & 0x1f);
        if (uVar7 < 0x20) {
          uVar7 = 0x20;
        }
        FHashTable::Resize((FHashTable *)&this->HashTable,uVar7);
      }
      lVar3 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & *(uint *)&(this->HashTable).field_0x4) * 4;
      *(undefined4 *)(lVar10 + *(longlong *)&(this->HashTable).field_0x18) =
           *(undefined4 *)(lVar3 + *(longlong *)&(this->HashTable).field_0x10);
      lVar10 = lVar10 + 4;
      *(uint *)(lVar3 + *(longlong *)&(this->HashTable).field_0x10) = uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return;
}

// Serialize @ 1482a8b60

void __thiscall
Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Serialize
          (TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this,
          FChaosArchive *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  operator<<<Chaos::SQMapKeyWithValue<FExternalSpatialAccelerationPayload,Chaos::
  FAABBTreePayloadInfo>_TSizedDefaultAllocator<32>_>(param_1,&this->Elements);
  if ((param_1->_padding_ & 1) != 0) {
    uVar2 = (this->Elements).ArrayNum;
    uVar9 = 1;
    if (uVar2 != 0) {
      uVar9 = uVar2;
    }
    uVar1 = (ulonglong)(uVar9 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    FHashTable::Clear((FHashTable *)&this->HashTable,0x400,1 << ((byte)lVar10 & 0x1f));
    uVar9 = 0;
    if (uVar2 != 0) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Elements).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        uVar6 = *(uint *)((this->Elements).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x24 + 0xc);
        if ((uVar6 == 0xffffffff) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7431867033672745159>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                               ,199,"Idx.IsValid()"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        if (*(uint *)&(this->HashTable).field_0x8 <= uVar9) {
          iVar7 = 1;
          if (uVar9 + 1 != 0) {
            iVar7 = uVar9 + 1;
          }
          uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar3 & 0x1f);
          if (uVar8 < 0x20) {
            uVar8 = 0x20;
          }
          FHashTable::Resize((FHashTable *)&this->HashTable,uVar8);
        }
        lVar3 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & *(uint *)&(this->HashTable).field_0x4) * 4;
        *(undefined4 *)(lVar10 + *(longlong *)&(this->HashTable).field_0x18) =
             *(undefined4 *)(lVar3 + *(longlong *)&(this->HashTable).field_0x10);
        lVar10 = lVar10 + 4;
        *(uint *)(lVar3 + *(longlong *)&(this->HashTable).field_0x10) = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar2);
    }
  }
  return;
}

