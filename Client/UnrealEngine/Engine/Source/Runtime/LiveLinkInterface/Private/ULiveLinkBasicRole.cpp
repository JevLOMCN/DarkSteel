// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 12

// StaticClass @ 14cfada50

UClass * __cdecl ULiveLinkBasicRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkBasicRole",
               &Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton,
               StaticRegisterNativesULiveLinkBasicRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkBasicRole>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicRole>,local_res8,
               ULiveLinkRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton;
}

// ULiveLinkBasicRole @ 14cfb5750

ULiveLinkBasicRole * __thiscall
ULiveLinkBasicRole::ULiveLinkBasicRole(ULiveLinkBasicRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkBasicRole__6B_;
  return this;
}

// ULiveLinkBasicRole @ 14cfb5780

ULiveLinkBasicRole * __thiscall
ULiveLinkBasicRole::ULiveLinkBasicRole(ULiveLinkBasicRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkBasicRole__6B_;
  return this;
}

// ~ULiveLinkBasicRole @ 14cfb64d0

void __thiscall ULiveLinkBasicRole::~ULiveLinkBasicRole(ULiveLinkBasicRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8da0

UScriptStruct * __thiscall ULiveLinkBasicRole::GetBlueprintDataStruct(ULiveLinkBasicRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData,(UObject *)pUVar1,
                         L"LiveLinkBasicBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton;
}

// GetDisplayName @ 14cfb9680

FText * __thiscall
ULiveLinkBasicRole::GetDisplayName(ULiveLinkBasicRole *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkRole",L"BasicRole",L"Basic");
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb98e0

UScriptStruct * __thiscall ULiveLinkBasicRole::GetFrameDataStruct(ULiveLinkBasicRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,(UObject *)pUVar1,
                         L"LiveLinkBaseFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton;
}

// GetPrivateStaticClass @ 14cfba980

UClass * __cdecl ULiveLinkBasicRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkBasicRole",
               &Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton,
               StaticRegisterNativesULiveLinkBasicRole,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkBasicRole>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicRole>,local_res8,
               ULiveLinkRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbde0

UScriptStruct * __thiscall ULiveLinkBasicRole::GetStaticDataStruct(ULiveLinkBasicRole *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,(UObject *)pUVar1,
                         L"LiveLinkBaseStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.OuterSingleton;
}

// InitializeBlueprintData @ 14cfbcfc0

bool __thiscall
ULiveLinkBasicRole::InitializeBlueprintData
          (ULiveLinkBasicRole *this,FLiveLinkSubjectFrameData *param_1,
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
  if (lVar5 != 0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData,(UObject *)pUVar7
                             ,L"LiveLinkBasicBlueprintData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14cfbd07a;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.OuterSingleton)->_padding_
         )) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14cfbd07c;
    }
  }
LAB_14cfbd07a:
  lVar4 = 0;
LAB_14cfbd07c:
  pvVar8 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  pFVar1 = &param_1->FrameData;
  pvVar9 = (void *)(**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar5 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar5 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
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

// IsFrameDataValid @ 14cfbdde0

bool __thiscall
ULiveLinkBasicRole::IsFrameDataValid
          (ULiveLinkBasicRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,bool *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  lVar2 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (lVar2 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  lVar2 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  lVar3 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar3 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  if (((lVar1 != 0) && (lVar2 != 0)) && (*(int *)(lVar1 + 8) == *(int *)(lVar2 + 0x78))) {
    return true;
  }
  return false;
}

// StaticRegisterNativesULiveLinkBasicRole @ 14cfbe260

void __cdecl ULiveLinkBasicRole::StaticRegisterNativesULiveLinkBasicRole(void)

{
  return;
}

