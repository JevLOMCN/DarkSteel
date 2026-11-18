// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b498500

UClass * __cdecl UDS_FloatingTextDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FloatingTextDataAsset",
               &Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_FloatingTextDataAsset,0x210,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_FloatingTextDataAsset>,
               InternalVTableHelperCtorCaller<UDS_FloatingTextDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton;
}

// UDS_FloatingTextDataAsset @ 14b49a450

UDS_FloatingTextDataAsset * __thiscall
UDS_FloatingTextDataAsset::UDS_FloatingTextDataAsset
          (UDS_FloatingTextDataAsset *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FloatingTextDataAsset__6B_;
  *(undefined8 *)&this->DamageFontDataMap = 0;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x48 = 0;
  *(undefined8 *)&this->DamageFontDataMap_Enemy = 0;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x48 = 0;
  *(undefined8 *)&this->AbnormalDataMap = 0;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x48 = 0;
  *(undefined8 *)&this->AbnormalDataMap_Enemy = 0;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x48 = 0;
  *(undefined8 *)&this->NumberFontDataMap = 0;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x48 = 0;
  *(undefined8 *)&this->NumberFontDataMap_Enemy = 0;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x48 = 0;
  return this;
}

// UDS_FloatingTextDataAsset @ 14b49a5f0

UDS_FloatingTextDataAsset * __thiscall
UDS_FloatingTextDataAsset::UDS_FloatingTextDataAsset
          (UDS_FloatingTextDataAsset *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FloatingTextDataAsset__6B_;
  *(undefined8 *)&this->DamageFontDataMap = 0;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DamageFontDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DamageFontDataMap).field_0x48 = 0;
  *(undefined8 *)&this->DamageFontDataMap_Enemy = 0;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DamageFontDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x48 = 0;
  *(undefined8 *)&this->AbnormalDataMap = 0;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalDataMap).field_0x48 = 0;
  *(undefined8 *)&this->AbnormalDataMap_Enemy = 0;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x48 = 0;
  *(undefined8 *)&this->NumberFontDataMap = 0;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberFontDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NumberFontDataMap).field_0x48 = 0;
  *(undefined8 *)&this->NumberFontDataMap_Enemy = 0;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x8 = 0;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x20 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x28 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x34 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberFontDataMap_Enemy).field_0x40 = 0;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x48 = 0;
  return this;
}

// ~UDS_FloatingTextDataAsset @ 14b49ac70

void __thiscall
UDS_FloatingTextDataAsset::~UDS_FloatingTextDataAsset(UDS_FloatingTextDataAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_FloatingTextDataAsset__6B_;
  *(undefined4 *)&(this->NumberFontDataMap_Enemy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NumberFontDataMap_Enemy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NumberFontType,FDS_FloatingTextNumberData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NumberFontType,FDS_FloatingTextNumberData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NumberFontDataMap_Enemy);
  *(undefined4 *)&(this->NumberFontDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NumberFontDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NumberFontType,FDS_FloatingTextNumberData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NumberFontType,FDS_FloatingTextNumberData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NumberFontDataMap);
  *(undefined4 *)&(this->AbnormalDataMap_Enemy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AbnormalDataMap_Enemy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AbnormalDataMap_Enemy);
  *(undefined4 *)&(this->AbnormalDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AbnormalDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AbnormalDataMap);
  *(undefined4 *)&(this->DamageFontDataMap_Enemy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DamageFontDataMap_Enemy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_DamageFontType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_DamageFontType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DamageFontDataMap_Enemy);
  *(undefined4 *)&(this->DamageFontDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DamageFontDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_DamageFontType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_DamageFontType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DamageFontDataMap);
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b49bf50

UClass * __cdecl UDS_FloatingTextDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FloatingTextDataAsset",
               &Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_FloatingTextDataAsset,0x210,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_FloatingTextDataAsset>,
               InternalVTableHelperCtorCaller<UDS_FloatingTextDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FloatingTextDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_FloatingTextDataAsset @ 14b49c0c0

void __cdecl UDS_FloatingTextDataAsset::StaticRegisterNativesUDS_FloatingTextDataAsset(void)

{
  return;
}

// GetAbnormalFontData @ 14b902d40

FDS_FloatingTextData * __cdecl
UDS_FloatingTextDataAsset::GetAbnormalFontData(EDS_AbnormalType param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_FloatingTextData *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (param_2) {
      if (*(int *)&pUVar3[5].field_0x10 != *(int *)&pUVar3[6].field_0x14) {
        puVar5 = *(undefined1 **)&pUVar3[6].field_0x20;
        if (*(undefined1 **)&pUVar3[6].field_0x20 == (undefined1 *)0x0) {
          puVar5 = &pUVar3[6].field_0x18;
        }
        iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 7) - 1) & (ulonglong)param_1) * 4);
        if (iVar2 != -1) {
          do {
            if (*(EDS_AbnormalType *)((longlong)iVar2 * 0x110 + *(longlong *)&pUVar3[5].field_0x8)
                == param_1) {
              pUVar3 = FWeakObjectPtr::Get(local_res18);
              pFVar4 = TMapBase<enum_EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_FloatingTextData,0>_>
                       ::FindChecked(&pUVar3[5].field_0x8,param_1);
              return pFVar4;
            }
            iVar2 = *(int *)((longlong)iVar2 * 0x110 + 0x100 + *(longlong *)&pUVar3[5].field_0x8);
          } while (iVar2 != -1);
        }
      }
    }
    else if (*(int *)&pUVar3[7].field_0x10 != *(int *)&pUVar3[8].field_0x14) {
      puVar5 = *(undefined1 **)&pUVar3[8].field_0x20;
      if (*(undefined1 **)&pUVar3[8].field_0x20 == (undefined1 *)0x0) {
        puVar5 = &pUVar3[8].field_0x18;
      }
      iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 9) - 1) & (ulonglong)param_1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(EDS_AbnormalType *)((longlong)iVar2 * 0x110 + *(longlong *)&pUVar3[7].field_0x8) ==
              param_1) {
            pUVar3 = FWeakObjectPtr::Get(local_res18);
            pFVar4 = TMapBase<enum_EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_FloatingTextData,0>_>
                     ::FindChecked(&pUVar3[7].field_0x8,param_1);
            return pFVar4;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x110 + 0x100 + *(longlong *)&pUVar3[7].field_0x8);
        } while (iVar2 != -1);
        return &EmptyFloatingTextData;
      }
    }
  }
  return &EmptyFloatingTextData;
}

// GetDamageFontData @ 14b905780

FDS_FloatingTextData * __cdecl
UDS_FloatingTextDataAsset::GetDamageFontData(EDS_DamageFontType param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_FloatingTextData *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (param_2) {
      if (*(int *)&pUVar3[1].field_0x10 != *(int *)&pUVar3[2].field_0x14) {
        puVar5 = *(undefined1 **)&pUVar3[2].field_0x20;
        if (*(undefined1 **)&pUVar3[2].field_0x20 == (undefined1 *)0x0) {
          puVar5 = &pUVar3[2].field_0x18;
        }
        iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 3) - 1) & (ulonglong)param_1) * 4);
        if (iVar2 != -1) {
          do {
            if (*(EDS_DamageFontType *)((longlong)iVar2 * 0x110 + *(longlong *)&pUVar3[1].field_0x8)
                == param_1) {
              pUVar3 = FWeakObjectPtr::Get(local_res18);
              pFVar4 = TMapBase<enum_EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DamageFontType,FDS_FloatingTextData,0>_>
                       ::FindChecked(&pUVar3[1].field_0x8,param_1);
              return pFVar4;
            }
            iVar2 = *(int *)((longlong)iVar2 * 0x110 + 0x100 + *(longlong *)&pUVar3[1].field_0x8);
          } while (iVar2 != -1);
        }
      }
    }
    else if (*(int *)&pUVar3[3].field_0x10 != *(int *)&pUVar3[4].field_0x14) {
      puVar5 = *(undefined1 **)&pUVar3[4].field_0x20;
      if (*(undefined1 **)&pUVar3[4].field_0x20 == (undefined1 *)0x0) {
        puVar5 = &pUVar3[4].field_0x18;
      }
      iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 5) - 1) & (ulonglong)param_1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(EDS_DamageFontType *)((longlong)iVar2 * 0x110 + *(longlong *)&pUVar3[3].field_0x8)
              == param_1) {
            pUVar3 = FWeakObjectPtr::Get(local_res18);
            pFVar4 = TMapBase<enum_EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DamageFontType,FDS_FloatingTextData,0>_>
                     ::FindChecked(&pUVar3[3].field_0x8,param_1);
            return pFVar4;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x110 + 0x100 + *(longlong *)&pUVar3[3].field_0x8);
        } while (iVar2 != -1);
        return &EmptyFloatingTextData;
      }
    }
  }
  return &EmptyFloatingTextData;
}

// GetInst @ 14b905b50

TWeakObjectPtr<UDS_FloatingTextDataAsset,FWeakObjectPtr> __cdecl
UDS_FloatingTextDataAsset::GetInst(void)

{
  UDS_FloatingTextDataAsset *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_FloatingTextDataAsset,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->FloatingTextDataAsset).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_FloatingTextDataAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_FloatingTextDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_FloatingTextDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_FloatingTextDataAsset,FWeakObjectPtr>)in_RCX;
}

// GetNumberFontData @ 14b9066a0

FDS_FloatingTextNumberData * __cdecl
UDS_FloatingTextDataAsset::GetNumberFontData(EDS_NumberFontType param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_FloatingTextNumberData *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (param_2) {
      if (*(int *)&pUVar3[9].field_0x10 != *(int *)&pUVar3[10].field_0x14) {
        puVar5 = *(undefined1 **)&pUVar3[10].field_0x20;
        if (*(undefined1 **)&pUVar3[10].field_0x20 == (undefined1 *)0x0) {
          puVar5 = &pUVar3[10].field_0x18;
        }
        iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 0xb) - 1) & (ulonglong)param_1) * 4
                        );
        if (iVar2 != -1) {
          do {
            if (*(EDS_NumberFontType *)((longlong)iVar2 * 0x38 + *(longlong *)&pUVar3[9].field_0x8)
                == param_1) {
              pUVar3 = FWeakObjectPtr::Get(local_res18);
              pFVar4 = TMapBase<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,0>_>
                       ::FindChecked(&pUVar3[9].field_0x8,param_1);
              return pFVar4;
            }
            iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + *(longlong *)&pUVar3[9].field_0x8);
          } while (iVar2 != -1);
        }
      }
    }
    else if (*(int *)&pUVar3[0xb].field_0x10 != *(int *)&pUVar3[0xc].field_0x14) {
      puVar5 = *(undefined1 **)&pUVar3[0xc].field_0x20;
      if (*(undefined1 **)&pUVar3[0xc].field_0x20 == (undefined1 *)0x0) {
        puVar5 = &pUVar3[0xc].field_0x18;
      }
      iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(pUVar3 + 0xd) - 1) & (ulonglong)param_1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(EDS_NumberFontType *)((longlong)iVar2 * 0x38 + *(longlong *)&pUVar3[0xb].field_0x8)
              == param_1) {
            pUVar3 = FWeakObjectPtr::Get(local_res18);
            pFVar4 = TMapBase<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,0>_>
                     ::FindChecked(&pUVar3[0xb].field_0x8,param_1);
            return pFVar4;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + *(longlong *)&pUVar3[0xb].field_0x8);
        } while (iVar2 != -1);
        return &EmptyFloatingTextNumberData;
      }
    }
  }
  return &EmptyFloatingTextNumberData;
}

// Initialize @ 14b90b9d0

void __cdecl UDS_FloatingTextDataAsset::Initialize(void)

{
  bool bVar1;
  UDS_FloatingTextDataAsset *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = (UDS_FloatingTextDataAsset *)FWeakObjectPtr::Get(local_res8);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    UpdateDamageFontData
              (pUVar2,(TMap<EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_DamageFontType,FDS_FloatingTextData,0>_>
                       *)&pUVar3[1].field_0x8);
    pUVar2 = (UDS_FloatingTextDataAsset *)FWeakObjectPtr::Get(local_res8);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    UpdateDamageFontData
              (pUVar2,(TMap<EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_DamageFontType,FDS_FloatingTextData,0>_>
                       *)&pUVar3[3].field_0x8);
    pUVar2 = (UDS_FloatingTextDataAsset *)FWeakObjectPtr::Get(local_res8);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    UpdateAbnormalFontData
              (pUVar2,(TMap<EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_FloatingTextData,0>_>
                       *)&pUVar3[5].field_0x8);
    pUVar2 = (UDS_FloatingTextDataAsset *)FWeakObjectPtr::Get(local_res8);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    UpdateAbnormalFontData
              (pUVar2,(TMap<EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_FloatingTextData,0>_>
                       *)&pUVar3[7].field_0x8);
  }
  return;
}

// SetSlateBrushByPath @ 14b90c590

void __thiscall
UDS_FloatingTextDataAsset::SetSlateBrushByPath
          (UDS_FloatingTextDataAsset *this,FSoftObjectPath *param_1,FSlateBrush *param_2)

{
  return;
}

// UpdateAbnormalFontData @ 14b90c700

void __thiscall
UDS_FloatingTextDataAsset::UpdateAbnormalFontData
          (UDS_FloatingTextDataAsset *this,
          TMap<EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_FloatingTextData,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b90c79d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b90c79d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b90c8a0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b90c8a0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FDS_ResourceTextIconTableRow::Get
              ((longlong)
               *(int *)((longlong)TStack_50.CurrentBitIndex * 0x110 + 0xd0 + *(longlong *)param_1),
               true);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// UpdateDamageFontData @ 14b90c920

void __thiscall
UDS_FloatingTextDataAsset::UpdateDamageFontData
          (UDS_FloatingTextDataAsset *this,
          TMap<EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_DamageFontType,FDS_FloatingTextData,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b90c9bd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b90c9bd:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b90cac0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b90cac0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_DamageFontType,FDS_FloatingTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FDS_ResourceTextIconTableRow::Get
              ((longlong)
               *(int *)((longlong)TStack_50.CurrentBitIndex * 0x110 + 0xd0 + *(longlong *)param_1),
               true);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

