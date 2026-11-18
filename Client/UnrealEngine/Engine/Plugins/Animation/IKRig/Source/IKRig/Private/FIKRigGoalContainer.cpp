// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 9

// StaticStruct @ 14deffa40

UScriptStruct * __cdecl FIKRigGoalContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigGoalContainer,(UObject *)pUVar1,
                         L"IKRigGoalContainer");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.OuterSingleton;
}

// operator= @ 14df1e590

FIKRigGoalContainer * __thiscall
FIKRigGoalContainer::operator=(FIKRigGoalContainer *this,FIKRigGoalContainer *param_1)

{
  this->bRigNeedsInitialized = param_1->bRigNeedsInitialized;
  TArray<FIKRigGoal,TSizedDefaultAllocator<32>_>::operator=(&this->Goals,&param_1->Goals);
  return this;
}

// Empty @ 14df30560

void __thiscall FIKRigGoalContainer::Empty(FIKRigGoalContainer *this)

{
  int *piVar1;
  
  piVar1 = &(this->Goals).ArrayMax;
  (this->Goals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->Goals).AllocatorInstance,0,piVar1);
  }
  this->bRigNeedsInitialized = true;
  return;
}

// FillWithGoalArray @ 14df33150

void __thiscall
FIKRigGoalContainer::FillWithGoalArray
          (FIKRigGoalContainer *this,
          TArray<UIKRigEffectorGoal_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Goals).ArrayMax;
  (this->Goals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->Goals).AllocatorInstance,0,piVar1);
  }
  this->bRigNeedsInitialized = true;
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    SetIKGoal(this,*(UIKRigEffectorGoal **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// FindGoalByName @ 14df336d0

FIKRigGoal * __thiscall
FIKRigGoalContainer::FindGoalByName(FIKRigGoalContainer *this,FName *param_1)

{
  FIKRigGoal *pFVar1;
  FIKRigGoal *pFVar2;
  
  pFVar1 = (FIKRigGoal *)(this->Goals).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Goals).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FIKRigGoal *)0x0;
    }
    if (pFVar1->Name == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindGoalByName @ 14df33710

FIKRigGoal * __thiscall
FIKRigGoalContainer::FindGoalByName(FIKRigGoalContainer *this,FName *param_1)

{
  FIKRigGoal *pFVar1;
  FIKRigGoal *pFVar2;
  
  pFVar1 = (FIKRigGoal *)(this->Goals).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Goals).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FIKRigGoal *)0x0;
    }
    if (pFVar1->Name == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindGoalWriteable @ 14df33750

FIKRigGoal * __thiscall
FIKRigGoalContainer::FindGoalWriteable(FIKRigGoalContainer *this,FName *param_1)

{
  FIKRigGoal *pFVar1;
  FIKRigGoal *pFVar2;
  
  pFVar1 = (FIKRigGoal *)(this->Goals).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Goals).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FIKRigGoal *)0x0;
    }
    if (pFVar1->Name == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// SetIKGoal @ 14df54ba0

void __thiscall FIKRigGoalContainer::SetIKGoal(FIKRigGoalContainer *this,FIKRigGoal *param_1)

{
  FName FVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FIKRigGoal *this_00;
  FName *pFVar8;
  FIKRigGoal *pFVar9;
  
  this_00 = (FIKRigGoal *)(this->Goals).AllocatorInstance.Data;
  iVar7 = (this->Goals).ArrayNum;
  pFVar9 = this_00 + iVar7;
  while( true ) {
    if (this_00 == pFVar9) {
      if (iVar7 == (this->Goals).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10b0,&(this->Goals).AllocatorInstance,&(this->Goals).ArrayMax);
      }
      (this->Goals).ArrayNum = iVar7 + 1;
      FVar1 = param_1->BoneName;
      pFVar8 = (FName *)((this->Goals).AllocatorInstance.Data + (longlong)iVar7 * 0xb0);
      *pFVar8 = param_1->Name;
      pFVar8[1] = FVar1;
      FVar1 = *(FName *)&(param_1->SourceBone).BoneName.Number;
      pFVar8[2] = *(FName *)&param_1->TransformSource;
      pFVar8[3] = FVar1;
      FVar1 = (FName)(param_1->Position).field0_0x0._s_0.X;
      pFVar8[4] = *(FName *)&(param_1->SourceBone).CachedCompactPoseIndex;
      pFVar8[5] = FVar1;
      FVar1 = (FName)(param_1->Position).field0_0x0._s_0.Z;
      pFVar8[6] = (FName)(param_1->Position).field0_0x0._s_0.Y;
      pFVar8[7] = FVar1;
      FVar1 = (FName)(param_1->Rotation).Yaw;
      pFVar8[8] = (FName)(param_1->Rotation).Pitch;
      pFVar8[9] = FVar1;
      fVar2 = param_1->PositionAlpha;
      fVar3 = param_1->RotationAlpha;
      pFVar8[10] = (FName)(param_1->Rotation).Roll;
      pFVar8[0xb].ComparisonIndex = (FNameEntryId)fVar2;
      pFVar8[0xb].Number = (uint)fVar3;
      FVar1 = (FName)(param_1->FinalBlendedPosition).field0_0x0._s_0.X;
      pFVar8[0xc] = *(FName *)&param_1->PositionSpace;
      pFVar8[0xd] = FVar1;
      FVar1 = (FName)(param_1->FinalBlendedPosition).field0_0x0._s_0.Z;
      pFVar8[0xe] = (FName)(param_1->FinalBlendedPosition).field0_0x0._s_0.Y;
      pFVar8[0xf] = FVar1;
      FVar1 = (FName)(param_1->FinalBlendedRotation).Y;
      pFVar8[0x10] = (FName)(param_1->FinalBlendedRotation).X;
      pFVar8[0x11] = FVar1;
      FVar1 = (FName)(param_1->FinalBlendedRotation).W;
      pFVar8[0x12] = (FName)(param_1->FinalBlendedRotation).Z;
      pFVar8[0x13] = FVar1;
      uVar4 = *(undefined4 *)&param_1->field_0xa8;
      uVar5 = *(undefined4 *)&param_1->field_0xac;
      pFVar8[0x14] = *(FName *)&param_1->bEnabled;
      pFVar8[0x15].ComparisonIndex = (FNameEntryId)uVar4;
      pFVar8[0x15].Number = uVar5;
      this->bRigNeedsInitialized = true;
      return;
    }
    if (this_00->Name == param_1->Name) break;
    this_00 = this_00 + 1;
  }
  bVar6 = true;
  if (this_00->bEnabled == param_1->bEnabled) {
    bVar6 = this->bRigNeedsInitialized;
  }
  this->bRigNeedsInitialized = bVar6;
  FIKRigGoal::operator=(this_00,param_1);
  return;
}

// SetIKGoal @ 14df54cc0

void __thiscall
FIKRigGoalContainer::SetIKGoal(FIKRigGoalContainer *this,UIKRigEffectorGoal *param_1)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  FName *pFVar5;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  if (param_1 != (UIKRigEffectorGoal *)0x0) {
    iVar3 = (this->Goals).ArrayNum;
    pFVar5 = (FName *)(this->Goals).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar3 * 0x16;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 0x16) {
      if (*pFVar5 == param_1->GoalName) {
        FVar2 = *(FName *)((param_1->CurrentTransform).Translation.XY.m128d_f64 + 1);
        FVar1 = (FName)(param_1->CurrentTransform).Translation.ZW.m128d_f64[0];
        pFVar5[5] = (FName)(param_1->CurrentTransform).Translation.XY.m128d_f64[0];
        pFVar5[6] = FVar2;
        pFVar5[7] = FVar1;
        local_28.X = (param_1->CurrentTransform).Rotation.XY.m128d_f64[0];
        local_28.Y = (param_1->CurrentTransform).Rotation.XY.m128d_f64[1];
        local_28.Z = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[0];
        local_28.W = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[1];
        UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
        pFVar5[8] = (FName)local_48.Pitch;
        pFVar5[9] = (FName)local_48.Yaw;
        pFVar5[10] = (FName)local_48.Roll;
        pFVar5[0xb].ComparisonIndex.Value = (uint)param_1->PositionAlpha;
        pFVar5[0xb].Number = (uint)param_1->RotationAlpha;
        *(undefined2 *)&pFVar5[0xc].ComparisonIndex.Value = 0;
        return;
      }
    }
    if (iVar3 == (this->Goals).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10b0,&(this->Goals).AllocatorInstance,&(this->Goals).ArrayMax);
    }
    (this->Goals).ArrayNum = iVar3 + 1;
    FIKRigGoal::FIKRigGoal
              ((FIKRigGoal *)((this->Goals).AllocatorInstance.Data + (longlong)iVar3 * 0xb0),param_1
              );
    this->bRigNeedsInitialized = true;
  }
  return;
}

