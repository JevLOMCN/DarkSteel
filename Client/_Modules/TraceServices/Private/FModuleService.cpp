// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// FModuleService @ 14d4968b0

FModuleService * __thiscall TraceServices::FModuleService::FModuleService(FModuleService *this)

{
  this->_padding_ = (longlong)&___7FModuleService_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->bIsInitialized = false;
  *(undefined8 *)&(this->EnabledModules).Elements = 0;
  *(undefined8 *)&(this->EnabledModules).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledModules).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledModules).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledModules).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledModules).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EnabledModules).Elements.field_0x30 = 0xffffffff;
  (this->EnabledModules).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledModules).HashSize = 0;
  *(undefined8 *)&this->ModulesMap = 0;
  *(undefined8 *)&(this->ModulesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModulesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModulesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModulesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModulesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ModulesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModulesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModulesMap).field_0x48 = 0;
  return this;
}

// ~FModuleService @ 14d496b20

void __thiscall TraceServices::FModuleService::~FModuleService(FModuleService *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->ModulesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModulesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModulesMap);
  (this->EnabledModules).HashSize = 0;
  FVar2 = (this->EnabledModules).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TraceServices::IModule_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TraceServices::IModule_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EnabledModules).Elements);
                    /* WARNING: Could not recover jumptable at 0x00014d496b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// GenerateReports @ 14d497700

void __thiscall
TraceServices::FModuleService::GenerateReports
          (FModuleService *this,IAnalysisSession *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  IAnalysisSession *pIVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  IAnalysisSession *local_res10;
  wchar_t *local_res18;
  wchar_t *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  iVar3 = *(int *)&(this->EnabledModules).Elements.field_0x28;
  puVar1 = &(this->EnabledModules).Elements.field_0x10;
  iVar14 = 0;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d4977de;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14d4977de:
  uVar13 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar10,iVar14);
  TStack_70.CurrentBitIndex = iVar11;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar11;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->EnabledModules).Elements.field_0x8 -
                       *(int *)&(this->EnabledModules).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pwVar8 = local_res20;
  pwVar7 = local_res18;
  pIVar6 = local_res10;
  uVar10 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar15 = *(undefined1 **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d4978f0;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14d4978f0:
  while( true ) {
    if (*(int *)&(this->EnabledModules).Elements.field_0x8 -
        *(int *)&(this->EnabledModules).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TraceServices::IModule_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&(this->EnabledModules).Elements +
              (longlong)TStack_70.CurrentBitIndex * 0x10);
    (**(code **)(*plVar4 + 0x28))(plVar4,pIVar6,pwVar7,pwVar8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d497982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetAvailableModules @ 14d4979a0

void __thiscall
TraceServices::FModuleService::GetAvailableModules
          (FModuleService *this,
          TArray<TraceServices::FModuleInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong local_res8;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  uVar13 = *(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  puVar3 = &(this->ModulesMap).field_0x10;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  iVar4 = *(int *)&(this->ModulesMap).field_0x28;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->ModulesMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d497acf;
      uVar13 = puVar16[lVar10 + 1];
    }
    local_res8 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = local_res8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d497acf:
  uVar13 = *(uint *)&(this->ModulesMap).field_0x28;
  TStack_60._padding_ = CONCAT44((int)local_res8,iVar11);
  uVar17 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ModulesMap).field_0x8 -
                       *(int *)&(this->ModulesMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->ModulesMap).field_0x28;
  if (uVar13 != uVar5) {
    puVar15 = *(undefined1 **)&(this->ModulesMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d497bf0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14d497bf0:
  while( true ) {
    if (*(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    puVar6 = *(undefined8 **)
              (*(longlong *)&this->ModulesMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    iVar11 = param_1->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    DefaultConstructItems<TraceServices::FModuleInfo,int>(pFVar12,1);
    (**(code **)*puVar6)(puVar6,pFVar12);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d497caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetAvailableModulesEx @ 14d497cd0

void __thiscall
TraceServices::FModuleService::GetAvailableModulesEx
          (FModuleService *this,
          TArray<TraceServices::FModuleInfoEx,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  uVar14 = *(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar13 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar14,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ModulesMap).field_0x10;
  uVar14 = 1;
  iVar3 = *(int *)&(this->ModulesMap).field_0x28;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ModulesMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d497ded;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar14 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar15 + -1 + (int)lVar10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14d497ded:
  uVar12 = *(uint *)&(this->ModulesMap).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar14,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  uVar14 = uVar12 & 0xffffffe0;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ModulesMap).field_0x8 -
                       *(int *)&(this->ModulesMap).field_0x34);
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->ModulesMap).field_0x28;
  if (uVar12 != uVar4) {
    puVar16 = *(undefined1 **)&(this->ModulesMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->ModulesMap).field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d497f10;
      uVar12 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d497f10:
  do {
    if (*(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->ModulesMap).field_0x10))
    {
                    /* WARNING: Could not recover jumptable at 0x00014d498070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)&this->ModulesMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    iVar13 = param_1->ArrayNum;
    if (iVar13 == param_1->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar13 + 1;
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x18;
    DefaultConstructItems<TraceServices::FModuleInfoEx,int>(pFVar1,1);
    (**(code **)*puVar5)(puVar5,pFVar1);
    uVar14 = ((uint)((ulonglong)puVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar5 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    if (*(int *)&(this->EnabledModules).Elements.field_0x8 !=
        *(int *)&(this->EnabledModules).Elements.field_0x34) {
      FVar6 = (this->EnabledModules).Hash.SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&(this->EnabledModules).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar6;
      }
      iVar13 = *(int *)((longlong)FVar11 +
                       (ulonglong)((this->EnabledModules).HashSize - 1U & (uVar14 >> 0x10 ^ uVar14))
                       * 4);
      if (iVar13 != -1) {
        lVar10 = *(longlong *)&(this->EnabledModules).Elements;
        do {
          if (*(undefined8 **)(lVar10 + (longlong)iVar13 * 0x10) == puVar5) goto LAB_14d49801a;
          iVar13 = *(int *)(lVar10 + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    iVar13 = -1;
LAB_14d49801a:
    pFVar1[0x10] = (FScriptContainerElement)(iVar13 != -1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetEnabledModules @ 14d498190

void __thiscall
TraceServices::FModuleService::GetEnabledModules
          (FModuleService *this,
          TArray<TraceServices::FModuleInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  uVar12 = *(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->EnabledModules).Elements.field_0x28;
  puVar2 = &(this->EnabledModules).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar16 = *puVar15;
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d4982ae;
      uVar16 = puVar15[lVar9 + 1];
    }
    uVar12 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar13 + -1 + (int)lVar9;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14d4982ae:
  uVar16 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  uVar17 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar12,iVar10);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EnabledModules).Elements.field_0x8 -
                       *(int *)&(this->EnabledModules).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  if (uVar16 != uVar12) {
    puVar14 = *(undefined1 **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar10;
      uVar17 = uVar17 + 0x20;
      iVar10 = iVar10 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14d4983d0;
      uVar16 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_14d4983d0:
  while( true ) {
    if (*(int *)&(this->EnabledModules).Elements.field_0x8 -
        *(int *)&(this->EnabledModules).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TraceServices::IModule_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    puVar5 = *(undefined8 **)
              (*(longlong *)&(this->EnabledModules).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    iVar10 = param_1->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar10 + 1;
    pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    DefaultConstructItems<TraceServices::FModuleInfo,int>(pFVar11,1);
    (**(code **)*puVar5)(puVar5,pFVar11);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d498490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetEnabledModulesFromCommandLine @ 14d4984b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TraceServices::FModuleService::GetEnabledModulesFromCommandLine
          (FModuleService *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  wchar_t *pwVar7;
  TMap<FName,TraceServices::IModule_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>_>
  *pTVar8;
  TMap<FName,TraceServices::IModule_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>_>
  *pTVar9;
  bool bVar10;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  TMap<FName,TraceServices::IModule_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FName local_80;
  wchar_t *local_78;
  TMap<FName,TraceServices::IModule_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>_>
  *local_70;
  TMap<FName,TraceServices::IModule_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  iVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (param_1 != (wchar_t *)0x0) {
    lpCriticalSection = &this->CriticalSection;
    local_78 = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Initialize(this);
    puVar2 = &(this->ModulesMap).field_0x10;
    uStack_a4 = 1;
    iVar3 = *(int *)&(this->ModulesMap).field_0x28;
    local_b0 = &this->ModulesMap;
    local_90 = 0;
    iStack_94 = iVar14;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->ModulesMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar2;
      }
      uVar18 = *puVar17;
      local_90 = 0;
      iVar14 = 0;
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar14;
        local_90 = local_90 + 0x20;
        iVar14 = iVar14 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d4985ce;
        uVar18 = puVar17[lVar13 + 1];
      }
      uStack_a4 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_a4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_b4 = (int)lVar13;
      iStack_94 = local_90 + -1 + local_b4;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_14d4985ce:
    iStack_88 = *(int *)&(this->ModulesMap).field_0x8 - *(int *)&(this->ModulesMap).field_0x34;
    uVar18 = *(uint *)&(this->ModulesMap).field_0x28;
    TStack_60._padding_ = CONCAT44(uStack_a4,iVar14);
    uStack_98 = 0xffffffff;
    uVar19 = uVar18 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iStack_94;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_60._28_4_ = iStack_94;
    TStack_60.BaseBitIndex = local_90;
    uStack_40 = CONCAT44(uStack_84,iStack_88);
    iStack_a8 = iVar14;
    local_a0 = puVar2;
    iStack_8c = iStack_94;
    local_70 = local_b0;
    local_68 = local_b0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar6)();
      return pTVar11;
    }
    pTVar8 = local_70;
    pwVar7 = local_78;
    uVar4 = *(uint *)&(this->ModulesMap).field_0x28;
    if (uVar18 != uVar4) {
      puVar16 = *(undefined1 **)&(this->ModulesMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14d4986f0;
        uVar18 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar18 = (int)lVar13 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_14d4986f0:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::IModule_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      lVar13 = (longlong)TStack_60.CurrentBitIndex;
      if (((TStack_60.CurrentBitIndex == uVar18) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar8)
         ) break;
      lVar5 = *(longlong *)pTVar9;
      pwVar12 = (wchar_t *)(**(code **)(**(longlong **)(lVar5 + 8 + lVar13 * 0x18) + 0x18))();
      if ((pwVar12 != (wchar_t *)0x0) && (bVar10 = FParse::Param(pwVar7,pwVar12), bVar10)) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (__return_storage_ptr__,&local_80,(bool *)(lVar5 + lVar13 * 0x18));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetModuleLoggers @ 14d4988c0

TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TraceServices::FModuleService::GetModuleLoggers
          (FModuleService *this,
          TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  TTuple<FName,TraceServices::IModule_*> *pTVar2;
  
  lpCriticalSection = &this->CriticalSection;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Initialize(this);
    pTVar2 = TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
                     *)&this->ModulesMap,*param_1);
    if ((pTVar2 != (TTuple<FName,TraceServices::IModule_*> *)0x0) &&
       (plVar1 = *(longlong **)&pTVar2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 14d498a60

void __thiscall TraceServices::FModuleService::Initialize(FModuleService *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TPairInitializer<FName_const_&,TraceServices::IModule_*_const_&> local_res10;
  longlong *local_res20;
  ulonglong local_78;
  ForAnyElementType local_70;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong **local_48;
  
  if (this->bIsInitialized == false) {
    pIVar8 = IModularFeatures::Get();
    FVar4 = ModuleFeatureName;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    uStack_64 = 0;
    iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,ModuleFeatureName);
    uVar10 = 0;
    if (0 < iVar7) {
      do {
        lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar4,uVar10);
        local_78 = lVar9 - 8;
        if (lVar9 == 0) {
          local_78 = 0;
        }
        if (((local_70.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)(int)uStack_64 * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_68 == uStack_64) {
          local_68 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_70,(int *)&uStack_64);
        }
        uVar1 = local_68 + 1;
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
        *(ulonglong *)(local_70.Data + (longlong)(int)local_68 * 8) = local_78;
        local_68 = uVar1;
      } while ((int)uVar12 < iVar7);
    }
    uVar1 = local_68;
    uVar10 = (ulonglong)(int)local_68;
    pFVar2 = local_70.Data + uVar10 * 8;
    FVar11.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar10 != uVar1) {
        `TCheckedPointerIterator<TraceServices::IModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar11.Data == pFVar2) break;
      local_res20 = *(longlong **)FVar11.Data;
      local_60 = 0;
      local_58 = 0;
      (**(code **)*local_res20)(local_res20,&local_60);
      local_50 = &local_60;
      local_48 = &local_res20;
      TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TraceServices::IModule_*_const_&>_>
                ((TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
                  *)&this->ModulesMap,&local_res10,(bool *)&local_50);
      cVar6 = (**(code **)(*local_res20 + 8))();
      if (cVar6 != '\0') {
        TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
        ::Emplace<TraceServices::IModule_*_const_&>
                  (&this->EnabledModules,(IModule **)&local_res10.Value,(bool *)&local_res20);
      }
      uVar10 = (ulonglong)local_68;
      FVar11.Data = FVar11.Data + 8;
    }
    this->bIsInitialized = true;
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  return;
}

// OnAnalysisBegin @ 14d498d30

void __thiscall
TraceServices::FModuleService::OnAnalysisBegin(FModuleService *this,IAnalysisSession *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  IAnalysisSession *pIVar8;
  TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  IAnalysisSession *local_res10;
  FLLMScope local_res18 [2];
  int local_res20;
  FName local_b8;
  FMemScope local_b0;
  TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,true
            );
  local_b8 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_b8,true);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  iVar4 = *(int *)&(this->EnabledModules).Elements.field_0x28;
  puVar1 = &(this->EnabledModules).Elements.field_0x10;
  iStack_a0 = 0;
  pTVar2 = &this->EnabledModules;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14d498e4e;
      uVar12 = puVar15[lVar11 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_8c = local_88 + -1 + local_res20;
    if (iVar4 < iStack_8c) {
      iStack_8c = iVar4;
    }
  }
LAB_14d498e4e:
  iStack_80 = *(int *)&(this->EnabledModules).Elements.field_0x8 -
              *(int *)&(this->EnabledModules).Elements.field_0x34;
  uVar12 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  uStack_90 = 0xffffffff;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = local_res10;
  uVar5 = *(uint *)&(this->EnabledModules).Elements.field_0x28;
  if (uVar12 != uVar5) {
    puVar14 = *(undefined1 **)&(this->EnabledModules).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d498f60;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14d498f60:
  while( true ) {
    pTVar9 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TraceServices::IModule_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    plVar6 = *(longlong **)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,pIVar8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetModuleEnabled @ 14d499890

void __thiscall
TraceServices::FModuleService::SetModuleEnabled(FModuleService *this,FName *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IModule *pIVar1;
  int iVar2;
  TTuple<FName,TraceServices::IModule_*> *pTVar3;
  uint uVar4;
  bool *pbVar5;
  ForElementType<FSetElementId> FVar6;
  bool *pbVar7;
  bool *pbVar8;
  IModule *local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Initialize(this);
  pTVar3 = TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TraceServices::IModule_*>,TDefaultMapHashableKeyFuncs<FName,TraceServices::IModule_*,0>,FDefaultSetAllocator>
                   *)&this->ModulesMap,*param_1);
  pbVar7 = (bool *)0x0;
  pbVar8 = (bool *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,TraceServices::IModule_*> *)0x0) {
    pbVar8 = pbVar7;
  }
  if (pbVar8 != (bool *)0x0) {
    pIVar1 = *(IModule **)pbVar8;
    uVar4 = ((uint)((ulonglong)pIVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    pbVar5 = pbVar7;
    if (*(int *)&(this->EnabledModules).Elements.field_0x8 !=
        *(int *)&(this->EnabledModules).Elements.field_0x34) {
      FVar6 = (this->EnabledModules).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->EnabledModules).Hash;
      }
      iVar2 = *(int *)((longlong)FVar6 +
                      (ulonglong)((this->EnabledModules).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                      4);
      if (iVar2 != -1) {
        do {
          pbVar5 = (bool *)((longlong)iVar2 * 0x10 + *(longlong *)&(this->EnabledModules).Elements);
          if (*(IModule **)pbVar5 == pIVar1) break;
          iVar2 = *(int *)(pbVar5 + 8);
          pbVar5 = pbVar7;
        } while (iVar2 != -1);
      }
    }
    if (param_2 != (pbVar5 != (bool *)0x0)) {
      if (param_2) {
        TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
        ::Emplace<TraceServices::IModule_*_const_&>(&this->EnabledModules,&local_res8,pbVar8);
      }
      else {
        TSet<TraceServices::IModule_*,DefaultKeyFuncs<TraceServices::IModule_*,0>,FDefaultSetAllocator>
        ::Remove(&this->EnabledModules,pIVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4999ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

