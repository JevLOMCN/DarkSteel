// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticStruct @ 14deea310

UScriptStruct * __cdecl FRetargetOpProfile::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetOpProfile,(UObject *)pUVar1,
                         L"RetargetOpProfile");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton;
}

// FRetargetOpProfile @ 14df18860

FRetargetOpProfile * __thiscall
FRetargetOpProfile::FRetargetOpProfile(FRetargetOpProfile *this,FRetargetOpProfile *param_1)

{
  UObjectBase *this_00;
  
  this->OpToApplySettingsTo = param_1->OpToApplySettingsTo;
  (this->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->SettingsToApply).StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&this->SettingsToApply,(param_1->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr,
             (param_1->SettingsToApply).StructMemory);
  (this->Controller).Object = (UObject *)0x0;
  this_00 = (UObjectBase *)(param_1->Controller).Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    (this->Controller).Object = (UObject *)this_00;
  }
  return this;
}

// FRetargetOpProfile @ 14df188d0

FRetargetOpProfile * __thiscall
FRetargetOpProfile::FRetargetOpProfile
          (FRetargetOpProfile *this,FName param_1,UScriptStruct *param_2,
          FIKRetargetOpSettingsBase *param_3)

{
  (this->OpToApplySettingsTo).ComparisonIndex = 0;
  (this->OpToApplySettingsTo).Number = 0;
  FInstancedStruct::FInstancedStruct(&this->SettingsToApply);
  (this->Controller).Object = (UObject *)0x0;
  this->OpToApplySettingsTo = param_1;
  FInstancedStruct::InitializeAs(&this->SettingsToApply,param_2,(uchar *)param_3);
  return this;
}

// CopyFromOtherOpProfile @ 14df2ca40

void __thiscall
FRetargetOpProfile::CopyFromOtherOpProfile(FRetargetOpProfile *this,FRetargetOpProfile *param_1)

{
  if (&this->SettingsToApply != &param_1->SettingsToApply) {
    FInstancedStruct::InitializeAs
              (&this->SettingsToApply,(param_1->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->SettingsToApply).StructMemory);
    return;
  }
  return;
}

// CopySettingsToOp @ 14df2e5a0

bool __thiscall
FRetargetOpProfile::CopySettingsToOp
          (FRetargetOpProfile *this,FInstancedStruct *param_1,ECopyOpSettingsContext param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FIKRetargetOpBase *pFVar5;
  UScriptStruct *pUVar6;
  FIKRetargetOpSettingsBase *pFVar7;
  void *pvVar8;
  UStruct *pUVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  if (((this->SettingsToApply).StructMemory != (uchar *)0x0) &&
     ((this->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar5 = FInstancedStruct::GetMutablePtr<FIKRetargetOpBase>(param_1);
    pUVar1 = (this->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr;
    pUVar6 = (UScriptStruct *)(**(code **)(pFVar5->_padding_ + 0x58))(pFVar5);
    if (pUVar6 == pUVar1) {
      pFVar7 = UE::StructUtils::GetStructRef<FIKRetargetOpSettingsBase>
                         ((this->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr,
                          (this->SettingsToApply).StructMemory);
      if (param_2 == PreInitialize) {
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        pvVar8 = (void *)(**(code **)(pFVar5->_padding_ + 0x48))(pFVar5);
        pUVar9 = (UStruct *)(**(code **)(pFVar5->_padding_ + 0x58))(pFVar5);
        FIKRetargetOpBase::CopyStructProperties(pUVar9,pFVar7,pvVar8,&local_18);
      }
      else {
        if (param_2 == Runtime) {
          (**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,pFVar7);
          return true;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProfile.cpp"
                           ,0x3e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return true;
    }
  }
  return false;
}

// CreateControllerIfNeeded @ 14df2ea00

UIKRetargetOpControllerBase * __thiscall
FRetargetOpProfile::CreateControllerIfNeeded(FRetargetOpProfile *this,UObject *param_1)

{
  TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *this_00;
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UIKRetargetOpControllerBase *pUVar8;
  FIKRetargetOpSettingsBase *pFVar9;
  TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_res8;
  
  pFVar9 = (FIKRetargetOpSettingsBase *)(this->SettingsToApply).StructMemory;
  if ((pFVar9 == (FIKRetargetOpSettingsBase *)0x0) ||
     (pUVar2 = (this->SettingsToApply).ScriptStruct.field0_0x0.DebugPtr,
     pUVar2 == (UScriptStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6439502899922862010>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProfile.cpp"
                       ,0x46,"SettingsToApply.IsValid()");
    if (!bVar4) {
      return (UIKRetargetOpControllerBase *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pUVar8 = (UIKRetargetOpControllerBase *)(*pcVar3)();
    return pUVar8;
  }
  this_00 = &this->Controller;
  if ((this->Controller).Object != (UObject *)0x0) goto LAB_14df2eb99;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase,(UObject *)pUVar5,
                         L"IKRetargetOpSettingsBase");
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
LAB_14df2ea98:
    pFVar9 = (FIKRetargetOpSettingsBase *)0x0;
  }
  else {
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14df2ea98;
  }
  pUVar6 = (UClass *)(**(code **)(pFVar9->_padding_ + 0x18))(pFVar9);
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar7 = UIKRetargetOpControllerBase::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = NewObject<UIKRetargetOpControllerBase>
                         (param_1,pUVar6,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_res8.Object = (UObject *)0x0;
      if (pUVar8 != (UIKRetargetOpControllerBase *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pUVar8);
        local_res8.Object = (UObject *)pUVar8;
      }
      TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
      ::operator=(this_00,&local_res8);
      if ((UIKRetargetOpControllerBase *)local_res8.Object != (UIKRetargetOpControllerBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_res8.Object);
      }
      pUVar8 = TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
               ::operator->(this_00);
      pUVar8->OpSettingsToControl = pFVar9;
      return (UIKRetargetOpControllerBase *)this_00->Object;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6439502899922862001>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProfile.cpp"
                     ,0x4f,
                     "ClassType && ClassType->IsChildOf(UIKRetargetOpControllerBase::StaticClass())"
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UIKRetargetOpControllerBase *)(*pcVar3)();
    return pUVar8;
  }
LAB_14df2eb99:
  return (UIKRetargetOpControllerBase *)this_00->Object;
}

