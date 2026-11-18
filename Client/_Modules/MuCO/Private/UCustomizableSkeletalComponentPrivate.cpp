// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 11

// StaticClass @ 14aba8b50

UClass * __cdecl UCustomizableSkeletalComponentPrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalComponentPrivate",
               &Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalComponentPrivate,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableSkeletalComponentPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalComponentPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton;
}

// UCustomizableSkeletalComponentPrivate @ 14abbdb20

UCustomizableSkeletalComponentPrivate * __thiscall
UCustomizableSkeletalComponentPrivate::UCustomizableSkeletalComponentPrivate
          (UCustomizableSkeletalComponentPrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableSkeletalComponentPrivate__6B_;
  (this->InstanceUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  return this;
}

// ~UCustomizableSkeletalComponentPrivate @ 14abbfa50

void __thiscall
UCustomizableSkeletalComponentPrivate::~UCustomizableSkeletalComponentPrivate
          (UCustomizableSkeletalComponentPrivate *this)

{
  this->_padding_ = (longlong)&___7UCustomizableSkeletalComponentPrivate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14abdff70

UClass * __cdecl UCustomizableSkeletalComponentPrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalComponentPrivate",
               &Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalComponentPrivate,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableSkeletalComponentPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalComponentPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalComponentPrivate.InnerSingleton;
}

// StaticRegisterNativesUCustomizableSkeletalComponentPrivate @ 14abf2090

void __cdecl
UCustomizableSkeletalComponentPrivate::StaticRegisterNativesUCustomizableSkeletalComponentPrivate
          (void)

{
  return;
}

// UCustomizableSkeletalComponentPrivate @ 14ac0c000

UCustomizableSkeletalComponentPrivate * __thiscall
UCustomizableSkeletalComponentPrivate::UCustomizableSkeletalComponentPrivate
          (UCustomizableSkeletalComponentPrivate *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCustomizableObjectInstanceUsage *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableSkeletalComponentPrivate__6B_;
  (this->InstanceUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"InstanceUsage");
  FVar1 = *pFVar2;
  pUVar3 = UCustomizableObjectInstanceUsage::StaticClass();
  pUVar4 = (UCustomizableObjectInstanceUsage *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCustomizableObjectInstanceUsage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->InstanceUsage).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// Callbacks @ 14ac16400

void __thiscall
UCustomizableSkeletalComponentPrivate::Callbacks(UCustomizableSkeletalComponentPrivate *this)

{
  UCustomizableObjectInstanceUsage *pUVar1;
  
  pUVar1 = (this->InstanceUsage).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObjectInstanceUsage *)0x0) {
    UCustomizableObjectInstanceUsagePrivate::Callbacks((pUVar1->Private).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// GetAttachedSkeletalMesh @ 14ac1d420

USkeletalMesh * __thiscall
UCustomizableSkeletalComponentPrivate::GetAttachedSkeletalMesh
          (UCustomizableSkeletalComponentPrivate *this)

{
  UCustomizableObjectInstanceUsage *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMesh *pUVar4;
  USkeletalMeshComponent *this_00;
  
  pUVar1 = (this->InstanceUsage).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObjectInstanceUsage *)0x0) {
    pUVar1 = (UCustomizableObjectInstanceUsage *)((pUVar1->Private).field0_0x0.DebugPtr)->_padding_;
    if (pUVar1 == (UCustomizableObjectInstanceUsage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0xa4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (USkeletalMesh *)(*pcVar2)();
        return pUVar4;
      }
    }
    this_00 = UCustomizableObjectInstanceUsage::GetAttachParent(pUVar1);
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
      return pUVar4;
    }
  }
  return (USkeletalMesh *)0x0;
}

// GetPublic @ 14ac246f0

UCustomizableSkeletalComponent * __thiscall
UCustomizableSkeletalComponentPrivate::GetPublic(UCustomizableSkeletalComponentPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalComponent *pUVar3;
  
  pUVar3 = (UCustomizableSkeletalComponent *)this->_padding_;
  if (pUVar3 == (UCustomizableSkeletalComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x95,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableSkeletalComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetPublic @ 14ac24740

UCustomizableSkeletalComponent * __thiscall
UCustomizableSkeletalComponentPrivate::GetPublic(UCustomizableSkeletalComponentPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalComponent *pUVar3;
  
  pUVar3 = (UCustomizableSkeletalComponent *)this->_padding_;
  if (pUVar3 == (UCustomizableSkeletalComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableSkeletalComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetSkeletalMesh @ 14ac24b40

USkeletalMesh * __thiscall
UCustomizableSkeletalComponentPrivate::GetSkeletalMesh(UCustomizableSkeletalComponentPrivate *this)

{
  UCustomizableObjectInstanceUsage *pUVar1;
  UCustomizableObjectInstanceUsagePrivate *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMesh *pUVar6;
  UCustomizableSkeletalComponent *pUVar7;
  FName FVar8;
  UCustomizableObjectInstance *this_00;
  
  pUVar1 = (this->InstanceUsage).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObjectInstanceUsage *)0x0) {
    return (USkeletalMesh *)0x0;
  }
  pUVar2 = (pUVar1->Private).field0_0x0.DebugPtr;
  lVar3 = pUVar2->_padding_;
  if (lVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                       ,0xa4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (USkeletalMesh *)(*pcVar4)();
      return pUVar6;
    }
  }
  pUVar7 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)(lVar3 + 0x60));
  if (pUVar7 == (UCustomizableSkeletalComponent *)0x0) {
    this_00 = *(UCustomizableObjectInstance **)(lVar3 + 0x48);
  }
  else {
    this_00 = (pUVar7->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this_00 != (UCustomizableObjectInstance *)0x0) {
    pUVar1 = (UCustomizableObjectInstanceUsage *)pUVar2->_padding_;
    if (pUVar1 == (UCustomizableObjectInstanceUsage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0xa4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar6 = (USkeletalMesh *)(*pcVar4)();
        return pUVar6;
      }
    }
    FVar8 = UCustomizableObjectInstanceUsage::GetComponentName(pUVar1);
    pUVar6 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh(this_00,(FName *)FVar8);
    return pUVar6;
  }
  return (USkeletalMesh *)0x0;
}

