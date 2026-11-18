// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 7

// StartupModule @ 14e29eee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSignificanceManagerModule::StartupModule(FSignificanceManagerModule *this)

{
  undefined1 local_res10 [24];
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                 *)&FWorldDelegates::OnPreWorldInitialization,
                (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res10);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
               *)&FWorldDelegates::OnPostWorldCleanup,
              (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res10);
  TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                 *)&AHUD::OnShowDebugInfo,
                (_func___cdecl_void_AHUD_ptr_UCanvas_ptr_FDebugDisplayInfo_ptr_float_ptr_float_ptr *
                )local_res10);
  TMulticastDelegateRegistration<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                 *)&UConsole::RegisterConsoleAutoCompleteEntries,
                (_func___cdecl_void_TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_ptr *)
                local_res10);
  return;
}

// AddReferencedObjects @ 14e29ef50

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall
FSignificanceManagerModule::AddReferencedObjects
          (FSignificanceManagerModule *this,FReferenceCollector *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  TSubclassOf<USignificanceManager> TVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  TObjectPtr<UClass>_u_0 TVar14;
  TObjectPtr<UClass>_u_0 TVar15;
  longlong lVar16;
  TObjectPtr<UClass>_u_0 TVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TVar14.DebugPtr = (UClass *)0x0;
  TVar15._0_4_ = 0;
  TVar17._0_4_ = 0;
  uVar8 = 1;
  uVar10 = WorldSignificanceManagers._40_4_;
  uVar9 = 0;
  if (uVar10 != 0) {
    puVar18 = (uint *)&WorldSignificanceManagers.field_0x10;
    if (WorldSignificanceManagers._32_8_ != 0) {
      puVar18 = (uint *)WorldSignificanceManagers._32_8_;
    }
    uVar9 = *puVar18;
    TVar4.DebugPtr = TVar14.DebugPtr;
    TVar5.DebugPtr = TVar14.DebugPtr;
    TVar17._0_4_ = 0;
    TVar15._0_4_ = 0;
    while (uVar9 == 0) {
      TVar17._0_4_ = TVar5._0_4_ + 0x20;
      TVar17._4_4_ = 0;
      TVar15._0_4_ = TVar4._0_4_ + 1;
      TVar15._4_4_ = 0;
      uVar9 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)TVar15._0_4_)
      goto LAB_14e29effd;
      uVar9 = puVar18[(longlong)TVar4._0_4_ + 1];
      TVar4 = TVar15;
      TVar5 = TVar17;
    }
    uVar8 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    uVar9 = local_res20 + -1 + TVar17._0_4_;
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
  }
LAB_14e29effd:
  bVar3 = WorldSignificanceManagers._40_1_;
  uVar19 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,TVar15._0_4_);
  TStack_60.CurrentBitIndex = uVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uVar9;
  TStack_60.BaseBitIndex = TVar17._0_4_;
  uStack_40 = CONCAT44(uStack_6c,WorldSignificanceManagers._8_4_ - WorldSignificanceManagers._52_4_)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldSignificanceManagers.field_0x10;
  TVar17._0_4_ = uVar10;
  if ((int)uVar10 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TVar17._0_4_ = WorldSignificanceManagers._40_4_;
  }
  if (uVar10 != TVar17._0_4_) {
    lVar16 = 0x154dac340;
    if (WorldSignificanceManagers._32_8_ != 0) {
      lVar16 = WorldSignificanceManagers._32_8_;
    }
    TVar15._0_4_ = -1 << (bVar3 & 0x1f) & *(uint *)(lVar16 + (longlong)iVar13 * 4);
    while (TVar15._0_4_ == 0) {
      lVar12 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = TVar17._0_4_;
      if ((int)((TVar17._0_4_ - 1) + ((int)(TVar17._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14e29f120;
      TVar15._0_4_ = *(uint *)(lVar16 + 4 + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-TVar15._0_4_ & TVar15._0_4_) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar10 = (int)lVar16 + -1 + uVar19;
    if ((int)TVar17._0_4_ < (int)uVar10) {
      uVar10 = TVar17._0_4_;
    }
  }
LAB_14e29f120:
  while( true ) {
    if (WorldSignificanceManagers._8_4_ - WorldSignificanceManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    TVar6.Class.field0_0x0 = SignificanceManagerClass.Class.field0_0x0;
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&WorldSignificanceManagers.field_0x10)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,WorldSignificanceManagers._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18
                       + 8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 !=
       (TObjectPtr<UClass>_u_0)0x0) &&
     (pUVar11 = USignificanceManager::StaticClass(), pUVar11 != (UClass *)0x0)) {
    iVar13 = (int)pUVar11->_padding_;
    if ((*(int *)((longlong)TVar6.Class.field0_0x0 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)TVar6.Class.field0_0x0 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      TVar14 = (TObjectPtr<UClass>_u_0)SignificanceManagerClass;
    }
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&SignificanceManagerClass,0,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar14.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
  }
  SignificanceManagerClass.Class.field0_0x0 =
       (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar14.ObjectPtr.field0_0x0;
  return;
}

// GetReferencerName @ 14e29f220

FString * __thiscall
FSignificanceManagerModule::GetReferencerName
          (FSignificanceManagerModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSignificanceManagerModule");
  return __return_storage_ptr__;
}

// OnShowDebugInfo @ 14e2a2ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FSignificanceManagerModule::OnShowDebugInfo
          (AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,float *param_4,float *param_5)

{
  UObject *pUVar1;
  char cVar2;
  UWorld *pUVar3;
  TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *pTVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_SignificanceManager,"SignificanceManager");
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_2 != (UCanvas *)0x0) &&
     (cVar2 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_SignificanceManager),
     cVar2 != '\0')) {
    pUVar3 = AActor::GetWorld((AActor *)param_1);
    pTVar4 = TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
                     *)&WorldSignificanceManagers,pUVar3);
    if ((pTVar4 != (TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *)0x0) &&
       (pUVar1 = *(UObject **)&pTVar4->field_0x8, pUVar1 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

// OnWorldCleanup @ 14e2a34f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSignificanceManagerModule::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  UWorld *local_res8 [4];
  
  if (WorldSignificanceManagers._8_4_ != WorldSignificanceManagers._52_4_) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UWorld_const_*>
              ((TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
                *)&WorldSignificanceManagers,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

// OnWorldInit @ 14e2a3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FSignificanceManagerModule::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  TSubclassOf<USignificanceManager> TVar6;
  TSubclassOf<USignificanceManager> TVar7;
  UWorld *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  FString *pFVar11;
  size_t sVar12;
  TObjectPtr<UClass> TVar13;
  longlong *plVar14;
  TObjectPtr<UClass>_u_0 TVar15;
  int iVar16;
  undefined1 auStackY_168 [32];
  UWorld *local_128;
  TPairInitializer<UWorld_const_*_const_&,TObjectPtr<USignificanceManager>_&&> local_120;
  wchar_t *local_108;
  undefined8 uStack_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  UWorld **local_e8;
  TObjectPtr<USignificanceManager> **local_e0;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128 = param_1;
  bVar9 = UWorld::IsGameWorld(param_1);
  TVar6 = SignificanceManagerClass;
  if (!bVar9) {
    return;
  }
  iVar16 = 0;
  if (((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 ==
       (TObjectPtr<UClass>_u_0)0x0) ||
     (pUVar10 = USignificanceManager::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14e2a35db:
    uStack_100._0_4_ = 0;
    uStack_100._4_4_ = 0;
    local_108 = (wchar_t *)0x0;
    pUVar10 = USignificanceManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    pFVar11 = FSoftObjectPath::ToString
                        ((FSoftObjectPath *)
                         &(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[7].field_0x8,&local_b8);
    if ((pFVar11->Data).ArrayNum == 0) {
      local_f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e2a3639:
      sVar12 = wcslen((wchar_t *)local_f8);
      iVar16 = (int)sVar12;
    }
    else {
      local_f8 = (pFVar11->Data).AllocatorInstance.Data;
      if (local_f8 != (FScriptContainerElement *)0x0) goto LAB_14e2a3639;
    }
    iStack_f0 = iVar16;
    pUVar10 = USignificanceManager::StaticClass();
    local_c8._12_4_ = uStack_ec;
    local_c8.Size = iStack_f0;
    local_d8.DataPtr = local_108;
    local_d8.Size = (int)uStack_100;
    local_d8._12_4_ = uStack_100._4_4_;
    local_c8.DataPtr = (wchar_t *)local_f8;
    TVar13.field0_0x0 =
         (TObjectPtr<UClass>_u_0)
         StaticLoadClass(pUVar10,(UObject *)0x0,&local_c8,&local_d8,0,(UPackageMap *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar13.field0_0x0 != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar13.field0_0x0);
    }
    SignificanceManagerClass.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar13.field0_0x0;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if ((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 ==
        (TObjectPtr<UClass>_u_0)0x0) {
      return;
    }
  }
  else {
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)((longlong)TVar6.Class.field0_0x0 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)TVar6.Class.field0_0x0 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((!bVar9) ||
       ((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 ==
        (TObjectPtr<UClass>_u_0)0x0)) goto LAB_14e2a35db;
  }
  TVar7.Class.field0_0x0 = SignificanceManagerClass.Class.field0_0x0;
  pUVar10 = USignificanceManager::StaticClass();
  TVar6 = SignificanceManagerClass;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar16 = (int)pUVar10->_padding_;
  if ((*(int *)((longlong)TVar7.Class.field0_0x0 + 0x38) < iVar16) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)((longlong)TVar7.Class.field0_0x0 + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar10->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  if ((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 ==
      (TObjectPtr<UClass>_u_0)0x0) {
    return;
  }
  pUVar10 = USignificanceManager::StaticClass();
  if (pUVar10 == (UClass *)0x0) {
LAB_14e2a3730:
    TVar15.DebugPtr = (UClass *)0x0;
  }
  else {
    iVar16 = (int)pUVar10->_padding_;
    if ((*(int *)((longlong)TVar6.Class.field0_0x0 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)TVar6.Class.field0_0x0 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar10->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    TVar15 = (TObjectPtr<UClass>_u_0)SignificanceManagerClass;
    if (!bVar9) goto LAB_14e2a3730;
  }
  if (((TVar15.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar15.DebugPtr);
  }
  pUVar3 = ((TVar15.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar10 = USignificanceManager::StaticClass();
  lVar4 = *(longlong *)&pUVar3->field_0x10;
  iVar16 = (int)pUVar10->_padding_;
  if (((*(int *)(lVar4 + 0x38) < iVar16) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar16 * 8) !=
       &pUVar10->_padding_)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar6.Class.field0_0x0 = SignificanceManagerClass.Class.field0_0x0;
  uVar2 = *(uint *)(pUVar3 + 1);
  if (((uVar2 & 2) == 0) && ((uVar2 & 1) == 0)) {
    return;
  }
  if (((TObjectPtr<UClass>_u_0)SignificanceManagerClass.Class.field0_0x0 !=
       (TObjectPtr<UClass>_u_0)0x0) &&
     (pUVar10 = USignificanceManager::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar16 = (int)pUVar10->_padding_;
    if ((*(int *)((longlong)TVar6.Class.field0_0x0 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)TVar6.Class.field0_0x0 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar10->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    TVar15 = (TObjectPtr<UClass>_u_0)SignificanceManagerClass;
    if (bVar9) goto LAB_14e2a37fc;
  }
  TVar15.DebugPtr = (UClass *)0x0;
LAB_14e2a37fc:
  pUVar8 = local_128;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_128,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = USignificanceManager::StaticClass();
  CheckIsClassChildOf_Internal(pUVar10,TVar15.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,TVar15.DebugPtr);
  local_a8._8_8_ = pUVar8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_120.Value =
       (TObjectPtr<USignificanceManager> *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_120.Value != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_120.Value);
  }
  local_e8 = &local_128;
  local_e0 = &local_120.Value;
  TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UWorld_const_*_const_&,TObjectPtr<USignificanceManager>_&&>_>
            ((TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
              *)&WorldSignificanceManagers,&local_120,(bool *)&local_e8);
  return;
}

// PopulateAutoCompleteEntries @ 14e2a3920

void __cdecl
FSignificanceManagerModule::PopulateAutoCompleteEntries
          (TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *this;
  uint uVar7;
  
  this = Z_Construct_UClass_UConsoleSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  iVar5 = param_1->ArrayNum;
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  DefaultConstructItems<FAutoCompleteCommand,int>
            ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28,1);
  uVar7 = param_1->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  ::FString::operator=
            ((FString *)(pFVar2 + (longlong)iVar5 * 0x28 + -0x28),L"showdebug SIGNIFICANCEMANAGER");
  ::FString::operator=
            ((FString *)(pFVar2 + (longlong)iVar5 * 0x28 + -0x18),
             L"Toggles display of significance manager calculations");
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0x28 + -8) = *(undefined4 *)&pUVar1[2].field_0x10;
  return;
}

