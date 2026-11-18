// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e7a010

UClass * __cdecl UAISenseConfig_Blueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Blueprint",
               &Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Blueprint,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Blueprint>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Blueprint>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton;
}

// UAISenseConfig_Blueprint @ 146e809c0

UAISenseConfig_Blueprint * __thiscall
UAISenseConfig_Blueprint::UAISenseConfig_Blueprint
          (UAISenseConfig_Blueprint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig_Blueprint__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UAISenseConfig_Blueprint @ 146e81bd0

void __thiscall UAISenseConfig_Blueprint::~UAISenseConfig_Blueprint(UAISenseConfig_Blueprint *this)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8ec60

UClass * __cdecl UAISenseConfig_Blueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Blueprint",
               &Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Blueprint,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Blueprint>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Blueprint>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig_Blueprint @ 146ea0110

void __cdecl UAISenseConfig_Blueprint::StaticRegisterNativesUAISenseConfig_Blueprint(void)

{
  return;
}

// UAISenseConfig_Blueprint @ 146f93fe0

UAISenseConfig_Blueprint * __thiscall
UAISenseConfig_Blueprint::UAISenseConfig_Blueprint
          (UAISenseConfig_Blueprint *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  FVar1 = FColor::White;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar1.field0_0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Blueprint__6B_;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FColorList::Grey.field0_0x0;
  return this;
}

// GetSenseImplementation @ 146fb4c50

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Blueprint::GetSenseImplementation(UAISenseConfig_Blueprint *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RDX;
  
  pUVar4 = (this->Implementation).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UAISense_Blueprint::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (this->Implementation).Class.field0_0x0.DebugPtr;
        goto LAB_146fb4ca4;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_146fb4ca4:
  *(UClass **)in_RDX.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

