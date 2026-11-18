// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a8955a0

UClass * __cdecl UAnimNotify_PoseSearchEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchEvent",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PoseSearchEvent,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PoseSearchEvent>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchEvent>,local_res8,
               UAnimNotify_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton;
}

// UAnimNotify_PoseSearchEvent @ 14a8ace00

UAnimNotify_PoseSearchEvent * __thiscall
UAnimNotify_PoseSearchEvent::UAnimNotify_PoseSearchEvent
          (UAnimNotify_PoseSearchEvent *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchEvent__6B_;
  (this->EventTag).TagName = (FName)0x0;
  return this;
}

// UAnimNotify_PoseSearchEvent @ 14a8ace30

UAnimNotify_PoseSearchEvent * __thiscall
UAnimNotify_PoseSearchEvent::UAnimNotify_PoseSearchEvent
          (UAnimNotify_PoseSearchEvent *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchEvent__6B_;
  (this->EventTag).TagName = (FName)0x0;
  return this;
}

// ~UAnimNotify_PoseSearchEvent @ 14a8ae050

void __thiscall
UAnimNotify_PoseSearchEvent::~UAnimNotify_PoseSearchEvent(UAnimNotify_PoseSearchEvent *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchBase__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bce50

UClass * __cdecl UAnimNotify_PoseSearchEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchEvent",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PoseSearchEvent,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PoseSearchEvent>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchEvent>,local_res8,
               UAnimNotify_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton;
}

// StaticRegisterNativesUAnimNotify_PoseSearchEvent @ 14a8ce2c0

void __cdecl UAnimNotify_PoseSearchEvent::StaticRegisterNativesUAnimNotify_PoseSearchEvent(void)

{
  return;
}

