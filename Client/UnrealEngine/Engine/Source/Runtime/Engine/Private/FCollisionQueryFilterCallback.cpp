// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// PostFilter @ 147854b20

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PostFilter
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPTQueryHit *param_2)

{
  if (this->bIsSweep == false) {
    return None;
  }
  if (*(float *)&param_2[2]._padding_ <= 0.0) {
    if (this->bDiscardInitialOverlaps != false) {
      return None;
    }
    if (this->PreFilterReturnValue == Block) {
      return Touch;
    }
  }
  return this->PreFilterReturnValue;
}

// PostFilter @ 147854b30

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PostFilter
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FQueryHit *param_2)

{
  if (this->bIsSweep == false) {
    return None;
  }
  if (*(float *)&param_2[2]._padding_ <= 0.0) {
    if (this->bDiscardInitialOverlaps != false) {
      return None;
    }
    if (this->PreFilterReturnValue == Block) {
      return Touch;
    }
  }
  return this->PreFilterReturnValue;
}

// PreFilter @ 147855670

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilter
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticle<double,3> *param_3)

{
  int *piVar1;
  byte bVar2;
  ECollisionQueryHitType EVar3;
  uint uVar4;
  FInstanceData *this_00;
  FBodyInstance *pFVar5;
  FCollisionFilterData FStack_38;
  FCombinedShapeFilterData FStack_28;
  
  if (param_2->Type == 0) {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&FStack_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&FStack_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&FStack_38,&FStack_28);
  uVar4 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar4 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  piVar1 = param_3->MUserData;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      if (pFVar5 != (FBodyInstance *)0x0) goto LAB_14829c242;
    }
    else {
      pFVar5 = (FBodyInstance *)0x0;
    }
    if ((*piVar1 != 8) || (*(longlong *)(piVar1 + 2) == 0)) goto LAB_14829c242;
    piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      goto LAB_14829c242;
    }
  }
  pFVar5 = (FBodyInstance *)0x0;
LAB_14829c242:
  EVar3 = PreFilterImp(this,param_1,&FStack_38,uVar4,pFVar5);
  return EVar3;
}

// PreFilter @ 147855680

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilter
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3)

{
  byte bVar1;
  ECollisionQueryHitType EVar2;
  uint uVar3;
  FInstanceData *this_00;
  FCollisionFilterData FStack_38;
  FCombinedShapeFilterData FStack_28;
  
  if (param_2->Type == 0) {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar1 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&FStack_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&FStack_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&FStack_38,&FStack_28);
  uVar3 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar3 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  EVar2 = PreFilterImp(this,param_1,&FStack_38,uVar3,(FBodyInstance *)0x0);
  return EVar2;
}

// PreFilterBaseImp<Chaos::TGeometryParticle<double,3>_> @ 148244490

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilterBaseImp<Chaos::TGeometryParticle<double,3>_>
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticle<double,3> *param_3)

{
  int *piVar1;
  byte bVar2;
  ECollisionQueryHitType EVar3;
  uint uVar4;
  FInstanceData *this_00;
  FBodyInstance *pFVar5;
  FCollisionFilterData local_38;
  FCombinedShapeFilterData local_28;
  
  if (param_2->Type == 0) {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&local_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&local_38,&local_28);
  uVar4 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar4 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  piVar1 = param_3->MUserData;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      if (pFVar5 != (FBodyInstance *)0x0) goto LAB_148244562;
    }
    else {
      pFVar5 = (FBodyInstance *)0x0;
    }
    if ((*piVar1 != 8) || (*(longlong *)(piVar1 + 2) == 0)) goto LAB_148244562;
    piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      goto LAB_148244562;
    }
  }
  pFVar5 = (FBodyInstance *)0x0;
LAB_148244562:
  EVar3 = PreFilterImp(this,param_1,&local_38,uVar4,pFVar5);
  return EVar3;
}

// PreFilterBaseImp<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 148244590

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilterBaseImp<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3)

{
  byte bVar1;
  ECollisionQueryHitType EVar2;
  uint uVar3;
  FInstanceData *this_00;
  FCollisionFilterData local_38;
  FCombinedShapeFilterData local_28;
  
  if (param_2->Type == 0) {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar1 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&local_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&local_38,&local_28);
  uVar3 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar3 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  EVar2 = PreFilterImp(this,param_1,&local_38,uVar3,(FBodyInstance *)0x0);
  return EVar2;
}

// CalcQueryHitType @ 14826a1f0

ECollisionQueryHitType __cdecl
FCollisionQueryFilterCallback::CalcQueryHitType
          (FCollisionFilterData *param_1,FCollisionFilterData *param_2,bool param_3)

{
  uint uVar1;
  ECollisionQueryHitType EVar2;
  uint uVar3;
  ECollisionQueryHitType EVar4;
  
  uVar3 = param_1->Word3 >> 0x15 & 0x1f;
  if ((byte)((byte)(param_1->Word3 >> 0x18) & (byte)(param_2->Word3 >> 0x18)) >> 2 == 0) {
    uVar1 = 1 << ((byte)(param_2->Word3 >> 0x15) & 0x1f);
    if ((char)param_1->Word0 != '\0') {
      uVar3 = 1 << (sbyte)uVar3;
      if ((param_2->Word1 & uVar3) == 0) {
        EVar2 = None;
        if ((param_2->Word2 & uVar3) != 0) {
          EVar2 = Touch;
        }
      }
      else {
        EVar2 = Block;
      }
      if ((param_1->Word1 & uVar1) != 0) {
        EVar4 = Block;
        if (EVar2 < Block) {
          EVar4 = EVar2;
        }
        return EVar4;
      }
      EVar4 = (param_1->Word2 & uVar1) != 0;
      if (EVar2 < EVar4) {
        EVar4 = EVar2;
      }
      return EVar4;
    }
    if ((param_1->Word1 & uVar1) != 0) {
      if (param_3) {
        return (uVar3 == 0) + Touch;
      }
      return Block;
    }
  }
  return None;
}

// PostFilterImp @ 14829b790

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PostFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPTQueryHit *param_2)

{
  if (this->bIsSweep == false) {
    return None;
  }
  if (*(float *)&param_2[2]._padding_ <= 0.0) {
    if (this->bDiscardInitialOverlaps != false) {
      return None;
    }
    if (this->PreFilterReturnValue == Block) {
      return Touch;
    }
  }
  return this->PreFilterReturnValue;
}

// PostFilterImp @ 14829b7c0

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PostFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FQueryHit *param_2)

{
  if (this->bIsSweep == false) {
    return None;
  }
  if (*(float *)&param_2[2]._padding_ <= 0.0) {
    if (this->bDiscardInitialOverlaps != false) {
      return None;
    }
    if (this->PreFilterReturnValue == Block) {
      return Touch;
    }
  }
  return this->PreFilterReturnValue;
}

// PostFilterImp @ 14829b7f0

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PostFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,bool param_2)

{
  if (this->bIsSweep == false) {
    return Block;
  }
  if (param_2) {
    if (this->bDiscardInitialOverlaps != false) {
      return None;
    }
    if (this->PreFilterReturnValue == Block) {
      return Touch;
    }
  }
  return this->PreFilterReturnValue;
}

// PreFilterImp @ 14829bec0

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,
          FCollisionFilterData *param_2,uint param_3,FBodyInstance *param_4)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  ECollisionQueryHitType EVar5;
  int iVar6;
  uint uVar7;
  UObject *pUVar8;
  FString *pFVar9;
  char cVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  FScriptContainerElement *pFVar15;
  byte bVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  void *local_28 [2];
  
  pFVar15 = (FScriptContainerElement *)0x0;
  if ((this->bRecordHitches != false) &&
     ((bVar4 = IsInGameThread(), bVar4 ||
      (pFVar15 = (FScriptContainerElement *)0x0,
      FSQHitchRepeaterCVars::SQHitchDetectionForceNames != 0)))) {
    iVar6 = (this->PreFilterHitchInfo).ArrayNum;
    piVar1 = &(this->PreFilterHitchInfo).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->PreFilterHitchInfo).AllocatorInstance,piVar1);
    }
    (this->PreFilterHitchInfo).ArrayNum = iVar6 + 1;
    pFVar11 = (this->PreFilterHitchInfo).AllocatorInstance.Data;
    pFVar15 = pFVar11 + (longlong)iVar6 * 0x18;
    *(undefined8 *)pFVar15 = 0;
    *(undefined8 *)(pFVar15 + 8) = 0;
    *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x18 + 0x10) = 0;
    iVar6 = (this->PreFilterHitchInfo).ArrayNum;
    uVar18 = iVar6 - 1;
    uVar7 = 0;
    if ((int)uVar18 < iVar6) {
      uVar7 = ~uVar18 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    pFVar15 = (this->PreFilterHitchInfo).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18;
    if ((param_4 != (FBodyInstance *)0x0) &&
       (pUVar8 = FWeakObjectPtr::Get(&(param_4->OwnerComponent).WeakPtr), pUVar8 != (UObject *)0x0))
    {
      pFVar9 = (FString *)(**(code **)(*(longlong *)pUVar8 + 0x478))(pUVar8,local_28);
      ::FString::operator=((FString *)pFVar15,pFVar9);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
  }
  uVar7 = param_1->Word3;
  uVar18 = param_2->Word3;
  if ((uVar7 & uVar18 & 3) == 0) {
    this->PreFilterReturnValue = None;
    return None;
  }
  uVar13 = uVar7 >> 0x15 & 0x1f;
  if ((byte)((byte)(uVar7 >> 0x18) & (byte)(uVar18 >> 0x18)) >> 2 != 0) {
    EVar5 = None;
    goto LAB_14829c121;
  }
  uVar7 = 1 << ((byte)(uVar18 >> 0x15) & 0x1f);
  if ((char)param_1->Word0 == '\0') {
    if ((param_1->Word1 & uVar7) != 0) {
      pFVar11 = (FScriptContainerElement *)(ulonglong)(byte)((uVar13 == 0) + 1);
      goto LAB_14829c096;
    }
LAB_14829c0a1:
    EVar5 = None;
  }
  else {
    uVar18 = 1 << (sbyte)uVar13;
    if ((param_2->Word1 & uVar18) == 0) {
      bVar16 = 0;
      if ((param_2->Word2 & uVar18) != 0) {
        bVar16 = 1;
      }
    }
    else {
      bVar16 = 2;
    }
    if ((param_1->Word1 & uVar7) == 0) {
      bVar12 = 0;
      if ((param_1->Word2 & uVar7) != 0) {
        bVar12 = 1;
      }
    }
    else {
      bVar12 = 2;
    }
    pFVar11 = (FScriptContainerElement *)(ulonglong)bVar12;
    if (bVar16 < bVar12) {
      pFVar11 = (FScriptContainerElement *)(ulonglong)bVar16;
    }
LAB_14829c096:
    cVar10 = (char)pFVar11;
    if (cVar10 == '\x01') {
      if (this->bIgnoreTouches != false) goto LAB_14829c0a1;
    }
    else if (cVar10 == '\x02') {
      if (this->bIgnoreBlocks != false) {
        EVar5 = None;
        goto LAB_14829c121;
      }
    }
    else {
      EVar5 = None;
      if (cVar10 == '\0') goto LAB_14829c121;
    }
    FVar2 = (ForElementType<unsigned_int>)this->IgnoreActors;
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar2;
    }
    FVar2 = (ForElementType<unsigned_int>)
            ((longlong)FVar14 + (longlong)*(int *)((longlong)FVar2 + 0x18) * 4);
    if (FVar14 != FVar2) {
      do {
        if (*(uint *)FVar14 == param_2->Word0) {
          bVar4 = true;
          goto LAB_14829c0ea;
        }
        FVar14 = (ForElementType<unsigned_int>)((longlong)FVar14 + 4);
      } while (FVar14 != FVar2);
    }
    bVar4 = false;
LAB_14829c0ea:
    pFVar17 = (FScriptContainerElement *)0x0;
    if (!bVar4) {
      pFVar17 = pFVar11;
    }
    FVar2 = (ForElementType<unsigned_int>)this->IgnoreComponents;
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x20);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x20) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar2;
    }
    FVar2 = (ForElementType<unsigned_int>)
            ((longlong)FVar14 + (longlong)*(int *)((longlong)FVar2 + 0x28) * 4);
    for (; FVar14 != FVar2; FVar14 = (ForElementType<unsigned_int>)((longlong)FVar14 + 4)) {
      if (*(uint *)FVar14 == param_3) goto LAB_14829c0a1;
    }
    EVar5 = (ECollisionQueryHitType)pFVar17;
  }
LAB_14829c121:
  if ((this->bIsOverlapQuery != false) && (EVar5 == Block)) {
    EVar5 = Touch;
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    *(ECollisionQueryHitType *)
     &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar15[0x10].field_0x0)->AllocatorInstance)
      .Data = EVar5;
  }
  this->PreFilterReturnValue = EVar5;
  return EVar5;
}

// PreFilterImp @ 14829c170

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticle<double,3> *param_3)

{
  int *piVar1;
  byte bVar2;
  ECollisionQueryHitType EVar3;
  uint uVar4;
  FInstanceData *this_00;
  FBodyInstance *pFVar5;
  FCollisionFilterData local_38;
  FCombinedShapeFilterData local_28;
  
  if (param_2->Type == 0) {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar2 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&local_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&local_38,&local_28);
  uVar4 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar4 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  piVar1 = param_3->MUserData;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      if (pFVar5 != (FBodyInstance *)0x0) goto LAB_14829c242;
    }
    else {
      pFVar5 = (FBodyInstance *)0x0;
    }
    if ((*piVar1 != 8) || (*(longlong *)(piVar1 + 2) == 0)) goto LAB_14829c242;
    piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
      pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      goto LAB_14829c242;
    }
  }
  pFVar5 = (FBodyInstance *)0x0;
LAB_14829c242:
  EVar3 = PreFilterImp(this,param_1,&local_38,uVar4,pFVar5);
  return EVar3;
}

// PreFilterImp @ 14829c270

ECollisionQueryHitType __thiscall
FCollisionQueryFilterCallback::PreFilterImp
          (FCollisionQueryFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3)

{
  byte bVar1;
  ECollisionQueryHitType EVar2;
  uint uVar3;
  FInstanceData *this_00;
  FCollisionFilterData local_38;
  FCombinedShapeFilterData local_28;
  
  if (param_2->Type == 0) {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMax.field_0x1;
  }
  else {
    bVar1 = param_2[1].WorldSpaceShapeBounds.MMin.field_0x11;
  }
  if ((bVar1 >> 1 & 1) == 0) {
    return None;
  }
  ChaosInterface::GetCombinedShapeFilterData(&local_28,param_2);
  this_00 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(&local_38,&local_28);
  uVar3 = 0;
  if (0 < this->IgnoreComponents->ArrayNum) {
    uVar3 = Chaos::Filter::FInstanceData::GetComponentId(this_00);
  }
  EVar2 = PreFilterImp(this,param_1,&local_38,uVar3,(FBodyInstance *)0x0);
  return EVar2;
}

