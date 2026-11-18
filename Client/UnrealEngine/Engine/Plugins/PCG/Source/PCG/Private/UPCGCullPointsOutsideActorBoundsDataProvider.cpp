// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149729d30

UClass * __cdecl UPCGCullPointsOutsideActorBoundsDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsDataProvider",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.
                InnerSingleton,StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataProvider,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataProvider>,
               local_res8,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton;
}

// UPCGCullPointsOutsideActorBoundsDataProvider @ 14973b120

UPCGCullPointsOutsideActorBoundsDataProvider * __thiscall
UPCGCullPointsOutsideActorBoundsDataProvider::UPCGCullPointsOutsideActorBoundsDataProvider
          (UPCGCullPointsOutsideActorBoundsDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGCullPointsOutsideActorBoundsDataProvider__6B_;
  return this;
}

// UPCGCullPointsOutsideActorBoundsDataProvider @ 14973b150

UPCGCullPointsOutsideActorBoundsDataProvider * __thiscall
UPCGCullPointsOutsideActorBoundsDataProvider::UPCGCullPointsOutsideActorBoundsDataProvider
          (UPCGCullPointsOutsideActorBoundsDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGCullPointsOutsideActorBoundsDataProvider__6B_;
  return this;
}

// ~UPCGCullPointsOutsideActorBoundsDataProvider @ 14973dca0

void __thiscall
UPCGCullPointsOutsideActorBoundsDataProvider::~UPCGCullPointsOutsideActorBoundsDataProvider
          (UPCGCullPointsOutsideActorBoundsDataProvider *this)

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

// GetPrivateStaticClass @ 14975b200

UClass * __cdecl UPCGCullPointsOutsideActorBoundsDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsDataProvider",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.
                InnerSingleton,StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataProvider,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataProvider>,
               local_res8,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975dc70

FComputeDataProviderRenderProxy * __thiscall
UPCGCullPointsOutsideActorBoundsDataProvider::GetRenderProxy
          (UPCGCullPointsOutsideActorBoundsDataProvider *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  UPCGSettings *pUVar4;
  UClass *pUVar5;
  FComputeDataProviderRenderProxy *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28 [2];
  
  pUVar2 = *(UObject **)&this->field_0x58;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar4 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
  if (pUVar4 != (UPCGSettings *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      lVar3 = pUVar4[1]._padding_;
      pFVar6 = ::operator_new(0x10);
      if (pFVar6 != (FComputeDataProviderRenderProxy *)0x0) {
        *(int *)(pFVar6 + 1) = (int)lVar3;
        *pFVar6 = (FComputeDataProviderRenderProxy)
                  &___7FPCGCullPointsOutsideActorBoundsDataProviderProxy__6B_;
        return pFVar6;
      }
      return (FComputeDataProviderRenderProxy *)0x0;
    }
    pFVar7 = GetTypeName<UPCGCullPointsOutsideActorBoundsSettings>(&local_38);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UPCGSettings_const_>(local_28,pUVar4);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  pFVar7 = GetTypeName<UPCGCullPointsOutsideActorBoundsSettings>(&local_38);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataProvider @ 149778660

void __cdecl
UPCGCullPointsOutsideActorBoundsDataProvider::
StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataProvider(void)

{
  return;
}

