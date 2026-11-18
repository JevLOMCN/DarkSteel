// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 11

// StaticClass @ 14cfaf400

UClass * __cdecl ULiveLinkInputDeviceRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkInputDeviceRole",
               &Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton,
               StaticRegisterNativesULiveLinkInputDeviceRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkInputDeviceRole>,
               InternalVTableHelperCtorCaller<ULiveLinkInputDeviceRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton;
}

// ULiveLinkInputDeviceRole @ 14cfb5b30

ULiveLinkInputDeviceRole * __thiscall
ULiveLinkInputDeviceRole::ULiveLinkInputDeviceRole
          (ULiveLinkInputDeviceRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkInputDeviceRole__6B_;
  return this;
}

// ULiveLinkInputDeviceRole @ 14cfb5b60

ULiveLinkInputDeviceRole * __thiscall
ULiveLinkInputDeviceRole::ULiveLinkInputDeviceRole
          (ULiveLinkInputDeviceRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkInputDeviceRole__6B_;
  return this;
}

// ~ULiveLinkInputDeviceRole @ 14cfb6650

void __thiscall ULiveLinkInputDeviceRole::~ULiveLinkInputDeviceRole(ULiveLinkInputDeviceRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8e20

UScriptStruct * __thiscall
ULiveLinkInputDeviceRole::GetBlueprintDataStruct(ULiveLinkInputDeviceRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData,
                         (UObject *)pUVar1,L"LiveLinkGamepadInputDeviceBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb9700

FText * __thiscall
ULiveLinkInputDeviceRole::GetDisplayName
          (ULiveLinkInputDeviceRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkInputDeviceRole",L"LiveLinkInputDevice",
             L"Live Link Input Device");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb9960

UScriptStruct * __thiscall
ULiveLinkInputDeviceRole::GetFrameDataStruct(ULiveLinkInputDeviceRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData,
                         (UObject *)pUVar1,L"LiveLinkGamepadInputDeviceFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfbafe0

UClass * __cdecl ULiveLinkInputDeviceRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkInputDeviceRole",
               &Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton,
               StaticRegisterNativesULiveLinkInputDeviceRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkInputDeviceRole>,
               InternalVTableHelperCtorCaller<ULiveLinkInputDeviceRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbe60

UScriptStruct * __thiscall
ULiveLinkInputDeviceRole::GetStaticDataStruct(ULiveLinkInputDeviceRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData,
                         (UObject *)pUVar1,L"LiveLinkGamepadInputDeviceStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbd3b0

bool __thiscall
ULiveLinkInputDeviceRole::InitializeBlueprintData
          (ULiveLinkInputDeviceRole *this,FLiveLinkSubjectFrameData *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseBlueprintData> *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  void *pvVar8;
  void *pvVar9;
  UScriptStruct *pUVar10;
  
  lVar4 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
  lVar5 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar5 == 0) {
LAB_14cfbd46a:
    lVar4 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd46a;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData,
                           (UObject *)pUVar7,L"LiveLinkGamepadInputDeviceBlueprintData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton
          == (UScriptStruct *)0x0) goto LAB_14cfbd46a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.OuterSingleton)
         ->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd46a;
  }
  pvVar8 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 == 0) {
LAB_14cfbd503:
    pvVar8 = (void *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd503;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData,
                           (UObject *)pUVar7,L"LiveLinkGamepadInputDeviceStaticData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbd503;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.OuterSingleton)->
         _padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd503;
  }
  pFVar1 = &param_1->FrameData;
  pvVar9 = (void *)(**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar5 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar5 != 0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData,
                             (UObject *)pUVar7,L"LiveLinkGamepadInputDeviceFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbd5a1;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.
                   OuterSingleton)->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14cfbd5a3;
    }
  }
LAB_14cfbd5a1:
  pvVar9 = (void *)0x0;
LAB_14cfbd5a3:
  if (((lVar4 == 0) || (pvVar8 == (void *)0x0)) || (pvVar9 == (void *)0x0)) {
    bVar3 = false;
  }
  else {
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b0))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 8),pvVar8,1);
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b8))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 0x18),pvVar9,1);
    bVar3 = true;
  }
  return bVar3;
}

// StaticRegisterNativesULiveLinkInputDeviceRole @ 14cfbe2f0

void __cdecl ULiveLinkInputDeviceRole::StaticRegisterNativesULiveLinkInputDeviceRole(void)

{
  return;
}

