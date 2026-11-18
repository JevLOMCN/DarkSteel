// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 10

// StaticClass @ 14cfaa5e0

UClass * __cdecl ULiveLinkFrameTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",
               &Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton,
               StaticRegisterNativesULiveLinkFrameTranslator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkFrameTranslator>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton;
}

// ULiveLinkFrameTranslator @ 14cfb5ad0

ULiveLinkFrameTranslator * __thiscall
ULiveLinkFrameTranslator::ULiveLinkFrameTranslator
          (ULiveLinkFrameTranslator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFrameTranslator__6B_;
  return this;
}

// ULiveLinkFrameTranslator @ 14cfb5b00

ULiveLinkFrameTranslator * __thiscall
ULiveLinkFrameTranslator::ULiveLinkFrameTranslator
          (ULiveLinkFrameTranslator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFrameTranslator__6B_;
  return this;
}

// ~ULiveLinkFrameTranslator @ 14cfb6630

void __thiscall ULiveLinkFrameTranslator::~ULiveLinkFrameTranslator(ULiveLinkFrameTranslator *this)

{
  *(undefined ***)this = &___7ULiveLinkFrameTranslator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanTranslate @ 14cfb7e50

bool __thiscall
ULiveLinkFrameTranslator::CanTranslate
          (ULiveLinkFrameTranslator *this,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong local_res8;
  
  (**(code **)(*(longlong *)this + 0x2b8))(this,&local_res8);
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  lVar2 = local_res8;
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  if (*(longlong *)param_1.Class.field0_0x0 == 0) {
    return false;
  }
  if (local_res8 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  lVar5 = local_res8;
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  if (local_res8 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar5 = local_res8;
    if (bVar3) goto LAB_14cfb7f45;
  }
  lVar5 = 0;
LAB_14cfb7f45:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = ULiveLinkRole::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// FetchWorker @ 14cfb8d20

TSharedPtr<ILiveLinkFrameTranslatorWorker,1> * __thiscall
ULiveLinkFrameTranslator::FetchWorker
          (ULiveLinkFrameTranslator *this,
          TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h"
             ,0x33,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkFrameTranslatorWorker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetFromRole @ 14cfba670

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkFrameTranslator::GetFromRole(ULiveLinkFrameTranslator *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 14cfbaf30

UClass * __cdecl ULiveLinkFrameTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",
               &Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton,
               StaticRegisterNativesULiveLinkFrameTranslator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkFrameTranslator>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton;
}

// GetToRole @ 14cfbc1c0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkFrameTranslator::GetToRole(ULiveLinkFrameTranslator *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkFrameTranslator @ 14cfbe2e0

void __cdecl ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator(void)

{
  return;
}

