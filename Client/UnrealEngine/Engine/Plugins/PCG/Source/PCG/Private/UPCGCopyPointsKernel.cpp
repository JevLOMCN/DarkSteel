// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b304c0

UClass * __cdecl UPCGCopyPointsKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsKernel",
               &Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsKernel,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCopyPointsKernel>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton;
}

// UPCGCopyPointsKernel @ 149b559f0

UPCGCopyPointsKernel * __thiscall
UPCGCopyPointsKernel::UPCGCopyPointsKernel(UPCGCopyPointsKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bMatchBasedOnAttribute = false;
  this->_padding_ = (longlong)&___7UPCGCopyPointsKernel__6B_;
  return this;
}

// UPCGCopyPointsKernel @ 149b55a20

UPCGCopyPointsKernel * __thiscall
UPCGCopyPointsKernel::UPCGCopyPointsKernel(UPCGCopyPointsKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bMatchBasedOnAttribute = false;
  this->_padding_ = (longlong)&___7UPCGCopyPointsKernel__6B_;
  return this;
}

// ~UPCGCopyPointsKernel @ 149b58bf0

void __thiscall UPCGCopyPointsKernel::~UPCGCopyPointsKernel(UPCGCopyPointsKernel *this)

{
  this->_padding_ = (longlong)&___7UPCGCopyPointsKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 149b68330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGCopyPointsKernel::ComputeOutputBindingDataDesc
          (UPCGCopyPointsKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  EPCGPointNativeProperties EVar2;
  FName FVar3;
  longlong *plVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<int> FVar7;
  code *pcVar8;
  FPCGDataCollectionDesc *pFVar9;
  FPCGMetadataDomainID FVar10;
  bool bVar11;
  FScriptContainerElement FVar12;
  EPCGCopyPointsInheritanceMode EVar13;
  EPCGCopyPointsInheritanceMode EVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  EPCGPointNativeProperties EVar20;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar21;
  FPCGKernelParams *this_00;
  char *pcVar22;
  FPCGDataCollection *pFVar23;
  UPCGParamData *pUVar24;
  UPCGMetadata *this_01;
  FPCGMetadataAttribute<bool> *this_02;
  ulonglong uVar25;
  FName *pFVar26;
  TTuple<FProperty_const_*,void_const_*> *pTVar27;
  uint7 extraout_var;
  uint7 extraout_var_00;
  UClass *pUVar28;
  UObject *pUVar29;
  FProperty *pFVar30;
  void *pvVar31;
  FPCGDataDesc *pFVar32;
  FPCGDataDesc *pFVar33;
  FPCGDataTypeIdentifier *pFVar34;
  FPCGDataDesc *pFVar35;
  EPCGPointNativeProperties EVar36;
  atomic<unsigned_char> *paVar37;
  FPCGKernelAttributeDesc *pFVar38;
  uint uVar39;
  longlong lVar40;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this_03;
  ForElementType<int> FVar41;
  FPCGKernelAttributeDesc *pFVar42;
  uint uVar43;
  int iVar44;
  FProperty *pFVar45;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1a8;
  int local_198 [2];
  int local_190 [2];
  int local_188;
  FPCGDataDesc *local_180;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_178;
  longlong local_168;
  ulonglong local_160;
  FPCGDataDesc *local_158;
  FPCGDataDesc *local_150;
  longlong local_148;
  TSharedPtr<FPCGDataCollectionDesc,1> local_140;
  longlong local_130;
  FPCGKernelPin local_128;
  FPCGKernelPin local_118;
  TArrayView<FPCGDataDesc_const_,int> local_108;
  TArrayView<FPCGDataDesc_const_,int> local_f8;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8 [2];
  TIntVector4<int>_u_0 local_b8;
  FName local_a8;
  FPCGMetadataDomainID FStack_a0;
  FPCGAttributeIdentifier local_88;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  FPCGDataTypeIdentifier local_58;
  
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsKernel.cpp"
                          ,0x2c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
    return pTVar21;
  }
  this_00 = UPCGDataBinding::GetCachedKernelParams(param_2,(UPCGComputeKernel *)this);
  if (this_00 == (FPCGKernelParams *)0x0) {
    pcVar22 = "KernelParams";
    iVar19 = 0x30;
    paVar37 = &bGEnsureHasExecuted<5693728463727362096>;
LAB_149b683b9:
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar37,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsKernel.cpp"
                        ,iVar19,pcVar22);
    if (!bVar11) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar8 = (code *)swi(3);
    pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
    return pTVar21;
  }
  if (param_1 != PCGPinConstants::DefaultOutputLabel) {
    pcVar22 = "InOutputPinLabel == PCGPinConstants::DefaultOutputLabel";
    iVar19 = 0x36;
    paVar37 = &bGEnsureHasExecuted<5693728463727362102>;
    goto LAB_149b683b9;
  }
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  if (this->bMatchBasedOnAttribute != false) {
    uVar17 = UPCGDataBinding::GetFirstInputDataIndex
                       (param_2,(UPCGComputeKernel *)this,
                        PCGCopyPointsConstants::SelectedFlagsPinLabel);
    if (uVar17 != 0xffffffff) {
      pFVar23 = UPCGDataBinding::GetInputDataCollection(param_2);
      uVar39 = 0;
      if ((int)uVar17 < (pFVar23->TaggedData).ArrayNum) {
        uVar39 = ~uVar17 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
        return pTVar21;
      }
      pUVar24 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)
                                    ((pFVar23->TaggedData).AllocatorInstance.Data +
                                    (longlong)(int)uVar17 * 0x78));
      if ((pUVar24 != (UPCGParamData *)0x0) &&
         (this_01 = (UPCGMetadata *)(**(code **)(pUVar24->_padding_ + 800))(pUVar24),
         this_01 != (UPCGMetadata *)0x0)) {
        local_a8 = PCGCopyPointsConstants::SelectedFlagAttributeName;
        FStack_a0 = PCGMetadataDomainID::Default;
        FVar10 = FStack_a0;
        FStack_a0._0_8_ = PCGMetadataDomainID::Default._0_8_;
        local_88.Name = PCGCopyPointsConstants::SelectedFlagAttributeName;
        local_88.MetadataDomain.Flag = FStack_a0.Flag;
        local_88.MetadataDomain._1_3_ = FStack_a0._1_3_;
        local_88.MetadataDomain.CustomFlag = FStack_a0.CustomFlag;
        local_88.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        FStack_a0 = FVar10;
        this_02 = (FPCGMetadataAttribute<bool> *)UPCGMetadata::GetConstAttribute(this_01,&local_88);
        if ((this_02 != (FPCGMetadataAttribute<bool> *)0x0) && ((short)this_02->_padding_ == 10)) {
          uVar25 = UPCGMetadata::GetItemCountForChild(this_01);
          iVar19 = (int)uVar25;
          if ((int)local_1c8 < iVar19) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar19 - (int)local_1c8,&local_1d0,(int *)&local_1c8,
                       (int *)((longlong)&local_1c8 + 4));
          }
          else {
            if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar25 & 0xffffffff);
            }
            if (iVar19 < (int)local_1c8) {
              uVar39 = (int)local_1c8 - iVar19;
              uVar17 = 0;
              if ((int)(uVar39 + iVar19) <= (int)local_1c8) {
                uVar17 = ~uVar39 >> 0x1f;
              }
              if (uVar17 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar11) {
                  pcVar8 = (code *)swi(3);
                  pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
                  return pTVar21;
                }
              }
              if (uVar39 != 0) {
                iVar18 = ((int)local_1c8 - uVar39) - iVar19;
                iVar44 = (int)local_1c8;
                if (iVar18 != 0) {
                  memmove(local_1d0.Data + iVar19,local_1d0.Data + iVar19 + (int)uVar39,
                          (longlong)iVar18);
                  iVar44 = (int)local_1c8;
                }
                local_1c8 = CONCAT44(local_1c8._4_4_,iVar44 - uVar39);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,&local_1d0,iVar44 - uVar39,(int *)((longlong)&local_1c8 + 4));
              }
            }
          }
          lVar40 = 0;
          if (0 < (longlong)iVar19) {
            do {
              uVar39 = (uint)lVar40;
              FVar12 = (FScriptContainerElement)
                       FPCGMetadataAttribute<bool>::GetValue(this_02,uVar39);
              uVar17 = 0;
              if ((int)uVar39 < (int)local_1c8) {
                uVar17 = ~uVar39 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
                return pTVar21;
              }
              lVar40 = lVar40 + 1;
              local_1d0.Data[(int)uVar39] = FVar12;
            } while (lVar40 < iVar19);
          }
          goto LAB_149b685eb;
        }
      }
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      pFVar23 = UPCGDataBinding::GetInputDataCollection(param_2);
      uVar39 = 0;
      if ((int)uVar17 < (pFVar23->TaggedData).ArrayNum) {
        uVar39 = ~uVar17 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
        return pTVar21;
      }
      lVar40 = *(longlong *)
                ((pFVar23->TaggedData).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x78);
      pUVar28 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
      lVar40 = *(longlong *)(lVar40 + 0x10);
      iVar19 = (int)pUVar28->_padding_;
      if (((iVar19 <= *(int *)(lVar40 + 0x38)) &&
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar19 * 8) ==
           &pUVar28->_padding_)) && (1 < (byte)LogPCG._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_149b691c8;
    }
  }
LAB_149b685eb:
  pFVar45 = (FProperty *)0x0;
  local_128.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_128.PinLabel = PCGCopyPointsConstants::SourcePointsLabel;
  local_118.PinLabel = PCGCopyPointsConstants::TargetPointsLabel;
  local_128.bIsInput = true;
  local_118.bIsInput = true;
  local_118.KernelIndex = local_128.KernelIndex;
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_178,&local_128);
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_1a8,&local_118);
  if ((local_178.Object == (FPCGDataCollectionDesc *)0x0) ||
     (local_1a8.Object == (FPCGDataCollectionDesc *)0x0)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5693728463727362156>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsKernel.cpp"
                        ,0x6c,"SourcePinDesc && TargetPinDesc");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
      return pTVar21;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FPCGDataCollectionDesc::MakeShared(&local_140);
    pFVar26 = ::FName::FName(&local_e8,0x1c,L"bCopyEachSourceOnEveryTarget",FNAME_Add);
    bVar11 = FPCGKernelParams::GetValueBool(this_00,*pFVar26);
    pFVar26 = ::FName::FName(&local_e0,0x10,L"ColorInheritance",FNAME_Add);
    EVar13 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(this_00,*pFVar26);
    pFVar26 = ::FName::FName(&local_d8,0xf,L"SeedInheritance",FNAME_Add);
    EVar14 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(this_00,*pFVar26);
    pFVar26 = ::FName::FName(&local_d0,0x14,L"AttributeInheritance",FNAME_Add);
    FVar3 = *pFVar26;
    pTVar27 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
              ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                      *)&this_00->OverriddenProperties,FVar3);
    if (pTVar27 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
      pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if (((pUVar29 != (UObject *)0x0) &&
          (pFVar30 = UStruct::FindPropertyByName(*(UStruct **)&pUVar29->field_0x10,FVar3),
          pFVar30 != (FProperty *)0x0)) && ((*(byte *)(pFVar30->_padding_ + 0x1e) & 1) != 0)) {
        pvVar31 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar30,pUVar29,0);
        goto LAB_149b68a92;
      }
LAB_149b68734:
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_10494529249476565>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGKernelParamsCache.h"
                          ,0x2b,"NumericProperty && ValuePtr");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
        return pTVar21;
      }
      local_168 = (ulonglong)extraout_var << 8;
    }
    else {
      pFVar30 = *(FProperty **)pTVar27;
      if ((pFVar30 == (FProperty *)0x0) || ((*(byte *)(pFVar30->_padding_ + 0x1e) & 1) == 0)) {
        pFVar30 = pFVar45;
      }
      pvVar31 = *(void **)&pTVar27->field_0x8;
      if (pFVar30 == (FProperty *)0x0) goto LAB_149b68734;
LAB_149b68a92:
      plVar4 = (longlong *)pFVar30[1]._padding_;
      if ((plVar4 == (longlong *)0x0) || (pvVar31 == (void *)0x0)) goto LAB_149b68734;
      local_168 = (**(code **)(*plVar4 + 0x210))(plVar4,pvVar31);
    }
    pFVar26 = ::FName::FName(local_c8,0xe,L"TagInheritance",FNAME_Add);
    FVar3 = *pFVar26;
    pTVar27 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
              ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                      *)&this_00->OverriddenProperties,FVar3);
    if (pTVar27 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
      pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if (((pUVar29 != (UObject *)0x0) &&
          (pFVar30 = UStruct::FindPropertyByName(*(UStruct **)&pUVar29->field_0x10,FVar3),
          pFVar30 != (FProperty *)0x0)) && ((*(byte *)(pFVar30->_padding_ + 0x1e) & 1) != 0)) {
        pvVar31 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar30,pUVar29,0);
        goto LAB_149b68b05;
      }
LAB_149b687b5:
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_10494529249476565>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGKernelParamsCache.h"
                          ,0x2b,"NumericProperty && ValuePtr");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
        return pTVar21;
      }
      local_160 = (ulonglong)extraout_var_00 << 8;
    }
    else {
      pFVar30 = *(FProperty **)pTVar27;
      if ((pFVar30 == (FProperty *)0x0) || ((*(byte *)(pFVar30->_padding_ + 0x1e) & 1) == 0)) {
        pFVar30 = pFVar45;
      }
      pvVar31 = *(void **)&pTVar27->field_0x8;
      if (pFVar30 == (FProperty *)0x0) goto LAB_149b687b5;
LAB_149b68b05:
      plVar4 = (longlong *)pFVar30[1]._padding_;
      if ((plVar4 == (longlong *)0x0) || (pvVar31 == (void *)0x0)) goto LAB_149b687b5;
      local_160 = (**(code **)(*plVar4 + 0x210))(plVar4,pvVar31);
    }
    if ((local_178.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
      return pTVar21;
    }
    iVar19 = ((local_178.Object)->DataDescs).ArrayNum;
    local_188 = iVar19;
    if ((iVar19 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
      return pTVar21;
    }
    if ((local_1a8.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
      return pTVar21;
    }
    local_1c0 = ((local_1a8.Object)->DataDescs).ArrayNum;
    if ((local_1c0 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
      return pTVar21;
    }
    if (bVar11) {
      iVar44 = local_1c0 * iVar19;
    }
    else {
      iVar44 = local_1c0;
      if (local_1c0 < iVar19) {
        iVar44 = iVar19;
      }
    }
    if (((0 < iVar19) && (0 < local_1c0)) &&
       ((bVar11 || (((iVar19 == local_1c0 || (iVar19 == 1)) || (local_1c0 == 1)))))) {
      local_130 = (longlong)iVar44;
      local_148 = 0;
      if (0 < local_130) {
        do {
          lVar40 = local_148;
          uVar17 = (uint)pFVar45;
          if ((int)local_1c8 == 0) {
LAB_149b68bd9:
            if (bVar11) {
              uVar39 = (int)uVar17 / local_1c0;
              uVar43 = (int)uVar17 % local_1c0;
            }
            else {
              uVar39 = iVar19 - 1U;
              if ((int)uVar17 < (int)(iVar19 - 1U)) {
                uVar39 = uVar17;
              }
              uVar43 = local_1c0 - 1U;
              if ((int)uVar17 < (int)(local_1c0 - 1U)) {
                uVar43 = uVar17;
              }
            }
            if ((local_178.Object == (FPCGDataCollectionDesc *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            local_108.DataPtr =
                 (FPCGDataDesc *)((local_178.Object)->DataDescs).AllocatorInstance.Data;
            iVar19 = ((local_178.Object)->DataDescs).ArrayNum;
            if ((iVar19 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            local_108.ArrayNum = iVar19;
            pFVar32 = TArrayView<FPCGDataDesc_const_,int>::operator[](&local_108,uVar39);
            local_150 = pFVar32;
            if ((local_1a8.Object == (FPCGDataCollectionDesc *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            local_f8.DataPtr =
                 (FPCGDataDesc *)((local_1a8.Object)->DataDescs).AllocatorInstance.Data;
            iVar19 = ((local_1a8.Object)->DataDescs).ArrayNum;
            if ((iVar19 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            local_f8.ArrayNum = iVar19;
            pFVar33 = TArrayView<FPCGDataDesc_const_,int>::operator[](&local_f8,uVar43);
            local_158 = pFVar33;
            if ((local_140.Object == (FPCGDataCollectionDesc *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            pFVar9 = local_140.Object;
            local_68 = (pFVar33->ElementCount).field0_0x0._s_0.X;
            iStack_64 = (pFVar33->ElementCount).field0_0x0._s_0.Y;
            iStack_60 = (pFVar33->ElementCount).field0_0x0._s_0.Z;
            iStack_5c = (pFVar33->ElementCount).field0_0x0._s_0.W;
            piVar1 = &((local_140.Object)->DataDescs).ArrayMax;
            local_1b8 = (pFVar32->ElementCount).field0_0x0._s_0.X * local_68;
            iStack_1b4 = (pFVar32->ElementCount).field0_0x0._s_0.Y * iStack_64;
            uVar5 = *(undefined8 *)((longlong)&(pFVar33->ElementCount).field0_0x0 + 8);
            iStack_1b0 = (pFVar32->ElementCount).field0_0x0._s_0.Z * (int)uVar5;
            iStack_1ac = (pFVar32->ElementCount).field0_0x0._s_0.W * (int)((ulonglong)uVar5 >> 0x20)
            ;
            if (((local_140.Object)->DataDescs).ArrayNum == *piVar1) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,(ForAnyElementType *)local_140.Object,piVar1);
              (pFVar9->DataDescs).ArrayNum = iVar19;
            }
            iVar19 = (pFVar9->DataDescs).ArrayNum;
            pFVar6 = (pFVar9->DataDescs).AllocatorInstance.Data;
            (pFVar9->DataDescs).ArrayNum = iVar19 + 1;
            pFVar34 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_58,Point);
            local_b8._0_8_ = CONCAT44(iStack_1b4,local_1b8);
            local_b8._8_8_ = CONCAT44(iStack_1ac,iStack_1b0);
            pFVar35 = FPCGDataDesc::FPCGDataDesc
                                ((FPCGDataDesc *)(pFVar6 + (longlong)iVar19 * 0x68),pFVar34,
                                 (TIntVector4<int> *)&local_b8._s_0);
            pFVar42 = (FPCGKernelAttributeDesc *)(pFVar32->AttributeDescs).AllocatorInstance.Data;
            iVar19 = (pFVar32->AttributeDescs).ArrayNum;
            local_180 = pFVar35;
            if ((iVar19 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            pFVar38 = (FPCGKernelAttributeDesc *)(pFVar33->AttributeDescs).AllocatorInstance.Data;
            iVar44 = (pFVar33->AttributeDescs).ArrayNum;
            if ((iVar44 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            this_03 = &pFVar35->AttributeDescs;
            cVar16 = (char)local_168;
            if (cVar16 == '\0') {
              DestructItems<FPCGKernelAttributeDesc,int>
                        ((FPCGKernelAttributeDesc *)(this_03->AllocatorInstance).Data,
                         (pFVar35->AttributeDescs).ArrayNum);
              iVar18 = (pFVar35->AttributeDescs).ArrayMax;
              piVar1 = &(pFVar35->AttributeDescs).ArrayMax;
              (pFVar35->AttributeDescs).ArrayNum = iVar19;
              if ((iVar19 == 0) && (iVar18 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x78,8,iVar19,iVar18,&this_03->AllocatorInstance,iVar19,piVar1);
                ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                          ((this_03->AllocatorInstance).Data,pFVar42,iVar19);
              }
              pFVar42 = pFVar38 + iVar44;
              for (; pFVar38 != pFVar42; pFVar38 = pFVar38 + 1) {
                TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FPCGKernelAttributeDesc_const_&>(this_03,pFVar38);
              }
            }
            else if (cVar16 == '\x01') {
              DestructItems<FPCGKernelAttributeDesc,int>
                        ((FPCGKernelAttributeDesc *)(this_03->AllocatorInstance).Data,
                         (pFVar35->AttributeDescs).ArrayNum);
              iVar18 = (pFVar35->AttributeDescs).ArrayMax;
              piVar1 = &(pFVar35->AttributeDescs).ArrayMax;
              (pFVar35->AttributeDescs).ArrayNum = iVar44;
              if ((iVar44 == 0) && (iVar18 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x78,8,iVar44,iVar18,&this_03->AllocatorInstance,iVar44,piVar1);
                ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                          ((this_03->AllocatorInstance).Data,pFVar38,iVar44);
              }
              pFVar38 = pFVar42 + iVar19;
              for (; pFVar42 != pFVar38; pFVar42 = pFVar42 + 1) {
                TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FPCGKernelAttributeDesc_const_&>(this_03,pFVar42);
              }
            }
            else if (cVar16 == '\x02') {
              DestructItems<FPCGKernelAttributeDesc,int>
                        ((FPCGKernelAttributeDesc *)(this_03->AllocatorInstance).Data,
                         (pFVar35->AttributeDescs).ArrayNum);
              iVar44 = (pFVar35->AttributeDescs).ArrayMax;
              piVar1 = &(pFVar35->AttributeDescs).ArrayMax;
              (pFVar35->AttributeDescs).ArrayNum = iVar19;
              if ((iVar19 == 0) && (iVar44 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x78,8,iVar19,iVar44,&this_03->AllocatorInstance,iVar19,piVar1);
                pFVar38 = pFVar42;
                iVar44 = iVar19;
LAB_149b68ff2:
                ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                          ((this_03->AllocatorInstance).Data,pFVar38,iVar44);
              }
            }
            else if (cVar16 == '\x03') {
              DestructItems<FPCGKernelAttributeDesc,int>
                        ((FPCGKernelAttributeDesc *)(this_03->AllocatorInstance).Data,
                         (pFVar35->AttributeDescs).ArrayNum);
              iVar19 = (pFVar35->AttributeDescs).ArrayMax;
              piVar1 = &(pFVar35->AttributeDescs).ArrayMax;
              (pFVar35->AttributeDescs).ArrayNum = iVar44;
              if ((iVar44 != 0) || (iVar19 != 0)) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x78,8,iVar44,iVar19,&this_03->AllocatorInstance,iVar44,piVar1);
                goto LAB_149b68ff2;
              }
              *piVar1 = 0;
            }
            uVar25 = local_160;
            pFVar32 = local_180;
            if ((byte)local_160 < 2) {
              FVar7 = (local_150->TagStringKeys).AllocatorInstance.SecondaryData;
              iVar19 = (local_150->TagStringKeys).ArrayNum;
              FVar41 = (ForElementType<int>)&local_150->TagStringKeys;
              if (FVar7 != (ForElementType<int>)0x0) {
                FVar41 = FVar7;
              }
              if ((iVar19 < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar8 = (code *)swi(3);
                pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
                return pTVar21;
              }
              pFVar32 = local_180;
              FVar7 = (ForElementType<int>)((longlong)FVar41 + (longlong)iVar19 * 4);
              for (; FVar41 != FVar7; FVar41 = (ForElementType<int>)((longlong)FVar41 + 4)) {
                local_198[0] = *(int *)FVar41;
                TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                AddUniqueImpl<int_const_&>(&pFVar32->TagStringKeys,local_198);
              }
            }
            pFVar33 = local_158;
            if ((uVar25 & 0xfd) == 0) {
              FVar7 = (local_158->TagStringKeys).AllocatorInstance.SecondaryData;
              iVar19 = (local_158->TagStringKeys).ArrayNum;
              FVar41 = (ForElementType<int>)&local_158->TagStringKeys;
              if (FVar7 != (ForElementType<int>)0x0) {
                FVar41 = FVar7;
              }
              if ((iVar19 < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar8 = (code *)swi(3);
                pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
                return pTVar21;
              }
              FVar7 = (ForElementType<int>)((longlong)FVar41 + (longlong)iVar19 * 4);
              for (; FVar41 != FVar7; FVar41 = (ForElementType<int>)((longlong)FVar41 + 4)) {
                local_190[0] = *(int *)FVar41;
                TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                AddUniqueImpl<int_const_&>(&pFVar32->TagStringKeys,local_190);
              }
            }
            EVar2 = local_150->AllocatedPointProperties;
            EVar20 = pFVar33->AllocatedPointProperties;
            if (EVar14 == Relative) {
              EVar36 = EVar20 | EVar2;
            }
            else {
              EVar36 = EVar20;
              if (EVar14 == Source) {
                EVar36 = EVar2;
              }
            }
            if (EVar13 == Relative) {
              EVar20 = EVar20 | EVar2;
            }
            else if (EVar13 == Source) {
              EVar20 = EVar2;
            }
            pFVar32->AllocatedPointProperties =
                 pFVar32->AllocatedPointProperties |
                 EVar20 & Color | EVar36 & Seed | EVar2 & ~(Seed|Color) | Transform;
            lVar40 = local_148;
            iVar19 = local_188;
          }
          else {
            uVar39 = 0;
            if ((int)uVar17 < (int)local_1c8) {
              uVar39 = ~uVar17 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar8)();
              return pTVar21;
            }
            if (local_1d0.Data[lVar40] != (FScriptContainerElement)0x0) goto LAB_149b68bd9;
          }
          local_148 = lVar40 + 1;
          pFVar45 = (FProperty *)(ulonglong)(uVar17 + 1);
        } while (local_148 < local_130);
      }
    }
    __return_storage_ptr__->Object = local_140.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_140.SharedReferenceCount.ReferenceController;
    if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
LAB_149b691c8:
  if (local_1d0.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_1d0.Data);
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 149b692e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UPCGCopyPointsKernel::ComputeThreadCount(UPCGCopyPointsKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_18,(UPCGComputeKernel *)this,PCGPinConstants::DefaultOutputLabel,false);
  if (local_18.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5693728463727362276>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsKernel.cpp"
                       ,0xe4,"OutputPinDesc");
    if (!bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_18.Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar4;
}

// GetInputPins @ 149b8f160

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCopyPointsKernel::GetInputPins
          (UPCGCopyPointsKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGCopyPointsConstants::SourcePointsLabel,pFVar4,true,true,pFVar3);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGCopyPointsConstants::TargetPointsLabel,pFVar4,true,true,pFVar3);
  if (this->bMatchBasedOnAttribute != false) {
    iVar2 = param_1->ArrayNum;
    if (iVar2 == param_1->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGCopyPointsConstants::SelectedFlagsPinLabel,pFVar4,true,true,pFVar3);
  }
  return;
}

// GetOutputPins @ 149b8f3c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGCopyPointsKernel::GetOutputPins
          (UPCGCopyPointsKernel *this,
          TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
            ((FPCGPinPropertiesGPU *)(pFVar1 + (longlong)iVar2 * 0x78),
             &PCGPinConstants::DefaultOutputLabel,pFVar3);
  return;
}

// GetPrivateStaticClass @ 149b8fe40

UClass * __cdecl UPCGCopyPointsKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsKernel",
               &Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsKernel,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCopyPointsKernel>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsKernel.InnerSingleton;
}

// IsKernelDataValid @ 149b937d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGCopyPointsKernel::IsKernelDataValid(UPCGCopyPointsKernel *this,FPCGContext *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,"UPCGCopyPointsKernel::IsKernelDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPointsKernel.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  bVar1 = UPCGComputeKernel::IsKernelDataValid((UPCGComputeKernel *)this,param_1);
  if (bVar1) {
    if ((param_1 == (FPCGContext *)0x0) ||
       (cVar2 = (**(code **)(param_1->_padding_ + 0x10))(param_1), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = PCGCopyPointsKernel::IsKernelDataValid
                        ((UPCGComputeKernel *)this,(FPCGComputeGraphContext *)param_1);
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// StaticRegisterNativesUPCGCopyPointsKernel @ 149b98390

void __cdecl UPCGCopyPointsKernel::StaticRegisterNativesUPCGCopyPointsKernel(void)

{
  return;
}

