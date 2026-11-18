// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FStatGroupEnableManager @ 1419d2ca0

void __thiscall FStatGroupEnableManager::~FStatGroupEnableManager(FStatGroupEnableManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->EnableForNewGroup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnableForNewGroup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnableForNewGroup);
  DestructItems<TArray<TStatIdData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TStatIdData,TSizedDefaultAllocator<32>_> *)
             (this->StatIDs).AllocatorInstance.Data,(this->StatIDs).ArrayNum);
  pFVar2 = (this->StatIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  *(undefined4 *)&(this->HighPerformanceEnable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HighPerformanceEnable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatGroupEnableManager::FGroupEnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatGroupEnableManager::FGroupEnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatGroupEnableManager::FGroupEnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HighPerformanceEnable);
  this->_padding_ = (longlong)&___7IStatGroupEnableManager__6B_;
  return;
}

// CheckGroup @ 1419e4780

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FStatGroupEnableManager::CheckGroup(FStatGroupEnableManager *this,wchar_t **param_1,bool param_2)

{
  FString *pFVar1;
  FGroupEnable *pFVar2;
  ForAnyElementType FVar3;
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  FName local_res8;
  undefined1 local_res20 [8];
  FName local_68;
  FString local_60;
  undefined1 local_50 [8];
  undefined1 *local_48;
  FString local_40;
  
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_res20[0] = in_R9B;
  FParse::Token((wchar_t **)CONCAT71(in_register_00000081,param_2),&local_60,false,L'\0');
  pFVar1 = ::FString::FString(&local_40,L"STATGROUP_");
  ::FString::ConcatFF((FString *)local_50,pFVar1,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  local_60.Data.ArrayNum = (int)local_48;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_50;
  local_50 = (undefined1  [8])0x0;
  local_48 = (undefined1 *)0x0;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar3.Data = local_60.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_68,(wchar_t *)FVar3.Data);
  pFVar2 = TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
           ::Find((TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
                   *)&this->HighPerformanceEnable,local_68);
  if (pFVar2 == (FGroupEnable *)0x0) {
    local_50 = (undefined1  [8])&local_68;
    local_48 = local_res20;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)&this->EnableForNewGroup,
               (TPairInitializer<FName_const_&,bool_const_&> *)&local_res8,(bool *)local_50);
    ListGroups(this,false);
    if (3 < (byte)LogStatGroupEnableManager._0_1_) {
      ::FName::ToString(&local_68,&local_40);
      UE::Logging::Private::BasicLog<4>
                (&`public:_class_FName___cdecl_FStatGroupEnableManager::CheckGroup(wchar_t_const*___ptr64&___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    *param_1 = (wchar_t *)0x0;
  }
  else {
    (**(code **)(this->_padding_ + 0x10))(this,local_68,local_res20[0]);
    local_res8 = local_68;
    pFVar2 = TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
             ::Find((TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
                     *)&this->HighPerformanceEnable,local_68);
    if ((pFVar2 != (FGroupEnable *)0x0) && (3 < (byte)LogStatGroupEnableManager._0_1_)) {
      ::FName::ToString(&local_res8,&local_40);
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FStatGroupEnableManager::ListGroup(FName)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    *param_1 = (wchar_t *)local_68;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetHighPerformanceEnableForStat @ 1419fef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FStatGroupEnableManager::GetHighPerformanceEnableForStat
          (FStatGroupEnableManager *this,FName param_1,char *param_2,char *param_3,bool param_4,
          bool param_5,Type param_6,wchar_t *param_7,bool param_8,bool param_9,
          EMemoryCounterRegion param_10)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_00;
  ushort uVar1;
  void *pvVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  ENullTerminatedString EVar7;
  int iVar8;
  TStatId TVar9;
  FGroupEnable *pFVar10;
  TStatIdData **ppTVar11;
  TStatIdData **ppTVar12;
  TTuple<FName,bool> *pTVar13;
  FString *pFVar14;
  FScriptContainerElement *pFVar15;
  FNameEntry *pFVar16;
  size_t sVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  TPairInitializer<FName_const_&,TStatIdData_*_const_&> *pTVar21;
  FName FVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  FName **ppFVar25;
  ENullTerminatedString EVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  wchar_t *pwVar29;
  uint uVar30;
  int *piVar31;
  longlong lVar32;
  ulong64 _Size;
  FName local_res18 [2];
  undefined7 in_stack_00000029;
  undefined7 in_stack_00000049;
  int in_stack_00000060;
  undefined1 auStackY_7d8 [32];
  int local_798;
  FName local_790;
  FLLMScope local_788 [2];
  FName local_780;
  FScriptContainerElement *local_778;
  TPairInitializer<FName_const_&,FStatGroupEnableManager::FGroupEnable_&&> local_770;
  wchar_t *local_760;
  FGroupEnable *local_758;
  FName local_750;
  char *local_748;
  FMemScope local_740;
  FNameEntryId local_738;
  uint local_734;
  uint local_730;
  uint uStack_72c;
  uint local_728;
  uint uStack_724;
  undefined1 local_720 [8];
  FName local_718;
  size_t local_710;
  size_t local_708;
  ulonglong local_700;
  FStatGroupEnableManager *local_6f8;
  FString local_6f0;
  FName *local_6e0;
  TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_6d8;
  FName *local_6d0;
  FGroupEnable **local_6c8;
  FName *local_6c0;
  FGroupEnable **local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_648;
  void *local_608;
  undefined4 local_600;
  TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_5f8;
  void *local_5b8;
  undefined4 local_5b0;
  undefined1 local_5a8;
  undefined1 local_5a7;
  FScriptContainerElement local_598 [128];
  ForAnyElementType local_518;
  FScriptContainerElement *local_510;
  int local_508;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_4f8;
  char local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  local_760 = (wchar_t *)CONCAT71(in_stack_00000049,param_8);
  pFVar23 = (FScriptContainerElement *)0x0;
  uVar30 = 0;
  local_770.Key._0_4_ = 0;
  local_res18[0] = (FName)param_2;
  local_750 = param_1;
  local_748 = param_3;
  local_6f8 = this;
  FLLMScope::FLLMScope(local_788,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_740,Stats,true);
  lpCriticalSection = &this->SynchronizationObject;
  local_778 = (FScriptContainerElement *)0x0;
  local_798 = 0;
  pwVar29 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
    return (TStatId)TVar9.StatIdPtr;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FStatNameAndInfo::ToLongName
            ((FName)&local_738,(char *)local_res18[0],param_3,
             (wchar_t *)CONCAT71(in_stack_00000029,param_4),param_8);
  uVar18 = ((uint)param_7 | 0x80) << 9 | local_734 & 0xfffff1ff;
  uVar28 = uVar18 | 0x200000;
  if ((undefined1)param_6 == Invalid) {
    uVar28 = uVar18 & 0xffdfffff;
  }
  uStack_72c = uVar28 | 0x40000;
  if (!param_9) {
    uStack_72c = uVar28 & 0xfffbffff;
  }
  if (in_stack_00000060 != 0) {
    uStack_72c = uStack_72c & 0xf0ffffff | in_stack_00000060 << 0x18 | 0x80000;
  }
  if ((wchar_t *)CONCAT71(in_stack_00000029,param_4) == (wchar_t *)FStatNameAndInfo::GpuStatCategory
     ) {
    uStack_72c = uStack_72c | 0x20000;
  }
  local_730 = local_738.Value;
  local_790.Number = uStack_72c;
  local_790.ComparisonIndex.Value = local_738.Value;
  ::FName::FName(&local_780,param_3);
  pFVar10 = TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
            ::Find((TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
                    *)&this->HighPerformanceEnable,local_780);
  local_758 = pFVar10;
  if (pFVar10 != (FGroupEnable *)0x0) {
    if (pFVar10->DefaultEnable != param_5) {
      ::FName::ToString(&local_780,&local_6a0);
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_struct_TStatId___cdecl_FStatGroupEnableManager::GetHighPerformanceEnableForStat(FName,char_const*___ptr64,char_const*___ptr64,bool,bool,EStatDataType::Type,wchar_t_const*___ptr64,bool,bool,FWindowsPlatformMemory::EMemoryCounterRegion)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
    }
    ppTVar11 = TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
               ::Find((TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
                       *)pFVar10,local_790);
    ppTVar12 = TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
               ::Find((TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
                       *)&pFVar10->AlwaysEnabledNamesInThisGroup,local_790);
    if (ppTVar11 == (TStatIdData **)0x0) {
      if (ppTVar12 == (TStatIdData **)0x0) goto LAB_1419ff3c1;
      *(TStatIdData **)local_750 = *ppTVar12;
    }
    else {
      if (ppTVar12 != (TStatIdData **)0x0) {
        ::FName::ToString(&local_790,&local_690);
        UE::Logging::Private::BasicFatalLog
                  (&`public:_virtual_struct_TStatId___cdecl_FStatGroupEnableManager::GetHighPerformanceEnableForStat(FName,char_const*___ptr64,char_const*___ptr64,bool,bool,EStatDataType::Type,wchar_t_const*___ptr64,bool,bool,FWindowsPlatformMemory::EMemoryCounterRegion)___ptr64'
                    ::__l34::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_690.Data.AllocatorInstance.Data);
        }
      }
      *(TStatIdData **)local_750 = *ppTVar11;
    }
    FVar22 = local_750;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    goto LAB_1419ffb13;
  }
  if ((param_5) || ((undefined1)param_6 == Invalid)) {
    local_5a8 = 1;
  }
  else {
    local_5a8 = 0;
  }
  local_6e0 = &local_780;
  local_648._48_4_ = 0xffffffff;
  local_6d8 = &local_648;
  local_5f8._48_4_ = 0xffffffff;
  local_648._0_8_ = 0;
  local_648._8_8_ = 0;
  local_648._32_8_ = 0;
  local_648._40_4_ = 0;
  local_648._44_4_ = 0x80;
  local_648._52_4_ = 0;
  local_608 = (void *)0x0;
  local_600 = 0;
  local_5f8._0_8_ = 0;
  local_5f8._8_8_ = 0;
  local_5f8._32_8_ = 0;
  local_5f8._40_4_ = 0;
  local_5f8._44_4_ = 0x80;
  local_5f8._52_4_ = 0;
  local_5b8 = (void *)0x0;
  local_5b0 = 0;
  local_5a7 = local_5a8;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FStatGroupEnableManager::FGroupEnable_&&>_>
            ((TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
              *)&this->HighPerformanceEnable,&local_770,(bool *)&local_6e0);
  local_5b0 = 0;
  pFVar10 = (FGroupEnable *)
            (*(longlong *)&this->HighPerformanceEnable + (longlong)(int)local_770.Key * 0xb8 + 8);
  local_758 = pFVar10;
  if (local_5b8 != (void *)0x0) {
    FMemory::Free(local_5b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_5f8);
  local_600 = 0;
  if (local_608 != (void *)0x0) {
    FMemory::Free(local_608);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TStatIdData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_648);
  FVar22 = local_780;
  this_00 = &this->EnableForNewGroup;
  uVar28 = ::GetTypeHash(local_780.ComparisonIndex.Value);
  if (*(int *)&(this->EnableForNewGroup).field_0x8 != *(int *)&(this->EnableForNewGroup).field_0x34)
  {
    puVar20 = *(undefined1 **)&(this->EnableForNewGroup).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->EnableForNewGroup).field_0x38;
    }
    iVar6 = *(int *)(puVar20 +
                    (ulonglong)
                    (*(int *)&(this->EnableForNewGroup).field_0x48 - 1U & FVar22.Number + uVar28) *
                    4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x14) == FVar22) {
          pTVar13 = TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                            *)this_00,local_780);
          if ((pTVar13 == (TTuple<FName,bool> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
            return (TStatId)TVar9.StatIdPtr;
          }
          pFVar10->CurrentEnable = (bool)pTVar13->field_0x8;
          local_718 = local_780;
          if (*(int *)&(this->EnableForNewGroup).field_0x8 !=
              *(int *)&(this->EnableForNewGroup).field_0x34) {
            uVar28 = ::GetTypeHash(local_780.ComparisonIndex.Value);
            TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                                 *)this_00,local_780.Number + uVar28,&local_718);
          }
          goto LAB_1419ff3c1;
        }
        iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  if (this->UseEnableForNewGroups != false) {
    pFVar10->CurrentEnable = this->EnableForNewGroups;
  }
LAB_1419ff3c1:
  iVar6 = (this->StatIDs).ArrayNum;
  if (iVar6 == 0) {
LAB_1419ff436:
    iVar6 = (this->StatIDs).ArrayNum;
    if (iVar6 == (this->StatIDs).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->StatIDs).AllocatorInstance,&(this->StatIDs).ArrayMax);
    }
    pFVar27 = (this->StatIDs).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    (this->StatIDs).ArrayNum = iVar6 + 1;
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)(pFVar27 + 8) = 0;
    if (*(int *)(pFVar27 + 0xc) < 0x4000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x4000,(ForAnyElementType *)pFVar27,*(int *)(pFVar27 + 8),
                 (int *)(pFVar27 + 0xc));
    }
  }
  else {
    uVar28 = uVar30;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar28 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
      return (TStatId)TVar9.StatIdPtr;
    }
    if (*(int *)((this->StatIDs).AllocatorInstance.Data +
                (longlong)(this->StatIDs).ArrayNum * 0x10 + -8) == 0x4000) goto LAB_1419ff436;
  }
  piVar31 = &(this->StatIDs).ArrayNum;
  iVar6 = *piVar31;
  uVar28 = iVar6 - 1;
  EVar26 = No;
  if (pFVar10->CurrentEnable == false) {
    EVar7 = EVar26;
    if ((int)uVar28 < iVar6) {
      EVar7 = ~uVar28 >> 0x1f;
    }
    if ((EVar7 == No) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
      return (TStatId)TVar9.StatIdPtr;
    }
    iVar6 = *piVar31;
    pFVar27 = (this->StatIDs).AllocatorInstance.Data;
    iVar8 = *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -8);
    if (iVar8 == *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)(pFVar27 + (longlong)iVar6 * 0x10 + -0x10),
                         (int *)(pFVar27 + (longlong)iVar6 * 0x10 + -4));
    }
    *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -8) = iVar8 + 1;
    pFVar10 = (FGroupEnable *)
              (*(longlong *)(pFVar27 + (longlong)iVar6 * 0x10 + -0x10) + (longlong)iVar8 * 0x18);
    DefaultConstructItems<TStatIdData,int>(pFVar10,1);
  }
  else {
    EVar7 = EVar26;
    if ((int)uVar28 < iVar6) {
      EVar7 = ~uVar28 >> 0x1f;
    }
    if ((EVar7 == No) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
      return (TStatId)TVar9.StatIdPtr;
    }
    iVar6 = *piVar31;
    pFVar27 = (this->StatIDs).AllocatorInstance.Data;
    local_728 = (uint)local_790.ComparisonIndex.Value;
    uStack_724 = local_790.Number;
    iVar8 = *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -8);
    if (iVar8 == *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)(pFVar27 + (longlong)iVar6 * 0x10 + -0x10),
                         (int *)(pFVar27 + (longlong)iVar6 * 0x10 + -4));
    }
    *(int *)(pFVar27 + (longlong)iVar6 * 0x10 + -8) = iVar8 + 1;
    pFVar10 = (FGroupEnable *)
              (*(longlong *)(pFVar27 + (longlong)iVar6 * 0x10 + -0x10) + (longlong)iVar8 * 0x18);
    *(ulonglong *)&pFVar10->NamesInThisGroup = CONCAT44(uStack_724,local_728);
    *(undefined8 *)&(pFVar10->NamesInThisGroup).field_0x8 = 0;
    *(undefined8 *)&(pFVar10->NamesInThisGroup).field_0x10 = 0;
  }
  bVar5 = local_760 == (wchar_t *)0x0;
  local_770.Value = pFVar10;
  if (bVar5) {
    pFVar14 = ::FName::GetPlainNameString(local_res18,&local_680);
  }
  else {
    pFVar14 = ::FString::FString(&local_670,local_760);
  }
  if (&local_660 != pFVar14) {
    local_778 = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_798 = (pFVar14->Data).ArrayNum;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if ((bVar5) && (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_680.Data.AllocatorInstance.Data);
  }
  if ((!bVar5) && (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_670.Data.AllocatorInstance.Data);
  }
  uVar28 = local_798 - 1;
  if (local_798 == 0) {
    uVar28 = uVar30;
  }
  uVar18 = uVar28 + 1;
  if (((local_798 == 0) || (local_798 == 0)) ||
     (pFVar27 = pFVar23, pwVar29 = (wchar_t *)local_778, local_778 != (FScriptContainerElement *)0x0
     )) {
    uVar30 = uVar18;
    if ((0 < (int)uVar18) && (*(short *)((longlong)pwVar29 + (longlong)(int)uVar28 * 2) == 0)) {
      uVar30 = uVar28;
    }
    pFVar27 = (FScriptContainerElement *)pwVar29;
    if (uVar30 != 0xffffffff) goto LAB_1419ff708;
    local_760 = (wchar_t *)wcslen(pwVar29);
  }
  else {
LAB_1419ff708:
    local_760 = (wchar_t *)(ulonglong)uVar30;
    pwVar29 = (wchar_t *)pFVar27;
  }
  local_708 = (size_t)(int)local_760;
  local_700 = local_708 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_700;
  local_710 = SUB168(ZEXT816(2) * auVar4,0);
  if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
    local_710 = 0xffffffffffffffff;
  }
  pFVar15 = operator_new__(local_710);
  pFVar27 = pFVar23;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    memset(pFVar15,0,local_710);
    pFVar27 = pFVar15;
  }
  wcsncpy((wchar_t *)pFVar27,pwVar29,local_708);
  *(undefined2 *)(pFVar27 + local_700 * 2 + -2) = 0;
  puVar20 = &((local_770.Value)->NamesInThisGroup).field_0x8;
  if ((undefined8 *)puVar20 != &local_6a8) {
    pvVar2 = *(void **)puVar20;
    *(FScriptContainerElement **)puVar20 = pFVar27;
    operator_delete__(pvVar2);
    pFVar27 = pFVar23;
  }
  iVar6 = (int)local_760;
  operator_delete__(pFVar27);
  local_4f8._padding_ = 0;
  if (local_798 == 0) {
    pwVar29 = L"";
LAB_1419ff7f9:
    if ((0 < (int)uVar18) && (*(short *)((longlong)pwVar29 + (longlong)(int)uVar28 * 2) == 0)) {
      EVar26 = Yes;
      uVar18 = uVar28;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_4f8,pwVar29,uVar18,EVar26);
  }
  else {
    pwVar29 = (wchar_t *)local_778;
    if (local_778 != (FScriptContainerElement *)0x0) goto LAB_1419ff7f9;
    local_4f8.Ptr = (char *)0x0;
    local_4f8.StringLength = 0;
  }
  iVar8 = local_4f8.StringLength;
  lVar32 = (longlong)local_4f8.StringLength;
  _Size = lVar32 + 1;
  pFVar15 = operator_new__(_Size);
  pFVar27 = pFVar23;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    memset(pFVar15,0,_Size);
    pFVar27 = pFVar15;
  }
  strncpy((char *)pFVar27,local_4f8.Ptr,_Size);
  pFVar27[lVar32] = (FScriptContainerElement)0x0;
  puVar20 = &((local_770.Value)->NamesInThisGroup).field_0x10;
  if ((undefined8 *)puVar20 != &local_6b0) {
    pvVar2 = *(void **)puVar20;
    *(FScriptContainerElement **)puVar20 = pFVar27;
    operator_delete__(pvVar2);
    pFVar27 = pFVar23;
  }
  operator_delete__(pFVar27);
  if ((void *)local_4f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_4f8._padding_);
  }
  LOCK();
  (local_6f8->MemoryCounter).Counter = (local_6f8->MemoryCounter).Counter + iVar6 * 2 + iVar8;
  UNLOCK();
  if ((undefined1)param_6 == Invalid) {
    ppFVar25 = &local_6c0;
    local_6b8 = &local_770.Value;
    pFVar10 = (FGroupEnable *)&local_758->AlwaysEnabledNamesInThisGroup;
    pTVar21 = (TPairInitializer<FName_const_&,TStatIdData_*_const_&> *)(local_720 + 4);
    local_6c0 = &local_790;
  }
  else {
    ppFVar25 = &local_6d0;
    local_6c8 = &local_770.Value;
    pTVar21 = (TPairInitializer<FName_const_&,TStatIdData_*_const_&> *)local_720;
    pFVar10 = local_758;
    local_6d0 = &local_790;
  }
  TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TStatIdData_*_const_&>_>
            ((TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
              *)pFVar10,pTVar21,(bool *)ppFVar25);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if ((!param_9) && ((uint)param_7 - 2 < 2)) {
    pFVar16 = ::FName::GetDisplayNameEntry(local_res18);
    if (pFVar16.bIsWide == 0) {
      ::FName::GetPlainANSIString(local_res18,&local_458);
      pFVar23 = (FScriptContainerElement *)L"";
      if (local_798 != 0) {
        pFVar23 = local_778;
      }
      FStatsTrace::DeclareStat
                (&local_790,local_458,(wchar_t *)pFVar23,local_748,(uint)param_7 == 3,
                 in_stack_00000060 != 0,(bool)(undefined1)param_6);
    }
    else {
      ::FName::GetPlainNameString(local_res18,&local_6f0);
      local_518.Data = (FScriptContainerElement *)0x0;
      pFVar27 = (FScriptContainerElement *)L"";
      if (local_798 != 0) {
        pFVar27 = local_778;
      }
      if (local_6f0.Data.ArrayNum == 0) {
        pwVar29 = L"";
LAB_1419ff9e7:
        sVar17 = wcslen(pwVar29);
        local_508 = (int)sVar17;
        uVar30 = local_508 + 1;
        FVar24.Data = pFVar23;
        if (0x80 < uVar30) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_518,0,uVar30,1);
          FVar24.Data = local_518.Data;
        }
        pFVar15 = local_598;
        if (FVar24.Data != (FScriptContainerElement *)0x0) {
          pFVar15 = FVar24.Data;
        }
        bVar5 = false;
        pFVar19 = pFVar23;
        local_510 = pFVar15;
        if (0 < (int)uVar30) {
          do {
            uVar1 = *(ushort *)((longlong)pwVar29 + (longlong)pFVar19 * 2);
            pFVar19[(longlong)pFVar15] = SUB21(uVar1,0);
            pFVar19 = pFVar19 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while ((longlong)pFVar19 < (longlong)(int)uVar30);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)((longlong)pwVar29 + (longlong)pFVar23 * 2)) {
                pFVar23[(longlong)pFVar15] = (FScriptContainerElement)0x3f;
              }
              pFVar23 = pFVar23 + 1;
            } while ((longlong)pFVar23 < (longlong)(int)uVar30);
          }
        }
        if ((pFVar15 + (int)uVar30 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.StatIdPtr = (TStatIdData *)(*pcVar3)();
          return (TStatId)TVar9.StatIdPtr;
        }
      }
      else {
        pwVar29 = (wchar_t *)local_6f0.Data.AllocatorInstance.Data;
        if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_1419ff9e7;
        local_510 = (FScriptContainerElement *)0x0;
        local_508 = 0;
      }
      FStatsTrace::DeclareStat
                (&local_790,(char *)local_510,(wchar_t *)pFVar27,local_748,(uint)param_7 == 3,
                 in_stack_00000060 != 0,(bool)(undefined1)param_6);
      if (local_518.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data);
      }
      if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
      }
    }
  }
  FVar22 = local_750;
  *(FGroupEnable **)local_750 = local_770.Value;
  if (local_778 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778);
  }
LAB_1419ffb13:
  FMemScope::~FMemScope(&local_740);
  FLLMScope::~FLLMScope(local_788);
  return (TStatId)FVar22;
}

// ListGroups @ 141a08780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatGroupEnableManager::ListGroups(FStatGroupEnableManager *this,bool param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TMap<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
  *pTVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  longlong *plVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  TMap<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  FString local_70;
  undefined4 local_54;
  FString local_50;
  FString local_40;
  
  local_98 = &this->HighPerformanceEnable;
  iVar7 = 0;
  iVar2 = *(int *)&(this->HighPerformanceEnable).field_0x28;
  TStack_f0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->HighPerformanceEnable).field_0x10;
  TStack_f0.BaseBitIndex = 0;
  uVar5 = 1;
  TStack_f0.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->HighPerformanceEnable).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_f0.Array;
    }
    uVar3 = *puVar8;
    while (uVar3 == 0) {
      lVar6 = (longlong)iVar7;
      TStack_f0.BaseBitIndex = TStack_f0.BaseBitIndex + 0x20;
      iVar7 = iVar7 + 1;
      TStack_f0.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_141a0881a;
      uVar3 = puVar8[lVar6 + 1];
    }
    uVar5 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    TStack_f0.CurrentBitIndex = TStack_f0.BaseBitIndex + -1 + (int)lVar6;
    if (iVar2 < TStack_f0.CurrentBitIndex) {
      TStack_f0.CurrentBitIndex = iVar2;
    }
  }
LAB_141a0881a:
  TStack_f0._padding_ = CONCAT44(uVar5,iVar7);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_54;
  TStack_90._padding_ = TStack_f0._padding_;
  TStack_90.BaseBitIndex = TStack_f0.BaseBitIndex;
  TStack_90._28_4_ = local_54;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90.Array = TStack_f0.Array;
  TStack_90.CurrentBitIndex = TStack_f0.CurrentBitIndex;
  if (TStack_f0.CurrentBitIndex < iVar2) {
    do {
      iVar2 = TStack_90.CurrentBitIndex;
      pTVar4 = local_98;
      if (3 < (byte)LogStatGroupEnableManager._0_1_) {
        ::FName::ToString((FName *)((longlong)TStack_90.CurrentBitIndex * 0xb8 +
                                   *(longlong *)local_98),&local_50);
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FStatGroupEnableManager::ListGroups(bool)___ptr64'::__l5::
                    LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if (param_1) {
        iStack_c0 = 0;
        local_a8 = 0;
        plVar10 = (longlong *)(*(longlong *)pTVar4 + 8 + (longlong)iVar2 * 0xb8);
        uStack_bc = 1;
        iVar7 = (int)plVar10[5];
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar10 + 2);
        iStack_ac = 0;
        if (iVar7 != 0) {
          pTVar9 = TStack_f0.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar10[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)plVar10[4];
          }
          uVar5 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
          while (uVar5 == 0) {
            lVar6 = (longlong)iStack_c0;
            local_a8 = local_a8 + 0x20;
            iStack_c0 = iStack_c0 + 1;
            iStack_ac = iVar7;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
            goto LAB_141a0899b;
            uVar5 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar6 * 4 + 4);
          }
          uStack_bc = -uVar5 & uVar5;
          uVar1 = (ulonglong)uStack_bc * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iStack_ac = local_a8 + -1 + (int)lVar6;
          if (iVar7 < iStack_ac) {
            iStack_ac = iVar7;
          }
        }
LAB_141a0899b:
        uStack_b0 = 0xffffffff;
        uStack_a4 = local_54;
        TStack_f0._padding_ = CONCAT44(uStack_bc,iStack_c0);
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        TStack_f0._28_4_ = local_54;
        TStack_f0.BaseBitIndex = local_a8;
        local_c8 = plVar10;
        local_b8 = TStack_f0.Array;
        TStack_f0.CurrentBitIndex = iStack_ac;
        if (iStack_ac < iVar7) {
          do {
            if (3 < (byte)LogStatGroupEnableManager._0_1_) {
              ::FName::ToString((FName *)(*plVar10 + (longlong)TStack_f0.CurrentBitIndex * 0x18),
                                &local_40);
              UE::Logging::Private::BasicLog<4>
                        (&`public:_void___cdecl_FStatGroupEnableManager::ListGroups(bool)___ptr64'::
                          __l28::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
              if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_40.Data.AllocatorInstance.Data);
              }
            }
            TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
          } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
        }
        iStack_c0 = 0;
        plVar10 = (longlong *)(*(longlong *)pTVar4 + 0x58 + (longlong)iVar2 * 0xb8);
        local_a8 = 0;
        iVar2 = (int)plVar10[5];
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar10 + 2);
        uStack_bc = 1;
        iStack_ac = 0;
        if (iVar2 != 0) {
          pTVar9 = TStack_f0.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar10[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)plVar10[4];
          }
          uVar5 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
          while (uVar5 == 0) {
            lVar6 = (longlong)iStack_c0;
            local_a8 = local_a8 + 0x20;
            iStack_c0 = iStack_c0 + 1;
            iStack_ac = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
            goto LAB_141a08b1a;
            uVar5 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar6 * 4 + 4);
          }
          uStack_bc = -uVar5 & uVar5;
          uVar1 = (ulonglong)uStack_bc * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iStack_ac = local_a8 + -1 + (int)lVar6;
          if (iVar2 < iStack_ac) {
            iStack_ac = iVar2;
          }
        }
LAB_141a08b1a:
        uStack_b0 = 0xffffffff;
        uStack_a4 = local_54;
        TStack_f0._padding_ = CONCAT44(uStack_bc,iStack_c0);
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        TStack_f0._28_4_ = local_54;
        TStack_f0.BaseBitIndex = local_a8;
        local_c8 = plVar10;
        local_b8 = TStack_f0.Array;
        TStack_f0.CurrentBitIndex = iStack_ac;
        if (iStack_ac < iVar2) {
          do {
            if (3 < (byte)LogStatGroupEnableManager._0_1_) {
              ::FName::ToString((FName *)(*plVar10 + (longlong)TStack_f0.CurrentBitIndex * 0x18),
                                &local_70);
              UE::Logging::Private::BasicLog<4>
                        (&`public:_void___cdecl_FStatGroupEnableManager::ListGroups(bool)___ptr64'::
                          __l48::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
            }
            TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
          } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return;
}

// ResetHighPerformanceEnableForAllGroups @ 141a1a490

void __thiscall
FStatGroupEnableManager::ResetHighPerformanceEnableForAllGroups(FStatGroupEnableManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  TMap<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
  *pTVar7;
  int iVar8;
  longlong lVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  longlong *plVar11;
  int iVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  undefined4 local_2c;
  
  lpCriticalSection = &this->SynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  pTVar7 = &this->HighPerformanceEnable;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
              *)pTVar7);
  local_a0 = 0;
  stack0xffffffffffffff38 = local_98._16_16_;
  local_d8 = (longlong *)local_98._0_8_;
  auStack_d0._0_8_ = local_98._8_8_;
  local_b8 = local_78;
  pTStack_b0 = pTStack_70;
  uVar6 = local_98._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
              *)pTVar7;
  if ((int)local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    iVar12 = 1;
    uVar4 = local_98._28_4_;
    do {
      lVar9 = (longlong)(int)uVar4 * 0xb8;
      *(undefined1 *)(*local_d8 + 0xa9 + lVar9) =
           *(undefined1 *)((longlong)(int)uVar6 * 0xb8 + 0xa8 + *local_d8);
      TStack_130.BaseBitIndex = 0;
      plVar11 = (longlong *)(*local_d8 + 8 + lVar9);
      TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
      iVar1 = (int)plVar11[5];
      local_108 = plVar11;
      TStack_100.Array = TStack_130.Array;
      if (*(char *)(*local_d8 + 0xa8 + lVar9) == '\0') {
        iVar8 = 0;
        uVar4 = 1;
        iVar5 = 0;
        if (iVar1 != 0) {
          pTVar10 = TStack_130.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
          }
          uVar4 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
          while (uVar4 == 0) {
            lVar9 = (longlong)iVar8;
            TStack_130.BaseBitIndex = TStack_130.BaseBitIndex + 0x20;
            iVar8 = iVar8 + 1;
            uVar4 = 1;
            iVar5 = iVar1;
            if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_141a1a769;
            uVar4 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar4 = -uVar4 & uVar4;
          uVar6 = (ulonglong)uVar4 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar5 = TStack_130.BaseBitIndex + -1 + (int)lVar9;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
        }
LAB_141a1a769:
        TStack_130._padding_ = CONCAT44(uVar4,iVar8);
        TStack_130.CurrentBitIndex = iVar5;
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130._28_4_ = local_2c;
        TStack_100._padding_ = TStack_130._padding_;
        TStack_100.BaseBitIndex = TStack_130.BaseBitIndex;
        TStack_100._28_4_ = local_2c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100.CurrentBitIndex = iVar5;
        if (iVar5 < iVar1) {
          do {
            LOCK();
            **(TAtomic<FMinimalName> **)(*local_108 + 8 + (longlong)iVar5 * 0x18) =
                 TStatId::TStatId_NAME_None.Name;
            UNLOCK();
            TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
            iVar5 = TStack_100.CurrentBitIndex;
          } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
        }
      }
      else {
        iVar8 = 0;
        TStack_100.BaseBitIndex = 0;
        iVar5 = TStack_130.BaseBitIndex;
        uVar4 = 1;
        if (iVar1 != 0) {
          pTVar10 = TStack_130.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
          }
          uVar4 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
          while (uVar4 == 0) {
            lVar9 = (longlong)iVar8;
            TStack_100.BaseBitIndex = TStack_100.BaseBitIndex + 0x20;
            iVar8 = iVar8 + 1;
            iVar5 = iVar1;
            uVar4 = 1;
            if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_141a1a63b;
            uVar4 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar4 = -uVar4 & uVar4;
          uVar6 = (ulonglong)uVar4 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar5 = TStack_100.BaseBitIndex + -1 + (int)lVar9;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
        }
LAB_141a1a63b:
        TStack_100._padding_ = CONCAT44(uVar4,iVar8);
        TStack_100.CurrentBitIndex = iVar5;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100._28_4_ = local_4c;
        TStack_130._padding_ = TStack_100._padding_;
        TStack_130.BaseBitIndex = TStack_100.BaseBitIndex;
        TStack_130._28_4_ = local_4c;
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130.CurrentBitIndex = iVar5;
        if (iVar5 < iVar1) {
          do {
            LOCK();
            **(undefined8 **)(*plVar11 + 8 + (longlong)iVar5 * 0x18) =
                 *(undefined8 *)(*plVar11 + (longlong)iVar5 * 0x18);
            UNLOCK();
            TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
            iVar5 = TStack_130.CurrentBitIndex;
          } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar6 = (ulonglong)uStack_bc;
      uVar4 = uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar4) {
        uVar6 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_a8->HashSize < iVar12)) || (iVar12 < local_a8->HashSize)) {
        local_a8->HashSize = iVar12;
        TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + -1;
  UNLOCK();
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetHighPerformanceEnableForAllGroups @ 141a1fbb0

void __thiscall
FStatGroupEnableManager::SetHighPerformanceEnableForAllGroups
          (FStatGroupEnableManager *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  TMap<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
  *pTVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  int iVar10;
  longlong *plVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  undefined4 local_2c;
  
  lpCriticalSection = &this->SynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  pTVar8 = &this->HighPerformanceEnable;
  TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
              *)pTVar8);
  local_a0 = 0;
  stack0xffffffffffffff38 = local_98._16_16_;
  local_d8 = (longlong *)local_98._0_8_;
  auStack_d0._0_8_ = local_98._8_8_;
  local_b8 = local_78;
  pTStack_b0 = pTStack_70;
  uVar6 = local_98._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
              *)pTVar8;
  if ((int)local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    iVar10 = 1;
    uVar4 = local_98._28_4_;
    do {
      TStack_130.BaseBitIndex = 0;
      *(bool *)((longlong)(int)uVar6 * 0xb8 + 0xa9 + *local_d8) = param_1;
      TStack_130.CurrentBitIndex = 0;
      plVar11 = (longlong *)(*local_d8 + 8 + (longlong)(int)uVar4 * 0xb8);
      iVar1 = (int)plVar11[5];
      TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
      local_108 = plVar11;
      TStack_100.Array = TStack_130.Array;
      if (param_1) {
        TStack_100.BaseBitIndex = 0;
        uVar4 = 1;
        iVar5 = TStack_130.BaseBitIndex;
        if (iVar1 != 0) {
          pTVar9 = TStack_130.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
          }
          uVar4 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
          while (uVar4 == 0) {
            lVar7 = (longlong)TStack_130.CurrentBitIndex;
            TStack_100.BaseBitIndex = TStack_100.BaseBitIndex + 0x20;
            TStack_130.CurrentBitIndex = TStack_130.CurrentBitIndex + 1;
            uVar4 = 1;
            iVar5 = iVar1;
            if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < TStack_130.CurrentBitIndex)
            goto LAB_141a1fd5b;
            uVar4 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar7 * 4 + 4);
          }
          uVar4 = -uVar4 & uVar4;
          uVar6 = (ulonglong)uVar4 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar5 = TStack_100.BaseBitIndex + -1 + (int)lVar7;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
        }
LAB_141a1fd5b:
        TStack_100._padding_ = CONCAT44(uVar4,TStack_130.CurrentBitIndex);
        TStack_100.CurrentBitIndex = iVar5;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100._28_4_ = local_4c;
        TStack_130._padding_ = TStack_100._padding_;
        TStack_130.BaseBitIndex = TStack_100.BaseBitIndex;
        TStack_130._28_4_ = local_4c;
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130.CurrentBitIndex = iVar5;
        if (iVar5 < iVar1) {
          do {
            LOCK();
            **(undefined8 **)(*plVar11 + 8 + (longlong)iVar5 * 0x18) =
                 *(undefined8 *)(*plVar11 + (longlong)iVar5 * 0x18);
            UNLOCK();
            TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
            iVar5 = TStack_130.CurrentBitIndex;
          } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
        }
      }
      else {
        iVar5 = 0;
        uVar4 = 1;
        if (iVar1 != 0) {
          pTVar9 = TStack_130.Array;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
          }
          uVar4 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
          while (uVar4 == 0) {
            lVar7 = (longlong)iVar5;
            TStack_130.BaseBitIndex = TStack_130.BaseBitIndex + 0x20;
            iVar5 = iVar5 + 1;
            uVar4 = 1;
            TStack_130.CurrentBitIndex = iVar1;
            if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_141a1fe7c;
            uVar4 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar7 * 4 + 4);
          }
          uVar4 = -uVar4 & uVar4;
          uVar6 = (ulonglong)uVar4 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          TStack_130.CurrentBitIndex = TStack_130.BaseBitIndex + -1 + (int)lVar7;
          if (iVar1 < TStack_130.CurrentBitIndex) {
            TStack_130.CurrentBitIndex = iVar1;
          }
        }
LAB_141a1fe7c:
        TStack_130._padding_ = CONCAT44(uVar4,iVar5);
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130._28_4_ = local_2c;
        TStack_100._padding_ = TStack_130._padding_;
        TStack_100.BaseBitIndex = TStack_130.BaseBitIndex;
        TStack_100._28_4_ = local_2c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100.CurrentBitIndex = TStack_130.CurrentBitIndex;
        iVar5 = TStack_130.CurrentBitIndex;
        if (TStack_130.CurrentBitIndex < iVar1) {
          do {
            LOCK();
            **(TAtomic<FMinimalName> **)(*local_108 + 8 + (longlong)iVar5 * 0x18) =
                 TStatId::TStatId_NAME_None.Name;
            UNLOCK();
            TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
            iVar5 = TStack_100.CurrentBitIndex;
          } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar6 = (ulonglong)uStack_bc;
      uVar4 = uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar4) {
        uVar6 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_a8->HashSize < iVar10)) || (iVar10 < local_a8->HashSize)) {
        local_a8->HashSize = iVar10;
        TSet<TTuple<FName,FStatGroupEnableManager::FGroupEnable>,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + -1;
  UNLOCK();
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetHighPerformanceEnableForGroup @ 141a1fff0

void __thiscall
FStatGroupEnableManager::SetHighPerformanceEnableForGroup
          (FStatGroupEnableManager *this,FName param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FGroupEnable *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
  *pTStack_c0;
  FGroupEnable *local_b8;
  undefined2 local_b0;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
  *pTStack_80;
  FGroupEnable *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  undefined1 local_38 [32];
  longlong local_18;
  TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
  *pTStack_10;
  
  lpCriticalSection = &this->SynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  pFVar6 = TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
           ::Find((TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
                   *)&this->HighPerformanceEnable,param_1);
  if (pFVar6 == (FGroupEnable *)0x0) goto code_r0x000141a20248;
  pFVar6->CurrentEnable = param_2;
  if (param_2) {
    TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
                *)pFVar6);
    local_b0 = 0;
    stack0xffffffffffffff28 = local_68._16_16_;
    auStack_e0._0_8_ = local_68._8_8_;
    local_c8 = local_48;
    pTStack_c0 = pTStack_40;
    uVar7 = local_68._24_8_ >> 0x20;
    uVar8 = local_68._28_4_;
    local_b8 = pFVar6;
    if (*(int *)(local_68._16_8_ + 0x18) <= (int)uVar8) goto code_r0x000141a20248;
    do {
      LOCK();
      **(undefined8 **)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar8 * 0x18) =
           *(undefined8 *)(*(longlong *)local_68._0_8_ + (longlong)(int)uVar7 * 0x18);
      UNLOCK();
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar7 = (ulonglong)uStack_cc;
      uVar8 = uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if ((char)local_b0 == '\0') goto code_r0x000141a20248;
    pFVar6 = local_b8;
    cVar3 = local_b0._1_1_;
  }
  else {
    TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_38,
               (TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
                *)pFVar6);
    local_70 = 0;
    stack0xffffffffffffff68 = local_38._16_16_;
    local_a8 = (longlong *)local_38._0_8_;
    auStack_a0._0_8_ = local_38._8_8_;
    local_88 = local_18;
    pTStack_80 = pTStack_10;
    uVar7 = local_38._24_8_ >> 0x20;
    local_78 = pFVar6;
    if (*(int *)(local_38._16_8_ + 0x18) <= local_38._28_4_) goto code_r0x000141a20248;
    do {
      LOCK();
      **(TAtomic<FMinimalName> **)(*local_a8 + 8 + (longlong)(int)uVar7 * 0x18) =
           TStatId::TStatId_NAME_None.Name;
      UNLOCK();
      uStack_90 = uStack_90 & ~auStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
      uVar7 = (ulonglong)uStack_8c;
    } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
    if ((char)local_70 == '\0') goto code_r0x000141a20248;
    pFVar6 = local_78;
    cVar3 = local_70._1_1_;
  }
  if (cVar3 != '\0') {
    uVar8 = *(int *)&(pFVar6->NamesInThisGroup).field_0x8 -
            *(int *)&(pFVar6->NamesInThisGroup).field_0x34;
    if (uVar8 < 4) {
      iVar5 = 1;
    }
    else {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((0 < (int)uVar8) && (*(int *)&(pFVar6->NamesInThisGroup).field_0x48 < iVar5)) ||
       (iVar5 < *(int *)&(pFVar6->NamesInThisGroup).field_0x48)) {
      *(int *)&(pFVar6->NamesInThisGroup).field_0x48 = iVar5;
      TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TStatIdData_*>,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>,FDefaultSetAllocator>
                *)pFVar6);
    }
  }
code_r0x000141a20248:
  LOCK();
  FThreadStats::PrimaryEnableUpdateNumber.Counter =
       FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  LOCK();
  FThreadStats::PrimaryDisableChangeTagLock.Counter =
       FThreadStats::PrimaryDisableChangeTagLock.Counter + -1;
  UNLOCK();
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// StatGroupEnableManagerCommand @ 141a23a70

void __thiscall
FStatGroupEnableManager::StatGroupEnableManagerCommand
          (FStatGroupEnableManager *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *local_res8;
  wchar_t *local_res10;
  wchar_t *local_res18 [2];
  
  lpCriticalSection = &this->SynchronizationObject;
  pwVar5 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res8 = (FScriptContainerElement *)pwVar5;
  bVar4 = FParse::Command((wchar_t **)&local_res8,L"list",true);
  if (bVar4) {
LAB_141a23c9b:
    bVar4 = false;
  }
  else {
    bVar4 = FParse::Command((wchar_t **)&local_res8,L"listall",true);
    if (!bVar4) {
      bVar4 = FParse::Command((wchar_t **)&local_res8,L"enable",true);
      if (bVar4) {
        CheckGroup(this,&local_res10,SUB81(&local_res8,0));
        goto LAB_141a23ca5;
      }
      bVar4 = FParse::Command((wchar_t **)&local_res8,L"disable",true);
      if (bVar4) {
        CheckGroup(this,local_res18,SUB81(&local_res8,0));
        goto LAB_141a23ca5;
      }
      bVar4 = FParse::Command((wchar_t **)&local_res8,L"none",true);
      if (bVar4) {
        this->EnableForNewGroups = false;
        this->UseEnableForNewGroups = true;
        (**(code **)(this->_padding_ + 0x18))(this);
      }
      else {
        bVar4 = FParse::Command((wchar_t **)&local_res8,L"all",true);
        if (bVar4) {
          this->EnableForNewGroups = true;
          this->UseEnableForNewGroups = true;
          (**(code **)(this->_padding_ + 0x18))(this);
        }
        else {
          bVar4 = FParse::Command((wchar_t **)&local_res8,L"default",true);
          if (!bVar4) goto LAB_141a23ca5;
          this_00 = &this->EnableForNewGroup;
          this->UseEnableForNewGroups = false;
          bVar4 = 1 < *(int *)&(this->EnableForNewGroup).field_0x48;
          if (!bVar4) {
            TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                              *)this_00);
          }
          puVar1 = &(this->EnableForNewGroup).field_0xc;
          *(undefined4 *)&(this->EnableForNewGroup).field_0x8 = 0;
          if (*(int *)puVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
          }
          *(undefined4 *)&(this->EnableForNewGroup).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->EnableForNewGroup).field_0x34 = 0;
          iVar2 = *(int *)&(this->EnableForNewGroup).field_0x2c;
          *(undefined4 *)&(this->EnableForNewGroup).field_0x28 = 0;
          if ((iVar2 < 0) || (0x80 < iVar2)) {
            *(undefined4 *)&(this->EnableForNewGroup).field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EnableForNewGroup).field_0x10
                       ,0);
          }
          if (bVar4) {
            *(undefined4 *)&(this->EnableForNewGroup).field_0x48 = 1;
            TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                      *)this_00);
          }
          (**(code **)(this->_padding_ + 0x20))(this);
        }
      }
      goto LAB_141a23c9b;
    }
    bVar4 = true;
  }
  ListGroups(this,bVar4);
LAB_141a23ca5:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UpdateMemoryUsage @ 141a2c260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatGroupEnableManager::UpdateMemoryUsage(FStatGroupEnableManager *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_StatDescMemory> FVar3;
  FThreadStats *this_00;
  uchar auVar4 [8];
  FName local_res8;
  FStatMessage local_18;
  
  auVar4 = (uchar  [8])(longlong)(this->MemoryCounter).Counter;
  FVar3 = StatPtr_STAT_StatDescMemory;
  if (StatPtr_STAT_StatDescMemory == (FThreadSafeStaticStat<FStat_STAT_StatDescMemory>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_StatDescMemory");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_StatDescMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatDescMemory,*pFVar2,
                       L"Stats Descriptions","STATGROUP_StatSystem","STATCAT_Advanced",
                       L"Stat System",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = FThreadStats::GetThreadStats();
    local_18.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_18.StatData.Pad = auVar4;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Set(&local_res8,(long64)auVar4);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

