// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedCurveTableChange @ 147a26c20

FScopedCurveTableChange * __thiscall
_anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange
          (FScopedCurveTableChange *this,UCurveTable *param_1)

{
  int iVar1;
  UCurveTable *pUVar2;
  longlong lVar3;
  uint uVar4;
  int local_res8 [2];
  FScopedCurveTableChange *local_res10 [3];
  
  this->Table = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&::FScopedCurveTableChange::CriticalSection);
  pUVar2 = this->Table;
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (::FScopedCurveTableChange::ScopeCount._8_4_ != ::FScopedCurveTableChange::ScopeCount._52_4_) {
    lVar3 = 0x154c3b478;
    if (::FScopedCurveTableChange::ScopeCount._64_8_ != 0) {
      lVar3 = ::FScopedCurveTableChange::ScopeCount._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(::FScopedCurveTableChange::ScopeCount._72_4_ - 1 & uVar4) *
                             4);
    while (iVar1 != -1) {
      lVar3 = ::FScopedCurveTableChange::ScopeCount._0_8_ + (longlong)iVar1 * 0x18;
      if (*(UCurveTable **)(::FScopedCurveTableChange::ScopeCount._0_8_ + (longlong)iVar1 * 0x18) ==
          pUVar2) {
        if (lVar3 != 0) goto LAB_147a26d0a;
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  local_res10[0] = this;
  TSet<TTuple<UCurveTable_*,int>,TDefaultMapHashableKeyFuncs<UCurveTable_*,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UCurveTable_*_const_&>_>
            ((TSet<TTuple<UCurveTable_*,int>,TDefaultMapHashableKeyFuncs<UCurveTable_*,int,0>,FDefaultSetAllocator>
              *)&::FScopedCurveTableChange::ScopeCount,(uint)local_res8,
             (TKeyInitializer<UCurveTable_*_const_&> *)(ulonglong)uVar4,(bool *)local_res10);
  lVar3 = ::FScopedCurveTableChange::ScopeCount._0_8_ + (longlong)local_res8[0] * 0x18;
LAB_147a26d0a:
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  return this;
}

// ~FScopedCurveTableChange @ 147a29e50

void __thiscall
_anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(FScopedCurveTableChange *this)

{
  int *piVar1;
  int iVar2;
  UCurveTable *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  UCurveTable *local_res8;
  
  pUVar3 = this->Table;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (::FScopedCurveTableChange::ScopeCount._8_4_ != ::FScopedCurveTableChange::ScopeCount._52_4_) {
    lVar7 = 0x154c3b478;
    if (::FScopedCurveTableChange::ScopeCount._64_8_ != 0) {
      lVar7 = ::FScopedCurveTableChange::ScopeCount._64_8_;
    }
    iVar2 = *(int *)(lVar7 + (ulonglong)
                             (::FScopedCurveTableChange::ScopeCount._72_4_ - 1 &
                             (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar2 != -1) {
      lVar7 = ::FScopedCurveTableChange::ScopeCount._0_8_ + (longlong)iVar2 * 0x18;
      if (*(UCurveTable **)(::FScopedCurveTableChange::ScopeCount._0_8_ + (longlong)iVar2 * 0x18) ==
          pUVar3) {
        if (lVar7 != 0) goto LAB_147a29f14;
        goto LAB_147a29eee;
      }
      iVar2 = *(int *)(lVar7 + 0x10);
    }
  }
  lVar7 = 0;
LAB_147a29eee:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147a29f14:
  piVar1 = (int *)(lVar7 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->Table->OnCurveTableChangedDelegate);
    local_res8 = this->Table;
    if (::FScopedCurveTableChange::ScopeCount._8_4_ != ::FScopedCurveTableChange::ScopeCount._52_4_)
    {
      uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      TSet<TTuple<UCurveTable_*,int>,TDefaultMapHashableKeyFuncs<UCurveTable_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<UCurveTable_const_*>
                ((TSet<TTuple<UCurveTable_*,int>,TDefaultMapHashableKeyFuncs<UCurveTable_*,int,0>,FDefaultSetAllocator>
                  *)&::FScopedCurveTableChange::ScopeCount,uVar6 >> 0x10 ^ uVar6,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147a29f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&::FScopedCurveTableChange::CriticalSection);
  return;
}

