// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b72de20

UClass * __cdecl UDS_VM_W_DebugCamera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_DebugCamera",
               &Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_DebugCamera,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_DebugCamera>,
               InternalVTableHelperCtorCaller<UDS_VM_W_DebugCamera>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton;
}

// UDS_VM_W_DebugCamera @ 14b734a90

UDS_VM_W_DebugCamera * __thiscall
UDS_VM_W_DebugCamera::UDS_VM_W_DebugCamera(UDS_VM_W_DebugCamera *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugCamera__6B_;
  FText::FText(&this->DebugText);
  FVar1 = FLinearColor::White;
  this->DebugVisibility = SelfHitTestInvisible;
  this->DebugAlpha = 1.0;
  (this->CameraManager).WeakPtr.ObjectIndex = 0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->CameraManager).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// UDS_VM_W_DebugCamera @ 14b734b10

UDS_VM_W_DebugCamera * __thiscall
UDS_VM_W_DebugCamera::UDS_VM_W_DebugCamera(UDS_VM_W_DebugCamera *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugCamera__6B_;
  FText::FText(&this->DebugText);
  FVar1 = FLinearColor::White;
  this->DebugVisibility = SelfHitTestInvisible;
  this->DebugAlpha = 1.0;
  (this->CameraManager).WeakPtr.ObjectIndex = 0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->CameraManager).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ~UDS_VM_W_DebugCamera @ 14b736390

void __thiscall UDS_VM_W_DebugCamera::~UDS_VM_W_DebugCamera(UDS_VM_W_DebugCamera *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugCamera__6B_;
  pIVar1 = (this->DebugText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739440

IClassDescriptor * __thiscall
UDS_VM_W_DebugCamera::GetFieldNotificationDescriptor(UDS_VM_W_DebugCamera *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_DebugCamera::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a200

UClass * __cdecl UDS_VM_W_DebugCamera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_DebugCamera",
               &Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_DebugCamera,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_DebugCamera>,
               InternalVTableHelperCtorCaller<UDS_VM_W_DebugCamera>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_DebugCamera.InnerSingleton;
}

// GetTickableTickType @ 14b73ae20

ETickableTickType __thiscall UDS_VM_W_DebugCamera::GetTickableTickType(UDS_VM_W_DebugCamera *this)

{
  return Conditional;
}

// IsUpdate @ 14b73ae60

bool __thiscall UDS_VM_W_DebugCamera::IsUpdate(UDS_VM_W_DebugCamera *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_DebugCamera @ 14b73af60

void __cdecl UDS_VM_W_DebugCamera::StaticRegisterNativesUDS_VM_W_DebugCamera(void)

{
  return;
}

// InitViewModel @ 14bfb0ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_DebugCamera::InitViewModel(UDS_VM_W_DebugCamera *this)

{
  TObjectPtr<APlayerCameraManager> *this_00;
  bool bVar1;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  UClass *pUVar4;
  APlayerCameraManager *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::GetGameInstanceWorld();
  pAVar3 = UGameplayStatics::GetPlayerController((UObject *)pUVar2,0);
  if (pAVar3 == (APlayerController *)0x0) {
    return;
  }
  this_00 = &pAVar3->PlayerCameraManager;
  if ((this_00->field0_0x0).DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar1) {
      local_res10[0] = (this_00->field0_0x0).DebugPtr;
      goto LAB_14bfb0f0a;
    }
  }
  local_res10[0] = (APlayerCameraManager *)0x0;
LAB_14bfb0f0a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0] != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  FWeakObjectPtr::operator=(&(this->CameraManager).WeakPtr,(FObjectPtr)local_res10);
  return;
}

// OnUpdate @ 14bfd1100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_W_DebugCamera::OnUpdate(UDS_VM_W_DebugCamera *this,float param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  ADS_CameraManager *this_00;
  UDS_MainCameraComponent *this_01;
  UClass *pUVar8;
  FDS_EntityBase *pFVar9;
  FDS_CharacterBaseTableRow *pFVar10;
  FDS_CameraPresetTableRow *pFVar11;
  UDS_SpringArmComponent *this_02;
  UObject *pUVar12;
  UDS_CameraStateBase *pUVar13;
  FText *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FString local_2f8;
  FWeakObjectPtr local_2e8;
  FWeakObjectPtr local_2e0;
  FName local_2d8;
  int local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  FString local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  FText local_e8;
  TRotator<double> local_d8;
  TRotator<double> local_c0 [2];
  TVector<double> local_90 [2];
  TVector<double> local_60;
  
  bVar7 = FWeakObjectPtr::IsValid(&(this->CameraManager).WeakPtr);
  if (bVar7) {
    this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get(&(this->CameraManager).WeakPtr);
    this_01 = (UDS_MainCameraComponent *)ADS_CameraManager::GetCurrentCameraComponent(this_00);
    if (this_01 != (UDS_MainCameraComponent *)0x0) {
      pUVar8 = Z_Construct_UClass_UDS_MainCameraComponent_NoRegister();
      iVar17 = (int)pUVar8->_padding_;
      if ((iVar17 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar8->_padding_)) {
        UDS_MainCameraComponent::GetNowCameraState(this_01);
        bVar7 = FWeakObjectPtr::IsValid(&local_res18);
        if ((bVar7) &&
           (((pFVar9 = FDS_EntityBase::GetMainPlayerEntityBase(true),
             pFVar9 != (FDS_EntityBase *)0x0 &&
             (pFVar10 = FDS_CharacterBaseTableRow::Get(pFVar9->TableID,true),
             pFVar10 != (FDS_CharacterBaseTableRow *)0x0)) &&
            (pFVar11 = FDS_CameraPresetTableRow::Get((longlong)pFVar10->ID_CameraPreset,true),
            pFVar11 != (FDS_CameraPresetTableRow *)0x0)))) {
          pFVar2 = (pFVar11->CameraState).AllocatorInstance.Data;
          iVar17 = 0;
          FVar1 = (FScriptContainerElement)this_01->NowCameraStateType;
          for (pFVar16 = pFVar2; pFVar16 != pFVar2 + (pFVar11->CameraState).ArrayNum;
              pFVar16 = pFVar16 + 1) {
            if (*pFVar16 == FVar1) {
              iVar15 = (int)pFVar16 - (int)pFVar2;
              if (((-1 < iVar15) && (iVar15 < (pFVar11->ID_CameraParameter).ArrayNum)) &&
                 (((pFVar11->ID_CameraParameter).ArrayNum <= iVar15 &&
                  (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  , bVar7)))) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              break;
            }
          }
          local_res20 = (this_01->CameraBoomPtr).WeakPtr;
          this_02 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get(&local_res20);
          UDS_SpringArmComponent::GetRealDistance(this_02);
          pUVar12 = FWeakObjectPtr::Get(&local_res18);
          local_1b8 = *(undefined4 *)&pUVar12[1].field_0x18;
          local_1b4 = *(undefined4 *)&pUVar12[1].field_0x1c;
          local_1b0 = *(undefined4 *)&pUVar12[1].field_0x20;
          local_1ac = *(undefined4 *)&pUVar12[1].field_0x24;
          local_1a8 = *(undefined4 *)(pUVar12 + 2);
          local_1a4 = *(undefined4 *)&pUVar12[2].field_0x4;
          local_1a0 = *(undefined4 *)&pUVar12[2].field_0x8;
          local_19c = *(undefined4 *)&pUVar12[2].field_0xc;
          local_198 = *(undefined4 *)&pUVar12[2].field_0x10;
          local_194 = *(undefined4 *)&pUVar12[2].field_0x14;
          local_190 = *(undefined4 *)&pUVar12[2].field_0x18;
          local_18c = *(undefined4 *)&pUVar12[2].field_0x1c;
          local_188 = *(undefined8 *)&pUVar12[2].field_0x20;
          uStack_180 = *(undefined8 *)(pUVar12 + 3);
          local_178 = *(undefined8 *)&pUVar12[3].field_0x8;
          local_170 = *(undefined8 *)&pUVar12[3].field_0x10;
          uStack_168 = *(undefined8 *)&pUVar12[3].field_0x18;
          local_160 = *(undefined8 *)&pUVar12[3].field_0x20;
          local_158 = *(undefined8 *)(pUVar12 + 4);
          uStack_150 = *(undefined8 *)&pUVar12[4].field_0x8;
          local_148 = *(undefined8 *)&pUVar12[4].field_0x10;
          ::FString::FString(&local_140,(FString *)&pUVar12[4].field_0x18);
          local_130 = *(undefined4 *)(pUVar12 + 5);
          local_12c = *(undefined4 *)&pUVar12[5].field_0x4;
          local_128 = *(undefined4 *)&pUVar12[5].field_0x8;
          local_124 = *(undefined4 *)&pUVar12[5].field_0xc;
          local_120 = *(undefined4 *)&pUVar12[5].field_0x10;
          local_11c = *(undefined4 *)&pUVar12[5].field_0x14;
          local_118 = *(undefined4 *)&pUVar12[5].field_0x18;
          local_114 = pUVar12[5].field_0x1c;
          local_113 = pUVar12[5].field_0x1d;
          local_110 = *(undefined8 *)&pUVar12[5].field_0x20;
          uStack_108 = *(undefined8 *)(pUVar12 + 6);
          local_100 = *(undefined8 *)&pUVar12[6].field_0x8;
          local_f8 = *(undefined4 *)&pUVar12[6].field_0x10;
          local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.Data.ArrayNum = 0;
          local_2f8.Data.ArrayMax = 0;
          ::FString::FString(&local_1c8,"EDS_CameraStateType");
          DS_Util::GetEnumToString(&local_1d8,&local_1c8,(ulonglong)(byte)FVar1);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2c8,L"Camera: %d (%s)\n");
          iVar15 = iVar17;
          if (local_2c8.Data.ArrayNum != 0) {
            iVar15 = local_2c8.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetCameraDistance(pUVar13);
          ::FString::PrintfImpl(&local_2b8,L"Distance: %f (%f)\n");
          iVar15 = iVar17;
          if (local_2b8.Data.ArrayNum != 0) {
            iVar15 = local_2b8.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetCameraRotation(pUVar13,&local_d8);
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetCameraRotation(pUVar13,local_c0);
          ::FString::PrintfImpl(&local_2a8,L"Pitch, Yaw: %f, %f\n");
          iVar15 = iVar17;
          if (local_2a8.Data.ArrayNum != 0) {
            iVar15 = local_2a8.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_298,L"TargetingModeLagSpeed: %f\n");
          iVar15 = iVar17;
          if (local_298.Data.ArrayNum != 0) {
            iVar15 = local_298.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_298.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          local_2e8 = (this_01->CameraBoomPtr).WeakPtr;
          FWeakObjectPtr::Get(&local_2e8);
          ::FString::PrintfImpl(&local_268,L"X=%3.3f Y=%3.3f Z=%3.3f");
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetSocketOffset(pUVar13,local_90);
          ::FString::PrintfImpl(&local_278,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_288,L"SocketOffset: %s(%s)\n");
          iVar15 = iVar17;
          if (local_288.Data.ArrayNum != 0) {
            iVar15 = local_288.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_288.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          local_2e0 = (this_01->CameraBoomPtr).WeakPtr;
          FWeakObjectPtr::Get(&local_2e0);
          ::FString::PrintfImpl(&local_238,L"X=%3.3f Y=%3.3f Z=%3.3f");
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetTargetOffset(pUVar13,&local_60);
          ::FString::PrintfImpl(&local_248,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_258,L"TargetOffset: %s(%s)\n");
          iVar15 = iVar17;
          if (local_258.Data.ArrayNum != 0) {
            iVar15 = local_258.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_228,L"FOV: %f\n");
          iVar15 = iVar17;
          if (local_228.Data.ArrayNum != 0) {
            iVar15 = local_228.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_228.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_218,L"LagSpeed: %f\n");
          iVar15 = iVar17;
          if (local_218.Data.ArrayNum != 0) {
            iVar15 = local_218.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          pUVar13 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_CameraStateBase::GetCameraLagSpeed(pUVar13);
          ::FString::PrintfImpl(&local_208,L"DistanceLagSpeed: %f\n");
          iVar15 = iVar17;
          if (local_208.Data.ArrayNum != 0) {
            iVar15 = local_208.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar15)
          ;
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_1f8,L"ZoomInSocketOffset: %s\n");
          if (local_1f8.Data.ArrayNum != 0) {
            iVar17 = local_1f8.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2f8,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar17)
          ;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::FromString(&local_e8,&local_2f8);
          iVar17 = FFieldNotificationClassDescriptor::DebugText.BitNumber;
          FVar6 = FFieldNotificationClassDescriptor::DebugText.FieldName;
          bVar7 = FText::IdenticalTo(&this->DebugText,pFVar14,None);
          if (!bVar7) {
            pIVar3 = (pFVar14->TextData).Reference;
            pIVar4 = (this->DebugText).TextData.Reference;
            if (pIVar4 != pIVar3) {
              (this->DebugText).TextData.Reference = pIVar3;
              if (pIVar3 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
              }
              if (pIVar4 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
              }
            }
            (this->DebugText).Flags = pFVar14->Flags;
            local_2d8 = FVar6;
            local_2d0 = iVar17;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
          }
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// SetDebugText @ 14bfd9570

void __thiscall UDS_VM_W_DebugCamera::SetDebugText(UDS_VM_W_DebugCamera *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::DebugText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DebugText.FieldName;
  bVar5 = FText::IdenticalTo(&this->DebugText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->DebugText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->DebugText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->DebugText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetDebugVisibility @ 14bfd9630

void __thiscall
UDS_VM_W_DebugCamera::SetDebugVisibility(UDS_VM_W_DebugCamera *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DebugVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DebugVisibility.FieldName;
  if (this->DebugVisibility != *param_1) {
    this->DebugVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

