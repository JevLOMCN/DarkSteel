// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoSetup @ 1419eeab0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatIdData * __thiscall
FThreadSafeStaticStatBase::DoSetup
          (FThreadSafeStaticStatBase *this,FName param_1,wchar_t *param_2,char *param_3,
          char *param_4,wchar_t *param_5,bool param_6,bool param_7,Type param_8,bool param_9,
          bool param_10,EMemoryCounterRegion param_11)

{
  TAtomic<TStatIdData_const_*> TVar1;
  TAtomic<TStatIdData_const_*> TVar2;
  code *pcVar3;
  bool bVar4;
  FStartupMessages *this_00;
  IStatGroupEnableManager *pIVar5;
  TAtomic<TStatIdData_const_*> *pTVar6;
  TStatIdData *pTVar7;
  undefined1 local_48 [16];
  
  this_00 = FStartupMessages::Get();
  FStartupMessages::AddMetadata
            (this_00,param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,
             param_11);
  pIVar5 = IStatGroupEnableManager::Get();
  pTVar6 = (TAtomic<TStatIdData_const_*> *)
           (**(code **)((longlong)*pIVar5 + 8))
                     (pIVar5,local_48,param_1,param_3,param_4,param_6,param_7,param_8,param_2,
                      param_9,param_10,param_11);
  TVar2 = *pTVar6;
  LOCK();
  TVar1 = this->HighPerformanceEnable;
  this->HighPerformanceEnable = TVar2;
  UNLOCK();
  if ((TVar1 != (TAtomic<TStatIdData_const_*>)0x0) && (TVar2 != TVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OldHighPerformanceEnable || LocalHighPerformanceEnable == OldHighPerformanceEnable"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x116,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStatIdData *)(*pcVar3)();
      return pTVar7;
    }
  }
  return (TStatIdData *)TVar2;
}

