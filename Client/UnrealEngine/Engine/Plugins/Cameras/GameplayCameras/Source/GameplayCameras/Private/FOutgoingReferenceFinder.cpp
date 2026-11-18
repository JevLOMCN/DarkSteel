// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// GetReferencesOfClass<UCameraRigAsset> @ 14d582600

bool __thiscall
UE::Cameras::FOutgoingReferenceFinder::GetReferencesOfClass<UCameraRigAsset>
          (FOutgoingReferenceFinder *this,
          TArray<UCameraRigAsset_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UClass *pUVar13;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar14;
  FString *pFVar15;
  int iVar16;
  uint uVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  UObject *local_d8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pUVar13 = UCameraRigAsset::StaticClass();
  pTVar14 = TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
                    *)&this->ReferencedObjects,pUVar13);
  if (pTVar14 == (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0) {
    return false;
  }
  iVar12 = *(int *)&(pTVar14->Elements).field_0x28;
  iStack_c8 = 0;
  uStack_c4 = 1;
  puVar1 = &(pTVar14->Elements).field_0x10;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(pTVar14->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar17 = *puVar21;
    while (uVar17 == 0) {
      iStack_c8 = iStack_c8 + 1;
      local_b0 = local_b0 + 0x20;
      iStack_b4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14d5826dc;
      uVar17 = puVar21[iStack_c8];
    }
    uStack_c4 = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_b4 = (int)lVar7 + -1 + local_b0;
    if (iVar12 < iStack_b4) {
      iStack_b4 = iVar12;
    }
  }
LAB_14d5826dc:
  uVar17 = *(uint *)&(pTVar14->Elements).field_0x28;
  uVar22 = uVar17 & 0xffffffe0;
  iStack_a8 = *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_98._28_4_ = iStack_b4;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar14;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_a0 = pTVar14;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar3 = *(uint *)&(pTVar14->Elements).field_0x28;
  if (uVar17 != uVar3) {
    puVar4 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
    puVar20 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar20 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      iVar16 = iVar16 + 1;
      uVar22 = uVar22 + 0x20;
      uVar17 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar16) goto LAB_14d5827f0;
      uVar17 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar17 = (int)lVar7 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14d5827f0:
  while( true ) {
    pTVar9 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar17) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar14))
    {
      return *(int *)&(pTVar14->Elements).field_0x8 != *(int *)&(pTVar14->Elements).field_0x34;
    }
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
    if (pUVar5 == (UObject *)0x0) {
      pFVar15 = GetTypeName<UCameraRigAsset>(&local_50);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    pUVar13 = UCameraRigAsset::StaticClass();
    iVar12 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) break;
    pFVar6 = (param_1->AllocatorInstance).Data;
    local_d8 = pUVar5;
    if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d8;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  pFVar15 = GetTypeName<UCameraRigAsset>(&local_70);
  pwVar18 = L"";
  if ((pFVar15->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  pFVar15 = GetFullNameForCastLogError<UObject>(&local_60,pUVar5);
  if ((pFVar15->Data).ArrayNum != 0) {
    pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar18,pwVar19);
}

// GetReferencesOfClass<UCameraRigProxyAsset> @ 14d5829d0

bool __thiscall
UE::Cameras::FOutgoingReferenceFinder::GetReferencesOfClass<UCameraRigProxyAsset>
          (FOutgoingReferenceFinder *this,
          TArray<UCameraRigProxyAsset_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UClass *pUVar13;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar14;
  FString *pFVar15;
  int iVar16;
  uint uVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  UObject *local_d8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pUVar13 = UCameraRigProxyAsset::StaticClass();
  pTVar14 = TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
                    *)&this->ReferencedObjects,pUVar13);
  if (pTVar14 == (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0) {
    return false;
  }
  iVar12 = *(int *)&(pTVar14->Elements).field_0x28;
  iStack_c8 = 0;
  uStack_c4 = 1;
  puVar1 = &(pTVar14->Elements).field_0x10;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(pTVar14->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar17 = *puVar21;
    while (uVar17 == 0) {
      iStack_c8 = iStack_c8 + 1;
      local_b0 = local_b0 + 0x20;
      iStack_b4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14d582aac;
      uVar17 = puVar21[iStack_c8];
    }
    uStack_c4 = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_b4 = (int)lVar7 + -1 + local_b0;
    if (iVar12 < iStack_b4) {
      iStack_b4 = iVar12;
    }
  }
LAB_14d582aac:
  uVar17 = *(uint *)&(pTVar14->Elements).field_0x28;
  uVar22 = uVar17 & 0xffffffe0;
  iStack_a8 = *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_98._28_4_ = iStack_b4;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar14;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_a0 = pTVar14;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar3 = *(uint *)&(pTVar14->Elements).field_0x28;
  if (uVar17 != uVar3) {
    puVar4 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
    puVar20 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar20 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      iVar16 = iVar16 + 1;
      uVar22 = uVar22 + 0x20;
      uVar17 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar16) goto LAB_14d582bc0;
      uVar17 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar17 = (int)lVar7 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14d582bc0:
  while( true ) {
    pTVar9 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar17) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar14))
    {
      return *(int *)&(pTVar14->Elements).field_0x8 != *(int *)&(pTVar14->Elements).field_0x34;
    }
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
    if (pUVar5 == (UObject *)0x0) {
      pFVar15 = GetTypeName<UCameraRigProxyAsset>(&local_50);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    pUVar13 = UCameraRigProxyAsset::StaticClass();
    iVar12 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) break;
    pFVar6 = (param_1->AllocatorInstance).Data;
    local_d8 = pUVar5;
    if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d8;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  pFVar15 = GetTypeName<UCameraRigProxyAsset>(&local_70);
  pwVar18 = L"";
  if ((pFVar15->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  pFVar15 = GetFullNameForCastLogError<UObject>(&local_60,pUVar5);
  if ((pFVar15->Data).ArrayNum != 0) {
    pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar18,pwVar19);
}

// FOutgoingReferenceFinder @ 14d5fc710

FOutgoingReferenceFinder * __thiscall
UE::Cameras::FOutgoingReferenceFinder::FOutgoingReferenceFinder
          (FOutgoingReferenceFinder *this,UObject *param_1,UClass *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  UPackage *pUVar3;
  UClass *local_res8;
  UClass *local_res18;
  
  local_res18 = param_2;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FOutgoingReferenceFinder_Cameras_UE__6B_;
  *(undefined8 *)&(this->TargetObjectClasses).Elements = 0;
  *(undefined8 *)&(this->TargetObjectClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetObjectClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x34 = 0;
  (this->TargetObjectClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetObjectClasses).HashSize = 0;
  (this->ObjectsToVisit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToVisit).ArrayNum = 0;
  (this->ObjectsToVisit).ArrayMax = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  *(undefined8 *)&this->ReferencedObjects = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x48 = 0;
  this->RootObject = param_1;
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->PackageScope = pUVar3;
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  pcVar2 = *(code **)(this->_padding_ + 0x80);
  if (pcVar2 == FArchiveState::SetFilterEditorOnly) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xef;
  }
  else {
    (*pcVar2)(this,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_const_&>
            (&this->TargetObjectClasses,&local_res8,(bool *)&local_res18);
  return this;
}

// FOutgoingReferenceFinder @ 14d5fc890

FOutgoingReferenceFinder * __thiscall
UE::Cameras::FOutgoingReferenceFinder::FOutgoingReferenceFinder
          (FOutgoingReferenceFinder *this,UObject *param_1,TArrayView<UClass_*,int> *param_2)

{
  UClass **ppUVar1;
  byte *pbVar2;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *this_00;
  code *pcVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  uint uVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  UClass **ppUVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint *puVar16;
  uint uVar17;
  int local_res8 [2];
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar13 = 0;
  this_00 = &this->TargetObjectClasses;
  this->_padding_ = (longlong)&___7FOutgoingReferenceFinder_Cameras_UE__6B_;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->TargetObjectClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetObjectClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetObjectClasses).Elements.field_0x34 = 0;
  (this->TargetObjectClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetObjectClasses).HashSize = 0;
  (this->ObjectsToVisit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToVisit).ArrayNum = 0;
  (this->ObjectsToVisit).ArrayMax = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  *(undefined8 *)&this->ReferencedObjects = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ReferencedObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencedObjects).field_0x48 = 0;
  this->RootObject = param_1;
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->PackageScope = pUVar7;
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  pcVar3 = *(code **)(this->_padding_ + 0x80);
  if (pcVar3 == FArchiveState::SetFilterEditorOnly) {
    pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar2 = *pbVar2 & 0xef;
  }
  else {
    (*pcVar3)(this,0);
  }
  pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar2 = *pbVar2 | 1;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar2 = *pbVar2 | 8;
  ppUVar11 = param_2->DataPtr;
  local_res8[0] = param_2->ArrayNum;
  uVar6 = *(int *)&(this->TargetObjectClasses).Elements.field_0x8 -
          *(int *)&(this->TargetObjectClasses).Elements.field_0x34;
  uVar17 = local_res8[0] + uVar6;
  if (uVar17 <= uVar6) goto LAB_14d5fcc75;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar17);
  if (uVar17 < 4) {
    uVar6 = 1;
  }
  else {
    uVar10 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar12 = (this->TargetObjectClasses).HashSize;
  if ((iVar12 != 0) && ((int)uVar6 <= iVar12)) goto LAB_14d5fcc75;
  (this->TargetObjectClasses).HashSize = uVar6;
  if ((this->TargetObjectClasses).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->TargetObjectClasses).Hash.SecondaryData,0,0,4);
  }
  if (uVar6 != 0) {
    uVar17 = uVar6;
    if (uVar6 < 2) {
      if ((this->TargetObjectClasses).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_14d5fcab5;
      }
    }
    else {
LAB_14d5fcab5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TargetObjectClasses).Hash.SecondaryData,0,uVar17,4);
    }
    if (0 < (int)uVar6) {
      uVar14 = (ulonglong)uVar6;
      uVar10 = uVar13;
      do {
        FVar4 = (this->TargetObjectClasses).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->TargetObjectClasses).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = uVar10 & (longlong)(int)uVar6 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if ((this->TargetObjectClasses).HashSize != 0) {
    uVar6 = *(uint *)&(this->TargetObjectClasses).Elements.field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TargetObjectClasses).Elements.field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar16 = *(uint **)&(this->TargetObjectClasses).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_50.Array;
      }
      uVar17 = *puVar16;
      uVar10 = uVar13;
      while (uVar17 == 0) {
        iVar12 = (int)uVar13;
        uStack_60 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_60;
        local_78 = iVar12 + 1;
        uVar13 = (ulonglong)local_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14d5fcbac;
        uVar17 = puVar16[(longlong)iVar12 + 1];
      }
      uStack_74 = -uVar17 & uVar17;
      uVar13 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar5;
      uVar13 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_14d5fcbac:
        uVar13 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar13 < (int)uVar6) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar13 * 0x10 + *(longlong *)&this_00->Elements);
        uVar6 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & (this->TargetObjectClasses).HashSize - 1U;
        *(uint *)((longlong)puVar15 + 0xc) = uVar6;
        FVar4 = (this->TargetObjectClasses).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->TargetObjectClasses).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar10 = (longlong)(this->TargetObjectClasses).HashSize - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar9 + uVar10 * 4);
        *(int *)((longlong)FVar9 + uVar10 * 4) = (int)uVar13;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar13 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_14d5fcc75:
  ppUVar1 = ppUVar11 + local_res8[0];
  for (; ppUVar11 != ppUVar1; ppUVar11 = ppUVar11 + 1) {
    TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_const_&>
              (this_00,(UClass **)local_res8,(bool *)ppUVar11);
  }
  return this;
}

// operator<< @ 14d601940

FArchive * __thiscall
UE::Cameras::FOutgoingReferenceFinder::operator<<(FOutgoingReferenceFinder *this,UObject **param_1)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *this_00;
  FArchive *pFVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  UObject *local_res8;
  UClass *local_res10;
  
  if (*param_1 != (UObject *)0x0) {
    local_res10 = *(UClass **)&(*param_1)->field_0x10;
    bVar7 = MatchesAnyTargetClass(this,local_res10);
    if (bVar7) {
      uVar10 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      this_00 = TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<UClass_*_const_&>
                          ((TMapBase<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
                            *)&this->ReferencedObjects,uVar10 >> 0x10 ^ uVar10,&local_res10);
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                (this_00,&local_res8,(bool *)param_1);
    }
    bVar7 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)*param_1,this->PackageScope);
    if (bVar7) {
      pUVar3 = *param_1;
      uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
          *(int *)&(this->VisitedObjects).Elements.field_0x34) {
        FVar11 = (this->VisitedObjects).Hash.SecondaryData;
        if (FVar11 == (ForElementType<FSetElementId>)0x0) {
          FVar11 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
        }
        iVar8 = *(int *)((longlong)FVar11 +
                        (ulonglong)
                        ((this->VisitedObjects).HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->VisitedObjects).Elements;
          do {
            if (*(UObject **)(lVar4 + (longlong)iVar8 * 0x10) == pUVar3) {
              return (FArchive *)this;
            }
            iVar8 = *(int *)(lVar4 + 8 + (longlong)iVar8 * 0x10);
          } while (iVar8 != -1);
        }
      }
      pTVar2 = &this->ObjectsToVisit;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->ObjectsToVisit).ArrayMax * 8)
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar6)();
        return pFVar9;
      }
      iVar8 = (this->ObjectsToVisit).ArrayNum;
      piVar1 = &(this->ObjectsToVisit).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ObjectsToVisit).ArrayNum = iVar8 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = *param_1;
    }
  }
  return (FArchive *)this;
}

// CollectReferences @ 14d60ea00

void __thiscall
UE::Cameras::FOutgoingReferenceFinder::CollectReferences(FOutgoingReferenceFinder *this)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *this_00;
  UObject **ppUVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  UObject *local_res8;
  longlong *local_res10;
  
  pTVar2 = &this->ObjectsToVisit;
  piVar1 = &(this->ObjectsToVisit).ArrayMax;
  (this->ObjectsToVisit).ArrayNum = 0;
  if ((this->ObjectsToVisit).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->VisitedObjects;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset(this_00);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  ppUVar3 = &this->RootObject;
  if (((pFVar4 <= ppUVar3) && (ppUVar3 < pFVar4 + (longlong)*piVar1 * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->ObjectsToVisit).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ObjectsToVisit).ArrayNum = iVar9 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = *ppUVar3;
  iVar9 = (this->ObjectsToVisit).ArrayNum;
  do {
    if (iVar9 < 1) {
      return;
    }
    if (((this->ObjectsToVisit).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->ObjectsToVisit).ArrayNum;
    plVar5 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8 + -8);
    (this->ObjectsToVisit).ArrayNum = iVar9 + -1;
    uVar10 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    local_res10 = plVar5;
    if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
        *(int *)&(this->VisitedObjects).Elements.field_0x34) {
      FVar6 = (this->VisitedObjects).Hash.SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar6;
      }
      iVar9 = *(int *)((longlong)FVar11 +
                      (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar10 >> 0x10 ^ uVar10))
                      * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong **)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0x10) == plVar5)
          goto LAB_14d60ebdf;
          iVar9 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (this_00,&local_res8,(bool *)&local_res10);
    (**(code **)(*plVar5 + 200))(plVar5,this);
LAB_14d60ebdf:
    iVar9 = (this->ObjectsToVisit).ArrayNum;
  } while( true );
}

// GetAllReferences @ 14d618100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Cameras::FOutgoingReferenceFinder::GetAllReferences
          (FOutgoingReferenceFinder *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TMap<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 auStackY_208 [32];
  bool local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [6];
  undefined8 local_1b0;
  TMap<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  TMap<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
  *local_168;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TMap<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 local_a0 [32];
  uint *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencedObjects).field_0x10;
  iVar17 = *(int *)&(this->ReferencedObjects).field_0x28;
  local_1a8 = &this->ReferencedObjects;
  iStack_1a0 = 0;
  local_1b8 = false;
  local_188 = 0;
  uStack_19c = 1;
  iStack_18c = 0;
  if (iVar17 != 0) {
    puVar14 = *(uint **)&(this->ReferencedObjects).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)pTVar23;
    }
    uVar19 = *puVar14;
    while (uVar19 == 0) {
      lVar11 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iVar17;
      if ((int)((iVar17 + -1 >> 0x1f & 0x1fU) + iVar17 + -1) >> 5 < iStack_1a0) goto LAB_14d6181de;
      uVar19 = puVar14[lVar11 + 1];
    }
    uStack_19c = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_19c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_178 = (int)lVar11;
    iStack_18c = local_178 + -1 + local_188;
    if (iVar17 < iStack_18c) {
      iStack_18c = iVar17;
    }
  }
LAB_14d6181de:
  iStack_180 = *(int *)&(this->ReferencedObjects).field_0x8 -
               *(int *)&(this->ReferencedObjects).field_0x34;
  uVar19 = *(uint *)&(this->ReferencedObjects).field_0x28;
  TStack_f0._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uVar18 = uVar19 & 0xffffffe0;
  uStack_190 = 0xffffffff;
  TStack_f0.CurrentBitIndex = iStack_18c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_f0._28_4_ = local_ac;
  TStack_f0.BaseBitIndex = local_188;
  uStack_d0 = CONCAT44(uStack_17c,iStack_180);
  local_198 = (undefined1 *)pTVar23;
  local_168 = local_1a8;
  local_160 = pTVar23;
  local_f8 = local_1a8;
  TStack_f0.Array = pTVar23;
  if ((((int)uVar19 < 0) || (iVar17 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  uVar21 = *(uint *)&(this->ReferencedObjects).field_0x28;
  if (uVar19 != uVar21) {
    puVar13 = *(undefined1 **)&(this->ReferencedObjects).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar23;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar16)
      goto LAB_14d618300;
      uVar19 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_174 = (int)lVar11;
    uVar19 = local_174 + -1 + uVar18;
    if ((int)uVar21 < (int)uVar19) {
      uVar19 = uVar21;
    }
  }
LAB_14d618300:
  do {
    pTVar8 = local_f8;
    uVar18 = 0;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_1b7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
    }
    if (((TStack_f0.CurrentBitIndex == uVar19) && (TStack_f0.Array == pTVar23)) &&
       (pTVar8 == local_168)) {
      return local_1b8;
    }
    puVar15 = (undefined8 *)((longlong)TStack_f0.CurrentBitIndex * 0x60 + *(longlong *)pTVar8);
    local_a8 = *puVar15;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (uint *)0x0;
    local_78 = uVar5;
    uStack_70 = uVar6;
    local_60 = (ForElementType<FSetElementId>)0x0;
    uVar21 = 0;
    local_58 = 0;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::operator=
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_a0,
               (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)(puVar15 + 1));
    uVar22 = (uint)local_78;
    uStack_14c = 1;
    uStack_13c = uVar21;
    uStack_150 = uVar18;
    if ((uint)local_78 != 0) {
      puVar14 = (uint *)(local_a0 + 0x10);
      if (local_80 != (uint *)0x0) {
        puVar14 = local_80;
      }
      uVar2 = *puVar14;
      uVar21 = uVar18;
      while (uVar2 == 0) {
        lVar11 = (longlong)(int)uStack_150;
        uVar21 = uVar21 + 0x20;
        uStack_150 = uStack_150 + 1;
        uStack_13c = (uint)local_78;
        if ((int)(((int)((uint)local_78 - 1) >> 0x1f & 0x1fU) + ((uint)local_78 - 1)) >> 5 <
            (int)uStack_150) goto LAB_14d618400;
        uVar2 = (puVar14 + 1)[lVar11];
      }
      uStack_14c = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_14c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_170 = (int)lVar11;
      uStack_13c = (uVar21 - 1) + local_170;
      if ((int)(uint)local_78 < (int)uStack_13c) {
        uStack_13c = (uint)local_78;
      }
    }
LAB_14d618400:
    local_158 = (longlong *)local_a0;
    iStack_134 = iStack_18c;
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
    uVar18 = (uint)local_78 & 0xffffffe0;
    iStack_130 = local_a0._8_4_ - uStack_70._4_4_;
    TStack_120._padding_ = CONCAT44(uStack_14c,uStack_150);
    uStack_140 = 0xffffffff;
    TStack_120.CurrentBitIndex = uStack_13c;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)(uint)local_78 >> 5;
    TStack_120._28_4_ = iStack_18c;
    TStack_120.BaseBitIndex = uVar21;
    uStack_100 = CONCAT44(uStack_12c,iStack_130);
    bVar12 = (byte)local_78;
    local_138 = uVar21;
    local_128 = local_158;
    TStack_120.Array = local_148;
    if ((int)(uint)local_78 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    }
    if (uVar22 != (uint)local_78) {
      puVar14 = (uint *)(local_a0 + 0x10);
      if (local_80 != (uint *)0x0) {
        puVar14 = local_80;
      }
      uVar21 = -1 << (bVar12 & 0x1f) & puVar14[iVar17];
      while (uVar21 == 0) {
        lVar11 = (longlong)iVar17;
        uVar18 = uVar18 + 0x20;
        iVar17 = iVar17 + 1;
        uVar22 = (uint)local_78;
        if ((int)(((int)((uint)local_78 - 1) >> 0x1f & 0x1fU) + ((uint)local_78 - 1)) >> 5 < iVar17)
        goto LAB_14d618510;
        uVar21 = (puVar14 + 1)[lVar11];
      }
      uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_16c = (int)lVar11;
      uVar22 = local_16c + -1 + uVar18;
      if ((int)(uint)local_78 < (int)uVar22) {
        uVar22 = (uint)local_78;
      }
    }
LAB_14d618510:
    while( true ) {
      plVar7 = local_128;
      if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
        local_1b6[0] = 0;
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b6);
      }
      if (((TStack_120.CurrentBitIndex == uVar22) &&
          (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10))) &&
         (plVar7 == (longlong *)local_a0)) break;
      piVar20 = &param_1->ArrayMax;
      local_1b0 = *(undefined8 *)(*plVar7 + (longlong)TStack_120.CurrentBitIndex * 0x10);
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_1b0) &&
          ((FScriptContainerElement *)&local_1b0 < pFVar3 + (longlong)*piVar20 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar20) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar20);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_1b0;
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
    }
    local_1b8 = (bool)(local_1b8 | local_a0._8_4_ != uStack_70._4_4_);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    iVar17 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar17 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar18 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar18) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (uint *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    pTVar23 = local_160;
  } while( true );
}

// Initialize @ 14d61fa10

void __thiscall
UE::Cameras::FOutgoingReferenceFinder::Initialize(FOutgoingReferenceFinder *this,UObject *param_1)

{
  byte *pbVar1;
  UPackage *pUVar2;
  
  this->RootObject = param_1;
  pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->PackageScope = pUVar2;
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x80))(this,0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 9;
  return;
}

// MatchesAnyTargetClass @ 14d621800

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Cameras::FOutgoingReferenceFinder::MatchesAnyTargetClass
          (FOutgoingReferenceFinder *this,UClass *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->TargetObjectClasses).Elements.field_0x10;
  iVar3 = *(int *)&(this->TargetObjectClasses).Elements.field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->TargetObjectClasses).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d6218ad;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d6218ad:
  uVar11 = *(uint *)&(this->TargetObjectClasses).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TargetObjectClasses).Elements.field_0x8 -
                       *(int *)&(this->TargetObjectClasses).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->TargetObjectClasses).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->TargetObjectClasses).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d6219b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14d6219b0:
  while( true ) {
    if (*(int *)&(this->TargetObjectClasses).Elements.field_0x8 -
        *(int *)&(this->TargetObjectClasses).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             (*(longlong *)&(this->TargetObjectClasses).Elements +
             (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar9 != 0) {
      if (((int)param_1->_padding_ < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

