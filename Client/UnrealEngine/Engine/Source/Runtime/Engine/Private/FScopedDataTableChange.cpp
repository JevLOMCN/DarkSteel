// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FScopedDataTableChange @ 147abc2b0

FScopedDataTableChange * __thiscall
UDataTable::FScopedDataTableChange::FScopedDataTableChange
          (FScopedDataTableChange *this,UDataTable *param_1)

{
  int *piVar1;
  uint uVar2;
  
  this->Table = param_1;
  (this->RowName).ComparisonIndex = 0;
  (this->RowName).Number = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  uVar2 = ((uint)((ulonglong)this->Table >> 0x14) & 0xffff ^ (uint)((ulonglong)this->Table >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  piVar1 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&ScopeCount,uVar2 >> 0x10 ^ uVar2,&this->Table);
  (this->RowName).ComparisonIndex = 0;
  (this->RowName).Number = 0;
  *piVar1 = *piVar1 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return this;
}

// FScopedDataTableChange @ 147abc340

FScopedDataTableChange * __thiscall
UDataTable::FScopedDataTableChange::FScopedDataTableChange
          (FScopedDataTableChange *this,UDataTable *param_1,FName param_2)

{
  int *piVar1;
  uint uVar2;
  
  this->Table = param_1;
  (this->RowName).ComparisonIndex = 0;
  (this->RowName).Number = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  uVar2 = ((uint)((ulonglong)this->Table >> 0x14) & 0xffff ^ (uint)((ulonglong)this->Table >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  piVar1 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&ScopeCount,uVar2 >> 0x10 ^ uVar2,&this->Table);
  this->RowName = param_2;
  *piVar1 = *piVar1 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return this;
}

// ~FScopedDataTableChange @ 147abf200

void __thiscall
UDataTable::FScopedDataTableChange::~FScopedDataTableChange(FScopedDataTableChange *this)

{
  int *piVar1;
  int iVar2;
  UDataTable *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  UDataTable *local_res8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  pUVar3 = this->Table;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (ScopeCount._8_4_ != ScopeCount._52_4_) {
    lVar7 = 0x154c3b598;
    if (ScopeCount._64_8_ != 0) {
      lVar7 = ScopeCount._64_8_;
    }
    iVar2 = *(int *)(lVar7 + (ulonglong)(ScopeCount._72_4_ - 1 & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar2 != -1) {
      lVar7 = ScopeCount._0_8_ + (longlong)iVar2 * 0x18;
      if (*(UDataTable **)(ScopeCount._0_8_ + (longlong)iVar2 * 0x18) == pUVar3) {
        if (lVar7 != 0) goto LAB_147abf2d4;
        goto LAB_147abf2ae;
      }
      iVar2 = *(int *)(lVar7 + 0x10);
    }
  }
  lVar7 = 0;
LAB_147abf2ae:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147abf2d4:
  piVar1 = (int *)(lVar7 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    HandleDataTableChanged(this->Table,this->RowName);
    local_res8 = this->Table;
    if (ScopeCount._8_4_ != ScopeCount._52_4_) {
      uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      TSet<TTuple<UDataTable_*,int>,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<UDataTable_const_*>
                ((TSet<TTuple<UDataTable_*,int>,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>,FDefaultSetAllocator>
                  *)&ScopeCount,uVar6 >> 0x10 ^ uVar6,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147abf346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return;
}

