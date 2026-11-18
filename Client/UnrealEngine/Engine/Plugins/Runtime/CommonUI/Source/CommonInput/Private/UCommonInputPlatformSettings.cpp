// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 19

// StaticClass @ 14a76cf40

UClass * __cdecl UCommonInputPlatformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputPlatformSettings",
               &Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUCommonInputPlatformSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UCommonInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton;
}

// UCommonInputPlatformSettings @ 14a771be0

UCommonInputPlatformSettings * __thiscall
UCommonInputPlatformSettings::UCommonInputPlatformSettings
          (UCommonInputPlatformSettings *this,FVTableHelper *param_1)

{
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
  (this->DefaultGamepadName).ComparisonIndex = 0;
  (this->DefaultGamepadName).Number = 0;
  (this->ControllerData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControllerData).ArrayNum = 0;
  (this->ControllerData).ArrayMax = 0;
  (this->ControllerDataClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControllerDataClasses).ArrayNum = 0;
  (this->ControllerDataClasses).ArrayMax = 0;
  return this;
}

// UCommonInputPlatformSettings @ 14a771c20

UCommonInputPlatformSettings * __thiscall
UCommonInputPlatformSettings::UCommonInputPlatformSettings(UCommonInputPlatformSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,pFVar1);
  this->DefaultInputType = Gamepad;
  this->bSupportsMouseAndKeyboard = false;
  this->bSupportsTouch = false;
  this->bSupportsGamepad = true;
  this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
  (this->DefaultGamepadName).ComparisonIndex = 0;
  (this->DefaultGamepadName).Number = 0;
  (this->ControllerData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControllerData).ArrayNum = 0;
  (this->ControllerData).ArrayMax = 0;
  (this->ControllerDataClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControllerDataClasses).ArrayNum = 0;
  (this->ControllerDataClasses).ArrayMax = 0;
  this->bCanChangeGamepadType = true;
  this->DefaultGamepadName = FCommonInputDefaults::GamepadGeneric;
  return this;
}

// ~UCommonInputPlatformSettings @ 14a772600

void __thiscall
UCommonInputPlatformSettings::~UCommonInputPlatformSettings(UCommonInputPlatformSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
  pFVar1 = (this->ControllerDataClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
            ((TSoftClassPtr<UCommonInputBaseControllerData> *)
             (this->ControllerData).AllocatorInstance.Data,(this->ControllerData).ArrayNum);
  pFVar1 = (this->ControllerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformSettings::~UPlatformSettings((UPlatformSettings *)this);
  return;
}

// operator() @ 14a772fc0

bool __thiscall
`UCommonInputPlatformSettings::RemoveControllerDataEntry'::__l2::<lambda_2>::operator()
          (void *this,TSubclassOf<UCommonInputBaseControllerData> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FSoftObjectPath local_28;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  lVar3 = *(longlong *)this;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = UCommonInputBaseControllerData::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = (param_1->Class).field0_0x0.DebugPtr;
    }
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)pUVar6);
  bVar4 = FSoftObjectPath::operator==((FSoftObjectPath *)(lVar3 + 8),&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// AddControllerDataEntry @ 14a773710

void __thiscall
UCommonInputPlatformSettings::AddControllerDataEntry
          (UCommonInputPlatformSettings *this,TSoftClassPtr<UCommonInputBaseControllerData> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *local_18 [2];
  
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2527589456286842541>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputBaseTypes.cpp"
                       ,0x153,"!Entry.IsNull()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSoftClassPtr<UCommonInputBaseControllerData>_const_&>
              (&this->ControllerData,param_1);
    if ((this->ControllerData).ArrayNum == (this->ControllerDataClasses).ArrayNum + 1) {
      local_18[0] = TSoftClassPtr<UCommonInputBaseControllerData>::LoadSynchronous(param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_18[0] == (UClass *)0x0) goto LAB_14a7738b5;
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
      pUVar5 = local_18[0];
      if (local_18[0] != (UClass *)0x0) {
        pUVar8 = UCommonInputBaseControllerData::StaticClass();
        if (pUVar8 != (UClass *)0x0) {
          iVar7 = (int)pUVar8->_padding_;
          if (((int)pUVar5->_padding_ < iVar7) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (local_18[0] != (UClass *)0x0)) {
            pFVar2 = (this->ControllerDataClasses).AllocatorInstance.Data;
            if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
               ((FScriptContainerElement *)local_18 <
                pFVar2 + (longlong)(this->ControllerDataClasses).ArrayMax * 8)) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar7 = (this->ControllerDataClasses).ArrayNum;
            piVar1 = &(this->ControllerDataClasses).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->ControllerDataClasses).AllocatorInstance,piVar1);
            }
            (this->ControllerDataClasses).ArrayNum = iVar7 + 1;
            *(UClass **)((this->ControllerDataClasses).AllocatorInstance.Data + (longlong)iVar7 * 8)
                 = local_18[0];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_18[0] != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_18[0]);
            }
          }
        }
      }
    }
    else {
      InitializeControllerData(this);
    }
  }
LAB_14a7738b5:
  pvVar3 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
    return;
  }
  return;
}

// Get @ 14a774c70

UCommonInputPlatformSettings * __cdecl UCommonInputPlatformSettings::Get(void)

{
  UClass *this;
  UCommonInputPlatformSettings *pUVar1;
  
  this = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(this->ClassDefaultObject).field0_0x0.DebugPtr);
  return pUVar1;
}

// GetBestGamepadNameForHardware @ 14a774d50

FName __thiscall
UCommonInputPlatformSettings::GetBestGamepadNameForHardware
          (UCommonInputPlatformSettings *this,FName param_1,FName param_2,FString *param_3)

{
  longlong *plVar1;
  int iVar2;
  UObject *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FName FVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *in_stack_00000028;
  undefined1 local_58;
  undefined1 local_57 [3];
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  
  InitializeControllerData(this);
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_50 = 0;
  if ((this->ControllerDataClasses).ArrayNum < 1) {
LAB_14a774eff:
    if (FVar9 == (FName)0x0) {
      FVar9 = param_2;
    }
    *(FName *)param_1 = FVar9;
    return param_1;
  }
  local_54 = (this->ControllerDataClasses).ArrayNum;
  uVar10 = (ulonglong)(int)local_54;
  pFVar11 = (this->ControllerDataClasses).AllocatorInstance.Data;
  pFVar13 = pFVar11 + uVar10 * 8;
  local_40 = pFVar13;
LAB_14a774db0:
  if ((this->ControllerDataClasses).ArrayNum != (int)uVar10) {
    local_58 = 0;
    `TCheckedPointerIterator<TSubclassOf<UCommonInputBaseControllerData>,int,0>::operator!='::__l2::
    <lambda_1>::operator()(&local_58);
  }
  if (pFVar11 != pFVar13) {
    pUVar8 = *(UClass **)pFVar11;
    if (pUVar8 != (UClass *)0x0) {
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar3 != (UObject *)0x0) {
        pUVar8 = UCommonInputBaseControllerData::StaticClass();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) goto LAB_14a774e4a;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                         ,0x93,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        FVar9 = (FName)(*pcVar5)();
        return FVar9;
      }
      if (pUVar3 != (UObject *)0x0) {
LAB_14a774e4a:
        iVar2 = *(int *)&pUVar3[2].field_0x20;
        plVar12 = *(longlong **)&pUVar3[2].field_0x18;
        plVar1 = plVar12 + (longlong)iVar2 * 3;
        do {
          if (*(int *)&pUVar3[2].field_0x20 != iVar2) {
            local_57[0] = 0;
            `TCheckedPointerIterator<FInputDeviceIdentifierPair_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_57);
          }
          pFVar13 = local_40;
          if (plVar12 == plVar1) break;
          if ((FString *)*plVar12 == param_3) {
            iVar7 = (int)plVar12[2];
            if (iVar7 == *(int *)(in_stack_00000028 + 1)) {
              if (iVar7 < 2) goto LAB_14a774eb9;
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)plVar12[1],(wchar_t *)*in_stack_00000028);
              bVar6 = iVar7 == 0;
            }
            else {
              bVar6 = iVar7 + *(int *)(in_stack_00000028 + 1) == 1;
            }
            if (bVar6) goto LAB_14a774eb9;
          }
          plVar12 = plVar12 + 3;
        } while( true );
      }
    }
    goto LAB_14a774ed5;
  }
  goto LAB_14a774eff;
LAB_14a774eb9:
  FVar4.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x4;
  FVar4.Number = *(uint *)&pUVar3[1].field_0x8;
  if (param_2 == FVar4) {
    *(FName *)param_1 = param_2;
    return param_1;
  }
  local_48 = 0;
  pFVar13 = local_40;
  if (FVar9 == (FName)0x0) {
    FVar9 = FVar4;
  }
LAB_14a774ed5:
  pFVar11 = pFVar11 + 8;
  uVar10 = (ulonglong)local_54;
  goto LAB_14a774db0;
}

// GetControllerDataForInputType @ 14a774f50

TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UCommonInputPlatformSettings::GetControllerDataForInputType
          (UCommonInputPlatformSettings *this,
          TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ECommonInputType param_1,FName param_2)

{
  int iVar1;
  FName FVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  TObjectPtr<UObject>_u_0 TVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  ECommonInputType local_res18;
  TObjectPtr<UObject>_u_0 local_48 [2];
  
  local_res18 = param_1;
  InitializeControllerData(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar11 = (this->ControllerDataClasses).AllocatorInstance.Data;
  iVar1 = (this->ControllerDataClasses).ArrayNum;
  local_res10 = pFVar11 + (longlong)iVar1 * 8;
  do {
    pFVar5 = local_res10;
    if ((this->ControllerDataClasses).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSubclassOf<UCommonInputBaseControllerData>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar5) {
      return __return_storage_ptr__;
    }
    pUVar8 = *(UClass **)pFVar11;
    TVar10.DebugPtr = (UObject *)0x0;
    if (pUVar8 == (UClass *)0x0) {
LAB_14a77503b:
      local_48[0] = TVar10;
      if (TVar10.DebugPtr != (UObject *)0x0) goto LAB_14a775049;
    }
    else {
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      TVar10 = (TObjectPtr<UObject>_u_0)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (TVar10.DebugPtr == (UObject *)0x0) {
LAB_14a775015:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                           ,0x93,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar9;
        }
        goto LAB_14a77503b;
      }
      pUVar8 = UCommonInputBaseControllerData::StaticClass();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&(TVar10.DebugPtr)->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(TVar10.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar7 * 8)
          != &pUVar8->_padding_)) goto LAB_14a775015;
LAB_14a775049:
      local_48[0] = TVar10;
      if ((*(ECommonInputType *)(TVar10.DebugPtr + 1) == local_res18) &&
         ((*(ECommonInputType *)(TVar10.DebugPtr + 1) != Gamepad ||
          (FVar2.ComparisonIndex.Value = *(uint *)&(TVar10.DebugPtr + 0x28)->field_0x4,
          FVar2.Number = *(uint *)&(TVar10.DebugPtr + 0x28)->field_0x8, FVar2 == param_2)))) {
        pTVar3 = (TObjectPtr<UObject>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
        if ((pTVar3 <= local_48) &&
           ((local_48 < pTVar3 + __return_storage_ptr__->ArrayMax &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        ((TObjectPtr<UObject>_u_0 *)
        ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr =
             (UObject *)local_48[0];
      }
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14a775d90

UClass * __cdecl UCommonInputPlatformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputPlatformSettings",
               &Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUCommonInputPlatformSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UCommonInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton;
}

// InitializeControllerData @ 14a776c70

void __thiscall
UCommonInputPlatformSettings::InitializeControllerData(UCommonInputPlatformSettings *this)

{
  int *piVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar11;
  undefined1 local_res8 [8];
  UObject *local_58;
  TPersistentObjectPtr<FSoftObjectPath> local_50;
  
  uVar3 = (this->ControllerData).ArrayNum;
  if (uVar3 != (this->ControllerDataClasses).ArrayNum) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(this->ControllerDataClasses).ArrayMax;
    (this->ControllerDataClasses).ArrayNum = 0;
    if ((this->ControllerDataClasses).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&(this->ControllerDataClasses).AllocatorInstance,0,piVar1);
    }
    iVar4 = (this->ControllerData).ArrayNum;
    pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->ControllerData).AllocatorInstance.Data
    ;
    pTVar2 = pTVar11 + iVar4;
    while( true ) {
      if ((this->ControllerData).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSoftClassPtr<UCommonInputBaseControllerData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar11 == pTVar2) break;
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                (&local_50,pTVar11);
      pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_50);
      if (pUVar9 == (UObject *)0x0) {
        if (local_50.ObjectID.AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&local_50.ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_50);
          goto LAB_14a776d53;
        }
LAB_14a776da9:
        pUVar9 = (UObject *)0x0;
      }
      else {
LAB_14a776d53:
        if (pUVar9 == (UObject *)0x0) goto LAB_14a776da9;
        pUVar10 = Z_Construct_UClass_UClass_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if (((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
             &pUVar10->_padding_)) ||
           (pUVar10 = UCommonInputBaseControllerData::StaticClass(), pUVar10 == (UClass *)0x0))
        goto LAB_14a776da9;
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)&pUVar9[1].field_0x10 < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar9[1].field_0x8 + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14a776da9;
      }
      local_58 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a776dcf:
        pUVar9 = local_58;
        if ((local_58 != (UObject *)0x0) &&
           (pUVar10 = UCommonInputBaseControllerData::StaticClass(), pUVar10 != (UClass *)0x0)) {
          iVar8 = (int)pUVar10->_padding_;
          if ((*(int *)&pUVar9[1].field_0x10 < iVar8) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar9[1].field_0x8 + (longlong)iVar8 * 8)
              != &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (local_58 != (UObject *)0x0)) {
            pFVar5 = (this->ControllerDataClasses).AllocatorInstance.Data;
            if ((pFVar5 <= (FScriptContainerElement *)&local_58) &&
               (((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = (this->ControllerDataClasses).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->ControllerDataClasses).AllocatorInstance,piVar1);
            }
            (this->ControllerDataClasses).ArrayNum = iVar8 + 1;
            *(UObject **)
             ((this->ControllerDataClasses).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_58
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_58);
            }
          }
        }
      }
      else if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
        goto LAB_14a776dcf;
      }
      if (local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pTVar11 = pTVar11 + 1;
    }
  }
  return;
}

// InitializePlatformDefaults @ 14a776f70

void __thiscall
UCommonInputPlatformSettings::InitializePlatformDefaults(UCommonInputPlatformSettings *this)

{
  bool bVar1;
  FName FVar2;
  int iVar3;
  FDataDrivenPlatformInfo *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  FVar2 = (FName)this->_padding_;
  pFVar4 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(FVar2);
  pwVar6 = L"";
  if ((pFVar4->DefaultInputType).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->DefaultInputType).Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,"Gamepad");
  if (iVar3 == 0) {
    this->DefaultInputType = Gamepad;
  }
  else {
    if ((pFVar4->DefaultInputType).Data.ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->DefaultInputType).Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,"Touch");
    if (iVar3 == 0) {
      this->DefaultInputType = Touch;
    }
    else {
      if ((pFVar4->DefaultInputType).Data.ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->DefaultInputType).Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,"MouseAndKeyboard");
      if (iVar3 == 0) {
        this->DefaultInputType = MouseAndKeyboard;
      }
    }
  }
  this->bSupportsMouseAndKeyboard = pFVar4->bSupportsMouseAndKeyboard;
  this->bSupportsGamepad = pFVar4->bSupportsGamepad;
  this->bCanChangeGamepadType = pFVar4->bCanChangeGamepadType;
  bVar1 = pFVar4->bSupportsTouch;
  this->DefaultGamepadName = FVar2;
  this->bSupportsTouch = bVar1;
  return;
}

// PostLoad @ 14a777da0

void __thiscall UCommonInputPlatformSettings::PostLoad(UCommonInputPlatformSettings *this)

{
  UObject::PostLoad((UObject *)this);
  (this->ControllerDataClasses).ArrayNum = 0;
  if ((this->ControllerDataClasses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ControllerDataClasses).AllocatorInstance,0,
               &(this->ControllerDataClasses).ArrayMax);
  }
  InitializeControllerData(this);
  return;
}

// PostReloadConfig @ 14a777df0

void __thiscall
UCommonInputPlatformSettings::PostReloadConfig
          (UCommonInputPlatformSettings *this,FProperty *param_1)

{
  (this->ControllerDataClasses).ArrayNum = 0;
  if ((this->ControllerDataClasses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ControllerDataClasses).AllocatorInstance,0,
               &(this->ControllerDataClasses).ArrayMax);
  }
  return;
}

// RemoveControllerDataEntry @ 14a7788e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCommonInputPlatformSettings::RemoveControllerDataEntry
          (UCommonInputPlatformSettings *this,TSoftClassPtr<UCommonInputBaseControllerData> *param_1
          )

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  <lambda_2> local_res8;
  
  iVar7 = (this->ControllerData).ArrayNum;
  uVar6 = 0;
  bVar3 = false;
  if (0 < iVar7) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < iVar7) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)
                         ((this->ControllerData).AllocatorInstance.Data +
                         ((longlong)(int)uVar6 * 5 + 1) * 8),
                         (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
      if (bVar4) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar6 < (this->ControllerData).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->ControllerData,uVar6);
      }
      else {
        uVar6 = uVar6 + 1;
      }
      iVar7 = (this->ControllerData).ArrayNum;
    } while ((int)uVar6 < iVar7);
    if (bVar3) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&(this->ControllerData).AllocatorInstance,iVar7,
                 &(this->ControllerData).ArrayMax);
    }
  }
  local_res8.Entry = param_1;
  TArray<TSubclassOf<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UCommonInputPlatformSettings::RemoveControllerDataEntry_::__l2::<lambda_2>_>
            (&this->ControllerDataClasses,&local_res8,Default);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  FMemory::Free(pvVar1);
  return;
}

// StaticRegisterNativesUCommonInputPlatformSettings @ 14a779210

void __cdecl UCommonInputPlatformSettings::StaticRegisterNativesUCommonInputPlatformSettings(void)

{
  return;
}

// SupportsInputType @ 14a7792c0

bool __thiscall
UCommonInputPlatformSettings::SupportsInputType
          (UCommonInputPlatformSettings *this,ECommonInputType param_1)

{
  if (param_1 == MouseAndKeyboard) {
    return this->bSupportsMouseAndKeyboard;
  }
  if (param_1 != Gamepad) {
    if (param_1 != Touch) {
      return false;
    }
    return this->bSupportsTouch;
  }
  return this->bSupportsGamepad;
}

// TryGetInputBrush @ 14a779790

bool __thiscall
UCommonInputPlatformSettings::TryGetInputBrush
          (UCommonInputPlatformSettings *this,FSlateBrush *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2,ECommonInputType param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_28 [8];
  TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> local_20;
  
  InitializeControllerData(this);
  GetControllerDataForInputType(this,&local_20,param_3,param_4);
  iVar3 = local_20.ArrayNum;
  pFVar1 = local_20.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_20.AllocatorInstance.Data;
  while( true ) {
    if (local_20.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UCommonInputBaseControllerData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_28);
    }
    if (FVar4.Data == pFVar1) break;
    cVar2 = (**(code **)(**(longlong **)FVar4.Data + 0x2b0))
                      (*(longlong **)FVar4.Data,param_1,param_2);
    if (cVar2 != '\0') {
      if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.AllocatorInstance.Data);
      }
      return true;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return false;
}

// TryGetInputBrush @ 14a779860

bool __thiscall
UCommonInputPlatformSettings::TryGetInputBrush
          (UCommonInputPlatformSettings *this,FSlateBrush *param_1,FKey *param_2,
          ECommonInputType param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_28 [8];
  TArray<UCommonInputBaseControllerData_const_*,TSizedDefaultAllocator<32>_> local_20;
  
  InitializeControllerData(this);
  GetControllerDataForInputType(this,&local_20,param_3,param_4);
  iVar3 = local_20.ArrayNum;
  pFVar1 = local_20.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_20.AllocatorInstance.Data;
  while( true ) {
    if (local_20.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UCommonInputBaseControllerData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_28);
    }
    if (FVar4.Data == pFVar1) break;
    cVar2 = (**(code **)(**(longlong **)FVar4.Data + 0x2b8))
                      (*(longlong **)FVar4.Data,param_1,param_2);
    if (cVar2 != '\0') {
      if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

