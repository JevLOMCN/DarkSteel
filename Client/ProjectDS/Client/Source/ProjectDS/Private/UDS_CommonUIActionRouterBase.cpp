// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4619d0

UClass * __cdecl UDS_CommonUIActionRouterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonUIActionRouterBase",
               &Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton,
               StaticRegisterNativesUDS_CommonUIActionRouterBase,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonUIActionRouterBase>,
               InternalVTableHelperCtorCaller<UDS_CommonUIActionRouterBase>,local_res8,
               UCommonUIActionRouterBase::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton;
}

// UDS_CommonUIActionRouterBase @ 14b466380

UDS_CommonUIActionRouterBase * __thiscall
UDS_CommonUIActionRouterBase::UDS_CommonUIActionRouterBase
          (UDS_CommonUIActionRouterBase *this,FVTableHelper *param_1)

{
  UCommonUIActionRouterBase::UCommonUIActionRouterBase((UCommonUIActionRouterBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CommonUIActionRouterBase__6B_;
  return this;
}

// ~UDS_CommonUIActionRouterBase @ 14b466a50

void __thiscall
UDS_CommonUIActionRouterBase::~UDS_CommonUIActionRouterBase(UDS_CommonUIActionRouterBase *this)

{
  *(undefined ***)this = &___7UDS_CommonUIActionRouterBase__6B_;
  UCommonUIActionRouterBase::~UCommonUIActionRouterBase((UCommonUIActionRouterBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b468b60

UClass * __cdecl UDS_CommonUIActionRouterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonUIActionRouterBase",
               &Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton,
               StaticRegisterNativesUDS_CommonUIActionRouterBase,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonUIActionRouterBase>,
               InternalVTableHelperCtorCaller<UDS_CommonUIActionRouterBase>,local_res8,
               UCommonUIActionRouterBase::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonUIActionRouterBase.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonUIActionRouterBase @ 14b468da0

void __cdecl UDS_CommonUIActionRouterBase::StaticRegisterNativesUDS_CommonUIActionRouterBase(void)

{
  return;
}

// UDS_CommonUIActionRouterBase @ 14bc83a20

UDS_CommonUIActionRouterBase * __thiscall
UDS_CommonUIActionRouterBase::UDS_CommonUIActionRouterBase(UDS_CommonUIActionRouterBase *this)

{
  UCommonUIActionRouterBase::UCommonUIActionRouterBase((UCommonUIActionRouterBase *)this);
  *(undefined ***)this = &___7UDS_CommonUIActionRouterBase__6B_;
  return this;
}

// Deinitialize @ 14bc96600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonUIActionRouterBase::Deinitialize(UDS_CommonUIActionRouterBase *this)

{
  UCommonUIActionRouterBase::Deinitialize((UCommonUIActionRouterBase *)this);
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return;
  }
  return;
}

// Initialize @ 14bca6a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonUIActionRouterBase::Initialize
          (UDS_CommonUIActionRouterBase *this,FSubsystemCollectionBase *param_1)

{
  UCommonUIActionRouterBase::Initialize((UCommonUIActionRouterBase *)this,param_1);
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return;
  }
  return;
}

// MakeAnalogCursor @ 14bcaa6c0

TSharedRef<FCommonAnalogCursor,1> * __thiscall
UDS_CommonUIActionRouterBase::MakeAnalogCursor
          (UDS_CommonUIActionRouterBase *this,
          TSharedRef<FCommonAnalogCursor,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_CommonAnalogCursor *this_00;
  TSharedRef<FCommonAnalogCursor,1> *pTVar3;
  TRawPtrProxy<FDS_CommonAnalogCursor> local_res10 [3];
  TSharedRef<FDS_CommonAnalogCursor,1> local_18;
  
  this_00 = ::operator_new(0x160);
  if (this_00 == (FDS_CommonAnalogCursor *)0x0) {
    local_res10[0].Object = (FDS_CommonAnalogCursor *)0x0;
  }
  else {
    local_res10[0].Object =
         FDS_CommonAnalogCursor::FDS_CommonAnalogCursor(this_00,(UCommonUIActionRouterBase *)this);
    if ((((local_res10[0].Object != (FDS_CommonAnalogCursor *)0x0) &&
         ((local_res10[0].Object)->_padding_ != 0)) && ((local_res10[0].Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res10[0].Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FCommonAnalogCursor,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FDS_CommonAnalogCursor,1>::TSharedRef<FDS_CommonAnalogCursor,1><FDS_CommonAnalogCursor>
            (&local_18,local_res10);
  (**(code **)((local_18.Object)->_padding_ + 0xc0))();
  __return_storage_ptr__->Object = (FCommonAnalogCursor *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

