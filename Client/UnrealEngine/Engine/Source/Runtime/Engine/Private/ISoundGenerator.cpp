// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ISoundGenerator @ 148696180

ISoundGenerator * __thiscall ISoundGenerator::ISoundGenerator(ISoundGenerator *this)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  
  this->_padding_ = (longlong)&___7ISoundGenerator__6B_;
  (this->CommandQueue).Head =
       (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  aVar1 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar1 = 0;
  (this->CommandQueue).Head = aVar1;
  (this->CommandQueue).Tail = (FNode *)aVar1;
  return this;
}

// ~ISoundGenerator @ 14869b050

void __thiscall ISoundGenerator::~ISoundGenerator(ISoundGenerator *this)

{
  this->_padding_ = (longlong)&___7ISoundGenerator__6B_;
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->CommandQueue);
  return;
}

// GetNextBuffer @ 1486c1df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001486c1f18) */

int __thiscall
ISoundGenerator::GetNextBuffer(ISoundGenerator *this,float *param_1,int param_2,bool param_3)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStackY_138 [32];
  FLLMScope local_108 [2];
  FMemScope local_100;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong *local_d0;
  char local_c8;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  char local_88;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FLLMScope::FLLMScope(local_108,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_100,AudioSynthesis,true);
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (aVar1 = ((this->CommandQueue).Tail)->Next,
        aVar1 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    local_f8 = *(code **)((longlong)aVar1 + 0x10);
    local_d0 = *(longlong **)((longlong)aVar1 + 0x38);
    *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
    local_e8 = *(undefined4 *)((longlong)aVar1 + 0x20);
    uStack_e4 = *(undefined4 *)((longlong)aVar1 + 0x24);
    uStack_e0 = *(undefined4 *)((longlong)aVar1 + 0x28);
    uStack_dc = *(undefined4 *)((longlong)aVar1 + 0x2c);
    local_d8 = *(undefined8 *)((longlong)aVar1 + 0x30);
    if (local_f8 != (code *)0x0) {
      *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
    }
    local_c8 = '\x01';
    if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
      plVar13 = *(longlong **)((longlong)aVar1 + 0x38);
      if (*(longlong **)((longlong)aVar1 + 0x38) == (longlong *)0x0) {
        plVar13 = (longlong *)((longlong)aVar1 + 0x20);
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    FMemory::Free((this->CommandQueue).Tail);
    plVar9 = plStack_50;
    uVar8 = uStack_5c;
    uVar7 = uStack_60;
    uVar6 = uStack_64;
    uVar5 = local_68;
    uVar12 = uStack_70;
    pcVar4 = local_78;
    plVar13 = local_d0;
    pcVar2 = local_f8;
    (this->CommandQueue).Tail = (FNode *)aVar1;
    local_88 = local_c8;
    if (local_c8 == '\0') goto LAB_1486c1fb6;
    local_b8 = local_f8;
    plStack_90 = local_d0;
    local_d0 = (longlong *)0x0;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    local_98 = local_d8;
    if (local_f8 != (code *)0x0) {
      local_f8 = (code *)0x0;
    }
    if (local_c8 == '\0') goto LAB_1486c1fb6;
    uVar3 = CONCAT44(uStack_54,local_58);
    local_78 = pcVar2;
    uStack_70 = uStack_b0;
    local_98._0_4_ = (undefined4)local_d8;
    local_98._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    plStack_50 = plVar13;
    local_68 = local_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    local_b8 = pcVar4;
    uStack_b0 = uVar12;
    local_a8 = uVar5;
    uStack_a4 = uVar6;
    uStack_a0 = uVar7;
    uStack_9c = uVar8;
    local_98 = uVar3;
    plStack_90 = plVar9;
    if (pcVar4 != (code *)0x0) {
      plVar13 = (longlong *)&local_a8;
      if (plVar9 != (longlong *)0x0) {
        plVar13 = plVar9;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar2 = local_78;
    plVar13 = (longlong *)&local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(uVar12);
  }
  local_88 = '\0';
LAB_1486c1fb6:
  if (local_78 != (code *)0x0) {
    plVar13 = (longlong *)&local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (param_3) {
    iVar11 = (**(code **)(this->_padding_ + 8))(this,param_1,param_2);
    if (iVar11 != param_2) {
      if (((iVar11 < 0) || (param_2 <= iVar11)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumSamplesWritten >= 0 && NumSamplesWritten < NumSamplesToGenerate",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundGenerator.cpp"
                              ,0x21,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        iVar11 = (*pcVar2)();
        return iVar11;
      }
      memset(param_1 + iVar11,0,(longlong)(param_2 - iVar11) << 2);
      iVar11 = param_2;
    }
  }
  else {
    iVar11 = (**(code **)(this->_padding_ + 0x10))();
    if (param_2 < iVar11) {
      iVar11 = param_2;
    }
    iVar11 = (**(code **)(this->_padding_ + 8))(this,param_1,iVar11);
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_108);
  return iVar11;
}

// PumpPendingMessages @ 1486e3470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001486e3562) */

void __thiscall ISoundGenerator::PumpPendingMessages(ISoundGenerator *this)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  char local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  char local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  while (aVar1 = ((this->CommandQueue).Tail)->Next,
        aVar1 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    local_c8 = *(code **)((longlong)aVar1 + 0x10);
    local_a0 = *(longlong **)((longlong)aVar1 + 0x38);
    *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
    local_b8 = *(undefined4 *)((longlong)aVar1 + 0x20);
    uStack_b4 = *(undefined4 *)((longlong)aVar1 + 0x24);
    uStack_b0 = *(undefined4 *)((longlong)aVar1 + 0x28);
    uStack_ac = *(undefined4 *)((longlong)aVar1 + 0x2c);
    local_a8 = *(undefined8 *)((longlong)aVar1 + 0x30);
    if (local_c8 != (code *)0x0) {
      *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
    }
    local_98 = '\x01';
    if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
      plVar11 = *(longlong **)((longlong)aVar1 + 0x38);
      if (*(longlong **)((longlong)aVar1 + 0x38) == (longlong *)0x0) {
        plVar11 = (longlong *)((longlong)aVar1 + 0x20);
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    FMemory::Free((this->CommandQueue).Tail);
    plVar9 = plStack_20;
    uVar8 = uStack_2c;
    uVar7 = uStack_30;
    uVar6 = uStack_34;
    uVar5 = local_38;
    uVar10 = uStack_40;
    pcVar4 = local_48;
    plVar11 = local_a0;
    pcVar3 = local_c8;
    (this->CommandQueue).Tail = (FNode *)aVar1;
    local_58 = local_98;
    if (local_98 == '\0') break;
    local_88 = local_c8;
    plStack_60 = local_a0;
    local_a0 = (longlong *)0x0;
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_68 = local_a8;
    if (local_c8 != (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    if (local_98 == '\0') break;
    uVar2 = CONCAT44(uStack_24,local_28);
    local_48 = pcVar3;
    uStack_40 = uStack_80;
    local_68._0_4_ = (undefined4)local_a8;
    local_68._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    local_28 = (undefined4)local_68;
    uStack_24 = local_68._4_4_;
    plStack_20 = plVar11;
    local_38 = local_b8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    local_88 = pcVar4;
    uStack_80 = uVar10;
    local_78 = uVar5;
    uStack_74 = uVar6;
    uStack_70 = uVar7;
    uStack_6c = uVar8;
    local_68 = uVar2;
    plStack_60 = plVar9;
    if (pcVar4 != (code *)0x0) {
      plVar11 = (longlong *)&local_78;
      if (plVar9 != (longlong *)0x0) {
        plVar11 = plVar9;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar3 = local_48;
    plVar11 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar11 = plStack_20;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar3)(uVar10);
  }
  if (local_48 != (code *)0x0) {
    plVar11 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar11 = plStack_20;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SynthCommand @ 1486f2510

void __thiscall
ISoundGenerator::SynthCommand(ISoundGenerator *this,TFunction<void___cdecl(void)> *param_1)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  undefined8 uVar2;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  longlong *plVar4;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_18,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_10,AudioSynthesis,true);
  aVar3 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar3 = 0;
  *(undefined8 *)((longlong)aVar3 + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)aVar3 + 0x38) = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)((longlong)aVar3 + 0x20) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)((longlong)aVar3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)aVar3 + 0x30) = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  LOCK();
  aVar1 = (this->CommandQueue).Head;
  (this->CommandQueue).Head = aVar3;
  UNLOCK();
  *(atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1 = aVar3;
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

