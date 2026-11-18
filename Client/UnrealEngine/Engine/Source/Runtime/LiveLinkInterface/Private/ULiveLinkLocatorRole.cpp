// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 12

// StaticClass @ 14cfb0a40

UClass * __cdecl ULiveLinkLocatorRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLocatorRole",
               &Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton,
               StaticRegisterNativesULiveLinkLocatorRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLocatorRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton;
}

// ULiveLinkLocatorRole @ 14cfb5bf0

ULiveLinkLocatorRole * __thiscall
ULiveLinkLocatorRole::ULiveLinkLocatorRole(ULiveLinkLocatorRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkLocatorRole__6B_;
  return this;
}

// ULiveLinkLocatorRole @ 14cfb5c20

ULiveLinkLocatorRole * __thiscall
ULiveLinkLocatorRole::ULiveLinkLocatorRole(ULiveLinkLocatorRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkLocatorRole__6B_;
  return this;
}

// ~ULiveLinkLocatorRole @ 14cfb6690

void __thiscall ULiveLinkLocatorRole::~ULiveLinkLocatorRole(ULiveLinkLocatorRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8ea0

UScriptStruct * __thiscall ULiveLinkLocatorRole::GetBlueprintDataStruct(ULiveLinkLocatorRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData,(UObject *)pUVar1,
                         L"LiveLinkLocatorBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb9780

FText * __thiscall
ULiveLinkLocatorRole::GetDisplayName(ULiveLinkLocatorRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"LiveLinkLocator",L"Locator");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb99e0

UScriptStruct * __thiscall ULiveLinkLocatorRole::GetFrameDataStruct(ULiveLinkLocatorRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData,(UObject *)pUVar1,
                         L"LiveLinkLocatorFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfbb160

UClass * __cdecl ULiveLinkLocatorRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLocatorRole",
               &Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton,
               StaticRegisterNativesULiveLinkLocatorRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLocatorRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbee0

UScriptStruct * __thiscall ULiveLinkLocatorRole::GetStaticDataStruct(ULiveLinkLocatorRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData,(UObject *)pUVar1,
                         L"LiveLinkLocatorStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbd890

bool __thiscall
ULiveLinkLocatorRole::InitializeBlueprintData
          (ULiveLinkLocatorRole *this,FLiveLinkSubjectFrameData *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseBlueprintData> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  FLiveLinkLocatorStaticData *pFVar7;
  FLiveLinkLocatorFrameData *pFVar8;
  UScriptStruct *pUVar9;
  
  lVar3 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
  lVar4 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData,
                             (UObject *)pUVar6,L"LiveLinkLocatorBlueprintData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbd9c1;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton)
                   ->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.OuterSingleton)->
           _padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pFVar7 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkLocatorStaticData>
                           (&param_1->StaticData);
        pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
                           (&param_1->FrameData);
        if (lVar3 == 0) {
          return false;
        }
        if (pFVar7 == (FLiveLinkLocatorStaticData *)0x0) {
          return false;
        }
        if (pFVar8 == (FLiveLinkLocatorFrameData *)0x0) {
          return false;
        }
        pUVar9 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b0))(this);
        UScriptStruct::CopyScriptStruct(pUVar9,(void *)(lVar3 + 8),pFVar7,1);
        pUVar9 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2b8))(this);
        UScriptStruct::CopyScriptStruct(pUVar9,(void *)(lVar3 + 0x30),pFVar8,1);
        return true;
      }
    }
  }
LAB_14cfbd9c1:
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkLocatorStaticData>
            (&param_1->StaticData);
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
            (&param_1->FrameData);
  return false;
}

// IsFrameDataValid @ 14cfbde80

bool __thiscall
ULiveLinkLocatorRole::IsFrameDataValid
          (ULiveLinkLocatorRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,bool *param_3)

{
  bool bVar1;
  char cVar2;
  FLiveLinkLocatorStaticData *pFVar3;
  FLiveLinkLocatorFrameData *pFVar4;
  
  bVar1 = ULiveLinkBasicRole::IsFrameDataValid((ULiveLinkBasicRole *)this,param_1,param_2,param_3);
  cVar2 = '\0';
  if (bVar1) {
    pFVar3 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkLocatorStaticData>
                       (param_1);
    pFVar4 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
                       (param_2);
    cVar2 = pFVar3->bUnlabelledData;
    if ((bool)cVar2 == false) {
      if ((pFVar4 != (FLiveLinkLocatorFrameData *)0x0) &&
         ((pFVar3->LocatorNames).ArrayNum == (pFVar4->Locators).ArrayNum)) {
        return true;
      }
      return false;
    }
    if (0 < (pFVar3->LocatorNames).ArrayNum) {
      cVar2 = '\0';
    }
  }
  return (bool)cVar2;
}

// StaticRegisterNativesULiveLinkLocatorRole @ 14cfbe310

void __cdecl ULiveLinkLocatorRole::StaticRegisterNativesULiveLinkLocatorRole(void)

{
  return;
}

