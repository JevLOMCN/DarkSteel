// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 34

// StaticStruct @ 14deee270

UScriptStruct * __cdecl FIKRigSolverBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar1,
                         L"IKRigSolverBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton;
}

// Initialize @ 14deee2b0

void __thiscall FIKRigSolverBase::Initialize(FIKRigSolverBase *this,FIKRigSkeleton *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x53,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Solve @ 14deee2f0

void __thiscall
FIKRigSolverBase::Solve(FIKRigSolverBase *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x55,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetRequiredBones @ 14deee330

void __thiscall
FIKRigSolverBase::GetRequiredBones
          (FIKRigSolverBase *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetRequiredGoals @ 14deee430

void __thiscall
FIKRigSolverBase::GetRequiredGoals
          (FIKRigSolverBase *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x59,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UpdateSettingsFromAsset @ 14deee470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRigSolverBase::UpdateSettingsFromAsset(FIKRigSolverBase *this,FIKRigSolverBase *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FIKRigSettingsBase *pFVar7;
  FIKRigSettingsBase *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207 [7];
  UScriptStruct *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  FIKRigSolverBase *local_1a8;
  UScriptStruct *local_1a0;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  this->bIsEnabled = param_1->bIsEnabled;
  local_1a8 = this;
  pUVar6 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x38))();
  pFVar7 = (FIKRigSettingsBase *)(**(code **)(param_1->_padding_ + 0x30))(param_1);
  pFVar8 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0x30))(this);
  CopyAllEditableProperties(pUVar6,pFVar7,pFVar8);
  cVar4 = (**(code **)(param_1->_padding_ + 0x68))(param_1);
  local_200 = (UScriptStruct *)0x1;
  if (cVar4 != '\0') {
    local_1a0 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x80))(this);
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    uVar14 = 0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,local_e8);
    uVar12 = local_c0;
    local_1c8 = 0;
    uStack_1cc = local_1c8;
    uStack_1dc = 1;
    if (local_c0 != 0) {
      puVar15 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar15 = local_c8;
      }
      uVar16 = *puVar15;
      local_1c8 = 0;
      uVar14 = 0;
      while (uVar16 == 0) {
        lVar10 = (longlong)(int)uVar14;
        local_1c8 = local_1c8 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_1cc = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_14deee5d1;
        uVar16 = puVar15[lVar10 + 1];
      }
      uStack_1dc = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_1dc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b8 = (int)lVar10;
      uStack_1cc = (local_1c8 - 1) + local_1b8;
      if ((int)local_c0 < (int)uStack_1cc) {
        uStack_1cc = local_c0;
      }
    }
LAB_14deee5d1:
    local_1e8 = (longlong *)local_e8;
    uStack_1c4 = local_ec;
    local_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uVar16 = local_c0 & 0xffffffe0;
    iStack_1c0 = local_e8._8_4_ - local_b4;
    TStack_160._padding_ = CONCAT44(uStack_1dc,uVar14);
    uStack_1d0 = 0xffffffff;
    TStack_160.CurrentBitIndex = uStack_1cc;
    TStack_160.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)local_c0 >> 5;
    TStack_160._28_4_ = local_ec;
    TStack_160.BaseBitIndex = local_1c8;
    uStack_140 = CONCAT44(uStack_1bc,iStack_1c0);
    bVar9 = (byte)local_c0;
    uStack_1e0 = uVar14;
    local_168 = local_1e8;
    TStack_160.Array = local_1d8;
    if (((int)local_c0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = local_1a0;
    this = local_1a8;
    if (uVar12 != local_c0) {
      puVar15 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar15 = local_c8;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar15[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14deee6e1;
        uVar14 = puVar15[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b4 = (int)lVar10;
      uVar12 = local_1b4 + -1 + uVar16;
      if ((int)local_c0 < (int)uVar12) {
        uVar12 = local_c0;
      }
    }
LAB_14deee6e1:
    while( true ) {
      plVar3 = local_168;
      if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
        local_208 = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (((TStack_160.CurrentBitIndex == uVar12) &&
          (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar3 == (longlong *)local_e8)) break;
      local_1f8 = *(undefined8 *)(*plVar3 + (longlong)TStack_160.CurrentBitIndex * 0x10);
      pFVar7 = (FIKRigSettingsBase *)(**(code **)(param_1->_padding_ + 0x70))(param_1,&local_1f8);
      pFVar8 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0x70))(this,&local_1f8);
      CopyAllEditableProperties(pUVar6,pFVar7,pFVar8);
      TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
    }
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
  }
  uVar14 = (uint)local_200;
  cVar4 = (**(code **)(param_1->_padding_ + 0xc0))(param_1);
  if (cVar4 != '\0') {
    local_200 = (UScriptStruct *)(**(code **)(this->_padding_ + 0xe8))(this);
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar12 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(param_1->_padding_ + 0xf8))(param_1,local_98);
    uVar16 = local_70;
    local_178 = 0;
    uStack_17c = local_178;
    if (local_70 != 0) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar13 = *puVar15;
      local_178 = 0;
      uVar12 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)(int)uVar12;
        local_178 = local_178 + 0x20;
        uVar12 = uVar12 + 1;
        uStack_17c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14deee8c1;
        uVar13 = puVar15[lVar10 + 1];
      }
      uVar14 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uVar14 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b0 = (int)lVar10;
      uStack_17c = local_1b0 + -1 + local_178;
      if ((int)local_70 < (int)uStack_17c) {
        uStack_17c = local_70;
      }
    }
LAB_14deee8c1:
    local_198 = (longlong *)local_98;
    uVar13 = local_70 & 0xffffffe0;
    uStack_174 = uStack_1cc;
    local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_170 = local_98._8_4_ - local_64;
    uStack_180 = 0xffffffff;
    TStack_130.CurrentBitIndex = uStack_17c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130._padding_ = CONCAT44(uVar14,uVar12);
    iVar11 = (int)local_70 >> 5;
    TStack_130._28_4_ = uStack_1cc;
    TStack_130.BaseBitIndex = local_178;
    uStack_110 = CONCAT44(uStack_16c,iStack_170);
    bVar9 = (byte)local_70;
    uStack_190 = uVar12;
    uStack_18c = uVar14;
    local_138 = local_198;
    TStack_130.Array = local_188;
    if (((int)local_70 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = local_200;
    if (uVar16 != local_70) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar15[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14deee9cd;
        uVar14 = puVar15[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar13;
      if ((int)local_70 < (int)uVar16) {
        uVar16 = local_70;
      }
    }
LAB_14deee9cd:
    while( true ) {
      plVar3 = local_138;
      if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
      }
      if (((TStack_130.CurrentBitIndex == uVar16) &&
          (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      local_1f0 = *(undefined8 *)(*plVar3 + (longlong)TStack_130.CurrentBitIndex * 0x10);
      pFVar7 = (FIKRigSettingsBase *)(**(code **)(param_1->_padding_ + 0xd8))(param_1,&local_1f0);
      pFVar8 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0xd8))(this,&local_1f0);
      CopyAllEditableProperties(pUVar6,pFVar7,pFVar8);
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// GetSolverSettings @ 14deeeb20

FIKRigSolverSettingsBase * __thiscall FIKRigSolverBase::GetSolverSettings(FIKRigSolverBase *this)

{
  code *pcVar1;
  bool bVar2;
  FIKRigSolverSettingsBase *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x65,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIKRigSolverSettingsBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FIKRigSolverSettingsBase *)0x0;
}

// GetSolverSettingsType @ 14deeeb60

UScriptStruct * __thiscall FIKRigSolverBase::GetSolverSettingsType(FIKRigSolverBase *this)

{
  return (UScriptStruct *)0x0;
}

// SetSolverSettings @ 14deeeb70

void __thiscall
FIKRigSolverBase::SetSolverSettings(FIKRigSolverBase *this,FIKRigSolverSettingsBase *param_1)

{
  FIKRigSettingsBase *pFVar1;
  UScriptStruct *pUVar2;
  
  pFVar1 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0x30))();
  pUVar2 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x38))(this);
  CopyAllEditableProperties(pUVar2,(FIKRigSettingsBase *)param_1,pFVar1);
  return;
}

// AddGoal @ 14deeebc0

void __thiscall FIKRigSolverBase::AddGoal(FIKRigSolverBase *this,UIKRigEffectorGoal *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x6e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnGoalRenamed @ 14deeec00

void __thiscall
FIKRigSolverBase::OnGoalRenamed(FIKRigSolverBase *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x70,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14deeec40

void __thiscall
FIKRigSolverBase::OnGoalMovedToDifferentBone(FIKRigSolverBase *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x72,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnGoalRemoved @ 14deeec80

void __thiscall FIKRigSolverBase::OnGoalRemoved(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                     ,0x74,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UsesCustomGoalSettings @ 14deeecc0

bool __thiscall FIKRigSolverBase::UsesCustomGoalSettings(FIKRigSolverBase *this)

{
  return false;
}

// GetGoalSettings @ 14deeed10

FIKRigGoalSettingsBase * __thiscall
FIKRigSolverBase::GetGoalSettings(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FIKRigGoalSettingsBase *pFVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0x68))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494275>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x7d,"!UsesCustomGoalSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIKRigGoalSettingsBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FIKRigGoalSettingsBase *)0x0;
}

// SetGoalSettings @ 14deeed60

void __thiscall
FIKRigSolverBase::SetGoalSettings
          (FIKRigSolverBase *this,FName *param_1,FIKRigGoalSettingsBase *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FIKRigSettingsBase *pFVar4;
  UScriptStruct *pUVar5;
  
  cVar2 = (**(code **)(this->_padding_ + 0x68))();
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7768658483326484536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigSolverBase.cpp"
                       ,0x38,"UsesCustomGoalSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0x70))(this,param_1);
  pUVar5 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x80))(this);
  CopyAllEditableProperties(pUVar5,(FIKRigSettingsBase *)param_2,pFVar4);
  return;
}

// GetGoalSettingsType @ 14deeedf0

UScriptStruct * __thiscall FIKRigSolverBase::GetGoalSettingsType(FIKRigSolverBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0x68))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x81,"!UsesCustomGoalSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UScriptStruct *)(*pcVar1)();
      return pUVar4;
    }
  }
  return (UScriptStruct *)0x0;
}

// GetGoalsWithSettings @ 14deeee40

void __thiscall
FIKRigSolverBase::GetGoalsWithSettings
          (FIKRigSolverBase *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x68))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x83,"!UsesCustomGoalSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UsesStartBone @ 14deeee90

bool __thiscall FIKRigSolverBase::UsesStartBone(FIKRigSolverBase *this)

{
  return false;
}

// GetStartBone @ 14deeeea0

FName __thiscall FIKRigSolverBase::GetStartBone(FIKRigSolverBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FName FVar4;
  FName in_RDX;
  
  cVar2 = (**(code **)(this->_padding_ + 0x90))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494261>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x8b,"!UsesStartBone()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// SetStartBone @ 14deeef40

void __thiscall FIKRigSolverBase::SetStartBone(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x90))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494259>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x8d,"!UsesStartBone()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UsesEndBone @ 14deeef90

bool __thiscall FIKRigSolverBase::UsesEndBone(FIKRigSolverBase *this)

{
  return false;
}

// GetEndBone @ 14deeefa0

FName __thiscall FIKRigSolverBase::GetEndBone(FIKRigSolverBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FName FVar4;
  FName in_RDX;
  
  cVar2 = (**(code **)(this->_padding_ + 0xa8))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494251>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x95,"!UsesEndBone()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// SetEndBone @ 14deef000

void __thiscall FIKRigSolverBase::SetEndBone(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0xa8))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494249>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x97,"!UsesEndBone()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UsesCustomBoneSettings @ 14deef050

bool __thiscall FIKRigSolverBase::UsesCustomBoneSettings(FIKRigSolverBase *this)

{
  return false;
}

// AddSettingsToBone @ 14deef060

void __thiscall FIKRigSolverBase::AddSettingsToBone(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494241>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0x9f,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveSettingsOnBone @ 14deef0f0

void __thiscall FIKRigSolverBase::RemoveSettingsOnBone(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494239>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0xa1,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetBoneSettings @ 14deef140

FIKRigBoneSettingsBase * __thiscall
FIKRigSolverBase::GetBoneSettings(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FIKRigBoneSettingsBase *pFVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0xa4,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIKRigBoneSettingsBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FIKRigBoneSettingsBase *)0x0;
}

// SetBoneSettings @ 14deef190

void __thiscall
FIKRigSolverBase::SetBoneSettings
          (FIKRigSolverBase *this,FName *param_1,FIKRigBoneSettingsBase *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FIKRigSettingsBase *pFVar4;
  UScriptStruct *pUVar5;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7768658483326484542>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigSolverBase.cpp"
                       ,0x3e,"UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (FIKRigSettingsBase *)(**(code **)(this->_padding_ + 0xd8))(this,param_1);
  pUVar5 = (UScriptStruct *)(**(code **)(this->_padding_ + 0xe8))(this);
  CopyAllEditableProperties(pUVar5,(FIKRigSettingsBase *)param_2,pFVar4);
  return;
}

// GetBoneSettingsType @ 14deef230

UScriptStruct * __thiscall FIKRigSolverBase::GetBoneSettingsType(FIKRigSolverBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494232>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0xa8,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UScriptStruct *)(*pcVar1)();
      return pUVar4;
    }
  }
  return (UScriptStruct *)0x0;
}

// HasSettingsOnBone @ 14deef280

bool __thiscall FIKRigSolverBase::HasSettingsOnBone(FIKRigSolverBase *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494230>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0xaa,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBonesWithSettings @ 14deef310

void __thiscall
FIKRigSolverBase::GetBonesWithSettings
          (FIKRigSolverBase *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0xc0))();
  if (cVar2 != '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5273119898363494227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\IKRigSolverBase.h"
                       ,0xad,"!UsesCustomBoneSettings()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~FIKRigSolverBase @ 14df1bfe0

void __thiscall FIKRigSolverBase::~FIKRigSolverBase(FIKRigSolverBase *this)

{
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  return;
}

// CopyAllEditableProperties @ 14df2c440

void __cdecl
FIKRigSolverBase::CopyAllEditableProperties
          (UScriptStruct *param_1,FIKRigSettingsBase *param_2,FIKRigSettingsBase *param_3)

{
  int iVar1;
  code *pcVar2;
  FField *pFVar3;
  bool bVar4;
  UPackage *pUVar5;
  UScriptStruct *pUVar6;
  void *_Dst;
  void *_Src;
  TFieldIterator<FProperty> local_38;
  
  if (param_2 == (FIKRigSettingsBase *)0x0) {
    return;
  }
  if (param_3 == (FIKRigSettingsBase *)0x0) {
    return;
  }
  if (param_1 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSettingsBase,(UObject *)pUVar5,
                           L"IKRigSettingsBase");
      if (Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14df2c70f;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = FIKRigSettingsBase::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)param_1->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar6 = FIKRigSettingsBase::StaticStruct();
          if (pUVar6 != (UScriptStruct *)0x0) {
            iVar1 = (int)pUVar6->_padding_;
            if (((int)param_1->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_38.Field = (FField *)param_1->_padding_;
              local_38.InterfaceIndex = -1;
              local_38.bIncludeSuper = true;
              local_38.bIncludeDeprecated = true;
              local_38.bIncludeInterface = false;
              local_38.Struct = (UStruct *)param_1;
              TFieldIterator<FProperty>::IterateToNext(&local_38);
              pFVar3 = local_38.Field;
              do {
                if (pFVar3 == (FField *)0x0) {
                  return;
                }
                if (((ulonglong)pFVar3[1].ClassPrivate & 0x2010) == 0) {
                  local_38.Field = pFVar3;
                  if (((int)pFVar3[1]._padding_ < 1) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  _Src = &param_2->field_0x0 + *(int *)((longlong)&pFVar3[1].Owner.Container + 4);
                  if (((int)pFVar3[1]._padding_ < 1) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  _Dst = &param_3->field_0x0 + *(int *)((longlong)&pFVar3[1].Owner.Container + 4);
                  if (((_Src != (void *)0x0) && (_Dst != (void *)0x0)) && (_Dst != _Src)) {
                    if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
                      (**(code **)(pFVar3->_padding_ + 0xf0))
                                (pFVar3,_Dst,_Src,(int)pFVar3[1]._padding_);
                    }
                    else {
                      memcpy(_Dst,_Src,
                             (longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4) *
                             (longlong)(int)pFVar3[1]._padding_);
                    }
                  }
                }
                local_38.Field = pFVar3->Next;
                TFieldIterator<FProperty>::IterateToNext(&local_38);
                pFVar3 = local_38.Field;
              } while( true );
            }
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7768658483326484570>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigSolverBase.cpp"
                             ,0x5a,"SettingsType->IsChildOf(CopyTo->StaticStruct())");
          if (!bVar4) {
            return;
          }
          goto code_r0x00014df2c73f;
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7768658483326484564>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigSolverBase.cpp"
                         ,0x54,"SettingsType->IsChildOf(CopyFrom->StaticStruct())");
      if (!bVar4) {
        return;
      }
      goto code_r0x00014df2c73f;
    }
  }
LAB_14df2c70f:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7768658483326484558>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigSolverBase.cpp"
                     ,0x4e,
                     "SettingsType && SettingsType->IsChildOf(FIKRigSettingsBase::StaticStruct())");
  if (!bVar4) {
    return;
  }
code_r0x00014df2c73f:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

