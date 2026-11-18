// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 6

// StaticClass @ 142c2de10

UClass * __cdecl USlateTabManagerContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"SlateTabManagerContext",
               &Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton,
               StaticRegisterNativesUSlateTabManagerContext,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateTabManagerContext>,
               InternalVTableHelperCtorCaller<USlateTabManagerContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton;
}

// USlateTabManagerContext @ 142c3ac20

/* WARNING: Enum "Type": Some values do not have unique names */

USlateTabManagerContext * __thiscall
USlateTabManagerContext::USlateTabManagerContext
          (USlateTabManagerContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateTabManagerContext__6B_;
  (this->TabManager).Object = (FTabManager *)0x0;
  (this->TabManager).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USlateTabManagerContext @ 142c3ac60

/* WARNING: Enum "Type": Some values do not have unique names */

USlateTabManagerContext * __thiscall
USlateTabManagerContext::USlateTabManagerContext
          (USlateTabManagerContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateTabManagerContext__6B_;
  (this->TabManager).Object = (FTabManager *)0x0;
  (this->TabManager).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~USlateTabManagerContext @ 142c3c840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USlateTabManagerContext::~USlateTabManagerContext(USlateTabManagerContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7USlateTabManagerContext__6B_;
  pTVar3 = (this->TabManager).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142c5f260

UClass * __cdecl USlateTabManagerContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"SlateTabManagerContext",
               &Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton,
               StaticRegisterNativesUSlateTabManagerContext,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateTabManagerContext>,
               InternalVTableHelperCtorCaller<USlateTabManagerContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton;
}

// StaticRegisterNativesUSlateTabManagerContext @ 142c70e60

void __cdecl USlateTabManagerContext::StaticRegisterNativesUSlateTabManagerContext(void)

{
  return;
}

