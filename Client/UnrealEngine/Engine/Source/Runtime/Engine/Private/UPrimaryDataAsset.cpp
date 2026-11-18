// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147a0c170

UClass * __cdecl UPrimaryDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrimaryDataAsset",
               &Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton,
               StaticRegisterNativesUPrimaryDataAsset,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPrimaryDataAsset>,
               InternalVTableHelperCtorCaller<UPrimaryDataAsset>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton;
}

// UPrimaryDataAsset @ 147a28430

UPrimaryDataAsset * __thiscall
UPrimaryDataAsset::UPrimaryDataAsset(UPrimaryDataAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UPrimaryDataAsset__6B_;
  return this;
}

// UPrimaryDataAsset @ 147a28460

UPrimaryDataAsset * __thiscall
UPrimaryDataAsset::UPrimaryDataAsset(UPrimaryDataAsset *this,FObjectInitializer *param_1)

{
  UObject *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pUVar1 = *(UObject **)&this->field_0x10;
  *(undefined ***)this = &___7UDataAsset__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&this->field_0x28 = pUVar1;
  *(undefined ***)this = &___7UPrimaryDataAsset__6B_;
  return this;
}

// ~UPrimaryDataAsset @ 147a2aa00

void __thiscall UPrimaryDataAsset::~UPrimaryDataAsset(UPrimaryDataAsset *this)

{
  *(undefined ***)this = &___7UDataAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrimaryAssetId @ 147a56780

FPrimaryAssetId * __thiscall
UPrimaryDataAsset::GetPrimaryAssetId
          (UPrimaryDataAsset *this,FPrimaryAssetId *__return_storage_ptr__)

{
  longlong lVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UClass *pUVar5;
  FName FVar6;
  UPackage *pUVar7;
  FName FVar8;
  int iVar9;
  UClass *pUVar10;
  FName local_res8;
  undefined1 local_res18 [16];
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    uVar3 = *(undefined4 *)&this->field_0x18;
    uVar4 = *(undefined4 *)&this->field_0x1c;
    (__return_storage_ptr__->PrimaryAssetType).Name = *(FName *)(lVar1 + 0x18);
    (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = (FNameEntryId)uVar3;
    (__return_storage_ptr__->PrimaryAssetName).Number = uVar4;
    return __return_storage_ptr__;
  }
  pUVar2 = *(UClass **)(lVar1 + 0x40);
  if (((*(uint *)(lVar1 + 0xd4) & 0x10000080) == 0) &&
     (pUVar5 = StaticClass(), pUVar10 = Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton,
     pUVar2 != pUVar5)) {
    do {
      pUVar5 = pUVar2;
      if (pUVar5 == (UClass *)0x0) {
        (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
        (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
        (__return_storage_ptr__->PrimaryAssetName).Number = 0;
        return __return_storage_ptr__;
      }
      if (pUVar10 == (UClass *)0x0) {
        local_res8 = (FName)UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"PrimaryDataAsset",
                   &Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton,
                   StaticRegisterNativesUPrimaryDataAsset,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
                   CASTCLASS_None,L"Engine",InternalConstructor<UPrimaryDataAsset>,
                   InternalVTableHelperCtorCaller<UPrimaryDataAsset>,
                   (FUObjectCppClassStaticFunctions *)&local_res8,UDataAsset::StaticClass,
                   UObject::StaticClass);
        pUVar10 = Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton;
      }
      if ((UClass *)pUVar5->_padding_ == pUVar10) {
        if ((pUVar5->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) == CLASS_None) {
          pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar5);
          local_res18._0_8_ = pUVar7->_padding_;
          FVar6 = FPackageName::GetShortFName((FName *)(local_res18 + 8));
          goto LAB_147a56951;
        }
        break;
      }
      pUVar2 = (UClass *)pUVar5->_padding_;
    } while ((pUVar5->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) == CLASS_None);
    FVar6 = (FName)&pUVar5->_padding_;
LAB_147a56951:
    FVar6 = *(FName *)FVar6;
    pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_res8 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_res8,&local_58);
    iVar9 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
    local_48 = local_58.Data.AllocatorInstance.Data;
    FVar8 = FPackageName::GetShortFName((TStringView<wchar_t> *)local_res18);
    __return_storage_ptr__->PrimaryAssetName = *(FName *)FVar8;
    (__return_storage_ptr__->PrimaryAssetType).Name = FVar6;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
    (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
    (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147a57750

UClass * __cdecl UPrimaryDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrimaryDataAsset",
               &Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton,
               StaticRegisterNativesUPrimaryDataAsset,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPrimaryDataAsset>,
               InternalVTableHelperCtorCaller<UPrimaryDataAsset>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton;
}

// PostLoad @ 147a66c10

void __thiscall UPrimaryDataAsset::PostLoad(UPrimaryDataAsset *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPrimaryDataAsset **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUPrimaryDataAsset @ 147a97680

void __cdecl UPrimaryDataAsset::StaticRegisterNativesUPrimaryDataAsset(void)

{
  return;
}

