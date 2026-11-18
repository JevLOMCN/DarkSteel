// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b599060

UClass * __cdecl UDS_SoundDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundDataAsset",
               &Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_SoundDataAsset,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SoundDataAsset>,
               InternalVTableHelperCtorCaller<UDS_SoundDataAsset>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton;
}

// UDS_SoundDataAsset @ 14b59cc20

UDS_SoundDataAsset * __thiscall
UDS_SoundDataAsset::UDS_SoundDataAsset(UDS_SoundDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SoundDataAsset__6B_;
  *(undefined8 *)&this->SoundClassMap = 0;
  *(undefined8 *)&(this->SoundClassMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundClassMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundClassMap).field_0x34 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundClassMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x48 = 0;
  this->Mix_MasterSound = (USoundMix *)0x0;
  return this;
}

// UDS_SoundDataAsset @ 14b59cc80

UDS_SoundDataAsset * __thiscall
UDS_SoundDataAsset::UDS_SoundDataAsset(UDS_SoundDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SoundDataAsset__6B_;
  *(undefined8 *)&this->SoundClassMap = 0;
  *(undefined8 *)&(this->SoundClassMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundClassMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundClassMap).field_0x34 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundClassMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundClassMap).field_0x48 = 0;
  this->Mix_MasterSound = (USoundMix *)0x0;
  return this;
}

// ~UDS_SoundDataAsset @ 14b59d430

void __thiscall UDS_SoundDataAsset::~UDS_SoundDataAsset(UDS_SoundDataAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_SoundDataAsset__6B_;
  *(undefined4 *)&(this->SoundClassMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundClassMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SoundType,USoundClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SoundType,USoundClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SoundClassMap);
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e180

UClass * __cdecl UDS_SoundDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundDataAsset",
               &Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_SoundDataAsset,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SoundDataAsset>,
               InternalVTableHelperCtorCaller<UDS_SoundDataAsset>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_SoundDataAsset @ 14b59e550

void __cdecl UDS_SoundDataAsset::StaticRegisterNativesUDS_SoundDataAsset(void)

{
  return;
}

// FindSoundClass @ 14bbba540

TWeakObjectPtr<USoundClass,FWeakObjectPtr> __thiscall
UDS_SoundDataAsset::FindSoundClass(UDS_SoundDataAsset *this,EDS_SoundType param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  int iVar3;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  undefined8 *puVar4;
  uint in_R8D;
  undefined1 *puVar5;
  UObject *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  if (*(int *)&(this->SoundClassMap).field_0x8 != *(int *)&(this->SoundClassMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SoundClassMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SoundClassMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->SoundClassMap).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->SoundClassMap + (longlong)iVar3 * 0x18;
        if (*(uint *)(*(longlong *)&this->SoundClassMap + (longlong)iVar3 * 0x18) == in_R8D) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            pUVar2 = (UObject *)*puVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            *(undefined8 *)this_00 = 0;
            local_res8 = pUVar2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar2);
            }
            goto LAB_14bbba5b0;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UObject *)0x0;
LAB_14bbba5b0:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<USoundClass,FWeakObjectPtr>)this_00;
}

