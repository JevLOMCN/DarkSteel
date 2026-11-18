// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// StaticClass @ 14978c4a0

UClass * __cdecl UPCGCustomHLSLKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLKernel",
               &Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLKernel,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCustomHLSLKernel>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton;
}

// UPCGCustomHLSLKernel @ 1497e0ad0

UPCGCustomHLSLKernel * __thiscall
UPCGCustomHLSLKernel::UPCGCustomHLSLKernel(UPCGCustomHLSLKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCustomHLSLKernel__6B_;
  (this->ParsedSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParsedSources).ArrayNum = 0;
  (this->ParsedSources).ArrayMax = 0;
  (this->KernelAttributeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelAttributeKeys).ArrayNum = 0;
  (this->KernelAttributeKeys).ArrayMax = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x8 = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x20 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x28 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x34 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x40 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x48 = 0;
  *(undefined8 *)&this->PinAllocatedProperties = 0;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x34 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x48 = 0;
  return this;
}

// UPCGCustomHLSLKernel @ 1497e0ba0

UPCGCustomHLSLKernel * __thiscall
UPCGCustomHLSLKernel::UPCGCustomHLSLKernel(UPCGCustomHLSLKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCustomHLSLKernel__6B_;
  (this->ParsedSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParsedSources).ArrayNum = 0;
  (this->ParsedSources).ArrayMax = 0;
  (this->KernelAttributeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelAttributeKeys).ArrayNum = 0;
  (this->KernelAttributeKeys).ArrayMax = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x8 = 0;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x20 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x28 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x34 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PinDataLabels).PinToDataLabels.field_0x40 = 0;
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x48 = 0;
  *(undefined8 *)&this->PinAllocatedProperties = 0;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x34 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PinAllocatedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x48 = 0;
  return this;
}

// ~UPCGCustomHLSLKernel @ 1497e2e80

void __thiscall UPCGCustomHLSLKernel::~UPCGCustomHLSLKernel(UPCGCustomHLSLKernel *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGCustomHLSLKernel__6B_;
  *(undefined4 *)&(this->PinAllocatedProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PinAllocatedProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PinAllocatedProperties);
  *(undefined4 *)&(this->PinDataLabels).PinToDataLabels.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PinDataLabels).PinToDataLabels.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PinDataLabels);
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)(this->KernelAttributeKeys).AllocatorInstance.Data,
             (this->KernelAttributeKeys).ArrayNum);
  pFVar2 = (this->KernelAttributeKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPCGCustomHLSLParsedSource,int>
            ((FPCGCustomHLSLParsedSource *)(this->ParsedSources).AllocatorInstance.Data,
             (this->ParsedSources).ArrayNum);
  pFVar2 = (this->ParsedSources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// operator() @ 1497e5860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`UPCGCustomHLSLKernel::AreAttributesValid'::__l8::<lambda_1>::operator()
          (void *this,TArray<FPCGParsedAttributeFunction,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UPackage *pUVar9;
  UEnum *this_00;
  long64 lVar10;
  FName *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  ulonglong uVar17;
  FName *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  TReferenceControllerBase<1> *pTVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 local_res18 [16];
  FName local_3f8;
  FScriptContainerElement *local_3f0;
  FString *local_3e8;
  FString local_3e0;
  uint local_3d0;
  longlong *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  longlong local_3a8;
  FPCGMetadataDomainID FStack_3a0;
  char local_390;
  FPCGAttributePropertySelector local_388;
  FPCGAttributePropertySelector local_348;
  FScriptContainerElement *local_308;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FText local_220;
  FText local_210;
  FText local_200;
  FText local_1f0;
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  longlong local_138;
  undefined4 uStack_130;
  int iStack_12c;
  uint uStack_128;
  uint uStack_124;
  FName local_120;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  
  pFVar24 = (param_1->AllocatorInstance).Data;
  local_3d0 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_3d0;
  local_308 = pFVar24 + uVar17 * 0x40;
  do {
    pFVar1 = local_308;
    local_3b8 = pFVar24;
    if (param_1->ArrayNum != (int)uVar17) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGParsedAttributeFunction_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar24 == pFVar1) {
      return true;
    }
    this_00 = Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton == (UEnum *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_PCG();
      this_00 = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGKernelAttributeType,(UObject *)pUVar9,
                              L"EPCGKernelAttributeType");
      Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton = this_00;
      if ((this_00 == (UEnum *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeTypeEnum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                             ,0x6f9,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    local_3c0 = pFVar24 + 0x28;
    pFVar1 = pFVar24 + 0x10;
    UEnum::GetNameStringByValue(this_00,&local_3e0,*(long64 *)&pFVar24[0x20].field_0x0);
    if (*(int *)(pFVar24 + 8) == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = *(wchar_t **)&pFVar24->field_0x0;
    }
    ::FName::FName(&local_3f8,pwVar19);
    plVar27 = (longlong *)0x0;
    pTVar26 = (TReferenceControllerBase<1> *)0x0;
    local_3c8 = (longlong *)0x0;
    local_3e8 = &local_3e0;
    if (*(int *)(pFVar24 + 0x18) == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                AllocatorInstance).Data;
    }
    local_3f0 = pFVar24;
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar19,L"Set");
    FVar3 = local_3f8;
    if (iVar7 != 0) {
      if (*(int *)(pFVar24 + 0x18) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                  AllocatorInstance).Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar19,L"Get");
      FVar3 = local_3f8;
      if (iVar7 == 0) {
        plVar27 = *(longlong **)this;
        uVar8 = ::GetTypeHash(local_3f8.ComparisonIndex.Value);
        if ((int)plVar27[1] != *(int *)((longlong)plVar27 + 0x34)) {
          plVar22 = plVar27 + 7;
          if ((longlong *)plVar27[8] != (longlong *)0x0) {
            plVar22 = (longlong *)plVar27[8];
          }
          uVar8 = *(uint *)((longlong)plVar22 +
                           (ulonglong)((int)plVar27[9] - 1U & FVar3.Number + uVar8) * 4);
          if (uVar8 != 0xffffffff) {
            while (pFVar18 = (FName *)((longlong)(int)uVar8 * 0x20 + *plVar27), *pFVar18 != FVar3) {
              uVar8 = pFVar18[3].ComparisonIndex.Value;
              if (uVar8 == 0xffffffff) goto LAB_1497e5d22;
            }
            pTVar12 = (TReferenceControllerBase<1> *)(pFVar18 + 1);
            if (pFVar18 == (FName *)0x0) {
              pTVar12 = pTVar26;
            }
            pTVar26 = (TReferenceControllerBase<1> *)0x0;
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              pTVar26 = *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount;
              plVar27 = (longlong *)pTVar12->_padding_;
              if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_3c8 = plVar27;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_1497e5aad;
            }
          }
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6160447179505793250>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                           ,0x71e,"FunctionName == PCGCustomHLSLKernel::AttributeFunctionGetKeyword"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
LAB_1497e5d22:
      if (*(longlong *)((longlong)this + 0x10) != 0) {
        pFVar13 = FText::FromName(&local_98,&local_3f8);
        ::FString::ConcatFC(&local_2c0,(FString *)pFVar24,L"_");
        ::FString::ConcatFF(&local_2f0,&local_2c0,(FString *)(pFVar24 + 0x10));
        ::FString::ConcatFF(&local_250,&local_2f0,local_3e8);
        FText::FromString(&local_170,&local_250);
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_150,L"PCGCustomHLSLKernel",L"InvalidAttributePinName",
                             L"Tried to call attribute function \'{0}\' on non-existent pin \'{1}\'."
                            );
        pFVar16 = FTextFormat::FTextFormat(&local_88,pFVar14,Default);
        pFVar13 = FText::Format<FText,FText>(&local_160,pFVar16,&local_170,pFVar13);
        FText::operator=(*(FText **)((longlong)this + 0x10),pFVar13);
        local_210.TextData.Reference = local_150.TextData.Reference;
        if (local_160.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          local_210.TextData.Reference = local_150.TextData.Reference;
        }
LAB_1497e5e2b:
        if (local_210.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
        }
      }
      goto LAB_1497e5e36;
    }
    plVar22 = *(longlong **)((longlong)this + 8);
    uVar8 = ::GetTypeHash(local_3f8.ComparisonIndex.Value);
    if ((int)plVar22[1] != *(int *)((longlong)plVar22 + 0x34)) {
      plVar21 = plVar22 + 7;
      if ((longlong *)plVar22[8] != (longlong *)0x0) {
        plVar21 = (longlong *)plVar22[8];
      }
      uVar8 = *(uint *)((longlong)plVar21 +
                       (ulonglong)((int)plVar22[9] - 1U & FVar3.Number + uVar8) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          pFVar18 = (FName *)((longlong)(int)uVar8 * 0x20 + *plVar22);
          if (*pFVar18 == FVar3) {
            pTVar12 = (TReferenceControllerBase<1> *)(pFVar18 + 1);
            if (pFVar18 == (FName *)0x0) {
              pTVar12 = pTVar26;
            }
            pTVar26 = (TReferenceControllerBase<1> *)0x0;
            plVar27 = (longlong *)0x0;
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              pTVar26 = *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount;
              plVar27 = (longlong *)pTVar12->_padding_;
              if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_3c8 = plVar27;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              if (plVar27 != (longlong *)0x0) goto LAB_1497e5ab6;
            }
            break;
          }
          uVar8 = pFVar18[3].ComparisonIndex.Value;
        } while (uVar8 != 0xffffffff);
      }
    }
    FVar3 = local_3f8;
    plVar22 = *(longlong **)this;
    uVar8 = ::GetTypeHash(local_3f8.ComparisonIndex.Value);
    if ((int)plVar22[1] != *(int *)((longlong)plVar22 + 0x34)) {
      plVar21 = plVar22 + 7;
      if ((longlong *)plVar22[8] != (longlong *)0x0) {
        plVar21 = (longlong *)plVar22[8];
      }
      uVar8 = *(uint *)((longlong)plVar21 +
                       (ulonglong)((int)plVar22[9] - 1U & FVar3.Number + uVar8) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          pFVar18 = (FName *)((longlong)(int)uVar8 * 0x20 + *plVar22);
          if (*pFVar18 == FVar3) {
            pFVar11 = pFVar18 + 1;
            if (pFVar18 == (FName *)0x0) {
              pFVar11 = (FName *)0x0;
            }
            if (pFVar11 != (FName *)0x0) {
              if (*(longlong *)((longlong)this + 0x10) == 0) goto LAB_1497e5e36;
              pFVar13 = FText::FromName(&local_118,&local_3f8);
              pFVar14 = ``UPCGCustomHLSLKernel::AreAttributesValid'::__l8::<lambda_1>::operator()'::
                        __l6::<lambda_1>::operator()(&local_3f0,&local_78);
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_210,L"PCGCustomHLSLKernel",L"InvalidSetAttributeUsage",
                                   L"Tried to call attribute function \'{0}\' on read-only input pin \'{1}\'."
                                  );
              pFVar16 = FTextFormat::FTextFormat(&local_68,pFVar15,Default);
              pFVar13 = FText::Format<FText,FText>(&local_220,pFVar16,pFVar14,pFVar13);
              FText::operator=(*(FText **)((longlong)this + 0x10),pFVar13);
              if (local_220.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
              }
              goto LAB_1497e5e2b;
            }
            break;
          }
          uVar8 = pFVar18[3].ComparisonIndex.Value;
        } while (uVar8 != 0xffffffff);
      }
    }
LAB_1497e5aad:
    if (plVar27 == (longlong *)0x0) goto LAB_1497e5d22;
LAB_1497e5ab6:
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_3e0.Data.ArrayNum != 0) {
      FVar20.Data = local_3e0.Data.AllocatorInstance.Data;
    }
    pFVar18 = ::FName::FName(&local_120,(wchar_t *)FVar20.Data);
    lVar10 = UEnum::GetValueByName(this_00,*pFVar18,None);
    if (lVar10 == -1) {
      if (*(longlong *)((longlong)this + 0x10) != 0) {
        pFVar13 = FText::FromString(&local_58,&local_3e0);
        ::FString::ConcatFC(&local_260,(FString *)local_3b8,L"_");
        ::FString::ConcatFF(&local_270,&local_260,(FString *)pFVar1);
        ::FString::ConcatFF(&local_280,&local_270,&local_3e0);
        FText::FromString(&local_1a0,&local_280);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_180,L"PCGCustomHLSLKernel",L"InvalidAttributePinType",
                             L"Tried to call attribute function \'{0}\' on non-existent type \'{1}\'."
                            );
        pFVar16 = FTextFormat::FTextFormat(&local_a8,pFVar14,Default);
        pFVar13 = FText::Format<FText,FText>(&local_190,pFVar16,&local_1a0,pFVar13);
        FText::operator=(*(FText **)((longlong)this + 0x10),pFVar13);
        local_210.TextData.Reference = local_180.TextData.Reference;
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          local_210.TextData.Reference = local_180.TextData.Reference;
        }
        goto LAB_1497e5e2b;
      }
      goto LAB_1497e5e36;
    }
    local_348._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
    local_348.Selection = Attribute;
    local_348.DomainName.ComparisonIndex.Value = 0;
    local_348.DomainName.Number = 0;
    local_348.AttributeName.ComparisonIndex.Value = 0;
    local_348.AttributeName.Number = 0;
    local_348.PropertyName.ComparisonIndex.Value = 0;
    local_348.PropertyName.Number = 0;
    local_348.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.ExtraNames.ArrayNum = 0;
    local_348.ExtraNames.ArrayMax = 0;
    local_348.ExtraProperty = Index;
    FPCGAttributePropertySelector::Update(&local_348,(FString *)local_3c0);
    local_3a8 = 0;
    local_388._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    FStack_3a0._0_4_ = FStack_3a0._1_4_ << 8;
    FStack_3a0.CustomFlag = 0xffffffff;
    FStack_3a0.DebugName.ComparisonIndex.Value = 0;
    FStack_3a0.DebugName.Number = 0;
    local_390 = (char)lVar10;
    local_388.Selection = Attribute;
    local_388.DomainName.ComparisonIndex.Value = 0;
    local_388.DomainName.Number = 0;
    local_388.AttributeName.ComparisonIndex.Value = 0;
    local_388.AttributeName.Number = 0;
    local_388.PropertyName.ComparisonIndex.Value = 0;
    local_388.PropertyName.Number = 0;
    local_388.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.ExtraNames.ArrayNum = 0;
    local_388.ExtraNames.ArrayMax = 0;
    local_388.ExtraProperty = Index;
    FPCGAttributePropertySelector::ImportFromOtherSelector(&local_388,&local_348);
    if (local_388.Selection == Attribute) {
      if (CONCAT44(local_388.DomainName.Number,local_388.DomainName.ComparisonIndex.Value) != 0) {
        if (1 < (byte)LogPCG._0_1_) {
          FPCGAttributePropertySelector::ToString(&local_388,&local_230,false);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          FVar20.Data = local_230.Data.AllocatorInstance.Data;
          goto LAB_1497e5eaf;
        }
        goto LAB_1497e5eb9;
      }
      if (PCGDataConstants::DataDomainName == (FName)0x0) {
        uStack_130 = PCGMetadataDomainID::Data._0_4_;
        iStack_12c = PCGMetadataDomainID::Data.CustomFlag;
        uStack_128 = PCGMetadataDomainID::Data.DebugName.ComparisonIndex.Value;
        uStack_124 = PCGMetadataDomainID::Data.DebugName.Number;
      }
      else {
        uStack_130 = PCGMetadataDomainID::Default._0_4_;
        iStack_12c = PCGMetadataDomainID::Default.CustomFlag;
        uStack_128 = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
        uStack_124 = PCGMetadataDomainID::Default.DebugName.Number;
      }
      local_138 = CONCAT44(local_388.AttributeName.Number,
                           local_388.AttributeName.ComparisonIndex.Value);
      if (((local_138 != local_3a8) || ((EPCGMetadataDomainFlag)uStack_130 != FStack_3a0.Flag)) ||
         (iStack_12c != FStack_3a0.CustomFlag)) {
        FStack_3a0.CustomFlag = iStack_12c;
        FStack_3a0._0_4_ = uStack_130;
        FStack_3a0.DebugName.Number = uStack_124;
        FStack_3a0.DebugName.ComparisonIndex.Value = uStack_128;
        local_3a8 = local_138;
      }
    }
    else {
      if (1 < (byte)LogPCG._0_1_) {
        FPCGAttributePropertySelector::ToString(&local_388,&local_240,false);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FVar20.Data = local_240.Data.AllocatorInstance.Data;
LAB_1497e5eaf:
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
        }
      }
LAB_1497e5eb9:
      FStack_3a0 = PCGMetadataDomainID::Invalid;
    }
    DestructItems<FString,int>
              ((FString *)local_348.ExtraNames.AllocatorInstance.Data,local_348.ExtraNames.ArrayNum)
    ;
    if (local_348.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.ExtraNames.AllocatorInstance.Data);
    }
    lVar28 = plVar27[1];
    bVar4 = false;
    lVar29 = *plVar27;
    if (((int)lVar28 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    lVar28 = (longlong)(int)lVar28 * 0x68 + lVar29;
    for (; lVar29 != lVar28; lVar29 = lVar29 + 0x68) {
      iVar7 = *(int *)(lVar29 + 0x38);
      lVar25 = *(longlong *)(lVar29 + 0x30);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar23 = (longlong)iVar7 * 0x78 + lVar25;
      for (; lVar25 != lVar23; lVar25 = lVar25 + 0x78) {
        if ((((*(longlong *)(lVar25 + 8) == local_3a8) &&
             (*(EPCGMetadataDomainFlag *)(lVar25 + 0x10) == FStack_3a0.Flag)) &&
            (*(int *)(lVar25 + 0x14) == FStack_3a0.CustomFlag)) &&
           (bVar4 = true, *(char *)(lVar25 + 0x20) == local_390)) {
          if (lVar25 != 0) goto LAB_1497e607c;
          break;
        }
      }
      pFVar24 = local_3f0;
    }
    if ((int)local_3c8[1] < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
LAB_1497e60fc:
      if (*(longlong *)((longlong)this + 0x10) != 0) {
        if (bVar4) {
          pFVar13 = FText::FromString(&local_b8,&local_3e0);
          pFVar14 = FText::FromString(&local_108,(FString *)local_3c0);
          ::FString::ConcatFC(&local_300,(FString *)pFVar24,L"_");
          ::FString::ConcatFF(&local_2d0,&local_300,(FString *)(pFVar24 + 0x10));
          ::FString::ConcatFF(&local_2e0,&local_2d0,local_3e8);
          FText::FromString(&local_200,&local_2e0);
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_1e0,L"PCGCustomHLSLKernel",L"InvalidAttributeType",
                               L"Tried to call attribute function \'{0}\' on attribute \'{1}\' which is not of type \'{2}\'."
                              );
          pFVar16 = FTextFormat::FTextFormat(&local_f8,pFVar15,Default);
          pFVar13 = FText::Format<FText,FText,FText>(&local_1f0,pFVar16,&local_200,pFVar14,pFVar13);
          FText::operator=(*(FText **)((longlong)this + 0x10),pFVar13);
          local_1b0.TextData.Reference = local_1e0.TextData.Reference;
          if (local_1f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
            local_1b0.TextData.Reference = local_1e0.TextData.Reference;
          }
        }
        else {
          pFVar13 = FText::FromString(&local_e8,&local_3e0);
          pFVar14 = FText::FromString(&local_d8,(FString *)local_3c0);
          ::FString::ConcatFC(&local_290,(FString *)pFVar24,L"_");
          ::FString::ConcatFF(&local_2a0,&local_290,(FString *)(pFVar24 + 0x10));
          ::FString::ConcatFF(&local_2b0,&local_2a0,local_3e8);
          FText::FromString(&local_1d0,&local_2b0);
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          }
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_1b0,L"PCGCustomHLSLKernel",L"InvalidAttributeDNE",
                               L"Tried to call attribute function \'{0}\' on attribute \'{1}\' which does not exist."
                              );
          pFVar16 = FTextFormat::FTextFormat(&local_c8,pFVar15,Default);
          pFVar13 = FText::Format<FText,FText,FText>(&local_1c0,pFVar16,&local_1d0,pFVar14,pFVar13);
          FText::operator=(*(FText **)((longlong)this + 0x10),pFVar13);
          if (local_1c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
          }
        }
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
        }
      }
      DestructItems<FString,int>
                ((FString *)local_388.ExtraNames.AllocatorInstance.Data,
                 local_388.ExtraNames.ArrayNum);
      if (local_388.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.ExtraNames.AllocatorInstance.Data);
      }
LAB_1497e5e36:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if ((int)local_3c8[1] != 0) goto LAB_1497e60fc;
LAB_1497e607c:
    DestructItems<FString,int>
              ((FString *)local_388.ExtraNames.AllocatorInstance.Data,local_388.ExtraNames.ArrayNum)
    ;
    if (local_388.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.ExtraNames.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    pFVar24 = local_3b8 + 0x40;
    uVar17 = (ulonglong)local_3d0;
  } while( true );
}

// AreAttributesValid @ 1497ee8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPCGCustomHLSLKernel::AreAttributesValid
          (UPCGCustomHLSLKernel *this,FPCGContext *param_1,FText *param_2)

{
  int iVar1;
  UPCGDataBinding *this_00;
  UPCGComputeGraph *pUVar2;
  code *pcVar3;
  UPCGCustomHLSLSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGSettings *pUVar10;
  TArray<FPCGParsedAttributeFunction,TSizedDefaultAllocator<32>_> *pTVar11;
  FName *pFVar12;
  TArray<FPCGParsedAttributeFunction,TSizedDefaultAllocator<32>_> *pTVar13;
  FName *pFVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_1b8 [32];
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184 [4];
  UPCGCustomHLSLSettings *local_180;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_178;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_168;
  undefined1 local_158 [8];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_150;
  FPCGKernelPin local_148;
  FPCGKernelPin local_138;
  FName *local_128;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_120;
  FName *local_118;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_110;
  TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
  *local_108;
  TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
  *local_100;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_f8;
  TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar15 = -1 < CpuChannel->Enabled;
  local_150 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)param_2;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1742,"UPCGCustomHLSLKernel::AreAttributesValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
               ,0x6ce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1742);
  }
  if ((param_1 != (FPCGContext *)0x0) &&
     (cVar6 = (**(code **)(param_1->_padding_ + 0x10))(param_1), cVar6 != '\0')) {
    pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
    local_180 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar10);
    this_00 = (UPCGDataBinding *)param_1[1]._padding_;
    if (this_00 != (UPCGDataBinding *)0x0) {
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1761,
                   "UPCGCustomHLSLKernel::AreAttributesValid::GetCachedPinDataDescs",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                   ,0x6e1);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1761);
      }
      pUVar4 = local_180;
      iVar1 = (local_180->InputPins).ArrayNum;
      pFVar12 = (FName *)(local_180->InputPins).AllocatorInstance.Data;
      pFVar14 = pFVar12 + (longlong)iVar1 * 6;
      while( true ) {
        if ((pUVar4->InputPins).ArrayNum != iVar1) {
          local_186 = 0;
          `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_186);
        }
        pUVar5 = local_180;
        if (pFVar12 == pFVar14) break;
        pUVar2 = (this_00->Graph).field0_0x0.DebugPtr;
        if (pUVar2 == (UPCGComputeGraph *)0x0) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<9049822076394799271>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                             ,0xa7,"Graph");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_178.Object = (FPCGDataCollectionDesc *)0x0;
          local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pFVar12 = pFVar12 + 6;
        }
        else {
          local_148.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
          local_148.bIsInput = true;
          local_148.PinLabel = *pFVar12;
          iVar9 = UPCGComputeGraph::GetBindingIndex(pUVar2,&local_148);
          UPCGDataBinding::GetCachedKernelPinDataDesc(this_00,&local_178,iVar9);
          if (local_178.Object != (FPCGDataCollectionDesc *)0x0) {
            local_120 = &local_178;
            local_128 = pFVar12;
            TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FName_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&>_>
                      (&local_98,
                       (TPairInitializer<FName_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&>
                        *)local_158,(bool *)&local_128);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
          pFVar12 = pFVar12 + 6;
        }
      }
      iVar1 = (pUVar4->OutputPins).ArrayNum;
      pFVar12 = (FName *)(pUVar4->OutputPins).AllocatorInstance.Data;
      pFVar14 = pFVar12 + (longlong)iVar1 * 0xf;
      while( true ) {
        if ((pUVar5->OutputPins).ArrayNum != iVar1) {
          local_185 = 0;
          `TCheckedPointerIterator<FPCGPinPropertiesGPU_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_185);
        }
        if (pFVar12 == pFVar14) break;
        pUVar2 = (this_00->Graph).field0_0x0.DebugPtr;
        if (pUVar2 == (UPCGComputeGraph *)0x0) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<9049822076394799271>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                             ,0xa7,"Graph");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_168.Object = (FPCGDataCollectionDesc *)0x0;
          local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pFVar12 = pFVar12 + 0xf;
        }
        else {
          local_138.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
          local_138.bIsInput = false;
          local_138.PinLabel = *pFVar12;
          iVar9 = UPCGComputeGraph::GetBindingIndex(pUVar2,&local_138);
          UPCGDataBinding::GetCachedKernelPinDataDesc(this_00,&local_168,iVar9);
          if (local_168.Object != (FPCGDataCollectionDesc *)0x0) {
            local_110 = &local_168;
            local_118 = pFVar12;
            TSet<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FName_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&>_>
                      (&local_e8,
                       (TPairInitializer<FName_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&>
                        *)(local_158 + 4),(bool *)&local_118);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
          pFVar12 = pFVar12 + 0xf;
        }
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar1 = (this->ParsedSources).ArrayNum;
      local_108 = &local_98;
      pTVar11 = (TArray<FPCGParsedAttributeFunction,TSizedDefaultAllocator<32>_> *)
                (this->ParsedSources).AllocatorInstance.Data;
      local_100 = &local_e8;
      local_f8 = local_150;
      pTVar13 = pTVar11 + iVar1;
      while( true ) {
        if ((this->ParsedSources).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FPCGCustomHLSLParsedSource_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_184);
        }
        if (pTVar11 == pTVar13) {
          local_e8.HashSize = 0;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          goto LAB_1497eed51;
        }
        bVar16 = `UPCGCustomHLSLKernel::AreAttributesValid'::__l8::<lambda_1>::operator()
                           (&local_108,pTVar11);
        if (!bVar16) break;
        pTVar11 = pTVar11 + 1;
      }
      bVar16 = false;
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      goto LAB_1497eed53;
    }
  }
LAB_1497eed51:
  bVar16 = true;
LAB_1497eed53:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar16;
}

// ComputeOutputBindingDataDesc @ 1497f35e0

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
UPCGCustomHLSLKernel::ComputeOutputBindingDataDesc
          (UPCGCustomHLSLKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  undefined4 *puVar1;
  EPCGKernelType EVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UPCGComputeGraph *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar12;
  UPCGSettings *pUVar13;
  UPCGCustomHLSLSettings *pUVar14;
  FPCGKernelParams *this_00;
  FPCGDataCollectionDesc *pFVar15;
  FName *pFVar16;
  FPCGDataTypeIdentifier *pFVar17;
  FPCGDataCollectionDesc *pFVar18;
  FPCGDataTypeIdentifier *this_01;
  FPCGPinProperties *pFVar19;
  TSharedPtr<FPCGDataCollectionDesc,1> *pTVar20;
  uint *puVar21;
  int *piVar22;
  FPCGPinPropertiesGPU *pFVar23;
  longlong lVar24;
  FPCGDataDesc *pFVar25;
  longlong lVar26;
  FName FVar27;
  ForAnyElementType FVar28;
  UPCGDataBinding *pUVar29;
  FPCGDataDesc *pFVar30;
  longlong lVar31;
  FName *pFVar32;
  undefined4 *puVar33;
  FPCGPinPropertiesGPU *pFVar34;
  ulonglong uVar35;
  UPCGCustomHLSLSettings *pUVar36;
  FScriptContainerElement *pFVar37;
  FName FVar38;
  longlong lVar39;
  undefined1 local_res18 [8];
  UPCGDataBinding *local_res20;
  TSharedPtr<FPCGDataCollectionDesc,1> local_2e8;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  undefined1 local_2d3;
  undefined1 local_2d2;
  undefined1 local_2d1;
  undefined1 local_2d0;
  undefined1 local_2cf [3];
  uint local_2cc;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  FName *local_2b8;
  UPCGCustomHLSLSettings *local_2b0;
  undefined1 local_2a8 [4];
  uint local_2a4;
  FName *local_2a0;
  undefined1 local_298 [44];
  FName local_26c;
  undefined1 local_264;
  FPCGKernelPin local_260;
  FName local_250;
  TSharedPtr<FPCGDataCollectionDesc,1> local_248;
  TSharedPtr<FPCGDataCollectionDesc,1> local_238;
  TSharedPtr<FPCGDataCollectionDesc,1> local_228;
  TRawPtrProxy<FPCGDataCollectionDesc> local_218;
  UPCGCustomHLSLSettings *local_210;
  FName *local_208;
  TRawPtrProxy<FPCGDataCollectionDesc> local_200;
  TRawPtrProxy<FPCGDataCollectionDesc> local_1f8 [2];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1e8;
  TArrayView<FPCGPinProperties_const_,int> local_1d8;
  FName local_1c8;
  FString local_1c0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1a8;
  TSharedPtr<FPCGDataCollectionDesc,1> local_198;
  TSharedPtr<FPCGDataCollectionDesc,1> local_188;
  FString local_178;
  FString local_168;
  FName local_158;
  FName FStack_150;
  FName local_148;
  EPCGKernelAttributeType local_140;
  FPCGAttributePropertySelector local_138;
  FPCGDataTypeIdentifier local_f8;
  undefined1 local_e0 [16];
  FName local_d0;
  EPCGKernelAttributeType local_c8;
  FPCGAttributePropertySelector local_c0;
  FPCGDataTypeIdentifier local_80;
  FPCGDataTypeIdentifier local_68;
  
  local_res20 = param_2;
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                         ,0xdd,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
    return pTVar12;
  }
  pUVar13 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
  pUVar14 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar13);
  pFVar34 = (FPCGPinPropertiesGPU *)(pUVar14->OutputPins).AllocatorInstance.Data;
  iVar11 = (pUVar14->OutputPins).ArrayNum;
  pFVar23 = pFVar34 + iVar11;
  do {
    if (pFVar34 == pFVar23) {
LAB_1497f3693:
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((FName)pFVar34->_padding_ == param_1) {
      if (pFVar34 != (FPCGPinPropertiesGPU *)0x0) {
        pFVar18 = (FPCGDataCollectionDesc *)0x0;
        local_2e8.Object = (FPCGDataCollectionDesc *)0x0;
        local_2e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2b0 = pUVar14;
        local_298._24_8_ = pFVar34;
        if ((iVar11 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
          return pTVar12;
        }
        if (param_1 == *(FName *)(pUVar14->OutputPins).AllocatorInstance.Data) {
          EVar2 = pUVar14->KernelType;
          if (((EVar2 == PointProcessor) || (EVar2 == TextureProcessor)) ||
             (EVar2 == AttributeSetProcessor)) {
            pFVar19 = GetFirstInputPin(this);
            pFVar37 = (FScriptContainerElement *)local_2e8.Object;
            if (pFVar19 != (FPCGPinProperties *)0x0) {
              local_260.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
              local_260.PinLabel = pFVar19->Label;
              local_260.bIsInput = true;
              UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_1e8,&local_260);
              if ((FScriptContainerElement *)local_1e8.Object == (FScriptContainerElement *)0x0) {
                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6160447179505794830>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                                   ,0xf2,"InputDataDesc");
                if (!bVar8) {
                  if (2 < (byte)LogPCG._0_1_) {
                    ::FName::ToString(&local_260.PinLabel,&local_1c0);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                    }
                  }
                  __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
                  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_1e8.SharedReferenceCount.ReferenceController)
                  ;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_2e8.SharedReferenceCount.ReferenceController)
                  ;
                  return __return_storage_ptr__;
                }
                pcVar7 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                return pTVar12;
              }
              local_1a8.Object = local_1e8.Object;
              local_1a8.SharedReferenceCount.ReferenceController =
                   local_1e8.SharedReferenceCount.ReferenceController;
              if (local_1e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1e8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              pTVar20 = FPCGDataCollectionDesc::MakeSharedFrom(&local_198,&local_1a8);
              if (&local_2e8 != pTVar20) {
                local_2e8.Object = pTVar20->Object;
                pTVar20->Object = (FPCGDataCollectionDesc *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&local_2e8.SharedReferenceCount,&pTVar20->SharedReferenceCount);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1e8.SharedReferenceCount.ReferenceController);
              pFVar37 = (FScriptContainerElement *)local_2e8.Object;
            }
          }
          else if (EVar2 == PointGenerator) {
            this_00 = UPCGDataBinding::GetCachedKernelParams(param_2,(UPCGComputeKernel *)this);
            if (this_00 == (FPCGKernelParams *)0x0) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_6160447179505794811>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                                 ,0x105,"KernelParams");
              if (!bVar8) {
                __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2e8.SharedReferenceCount.ReferenceController);
                return __return_storage_ptr__;
              }
              pcVar7 = (code *)swi(3);
              pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
              return pTVar12;
            }
            pFVar15 = ::operator_new(0x10);
            if (pFVar15 != (FPCGDataCollectionDesc *)0x0) {
              (pFVar15->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar15->DataDescs).ArrayNum = 0;
              (pFVar15->DataDescs).ArrayMax = 0;
              pFVar18 = pFVar15;
            }
            local_218.Object = pFVar18;
            TSharedPtr<FPCGDataCollectionDesc,1>::
            TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>(&local_248,&local_218);
            local_2e8.Object = local_248.Object;
            local_248.Object = (FPCGDataCollectionDesc *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_2e8.SharedReferenceCount,&local_248.SharedReferenceCount);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_248.SharedReferenceCount.ReferenceController);
            pFVar37 = (FScriptContainerElement *)local_2e8.Object;
            if (((FScriptContainerElement *)local_2e8.Object == (FScriptContainerElement *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
              return pTVar12;
            }
            pFVar16 = ::FName::FName(&local_1c8,0xb,L"NumElements",FNAME_Add);
            iVar10 = FPCGKernelParams::GetValueInt(this_00,*pFVar16);
            iVar11 = *(int *)((FPCGDataCollectionDesc *)pFVar37 + 8);
            if (iVar11 == *(int *)((FPCGDataCollectionDesc *)pFVar37 + 0xc)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,(ForAnyElementType *)pFVar37,
                                  (int *)((FPCGDataCollectionDesc *)pFVar37 + 0xc));
            }
            *(int *)((FPCGDataCollectionDesc *)pFVar37 + 8) = iVar11 + 1;
            lVar31 = *(longlong *)pFVar37;
            pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_80,Point);
            FPCGDataDesc::FPCGDataDesc
                      ((FPCGDataDesc *)(lVar31 + (longlong)iVar11 * 0x68),pFVar17,iVar10);
          }
          else {
            if (EVar2 != TextureGenerator) goto LAB_1497f3b4f;
            pFVar15 = ::operator_new(0x10);
            if (pFVar15 != (FPCGDataCollectionDesc *)0x0) {
              (pFVar15->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar15->DataDescs).ArrayNum = 0;
              (pFVar15->DataDescs).ArrayMax = 0;
              pFVar18 = pFVar15;
            }
            local_1f8[0].Object = pFVar18;
            TSharedPtr<FPCGDataCollectionDesc,1>::
            TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>(&local_238,local_1f8);
            local_2e8.Object = local_238.Object;
            local_238.Object = (FPCGDataCollectionDesc *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_2e8.SharedReferenceCount,&local_238.SharedReferenceCount);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_238.SharedReferenceCount.ReferenceController);
            pFVar18 = local_2e8.Object;
            if (((FScriptContainerElement *)local_2e8.Object == (FScriptContainerElement *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
              return pTVar12;
            }
            iVar11 = *(int *)((longlong)pFVar18 + 8);
            iVar10 = (pUVar14->NumElements2D).field0_0x0._s_0.X;
            iVar3 = (pUVar14->NumElements2D).field0_0x0._s_0.Y;
            if (iVar11 == *(int *)((longlong)pFVar18 + 0xc)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,(ForAnyElementType *)pFVar18,
                                  (int *)((longlong)pFVar18 + 0xc));
            }
            *(int *)((longlong)pFVar18 + 8) = iVar11 + 1;
            pFVar25 = (FPCGDataDesc *)(*(longlong *)pFVar18 + (longlong)iVar11 * 0x68);
            pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68,BaseTexture);
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                      ((FPCGDataTypeIdentifier *)pFVar25,pFVar17);
            (pFVar25->ElementCount).field0_0x0._s_0.X = iVar10;
            (pFVar25->ElementCount).field0_0x0._s_0.Y = iVar3;
            *(undefined8 *)((longlong)&(pFVar25->ElementCount).field0_0x0 + 8) = 0;
            pFVar25->ElementDimension = One;
            (pFVar25->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar25->AttributeDescs).ArrayNum = 0;
            (pFVar25->AttributeDescs).ArrayMax = 0;
            (pFVar25->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            pFVar25->AllocatedPointProperties = None;
            (pFVar25->TagStringKeys).ArrayNum = 0;
            (pFVar25->TagStringKeys).ArrayMax = 4;
            this_01 = FPCGDataTypeIdentifier::operator&(pFVar17,&local_f8,BaseTexture);
            bVar8 = FPCGDataTypeIdentifier::operator!(this_01);
            if (local_f8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Ids.AllocatorInstance.Data);
            }
            pFVar25->ElementDimension = !bVar8;
            FPCGDataDesc::InitializeAttributeDescs(pFVar25,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
            pFVar5 = (pFVar17->Ids).AllocatorInstance.Data;
            pFVar37 = (FScriptContainerElement *)local_2e8.Object;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
              pFVar37 = (FScriptContainerElement *)local_2e8.Object;
            }
          }
        }
        else {
LAB_1497f3b4f:
          pFVar15 = ::operator_new(0x10);
          if (pFVar15 != (FPCGDataCollectionDesc *)0x0) {
            (pFVar15->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar15->DataDescs).ArrayNum = 0;
            (pFVar15->DataDescs).ArrayMax = 0;
            pFVar18 = pFVar15;
          }
          local_200.Object = pFVar18;
          TSharedPtr<FPCGDataCollectionDesc,1>::
          TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>(&local_228,&local_200);
          local_2e8.Object = local_228.Object;
          local_228.Object = (FPCGDataCollectionDesc *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_2e8.SharedReferenceCount,&local_228.SharedReferenceCount);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.SharedReferenceCount.ReferenceController);
          local_188.Object = local_2e8.Object;
          local_188.SharedReferenceCount.ReferenceController =
               local_2e8.SharedReferenceCount.ReferenceController;
          if (local_2e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1d8.DataPtr = (FPCGPinProperties *)(pUVar14->InputPins).AllocatorInstance.Data;
          iVar11 = (pUVar14->InputPins).ArrayNum;
          if ((iVar11 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
          local_1d8.ArrayNum = iVar11;
          UPCGComputeKernel::ComputeDataDescFromPinProperties
                    ((UPCGComputeKernel *)this,pFVar34,&local_1d8,param_2,&local_188);
          pFVar37 = (FScriptContainerElement *)local_2e8.Object;
        }
        pUVar29 = local_res20;
        if (pFVar37 == (FScriptContainerElement *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6160447179505794787>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                             ,0x11d,"OutDataDesc");
          if (!bVar8) {
            __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2e8.SharedReferenceCount.ReferenceController);
            return __return_storage_ptr__;
          }
          pcVar7 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
          return pTVar12;
        }
        local_2cc = (pFVar34->PropertiesGPU).CreatedKernelAttributeKeys.ArrayNum;
        uVar35 = (ulonglong)(int)local_2cc;
        pFVar16 = (FName *)(pFVar34->PropertiesGPU).CreatedKernelAttributeKeys.AllocatorInstance.
                           Data;
        pFVar32 = pFVar16 + uVar35 * 0xc;
        local_2a0 = pFVar32;
        while( true ) {
          if ((((FPCGPinPropertiesGPUStruct *)(local_298._24_8_ + 0x30))->CreatedKernelAttributeKeys
              ).ArrayNum != (int)uVar35) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FPCGKernelAttributeKey_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar16 == pFVar32) break;
          if ((pFVar37 == (FScriptContainerElement *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
          local_158 = *pFVar16;
          FStack_150 = pFVar16[1];
          local_140 = (EPCGKernelAttributeType)pFVar16[3].ComparisonIndex.Value;
          local_148 = pFVar16[2];
          FPCGAttributePropertySelector::FPCGAttributePropertySelector
                    (&local_138,(FPCGAttributePropertySelector *)(pFVar16 + 4));
          local_138._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
          pFVar25 = *(FPCGDataDesc **)pFVar37;
          iVar11 = *(int *)(pFVar37 + 8);
          pFVar30 = pFVar25 + iVar11;
          while( true ) {
            if (*(int *)(pFVar37 + 8) != iVar11) {
              local_2d8 = 0;
              `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_2d8);
            }
            if (pFVar25 == pFVar30) break;
            local_e0._0_4_ = local_158.ComparisonIndex.Value;
            local_e0._4_4_ = local_158.Number;
            local_e0._8_4_ = FStack_150.ComparisonIndex.Value;
            local_e0._12_4_ = FStack_150.Number;
            local_c8 = local_140;
            local_d0 = local_148;
            FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_c0,&local_138);
            local_c0._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
            FPCGDataDesc::AddAttribute
                      (pFVar25,(FPCGKernelAttributeKey *)local_e0,pUVar29,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
            pFVar25 = pFVar25 + 1;
          }
          DestructItems<FString,int>
                    ((FString *)local_138.ExtraNames.AllocatorInstance.Data,
                     local_138.ExtraNames.ArrayNum);
          pFVar32 = local_2a0;
          uVar35 = (ulonglong)local_2cc;
          if (local_138.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.ExtraNames.AllocatorInstance.Data);
          }
          pFVar16 = pFVar16 + 0xc;
        }
        if ((pFVar37 == (FScriptContainerElement *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
          return pTVar12;
        }
        iVar11 = *(int *)(pFVar37 + 8);
        lVar31 = *(longlong *)pFVar37;
        if ((iVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
          return pTVar12;
        }
        lVar39 = lVar31 + (longlong)iVar11 * 0x68;
        for (; lVar31 != lVar39; lVar31 = lVar31 + 0x68) {
          iVar11 = *(int *)(lVar31 + 0x38);
          lVar26 = *(longlong *)(lVar31 + 0x30);
          if ((iVar11 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
          pFVar18 = local_2e8.Object;
          lVar24 = (longlong)iVar11 * 0x78 + lVar26;
          for (; lVar26 != lVar24; lVar26 = lVar26 + 0x78) {
            if ((*(char *)(lVar26 + 0x20) == '\n') || (*(char *)(lVar26 + 0x20) == '\v')) {
              local_2c8.Data = (FScriptContainerElement *)0x0;
              local_2c0 = 0;
              local_2a4 = (local_2b0->InputPins).ArrayNum;
              uVar35 = (ulonglong)(int)local_2a4;
              pFVar16 = (FName *)(local_2b0->InputPins).AllocatorInstance.Data;
              pFVar32 = pFVar16 + uVar35 * 6;
              pUVar29 = local_res20;
              local_2a0 = pFVar32;
              goto LAB_1497f3fc9;
            }
          }
          pFVar37 = (FScriptContainerElement *)local_2e8.Object;
        }
        goto LAB_1497f3efb;
      }
      goto LAB_1497f3693;
    }
    pFVar34 = pFVar34 + 1;
  } while( true );
LAB_1497f3fc9:
  local_2b8 = pFVar16;
  if ((local_2b0->InputPins).ArrayNum != (int)uVar35) {
    local_2d7 = 0;
    `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_2d7);
  }
  if (pFVar16 == pFVar32) {
    if ((int)local_2c0 == 0) {
      pFVar37 = (FScriptContainerElement *)pFVar18;
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_No_incoming_att_151eed770,
                   (FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      if (((FScriptContainerElement *)pFVar18 == (FScriptContainerElement *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
      local_2cc = *(uint *)((longlong)pFVar18 + 8);
      uVar35 = (ulonglong)(int)local_2cc;
      pFVar16 = *(FName **)pFVar18;
      local_2b8 = pFVar16 + 7;
      local_208 = pFVar16 + uVar35 * 0xd;
      while( true ) {
        pFVar32 = local_208;
        local_2a0 = pFVar16;
        if (*(int *)((longlong)pFVar18 + 8) != (int)uVar35) {
          local_2d4 = 0;
          `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_2d4);
        }
        pFVar37 = (FScriptContainerElement *)local_2e8.Object;
        if (pFVar16 == pFVar32) break;
        local_2a4 = (local_2b8->ComparisonIndex).Value;
        uVar35 = (ulonglong)(int)local_2a4;
        FVar38 = local_2b8[-1];
        FVar27 = (FName)(uVar35 * 0x78 + (longlong)FVar38);
        local_250 = FVar27;
        while( true ) {
          if ((local_2b8->ComparisonIndex).Value != (uint)uVar35) {
            local_2d3 = 0;
            `TCheckedPointerIterator<FPCGKernelAttributeDesc,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_2d3);
          }
          if (FVar38 == FVar27) break;
          if ((*(char *)((longlong)FVar38 + 0x20) == '\n') ||
             (*(char *)((longlong)FVar38 + 0x20) == '\v')) {
            uVar35 = (ulonglong)(int)local_2c0;
            bVar8 = false;
            pUVar14 = (UPCGCustomHLSLSettings *)(local_2c8.Data + uVar35 * 0x10);
            local_res20 = (UPCGDataBinding *)CONCAT44(local_res20._4_4_,(int)local_2c0);
            FVar28.Data = local_2c8.Data;
            local_298._32_8_ = pUVar14;
            while( true ) {
              local_2b0 = (UPCGCustomHLSLSettings *)FVar28.Data;
              if ((int)local_2c0 != (int)uVar35) {
                local_2d2 = 0;
                `TCheckedPointerIterator<TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_2d2);
              }
              if ((UPCGCustomHLSLSettings *)FVar28.Data == pUVar14) break;
              if ((((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_ == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar7 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                return pTVar12;
              }
              iVar11 = (int)((longlong *)((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_)[1];
              lVar31 = *(longlong *)((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_;
              if ((iVar11 < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar9)) {
                pcVar7 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                return pTVar12;
              }
              lVar39 = (longlong)iVar11 * 0x68 + lVar31;
              for (; lVar31 != lVar39; lVar31 = lVar31 + 0x68) {
                iVar11 = *(int *)(lVar31 + 0x38);
                lVar26 = *(longlong *)(lVar31 + 0x30);
                if ((iVar11 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                  return pTVar12;
                }
                lVar24 = (longlong)iVar11 * 0x78 + lVar26;
                if (lVar26 != lVar24) {
LAB_1497f4500:
                  if ((((*(char *)(lVar26 + 0x20) != '\n') && (*(char *)(lVar26 + 0x20) != '\v')) ||
                      (*(longlong *)(lVar26 + 8) != *(longlong *)((longlong)FVar38 + 8))) ||
                     ((*(char *)(lVar26 + 0x10) != *(char *)((longlong)FVar38 + 0x10) ||
                      (*(int *)(lVar26 + 0x14) != *(int *)((longlong)FVar38 + 0x14)))))
                  goto LAB_1497f4529;
                  puVar33 = *(undefined4 **)(lVar26 + 0x68);
                  iVar11 = *(int *)(lVar26 + 0x70);
                  puVar1 = puVar33 + iVar11;
                  while( true ) {
                    if (*(int *)(lVar26 + 0x70) != iVar11) {
                      local_2d1 = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_2d1);
                    }
                    if (puVar33 == puVar1) break;
                    local_298._16_4_ = *puVar33;
                    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar38 + 0x68),
                               (int *)(local_298 + 0x10));
                    puVar33 = puVar33 + 1;
                  }
                  bVar8 = true;
                }
LAB_1497f4574:
                pUVar14 = (UPCGCustomHLSLSettings *)local_298._32_8_;
              }
              uVar35 = (ulonglong)local_res20 & 0xffffffff;
              FVar28.Data = (FScriptContainerElement *)&local_2b0->_padding_;
            }
            FVar27 = local_250;
            if (!bVar8) {
              uVar35 = (ulonglong)(int)local_2c0;
              pUVar14 = (UPCGCustomHLSLSettings *)(local_2c8.Data + uVar35 * 0x10);
              local_res20 = (UPCGDataBinding *)CONCAT44(local_res20._4_4_,(int)local_2c0);
              FVar28.Data = local_2c8.Data;
              local_210 = pUVar14;
              while( true ) {
                local_2b0 = (UPCGCustomHLSLSettings *)FVar28.Data;
                if ((int)local_2c0 != (int)uVar35) {
                  local_2d0 = 0;
                  `TCheckedPointerIterator<TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_2d0);
                }
                FVar27 = local_250;
                if ((UPCGCustomHLSLSettings *)FVar28.Data == pUVar14) break;
                if ((((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_ == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                  return pTVar12;
                }
                iVar11 = (int)((longlong *)((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_)[1];
                pUVar36 = *(UPCGCustomHLSLSettings **)
                           ((UPCGCustomHLSLSettings *)FVar28.Data)->_padding_;
                if ((iVar11 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                  return pTVar12;
                }
                local_298._32_8_ = &pUVar36->_padding_ + (longlong)iVar11 * 0xd;
                if (pUVar36 != (UPCGCustomHLSLSettings *)local_298._32_8_) {
                  do {
                    iVar11 = (int)pUVar36->_padding_;
                    lVar31 = pUVar36->_padding_;
                    if ((iVar11 < 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L""), bVar8)) {
                      pcVar7 = (code *)swi(3);
                      pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
                      return pTVar12;
                    }
                    lVar39 = (longlong)iVar11 * 0x78 + lVar31;
                    pUVar14 = local_210;
                    for (; local_210 = pUVar14, lVar31 != lVar39; lVar31 = lVar31 + 0x78) {
                      if ((*(char *)(lVar31 + 0x20) == '\n') || (*(char *)(lVar31 + 0x20) == '\v'))
                      {
                        puVar33 = *(undefined4 **)(lVar31 + 0x68);
                        iVar11 = *(int *)(lVar31 + 0x70);
                        puVar1 = puVar33 + iVar11;
                        while( true ) {
                          if (*(int *)(lVar31 + 0x70) != iVar11) {
                            local_2cf[0] = 0;
                            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                            <lambda_1>::operator()(local_2cf);
                          }
                          if (puVar33 == puVar1) break;
                          local_298._20_4_ = *puVar33;
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                                     ((longlong)FVar38 + 0x68),(int *)(local_298 + 0x14));
                          puVar33 = puVar33 + 1;
                        }
                      }
                      pUVar14 = local_210;
                    }
                    pUVar36 = (UPCGCustomHLSLSettings *)&pUVar36->_padding_;
                  } while (pUVar36 != (UPCGCustomHLSLSettings *)local_298._32_8_);
                }
                uVar35 = (ulonglong)local_res20 & 0xffffffff;
                FVar28.Data = (FScriptContainerElement *)&local_2b0->_padding_;
              }
            }
          }
          FVar38 = (FName)((longlong)FVar38 + 0x78);
          uVar35 = (ulonglong)local_2a4;
        }
        pFVar16 = local_2a0 + 0xd;
        uVar35 = (ulonglong)local_2cc;
        local_2b8 = local_2b8 + 0xd;
      }
    }
    DestructItems<TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_,int>
              ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)local_2c8.Data,(int)local_2c0);
    if ((UPCGCustomHLSLSettings *)local_2c8.Data != (UPCGCustomHLSLSettings *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
LAB_1497f3efb:
    puVar21 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&this->PinAllocatedProperties,(FName)*(longlong *)local_298._24_8_);
    if (puVar21 != (uint *)0x0) {
      if ((pFVar37 == (FScriptContainerElement *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
      iVar11 = *(int *)(pFVar37 + 8);
      lVar31 = *(longlong *)pFVar37;
      uVar4 = *puVar21;
      lVar39 = lVar31 + (longlong)iVar11 * 0x68;
      while( true ) {
        if (*(int *)(pFVar37 + 8) != iVar11) {
          `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2a8);
        }
        if (lVar31 == lVar39) break;
        *(uint *)(lVar31 + 0x40) = *(uint *)(lVar31 + 0x40) | uVar4;
        lVar31 = lVar31 + 0x68;
      }
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)pFVar37;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_2e8.SharedReferenceCount.ReferenceController;
    if (local_2e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  pUVar6 = (pUVar29->Graph).field0_0x0.DebugPtr;
  local_264 = 1;
  local_298._40_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_26c = *pFVar16;
  if (pUVar6 == (UPCGComputeGraph *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799228>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0x7c,"Graph");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
      return pTVar12;
    }
LAB_1497f42ee:
    local_298._0_8_ = (FPCGDataCollectionDesc *)0x0;
    local_298._8_8_ = (TReferenceControllerBase<1> *)0x0;
LAB_1497f42f6:
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6160447179505794747>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                       ,0x145,"InputPinDesc");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_298._8_8_);
    local_2b8 = pFVar16;
  }
  else {
    piVar22 = TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
              ::Find((TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
                      *)&pUVar6->KernelPinToFirstBinding,(FPCGKernelPin *)(local_298 + 0x28));
    if (piVar22 == (int *)0x0) {
      if (2 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_26c,&local_178);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        pFVar16 = local_2b8;
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
          pFVar16 = local_2b8;
        }
      }
LAB_1497f42a3:
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_26c,&local_168);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1497f42ee;
    }
    if (*piVar22 == -1) goto LAB_1497f42a3;
    UPCGDataBinding::ComputeKernelBindingDataDesc
              (pUVar29,(TSharedPtr<FPCGDataCollectionDesc_const_,1> *)local_298,*piVar22);
    if ((FPCGDataCollectionDesc *)local_298._0_8_ == (FPCGDataCollectionDesc *)0x0)
    goto LAB_1497f42f6;
    bVar8 = false;
    if (((FScriptContainerElement *)pFVar18 == (FScriptContainerElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
      return pTVar12;
    }
    local_2cc = *(uint *)((longlong)pFVar18 + 8);
    uVar35 = (ulonglong)(int)local_2cc;
    lVar31 = *(longlong *)pFVar18;
    piVar22 = (int *)(lVar31 + 0x38);
    lVar39 = lVar31 + uVar35 * 0x68;
    while( true ) {
      if (*(int *)((longlong)pFVar18 + 8) != (int)uVar35) {
        local_2d6 = 0;
        `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2d6);
      }
      if (lVar31 == lVar39) break;
      iVar11 = *piVar22;
      lVar26 = *(longlong *)(piVar22 + -2);
      lVar24 = (longlong)iVar11 * 0x78 + lVar26;
      while( true ) {
        if (*piVar22 != iVar11) {
          local_2d5 = 0;
          `TCheckedPointerIterator<FPCGKernelAttributeDesc,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2d5);
        }
        if (lVar26 == lVar24) break;
        if ((*(char *)(lVar26 + 0x20) == '\n') || (*(char *)(lVar26 + 0x20) == '\v')) {
          bVar8 = true;
          lVar26 = lVar26 + 0x78;
        }
        else {
          lVar26 = lVar26 + 0x78;
        }
      }
      uVar35 = (ulonglong)local_2cc;
      lVar31 = lVar31 + 0x68;
      piVar22 = piVar22 + 0x1a;
    }
    if (bVar8) {
      if (((local_2c8.Data <= (UPCGCustomHLSLSettings *)local_298) &&
          ((FScriptContainerElement *)local_298 < local_2c8.Data + (longlong)local_2c0._4_4_ * 0x10)
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
      iVar11 = (int)local_2c0;
      if ((int)local_2c0 == local_2c0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_2c8,(int *)((longlong)&local_2c0 + 4));
      }
      local_2c0 = CONCAT44(local_2c0._4_4_,iVar11 + 1);
      *(undefined8 *)(local_2c8.Data + (longlong)iVar11 * 0x10) = local_298._0_8_;
      *(undefined8 *)(local_2c8.Data + (longlong)iVar11 * 0x10 + 8) = local_298._8_8_;
      if ((TReferenceControllerBase<1> *)local_298._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_298._8_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_298._8_8_ + 8) + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_298._8_8_);
    pUVar29 = local_res20;
    pFVar32 = local_2a0;
  }
  uVar35 = (ulonglong)local_2a4;
  pFVar16 = local_2b8 + 6;
  goto LAB_1497f3fc9;
LAB_1497f4529:
  lVar26 = lVar26 + 0x78;
  if (lVar26 == lVar24) goto LAB_1497f4574;
  goto LAB_1497f4500;
}

// ComputeThreadCount @ 1497f5990

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
UPCGCustomHLSLKernel::ComputeThreadCount(UPCGCustomHLSLKernel *this,UPCGDataBinding *param_1)

{
  EPCGKernelType EVar1;
  EPCGDispatchThreadCount EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UPCGSettings *pUVar10;
  UPCGCustomHLSLSettings *pUVar11;
  uint *puVar12;
  FPCGPinProperties *pFVar13;
  FName *pFVar14;
  FPCGPinProperties *pFVar15;
  undefined1 *puVar16;
  FName *pFVar17;
  FPCGKernelParams *pFVar18;
  wchar_t *pwVar20;
  FPCGKernelParams *this_00;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FName local_58;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_50;
  FPCGKernelParams *pFVar19;
  
  pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar11 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar10);
  pFVar19 = (FPCGKernelParams *)0x0;
  pFVar18 = (FPCGKernelParams *)0x0;
  uVar8 = *(uint *)((longlong)&this->_padding_ + 4);
  if (*(int *)&(param_1->KernelParamsCache).KernelParams.field_0x8 !=
      *(int *)&(param_1->KernelParamsCache).KernelParams.field_0x34) {
    puVar16 = *(undefined1 **)&(param_1->KernelParamsCache).KernelParams.field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(param_1->KernelParamsCache).KernelParams.field_0x38;
    }
    uVar6 = *(uint *)(puVar16 +
                     (ulonglong)
                     (*(int *)&(param_1->KernelParamsCache).KernelParams.field_0x48 - 1U & uVar8) *
                     4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar6 * 0x78 +
                          *(longlong *)&(param_1->KernelParamsCache).KernelParams);
        if (*puVar12 == uVar8) {
          this_00 = (FPCGKernelParams *)(puVar12 + 2);
          if (puVar12 == (uint *)0x0) {
            this_00 = pFVar19;
          }
          if (this_00 != (FPCGKernelParams *)0x0) {
            EVar1 = pUVar11->KernelType;
            if (EVar1 == PointGenerator) {
              pwVar20 = L"NumElements";
              iVar5 = 0xb;
              pFVar14 = &local_res18;
            }
            else {
              if (EVar1 == TextureGenerator) {
                pFVar18 = (FPCGKernelParams *)
                          (ulonglong)
                          (uint)((pUVar11->NumElements2D).field0_0x0._s_0.Y *
                                (pUVar11->NumElements2D).field0_0x0._s_0.X);
                goto LAB_1497f5cc0;
              }
              if ((EVar1 < (Custom|TextureProcessor)) && ((0x25U >> (EVar1 & 0x1f) & 1) != 0)) {
                pFVar13 = GetFirstInputPin(this);
                pFVar18 = pFVar19;
                if (pFVar13 != (FPCGPinProperties *)0x0) {
                  uVar8 = GetElementCountForInputPin(this,pFVar13,param_1);
                  pFVar18 = (FPCGKernelParams *)(ulonglong)uVar8;
                }
                goto LAB_1497f5cc0;
              }
              if (EVar1 != Custom) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                                   ,0x2a5,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  iVar5 = (*pcVar3)();
                  return iVar5;
                }
                goto LAB_1497f5cc0;
              }
              EVar2 = pUVar11->DispatchThreadCount;
              if (EVar2 == FromFirstOutputPin) {
                iVar5 = (pUVar11->OutputPins).ArrayNum;
                if (iVar5 != 0) {
                  if ((iVar5 < 1) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    iVar5 = (*pcVar3)();
                    return iVar5;
                  }
                  pFVar14 = (FName *)(pUVar11->OutputPins).AllocatorInstance.Data;
                  if (pFVar14 != (FName *)0x0) {
                    UPCGDataBinding::GetCachedKernelPinDataDesc
                              (param_1,&local_50,(UPCGComputeKernel *)this,*pFVar14,false);
                    if (local_50.Object != (FPCGDataCollectionDesc *)0x0) {
                      if ((char)pFVar14[10].ComparisonIndex.Value == '\x01') {
                        uVar8 = 1;
                      }
                      else {
                        uVar6 = pFVar14[0xc].ComparisonIndex.Value;
                        uVar8 = 1;
                        if (1 < (int)uVar6) {
                          uVar8 = uVar6;
                        }
                      }
                      if ((local_50.Object == (FPCGDataCollectionDesc *)0x0) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar4)) {
                        pcVar3 = (code *)swi(3);
                        iVar5 = (*pcVar3)();
                        return iVar5;
                      }
                      uVar6 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_50.Object);
                      pFVar19 = (FPCGKernelParams *)(ulonglong)(uVar6 * uVar8);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_50.SharedReferenceCount.ReferenceController);
                    pFVar18 = pFVar19;
                  }
                }
                goto LAB_1497f5cc0;
              }
              if (EVar2 == FromProductOfInputPins) {
                pFVar17 = (FName *)(pUVar11->ThreadCountInputPinLabels).AllocatorInstance.Data;
                iVar5 = (pUVar11->ThreadCountInputPinLabels).ArrayNum;
                pFVar14 = pFVar17 + iVar5;
                while( true ) {
                  if ((pUVar11->ThreadCountInputPinLabels).ArrayNum != iVar5) {
                    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_res8);
                  }
                  pFVar18 = pFVar19;
                  if (pFVar17 == pFVar14) break;
                  pFVar13 = (FPCGPinProperties *)(pUVar11->InputPins).AllocatorInstance.Data;
                  pFVar15 = pFVar13 + (pUVar11->InputPins).ArrayNum;
                  if (pFVar13 == pFVar15) {
LAB_1497f5c62:
                    pFVar17 = pFVar17 + 1;
                  }
                  else {
                    do {
                      if (pFVar13->Label == *pFVar17) {
                        iVar7 = GetElementCountForInputPin(this,pFVar13,param_1);
                        iVar9 = 1;
                        if (1 < (int)pFVar19) {
                          iVar9 = (int)pFVar19;
                        }
                        pFVar19 = (FPCGKernelParams *)(ulonglong)(uint)(iVar7 * iVar9);
                        goto LAB_1497f5c62;
                      }
                      pFVar13 = pFVar13 + 1;
                    } while (pFVar13 != pFVar15);
                    pFVar17 = pFVar17 + 1;
                  }
                }
LAB_1497f5cc0:
                iVar5 = (int)pFVar18;
                pUVar10 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
                pUVar11 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar10);
                if ((pUVar11->KernelType == Custom) && (pUVar11->DispatchThreadCount != Fixed)) {
                  pFVar14 = ::FName::FName(&local_58,0x15,L"ThreadCountMultiplier",FNAME_Add);
                  iVar9 = FPCGKernelParams::GetValueInt(this_00,*pFVar14);
                  iVar5 = iVar5 * iVar9;
                }
                return iVar5;
              }
              if (EVar2 != Fixed) goto LAB_1497f5cc0;
              pwVar20 = L"FixedThreadCount";
              iVar5 = 0x10;
              pFVar14 = &local_res20;
            }
            pFVar14 = ::FName::FName(pFVar14,iVar5,pwVar20,FNAME_Add);
            uVar8 = FPCGKernelParams::GetValueInt(this_00,*pFVar14);
            pFVar18 = (FPCGKernelParams *)(ulonglong)uVar8;
            goto LAB_1497f5cc0;
          }
          break;
        }
        uVar6 = puVar12[0x1c];
      } while (uVar6 != 0xffffffff);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6160447179505794445>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                     ,0x273,"KernelParams");
  if (!bVar4) {
    return 0;
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// GetDataLabels @ 149812ca0

void __thiscall
UPCGCustomHLSLKernel::GetDataLabels
          (UPCGCustomHLSLKernel *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
            ::Find((TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
                    *)&this->PinDataLabels,param_1)->Labels;
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,pTVar1);
    return;
  }
  return;
}

// GetElementCountForInputPin @ 149814330

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
UPCGCustomHLSLKernel::GetElementCountForInputPin
          (UPCGCustomHLSLKernel *this,FPCGPinProperties *param_1,UPCGDataBinding *param_2)

{
  UPCGComputeGraph *this_00;
  code *pcVar1;
  FPCGDataCollectionDesc *this_01;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_28;
  FPCGKernelPin local_18;
  
  if (param_2 == (UPCGDataBinding *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                       ,0x794,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this_00 = (param_2->Graph).field0_0x0.DebugPtr;
  if (this_00 == (UPCGComputeGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"Graph");
    if (bVar2) {
code_r0x0001498143e6:
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else if (this == (UPCGCustomHLSLKernel *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"InKernel");
    if (bVar2) goto code_r0x0001498143e6;
    local_28.Object = (FPCGDataCollectionDesc *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_18.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
    local_18.bIsInput = true;
    local_18.PinLabel = param_1->Label;
    iVar3 = UPCGComputeGraph::GetBindingIndex(this_00,&local_18);
    UPCGDataBinding::GetCachedKernelPinDataDesc(param_2,&local_28,iVar3);
  }
  this_01 = local_28.Object;
  uVar4 = 0;
  if (local_28.Object != (FPCGDataCollectionDesc *)0x0) {
    if (local_28.Object == (FPCGDataCollectionDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(this_01);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return uVar4;
}

// GetElementCountMultiplier @ 1498144b0

uint __thiscall
UPCGCustomHLSLKernel::GetElementCountMultiplier(UPCGCustomHLSLKernel *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UPCGSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  uint uVar6;
  FName *pFVar7;
  FName *pFVar8;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar4);
  pFVar7 = (FName *)(pUVar5->OutputPins).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(pUVar5->OutputPins).ArrayNum * 0xf;
  for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0xf) {
    if (*pFVar7 == param_1) {
      if ((char)pFVar7[10].ComparisonIndex.Value == '\x01') {
        return 1;
      }
      uVar3 = pFVar7[0xc].ComparisonIndex.Value;
      uVar6 = 1;
      if (1 < (int)uVar3) {
        uVar6 = uVar3;
      }
      return uVar6;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6160447179505794355>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
                     ,0x2cd,"false");
  if (!bVar2) {
    return 1;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetFirstInputPin @ 149814ca0

FPCGPinProperties * __thiscall UPCGCustomHLSLKernel::GetFirstInputPin(UPCGCustomHLSLKernel *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  FPCGPinProperties *pFVar6;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar4);
  iVar1 = (pUVar5->InputPins).ArrayNum;
  if (iVar1 == 0) {
    return (FPCGPinProperties *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPCGPinProperties *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FPCGPinProperties *)(pUVar5->InputPins).AllocatorInstance.Data;
}

// GetFirstOutputPin @ 149814d90

FPCGPinPropertiesGPU * __thiscall
UPCGCustomHLSLKernel::GetFirstOutputPin(UPCGCustomHLSLKernel *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  FPCGPinPropertiesGPU *pFVar6;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar4);
  iVar1 = (pUVar5->OutputPins).ArrayNum;
  if (iVar1 == 0) {
    return (FPCGPinPropertiesGPU *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPCGPinPropertiesGPU *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FPCGPinPropertiesGPU *)(pUVar5->OutputPins).AllocatorInstance.Data;
}

// GetInputPins @ 149815180

void __thiscall
UPCGCustomHLSLKernel::GetInputPins
          (UPCGCustomHLSLKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  int iVar2;
  FPCGPinProperties *pFVar3;
  UPCGSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar4);
  if (param_1 != &pUVar5->InputPins) {
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (pUVar5->InputPins).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FPCGPinProperties *)(pUVar5->InputPins).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
              ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// GetKernelAttributeKeys @ 1498154e0

void __thiscall
UPCGCustomHLSLKernel::GetKernelAttributeKeys
          (UPCGCustomHLSLKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == &this->KernelAttributeKeys) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->KernelAttributeKeys).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    ConstructItems<FPCGKernelAttributeKey,FPCGKernelAttributeKey,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x60,
               (FPCGKernelAttributeKey *)(this->KernelAttributeKeys).AllocatorInstance.Data,iVar1);
  }
  return;
}

// GetOutputPins @ 149816850

void __thiscall
UPCGCustomHLSLKernel::GetOutputPins
          (UPCGCustomHLSLKernel *this,
          TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGPinPropertiesGPU *pFVar3;
  UPCGSettings *pUVar4;
  UPCGCustomHLSLSettings *pUVar5;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar4);
  if (param_1 != &pUVar5->OutputPins) {
    DestructItems<FPCGPinPropertiesGPU,int>
              ((FPCGPinPropertiesGPU *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (pUVar5->OutputPins).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FPCGPinPropertiesGPU *)(pUVar5->OutputPins).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPCGPinPropertiesGPU,FPCGPinPropertiesGPU,int>
              ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// GetPrivateStaticClass @ 149817690

UClass * __cdecl UPCGCustomHLSLKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLKernel",
               &Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLKernel,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCustomHLSLKernel>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLKernel.InnerSingleton;
}

// GetThreadCountMultiplier @ 14981bab0

uint __thiscall UPCGCustomHLSLKernel::GetThreadCountMultiplier(UPCGCustomHLSLKernel *this)

{
  UPCGSettings *pUVar1;
  UPCGCustomHLSLSettings *pUVar2;
  
  pUVar1 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar2 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar1);
  return pUVar2->ThreadCountMultiplier;
}

// IsKernelDataValid @ 149820a80

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
UPCGCustomHLSLKernel::IsKernelDataValid(UPCGCustomHLSLKernel *this,FPCGContext *param_1)

{
  bool bVar1;
  UPCGSettings *pUVar2;
  bool bVar3;
  FText local_18;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId191,"UPCGCustomHLSLKernel::IsKernelDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGCustomHLSLKernel.cpp"
               ,0xbf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId191);
  }
  bVar1 = UPCGComputeKernel::IsKernelDataValid((UPCGComputeKernel *)this,param_1);
  if (bVar1) {
    if (param_1 != (FPCGContext *)0x0) {
      FText::FText(&local_18);
      bVar1 = AreAttributesValid(this,param_1,&local_18);
      if (!bVar1) {
        pUVar2 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar2,&local_18);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
        bVar1 = false;
        goto LAB_149820b55;
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
LAB_149820b55:
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// IsThreadCountMultiplierInUse @ 149820cf0

bool __thiscall UPCGCustomHLSLKernel::IsThreadCountMultiplierInUse(UPCGCustomHLSLKernel *this)

{
  UPCGSettings *pUVar1;
  UPCGCustomHLSLSettings *pUVar2;
  
  pUVar1 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar2 = CastChecked<UPCGCustomHLSLSettings,UPCGSettings_const_>(pUVar1);
  if ((pUVar2->KernelType == Custom) && (pUVar2->DispatchThreadCount != Fixed)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUPCGCustomHLSLKernel @ 1498471c0

void __cdecl UPCGCustomHLSLKernel::StaticRegisterNativesUPCGCustomHLSLKernel(void)

{
  return;
}

