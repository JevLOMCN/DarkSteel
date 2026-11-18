// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 14972a730

UClass * __cdecl UPCGNormalToDensityProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityProvider",
               &Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensityProvider,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNormalToDensityProvider>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton;
}

// UPCGNormalToDensityProvider @ 14973c140

UPCGNormalToDensityProvider * __thiscall
UPCGNormalToDensityProvider::UPCGNormalToDensityProvider
          (UPCGNormalToDensityProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGNormalToDensityProvider__6B_;
  return this;
}

// UPCGNormalToDensityProvider @ 14973c170

UPCGNormalToDensityProvider * __thiscall
UPCGNormalToDensityProvider::UPCGNormalToDensityProvider
          (UPCGNormalToDensityProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGNormalToDensityProvider__6B_;
  return this;
}

// ~UPCGNormalToDensityProvider @ 14973e5c0

void __thiscall
UPCGNormalToDensityProvider::~UPCGNormalToDensityProvider(UPCGNormalToDensityProvider *this)

{
  *(undefined ***)this = &___7UPCGComputeDataProvider__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975c580

UClass * __cdecl UPCGNormalToDensityProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityProvider",
               &Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensityProvider,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNormalToDensityProvider>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e9b0

FComputeDataProviderRenderProxy * __thiscall
UPCGNormalToDensityProvider::GetRenderProxy(UPCGNormalToDensityProvider *this)

{
  longlong lVar1;
  int iVar2;
  UObject *pUVar3;
  undefined4 uVar4;
  FComputeDataProviderRenderProxy FVar5;
  FComputeDataProviderRenderProxy FVar6;
  FComputeDataProviderRenderProxy FVar7;
  longlong lVar8;
  UPCGSettings *pUVar9;
  UClass *pUVar10;
  FComputeDataProviderRenderProxy *pFVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FString local_88;
  FString local_78 [3];
  FComputeDataProviderRenderProxy local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  
  pUVar3 = *(UObject **)&this->field_0x58;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar9 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
  if (pUVar9 != (UPCGSettings *)0x0) {
    pUVar10 = Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar10->_padding_)) {
      local_48 = (FComputeDataProviderRenderProxy)pUVar9[1]._padding_;
      uStack_40 = (undefined1)pUVar9[1]._padding_;
      FVar5 = (FComputeDataProviderRenderProxy)pUVar9[1]._padding_;
      FVar6 = (FComputeDataProviderRenderProxy)pUVar9[1]._padding_;
      lVar8 = pUVar9[1]._padding_;
      uVar4 = *(undefined4 *)((longlong)&pUVar9[1]._padding_ + 4);
      lVar1 = pUVar9[1]._padding_;
      pFVar11 = ::operator_new(0x38);
      if (pFVar11 != (FComputeDataProviderRenderProxy *)0x0) {
        FVar7._1_7_ = uStack_3f;
        FVar7._0_1_ = uStack_40;
        pFVar11[1] = FVar5;
        pFVar11[2] = FVar6;
        *pFVar11 = (FComputeDataProviderRenderProxy)&___7FPCGNormalToDensityDataProviderProxy__6B_;
        *(int *)(pFVar11 + 3) = (int)lVar8;
        *(undefined4 *)&pFVar11[3].field_0x4 = uVar4;
        *(int *)(pFVar11 + 4) = (int)lVar1;
        *(int *)&pFVar11[4].field_0x4 = (int)((ulonglong)lVar1 >> 0x20);
        pFVar11[5] = local_48;
        pFVar11[6] = FVar7;
      }
      return pFVar11;
    }
    pFVar12 = GetTypeName<UPCGNormalToDensitySettings>(&local_88);
    pwVar13 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UPCGSettings_const_>(local_78,pUVar9);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar14);
  }
  pFVar12 = GetTypeName<UPCGNormalToDensitySettings>(&local_88);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar13);
}

// StaticRegisterNativesUPCGNormalToDensityProvider @ 149778800

void __cdecl UPCGNormalToDensityProvider::StaticRegisterNativesUPCGNormalToDensityProvider(void)

{
  return;
}

