// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkCore
// Functions: 9

// StaticClass @ 14453ae70

UClass * __cdecl UAudioLinkSettingsAbstract::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkCore",L"AudioLinkSettingsAbstract",
               &Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton,
               StaticRegisterNativesUAudioLinkSettingsAbstract,0x38,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAudioLinkSettingsAbstract>,
               InternalVTableHelperCtorCaller<UAudioLinkSettingsAbstract>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton;
}

// UAudioLinkSettingsAbstract @ 14453b060

UAudioLinkSettingsAbstract * __thiscall
UAudioLinkSettingsAbstract::UAudioLinkSettingsAbstract
          (UAudioLinkSettingsAbstract *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioLinkSettingsAbstract__6B_;
  (this->ProxyInstance).Object = (IAudioLinkSettingsProxy *)0x0;
  (this->ProxyInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioLinkSettingsAbstract @ 14453b0a0

UAudioLinkSettingsAbstract * __thiscall
UAudioLinkSettingsAbstract::UAudioLinkSettingsAbstract
          (UAudioLinkSettingsAbstract *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioLinkSettingsAbstract__6B_;
  (this->ProxyInstance).Object = (IAudioLinkSettingsProxy *)0x0;
  (this->ProxyInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UAudioLinkSettingsAbstract @ 14453b0e0

void __thiscall
UAudioLinkSettingsAbstract::~UAudioLinkSettingsAbstract(UAudioLinkSettingsAbstract *this)

{
  this->_padding_ = (longlong)&___7UAudioLinkSettingsAbstract__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxyInstance).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetFactoryName @ 14453b1a0

FName __thiscall UAudioLinkSettingsAbstract::GetFactoryName(UAudioLinkSettingsAbstract *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkCore\\Public\\AudioLinkSettingsAbstract.h"
             ,0x26,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14453b1e0

UClass * __cdecl UAudioLinkSettingsAbstract::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkCore",L"AudioLinkSettingsAbstract",
               &Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton,
               StaticRegisterNativesUAudioLinkSettingsAbstract,0x38,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAudioLinkSettingsAbstract>,
               InternalVTableHelperCtorCaller<UAudioLinkSettingsAbstract>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton;
}

// GetProxy @ 14453b290

TSharedPtr<IAudioLinkSettingsProxy,1> * __thiscall
UAudioLinkSettingsAbstract::GetProxy(UAudioLinkSettingsAbstract *this)

{
  TSharedPtr<IAudioLinkSettingsProxy,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->ProxyInstance;
  if ((this->ProxyInstance).Object == (IAudioLinkSettingsProxy *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x2c0))();
    if (pTVar1 != (TSharedPtr<IAudioLinkSettingsProxy,1> *)puVar6) {
      pTVar1->Object = (IAudioLinkSettingsProxy *)*puVar6;
      *puVar6 = 0;
      pTVar4 = (TReferenceControllerBase<1> *)puVar6[1];
      pTVar5 = (this->ProxyInstance).SharedReferenceCount.ReferenceController;
      if (pTVar4 != pTVar5) {
        puVar6[1] = 0;
        (this->ProxyInstance).SharedReferenceCount.ReferenceController = pTVar4;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar5->SharedReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)pTVar5->_padding_)(pTVar5);
            LOCK();
            paVar2 = &pTVar5->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return pTVar1;
}

// MakeProxy @ 14453b340

TSharedPtr<IAudioLinkSettingsProxy,1> * __thiscall
UAudioLinkSettingsAbstract::MakeProxy
          (UAudioLinkSettingsAbstract *this,
          TSharedPtr<IAudioLinkSettingsProxy,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkCore\\Public\\AudioLinkSettingsAbstract.h"
             ,0x3f,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (IAudioLinkSettingsProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAudioLinkSettingsAbstract @ 14453b380

void __cdecl UAudioLinkSettingsAbstract::StaticRegisterNativesUAudioLinkSettingsAbstract(void)

{
  return;
}

