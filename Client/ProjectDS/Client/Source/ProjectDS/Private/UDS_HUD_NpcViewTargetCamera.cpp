// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4acb20

UClass * __cdecl UDS_HUD_NpcViewTargetCamera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_NpcViewTargetCamera",
               &Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton,
               StaticRegisterNativesUDS_HUD_NpcViewTargetCamera,0x8f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_NpcViewTargetCamera>,
               InternalVTableHelperCtorCaller<UDS_HUD_NpcViewTargetCamera>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton;
}

// UDS_HUD_NpcViewTargetCamera @ 14b4b1ee0

UDS_HUD_NpcViewTargetCamera * __thiscall
UDS_HUD_NpcViewTargetCamera::UDS_HUD_NpcViewTargetCamera
          (UDS_HUD_NpcViewTargetCamera *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->UserName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserName).Data.ArrayNum = 0;
  (this->UserName).Data.ArrayMax = 0;
  (this->CharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).Data.ArrayNum = 0;
  (this->CharName).Data.ArrayMax = 0;
  (this->CurrentHP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHP).Data.ArrayNum = 0;
  (this->CurrentHP).Data.ArrayMax = 0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_HUD_NpcViewTargetCamera @ 14b4b1f80

UDS_HUD_NpcViewTargetCamera * __thiscall
UDS_HUD_NpcViewTargetCamera::UDS_HUD_NpcViewTargetCamera
          (UDS_HUD_NpcViewTargetCamera *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->UserName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserName).Data.ArrayNum = 0;
  (this->UserName).Data.ArrayMax = 0;
  (this->CharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).Data.ArrayNum = 0;
  (this->CharName).Data.ArrayMax = 0;
  (this->CurrentHP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHP).Data.ArrayNum = 0;
  (this->CurrentHP).Data.ArrayMax = 0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_HUD_NpcViewTargetCamera @ 14b4b34d0

void __thiscall
UDS_HUD_NpcViewTargetCamera::~UDS_HUD_NpcViewTargetCamera(UDS_HUD_NpcViewTargetCamera *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->CurrentHP).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6f60

UClass * __cdecl UDS_HUD_NpcViewTargetCamera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_NpcViewTargetCamera",
               &Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton,
               StaticRegisterNativesUDS_HUD_NpcViewTargetCamera,0x8f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_NpcViewTargetCamera>,
               InternalVTableHelperCtorCaller<UDS_HUD_NpcViewTargetCamera>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_NpcViewTargetCamera.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_NpcViewTargetCamera @ 14b4b84a0

void __cdecl UDS_HUD_NpcViewTargetCamera::StaticRegisterNativesUDS_HUD_NpcViewTargetCamera(void)

{
  return;
}

// NativeConstruct @ 14c090ad0

void __thiscall UDS_HUD_NpcViewTargetCamera::NativeConstruct(UDS_HUD_NpcViewTargetCamera *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(local_res8,"C_RenderTargetImage");
  UDS_UserWidget::BindWidget<UDS_CommonLazyImage>
            ((UDS_UserWidget *)this,&this->RenderTargetImage,*pFVar1);
  pFVar1 = ::FName::FName(local_res8,"RTEXT_Title");
  UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
            ((UDS_UserWidget *)this,&this->RichText_Title,*pFVar1);
  pFVar1 = ::FName::FName(local_res8,"RTEXT_Info");
  UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
            ((UDS_UserWidget *)this,&this->RichText_Info,*pFVar1);
  pFVar1 = ::FName::FName(local_res8,"RTEXT_Status");
  UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
            ((UDS_UserWidget *)this,&this->RichText_State,*pFVar1);
  pFVar1 = ::FName::FName(local_res8,"IMG_Bg_1");
  UDS_UserWidget::BindWidget<UDS_CommonLazyImage>
            ((UDS_UserWidget *)this,&this->RichText_State_BG,*pFVar1);
  return;
}

// NativeDestruct @ 14c090e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_HUD_NpcViewTargetCamera::NativeDestruct(UDS_HUD_NpcViewTargetCamera *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FTimerManager *this_00;
  FTimerData *pFVar7;
  FObjectPtr_u_0 *this_01;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    iVar2 = (pUVar5->Sources).ArrayNum;
    this_01 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_01 + (longlong)iVar2 * 3;
    for (; this_01 != pFVar1; this_01 = this_01 + 3) {
      if (this_01->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
        if ((bVar4) && (this_01->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_01->Handle + 0x2b8))();
        }
      }
    }
  }
  if (this->_padding_ != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar7 = FTimerManager::FindTimer(this_00,(FTimerHandle *)&this->_padding_);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)this->_padding_);
    }
    this->_padding_ = 0;
  }
  UCommonUserWidget::NativeDestruct((UCommonUserWidget *)this);
  return;
}

// NativeTick @ 14c091430

void __thiscall
UDS_HUD_NpcViewTargetCamera::NativeTick
          (UDS_HUD_NpcViewTargetCamera *this,FGeometry *param_1,float param_2)

{
  FWeakObjectPtr *pFVar1;
  UDS_CommonRichTextBlock *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  UObject *pUVar6;
  FText *pFVar7;
  UDS_CharStateData *pUVar8;
  UDS_SkillDataSet *this_00;
  FDS_SkillTableRow *pFVar9;
  UDS_AbnormalAbilityData *this_01;
  FDS_AbnormalInfo *this_02;
  FDS_SkillAbnormalTableRow *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FString local_78;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  
  UDS_UserWidget::NativeTick((UDS_UserWidget *)this,param_1,param_2);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::FString(&local_58,"\n");
  ::FString::ConcatFF((FString *)&local_68,&this->UserName,&local_58);
  iVar13 = 0;
  iVar11 = local_68.ArrayNum + -1;
  if (local_68.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_68.AllocatorInstance.Data,iVar11);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"\n");
  ::FString::ConcatFF((FString *)&local_68,&this->CharName,&local_58);
  iVar11 = local_68.ArrayNum + -1;
  if (local_68.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_68.AllocatorInstance.Data,iVar11);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"\n");
  ::FString::ConcatFF((FString *)&local_68,&this->CurrentHP,&local_58);
  iVar11 = local_68.ArrayNum + -1;
  if (local_68.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_68.AllocatorInstance.Data,iVar11);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
  if (bVar5) {
    ::FString::FString((FString *)&local_28,"\n");
    pUVar6 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    ::FString::AppendInt((FString *)&local_68,*(int *)(pUVar6 + 10));
    ::FString::FString((FString *)&local_38,"Damage Point : ");
    ::FString::ConcatFF(&local_48,(FString *)&local_38,(FString *)&local_68);
    ::FString::ConcatFF(&local_58,&local_48,(FString *)&local_28);
    iVar11 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar11 = iVar13;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar11);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
    ::FString::FString(&local_48,"\n");
    pUVar6 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    ::FString::AppendInt((FString *)&local_68,*(int *)&pUVar6[10].field_0x4);
    ::FString::FString((FString *)&local_38,"Heal Point : ");
    ::FString::ConcatFF((FString *)&local_28,(FString *)&local_38,(FString *)&local_68);
    ::FString::ConcatFF(&local_58,(FString *)&local_28,&local_48);
    iVar11 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar11 = iVar13;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar11);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = this->RichText_Info;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
  pFVar7 = FText::FromString(&local_28,&local_78);
  (*pcVar3)(pUVar2,pFVar7);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
  local_res8.ObjectIndex = 0x10;
  local_res8.ObjectSerialNumber = 0;
  bVar5 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)&local_res8);
  if (bVar5) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res20);
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar5) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
      UDS_SkillDataSet::GetCurrentActiveSkillList(this_00,&local_68);
      iVar11 = local_68.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_68.AllocatorInstance.Data + (longlong)iVar11 * 8);
      FVar12.Data = local_68.AllocatorInstance.Data;
      while( true ) {
        if (local_68.ArrayNum != iVar11) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res8);
        }
        if ((FWeakObjectPtr *)FVar12.Data == pFVar1) goto LAB_14c091882;
        local_res8 = *(FWeakObjectPtr *)FVar12.Data;
        bVar5 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar5) break;
        FVar12.Data = FVar12.Data + 8;
      }
      (**(code **)(this->RichText_State_BG->_padding_ + 0x2c0))(this->RichText_State_BG,4);
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      pFVar9 = FDS_SkillTableRow::GetRef((longlong)*(int *)&pUVar6[2].field_0x1c,true);
      (**(code **)((pFVar9->ID_Name)._padding_ + 8))(&pFVar9->ID_Name);
      ::FString::PrintfImpl((FString *)&local_28,L"Skill : %s");
      pUVar2 = this->RichText_State;
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
      pFVar7 = FText::FromString(&local_38,(FString *)&local_28);
      (*pcVar3)(pUVar2,pFVar7);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
LAB_14c091882:
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res8.ObjectIndex = 0x1000;
    local_res8.ObjectSerialNumber = 0;
    bVar5 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)&local_res8);
    if (bVar5) {
      local_res8.ObjectIndex._0_1_ = 0x30;
      UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->EntityID);
      bVar5 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar5) {
        this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res20);
        this_02 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_01,None);
        bVar5 = FDS_AbnormalInfo::IsValid(this_02);
        if (bVar5) {
          lVar4 = this->RichText_State_BG->_padding_;
          (**(code **)(lVar4 + 0x2c0))
                    (this->RichText_State_BG,CONCAT71((int7)((ulonglong)lVar4 >> 8),4));
          pFVar10 = FDS_SkillAbnormalTableRow::GetRef((ulonglong)this_02->AbnormalType,true);
          (**(code **)((pFVar10->ID_Name)._padding_ + 8))(&pFVar10->ID_Name);
          ::FString::PrintfImpl((FString *)&local_28,L"Abnormal : %s");
          pUVar2 = this->RichText_State;
          pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
          pFVar7 = FText::FromString(&local_38,(FString *)&local_28);
          (*pcVar3)(pUVar2,pFVar7);
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
          if (local_28.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_28.TextData.Reference);
          }
        }
      }
    }
    else {
      (**(code **)(this->RichText_State_BG->_padding_ + 0x2c0))(this->RichText_State_BG,1);
      pUVar2 = this->RichText_State;
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
      pFVar7 = FText::FText(&local_28);
      (*pcVar3)(pUVar2,pFVar7);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedHp @ 14c092660

void __thiscall
UDS_HUD_NpcViewTargetCamera::OnChangedHp
          (UDS_HUD_NpcViewTargetCamera *this,float param_1,float param_2,ulong64 param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  ::FString::FormatAsNumber(local_28,(int)param_2);
  ::FString::FormatAsNumber(&local_38,(int)param_1);
  ::FString::PrintfImpl(&local_48,L"HP : %s / %s");
  pFVar1 = &this->CurrentHP;
  if (pFVar1 != &local_48) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->CurrentHP).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->CurrentHP).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// SetData @ 14c0a0f70

void __thiscall
UDS_HUD_NpcViewTargetCamera::SetData
          (UDS_HUD_NpcViewTargetCamera *this,ulong64 param_1,FString *param_2)

{
  FString *pFVar1;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *this_00;
  UDS_CommonRichTextBlock *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  UObject *pUVar8;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> TVar9;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar10;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar11;
  UDS_CharStatusData *pUVar12;
  FDS_StatusInfo *pFVar13;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar14;
  float fVar15;
  FWeakObjectPtr local_res8;
  ulong64 local_res10;
  undefined1 local_res18 [16];
  FString local_78;
  FString local_68;
  FText local_58 [2];
  
  pUVar2 = this->RichText_Title;
  this->EntityID = param_1;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
  local_res10 = param_1;
  pFVar7 = FText::FromString(local_58,param_2);
  (*pcVar3)(pUVar2,pFVar7);
  if (local_58[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
  }
  UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    pUVar8 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar8 + 0x2d0))(pUVar8);
    ::FString::PrintfImpl(&local_78,L"UserName : %s");
    pFVar1 = &this->UserName;
    if (pFVar1 != &local_78) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (this->UserName).Data.ArrayNum = local_78.Data.ArrayNum;
      (this->UserName).Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  TVar9 = UDS_PlayerData::GetData((ulong64)local_res18,param_1,false);
                    /* WARNING: Load size is inaccurate */
  (this->PlayerData).WeakPtr = *TVar9.WeakPtr;
  TVar10 = UDS_CharStateData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
  (this->CharStateData).WeakPtr = *TVar10.WeakPtr;
  TVar11 = UDS_CharInfoData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
  (this->CharInfoData).WeakPtr = *TVar11.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (bVar5) {
    FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
    ::FString::PrintfImpl(&local_68,L"CharacterName : %s");
    pFVar1 = &this->CharName;
    if (pFVar1 != &local_68) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->CharName).Data.ArrayNum = local_68.Data.ArrayNum;
      (this->CharName).Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  this_00 = &this->CharStatusData;
  bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar5) {
    pUVar12 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar13 = UDS_CharStatusData::GetStatusInfo(pUVar12,Hp);
    if (pFVar13 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar13->ChangeStatusDelegate,this);
    }
  }
  TVar14 = UDS_CharStatusData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar14.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar5) {
    pUVar12 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar13 = UDS_CharStatusData::GetStatusInfo(pUVar12,Hp);
    if (pFVar13 != (FDS_StatusInfo *)0x0) {
      pUVar12 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar6 = UDS_CharStatusData::GetCurrentStatus(pUVar12,Hp);
      pUVar12 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar15 = UDS_CharStatusData::GetMaxStatus(pUVar12,Hp);
      OnChangedHp(this,(float)iVar6,fVar15,param_1);
      local_58[0]._8_8_ = (ulonglong)(uint)local_58[0]._12_4_ << 0x20;
      local_58[0].TextData.Reference = (ITextData *)OnChangedHp;
      TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_HUD_NpcViewTargetCamera,unsigned___int64_&>
                ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                  *)&pFVar13->ChangeStatusDelegate,(UDS_HUD_NpcViewTargetCamera *)local_res18,
                 (pmf_053664d9 *)this,(ulong64 *)local_58);
    }
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// SetRenderTarget @ 14c0a1540

void __thiscall
UDS_HUD_NpcViewTargetCamera::SetRenderTarget
          (UDS_HUD_NpcViewTargetCamera *this,UTextureRenderTarget2D *param_1)

{
  FSlateBrush local_b8;
  
  if ((this->RenderTargetImage != (UDS_CommonLazyImage *)0x0) &&
     (param_1 != (UTextureRenderTarget2D *)0x0)) {
    FSlateBrush::FSlateBrush(&local_b8);
    FSlateBrush::SetResourceObject(&local_b8,(UObject *)param_1);
    (**(code **)(this->RenderTargetImage->_padding_ + 0x310))(this->RenderTargetImage,&local_b8);
    local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

