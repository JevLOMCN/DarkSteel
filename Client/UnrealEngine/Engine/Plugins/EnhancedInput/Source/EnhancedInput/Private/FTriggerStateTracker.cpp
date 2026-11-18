// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 3

// EvaluateTriggers @ 14a6dbb30

ETriggerState __thiscall
FTriggerStateTracker::EvaluateTriggers
          (FTriggerStateTracker *this,UEnhancedPlayerInput *param_1,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_2,FInputActionValue *param_3,
          float param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UObject *this_00;
  double dVar4;
  double dVar5;
  EInputActionValueType EVar6;
  undefined7 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  UFunction *pUVar14;
  UClass *pUVar15;
  FScriptContainerElement *pFVar16;
  ETriggerState EVar17;
  char local_res8 [8];
  UEnhancedPlayerInput *local_res10;
  char local_res18;
  UEnhancedPlayerInput *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  char local_4c;
  
  local_res10 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_res18 = '\0';
  }
  else {
    local_res18 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"EnhPIS_Triggers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\InputAction.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar3 * 8;
  do {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar1) {
      if (this->bEvaluatedTriggers == false) {
        EVar17 = this->NoTriggerState;
      }
      else if (this->bBlocking == false) {
        if (((this->bFoundExplicit == false) || (this->bAnyExplictTriggered != false)) &&
           (this->bAllImplicitsTriggered != false)) {
          EVar17 = Triggered;
        }
        else {
          EVar17 = this->bFoundActiveTrigger != false;
        }
      }
      else {
        EVar17 = None;
      }
      if (local_res18 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return EVar17;
    }
    this_00 = *(UObject **)pFVar16;
    if (this_00 != (UObject *)0x0) {
      this->bEvaluatedTriggers = true;
      pUVar14 = UObject::FindFunctionChecked(this_00,NAME_UInputTrigger_UpdateState);
      pUVar15 = UField::GetOwnerClass((UField *)pUVar14);
      local_78 = (UEnhancedPlayerInput *)(param_3->Value).field0_0x0._s_0.X;
      uStack_70 = *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 8);
      uStack_6c = *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 0xc);
      uStack_68 = *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 0x10);
      uStack_64 = *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 0x14);
      uStack_60 = *(undefined4 *)&param_3->ValueType;
      uStack_5c = *(undefined4 *)&param_3->field_0x1c;
      if ((pUVar15->ClassFlags & CLASS_Native) == CLASS_None) {
        local_50 = param_4;
        local_4c = '\0';
        local_78 = param_1;
        uVar8 = uStack_70;
        uStack_70 = *(undefined4 *)&(param_3->Value).field0_0x0;
        uVar9 = uStack_6c;
        uStack_6c = *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 4);
        uVar10 = uStack_68;
        uStack_68 = uVar8;
        uVar8 = uStack_64;
        uStack_64 = uVar9;
        uStack_58 = uStack_60;
        uStack_60 = uVar10;
        uStack_54 = uStack_5c;
        uStack_5c = uVar8;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar14,&local_78);
        cVar11 = local_4c;
      }
      else {
        cVar11 = (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,param_1,&local_78,param_4);
      }
      dVar4 = (param_3->Value).field0_0x0._s_0.Y;
      dVar5 = (param_3->Value).field0_0x0._s_0.Z;
      EVar6 = param_3->ValueType;
      uVar7 = *(undefined7 *)&param_3->field_0x19;
      *(double *)&this_00[1].field_0x8 = (param_3->Value).field0_0x0._s_0.X;
      *(double *)&this_00[1].field_0x10 = dVar4;
      *(double *)&this_00[1].field_0x18 = dVar5;
      this_00[1].field_0x20 = EVar6;
      *(undefined7 *)&this_00[1].field_0x21 = uVar7;
      pUVar14 = UObject::FindFunctionChecked(this_00,NAME_UInputTrigger_GetTriggerType);
      pUVar15 = UField::GetOwnerClass((UField *)pUVar14);
      if ((pUVar15->ClassFlags & CLASS_Native) == CLASS_None) {
        local_res8[0] = '\0';
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar14,local_res8);
        cVar12 = local_res8[0];
      }
      else {
        cVar12 = (**(code **)(*(longlong *)this_00 + 0x2b0))(this_00);
      }
      if (cVar12 == '\0') {
        this->bFoundExplicit = true;
        this->bAnyExplictTriggered = (bool)(this->bAnyExplictTriggered | cVar11 == '\x02');
LAB_14a6dbd16:
        this->bFoundActiveTrigger = (bool)(this->bFoundActiveTrigger | cVar11 != '\0');
      }
      else if (cVar12 == '\x01') {
        this->bAllImplicitsTriggered = (bool)(this->bAllImplicitsTriggered & cVar11 == '\x02');
        goto LAB_14a6dbd16;
      }
      bVar2 = this->bBlocking;
      bVar13 = (**(code **)(*(longlong *)this_00 + 0x2c8))(this_00,cVar11);
      this->bBlocking = (bool)(bVar13 | bVar2);
      param_1 = local_res10;
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// GetState @ 14a6e26c0

ETriggerState __thiscall FTriggerStateTracker::GetState(FTriggerStateTracker *this)

{
  if (this->bEvaluatedTriggers == false) {
    return this->NoTriggerState;
  }
  if (this->bBlocking != false) {
    return None;
  }
  if (((this->bFoundExplicit == false) || (this->bAnyExplictTriggered != false)) &&
     (this->bAllImplicitsTriggered != false)) {
    return Triggered;
  }
  return this->bFoundActiveTrigger != false;
}

// SetStateForNoTriggers @ 14a6f6680

void __thiscall
FTriggerStateTracker::SetStateForNoTriggers(FTriggerStateTracker *this,ETriggerState param_1)

{
  this->NoTriggerState = param_1;
  return;
}

