// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a2a9b0

UClass * __cdecl UContentBundleTypeFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleTypeFactory",
               &Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton,
               StaticRegisterNativesUContentBundleTypeFactory,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleTypeFactory>,
               InternalVTableHelperCtorCaller<UContentBundleTypeFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton;
}

// UContentBundleTypeFactory @ 148a42520

UContentBundleTypeFactory * __thiscall
UContentBundleTypeFactory::UContentBundleTypeFactory
          (UContentBundleTypeFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleTypeFactory__6B_;
  return this;
}

// UContentBundleTypeFactory @ 148a42550

UContentBundleTypeFactory * __thiscall
UContentBundleTypeFactory::UContentBundleTypeFactory
          (UContentBundleTypeFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleTypeFactory__6B_;
  return this;
}

// ~UContentBundleTypeFactory @ 148a445c0

void __thiscall
UContentBundleTypeFactory::~UContentBundleTypeFactory(UContentBundleTypeFactory *this)

{
  *(undefined ***)this = &___7UContentBundleTypeFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateClient @ 148a4e590

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FContentBundleClient,1> * __thiscall
UContentBundleTypeFactory::CreateClient
          (UContentBundleTypeFactory *this,
          TSharedPtr<FContentBundleClient,1> *__return_storage_ptr__,
          UContentBundleDescriptor *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FContentBundleClient,1> *pTVar4;
  UContentBundleDescriptor *local_res10;
  
  pTVar3 = ::operator_new(0x88);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FContentBundleClient *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFContentBundleClient___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FContentBundleClient__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UContentBundleDescriptor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    local_res10 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UContentBundleDescriptor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar3[1].SharedReferenceCount,(FObjectPtr)&local_res10);
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    ::FString::FString((FString *)(pTVar3 + 7),param_2);
    *(undefined4 *)&pTVar3[8]._padding_ = 0;
    if (5 < (byte)LogContentBundle._0_1_) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)&pTVar3[1].SharedReferenceCount);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
    FContentBundleClient::SetState((FContentBundleClient *)(pTVar3 + 1),Registered);
    if (((FContentBundleClient *)(pTVar3 + 1) == (FContentBundleClient *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar1)();
      return pTVar4;
    }
    __return_storage_ptr__->Object = (FContentBundleClient *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148a59e10

UClass * __cdecl UContentBundleTypeFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleTypeFactory",
               &Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton,
               StaticRegisterNativesUContentBundleTypeFactory,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleTypeFactory>,
               InternalVTableHelperCtorCaller<UContentBundleTypeFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton;
}

// StaticRegisterNativesUContentBundleTypeFactory @ 148a6a300

void __cdecl UContentBundleTypeFactory::StaticRegisterNativesUContentBundleTypeFactory(void)

{
  return;
}

