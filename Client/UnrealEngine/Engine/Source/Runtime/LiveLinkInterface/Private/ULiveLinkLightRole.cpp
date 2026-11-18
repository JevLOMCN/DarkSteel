// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 11

// StaticClass @ 14cfb04c0

UClass * __cdecl ULiveLinkLightRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLightRole",
               &Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton,
               StaticRegisterNativesULiveLinkLightRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLightRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLightRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton;
}

// ULiveLinkLightRole @ 14cfb5b90

ULiveLinkLightRole * __thiscall
ULiveLinkLightRole::ULiveLinkLightRole(ULiveLinkLightRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkLightRole__6B_;
  return this;
}

// ULiveLinkLightRole @ 14cfb5bc0

ULiveLinkLightRole * __thiscall
ULiveLinkLightRole::ULiveLinkLightRole(ULiveLinkLightRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkLightRole__6B_;
  return this;
}

// ~ULiveLinkLightRole @ 14cfb6670

void __thiscall ULiveLinkLightRole::~ULiveLinkLightRole(ULiveLinkLightRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8e60

UScriptStruct * __thiscall ULiveLinkLightRole::GetBlueprintDataStruct(ULiveLinkLightRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData,(UObject *)pUVar1,
                         L"LiveLinkLightBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb9740

FText * __thiscall
ULiveLinkLightRole::GetDisplayName(ULiveLinkLightRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"LightRole",L"Light");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb99a0

UScriptStruct * __thiscall ULiveLinkLightRole::GetFrameDataStruct(ULiveLinkLightRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightFrameData,(UObject *)pUVar1,
                         L"LiveLinkLightFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfbb0a0

UClass * __cdecl ULiveLinkLightRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLightRole",
               &Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton,
               StaticRegisterNativesULiveLinkLightRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLightRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLightRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbea0

UScriptStruct * __thiscall ULiveLinkLightRole::GetStaticDataStruct(ULiveLinkLightRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightStaticData,(UObject *)pUVar1,
                         L"LiveLinkLightStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbd620

bool __thiscall
ULiveLinkLightRole::InitializeBlueprintData
          (ULiveLinkLightRole *this,FLiveLinkSubjectFrameData *param_1,
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
LAB_14cfbd6da:
    lVar4 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd6da;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData,(UObject *)pUVar7,
                           L"LiveLinkLightBlueprintData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbd6da;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.OuterSingleton)->_padding_))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd6da;
  }
  pvVar8 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 == 0) {
LAB_14cfbd773:
    pvVar8 = (void *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbd773;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightStaticData,(UObject *)pUVar7,
                           L"LiveLinkLightStaticData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbd773;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbd773;
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
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightFrameData,(UObject *)pUVar7,
                             L"LiveLinkLightFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbd811;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14cfbd813;
    }
  }
LAB_14cfbd811:
  pvVar9 = (void *)0x0;
LAB_14cfbd813:
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

// StaticRegisterNativesULiveLinkLightRole @ 14cfbe300

void __cdecl ULiveLinkLightRole::StaticRegisterNativesULiveLinkLightRole(void)

{
  return;
}

