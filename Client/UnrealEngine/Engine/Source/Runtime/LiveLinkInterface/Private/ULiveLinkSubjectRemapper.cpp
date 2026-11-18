// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 11

// StaticClass @ 14cfb1580

UClass * __cdecl ULiveLinkSubjectRemapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton,
               StaticRegisterNativesULiveLinkSubjectRemapper,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkSubjectRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectRemapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton;
}

// ULiveLinkSubjectRemapper @ 14cfb5eb0

ULiveLinkSubjectRemapper * __thiscall
ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper
          (ULiveLinkSubjectRemapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkSubjectRemapper__6B_;
  *(undefined8 *)&this->BoneNameMap = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  this->bDirty = false;
  return this;
}

// ULiveLinkSubjectRemapper @ 14cfb5f10

ULiveLinkSubjectRemapper * __thiscall
ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper
          (ULiveLinkSubjectRemapper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkSubjectRemapper__6B_;
  *(undefined8 *)&this->BoneNameMap = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  this->bDirty = false;
  return this;
}

// ~ULiveLinkSubjectRemapper @ 14cfb6730

void __thiscall ULiveLinkSubjectRemapper::~ULiveLinkSubjectRemapper(ULiveLinkSubjectRemapper *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSubjectRemapper__6B_;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameMap);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateWorker @ 14cfb8090

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
ULiveLinkSubjectRemapper::CreateWorker
          (ULiveLinkSubjectRemapper *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSubjectRemapper.h"
             ,0x2c,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkSubjectRemapperWorker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cfbb430

UClass * __cdecl ULiveLinkSubjectRemapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton,
               StaticRegisterNativesULiveLinkSubjectRemapper,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkSubjectRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectRemapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton;
}

// GetSupportedRole @ 14cfbc180

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkSubjectRemapper::GetSupportedRole(ULiveLinkSubjectRemapper *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSubjectRemapper.h"
             ,0x3a,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetWorker @ 14cfbcb40

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
ULiveLinkSubjectRemapper::GetWorker
          (ULiveLinkSubjectRemapper *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSubjectRemapper.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkSubjectRemapperWorker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 14cfbcc70

void __thiscall
ULiveLinkSubjectRemapper::Initialize(ULiveLinkSubjectRemapper *this,FLiveLinkSubjectKey *param_1)

{
  return;
}

// IsValidRemapper @ 14cfbdf70

bool __thiscall ULiveLinkSubjectRemapper::IsValidRemapper(ULiveLinkSubjectRemapper *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkSubjectRemapper.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesULiveLinkSubjectRemapper @ 14cfbe350

void __cdecl ULiveLinkSubjectRemapper::StaticRegisterNativesULiveLinkSubjectRemapper(void)

{
  return;
}

