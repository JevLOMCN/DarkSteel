// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 9

// StaticClass @ 14d7cada0

UClass * __cdecl UMediaProfileSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileSettings",
               &Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton,
               StaticRegisterNativesUMediaProfileSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMediaProfileSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton;
}

// UMediaProfileSettings @ 14d7d1540

UMediaProfileSettings * __thiscall
UMediaProfileSettings::UMediaProfileSettings(UMediaProfileSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->StartupMediaProfile).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMediaProfileSettings__6B_;
  (this->MediaSourceProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSourceProxy).ArrayNum = 0;
  (this->MediaSourceProxy).ArrayMax = 0;
  (this->MediaOutputProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaOutputProxy).ArrayNum = 0;
  (this->MediaOutputProxy).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMediaProfileSettings @ 14d7d15a0

UMediaProfileSettings * __thiscall
UMediaProfileSettings::UMediaProfileSettings
          (UMediaProfileSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->StartupMediaProfile).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMediaProfileSettings__6B_;
  (this->MediaSourceProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSourceProxy).ArrayNum = 0;
  (this->MediaSourceProxy).ArrayMax = 0;
  (this->MediaOutputProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaOutputProxy).ArrayNum = 0;
  (this->MediaOutputProxy).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UMediaProfileSettings @ 14d7d1d90

void __thiscall UMediaProfileSettings::~UMediaProfileSettings(UMediaProfileSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMediaProfileSettings__6B_;
  pvVar1 = *(void **)&(this->StartupMediaProfile).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSoftObjectPtr<UProxyMediaOutput>,int>
            ((TSoftObjectPtr<UProxyMediaOutput> *)(this->MediaOutputProxy).AllocatorInstance.Data,
             (this->MediaOutputProxy).ArrayNum);
  pFVar2 = (this->MediaOutputProxy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSoftObjectPtr<UProxyMediaSource>,int>
            ((TSoftObjectPtr<UProxyMediaSource> *)(this->MediaSourceProxy).AllocatorInstance.Data,
             (this->MediaSourceProxy).ArrayNum);
  pFVar2 = (this->MediaSourceProxy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d7dacf0

UClass * __cdecl UMediaProfileSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileSettings",
               &Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton,
               StaticRegisterNativesUMediaProfileSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMediaProfileSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton;
}

// GetStartupMediaProfile @ 14d7db300

UMediaProfile * __thiscall
UMediaProfileSettings::GetStartupMediaProfile(UMediaProfileSettings *this)

{
  int iVar1;
  UMediaProfile *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMediaProfile *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->StartupMediaProfile);
  if (pUVar2 == (UMediaProfile *)0x0) {
    if (*(longlong *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x8 == 0) {
      return (UMediaProfile *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->StartupMediaProfile).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UMediaProfile *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->StartupMediaProfile);
  }
  if (pUVar2 != (UMediaProfile *)0x0) {
    pUVar3 = UMediaProfile::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMediaProfile *)0x0;
}

// LoadMediaOutputProxies @ 14d7dc560

TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> * __thiscall
UMediaProfileSettings::LoadMediaOutputProxies
          (UMediaProfileSettings *this,
          TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->MediaOutputProxy).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->MediaOutputProxy).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->MediaOutputProxy).AllocatorInstance.Data
  ;
  pTVar2 = this_00 + iVar4;
  do {
    if ((this->MediaOutputProxy).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UProxyMediaOutput>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar2) {
      return __return_storage_ptr__;
    }
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 == (UObject *)0x0) {
      if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        goto LAB_14d7dc621;
      }
LAB_14d7dc649:
      local_38[0] = (UObject *)0x0;
    }
    else {
LAB_14d7dc621:
      if (pUVar9 == (UObject *)0x0) goto LAB_14d7dc649;
      pUVar10 = UProxyMediaOutput::StaticClass();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
         (local_38[0] = pUVar9,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
         &pUVar10->_padding_)) goto LAB_14d7dc649;
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    this_00 = this_00 + 1;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_38[0];
  } while( true );
}

// LoadMediaSourceProxies @ 14d7dc730

TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> * __thiscall
UMediaProfileSettings::LoadMediaSourceProxies
          (UMediaProfileSettings *this,
          TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->MediaSourceProxy).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->MediaSourceProxy).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->MediaSourceProxy).AllocatorInstance.Data
  ;
  pTVar2 = this_00 + iVar4;
  do {
    if ((this->MediaSourceProxy).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UProxyMediaSource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar2) {
      return __return_storage_ptr__;
    }
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 == (UObject *)0x0) {
      if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        goto LAB_14d7dc7f1;
      }
LAB_14d7dc819:
      local_38[0] = (UObject *)0x0;
    }
    else {
LAB_14d7dc7f1:
      if (pUVar9 == (UObject *)0x0) goto LAB_14d7dc819;
      pUVar10 = UProxyMediaSource::StaticClass();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
         (local_38[0] = pUVar9,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
         &pUVar10->_padding_)) goto LAB_14d7dc819;
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    this_00 = this_00 + 1;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_38[0];
  } while( true );
}

// StaticRegisterNativesUMediaProfileSettings @ 14d7e1f20

void __cdecl UMediaProfileSettings::StaticRegisterNativesUMediaProfileSettings(void)

{
  return;
}

