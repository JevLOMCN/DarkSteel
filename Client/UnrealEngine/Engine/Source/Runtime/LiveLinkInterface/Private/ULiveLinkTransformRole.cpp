// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 11

// StaticClass @ 14cfae440

UClass * __cdecl ULiveLinkTransformRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkTransformRole",
               &Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkTransformRole>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton;
}

// ULiveLinkTransformRole @ 14cfb60a0

ULiveLinkTransformRole * __thiscall
ULiveLinkTransformRole::ULiveLinkTransformRole(ULiveLinkTransformRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkTransformRole__6B_;
  return this;
}

// ULiveLinkTransformRole @ 14cfb60d0

ULiveLinkTransformRole * __thiscall
ULiveLinkTransformRole::ULiveLinkTransformRole
          (ULiveLinkTransformRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkTransformRole__6B_;
  return this;
}

// ~ULiveLinkTransformRole @ 14cfb67e0

void __thiscall ULiveLinkTransformRole::~ULiveLinkTransformRole(ULiveLinkTransformRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8f10

UScriptStruct * __thiscall
ULiveLinkTransformRole::GetBlueprintDataStruct(ULiveLinkTransformRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData,(UObject *)pUVar1
                         ,L"LiveLinkTransformBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb9830

FText * __thiscall
ULiveLinkTransformRole::GetDisplayName(ULiveLinkTransformRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"TransformRole",L"Transform");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb9a50

UScriptStruct * __thiscall ULiveLinkTransformRole::GetFrameDataStruct(ULiveLinkTransformRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,(UObject *)pUVar1,
                         L"LiveLinkTransformFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfbb590

UClass * __cdecl ULiveLinkTransformRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkTransformRole",
               &Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkTransformRole>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbf50

UScriptStruct * __thiscall ULiveLinkTransformRole::GetStaticDataStruct(ULiveLinkTransformRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,(UObject *)pUVar1,
                         L"LiveLinkTransformStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbda20

bool __thiscall
ULiveLinkTransformRole::InitializeBlueprintData
          (ULiveLinkTransformRole *this,FLiveLinkSubjectFrameData *param_1,
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
LAB_14cfbdada:
    lVar4 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbdada;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData,
                           (UObject *)pUVar7,L"LiveLinkTransformBlueprintData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbdada;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton)
                 ->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton)->
         _padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbdada;
  }
  pvVar8 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 == 0) {
LAB_14cfbdb73:
    pvVar8 = (void *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14cfbdb73;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
      Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,(UObject *)pUVar7,
                           L"LiveLinkTransformStaticData");
      if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14cfbdb73;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.OuterSingleton)->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14cfbdb73;
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
      if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,(UObject *)pUVar7
                             ,L"LiveLinkTransformFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbdc11;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.OuterSingleton)->_padding_
         )) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14cfbdc13;
    }
  }
LAB_14cfbdc11:
  pvVar9 = (void *)0x0;
LAB_14cfbdc13:
  if (((lVar4 == 0) || (pvVar8 == (void *)0x0)) || (pvVar9 == (void *)0x0)) {
    bVar3 = false;
  }
  else {
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b0))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 8),pvVar8,1);
    pUVar10 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b8))(this);
    UScriptStruct::CopyScriptStruct(pUVar10,(void *)(lVar4 + 0x20),pvVar9,1);
    bVar3 = true;
  }
  return bVar3;
}

// StaticRegisterNativesULiveLinkTransformRole @ 14cfbe370

void __cdecl ULiveLinkTransformRole::StaticRegisterNativesULiveLinkTransformRole(void)

{
  return;
}

