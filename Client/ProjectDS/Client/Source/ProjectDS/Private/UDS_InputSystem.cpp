// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4abd60

UClass * __cdecl UDS_InputSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputSystem",
               &Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton,
               StaticRegisterNativesUDS_InputSystem,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputSystem>,InternalVTableHelperCtorCaller<UDS_InputSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton;
}

// UDS_InputSystem @ 14b4b2d70

UDS_InputSystem * __thiscall
UDS_InputSystem::UDS_InputSystem(UDS_InputSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputSystem__6B_;
  *(undefined8 *)&this->InputSystemDataEvent = 0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x8 = 0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x10 = 0;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x18 = 2;
  (this->InputSystemData).MousePos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InputSystemData).MouseDelta.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InputSystemData).bMousePositionRetrieved = false;
  (this->InputSystemData).bLeftRotation = false;
  (this->InputSystemData).bRightRotation = false;
  (this->InputSystemData).bConstruction = false;
  (this->InputSystemData).bExitConstructionMode = false;
  this->MousePosX = 0.0;
  this->MousePosY = 0.0;
  (this->MousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BeforeMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MouseDelta).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->bIsMousePosUpdate = false;
  this->bLeftRotation = false;
  this->bRightRotation = false;
  this->bConstruction = false;
  this->bExitConstructionMode = false;
  return this;
}

// UDS_InputSystem @ 14b4b2e10

UDS_InputSystem * __thiscall
UDS_InputSystem::UDS_InputSystem(UDS_InputSystem *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputSystem__6B_;
  *(undefined8 *)&this->InputSystemDataEvent = 0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x8 = 0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x10 = 0;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->InputSystemDataEvent).field_0x18 = 2;
  (this->InputSystemData).MousePos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InputSystemData).MouseDelta.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InputSystemData).bMousePositionRetrieved = false;
  (this->InputSystemData).bLeftRotation = false;
  (this->InputSystemData).bRightRotation = false;
  (this->InputSystemData).bConstruction = false;
  (this->InputSystemData).bExitConstructionMode = false;
  this->MousePosX = 0.0;
  this->MousePosY = 0.0;
  (this->MousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BeforeMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MouseDelta).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->bIsMousePosUpdate = false;
  this->bLeftRotation = false;
  this->bRightRotation = false;
  this->bConstruction = false;
  this->bExitConstructionMode = false;
  return this;
}

// ~UDS_InputSystem @ 14b4b3ce0

void __thiscall UDS_InputSystem::~UDS_InputSystem(UDS_InputSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InputSystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InputSystemDataEvent).field_0x8,
             *(int *)&(this->InputSystemDataEvent).field_0x10);
  pvVar1 = *(void **)&(this->InputSystemDataEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InputSystemDataEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7e40

UClass * __cdecl UDS_InputSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputSystem",
               &Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton,
               StaticRegisterNativesUDS_InputSystem,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputSystem>,InternalVTableHelperCtorCaller<UDS_InputSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputSystem.InnerSingleton;
}

// StaticRegisterNativesUDS_InputSystem @ 14b4b86a0

void __cdecl UDS_InputSystem::StaticRegisterNativesUDS_InputSystem(void)

{
  return;
}

// Init @ 14b9f4c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InputSystem::Init(UDS_InputSystem *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  undefined1 *puVar1;
  bool bVar2;
  TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UDS_InputEvent *pUVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  int local_158;
  int local_154;
  undefined1 local_150 [264];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TVar3 = ADS_PlayerController::GetPlayerController();
                    /* WARNING: Load size is inaccurate */
  (this->PlayerController).WeakPtr = *TVar3.WeakPtr;
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerController,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_150 + 8),
                 "UDS_InputSystem::Init",0x15,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_40,0x10,L"PlayerController is nullptr");
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  else {
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar5->OnInputEvent).Subscriptions;
      puVar1 = &(pUVar5->OnInputEvent).Subscriptions.field_0x40;
      local_158 = 0x2fab;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar6 = *(undefined1 **)puVar1;
        if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
          puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar7 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x2fab) * 4);
        if (iVar7 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar7 * 0x50 + *(longlong *)this_00);
            if (*piVar8 == 0x2fab) {
              if ((iVar7 != -1) && (piVar8 != (int *)0x0)) goto LAB_14b9f4da1;
              break;
            }
            iVar7 = piVar8[0x12];
          } while (iVar7 != -1);
        }
      }
      local_150._0_8_ = &local_158;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)&local_154,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2fab,
                 (bool *)local_150);
      piVar8 = (int *)((longlong)local_154 * 0x50 + *(longlong *)this_00);
LAB_14b9f4da1:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_InputSystem>(piVar8 + 2,(UDS_InputSystem *)local_150,(pmf_073c4355)this);
      local_154 = 0x2fac;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar6 = *(undefined1 **)puVar1;
        if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
          puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar7 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x2fac) * 4);
        if (iVar7 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar7 * 0x50 + *(longlong *)this_00);
            if (*piVar8 == 0x2fac) {
              if (piVar8 != (int *)0x0) goto LAB_14b9f4e76;
              break;
            }
            iVar7 = piVar8[0x12];
          } while (iVar7 != -1);
        }
      }
      local_150._0_8_ = &local_154;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)&local_158,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2fac,
                 (bool *)local_150);
      piVar8 = (int *)((longlong)local_158 * 0x50 + *(longlong *)this_00);
LAB_14b9f4e76:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_InputSystem>(piVar8 + 2,(UDS_InputSystem *)local_150,(pmf_073c4355)this);
      local_154 = 0x2fa9;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar6 = *(undefined1 **)puVar1;
        if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
          puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar7 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x2fa9) * 4);
        if (iVar7 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar7 * 0x50 + *(longlong *)this_00);
            if (*piVar8 == 0x2fa9) {
              if (piVar8 != (int *)0x0) goto LAB_14b9f4f2c;
              break;
            }
            iVar7 = piVar8[0x12];
          } while (iVar7 != -1);
        }
      }
      local_150._0_8_ = &local_154;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)&local_158,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2fa9,
                 (bool *)local_150);
      piVar8 = (int *)((longlong)local_158 * 0x50 + *(longlong *)this_00);
LAB_14b9f4f2c:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_InputSystem>(piVar8 + 2,(UDS_InputSystem *)local_150,(pmf_073c4355)this);
      local_154 = 0x2faa;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar6 = *(undefined1 **)puVar1;
        if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
          puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar7 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x2faa) * 4);
        if (iVar7 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar7 * 0x50 + *(longlong *)this_00);
            if (*piVar8 == 0x2faa) {
              if (piVar8 != (int *)0x0) goto LAB_14b9f4fec;
              break;
            }
            iVar7 = piVar8[0x12];
          } while (iVar7 != -1);
        }
      }
      local_150._0_8_ = &local_154;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)&local_158,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2faa,
                 (bool *)local_150);
      piVar8 = (int *)((longlong)local_158 * 0x50 + *(longlong *)this_00);
LAB_14b9f4fec:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_InputSystem>(piVar8 + 2,(UDS_InputSystem *)local_150,(pmf_073c4355)this);
    }
  }
  return;
}

// OnInputEvent_Callback @ 14ba00f30

void __thiscall
UDS_InputSystem::OnInputEvent_Callback
          (UDS_InputSystem *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  if ((param_1 - IA_Construction_Building < 4) && (param_2 == Started)) {
    if (param_1 == IA_Construction_Left_Rotation) {
      this->bLeftRotation = true;
      return;
    }
    if (param_1 == IA_Construction_Right_Rotation) {
      this->bRightRotation = true;
      return;
    }
    if (param_1 == IA_Construction_Building) {
      this->bConstruction = true;
      return;
    }
    if (param_1 == IA_Construction_Cancel) {
      this->bExitConstructionMode = true;
    }
  }
  return;
}

// OnUpdate @ 14ba08930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_InputSystem::OnUpdate(UDS_InputSystem *this,float *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  APlayerController *this_00;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FDestructionSentinel local_38;
  
  bVar9 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerController,(void *)0x0);
  if (!bVar9) {
    this_00 = (APlayerController *)FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    bVar9 = APlayerController::GetMousePosition(this_00,&this->MousePosX,&this->MousePosY);
    if (bVar9) {
      dVar2 = this->MousePosY;
      (this->MousePos).field0_0x0._s_0.X = this->MousePosX;
      (this->MousePos).field0_0x0._s_0.Y = dVar2;
      if (this->bIsMousePosUpdate != false) {
        dVar2 = (this->MousePos).field0_0x0._s_0.X;
        dVar3 = (this->MousePos).field0_0x0._s_0.Y;
        this->bIsMousePosUpdate = false;
        (this->BeforeMousePos).field0_0x0._s_0.X = dVar2;
        (this->BeforeMousePos).field0_0x0._s_0.Y = dVar3;
      }
      bVar9 = true;
      dVar2 = (this->MousePos).field0_0x0._s_0.Y;
      dVar3 = (this->BeforeMousePos).field0_0x0._s_0.Y;
      (this->MouseDelta).field0_0x0._s_0.X =
           (this->MousePos).field0_0x0._s_0.X - (this->BeforeMousePos).field0_0x0._s_0.X;
      (this->MouseDelta).field0_0x0._s_0.Y = dVar2 - dVar3;
      uVar15 = *(undefined4 *)&(this->MousePos).field0_0x0;
      uVar16 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 4);
      uVar17 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 8);
      uVar18 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 0xc);
      *(undefined4 *)&(this->BeforeMousePos).field0_0x0 = uVar15;
      *(undefined4 *)((longlong)&(this->BeforeMousePos).field0_0x0 + 4) = uVar16;
      *(undefined4 *)((longlong)&(this->BeforeMousePos).field0_0x0 + 8) = uVar17;
      *(undefined4 *)((longlong)&(this->BeforeMousePos).field0_0x0 + 0xc) = uVar18;
    }
    else {
      uVar15 = *(undefined4 *)&(this->MousePos).field0_0x0;
      uVar16 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 4);
      uVar17 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 8);
      uVar18 = *(undefined4 *)((longlong)&(this->MousePos).field0_0x0 + 0xc);
      this->bIsMousePosUpdate = true;
      bVar9 = false;
    }
    *(undefined4 *)&(this->InputSystemData).MousePos.field0_0x0 = uVar15;
    *(undefined4 *)((longlong)&(this->InputSystemData).MousePos.field0_0x0 + 4) = uVar16;
    *(undefined4 *)((longlong)&(this->InputSystemData).MousePos.field0_0x0 + 8) = uVar17;
    *(undefined4 *)((longlong)&(this->InputSystemData).MousePos.field0_0x0 + 0xc) = uVar18;
    dVar2 = (this->MouseDelta).field0_0x0._s_0.Y;
    (this->InputSystemData).MouseDelta.field0_0x0._s_0.X = (this->MouseDelta).field0_0x0._s_0.X;
    (this->InputSystemData).MouseDelta.field0_0x0._s_0.Y = dVar2;
    (this->InputSystemData).bMousePositionRetrieved = bVar9;
    bVar9 = this->bLeftRotation;
    bVar10 = this->bRightRotation;
    bVar4 = this->bConstruction;
    bVar5 = this->bExitConstructionMode;
    (this->InputSystemData).bLeftRotation = bVar9;
    (this->InputSystemData).bRightRotation = bVar10;
    (this->InputSystemData).bConstruction = bVar4;
    (this->InputSystemData).bExitConstructionMode = bVar5;
    if (bVar9 != false) {
      this->bLeftRotation = false;
    }
    if (bVar10 != false) {
      this->bRightRotation = false;
    }
    if (bVar4 != false) {
      this->bConstruction = false;
    }
    if (bVar5 != false) {
      this->bExitConstructionMode = false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->InputSystemDataEvent
               ,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->InputSystemDataEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar9 = false;
    uVar14 = *(int *)&(this->InputSystemDataEvent).field_0x10 - 1;
    if (-1 < (int)uVar14) {
      lVar13 = (longlong)(int)uVar14 << 4;
      bVar9 = false;
      do {
        uVar12 = 0;
        if ((int)uVar14 < *(int *)&(this->InputSystemDataEvent).field_0x10) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)&(this->InputSystemDataEvent).field_0x8;
        if (((*(int *)(lVar13 + 8 + lVar6) == 0) ||
            (plVar7 = *(longlong **)(lVar13 + lVar6), plVar7 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar7 + 0x68))(), cVar11 == '\0')) {
          bVar9 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    puVar1 = &(this->InputSystemDataEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InputSystemDataEvent,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// OnUpdateInput @ 14ba08b90

void __thiscall UDS_InputSystem::OnUpdateInput(UDS_InputSystem *this,float *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = this->bLeftRotation;
  bVar2 = this->bRightRotation;
  bVar3 = this->bConstruction;
  bVar4 = this->bExitConstructionMode;
  (this->InputSystemData).bLeftRotation = bVar1;
  (this->InputSystemData).bRightRotation = bVar2;
  (this->InputSystemData).bConstruction = bVar3;
  (this->InputSystemData).bExitConstructionMode = bVar4;
  if (bVar1 != false) {
    this->bLeftRotation = false;
  }
  if (bVar2 != false) {
    this->bRightRotation = false;
  }
  if (bVar3 != false) {
    this->bConstruction = false;
  }
  if (bVar4 != false) {
    this->bExitConstructionMode = false;
  }
  return;
}

// OnUpdatePosition @ 14ba08c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_InputSystem::OnUpdatePosition(UDS_InputSystem *this,float *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  APlayerController *this_00;
  
  this_00 = (APlayerController *)FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
  bVar3 = APlayerController::GetMousePosition(this_00,&this->MousePosX,&this->MousePosY);
  if (!bVar3) {
    dVar1 = (this->MousePos).field0_0x0._s_0.X;
    dVar2 = (this->MousePos).field0_0x0._s_0.Y;
    this->bIsMousePosUpdate = true;
    (this->InputSystemData).MousePos.field0_0x0._s_0.X = dVar1;
    (this->InputSystemData).MousePos.field0_0x0._s_0.Y = dVar2;
    dVar1 = (this->MouseDelta).field0_0x0._s_0.Y;
    (this->InputSystemData).MouseDelta.field0_0x0._s_0.X = (this->MouseDelta).field0_0x0._s_0.X;
    (this->InputSystemData).MouseDelta.field0_0x0._s_0.Y = dVar1;
    (this->InputSystemData).bMousePositionRetrieved = false;
    return;
  }
  dVar1 = this->MousePosY;
  (this->MousePos).field0_0x0._s_0.X = this->MousePosX;
  (this->MousePos).field0_0x0._s_0.Y = dVar1;
  if (this->bIsMousePosUpdate != false) {
    dVar1 = (this->MousePos).field0_0x0._s_0.X;
    dVar2 = (this->MousePos).field0_0x0._s_0.Y;
    this->bIsMousePosUpdate = false;
    (this->BeforeMousePos).field0_0x0._s_0.X = dVar1;
    (this->BeforeMousePos).field0_0x0._s_0.Y = dVar2;
  }
  dVar1 = (this->MousePos).field0_0x0._s_0.Y;
  dVar2 = (this->BeforeMousePos).field0_0x0._s_0.Y;
  (this->MouseDelta).field0_0x0._s_0.X =
       (this->MousePos).field0_0x0._s_0.X - (this->BeforeMousePos).field0_0x0._s_0.X;
  (this->MouseDelta).field0_0x0._s_0.Y = dVar1 - dVar2;
  dVar1 = (this->MousePos).field0_0x0._s_0.X;
  dVar2 = (this->MousePos).field0_0x0._s_0.Y;
  (this->BeforeMousePos).field0_0x0._s_0.X = dVar1;
  (this->BeforeMousePos).field0_0x0._s_0.Y = dVar2;
  (this->InputSystemData).MousePos.field0_0x0._s_0.X = dVar1;
  (this->InputSystemData).MousePos.field0_0x0._s_0.Y = dVar2;
  dVar1 = (this->MouseDelta).field0_0x0._s_0.Y;
  (this->InputSystemData).MouseDelta.field0_0x0._s_0.X = (this->MouseDelta).field0_0x0._s_0.X;
  (this->InputSystemData).MouseDelta.field0_0x0._s_0.Y = dVar1;
  (this->InputSystemData).bMousePositionRetrieved = true;
  return;
}

// Reset @ 14ba18420

void __thiscall UDS_InputSystem::Reset(UDS_InputSystem *this)

{
  UDS_InputEvent *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->PlayerController).WeakPtr = local_res8;
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_InputSystem>(&pUVar1->OnInputEvent,this);
    return;
  }
  return;
}

// TryGetHitResultFromMousePosition @ 14ba1f260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_InputSystem::TryGetHitResultFromMousePosition
          (UDS_InputSystem *this,TVector2<double> *param_1,FHitResult *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  UWorld *this_00;
  UDS_LogManager *pUVar9;
  APlayerController *this_01;
  FHitResult *pFVar10;
  longlong lVar11;
  undefined1 auStackY_308 [32];
  FCollisionObjectQueryParams local_2d8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  undefined8 local_290;
  undefined4 uStack_288;
  undefined1 uStack_284;
  undefined2 uStack_283;
  undefined1 uStack_281;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  FHitResult local_248;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  bVar8 = FWeakObjectPtr::IsValid(&(this->PlayerController).WeakPtr);
  if (bVar8) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (this_00 == (UWorld *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InputSystem::TryGetHitResultFromMousePosition",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0x3e,L"world is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      local_2b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this_01 = (APlayerController *)FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
      bVar8 = APlayerController::DeprojectMousePositionToWorld
                        (this_01,(TVector<double> *)&local_2b8._s_0,
                         (TVector<double> *)&local_2d0._s_0);
      if (bVar8) {
        local_268._s_0.Z = local_2b8._s_0.Z;
        local_2d8.IgnoreMask = '\0';
        local_2d8.ObjectTypesToQuery = 1;
        local_268._s_0.X = local_2b8._s_0.X;
        local_268._s_0.Y = local_2b8._s_0.Y;
        local_280._s_0.X = local_2d0._s_0.X * __real_40f86a0000000000 + local_2b8._s_0.X;
        local_280._s_0.Y = local_2d0._s_0.Y * __real_40f86a0000000000 + local_2b8._s_0.Y;
        local_280._s_0.Z = local_2d0._s_0.Z * __real_40f86a0000000000 + local_2b8._s_0.Z;
        memset(&local_248,0,0x100);
        uStack_288 = 0xffffffff;
        uStack_283 = 0;
        uStack_281 = 0;
        local_290 = 0;
        uStack_284 = 0;
        local_248.Time = 1.0;
        local_248.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_248.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_248.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_248.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        local_248.MyItem = -1;
        local_248.HitObjectHandle.InstanceIndex = -1;
        local_248.HitObjectHandle.ResolutionStatus = Invalid;
        local_248.HitObjectHandle._29_3_ = 0;
        local_248.HitObjectHandle.ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        bVar8 = UWorld::LineTraceSingleByObjectType
                          (this_00,&local_248,(TVector<double> *)&local_268._s_0,
                           (TVector<double> *)&local_280._s_0,&local_2d8,
                           &FCollisionQueryParams::DefaultQueryParam);
        if ((bVar8) && (local_248.bBlockingHit != 0)) {
          lVar11 = 2;
          pFVar10 = &local_248;
          do {
            fVar5 = pFVar10->Time;
            fVar6 = pFVar10->Distance;
            iVar7 = pFVar10->_padding_;
            uVar1 = *(undefined8 *)&pFVar10->Location;
            uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
            param_2->FaceIndex = pFVar10->FaceIndex;
            param_2->Time = fVar5;
            param_2->Distance = fVar6;
            param_2->_padding_ = iVar7;
            uVar3 = *(undefined8 *)&(pFVar10->Location).field_0x10;
            uVar4 = *(undefined8 *)&pFVar10->ImpactPoint;
            *(undefined8 *)&param_2->Location = uVar1;
            *(undefined8 *)&(param_2->Location).field_0x8 = uVar2;
            uVar1 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
            uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
            *(undefined8 *)&(param_2->Location).field_0x10 = uVar3;
            *(undefined8 *)&param_2->ImpactPoint = uVar4;
            uVar3 = *(undefined8 *)&pFVar10->Normal;
            uVar4 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
            *(undefined8 *)&(param_2->ImpactPoint).field_0x8 = uVar1;
            *(undefined8 *)&(param_2->ImpactPoint).field_0x10 = uVar2;
            uVar1 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
            uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
            *(undefined8 *)&param_2->Normal = uVar3;
            *(undefined8 *)&(param_2->Normal).field_0x8 = uVar4;
            uVar3 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
            uVar4 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
            *(undefined8 *)&(param_2->Normal).field_0x10 = uVar1;
            *(undefined8 *)&param_2->ImpactNormal = uVar2;
            uVar1 = *(undefined8 *)&pFVar10->TraceStart;
            uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
            *(undefined8 *)&(param_2->ImpactNormal).field_0x8 = uVar3;
            *(undefined8 *)&(param_2->ImpactNormal).field_0x10 = uVar4;
            *(undefined8 *)&param_2->TraceStart = uVar1;
            *(undefined8 *)&(param_2->TraceStart).field_0x8 = uVar2;
            lVar11 = lVar11 + -1;
            pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
            param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
          } while (lVar11 != 0);
          return true;
        }
      }
    }
  }
  return false;
}

