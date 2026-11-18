// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// operator= @ 14725dfc0

TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator=
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1)

{
  int *piVar1;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
               (this->UniqueTypedBoneIndices).ArrayNum);
    iVar5 = (param_1->UniqueTypedBoneIndices).ArrayNum;
    piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data;
    (this->UniqueTypedBoneIndices).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,(ForAnyElementType *)this,iVar5,piVar1);
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((this->UniqueTypedBoneIndices).AllocatorInstance.Data,pTVar6,iVar5);
    }
  }
  pTVar2 = &this->AttributeIdentifiers;
  if (pTVar2 != &param_1->AttributeIdentifiers) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
               (pTVar2->AllocatorInstance).Data,(this->AttributeIdentifiers).ArrayNum);
    iVar5 = (param_1->AttributeIdentifiers).ArrayNum;
    piVar1 = &(this->AttributeIdentifiers).ArrayMax;
    pTVar7 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (param_1->AttributeIdentifiers).AllocatorInstance.Data;
    (this->AttributeIdentifiers).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar7,iVar5);
    }
  }
  pTVar3 = &this->Values;
  if (pTVar3 != &param_1->Values) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar3->AllocatorInstance).Data,(this->Values).ArrayNum);
    iVar5 = (param_1->Values).ArrayNum;
    piVar1 = &(this->Values).ArrayMax;
    pTVar8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)(param_1->Values).AllocatorInstance.Data;
    (this->Values).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar8,iVar5);
    }
  }
  pTVar4 = &this->UniqueTypes;
  if (pTVar4 != &param_1->UniqueTypes) {
    iVar5 = (param_1->UniqueTypes).ArrayNum;
    piVar1 = &(this->UniqueTypes).ArrayMax;
    _Src = (param_1->UniqueTypes).AllocatorInstance.Data;
    (this->UniqueTypes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
      }
    }
  }
  return this;
}

// TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> @ 1473d4480

TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1)

{
  int *piVar1;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->UniqueTypedBoneIndices).ArrayNum;
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data;
  (this->UniqueTypedBoneIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((this->UniqueTypedBoneIndices).AllocatorInstance.Data,pTVar6,iVar5);
  }
  pTVar2 = &this->AttributeIdentifiers;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AttributeIdentifiers).ArrayMax;
  iVar5 = (param_1->AttributeIdentifiers).ArrayNum;
  pTVar7 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
           (param_1->AttributeIdentifiers).AllocatorInstance.Data;
  (this->AttributeIdentifiers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((pTVar2->AllocatorInstance).Data,pTVar7,iVar5);
  }
  pTVar3 = &this->Values;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Values).ArrayMax;
  iVar5 = (param_1->Values).ArrayNum;
  pTVar8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
            *)(param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar8,iVar5);
  }
  pTVar4 = &this->UniqueTypes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UniqueTypes).ArrayMax;
  iVar5 = (param_1->UniqueTypes).ArrayNum;
  _Src = (param_1->UniqueTypes).AllocatorInstance.Data;
  (this->UniqueTypes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
  }
  return this;
}

// CopyFrom<TMemStackAllocator<0>_> @ 147429170

/* WARNING: Removing unreachable block (ram,0x000147429456) */

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
CopyFrom<TMemStackAllocator<0>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1)

{
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  longlong local_78;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_58;
  
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
  piVar13 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar13 != uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&pTVar1->AllocatorInstance,0,piVar13);
  }
  lVar8 = (longlong)(this->UniqueTypes).ArrayNum;
  uVar14 = 0;
  if (0 < lVar8) {
    local_78 = 0;
    local_res20 = 0;
    do {
      lVar3 = local_res20;
      piVar13 = &(this->Values).ArrayMax;
      uVar5 = 0;
      if ((int)uVar14 < (param_1->Values).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (this->Values).ArrayNum;
      pFVar16 = (param_1->Values).AllocatorInstance.Data + local_78;
      if (iVar6 == *piVar13) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,piVar13);
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      (this->Values).ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)(pFVar12 + 8) = 0;
      uVar5 = 0;
      if ((int)uVar14 < (this->UniqueTypes).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res18 = *(FWeakObjectPtr *)((this->UniqueTypes).AllocatorInstance.Data + lVar3 * 8);
      iVar6 = *(int *)(pFVar16 + 8);
      puVar11 = *(undefined8 **)pFVar16;
      puVar15 = puVar11 + (longlong)iVar6 * 2;
      while( true ) {
        if (*(int *)(pFVar16 + 8) != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar11 == puVar15) break;
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        local_58.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.StructMemory.ArrayNum = 0;
        local_58.StructMemory.ArrayMax = 0;
        TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate(&local_58,pUVar9);
        if (((*(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)pFVar12 <= &local_58) &&
            (&local_58 <
             *(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)pFVar12 + *(int *)(pFVar12 + 0xc)))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = *(int *)(pFVar12 + 8);
        if (iVar7 == *(int *)(pFVar12 + 0xc)) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
          *(int *)(pFVar12 + 8) = iVar7;
        }
        *(int *)(pFVar12 + 8) = iVar7 + 1;
        puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)pFVar12);
        *puVar10 = 0;
        *puVar10 = local_58.StructMemory.AllocatorInstance.Data;
        *(int *)(puVar10 + 1) = local_58.StructMemory.ArrayNum;
        *(int *)((longlong)puVar10 + 0xc) = local_58.StructMemory.ArrayMax;
        local_58.StructMemory.ArrayNum = 0;
        local_58.StructMemory.ArrayMax = 0;
        local_58.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        UScriptStruct::CopyScriptStruct(pUVar9,(void *)*puVar10,(void *)*puVar11,1);
        puVar11 = puVar11 + 2;
      }
      uVar14 = uVar14 + 1;
      local_res20 = local_res20 + 1;
      local_78 = local_78 + 0x10;
      param_1 = local_res10;
    } while (local_res20 < lVar8);
  }
  return;
}

// CopyFrom<TSizedDefaultAllocator<32>_> @ 1474a4440

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
CopyFrom<TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  longlong local_78;
  TWrappedAttribute<TMemStackAllocator<0>_> local_58;
  
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
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)(pTVar1->AllocatorInstance).Data,(this->Values).ArrayNum);
  piVar13 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar13 != uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&pTVar1->AllocatorInstance,0,piVar13);
  }
  lVar8 = (longlong)(this->UniqueTypes).ArrayNum;
  uVar14 = 0;
  if (0 < lVar8) {
    local_78 = 0;
    local_res20 = 0;
    do {
      lVar3 = local_res20;
      piVar13 = &(this->Values).ArrayMax;
      uVar5 = 0;
      if ((int)uVar14 < (param_1->Values).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (this->Values).ArrayNum;
      pFVar16 = (param_1->Values).AllocatorInstance.Data + local_78;
      if (iVar6 == *piVar13) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,piVar13);
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      (this->Values).ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)(pFVar12 + 8) = 0;
      uVar5 = 0;
      if ((int)uVar14 < (this->UniqueTypes).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res18 = *(FWeakObjectPtr *)((this->UniqueTypes).AllocatorInstance.Data + lVar3 * 8);
      iVar6 = *(int *)(pFVar16 + 8);
      puVar15 = *(undefined8 **)pFVar16;
      puVar11 = puVar15 + (longlong)iVar6 * 2;
      while( true ) {
        if (*(int *)(pFVar16 + 8) != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar15 == puVar11) break;
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        local_58.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
        local_58.StructMemory.ArrayNum = 0;
        local_58.StructMemory.ArrayMax = 0;
        TWrappedAttribute<TMemStackAllocator<0>_>::Allocate(&local_58,pUVar9);
        if (((*(TWrappedAttribute<TMemStackAllocator<0>_> **)pFVar12 <= &local_58) &&
            (&local_58 <
             *(TWrappedAttribute<TMemStackAllocator<0>_> **)pFVar12 + *(int *)(pFVar12 + 0xc))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = *(int *)(pFVar12 + 8);
        if (iVar7 == *(int *)(pFVar12 + 0xc)) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
          *(int *)(pFVar12 + 8) = iVar7;
        }
        *(int *)(pFVar12 + 8) = iVar7 + 1;
        puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)pFVar12);
        *puVar10 = 0;
        *puVar10 = local_58.StructMemory.AllocatorInstance.Data;
        local_58.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
        *(int *)(puVar10 + 1) = local_58.StructMemory.ArrayNum;
        *(int *)((longlong)puVar10 + 0xc) = local_58.StructMemory.ArrayMax;
        local_58.StructMemory.ArrayNum = 0;
        local_58.StructMemory.ArrayMax = 0;
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        UScriptStruct::CopyScriptStruct(pUVar9,(void *)*puVar10,(void *)*puVar15,1);
        puVar15 = puVar15 + 2;
      }
      uVar14 = uVar14 + 1;
      local_res20 = local_res20 + 1;
      local_78 = local_78 + 0x10;
      param_1 = local_res10;
    } while (local_res20 < lVar8);
  }
  return;
}

// ~TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> @ 1474b4620

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
~TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *this)

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

// CopyFrom @ 1474c9900

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::CopyFrom
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1)

{
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  longlong local_78;
  TWrappedAttribute<TMemStackAllocator<0>_> local_58;
  
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
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar1->AllocatorInstance).Data,(this->Values).ArrayNum);
    piVar13 = &(this->Values).ArrayMax;
    (this->Values).ArrayNum = 0;
    if (*piVar13 != uVar14) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar14,&pTVar1->AllocatorInstance,0,piVar13);
    }
    lVar8 = (longlong)(this->UniqueTypes).ArrayNum;
    uVar14 = 0;
    if (0 < lVar8) {
      local_78 = 0;
      local_res20 = 0;
      do {
        lVar3 = local_res20;
        piVar13 = &(this->Values).ArrayMax;
        uVar5 = 0;
        if ((int)uVar14 < (param_1->Values).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (this->Values).ArrayNum;
        pFVar16 = (param_1->Values).AllocatorInstance.Data + local_78;
        if (iVar6 == *piVar13) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar13);
        }
        pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        (this->Values).ArrayNum = iVar6 + 1;
        *(undefined8 *)pFVar12 = 0;
        *(undefined8 *)(pFVar12 + 8) = 0;
        uVar5 = 0;
        if ((int)uVar14 < (this->UniqueTypes).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res18 = *(FWeakObjectPtr *)((this->UniqueTypes).AllocatorInstance.Data + lVar3 * 8);
        iVar6 = *(int *)(pFVar16 + 8);
        puVar15 = *(undefined8 **)pFVar16;
        puVar11 = puVar15 + (longlong)iVar6 * 2;
        while( true ) {
          if (*(int *)(pFVar16 + 8) != iVar6) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (puVar15 == puVar11) break;
          pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          local_58.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
          local_58.StructMemory.ArrayNum = 0;
          local_58.StructMemory.ArrayMax = 0;
          TWrappedAttribute<TMemStackAllocator<0>_>::Allocate(&local_58,pUVar9);
          if (((*(TWrappedAttribute<TMemStackAllocator<0>_> **)pFVar12 <= &local_58) &&
              (&local_58 <
               *(TWrappedAttribute<TMemStackAllocator<0>_> **)pFVar12 + *(int *)(pFVar12 + 0xc))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = *(int *)(pFVar12 + 8);
          if (iVar7 == *(int *)(pFVar12 + 0xc)) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
            *(int *)(pFVar12 + 8) = iVar7;
          }
          *(int *)(pFVar12 + 8) = iVar7 + 1;
          puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)pFVar12);
          *puVar10 = 0;
          *puVar10 = local_58.StructMemory.AllocatorInstance.Data;
          local_58.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
          *(int *)(puVar10 + 1) = local_58.StructMemory.ArrayNum;
          *(int *)((longlong)puVar10 + 0xc) = local_58.StructMemory.ArrayMax;
          local_58.StructMemory.ArrayNum = 0;
          local_58.StructMemory.ArrayMax = 0;
          pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          UScriptStruct::CopyScriptStruct(pUVar9,(void *)*puVar10,(void *)*puVar15,1);
          puVar15 = puVar15 + 2;
        }
        uVar14 = uVar14 + 1;
        local_res20 = local_res20 + 1;
        local_78 = local_78 + 0x10;
        param_1 = local_res10;
      } while (local_res20 < lVar8);
    }
  }
  return;
}

// FindOrAdd @ 1474d3480

uchar * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uchar *puVar12;
  FName *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int local_res8 [2];
  UScriptStruct *local_res10;
  TWrappedAttribute<TMemStackAllocator<0>_> local_48;
  
  local_res10 = param_1;
  uVar8 = FindOrAddTypeIndex(this,param_1);
  uVar17 = ~uVar8 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar8 < (this->AttributeIdentifiers).ArrayNum) {
    uVar11 = uVar17;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    puVar12 = (uchar *)(*pcVar4)();
    return puVar12;
  }
  lVar15 = (longlong)(int)uVar8 * 0x10;
  pFVar18 = (this->AttributeIdentifiers).AllocatorInstance.Data + lVar15;
  pFVar2 = *(FName **)&pFVar18->field_0x0;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)*(int *)&pFVar18[8].field_0x0 * 0x14);
  if (pFVar2 != pFVar1) {
    pFVar13 = pFVar2;
    do {
      if (((pFVar13[2].ComparisonIndex.Value == param_2->Index) && (pFVar13[1] == param_2->Name)) &&
         (*pFVar13 == param_2->Namespace)) {
        uVar11 = (uint)(((longlong)pFVar13 - (longlong)pFVar2) / 0x14);
        goto LAB_1474d3559;
      }
      pFVar13 = (FName *)&pFVar13[2].Number;
    } while (pFVar13 != pFVar1);
  }
  uVar11 = 0xffffffff;
LAB_1474d3559:
  if ((((int)uVar8 < 0) || ((this->Values).ArrayNum <= (int)uVar8)) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204739>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x183,"Values.IsValidIndex(TypeIndex)"), bVar7)) {
    pcVar4 = (code *)swi(3);
    puVar12 = (uchar *)(*pcVar4)();
    return puVar12;
  }
  uVar9 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar9 = uVar17;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    puVar12 = (uchar *)(*pcVar4)();
    return puVar12;
  }
  pFVar16 = (this->Values).AllocatorInstance.Data + lVar15;
  uVar9 = 0;
  if (uVar11 == 0xffffffff) {
    if (((*(FAttributeId **)&pFVar18->field_0x0 <= param_2) &&
        (param_2 < *(FAttributeId **)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    iVar10 = *(int *)&pFVar18[8].field_0x0;
    if (iVar10 == *(int *)(pFVar18 + 0xc)) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
    }
    *(int *)&pFVar18[8].field_0x0 = iVar10 + 1;
    FVar5 = param_2->Name;
    lVar3 = *(longlong *)&pFVar18->field_0x0;
    pFVar1 = (FName *)(lVar3 + (longlong)iVar10 * 0x14);
    *pFVar1 = param_2->Namespace;
    pFVar1[1] = FVar5;
    *(int *)(lVar3 + (longlong)iVar10 * 0x14 + 0x10) = param_2->Index;
    uVar11 = uVar9;
    if ((int)uVar8 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar11 = uVar17;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    local_res8[0] = param_2->Index;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               ((this->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar15),local_res8);
    pUVar6 = local_res10;
    local_48.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
    local_48.StructMemory.ArrayNum = 0;
    local_48.StructMemory.ArrayMax = 0;
    TWrappedAttribute<TMemStackAllocator<0>_>::Allocate(&local_48,local_res10);
    if (((*(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar16->field_0x0 <= &local_48) &&
        (&local_48 <
         *(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar16->field_0x0 +
         *(int *)(pFVar16 + 0xc))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    uVar11 = *(uint *)&pFVar16[8].field_0x0;
    if (uVar11 == *(uint *)(pFVar16 + 0xc)) {
      uVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
    }
    *(uint *)&pFVar16[8].field_0x0 = uVar11 + 1;
    puVar14 = (undefined8 *)(*(longlong *)&pFVar16->field_0x0 + (longlong)(int)uVar11 * 0x10);
    *puVar14 = 0;
    *puVar14 = local_48.StructMemory.AllocatorInstance.Data;
    local_48.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
    *(int *)(puVar14 + 1) = local_48.StructMemory.ArrayNum;
    *(int *)((longlong)puVar14 + 0xc) = local_48.StructMemory.ArrayMax;
    local_48.StructMemory.ArrayNum = 0;
    local_48.StructMemory.ArrayMax = 0;
    if ((int)uVar11 < *(int *)&pFVar16[8].field_0x0) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    puVar14 = (undefined8 *)(*(longlong *)&pFVar16->field_0x0 + (longlong)(int)uVar11 * 0x10);
    (**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6,*puVar14,1);
    if ((*(int *)&pFVar18[8].field_0x0 != *(int *)&pFVar16[8].field_0x0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204754>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x192,"AttributeIds.Num() == TypedArray.Num()"), bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    puVar12 = (uchar *)*puVar14;
  }
  else {
    if ((((int)uVar11 < 0) || (*(int *)&pFVar16[8].field_0x0 <= (int)uVar11)) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204759>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x197,"TypedArray.IsValidIndex(AttributeIndex)"), bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    if ((int)uVar11 < *(int *)&pFVar16[8].field_0x0) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      puVar12 = (uchar *)(*pcVar4)();
      return puVar12;
    }
    puVar12 = *(uchar **)(*(longlong *)&pFVar16->field_0x0 + (longlong)(int)uVar11 * 0x10);
  }
  return puVar12;
}

// FindOrAddTypeIndex @ 1474d3940

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAddTypeIndex
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  
  iVar5 = (this->UniqueTypes).ArrayNum;
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  iVar4 = TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_>
                    (&this->UniqueTypes,(TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)&local_res8)
  ;
  if (iVar5 < (this->UniqueTypes).ArrayNum) {
    iVar5 = (this->UniqueTypedBoneIndices).ArrayNum;
    piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    piVar1 = &(this->AttributeIdentifiers).ArrayMax;
    pFVar6 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->UniqueTypedBoneIndices).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    iVar5 = (this->AttributeIdentifiers).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->AttributeIdentifiers).AllocatorInstance,piVar1);
    }
    piVar1 = &(this->Values).ArrayMax;
    pFVar6 = (this->AttributeIdentifiers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->AttributeIdentifiers).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    iVar5 = (this->Values).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Values).AllocatorInstance,piVar1);
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->Values).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    if (((this->UniqueTypedBoneIndices).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205163>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32b,"UniqueTypedBoneIndices.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (((this->AttributeIdentifiers).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205164>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32c,"AttributeIdentifiers.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (((this->Values).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205165>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32d,"Values.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return iVar4;
}

// IndexOfByKey<FFloatAnimationAttribute> @ 147529570

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
IndexOfByKey<FFloatAnimationAttribute>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FAttributeId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  
  pUVar7 = FFloatAnimationAttribute::StaticStruct();
  uVar5 = FindTypeIndex(this,pUVar7);
  if (uVar5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar5 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar5 * 0x10;
    piVar9 = *(int **)(pFVar2 + lVar10);
    piVar1 = piVar9 + *(int *)(pFVar2 + lVar10 + 8);
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_1->Index) {
        uVar8 = 0;
        if ((int)uVar5 < (this->AttributeIdentifiers).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                IndexOfByKey<UE::Anim::FAttributeId>
                          ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                           ((this->AttributeIdentifiers).AllocatorInstance.Data + lVar10),param_1);
        return iVar6;
      }
    }
  }
  return -1;
}

// IndexOfByKey<FIntegerAnimationAttribute> @ 147529690

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
IndexOfByKey<FIntegerAnimationAttribute>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FAttributeId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  
  pUVar7 = FIntegerAnimationAttribute::StaticStruct();
  uVar5 = FindTypeIndex(this,pUVar7);
  if (uVar5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar5 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar5 * 0x10;
    piVar9 = *(int **)(pFVar2 + lVar10);
    piVar1 = piVar9 + *(int *)(pFVar2 + lVar10 + 8);
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_1->Index) {
        uVar8 = 0;
        if ((int)uVar5 < (this->AttributeIdentifiers).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                IndexOfByKey<UE::Anim::FAttributeId>
                          ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                           ((this->AttributeIdentifiers).AllocatorInstance.Data + lVar10),param_1);
        return iVar6;
      }
    }
  }
  return -1;
}

// IndexOfByKey<FQuaternionAnimationAttribute> @ 1475297b0

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
IndexOfByKey<FQuaternionAnimationAttribute>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FAttributeId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  
  pUVar7 = FQuaternionAnimationAttribute::StaticStruct();
  uVar5 = FindTypeIndex(this,pUVar7);
  if (uVar5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar5 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar5 * 0x10;
    piVar9 = *(int **)(pFVar2 + lVar10);
    piVar1 = piVar9 + *(int *)(pFVar2 + lVar10 + 8);
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_1->Index) {
        uVar8 = 0;
        if ((int)uVar5 < (this->AttributeIdentifiers).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                IndexOfByKey<UE::Anim::FAttributeId>
                          ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                           ((this->AttributeIdentifiers).AllocatorInstance.Data + lVar10),param_1);
        return iVar6;
      }
    }
  }
  return -1;
}

// IndexOfByKey<FTransformAnimationAttribute> @ 1475298d0

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
IndexOfByKey<FTransformAnimationAttribute>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FAttributeId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  
  pUVar7 = FTransformAnimationAttribute::StaticStruct();
  uVar5 = FindTypeIndex(this,pUVar7);
  if (uVar5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar5 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar5 * 0x10;
    piVar9 = *(int **)(pFVar2 + lVar10);
    piVar1 = piVar9 + *(int *)(pFVar2 + lVar10 + 8);
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_1->Index) {
        uVar8 = 0;
        if ((int)uVar5 < (this->AttributeIdentifiers).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                IndexOfByKey<UE::Anim::FAttributeId>
                          ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                           ((this->AttributeIdentifiers).AllocatorInstance.Data + lVar10),param_1);
        return iVar6;
      }
    }
  }
  return -1;
}

// IndexOfByKey<FVectorAnimationAttribute> @ 1475299f0

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
IndexOfByKey<FVectorAnimationAttribute>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FAttributeId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  
  pUVar7 = FVectorAnimationAttribute::StaticStruct();
  uVar5 = FindTypeIndex(this,pUVar7);
  if (uVar5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar5 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar5 * 0x10;
    piVar9 = *(int **)(pFVar2 + lVar10);
    piVar1 = piVar9 + *(int *)(pFVar2 + lVar10 + 8);
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_1->Index) {
        uVar8 = 0;
        if ((int)uVar5 < (this->AttributeIdentifiers).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                IndexOfByKey<UE::Anim::FAttributeId>
                          ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                           ((this->AttributeIdentifiers).AllocatorInstance.Data + lVar10),param_1);
        return iVar6;
      }
    }
  }
  return -1;
}

// Add @ 147541fd0

uchar * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  FName *pFVar1;
  FAttributeId *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uchar *puVar10;
  longlong lVar11;
  FAttributeId *pFVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int local_res8 [2];
  TWrappedAttribute<TMemStackAllocator<0>_> local_48;
  
  uVar7 = FindOrAddTypeIndex(this,param_1);
  uVar15 = ~uVar7 >> 0x1f;
  uVar9 = 0;
  if ((int)uVar7 < (this->AttributeIdentifiers).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  lVar11 = (longlong)(int)uVar7 * 0x10;
  pFVar16 = (this->AttributeIdentifiers).AllocatorInstance.Data + lVar11;
  pFVar2 = *(FAttributeId **)&pFVar16->field_0x0;
  if (pFVar2 != pFVar2 + *(int *)&pFVar16[8].field_0x0) {
    pFVar12 = pFVar2;
    do {
      if (((pFVar12->Index == param_2->Index) && (pFVar12->Name == param_2->Name)) &&
         (pFVar12->Namespace == param_2->Namespace)) {
        if ((int)(((longlong)pFVar12 - (longlong)pFVar2) / 0x14) != -1) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1265464598543204689>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                             ,0x151,"ExistingAttributeIndex == INDEX_NONE");
          if (!bVar6) {
            return (uchar *)0x0;
          }
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        break;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != pFVar2 + *(int *)&pFVar16[8].field_0x0);
  }
  if (((pFVar2 <= param_2) && (param_2 < pFVar2 + *(int *)(pFVar16 + 0xc))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  iVar8 = *(int *)&pFVar16[8].field_0x0;
  if (iVar8 == *(int *)(pFVar16 + 0xc)) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
  }
  *(int *)&pFVar16[8].field_0x0 = iVar8 + 1;
  FVar5 = param_2->Name;
  lVar3 = *(longlong *)&pFVar16->field_0x0;
  pFVar1 = (FName *)(lVar3 + (longlong)iVar8 * 0x14);
  *pFVar1 = param_2->Namespace;
  pFVar1[1] = FVar5;
  *(int *)(lVar3 + (longlong)iVar8 * 0x14 + 0x10) = param_2->Index;
  uVar9 = 0;
  if ((int)uVar7 < (this->UniqueTypedBoneIndices).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  local_res8[0] = param_2->Index;
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             ((this->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar11),local_res8);
  uVar9 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  pFVar14 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  local_48.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
  local_48.StructMemory.ArrayNum = 0;
  local_48.StructMemory.ArrayMax = 0;
  TWrappedAttribute<TMemStackAllocator<0>_>::Allocate(&local_48,param_1);
  if (((*(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar14->field_0x0 <= &local_48) &&
      (&local_48 <
       *(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  uVar9 = *(uint *)&pFVar14[8].field_0x0;
  if (uVar9 == *(uint *)(pFVar14 + 0xc)) {
    uVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
  }
  *(uint *)&pFVar14[8].field_0x0 = uVar9 + 1;
  puVar13 = (undefined8 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)(int)uVar9 * 0x10);
  *puVar13 = 0;
  *puVar13 = local_48.StructMemory.AllocatorInstance.Data;
  local_48.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
  *(int *)(puVar13 + 1) = local_48.StructMemory.ArrayNum;
  *(int *)((longlong)puVar13 + 0xc) = local_48.StructMemory.ArrayMax;
  local_48.StructMemory.ArrayNum = 0;
  local_48.StructMemory.ArrayMax = 0;
  uVar7 = 0;
  if ((int)uVar9 < *(int *)&pFVar14[8].field_0x0) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  puVar13 = (undefined8 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)(int)uVar9 * 0x10);
  (**(code **)(param_1->_padding_ + 0x2f8))(param_1,*puVar13,1);
  if ((*(int *)&pFVar16[8].field_0x0 != *(int *)&pFVar14[8].field_0x0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204703>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x15f,"AttributeIds.Num() == TypedArray.Num()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  return (uchar *)*puVar13;
}

// Add @ 1475423d0

/* WARNING: Removing unreachable block (ram,0x0001475426ba) */

uchar * __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Add
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  FName *pFVar1;
  FAttributeId *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uchar *puVar10;
  longlong lVar11;
  FAttributeId *pFVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int local_res8 [2];
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_48;
  
  uVar7 = FindOrAddTypeIndex(this,param_1);
  uVar15 = ~uVar7 >> 0x1f;
  uVar9 = 0;
  if ((int)uVar7 < (this->AttributeIdentifiers).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  lVar11 = (longlong)(int)uVar7 * 0x10;
  pFVar16 = (this->AttributeIdentifiers).AllocatorInstance.Data + lVar11;
  pFVar2 = *(FAttributeId **)&pFVar16->field_0x0;
  if (pFVar2 != pFVar2 + *(int *)&pFVar16[8].field_0x0) {
    pFVar12 = pFVar2;
    do {
      if (((pFVar12->Index == param_2->Index) && (pFVar12->Name == param_2->Name)) &&
         (pFVar12->Namespace == param_2->Namespace)) {
        if ((int)(((longlong)pFVar12 - (longlong)pFVar2) / 0x14) != -1) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1265464598543204689>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                             ,0x151,"ExistingAttributeIndex == INDEX_NONE");
          if (!bVar6) {
            return (uchar *)0x0;
          }
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        break;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != pFVar2 + *(int *)&pFVar16[8].field_0x0);
  }
  if (((pFVar2 <= param_2) && (param_2 < pFVar2 + *(int *)(pFVar16 + 0xc))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  iVar8 = *(int *)&pFVar16[8].field_0x0;
  if (iVar8 == *(int *)(pFVar16 + 0xc)) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
  }
  *(int *)&pFVar16[8].field_0x0 = iVar8 + 1;
  FVar5 = param_2->Name;
  lVar3 = *(longlong *)&pFVar16->field_0x0;
  pFVar1 = (FName *)(lVar3 + (longlong)iVar8 * 0x14);
  *pFVar1 = param_2->Namespace;
  pFVar1[1] = FVar5;
  *(int *)(lVar3 + (longlong)iVar8 * 0x14 + 0x10) = param_2->Index;
  uVar9 = 0;
  if ((int)uVar7 < (this->UniqueTypedBoneIndices).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  local_res8[0] = param_2->Index;
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             ((this->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar11),local_res8);
  uVar9 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  pFVar14 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  local_48.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.StructMemory.ArrayNum = 0;
  local_48.StructMemory.ArrayMax = 0;
  TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate(&local_48,param_1);
  if (((*(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)&pFVar14->field_0x0 <= &local_48) &&
      (&local_48 <
       *(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)&pFVar14->field_0x0 +
       *(int *)(pFVar14 + 0xc))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  uVar9 = *(uint *)&pFVar14[8].field_0x0;
  if (uVar9 == *(uint *)(pFVar14 + 0xc)) {
    uVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
  }
  *(uint *)&pFVar14[8].field_0x0 = uVar9 + 1;
  lVar11 = (longlong)(int)uVar9 * 0x10;
  puVar13 = (undefined8 *)(*(longlong *)&pFVar14->field_0x0 + lVar11);
  *puVar13 = 0;
  *puVar13 = local_48.StructMemory.AllocatorInstance.Data;
  *(int *)(puVar13 + 1) = local_48.StructMemory.ArrayNum;
  *(int *)((longlong)puVar13 + 0xc) = local_48.StructMemory.ArrayMax;
  local_48.StructMemory.ArrayNum = 0;
  local_48.StructMemory.ArrayMax = 0;
  local_48.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = 0;
  if ((int)uVar9 < *(int *)&pFVar14[8].field_0x0) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  lVar3 = *(longlong *)&pFVar14->field_0x0;
  (**(code **)(param_1->_padding_ + 0x2f8))(param_1,*(undefined8 *)(lVar3 + lVar11),1);
  if ((*(int *)&pFVar16[8].field_0x0 != *(int *)&pFVar14[8].field_0x0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204703>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x15f,"AttributeIds.Num() == TypedArray.Num()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar10 = (uchar *)(*pcVar4)();
    return puVar10;
  }
  return *(uchar **)(lVar3 + lVar11);
}

// FindOrAddTypeIndex @ 147554f80

int __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::FindOrAddTypeIndex
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  
  iVar5 = (this->UniqueTypes).ArrayNum;
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  iVar4 = TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_>
                    (&this->UniqueTypes,(TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)&local_res8)
  ;
  if (iVar5 < (this->UniqueTypes).ArrayNum) {
    iVar5 = (this->UniqueTypedBoneIndices).ArrayNum;
    piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    piVar1 = &(this->AttributeIdentifiers).ArrayMax;
    pFVar6 = (this->UniqueTypedBoneIndices).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->UniqueTypedBoneIndices).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    iVar5 = (this->AttributeIdentifiers).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->AttributeIdentifiers).AllocatorInstance,piVar1);
    }
    piVar1 = &(this->Values).ArrayMax;
    pFVar6 = (this->AttributeIdentifiers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->AttributeIdentifiers).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    iVar5 = (this->Values).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Values).AllocatorInstance,piVar1);
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->Values).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    if (((this->UniqueTypedBoneIndices).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205163>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32b,"UniqueTypedBoneIndices.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (((this->AttributeIdentifiers).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205164>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32c,"AttributeIdentifiers.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (((this->Values).ArrayNum != (this->UniqueTypes).ArrayNum) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543205165>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x32d,"Values.Num() == UniqueTypes.Num()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return iVar4;
}

// FindTypeIndex @ 147555980

int __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindTypeIndex
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->UniqueTypes).AllocatorInstance.Data;
  iVar1 = (this->UniqueTypes).ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                      ((TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// FindTypeIndex @ 147555a00

int __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::FindTypeIndex
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->UniqueTypes).AllocatorInstance.Data;
  iVar1 = (this->UniqueTypes).ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                      ((TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// GetKeys @ 14755d010

TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetKeys
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttributeIdentifiers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
         ((this->AttributeIdentifiers).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// CopyFrom<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> @ 14791e330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014791eaf5) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
CopyFrom<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1,
          FBoneContainer *param_2)

{
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FMeshPoseBoneIndex *pFVar8;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  UObject *pUVar15;
  UScriptStruct *this_00;
  ForElementType<FSetElementId> FVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  undefined8 *puVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  uint local_174;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_170;
  uint local_160 [2];
  longlong local_158;
  longlong local_150;
  int local_148;
  uint local_144;
  FScriptContainerElement *local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  FWeakObjectPtr local_118;
  longlong local_110;
  longlong local_108;
  TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_100;
  TPairInitializer<int_const_&,FMeshPoseBoneIndex_const_&> local_f8;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_e0;
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_d8;
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  longlong local_b0;
  int *local_a8;
  uint *local_a0;
  TSet<TTuple<int,FMeshPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FMeshPoseBoneIndex,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_e8 = &this->UniqueTypes;
  local_100 = param_1;
  local_f8.Value = (FMeshPoseBoneIndex *)param_2;
  local_d0 = this;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            (local_e8,&param_1->UniqueTypes);
  uVar20 = (param_1->AttributeIdentifiers).ArrayNum;
  pTVar1 = &this->AttributeIdentifiers;
  local_e0 = pTVar1;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (pTVar1->AllocatorInstance).Data,(this->AttributeIdentifiers).ArrayNum);
  piVar3 = &(this->AttributeIdentifiers).ArrayMax;
  (this->AttributeIdentifiers).ArrayNum = 0;
  if (*piVar3 != uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,&pTVar1->AllocatorInstance,0,piVar3);
  }
  uVar20 = (param_1->UniqueTypedBoneIndices).ArrayNum;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  piVar3 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).ArrayNum = 0;
  if (*piVar3 != uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,(ForAnyElementType *)this,0,piVar3);
  }
  uVar20 = (param_1->Values).ArrayNum;
  pTVar2 = &this->Values;
  local_d8 = pTVar2;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(pTVar2->AllocatorInstance).Data,(this->Values).ArrayNum);
  piVar3 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar3 != uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,&pTVar2->AllocatorInstance,0,piVar3);
  }
  local_b0 = (longlong)(param_1->UniqueTypedBoneIndices).ArrayNum;
  local_174 = 0;
  if (0 < local_b0) {
    local_158 = 0;
    local_138 = 0;
    do {
      lVar17 = local_138;
      local_98.Elements._0_8_ = 0;
      uVar25 = ~local_174 >> 0x1f;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      uVar20 = 0;
      if ((int)local_174 < (param_1->UniqueTypedBoneIndices).ArrayNum) {
        uVar20 = uVar25;
      }
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = local_f8.Value;
      pFVar18 = (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar17;
      piVar21 = *(int **)pFVar18;
      iVar13 = *(int *)(pFVar18 + 8);
      piVar3 = piVar21 + iVar13;
      while( true ) {
        if (*(int *)(pFVar18 + 8) != iVar13) {
          local_178[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_178);
        }
        pTVar9 = local_e8;
        pTVar7 = local_100;
        uVar20 = local_174;
        if (piVar21 == piVar3) break;
        local_148 = *piVar21;
        lVar17 = (longlong)local_148;
        if ((local_148 < 0) ||
           (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->ArrayNum <=
            local_148)) {
          local_160[0] = 0xffffffff;
          piVar21 = piVar21 + 1;
        }
        else {
          if ((local_148 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_a8 = &local_148;
          local_a0 = local_160;
          local_160[0] = (uint)*(ushort *)
                                ((((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                  &pFVar8->field_0x0)->AllocatorInstance).Data + lVar17 * 2);
          TSet<TTuple<int,FMeshPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FMeshPoseBoneIndex,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FMeshPoseBoneIndex_const_&>_>
                    (&local_98,&local_f8,(bool *)&local_a8);
          piVar21 = piVar21 + 1;
        }
      }
      uVar12 = 0;
      if ((int)local_174 < local_e8->ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_118 = *(FWeakObjectPtr *)((pTVar9->AllocatorInstance).Data + local_158 * 8);
      uVar12 = 0;
      if ((int)uVar20 < (pTVar7->AttributeIdentifiers).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = local_138;
      local_140 = (pTVar7->AttributeIdentifiers).AllocatorInstance.Data + local_138;
      uVar12 = 0;
      if ((int)uVar20 < (pTVar7->Values).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar1 = local_e0;
      pFVar18 = (pTVar7->Values).AllocatorInstance.Data + lVar17;
      iVar13 = local_e0->ArrayNum;
      local_b8 = pFVar18;
      if (iVar13 == local_e0->ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_e0->AllocatorInstance,&local_e0->ArrayMax);
      }
      pTVar2 = local_d8;
      pTVar1->ArrayNum = iVar13 + 1;
      pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)&pFVar26->field_0x0 = 0;
      *(undefined8 *)&pFVar26[8].field_0x0 = 0;
      iVar13 = local_d8->ArrayNum;
      if (iVar13 == local_d8->ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_d8->AllocatorInstance,&local_d8->ArrayMax);
      }
      pTVar10 = local_d0;
      pTVar2->ArrayNum = iVar13 + 1;
      pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)&pFVar24->field_0x0 = 0;
      *(undefined8 *)&pFVar24[8].field_0x0 = 0;
      iVar13 = (local_d0->UniqueTypedBoneIndices).ArrayNum;
      if (iVar13 == (local_d0->UniqueTypedBoneIndices).ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)local_d0,
                            &(local_d0->UniqueTypedBoneIndices).ArrayMax);
      }
      uVar25 = 0;
      local_c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((pTVar10->UniqueTypedBoneIndices).AllocatorInstance.Data + (longlong)iVar13 * 0x10
                 );
      (pTVar10->UniqueTypedBoneIndices).ArrayNum = iVar13 + 1;
      local_150 = 0;
      (local_c8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_c8->ArrayNum = 0;
      local_c8->ArrayMax = 0;
      local_c0 = (longlong)*(int *)(local_140 + 8);
      if (0 < local_c0) {
        local_108 = 0;
        local_110 = 0;
        do {
          lVar6 = local_108;
          lVar17 = local_110;
          uVar20 = 0;
          if ((int)uVar25 < *(int *)(local_140 + 8)) {
            uVar20 = ~uVar25 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar22 = (undefined8 *)(lVar17 + *(longlong *)local_140);
          uVar20 = 0;
          if ((int)uVar25 < *(int *)(pFVar18 + 8)) {
            uVar20 = ~uVar25 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar23 = (uint *)0x0;
          lVar17 = *(longlong *)pFVar18;
          puVar14 = puVar23;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            uVar20 = *(uint *)((longlong)FVar16 +
                              (ulonglong)(local_98.HashSize - 1U & *(uint *)(puVar22 + 2)) * 4);
            while ((puVar14 = puVar23, uVar20 != 0xffffffff &&
                   (puVar14 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar20 * 0x10),
                   *puVar14 != *(uint *)(puVar22 + 2)))) {
              uVar20 = puVar14[2];
            }
          }
          puVar19 = puVar14 + 1;
          if (puVar14 == (uint *)0x0) {
            puVar19 = puVar23;
          }
          if (puVar19 != (uint *)0x0) {
            local_130 = *puVar22;
            uStack_128 = puVar22[1];
            local_120 = *puVar19;
            if (((*(undefined8 **)&pFVar26->field_0x0 <= &local_130) &&
                (&local_130 <
                 (undefined8 *)
                 ((longlong)*(undefined8 **)&pFVar26->field_0x0 +
                 (longlong)*(int *)(pFVar26 + 0xc) * 0x14))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = *(int *)&pFVar26[8].field_0x0;
            if (iVar13 == *(int *)(pFVar26 + 0xc)) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x414,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
            }
            *(int *)&pFVar26[8].field_0x0 = iVar13 + 1;
            lVar4 = *(longlong *)&pFVar26->field_0x0;
            puVar22 = (undefined8 *)(lVar4 + (longlong)iVar13 * 0x14);
            *puVar22 = local_130;
            puVar22[1] = uStack_128;
            *(uint *)(lVar4 + (longlong)iVar13 * 0x14 + 0x10) = local_120;
            pUVar15 = FWeakObjectPtr::Get(&local_118);
            local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_170.ArrayNum = 0;
            local_170.ArrayMax = 0;
            if (pUVar15 == (UObject *)0x0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InStruct",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                                  ,0x48,L"");
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              uVar20 = *(short *)&pUVar15[2].field_0xc + -1 + *(int *)&pUVar15[2].field_0x8 &
                       -(int)*(short *)&pUVar15[2].field_0xc;
              if (((int)uVar20 < 1) &&
                 (bVar11 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_2142383606264233908>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                                      ,0x4c,"StructureSize > 0"), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_170,uVar20,Default);
              (**(code **)(*(longlong *)pUVar15 + 0x2f8))
                        (pUVar15,local_170.AllocatorInstance.Data,1);
            }
            if (((*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&pFVar24->field_0x0 <=
                  &local_170) &&
                (&local_170 <
                 *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&pFVar24->field_0x0 +
                 *(int *)(pFVar24 + 0xc))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = *(int *)&pFVar24[8].field_0x0;
            if (iVar13 == *(int *)(pFVar24 + 0xc)) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
            }
            *(int *)&pFVar24[8].field_0x0 = iVar13 + 1;
            puVar22 = (undefined8 *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar13 * 0x10);
            *puVar22 = 0;
            *puVar22 = local_170.AllocatorInstance.Data;
            *(int *)(puVar22 + 1) = local_170.ArrayNum;
            *(int *)((longlong)puVar22 + 0xc) = local_170.ArrayMax;
            local_170.ArrayNum = 0;
            local_170.ArrayMax = 0;
            local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            this_00 = (UScriptStruct *)FWeakObjectPtr::Get(&local_118);
            UScriptStruct::CopyScriptStruct(this_00,(void *)*puVar22,*(void **)(lVar17 + lVar6),1);
            local_144 = *puVar19;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(local_c8,(int *)&local_144);
          }
          uVar25 = uVar25 + 1;
          local_150 = local_150 + 1;
          local_110 = local_110 + 0x14;
          local_108 = local_108 + 0x10;
          pFVar18 = local_b8;
          uVar20 = local_174;
        } while (local_150 < local_c0);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FMeshPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FMeshPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_174 = uVar20 + 1;
      local_158 = local_158 + 1;
      local_138 = local_138 + 0x10;
      param_1 = local_100;
    } while (local_158 < local_b0);
  }
  return;
}

// operator!= @ 14792da40

bool __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator!=
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  UScriptStruct *pUVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  FScriptContainerElement *this_00;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  FWeakObjectPtr local_58;
  longlong local_50;
  
  iVar2 = (this->UniqueTypes).ArrayNum;
  if (iVar2 == (param_1->UniqueTypes).ArrayNum) {
    uVar18 = 0;
    if (0 < iVar2) {
      local_70 = 0;
      local_50 = 0;
      do {
        lVar11 = local_50;
        uVar19 = ~uVar18 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar18 < (this->UniqueTypes).ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_58 = *(FWeakObjectPtr *)((this->UniqueTypes).AllocatorInstance.Data + lVar11);
        pUVar10 = (UScriptStruct *)FWeakObjectPtr::Get(&local_58);
        pFVar17 = (param_1->UniqueTypes).AllocatorInstance.Data;
        iVar2 = (param_1->UniqueTypes).ArrayNum;
        this_00 = pFVar17;
        while( true ) {
          if (this_00 == pFVar17 + (longlong)iVar2 * 8) goto LAB_14792db18;
          bVar6 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                            ((TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)this_00,pUVar10);
          if (bVar6) break;
          this_00 = this_00 + 8;
        }
        uVar15 = (uint)((longlong)this_00 - (longlong)pFVar17 >> 3);
        if (uVar15 == 0xffffffff) goto LAB_14792db18;
        uVar13 = ~uVar15 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar15 < (param_1->Values).ArrayNum) {
          uVar20 = uVar13;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar17 = (param_1->Values).AllocatorInstance.Data;
        uVar20 = 0;
        if ((int)uVar18 < (this->Values).ArrayNum) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar11 = (longlong)(int)uVar15 * 0x10;
        if (*(int *)((this->Values).AllocatorInstance.Data + local_70 + 8) !=
            *(int *)(pFVar17 + lVar11 + 8)) goto LAB_14792db18;
        uVar20 = 0;
        local_78 = 0;
        local_res20 = 0;
        while( true ) {
          uVar8 = 0;
          if ((int)uVar18 < (this->Values).ArrayNum) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (*(int *)((this->Values).AllocatorInstance.Data + local_70 + 8) <= (int)uVar20) break;
          uVar8 = 0;
          if ((int)uVar18 < (this->AttributeIdentifiers).ArrayNum) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar17 = (this->AttributeIdentifiers).AllocatorInstance.Data;
          lVar16 = (longlong)(int)uVar18 * 0x10;
          uVar8 = 0;
          if ((int)uVar20 < *(int *)(pFVar17 + lVar16 + 8)) {
            uVar8 = ~uVar20 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          plVar14 = (longlong *)(local_res20 + *(longlong *)(pFVar17 + lVar16));
          uVar8 = 0;
          if ((int)uVar15 < (param_1->AttributeIdentifiers).ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar17 = (param_1->AttributeIdentifiers).AllocatorInstance.Data;
          plVar3 = *(longlong **)(pFVar17 + lVar11);
          plVar1 = (longlong *)((longlong)plVar3 + (longlong)*(int *)(pFVar17 + lVar11 + 8) * 0x14);
          if (plVar3 == plVar1) goto LAB_14792db18;
          plVar12 = plVar3;
          while ((((int)plVar12[2] != (int)plVar14[2] || (plVar12[1] != plVar14[1])) ||
                 (*plVar12 != *plVar14))) {
            plVar12 = (longlong *)((longlong)plVar12 + 0x14);
            if (plVar12 == plVar1) goto LAB_14792db18;
          }
          uVar8 = (uint)(((longlong)plVar12 - (longlong)plVar3) / 0x14);
          if (uVar8 == 0xffffffff) goto LAB_14792db18;
          uVar9 = 0;
          if ((int)uVar18 < (this->Values).ArrayNum) {
            uVar9 = uVar19;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar17 = (this->Values).AllocatorInstance.Data + lVar16;
          uVar9 = 0;
          if ((int)uVar20 < *(int *)(pFVar17 + 8)) {
            uVar9 = ~uVar20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          lVar16 = *(longlong *)pFVar17;
          uVar9 = 0;
          if ((int)uVar15 < (param_1->Values).ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar17 = (param_1->Values).AllocatorInstance.Data + lVar11;
          uVar9 = 0;
          if ((int)uVar8 < *(int *)(pFVar17 + 8)) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          lVar4 = *(longlong *)pFVar17;
          pUVar10 = (UScriptStruct *)FWeakObjectPtr::Get(&local_58);
          bVar6 = UScriptStruct::CompareScriptStruct
                            (pUVar10,*(void **)(local_78 + lVar16),
                             *(void **)((longlong)(int)uVar8 * 0x10 + lVar4),0);
          if (!bVar6) goto LAB_14792db18;
          uVar20 = uVar20 + 1;
          local_res20 = local_res20 + 0x14;
          local_78 = local_78 + 0x10;
        }
        local_70 = local_70 + 0x10;
        local_50 = local_50 + 8;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->UniqueTypes).ArrayNum);
    }
    bVar6 = false;
  }
  else {
LAB_14792db18:
    bVar6 = true;
  }
  return bVar6;
}

// CopyFrom @ 14793c7a0

/* WARNING: Removing unreachable block (ram,0x00014793cb2a) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
          (TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

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
  TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_res10;
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

// Empty @ 147940bd0

void __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (this->AttributeIdentifiers).AllocatorInstance.Data,
             (this->AttributeIdentifiers).ArrayNum);
  piVar1 = &(this->AttributeIdentifiers).ArrayMax;
  (this->AttributeIdentifiers).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AttributeIdentifiers).AllocatorInstance,0,piVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UniqueTypes).ArrayMax;
  (this->UniqueTypes).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->UniqueTypes).AllocatorInstance,0,piVar1);
  }
  return;
}

// Find @ 147942ed0

uchar * __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Find
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  
  uVar3 = FindTypeIndex(this,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->AttributeIdentifiers).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar4 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
            IndexOfByKey<UE::Anim::FAttributeId>
                      ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                       ((this->AttributeIdentifiers).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0x10),param_2);
    if ((((int)uVar3 < 0) || ((this->Values).ArrayNum <= (int)uVar3)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204837>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x1e5,"Values.IsValidIndex(TypeIndex)"), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar5 = 0;
    if ((int)uVar3 < (this->Values).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if (uVar4 != 0xffffffff) {
      if ((((int)uVar4 < 0) || (*(int *)(pFVar7 + 8) <= (int)uVar4)) &&
         (bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1265464598543204842>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                             ,0x1ea,"TypedArray.IsValidIndex(AttributeIndex)"), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      uVar3 = 0;
      if ((int)uVar4 < *(int *)(pFVar7 + 8)) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      return *(uchar **)(*(longlong *)pFVar7 + (longlong)(int)uVar4 * 0x10);
    }
  }
  return (uchar *)0x0;
}

