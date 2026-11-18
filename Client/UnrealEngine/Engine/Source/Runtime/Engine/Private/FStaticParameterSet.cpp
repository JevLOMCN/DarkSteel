// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14732cda0

UScriptStruct * __cdecl FStaticParameterSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticParameterSet.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticParameterSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterSet,(UObject *)pUVar1,
                         L"StaticParameterSet");
  }
  return Z_Registration_Info_UScriptStruct_FStaticParameterSet.OuterSingleton;
}

// FStaticParameterSet @ 147f66670

FStaticParameterSet * __thiscall
FStaticParameterSet::FStaticParameterSet(FStaticParameterSet *this,FStaticParameterSet *param_1)

{
  FStaticParameterSetRuntimeData::FStaticParameterSetRuntimeData
            ((FStaticParameterSetRuntimeData *)this,(FStaticParameterSetRuntimeData *)param_1);
  return this;
}

// operator= @ 147f6a210

FStaticParameterSet * __thiscall
FStaticParameterSet::operator=(FStaticParameterSet *this,FStaticParameterSet *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (this != param_1) {
    iVar3 = *(int *)&param_1->field_0x8;
    puVar1 = &this->field_0xc;
    _Src = *(void **)param_1;
    *(int *)&this->field_0x8 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,iVar3,*(int *)puVar1,(ForAnyElementType *)this,iVar3,(int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)this,_Src,(longlong)iVar3 * 0x28);
      }
    }
  }
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x10,
             (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->field_0x10);
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x20,
             (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->field_0x20);
  lVar4 = *(longlong *)&param_1->field_0x38;
  uVar5 = *(undefined8 *)&param_1->field_0x30;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  *(undefined8 *)&this->field_0x30 = uVar5;
  *(longlong *)&this->field_0x38 = lVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  bVar2 = param_1->field_0x40;
  this->field_0x40 = this->field_0x40 ^ (this->field_0x40 ^ bVar2) & 1;
  if ((bVar2 & 1) != 0) {
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x10,
               (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &param_1->field_0x10);
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x20,
               (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &param_1->field_0x20);
    lVar4 = *(longlong *)&param_1->field_0x38;
    uVar5 = *(undefined8 *)&param_1->field_0x30;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x38;
    *(undefined8 *)&this->field_0x30 = uVar5;
    *(longlong *)&this->field_0x38 = lVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator== @ 147f6a9b0

bool __thiscall
FStaticParameterSet::operator==(FStaticParameterSet *this,FStaticParameterSet *param_1)

{
  int iVar1;
  bool bVar2;
  FMaterialLayerStackFunctionsCache *pFVar3;
  FMaterialLayerStackFunctionsCache *pFVar4;
  byte bVar5;
  
  bVar5 = this->field_0x40 & 1;
  if (((bVar5 == (param_1->field_0x40 & 1)) &&
      (*(int *)&this->field_0x8 == *(int *)&param_1->field_0x8)) &&
     (bVar2 = CompareItems<FStaticSwitchParameter,int>
                        (*(FStaticSwitchParameter **)this,*(FStaticSwitchParameter **)param_1,
                         *(int *)&this->field_0x8), bVar2)) {
    if (bVar5 == 0) {
      return true;
    }
    if (((*(int *)&this->field_0x18 == *(int *)&param_1->field_0x18) &&
        (bVar2 = CompareItems<TObjectPtr<UMaterialFunctionInterface>,int>
                           (*(TObjectPtr<UMaterialFunctionInterface> **)&this->field_0x10,
                            *(TObjectPtr<UMaterialFunctionInterface> **)&param_1->field_0x10,
                            *(int *)&this->field_0x18), bVar2)) &&
       ((*(int *)&this->field_0x28 == *(int *)&param_1->field_0x28 &&
        (bVar2 = CompareItems<TObjectPtr<UMaterialFunctionInterface>,int>
                           (*(TObjectPtr<UMaterialFunctionInterface> **)&this->field_0x20,
                            *(TObjectPtr<UMaterialFunctionInterface> **)&param_1->field_0x20,
                            *(int *)&this->field_0x28), bVar2)))) {
      if (*(longlong *)&this->field_0x30 == 0) {
        if (*(longlong *)&param_1->field_0x30 == 0) {
          return true;
        }
      }
      else if (*(longlong *)&param_1->field_0x30 != 0) {
        pFVar3 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                           ((TSharedPtr<FMaterialLayerStackFunctionsCache,1> *)&this->field_0x30);
        pFVar4 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                           ((TSharedPtr<FMaterialLayerStackFunctionsCache,1> *)&param_1->field_0x30)
        ;
        iVar1 = (pFVar3->AvailableLayerPaths).ArrayNum;
        if ((iVar1 == (pFVar4->AvailableLayerPaths).ArrayNum) &&
           (bVar2 = CompareItems<FSoftObjectPath,int>
                              ((FSoftObjectPath *)
                               (pFVar3->AvailableLayerPaths).AllocatorInstance.Data,
                               (FSoftObjectPath *)
                               (pFVar4->AvailableLayerPaths).AllocatorInstance.Data,iVar1), bVar2))
        {
          pFVar3 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                             ((TSharedPtr<FMaterialLayerStackFunctionsCache,1> *)&this->field_0x30);
          pFVar4 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                             ((TSharedPtr<FMaterialLayerStackFunctionsCache,1> *)
                              &param_1->field_0x30);
          iVar1 = (pFVar3->AvailableBlendPaths).ArrayNum;
          if ((iVar1 == (pFVar4->AvailableBlendPaths).ArrayNum) &&
             (bVar2 = CompareItems<FSoftObjectPath,int>
                                ((FSoftObjectPath *)
                                 (pFVar3->AvailableBlendPaths).AllocatorInstance.Data,
                                 (FSoftObjectPath *)
                                 (pFVar4->AvailableBlendPaths).AllocatorInstance.Data,iVar1), bVar2)
             ) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// Equivalent @ 147f76890

bool __thiscall
FStaticParameterSet::Equivalent(FStaticParameterSet *this,FStaticParameterSet *param_1)

{
  int iVar1;
  FMaterialLayerStackFunctionsCache *pFVar2;
  FMaterialLayerStackFunctionsCache *pFVar3;
  byte bVar4;
  bool bVar5;
  FIdentityFunctor local_res8 [8];
  FStaticParameterSetRuntimeData local_a8;
  FStaticParameterSetRuntimeData local_58;
  
  if ((((param_1->field_0x40 ^ this->field_0x40) & 1) != 0) ||
     (*(int *)&this->field_0x8 != *(int *)&param_1->field_0x8)) {
    return false;
  }
  FStaticParameterSetRuntimeData::FStaticParameterSetRuntimeData
            (&local_58,(FStaticParameterSetRuntimeData *)this);
  FStaticParameterSetRuntimeData::FStaticParameterSetRuntimeData
            (&local_a8,(FStaticParameterSetRuntimeData *)param_1);
  AlgoImpl::
  IntroSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
            ((FStaticSwitchParameter *)local_58.StaticSwitchParameters.AllocatorInstance.Data,
             local_58.StaticSwitchParameters.ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  AlgoImpl::
  IntroSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
            ((FStaticSwitchParameter *)local_a8.StaticSwitchParameters.AllocatorInstance.Data,
             local_a8.StaticSwitchParameters.ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  bVar4 = local_58.bHasMaterialLayers;
  if (bVar4 != local_a8.bHasMaterialLayers) {
    bVar5 = false;
    goto LAB_147f7699b;
  }
  if (local_58.StaticSwitchParameters.ArrayNum != local_a8.StaticSwitchParameters.ArrayNum) {
    bVar5 = false;
    goto LAB_147f7699b;
  }
  bVar5 = CompareItems<FStaticSwitchParameter,int>
                    ((FStaticSwitchParameter *)
                     local_58.StaticSwitchParameters.AllocatorInstance.Data,
                     (FStaticSwitchParameter *)
                     local_a8.StaticSwitchParameters.AllocatorInstance.Data,
                     local_58.StaticSwitchParameters.ArrayNum);
  if (!bVar5) {
    bVar5 = false;
    goto LAB_147f7699b;
  }
  if (bVar4 == 0) {
LAB_147f76999:
    bVar5 = true;
  }
  else {
    if (local_58.MaterialLayers.Layers.ArrayNum == local_a8.MaterialLayers.Layers.ArrayNum) {
      bVar5 = CompareItems<TObjectPtr<UMaterialFunctionInterface>,int>
                        ((TObjectPtr<UMaterialFunctionInterface> *)
                         local_58.MaterialLayers.Layers.AllocatorInstance.Data,
                         (TObjectPtr<UMaterialFunctionInterface> *)
                         local_a8.MaterialLayers.Layers.AllocatorInstance.Data,
                         local_58.MaterialLayers.Layers.ArrayNum);
      if ((bVar5) &&
         (local_58.MaterialLayers.Blends.ArrayNum == local_a8.MaterialLayers.Blends.ArrayNum)) {
        bVar5 = CompareItems<TObjectPtr<UMaterialFunctionInterface>,int>
                          ((TObjectPtr<UMaterialFunctionInterface> *)
                           local_58.MaterialLayers.Blends.AllocatorInstance.Data,
                           (TObjectPtr<UMaterialFunctionInterface> *)
                           local_a8.MaterialLayers.Blends.AllocatorInstance.Data,
                           local_58.MaterialLayers.Blends.ArrayNum);
        if (bVar5) {
          if (local_58.MaterialLayers.LayerStackCache.Object ==
              (FMaterialLayerStackFunctionsCache *)0x0) {
            if (local_a8.MaterialLayers.LayerStackCache.Object ==
                (FMaterialLayerStackFunctionsCache *)0x0) goto LAB_147f76999;
          }
          else if (local_a8.MaterialLayers.LayerStackCache.Object !=
                   (FMaterialLayerStackFunctionsCache *)0x0) {
            pFVar2 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                               (&local_58.MaterialLayers.LayerStackCache);
            pFVar3 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                               (&local_a8.MaterialLayers.LayerStackCache);
            iVar1 = (pFVar2->AvailableLayerPaths).ArrayNum;
            if (iVar1 == (pFVar3->AvailableLayerPaths).ArrayNum) {
              bVar5 = CompareItems<FSoftObjectPath,int>
                                ((FSoftObjectPath *)
                                 (pFVar2->AvailableLayerPaths).AllocatorInstance.Data,
                                 (FSoftObjectPath *)
                                 (pFVar3->AvailableLayerPaths).AllocatorInstance.Data,iVar1);
              if (bVar5) {
                pFVar2 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                                   (&local_58.MaterialLayers.LayerStackCache);
                pFVar3 = TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
                                   (&local_a8.MaterialLayers.LayerStackCache);
                iVar1 = (pFVar2->AvailableBlendPaths).ArrayNum;
                if (iVar1 == (pFVar3->AvailableBlendPaths).ArrayNum) {
                  bVar5 = CompareItems<FSoftObjectPath,int>
                                    ((FSoftObjectPath *)
                                     (pFVar2->AvailableBlendPaths).AllocatorInstance.Data,
                                     (FSoftObjectPath *)
                                     (pFVar3->AvailableBlendPaths).AllocatorInstance.Data,iVar1);
                  if (bVar5) goto LAB_147f76999;
                }
              }
            }
          }
        }
      }
    }
    bVar5 = false;
  }
LAB_147f7699b:
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
            (&local_a8.MaterialLayers);
  if ((FStaticSwitchParameter *)local_a8.StaticSwitchParameters.AllocatorInstance.Data !=
      (FStaticSwitchParameter *)0x0) {
    FMemory::Free(local_a8.StaticSwitchParameters.AllocatorInstance.Data);
  }
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
            (&local_58.MaterialLayers);
  if ((FStaticSwitchParameter *)local_58.StaticSwitchParameters.AllocatorInstance.Data !=
      (FStaticSwitchParameter *)0x0) {
    FMemory::Free(local_58.StaticSwitchParameters.AllocatorInstance.Data);
  }
  return bVar5;
}

// PostSerialize @ 147f82e40

void __thiscall FStaticParameterSet::PostSerialize(FStaticParameterSet *this,FArchive *param_1)

{
  return;
}

// SortForEquivalent @ 147f89be0

void __thiscall FStaticParameterSet::SortForEquivalent(FStaticParameterSet *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
            (*(FStaticSwitchParameter **)this,*(int *)&this->field_0x8,local_res8[0],
             (<lambda_1> *)local_res8);
  return;
}

