// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 1496cb870

UClass * __cdecl UToolsContextCursorAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolsContextCursorAPI",
               &Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton,
               StaticRegisterNativesUToolsContextCursorAPI,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolsContextCursorAPI>,
               InternalVTableHelperCtorCaller<UToolsContextCursorAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton;
}

// UToolsContextCursorAPI @ 1496d3ef0

UToolsContextCursorAPI * __thiscall
UToolsContextCursorAPI::UToolsContextCursorAPI(UToolsContextCursorAPI *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolsContextCursorAPI__6B_;
  (this->CursorOverrideWidget).Object = (SWidget *)0x0;
  (this->CursorOverrideWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UToolsContextCursorAPI @ 1496d4bf0

void __thiscall UToolsContextCursorAPI::~UToolsContextCursorAPI(UToolsContextCursorAPI *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CursorOverrideWidget).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// ClearCursorOverride @ 1496d8e50

void __thiscall UToolsContextCursorAPI::ClearCursorOverride(UToolsContextCursorAPI *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  this->bIsCursorOverridden = false;
  this->CursorOverrideShape = Default;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CursorOverrideWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->CursorOverrideWidget).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CursorOverrideWidget).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// GetCurrentCursorOverride @ 1496dcce0

Type __thiscall UToolsContextCursorAPI::GetCurrentCursorOverride(UToolsContextCursorAPI *this)

{
  return this->CursorOverrideShape;
}

// GetCurrentCursorOverrideWidget @ 1496dccf0

TSharedPtr<SWidget,1> * __thiscall
UToolsContextCursorAPI::GetCurrentCursorOverrideWidget
          (UToolsContextCursorAPI *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->CursorOverrideWidget).Object;
  pTVar1 = (this->CursorOverrideWidget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496de150

UClass * __cdecl UToolsContextCursorAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolsContextCursorAPI",
               &Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton,
               StaticRegisterNativesUToolsContextCursorAPI,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolsContextCursorAPI>,
               InternalVTableHelperCtorCaller<UToolsContextCursorAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolsContextCursorAPI.InnerSingleton;
}

// IsCursorOverridden @ 1496e2620

bool __thiscall UToolsContextCursorAPI::IsCursorOverridden(UToolsContextCursorAPI *this)

{
  return this->bIsCursorOverridden;
}

// SetCursorOverride @ 1496e5b20

void __thiscall UToolsContextCursorAPI::SetCursorOverride(UToolsContextCursorAPI *this,Type param_1)

{
  this->bIsCursorOverridden = true;
  this->CursorOverrideShape = param_1;
  return;
}

// SetCursorOverrideWidget @ 1496e5b30

void __thiscall
UToolsContextCursorAPI::SetCursorOverrideWidget
          (UToolsContextCursorAPI *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10 [2];
  
  this->bIsCursorOverridden = true;
  this->CursorOverrideShape = Custom;
  local_10[0].ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->CursorOverrideWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->CursorOverrideWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CursorOverrideWidget).SharedReferenceCount,local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

// StaticRegisterNativesUToolsContextCursorAPI @ 1496e67e0

void __cdecl UToolsContextCursorAPI::StaticRegisterNativesUToolsContextCursorAPI(void)

{
  return;
}

