// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 11

// StaticClass @ 14cfaecc0

UClass * __cdecl ULiveLinkCameraRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCameraRole",
               &Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton,
               StaticRegisterNativesULiveLinkCameraRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkCameraRole>,
               InternalVTableHelperCtorCaller<ULiveLinkCameraRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton;
}

// ULiveLinkCameraRole @ 14cfb57b0

ULiveLinkCameraRole * __thiscall
ULiveLinkCameraRole::ULiveLinkCameraRole(ULiveLinkCameraRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkCameraRole__6B_;
  return this;
}

// ULiveLinkCameraRole @ 14cfb57e0

ULiveLinkCameraRole * __thiscall
ULiveLinkCameraRole::ULiveLinkCameraRole(ULiveLinkCameraRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkCameraRole__6B_;
  return this;
}

// ~ULiveLinkCameraRole @ 14cfb64f0

void __thiscall ULiveLinkCameraRole::~ULiveLinkCameraRole(ULiveLinkCameraRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8de0

UScriptStruct * __thiscall ULiveLinkCameraRole::GetBlueprintDataStruct(ULiveLinkCameraRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData,(UObject *)pUVar1,
                         L"LiveLinkCameraBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb96c0

FText * __thiscall
ULiveLinkCameraRole::GetDisplayName(ULiveLinkCameraRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"CameraRole",L"Camera");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb9920

UScriptStruct * __thiscall ULiveLinkCameraRole::GetFrameDataStruct(ULiveLinkCameraRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData,(UObject *)pUVar1,
                         L"LiveLinkCameraFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfbaa40

UClass * __cdecl ULiveLinkCameraRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCameraRole",
               &Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton,
               StaticRegisterNativesULiveLinkCameraRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkCameraRole>,
               InternalVTableHelperCtorCaller<ULiveLinkCameraRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbe20

UScriptStruct * __thiscall ULiveLinkCameraRole::GetStaticDataStruct(ULiveLinkCameraRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData,(UObject *)pUVar1,
                         L"LiveLinkCameraStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbd140

bool __thiscall
ULiveLinkCameraRole::InitializeBlueprintData
          (ULiveLinkCameraRole *this,FLiveLinkSubjectFrameData *param_1,
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
LAB_14cfbd1fa:
    lVar4 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd1fa;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData,(UObject *)pUVar7,
                           L"LiveLinkCameraBlueprintData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbd1fa;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.OuterSingleton)->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd1fa;
  }
  pvVar8 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 == 0) {
LAB_14cfbd293:
    pvVar8 = (void *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd293;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData,(UObject *)pUVar7,
                           L"LiveLinkCameraStaticData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbd293;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd293;
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
      if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData,(UObject *)pUVar7,
                             L"LiveLinkCameraFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbd331;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton)->_padding_))
      {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14cfbd333;
    }
  }
LAB_14cfbd331:
  pvVar9 = (void *)0x0;
LAB_14cfbd333:
  if (((lVar4 == 0) || (pvVar8 == (void *)0x0)) || (pvVar9 == (void *)0x0)) {
    bVar3 = false;
  }
  else {
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b0))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 8),pvVar8,1);
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b8))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 0x30),pvVar9,1);
    bVar3 = true;
  }
  return bVar3;
}

// StaticRegisterNativesULiveLinkCameraRole @ 14cfbe270

void __cdecl ULiveLinkCameraRole::StaticRegisterNativesULiveLinkCameraRole(void)

{
  return;
}

