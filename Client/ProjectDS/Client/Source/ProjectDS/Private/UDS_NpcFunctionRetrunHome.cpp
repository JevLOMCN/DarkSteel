// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b53dd20

UClass * __cdecl UDS_NpcFunctionRetrunHome::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionRetrunHome",
               &Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionRetrunHome,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionRetrunHome>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionRetrunHome>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton;
}

// UDS_NpcFunctionRetrunHome @ 14b540f20

UDS_NpcFunctionRetrunHome * __thiscall
UDS_NpcFunctionRetrunHome::UDS_NpcFunctionRetrunHome
          (UDS_NpcFunctionRetrunHome *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionRetrunHome__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionRetrunHome @ 14b540f80

UDS_NpcFunctionRetrunHome * __thiscall
UDS_NpcFunctionRetrunHome::UDS_NpcFunctionRetrunHome
          (UDS_NpcFunctionRetrunHome *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionRetrunHome__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionRetrunHome @ 14b541ac0

void __thiscall
UDS_NpcFunctionRetrunHome::~UDS_NpcFunctionRetrunHome(UDS_NpcFunctionRetrunHome *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b543770

UClass * __cdecl UDS_NpcFunctionRetrunHome::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionRetrunHome",
               &Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionRetrunHome,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionRetrunHome>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionRetrunHome>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionRetrunHome.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionRetrunHome @ 14b543c60

void __cdecl UDS_NpcFunctionRetrunHome::StaticRegisterNativesUDS_NpcFunctionRetrunHome(void)

{
  return;
}

// CloseTalk @ 14beda240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionRetrunHome::CloseTalk(UDS_NpcFunctionRetrunHome *this)

{
  UDS_WindowManager *this_00;
  float local_res8 [2];
  uint local_res10 [6];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res10,local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014beda285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this);
  return;
}

// OnOpenFunction @ 14bf00320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionRetrunHome::OnOpenFunction
          (UDS_NpcFunctionRetrunHome *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  FInstancedStruct *pFVar1;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_NPCDataSet *pUVar8;
  UObject *pUVar9;
  UDS_M_CommonPopup *pUVar10;
  FDS_ReturnHomeTableRow *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FObjectPtr_u_0 *pFVar14;
  FString *this_01;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar15;
  undefined1 auStackY_3b8 [32];
  FWeakObjectPtr local_388;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_380;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_370;
  FWeakObjectPtr local_360;
  FWeakObjectPtr local_358;
  FDS_Text local_350;
  FDS_Text local_300;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2b0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_360 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_360);
  if (bVar4) {
    *(int *)&this->field_0x28 = local_360.ObjectIndex;
    *(int *)&this->field_0x2c = local_360.ObjectSerialNumber;
  }
  *(int *)&this->field_0x30 = param_2;
  this->field_0x34 = param_3;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_NpcFunctionRetrunHome::OnOpenFunction",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x1b,L"commonPopupMng is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar4 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_388,(void *)0x0);
    if (bVar4) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_NpcFunctionRetrunHome::OnOpenFunction",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x22,L"commonPopupModel is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
      if (bVar4) {
        pUVar8 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        bVar4 = UDS_NPCDataSet::HasInteractionFunctionType(pUVar8,ReturnHomeRegistration);
        if (bVar4) {
          UDS_PlayerData::GetData((ulong64)&local_358,UDS_PlayerData::MainPlayerEntityID,false);
          bVar4 = FWeakObjectPtr::IsValid(&local_358);
          if (bVar4) {
            pUVar8 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
            iVar5 = UDS_NPCDataSet::GetInteractionFunctionValue
                              (pUVar8,param_2,ReturnHomeRegistration);
            pUVar9 = FWeakObjectPtr::Get(&local_358);
            iVar6 = *(int *)&pUVar9[6].field_0x20;
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            local_350.StringTableType = None;
            local_350.StringTableID = 0;
            local_350.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_350.StringEnumTableNameID.Number = 0;
            local_350.TimeExpressionType = None;
            local_350.IsExpression = false;
            local_350.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_350.DateTime.Ticks = 0;
            local_350.TimeSpan.Ticks = 0;
            local_350.UniqueString.Data.ArrayNum = 0;
            local_350.UniqueString.Data.ArrayMax = 0;
            local_350.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_350.FormatArgs.ArrayNum = 0;
            local_350.FormatArgs.ArrayMax = 0;
            local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_370.ArrayNum = 0;
            local_370.ArrayMax = 0;
            FDS_Text::SetTextFormatFromStringTable(&local_350,StringUi,0x3f7a5,&local_370);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_370.AllocatorInstance.Data,local_370.ArrayNum);
            if ((FDS_TextFormatArg *)local_370.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_370.AllocatorInstance.Data);
            }
            UDS_M_CommonPopup::SetTitle(pUVar10,&local_350);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            pFVar11 = FDS_ReturnHomeTableRow::GetRef((longlong)iVar6,true);
            pFVar12 = (FString *)
                      (**(code **)((pFVar11->ID_ReturnName)._padding_ + 8))(&pFVar11->ID_ReturnName)
            ;
            pFVar11 = FDS_ReturnHomeTableRow::GetRef((longlong)iVar5,true);
            pFVar13 = (FString *)
                      (**(code **)((pFVar11->ID_ReturnName)._padding_ + 8))(&pFVar11->ID_ReturnName)
            ;
            local_300.StringTableType = None;
            local_300.StringTableID = 0;
            local_300.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_300.StringEnumTableNameID.Number = 0;
            local_300.TimeExpressionType = None;
            local_300.DateTime.Ticks = 0;
            local_300.TimeSpan.Ticks = 0;
            local_300.IsExpression = false;
            local_300.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_300.UniqueString.Data.ArrayNum = 0;
            local_300.UniqueString.Data.ArrayMax = 0;
            local_300.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_300.FormatArgs.ArrayNum = 0;
            local_300.FormatArgs.ArrayMax = 0;
            local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_380.ArrayNum = 0;
            local_380.ArrayMax = 0;
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_380.AllocatorInstance,&local_380.ArrayMax);
            local_380.ArrayNum = iVar6 + 1;
            pFVar1 = (FInstancedStruct *)(local_380.AllocatorInstance.Data + (longlong)iVar6 * 0x28)
            ;
            FInstancedStruct::FInstancedStruct(pFVar1);
            pFVar14 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
            FVar3 = pFVar14[1];
            pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar14;
            pFVar1[1].StructMemory = (uchar *)FVar3;
            pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar14[2];
            FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
            this_01 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
            if (this_01 != (FString *)0x0) {
              ::FString::operator=(this_01,pFVar13);
            }
            iVar6 = local_380.ArrayNum;
            if (local_380.ArrayNum == local_380.ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_380.AllocatorInstance,&local_380.ArrayMax);
            }
            local_380.ArrayNum = iVar6 + 1;
            pFVar1 = (FInstancedStruct *)(local_380.AllocatorInstance.Data + (longlong)iVar6 * 0x28)
            ;
            FInstancedStruct::FInstancedStruct(pFVar1);
            pFVar14 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
            FVar3 = pFVar14[1];
            pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar14;
            pFVar1[1].StructMemory = (uchar *)FVar3;
            pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar14[2];
            FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
            pFVar13 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
            if (pFVar13 != (FString *)0x0) {
              ::FString::operator=(pFVar13,pFVar12);
            }
            FDS_Text::SetTextFormatFromStringTable(&local_300,StringUi,0x3f7a6,&local_380);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
            if ((FDS_TextFormatArg *)local_380.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_380.AllocatorInstance.Data);
            }
            UDS_M_CommonPopup::SetMainContent(pUVar10,&local_300);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            UDS_M_CommonPopup::SetButton(pUVar10,ButtonConfirm,StringUi,0x65,false);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            pTVar15 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_NpcFunctionRetrunHome>
                                (&local_2b0,this,(pmf_c19e0801)0x14bf02de0);
            UDS_M_CommonPopup::SetDelegate(pUVar10,ButtonConfirm,pTVar15);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            UDS_M_CommonPopup::SetButton(pUVar10,ButtonCancel,StringUi,0x66,false);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            pTVar15 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_NpcFunctionRetrunHome>
                                (&local_298,this,(pmf_c19e0801)0x14bf02d80);
            UDS_M_CommonPopup::SetDelegate(pUVar10,ButtonCancel,pTVar15);
            pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_388);
            UDS_M_CommonPopup::OpenCommonPopup(pUVar10);
          }
        }
        else {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4437498366993104942>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionReturnHome.cpp"
                             ,0x2e,"false");
          if (bVar4) goto code_r0x00014bf00530;
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4437498366993104936>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionReturnHome.cpp"
                           ,0x28,"false");
        if (bVar4) {
code_r0x00014bf00530:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// OnPopupCancelClick @ 14bf02d80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionRetrunHome::OnPopupCancelClick
          (UDS_NpcFunctionRetrunHome *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf02dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this);
  return;
}

// OnPopupOkClick @ 14bf02de0

void __thiscall
UDS_NpcFunctionRetrunHome::OnPopupOkClick
          (UDS_NpcFunctionRetrunHome *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_NPCDataSet *pUVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_DataSetBase *this_00;
  FWeakObjectPtr local_res8 [2];
  UDS_NpcFunctionRetrunHome *local_res18;
  ulong64 local_res20;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (bVar2) {
    pUVar4 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    bVar2 = UDS_NPCDataSet::HasInteractionFunctionType(pUVar4,ReturnHomeRegistration);
    if (bVar2) {
      UDS_PlayerData::GetData((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,false);
      bVar2 = FWeakObjectPtr::IsValid(local_res8);
      if (bVar2) {
        pUVar4 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        iVar3 = UDS_NPCDataSet::GetInteractionFunctionValue
                          (pUVar4,*(int *)&this->field_0x30,ReturnHomeRegistration);
        pUVar5 = FWeakObjectPtr::Get(local_res8);
        if (*(int *)&pUVar5[6].field_0x20 == iVar3) {
          local_60._0_8_ = 0;
          local_60._8_8_ = 0;
          local_60._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x9c4d,Alert_System_01,&local_60);
          CloseTalk(this);
        }
        else {
          local_78 = (undefined1  [8])0x0;
          local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_70.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                     (FWriteAccessScope *)&local_48);
          local_30 = &local_70;
          puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_
            ;
            *(int *)(puVar6 + 1) = iVar3;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionRetrunHome____A6AXXZUFDefaultDelegateUserPolicy__H__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            local_res18 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
            puVar6[4] = OnSaveSuccess;
          }
          if (local_48.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
          }
          iVar3 = *(int *)&this->field_0x30;
          this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
          local_res20 = UDS_DataSetBase::GetEntityID(this_00);
          FDS_WarpService::RequestReturnHomeSave
                    (&local_res20,iVar3,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
        }
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4437498366993104975>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionReturnHome.cpp"
                         ,0x4f,"false");
      if (bVar2) goto code_r0x00014bf02e76;
    }
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4437498366993104969>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionReturnHome.cpp"
                     ,0x49,"false");
  if (!bVar2) {
    return;
  }
code_r0x00014bf02e76:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnSaveSuccess @ 14bf03650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionRetrunHome::OnSaveSuccess(UDS_NpcFunctionRetrunHome *this,int param_1)

{
  FDS_ReturnHomeTableRow *pFVar1;
  FString *pFVar2;
  UDS_WindowManager *this_00;
  uint local_res8 [2];
  float local_res10 [6];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  pFVar1 = FDS_ReturnHomeTableRow::GetRef((longlong)param_1,true);
  pFVar2 = (FString *)(**(code **)((pFVar1->ID_ReturnName)._padding_ + 8))(&pFVar1->ID_ReturnName);
  pFVar2 = ::FString::FString(&local_38,pFVar2);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar2);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_48.AllocatorInstance.Data,&local_28,1)
  ;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x9c4e,Complete_System_01,&local_48,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res8[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res8,local_res10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf0377a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this);
  return;
}

