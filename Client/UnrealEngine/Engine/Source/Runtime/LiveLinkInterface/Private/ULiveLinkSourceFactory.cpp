// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 14

// StaticClass @ 14cfaab80

UClass * __cdecl ULiveLinkSourceFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton,
               StaticRegisterNativesULiveLinkSourceFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkSourceFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton;
}

// ULiveLinkSourceFactory @ 14cfb5cb0

ULiveLinkSourceFactory * __thiscall
ULiveLinkSourceFactory::ULiveLinkSourceFactory(ULiveLinkSourceFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkSourceFactory__6B_;
  return this;
}

// ULiveLinkSourceFactory @ 14cfb5ce0

ULiveLinkSourceFactory * __thiscall
ULiveLinkSourceFactory::ULiveLinkSourceFactory
          (ULiveLinkSourceFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkSourceFactory__6B_;
  return this;
}

// ~ULiveLinkSourceFactory @ 14cfb66d0

void __thiscall ULiveLinkSourceFactory::~ULiveLinkSourceFactory(ULiveLinkSourceFactory *this)

{
  *(undefined ***)this = &___7ULiveLinkSourceFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildCreationPanel @ 14cfb7b40

TSharedPtr<SWidget,1> * __thiscall
ULiveLinkSourceFactory::BuildCreationPanel
          (ULiveLinkSourceFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          *param_1)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// CreateSource @ 14cfb8030

TSharedPtr<ILiveLinkSource,1> * __thiscall
ULiveLinkSourceFactory::CreateSource
          (ULiveLinkSourceFactory *this,TSharedPtr<ILiveLinkSource,1> *__return_storage_ptr__,
          FString *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSourceFactory.h"
             ,0x42,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkSource *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateSourceCreationPanel @ 14cfb8070

TSharedPtr<SWidget,1> * __thiscall
ULiveLinkSourceFactory::CreateSourceCreationPanel
          (ULiveLinkSourceFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMenuType @ 14cfba6b0

EMenuType __thiscall ULiveLinkSourceFactory::GetMenuType(ULiveLinkSourceFactory *this)

{
  return Disabled;
}

// GetPrivateStaticClass @ 14cfbb2d0

UClass * __cdecl ULiveLinkSourceFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton,
               StaticRegisterNativesULiveLinkSourceFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkSourceFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton;
}

// GetSourceDisplayName @ 14cfbbce0

FText * __thiscall
ULiveLinkSourceFactory::GetSourceDisplayName
          (ULiveLinkSourceFactory *this,FText *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSourceFactory.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSourceTooltip @ 14cfbbd40

FText * __thiscall
ULiveLinkSourceFactory::GetSourceTooltip(ULiveLinkSourceFactory *this,FText *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSourceFactory.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsEnabled @ 14cfbdd60

bool __thiscall ULiveLinkSourceFactory::IsEnabled(ULiveLinkSourceFactory *this)

{
  return true;
}

// OnSourceCreationPanelClosed @ 14cfbdfd0

TSharedPtr<ILiveLinkSource,1> * __thiscall
ULiveLinkSourceFactory::OnSourceCreationPanelClosed
          (ULiveLinkSourceFactory *this,TSharedPtr<ILiveLinkSource,1> *__return_storage_ptr__,
          bool param_1)

{
  __return_storage_ptr__->Object = (ILiveLinkSource *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesULiveLinkSourceFactory @ 14cfbe330

void __cdecl ULiveLinkSourceFactory::StaticRegisterNativesULiveLinkSourceFactory(void)

{
  return;
}

