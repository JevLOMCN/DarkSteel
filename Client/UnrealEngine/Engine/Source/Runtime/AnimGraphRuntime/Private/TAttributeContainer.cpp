// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 4

// ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> @ 146407e60

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UniqueTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)(this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (this->AttributeIdentifiers).AllocatorInstance.Data,
             (this->AttributeIdentifiers).ArrayNum);
  pFVar1 = (this->AttributeIdentifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  pFVar1 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> @ 146407ee0

void __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UniqueTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (this->AttributeIdentifiers).AllocatorInstance.Data,
             (this->AttributeIdentifiers).ArrayNum);
  pFVar1 = (this->AttributeIdentifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  pFVar1 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CopyFrom @ 1464223b0

/* WARNING: Removing unreachable block (ram,0x00014642273a) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  UObject *pUVar8;
  UScriptStruct *this_00;
  uint uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  FWeakObjectPtr local_res20;
  longlong local_88;
  longlong local_80;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_60 [2];
  
  if (param_1 != this) {
    local_res10 = param_1;
    TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    operator=(&this->AttributeIdentifiers,&param_1->AttributeIdentifiers);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (&this->UniqueTypedBoneIndices,&param_1->UniqueTypedBoneIndices);
    TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
              (&this->UniqueTypes,&param_1->UniqueTypes);
    uVar14 = (param_1->Values).ArrayNum;
    pTVar1 = &this->Values;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar1->AllocatorInstance).Data,(this->Values).ArrayNum);
    piVar11 = &(this->Values).ArrayMax;
    (this->Values).ArrayNum = 0;
    if (*piVar11 != uVar14) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar14,&pTVar1->AllocatorInstance,0,piVar11);
    }
    lVar7 = (longlong)(this->UniqueTypes).ArrayNum;
    local_res18 = 0;
    if (0 < lVar7) {
      local_88 = 0;
      local_80 = 0;
      do {
        uVar14 = local_res18;
        piVar11 = &(this->Values).ArrayMax;
        uVar9 = ~local_res18;
        uVar4 = 0;
        if ((int)local_res18 < (param_1->Values).ArrayNum) {
          uVar4 = uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (this->Values).ArrayNum;
        pFVar15 = (param_1->Values).AllocatorInstance.Data + local_80;
        if (iVar5 == *piVar11) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar11);
        }
        pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        (this->Values).ArrayNum = iVar5 + 1;
        *(undefined8 *)pFVar13 = 0;
        *(undefined8 *)(pFVar13 + 8) = 0;
        uVar4 = 0;
        if ((int)uVar14 < (this->UniqueTypes).ArrayNum) {
          uVar4 = uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res20 = *(FWeakObjectPtr *)((this->UniqueTypes).AllocatorInstance.Data + local_88 * 8)
        ;
        iVar5 = *(int *)(pFVar15 + 8);
        puVar16 = *(undefined8 **)pFVar15;
        puVar12 = puVar16 + (longlong)iVar5 * 2;
        while( true ) {
          if (*(int *)(pFVar15 + 8) != iVar5) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (puVar16 == puVar12) break;
          pUVar8 = FWeakObjectPtr::Get(&local_res20);
          local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_60[0].ArrayNum = 0;
          local_60[0].ArrayMax = 0;
          if (pUVar8 == (UObject *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InStruct",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                               ,0x48,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            uVar14 = *(short *)&pUVar8[2].field_0xc + -1 + *(int *)&pUVar8[2].field_0x8 &
                     -(int)*(short *)&pUVar8[2].field_0xc;
            if (((int)uVar14 < 1) &&
               (bVar3 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_2142383606264233908>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                                   ,0x4c,"StructureSize > 0"), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(local_60,uVar14,Default);
            (**(code **)(*(longlong *)pUVar8 + 0x2f8))(pUVar8,local_60[0].AllocatorInstance.Data,1);
          }
          if (((*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)pFVar13 <= local_60) &&
              (local_60 <
               *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)pFVar13 +
               *(int *)(pFVar13 + 0xc))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = *(int *)(pFVar13 + 8);
          if (iVar6 == *(int *)(pFVar13 + 0xc)) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
          }
          *(int *)(pFVar13 + 8) = iVar6 + 1;
          puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)pFVar13);
          *puVar10 = 0;
          *puVar10 = local_60[0].AllocatorInstance.Data;
          *(int *)(puVar10 + 1) = local_60[0].ArrayNum;
          *(int *)((longlong)puVar10 + 0xc) = local_60[0].ArrayMax;
          local_60[0].ArrayNum = 0;
          local_60[0].ArrayMax = 0;
          local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          this_00 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res20);
          UScriptStruct::CopyScriptStruct(this_00,(void *)*puVar10,(void *)*puVar16,1);
          puVar16 = puVar16 + 2;
        }
        local_res18 = local_res18 + 1;
        local_88 = local_88 + 1;
        local_80 = local_80 + 0x10;
        param_1 = local_res10;
      } while (local_88 < lVar7);
    }
  }
  return;
}

// MoveFrom @ 14645e820

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::MoveFrom
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1)

{
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pTVar1 = &param_1->AttributeIdentifiers;
  pTVar2 = &this->AttributeIdentifiers;
  if (pTVar2 != pTVar1) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
               (pTVar2->AllocatorInstance).Data,(this->AttributeIdentifiers).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AttributeIdentifiers).ArrayNum = (param_1->AttributeIdentifiers).ArrayNum;
    (this->AttributeIdentifiers).ArrayMax = (param_1->AttributeIdentifiers).ArrayMax;
    (param_1->AttributeIdentifiers).ArrayNum = 0;
    (param_1->AttributeIdentifiers).ArrayMax = 0;
  }
  if (this != param_1) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
               (this->UniqueTypedBoneIndices).ArrayNum);
    pFVar5 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->UniqueTypedBoneIndices).AllocatorInstance.Data =
         (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data;
    (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UniqueTypedBoneIndices).ArrayNum = (param_1->UniqueTypedBoneIndices).ArrayNum;
    (this->UniqueTypedBoneIndices).ArrayMax = (param_1->UniqueTypedBoneIndices).ArrayMax;
    (param_1->UniqueTypedBoneIndices).ArrayNum = 0;
    (param_1->UniqueTypedBoneIndices).ArrayMax = 0;
  }
  pTVar3 = &param_1->Values;
  pTVar4 = &this->Values;
  if (pTVar4 != pTVar3) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar4->AllocatorInstance).Data,(this->Values).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Values).ArrayNum = (param_1->Values).ArrayNum;
    (this->Values).ArrayMax = (param_1->Values).ArrayMax;
    (param_1->Values).ArrayNum = 0;
    (param_1->Values).ArrayMax = 0;
  }
  pTVar7 = &param_1->UniqueTypes;
  pTVar6 = &this->UniqueTypes;
  if (pTVar6 != pTVar7) {
    pFVar5 = (pTVar6->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UniqueTypes).ArrayNum = (param_1->UniqueTypes).ArrayNum;
    (this->UniqueTypes).ArrayMax = (param_1->UniqueTypes).ArrayMax;
    (param_1->UniqueTypes).ArrayNum = 0;
    (param_1->UniqueTypes).ArrayMax = 0;
  }
  return;
}

