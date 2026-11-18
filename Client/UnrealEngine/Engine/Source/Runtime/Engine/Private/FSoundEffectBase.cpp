// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FSoundEffectBase @ 1486955f0

FSoundEffectBase * __thiscall FSoundEffectBase::FSoundEffectBase(FSoundEffectBase *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  this->_padding_ = (longlong)&___7FSoundEffectBase__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  pTVar2 = (TNode *)0x0;
  this->ParentPresetUniqueId = 0xffffffff;
  (this->CurrentAudioThreadSettingsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentAudioThreadSettingsData).ArrayNum = 0;
  (this->CurrentAudioThreadSettingsData).ArrayMax = 0;
  this->bChanged = (FThreadSafeBool)0x1;
  (this->Preset).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsRunning = (FThreadSafeBool)0x0;
  this->bIsActive = (FThreadSafeBool)0x0;
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar2 = pTVar1;
  }
  (this->CommandQueue).Tail = pTVar2;
  (this->CommandQueue).Head = pTVar2;
  return this;
}

// ClearPreset @ 1486a8910

void __thiscall FSoundEffectBase::ClearPreset(FSoundEffectBase *this)

{
  (this->Preset).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// EffectCommand @ 1486b1e40

void __thiscall
FSoundEffectBase::EffectCommand(FSoundEffectBase *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  TNode *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TNode *pTVar5;
  longlong *plVar6;
  
  pTVar5 = ::operator_new(0x40);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar5->Item = *(undefined8 *)param_1;
    *(undefined8 *)&(pTVar5->Item).field_0x28 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)&(pTVar5->Item).field_0x10 = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)&(pTVar5->Item).field_0x14 = uVar2;
    *(undefined4 *)&(pTVar5->Item).field_0x18 = uVar3;
    *(undefined4 *)&(pTVar5->Item).field_0x1c = uVar4;
    *(undefined8 *)&(pTVar5->Item).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)&pTVar5->Item != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pTVar1 = (this->CommandQueue).Head;
    (this->CommandQueue).Head = pTVar5;
    pTVar1->NextNode = pTVar5;
  }
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// GetPreset @ 1486c3ac0

USoundEffectPreset * __thiscall FSoundEffectBase::GetPreset(FSoundEffectBase *this)

{
  bool bVar1;
  USoundEffectPreset *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Preset).WeakPtr);
  if (bVar1) {
    pUVar2 = (USoundEffectPreset *)FWeakObjectPtr::Get(&(this->Preset).WeakPtr);
    return pUVar2;
  }
  return (USoundEffectPreset *)0x0;
}

// GetPresetPtr @ 1486c3b00

TWeakObjectPtr<USoundEffectPreset,FWeakObjectPtr> * __thiscall
FSoundEffectBase::GetPresetPtr(FSoundEffectBase *this)

{
  return &this->Preset;
}

// IsActive @ 1486d0ea0

bool __thiscall FSoundEffectBase::IsActive(FSoundEffectBase *this)

{
  return this->bIsActive != (FThreadSafeBool)0x0;
}

// IsPreset @ 1486d1630

bool __thiscall FSoundEffectBase::IsPreset(FSoundEffectBase *this,USoundEffectPreset *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<USoundEffectPreset,FWeakObjectPtr>::UEOpEquals<USoundEffectPreset,bool>
                    (&this->Preset,param_1);
  return bVar1;
}

// PumpPendingMessages @ 1486e32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSoundEffectBase::PumpPendingMessages(FSoundEffectBase *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar7 = local_58, uVar11 = uStack_60, lVar10 = local_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar11;
    local_78 = pcVar8;
    uStack_70 = uVar9;
    if (local_48 != 0) {
      plVar13 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar13 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar8 = local_78;
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar11);
  }
  if (local_78 != (code *)0x0) {
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// SetEnabled @ 1486ee2e0

void __thiscall FSoundEffectBase::SetEnabled(FSoundEffectBase *this,bool param_1)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = param_1;
  this->bIsActive = FVar1;
  UNLOCK();
  return;
}

// Update @ 1486f3f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSoundEffectBase::Update(FSoundEffectBase *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar14 = plStack_50, uVar7 = local_58, uVar12 = uStack_60, lVar10 = local_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar12;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar14;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar12 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar12;
    local_78 = pcVar8;
    uStack_70 = uVar9;
    if (local_48 != 0) {
      plVar14 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar14 = plStack_20;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar14 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar13 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar14 != (longlong *)0x0) {
          plVar13 = plVar14;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar8 = local_78;
    plVar14 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar14 = plStack_50;
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    (*pcVar8)(uVar12);
  }
  if (local_78 != (code *)0x0) {
    plVar14 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar14 = plStack_50;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((this->bChanged != (FThreadSafeBool)0x0) &&
     (bVar11 = FWeakObjectPtr::IsValid(&(this->Preset).WeakPtr), bVar11)) {
    (**(code **)(this->_padding_ + 8))(this);
    LOCK();
    this->bChanged = (FThreadSafeBool)0x0;
    UNLOCK();
    return true;
  }
  return false;
}

