// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b40cb10

UClass * __cdecl UDS_AI_GYM_DebugScreen::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DebugScreen",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DebugScreen,0x408,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DebugScreen>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DebugScreen>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton;
}

// UDS_AI_GYM_DebugScreen @ 14b411040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DebugScreen * __thiscall
UDS_AI_GYM_DebugScreen::UDS_AI_GYM_DebugScreen(UDS_AI_GYM_DebugScreen *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DebugString).LineCount = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugScreen__6B_;
  ::FString::FString(&(this->DebugString).LineString,"");
  ::FString::FString(&this->LocationString,"");
  ::FString::FString(&this->CurrentRoundInfo,"");
  ::FString::FString(&this->AiTrainingRoundResult,"");
  local_res8 = 0;
  (this->AI_GYM_GameMode).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AI_GYM_GameMode).WeakPtr,(FObjectPtr)&local_res8);
  ::FString::FString(&this->LastAppendedDebugString,"");
  return this;
}

// UDS_AI_GYM_DebugScreen @ 14b411110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DebugScreen * __thiscall
UDS_AI_GYM_DebugScreen::UDS_AI_GYM_DebugScreen
          (UDS_AI_GYM_DebugScreen *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DebugString).LineCount = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugScreen__6B_;
  ::FString::FString(&(this->DebugString).LineString,"");
  ::FString::FString(&this->LocationString,"");
  ::FString::FString(&this->CurrentRoundInfo,"");
  ::FString::FString(&this->AiTrainingRoundResult,"");
  local_res8 = 0;
  (this->AI_GYM_GameMode).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AI_GYM_GameMode).WeakPtr,(FObjectPtr)&local_res8);
  ::FString::FString(&this->LastAppendedDebugString,"");
  return this;
}

// ~UDS_AI_GYM_DebugScreen @ 14b411d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AI_GYM_DebugScreen::~UDS_AI_GYM_DebugScreen(UDS_AI_GYM_DebugScreen *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugScreen__6B_;
  pFVar1 = (this->LastAppendedDebugString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AiTrainingRoundResult).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentRoundInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocationString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugString).LineString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4131e0

UClass * __cdecl UDS_AI_GYM_DebugScreen::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DebugScreen",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DebugScreen,0x408,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DebugScreen>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DebugScreen>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DebugScreen.InnerSingleton;
}

// NotifyAppendDebugString @ 14b414030

void __thiscall UDS_AI_GYM_DebugScreen::NotifyAppendDebugString(UDS_AI_GYM_DebugScreen *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDS_AI_GYM_DebugScreen_NotifyAppendDebugString);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b41405d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesUDS_AI_GYM_DebugScreen @ 14b414220

void __cdecl UDS_AI_GYM_DebugScreen::StaticRegisterNativesUDS_AI_GYM_DebugScreen(void)

{
  return;
}

// AppendDebugString @ 14b8686c0

void __thiscall
UDS_AI_GYM_DebugScreen::AppendDebugString(UDS_AI_GYM_DebugScreen *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FString local_18;
  
  iVar2 = (this->LastAppendedDebugString).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->LastAppendedDebugString).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    if ((this->DebugString).LineCount != 0) {
      ::FString::AppendChars(&(this->DebugString).LineString,L"\r\n",2);
    }
    ::FString::PrintfImpl(&local_18,L"%d: ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (&(this->DebugString).LineString,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2
              );
    iVar1 = (param_1->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (&(this->DebugString).LineString,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
               iVar2);
    (this->DebugString).LineCount = (this->DebugString).LineCount + 1;
    ::FString::operator=(&this->LastAppendedDebugString,param_1);
    NotifyAppendDebugString(this);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// NativeTick @ 14b8803f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AI_GYM_DebugScreen::NativeTick(UDS_AI_GYM_DebugScreen *this,FGeometry *param_1,float param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FString local_38 [2];
  double local_18;
  
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  bVar3 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                    (&this->AI_GYM_GameMode,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->AI_GYM_GameMode).WeakPtr);
    local_res8.ObjectIndex = *(int *)&pUVar4[0x16].field_0x4;
    local_res8.ObjectSerialNumber = *(int *)&pUVar4[0x16].field_0x8;
    bVar3 = TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (*(longlong *)(pUVar4 + 0xb) != 0) {
        local_18 = *(double *)(*(longlong *)(pUVar4 + 0xb) + 0x220);
      }
      ::FString::PrintfImpl(local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
      pFVar1 = &this->LocationString;
      if (pFVar1 != local_38) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
        (this->LocationString).Data.ArrayNum = local_38[0].Data.ArrayNum;
        (this->LocationString).Data.ArrayMax = local_38[0].Data.ArrayMax;
        local_38[0].Data.ArrayNum = 0;
        local_38[0].Data.ArrayMax = 0;
        local_38[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetAI_GYM_GameMode @ 14b898790

void __thiscall
UDS_AI_GYM_DebugScreen::SetAI_GYM_GameMode
          (UDS_AI_GYM_DebugScreen *this,TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> param_1)

{
  (this->AI_GYM_GameMode).WeakPtr = param_1.WeakPtr;
  return;
}

// UpdateLocationString @ 14b8a27e0

void __thiscall UDS_AI_GYM_DebugScreen::UpdateLocationString(UDS_AI_GYM_DebugScreen *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FString local_38 [2];
  double local_18;
  
  bVar3 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                    (&this->AI_GYM_GameMode,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->AI_GYM_GameMode).WeakPtr);
    local_res8.ObjectIndex = *(int *)&pUVar4[0x16].field_0x4;
    local_res8.ObjectSerialNumber = *(int *)&pUVar4[0x16].field_0x8;
    bVar3 = TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (*(longlong *)(pUVar4 + 0xb) != 0) {
        local_18 = *(double *)(*(longlong *)(pUVar4 + 0xb) + 0x220);
      }
      ::FString::PrintfImpl(local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
      pFVar1 = &this->LocationString;
      if (pFVar1 != local_38) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
        (this->LocationString).Data.ArrayNum = local_38[0].Data.ArrayNum;
        (this->LocationString).Data.ArrayMax = local_38[0].Data.ArrayMax;
        local_38[0].Data.ArrayNum = 0;
        local_38[0].Data.ArrayMax = 0;
        local_38[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

