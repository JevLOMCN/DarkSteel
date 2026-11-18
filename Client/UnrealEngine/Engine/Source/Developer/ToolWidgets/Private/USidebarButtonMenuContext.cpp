// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 6

// StaticClass @ 142d52970

UClass * __cdecl USidebarButtonMenuContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"SidebarButtonMenuContext",
               &Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton,
               StaticRegisterNativesUSidebarButtonMenuContext,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USidebarButtonMenuContext>,
               InternalVTableHelperCtorCaller<USidebarButtonMenuContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton;
}

// USidebarButtonMenuContext @ 142d63ed0

USidebarButtonMenuContext * __thiscall
USidebarButtonMenuContext::USidebarButtonMenuContext
          (USidebarButtonMenuContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USidebarButtonMenuContext__6B_;
  (this->SidebarWeak).Object = (SSidebar *)0x0;
  (this->SidebarWeak).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DrawerWeak).Object = (FSidebarDrawer *)0x0;
  (this->DrawerWeak).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USidebarButtonMenuContext @ 142d63f10

USidebarButtonMenuContext * __thiscall
USidebarButtonMenuContext::USidebarButtonMenuContext
          (USidebarButtonMenuContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USidebarButtonMenuContext__6B_;
  (this->SidebarWeak).Object = (SSidebar *)0x0;
  (this->SidebarWeak).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DrawerWeak).Object = (FSidebarDrawer *)0x0;
  (this->DrawerWeak).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~USidebarButtonMenuContext @ 142d67af0

void __thiscall
USidebarButtonMenuContext::~USidebarButtonMenuContext(USidebarButtonMenuContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7USidebarButtonMenuContext__6B_;
  pTVar3 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->SidebarWeak).WeakReferenceCount.ReferenceController;
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
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142dafec0

UClass * __cdecl USidebarButtonMenuContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"SidebarButtonMenuContext",
               &Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton,
               StaticRegisterNativesUSidebarButtonMenuContext,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USidebarButtonMenuContext>,
               InternalVTableHelperCtorCaller<USidebarButtonMenuContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USidebarButtonMenuContext.InnerSingleton;
}

// StaticRegisterNativesUSidebarButtonMenuContext @ 142dda220

void __cdecl USidebarButtonMenuContext::StaticRegisterNativesUSidebarButtonMenuContext(void)

{
  return;
}

