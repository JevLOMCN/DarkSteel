// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FInstanceCountingObject @ 141986770

FInstanceCountingObject * __thiscall
FInstanceCountingObject::FInstanceCountingObject
          (FInstanceCountingObject *this,FInstanceCountingObject *param_1)

{
  this->_padding_ = (longlong)&___7FInstanceCountingObject__6B_;
  this->Name = param_1->Name;
  this->DoLog = param_1->DoLog;
  IncrementStats(this);
  return this;
}

// FInstanceCountingObject @ 1419867b0

FInstanceCountingObject * __thiscall
FInstanceCountingObject::FInstanceCountingObject
          (FInstanceCountingObject *this,wchar_t *param_1,bool param_2)

{
  this->_padding_ = (longlong)&___7FInstanceCountingObject__6B_;
  ::FName::FName(&this->Name,param_1);
  this->DoLog = param_2;
  IncrementStats(this);
  return this;
}

// ~FInstanceCountingObject @ 141987eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInstanceCountingObject::~FInstanceCountingObject(FInstanceCountingObject *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FInstanceCountingObject__6B_;
  if ((Globals == (FGlobalVars *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Globals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\InstanceCounter.cpp"
                         ,0x49,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = &Globals->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             FindChecked((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)Globals,this->Name);
    *piVar3 = *piVar3 + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->DoLog != false) && (4 < (byte)LogInstanceCount._0_1_)) {
      ::FName::ToString(&this->Name,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstanceCount);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DecrementStats @ 141990e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInstanceCountingObject::DecrementStats(FInstanceCountingObject *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_18;
  
  if ((Globals == (FGlobalVars *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Globals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\InstanceCounter.cpp"
                         ,0x49,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = &Globals->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             FindChecked((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)Globals,this->Name);
    *piVar3 = *piVar3 + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->DoLog != false) && (4 < (byte)LogInstanceCount._0_1_)) {
      ::FName::ToString(&this->Name,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstanceCount);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetGlobals @ 1419953b0

FGlobalVars * __cdecl FInstanceCountingObject::GetGlobals(void)

{
  FGlobalVars *pFVar1;
  
  if (Globals == (FGlobalVars *)0x0) {
    pFVar1 = ::operator_new(0x78);
    if (pFVar1 != (FGlobalVars *)0x0) {
      *(undefined8 *)&pFVar1->InstanceCounts = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x10 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x18 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x20 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x28 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x30 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x38 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x40 = 0;
      *(undefined8 *)&(pFVar1->InstanceCounts).field_0x48 = 0;
      (pFVar1->Mutex).CriticalSection.Opaque1[0] = (void *)0x0;
      (pFVar1->Mutex).CriticalSection.Opaque2[0] = 0;
      (pFVar1->Mutex).CriticalSection.Opaque2[1] = 0;
      (pFVar1->Mutex).CriticalSection.Opaque3[0] = (void *)0x0;
      (pFVar1->Mutex).CriticalSection.Opaque3[1] = (void *)0x0;
      (pFVar1->Mutex).CriticalSection.Opaque3[2] = (void *)0x0;
      *(undefined4 *)&(pFVar1->InstanceCounts).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->InstanceCounts).field_0x30 = 0xffffffff;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar1->Mutex,4000);
      Globals = pFVar1;
      return pFVar1;
    }
    Globals = (FGlobalVars *)0x0;
  }
  return Globals;
}

// GetInstanceCount @ 141995480

int __cdecl FInstanceCountingObject::GetInstanceCount(wchar_t *param_1)

{
  FName FVar1;
  code *pcVar2;
  FGlobalVars *this;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  int *piVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName local_res10;
  
  if (Globals == (FGlobalVars *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Globals",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\InstanceCounter.cpp"
                       ,0x5a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  lpCriticalSection = &Globals->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this = Globals;
    pFVar6 = ::FName::FName(&local_res10,param_1);
    FVar1 = *pFVar6;
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             FindOrAddImpl<FName>
                       ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)this,uVar5 + FVar1.Number,pFVar6);
    iVar4 = *piVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IncrementStats @ 141996270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInstanceCountingObject::IncrementStats(FInstanceCountingObject *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  uint uVar2;
  FGlobalVars *pFVar3;
  int *piVar4;
  FString local_18;
  
  pFVar3 = GetGlobals();
  lpCriticalSection = &pFVar3->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = GetGlobals();
    FVar1 = this->Name;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)pFVar3,uVar2 + FVar1.Number,&this->Name);
    *piVar4 = *piVar4 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->DoLog != false) && (4 < (byte)LogInstanceCount._0_1_)) {
      ::FName::ToString(&this->Name,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstanceCount);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// LogCounts @ 1419a1180

void __cdecl FInstanceCountingObject::LogCounts(FOutputDevice *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FGlobalVars *pFVar6;
  FGlobalVars *pFVar7;
  bool bVar8;
  longlong lVar9;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  FGlobalVars *local_res20;
  FString local_a8;
  FGlobalVars *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FGlobalVars *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (Globals != (FGlobalVars *)0x0) {
    lpCriticalSection = &Globals->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(Globals->InstanceCounts).field_0x8 !=
        *(int *)&(Globals->InstanceCounts).field_0x34) {
      FOutputDevice::Log(param_1,L"Manually tracked object counts:");
      pFVar6 = Globals;
      iStack_90 = 0;
      iVar3 = *(int *)&(Globals->InstanceCounts).field_0x28;
      puVar1 = &(Globals->InstanceCounts).field_0x10;
      local_res20 = Globals;
      uStack_8c = 1;
      local_78 = 0;
      iStack_7c = 0;
      if (iVar3 != 0) {
        puVar13 = *(uint **)&(Globals->InstanceCounts).field_0x20;
        if (puVar13 == (uint *)0x0) {
          puVar13 = (uint *)puVar1;
        }
        uVar10 = *puVar13;
        while (uVar10 == 0) {
          lVar9 = (longlong)iStack_90;
          local_78 = local_78 + 0x20;
          iStack_90 = iStack_90 + 1;
          iStack_7c = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1419a128f;
          uVar10 = puVar13[lVar9 + 1];
        }
        uStack_8c = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_8c * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res18 = (int)lVar9;
        iStack_7c = local_res18 + -1 + local_78;
        if (iVar3 < iStack_7c) {
          iStack_7c = iVar3;
        }
      }
LAB_1419a128f:
      uVar10 = *(uint *)&(Globals->InstanceCounts).field_0x28;
      uVar14 = uVar10 & 0xffffffe0;
      iStack_70 = *(int *)&(Globals->InstanceCounts).field_0x8 -
                  *(int *)&(Globals->InstanceCounts).field_0x34;
      local_98 = Globals;
      uStack_80 = 0xffffffff;
      TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
      TStack_60.CurrentBitIndex = iStack_7c;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      local_68 = Globals;
      iVar11 = (int)uVar10 >> 5;
      TStack_60._28_4_ = iStack_7c;
      TStack_60.BaseBitIndex = local_78;
      uStack_40 = CONCAT44(uStack_6c,iStack_70);
      local_88 = puVar1;
      iStack_74 = iStack_7c;
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar7 = local_res20;
      uVar4 = *(uint *)&(pFVar6->InstanceCounts).field_0x28;
      if (uVar10 != uVar4) {
        puVar12 = *(undefined1 **)&(pFVar6->InstanceCounts).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar11;
          uVar14 = uVar14 + 0x20;
          iVar11 = iVar11 + 1;
          uVar10 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_1419a13a0;
          uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar10 = (int)lVar9 + -1 + uVar14;
        if ((int)uVar4 < (int)uVar10) {
          uVar10 = uVar4;
        }
      }
LAB_1419a13a0:
      while( true ) {
        pFVar6 = local_68;
        if (*(int *)&(local_68->InstanceCounts).field_0x8 -
            *(int *)&(local_68->InstanceCounts).field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_60.CurrentBitIndex == uVar10) &&
            (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar6 == pFVar7)) break;
        ::FName::ToString((FName *)(*(longlong *)&pFVar6->InstanceCounts +
                                   (longlong)TStack_60.CurrentBitIndex * 0x14),&local_a8);
        FOutputDevice::LogfImpl(param_1,L"\t%s: %d instances");
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
      FOutputDevice::Log(param_1,L"");
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

