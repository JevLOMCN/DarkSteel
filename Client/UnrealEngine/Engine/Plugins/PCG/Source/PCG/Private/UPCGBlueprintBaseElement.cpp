// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 49

// StaticClass @ 149727f20

UClass * __cdecl UPCGBlueprintBaseElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintBaseElement",
               &Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintBaseElement,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBlueprintBaseElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintBaseElement>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton;
}

// UPCGBlueprintBaseElement @ 1499c30c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintBaseElement * __thiscall
UPCGBlueprintBaseElement::UPCGBlueprintBaseElement
          (UPCGBlueprintBaseElement *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsCacheable = false;
  this->bComputeFullDataCrc = false;
  this->_padding_ = (longlong)&___7UPCGBlueprintBaseElement__6B_;
  (this->CustomInputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomInputPins).ArrayNum = 0;
  (this->CustomInputPins).ArrayMax = 0;
  (this->CustomOutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomOutputPins).ArrayNum = 0;
  (this->CustomOutputPins).ArrayMax = 0;
  this->bHasDynamicPins = false;
  this->InstanceWorld = (UWorld *)0x0;
  this->CurrentContext = (FPCGContext *)0x0;
  this->bRequiresGameThread = true;
  this->bHasDefaultInPin = true;
  this->bHasDefaultOutPin = true;
  return this;
}

// UPCGBlueprintBaseElement @ 1499c3120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintBaseElement * __thiscall
UPCGBlueprintBaseElement::UPCGBlueprintBaseElement
          (UPCGBlueprintBaseElement *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsCacheable = false;
  this->bComputeFullDataCrc = false;
  this->_padding_ = (longlong)&___7UPCGBlueprintBaseElement__6B_;
  (this->CustomInputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomInputPins).ArrayNum = 0;
  (this->CustomInputPins).ArrayMax = 0;
  (this->CustomOutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomOutputPins).ArrayNum = 0;
  (this->CustomOutputPins).ArrayMax = 0;
  this->bHasDynamicPins = false;
  this->InstanceWorld = (UWorld *)0x0;
  this->CurrentContext = (FPCGContext *)0x0;
  this->bRequiresGameThread = true;
  this->bHasDefaultInPin = true;
  this->bHasDefaultOutPin = true;
  return this;
}

// ~UPCGBlueprintBaseElement @ 1499c6250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement(UPCGBlueprintBaseElement *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGBlueprintBaseElement__6B_;
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->CustomOutputPins).AllocatorInstance.Data,
             (this->CustomOutputPins).ArrayNum);
  pFVar1 = (this->CustomOutputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->CustomInputPins).AllocatorInstance.Data,
             (this->CustomInputPins).ArrayNum);
  pFVar1 = (this->CustomInputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyPreconfiguredSettings @ 1499d3950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintBaseElement::ApplyPreconfiguredSettings
          (UPCGBlueprintBaseElement *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  UFunction *pUVar3;
  undefined1 local_res8 [8];
  undefined4 local_28 [2];
  FText local_20;
  
  local_28[0] = 0xffffffff;
  FText::FText(&local_20);
  TVar2.Reference = local_20.TextData.Reference;
  pIVar1 = *(ITextData **)&param_1->field_0x8;
  local_28[0] = *(undefined4 *)param_1;
  if (local_20.TextData.Reference != pIVar1) {
    local_20.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_20.Flags = *(uint *)&param_1->field_0x10;
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGBlueprintBaseElement_ApplyPreconfiguredSettings);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_28);
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return;
}

// BeginDestroy @ 1499d3c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintBaseElement::BeginDestroy(UPCGBlueprintBaseElement *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGBlueprintBaseElement **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CustomInputLabels @ 1499dce90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UPCGBlueprintBaseElement::CustomInputLabels
          (UPCGBlueprintBaseElement *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 *puVar2;
  ForElementType<FSetElementId> FVar3;
  uint *puVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined1 *this_00;
  ulonglong uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 *puVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FSparseArrayAllocationInfo local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res18 = (this->CustomInputPins).ArrayNum;
  uVar15 = (ulonglong)(int)local_res18;
  pFVar21 = (this->CustomInputPins).AllocatorInstance.Data;
  local_res20 = pFVar21 + uVar15 * 0x30;
  do {
    pFVar6 = local_res20;
    puVar22 = &(__return_storage_ptr__->Elements).field_0x8;
    if ((this->CustomInputPins).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar21 == pFVar6) {
      return __return_storage_ptr__;
    }
    iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if (iVar9 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar22,
                         (int *)&(__return_storage_ptr__->Elements).field_0xc);
      this_00 = &(__return_storage_ptr__->Elements).field_0x10;
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar2 != (undefined1 *)0x0) {
        this_00 = puVar2;
      }
      bVar12 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar12 = bVar12 - 0x20;
      }
      *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) =
           *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar12 & 0x1f));
    }
    else {
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
      lVar16 = *(longlong *)&__return_storage_ptr__->Elements;
      iVar1 = *(int *)(lVar16 + 4 + (longlong)iVar8 * 0x10);
      iVar9 = iVar9 + -1;
      *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar1;
      *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(lVar16 + (longlong)iVar1 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)__return_storage_ptr__,&local_a8,iVar8);
    pvVar7 = local_a8.Pointer;
    iVar9 = local_a8.Index;
    if (local_a8.Pointer != (longlong *)0x0) {
      *(longlong *)local_a8.Pointer = *(longlong *)pFVar21;
      *(undefined4 *)((longlong)local_a8.Pointer + 8) = 0xffffffff;
    }
    lVar16 = *(longlong *)local_a8.Pointer;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar16);
    uVar10 = uVar10 + (int)((ulonglong)lVar16 >> 0x20);
    iVar8 = *(int *)puVar22;
    iVar1 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if ((iVar8 - iVar1 != 1) && (iVar8 != iVar1)) {
      FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar13 = FVar3;
      }
      iVar8 = *(int *)((longlong)FVar13 +
                      (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar10) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0x10)
              == *(longlong *)pvVar7) {
            if (iVar8 != -1) {
              *(longlong *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0x10)
                   = *(longlong *)pvVar7;
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)__return_storage_ptr__,iVar9,1);
              goto LAB_1499dd2ae;
            }
            break;
          }
          iVar8 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                          (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    uVar18 = 1;
    uVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
             *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if (3 < uVar14) {
      uVar15 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar14 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
      uVar10 = __return_storage_ptr__->HashSize - 1U & uVar10;
      *(uint *)((longlong)pvVar7 + 0xc) = uVar10;
      FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar13 = FVar3;
      }
      uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)pvVar7 + 8) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
      *(int *)((longlong)FVar13 + uVar15 * 4) = iVar9;
    }
    else {
      __return_storage_ptr__->HashSize = uVar18;
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
      }
      if (uVar18 != 0) {
        uVar10 = uVar18;
        if (uVar18 < 2) {
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar10 = 0;
            goto LAB_1499dd0ea;
          }
        }
        else {
LAB_1499dd0ea:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar10,4);
        }
        if (0 < (int)uVar18) {
          uVar19 = (ulonglong)uVar18;
          uVar15 = 0;
          do {
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar3;
            }
            uVar11 = uVar15 & (longlong)(int)uVar18 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (__return_storage_ptr__->HashSize != 0) {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        puStack_90 = &(__return_storage_ptr__->Elements).field_0x10;
        uStack_94 = 1;
        local_98 = 0;
        iStack_84 = 0;
        iStack_80 = 0;
        if (iVar9 != 0) {
          puVar4 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
          puVar20 = (uint *)puStack_90;
          if (puVar4 != (uint *)0x0) {
            puVar20 = puVar4;
          }
          uVar10 = *puVar20;
          iStack_80 = 0;
          local_98 = 0;
          while (uVar10 == 0) {
            iStack_80 = iStack_80 + 0x20;
            lVar16 = (longlong)local_98;
            local_98 = local_98 + 1;
            if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98)
            goto LAB_1499dd1d9;
            uVar10 = puVar20[lVar16 + 1];
          }
          uStack_94 = -uVar10 & uVar10;
          uVar15 = (ulonglong)uStack_94 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iStack_84 = (int)lVar16 + -1 + iStack_80;
          if (iVar9 < iStack_84) {
LAB_1499dd1d9:
            iStack_84 = iVar9;
          }
        }
        local_88 = 0xffffffff;
        local_70._padding_ = CONCAT44(uStack_94,local_98);
        local_70.CurrentBitIndex = iStack_84;
        local_70.UnvisitedBitMask = 0xffffffff;
        local_70._28_4_ = uStack_7c;
        local_70.BaseBitIndex = iStack_80;
        iVar8 = iStack_84;
        local_78 = __return_storage_ptr__;
        local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
        if (iStack_84 < iVar9) {
          do {
            puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)&local_78->Elements);
            uVar5 = *puVar17;
            uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
            uVar10 = __return_storage_ptr__->HashSize - 1U &
                     uVar10 + (int)((ulonglong)uVar5 >> 0x20);
            *(uint *)((longlong)puVar17 + 0xc) = uVar10;
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar3;
            }
            uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar10;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
            *(int *)((longlong)FVar13 + uVar15 * 4) = iVar8;
            local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
            iVar8 = local_70.CurrentBitIndex;
          } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
        }
      }
    }
LAB_1499dd2ae:
    pFVar21 = pFVar21 + 0x30;
    uVar15 = (ulonglong)local_res18;
  } while( true );
}

// CustomOutputLabels @ 1499dd2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UPCGBlueprintBaseElement::CustomOutputLabels
          (UPCGBlueprintBaseElement *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 *puVar2;
  ForElementType<FSetElementId> FVar3;
  uint *puVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined1 *this_00;
  ulonglong uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 *puVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FSparseArrayAllocationInfo local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res18 = (this->CustomOutputPins).ArrayNum;
  uVar15 = (ulonglong)(int)local_res18;
  pFVar21 = (this->CustomOutputPins).AllocatorInstance.Data;
  local_res20 = pFVar21 + uVar15 * 0x30;
  do {
    pFVar6 = local_res20;
    puVar22 = &(__return_storage_ptr__->Elements).field_0x8;
    if ((this->CustomOutputPins).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar21 == pFVar6) {
      return __return_storage_ptr__;
    }
    iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if (iVar9 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar22,
                         (int *)&(__return_storage_ptr__->Elements).field_0xc);
      this_00 = &(__return_storage_ptr__->Elements).field_0x10;
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar2 != (undefined1 *)0x0) {
        this_00 = puVar2;
      }
      bVar12 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar12 = bVar12 - 0x20;
      }
      *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) =
           *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar12 & 0x1f));
    }
    else {
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
      lVar16 = *(longlong *)&__return_storage_ptr__->Elements;
      iVar1 = *(int *)(lVar16 + 4 + (longlong)iVar8 * 0x10);
      iVar9 = iVar9 + -1;
      *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar1;
      *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(lVar16 + (longlong)iVar1 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)__return_storage_ptr__,&local_a8,iVar8);
    pvVar7 = local_a8.Pointer;
    iVar9 = local_a8.Index;
    if (local_a8.Pointer != (longlong *)0x0) {
      *(longlong *)local_a8.Pointer = *(longlong *)pFVar21;
      *(undefined4 *)((longlong)local_a8.Pointer + 8) = 0xffffffff;
    }
    lVar16 = *(longlong *)local_a8.Pointer;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar16);
    uVar10 = uVar10 + (int)((ulonglong)lVar16 >> 0x20);
    iVar8 = *(int *)puVar22;
    iVar1 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if ((iVar8 - iVar1 != 1) && (iVar8 != iVar1)) {
      FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar13 = FVar3;
      }
      iVar8 = *(int *)((longlong)FVar13 +
                      (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar10) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0x10)
              == *(longlong *)pvVar7) {
            if (iVar8 != -1) {
              *(longlong *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0x10)
                   = *(longlong *)pvVar7;
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)__return_storage_ptr__,iVar9,1);
              goto LAB_1499dd70e;
            }
            break;
          }
          iVar8 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                          (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    uVar18 = 1;
    uVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
             *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if (3 < uVar14) {
      uVar15 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar14 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
      uVar10 = __return_storage_ptr__->HashSize - 1U & uVar10;
      *(uint *)((longlong)pvVar7 + 0xc) = uVar10;
      FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar13 = FVar3;
      }
      uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)pvVar7 + 8) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
      *(int *)((longlong)FVar13 + uVar15 * 4) = iVar9;
    }
    else {
      __return_storage_ptr__->HashSize = uVar18;
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
      }
      if (uVar18 != 0) {
        uVar10 = uVar18;
        if (uVar18 < 2) {
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar10 = 0;
            goto LAB_1499dd54a;
          }
        }
        else {
LAB_1499dd54a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar10,4);
        }
        if (0 < (int)uVar18) {
          uVar19 = (ulonglong)uVar18;
          uVar15 = 0;
          do {
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar3;
            }
            uVar11 = uVar15 & (longlong)(int)uVar18 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (__return_storage_ptr__->HashSize != 0) {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        puStack_90 = &(__return_storage_ptr__->Elements).field_0x10;
        uStack_94 = 1;
        local_98 = 0;
        iStack_84 = 0;
        iStack_80 = 0;
        if (iVar9 != 0) {
          puVar4 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
          puVar20 = (uint *)puStack_90;
          if (puVar4 != (uint *)0x0) {
            puVar20 = puVar4;
          }
          uVar10 = *puVar20;
          iStack_80 = 0;
          local_98 = 0;
          while (uVar10 == 0) {
            iStack_80 = iStack_80 + 0x20;
            lVar16 = (longlong)local_98;
            local_98 = local_98 + 1;
            if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98)
            goto LAB_1499dd639;
            uVar10 = puVar20[lVar16 + 1];
          }
          uStack_94 = -uVar10 & uVar10;
          uVar15 = (ulonglong)uStack_94 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iStack_84 = (int)lVar16 + -1 + iStack_80;
          if (iVar9 < iStack_84) {
LAB_1499dd639:
            iStack_84 = iVar9;
          }
        }
        local_88 = 0xffffffff;
        local_70._padding_ = CONCAT44(uStack_94,local_98);
        local_70.CurrentBitIndex = iStack_84;
        local_70.UnvisitedBitMask = 0xffffffff;
        local_70._28_4_ = uStack_7c;
        local_70.BaseBitIndex = iStack_80;
        iVar8 = iStack_84;
        local_78 = __return_storage_ptr__;
        local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
        if (iStack_84 < iVar9) {
          do {
            puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)&local_78->Elements);
            uVar5 = *puVar17;
            uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
            uVar10 = __return_storage_ptr__->HashSize - 1U &
                     uVar10 + (int)((ulonglong)uVar5 >> 0x20);
            *(uint *)((longlong)puVar17 + 0xc) = uVar10;
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar3;
            }
            uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar10;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
            *(int *)((longlong)FVar13 + uVar15 * 4) = iVar8;
            local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
            iVar8 = local_70.CurrentBitIndex;
          } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
        }
      }
    }
LAB_1499dd70e:
    pFVar21 = pFVar21 + 0x30;
    uVar15 = (ulonglong)local_res18;
  } while( true );
}

// DynamicPinTypesOverride @ 1499e1fe0

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
UPCGBlueprintBaseElement::DynamicPinTypesOverride
          (UPCGBlueprintBaseElement *this,UPCGSettings *param_1,UPCGPin *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  UPCGSettings *local_28;
  UPCGPin *local_20;
  int local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintBaseElement_DynamicPinTypesOverride);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = 0;
    local_28 = param_1;
    local_20 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
  }
  else {
    local_18 = (**(code **)(this->_padding_ + 0x2b8))(this,param_1,param_2);
  }
  return local_18;
}

// DynamicPinTypesOverride_Implementation @ 1499e2080

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

int __thiscall
UPCGBlueprintBaseElement::DynamicPinTypesOverride_Implementation
          (UPCGBlueprintBaseElement *this,UPCGSettings *param_1,UPCGPin *param_2)

{
  EPCGDataType EVar1;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  this_00 = UPCGSettings::GetCurrentPinTypesID(param_1,&local_28,param_2);
  EVar1 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(this_00);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return EVar1;
}

// Execute @ 1499e24e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintBaseElement::Execute
          (UPCGBlueprintBaseElement *this,FPCGDataCollection *param_1,FPCGDataCollection *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  FPCGDataCollection local_68;
  FPCGDataCollection local_38;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGBlueprintBaseElement_Execute);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_68.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TaggedData.ArrayNum = 0;
    local_68.TaggedData.ArrayMax = 0;
    local_68.bCancelExecutionOnEmpty = false;
    local_68.bCancelExecution = false;
    local_68.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.DataCrcs.ArrayNum = 0;
    local_68.DataCrcs.ArrayMax = 0;
    local_68.InactiveOutputPinBitmask = 0;
    local_38.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.TaggedData.ArrayNum = 0;
    local_38.TaggedData.ArrayMax = 0;
    local_38.bCancelExecutionOnEmpty = false;
    local_38.bCancelExecution = false;
    local_38.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DataCrcs.ArrayNum = 0;
    local_38.DataCrcs.ArrayMax = 0;
    local_38.InactiveOutputPinBitmask = 0;
    FPCGDataCollection::operator=(&local_68,param_1);
    FPCGDataCollection::operator=(&local_38,param_2);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_68);
    FPCGDataCollection::operator=(param_2,&local_38);
    if (local_38.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data,
               local_38.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_38.TaggedData.AllocatorInstance.Data);
    }
    if (local_68.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_68.TaggedData.AllocatorInstance.Data,
               local_68.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_68.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_68.TaggedData.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))(this,param_1,param_2);
  }
  return;
}

// Execute_Implementation @ 1499f15c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintBaseElement::Execute_Implementation
          (UPCGBlueprintBaseElement *this,FPCGDataCollection *param_1,FPCGDataCollection *param_2)

{
  return;
}

// GetContextHandle @ 1499f4400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGBlueprintContextHandle * __thiscall
UPCGBlueprintBaseElement::GetContextHandle
          (UPCGBlueprintBaseElement *this,FPCGBlueprintContextHandle *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FPCGContextHandle,1> *pTVar4;
  bool bVar5;
  TWeakPtr<FPCGContextHandle,1> local_28;
  TWeakPtr<FPCGContextHandle,1> local_18;
  
  (__return_storage_ptr__->Handle).Object = (FPCGContextHandle *)0x0;
  (__return_storage_ptr__->Handle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  bVar5 = this->CurrentContext == (FPCGContext *)0x0;
  if (bVar5) {
    pTVar4 = &local_28;
    local_28.Object = (FPCGContextHandle *)0x0;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = FPCGContext::GetOrCreateHandle(this->CurrentContext,&local_18);
  }
  if (&__return_storage_ptr__->Handle != pTVar4) {
    (__return_storage_ptr__->Handle).Object = pTVar4->Object;
    pTVar4->Object = (FPCGContextHandle *)0x0;
    pTVar3 = (__return_storage_ptr__->Handle).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->Handle).WeakReferenceCount.ReferenceController =
         (pTVar4->WeakReferenceCount).ReferenceController;
    (pTVar4->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (bVar5) {
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if ((!bVar5) &&
     (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetInputPinByLabel @ 1499f75f0

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
UPCGBlueprintBaseElement::GetInputPinByLabel
          (UPCGBlueprintBaseElement *this,FName param_1,FPCGPinProperties *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FPCGPinProperties *pFVar4;
  ForAnyElementType FVar5;
  undefined1 local_res20 [8];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_58;
  FPCGPinProperties local_48;
  
  GetInputPins(this,&local_58);
  iVar1 = local_58.ArrayNum;
  pFVar4 = (FPCGPinProperties *)
           (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x30);
  FVar5.Data = local_58.AllocatorInstance.Data;
  iVar2 = local_58.ArrayNum;
  while( true ) {
    if (iVar2 != iVar1) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
      iVar2 = local_58.ArrayNum;
    }
    if ((FPCGPinProperties *)FVar5.Data == pFVar4) break;
    if (((FPCGPinProperties *)FVar5.Data)->Label == param_1) {
      param_2->Label = ((FPCGPinProperties *)FVar5.Data)->Label;
      param_2->Usage = ((FPCGPinProperties *)FVar5.Data)->Usage;
      FPCGDataTypeIdentifier::operator=
                (&param_2->AllowedTypes,&((FPCGPinProperties *)FVar5.Data)->AllowedTypes);
      bVar3 = true;
      param_2->bAllowMultipleData = ((FPCGPinProperties *)FVar5.Data)->bAllowMultipleData;
      param_2->PinStatus = ((FPCGPinProperties *)FVar5.Data)->PinStatus;
      param_2->bInvisiblePin = ((FPCGPinProperties *)FVar5.Data)->bInvisiblePin;
      param_2->bAllowMultipleConnections =
           ((FPCGPinProperties *)FVar5.Data)->bAllowMultipleConnections;
LAB_1499f76bc:
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FPCGPinProperties *)local_58.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return bVar3;
    }
    FVar5.Data = FVar5.Data + 0x30;
  }
  pFVar4 = FPCGPinProperties::FPCGPinProperties(&local_48);
  FPCGPinProperties::operator=(param_2,pFVar4);
  if (local_48.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  bVar3 = false;
  goto LAB_1499f76bc;
}

// GetInputPins @ 1499f80b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlueprintBaseElement::GetInputPins
          (UPCGBlueprintBaseElement *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  FPCGPinProperties *pFVar3;
  UPCGBlueprintSettings *pUVar4;
  UClass *pUVar5;
  
  if (this->CurrentContext == (FPCGContext *)0x0) {
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pUVar5 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*plVar2 + 0x450))(plVar2,__return_storage_ptr__);
        return __return_storage_ptr__;
      }
    }
  }
  else {
    pUVar4 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(this->CurrentContext);
    if (pUVar4 != (UPCGBlueprintSettings *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x450))(pUVar4,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CustomInputPins).ArrayNum;
  pFVar3 = (FPCGPinProperties *)(this->CustomInputPins).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetOutputPinByLabel @ 1499fa220

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
UPCGBlueprintBaseElement::GetOutputPinByLabel
          (UPCGBlueprintBaseElement *this,FName param_1,FPCGPinProperties *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FPCGPinProperties *pFVar4;
  ForAnyElementType FVar5;
  undefined1 local_res20 [8];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_58;
  FPCGPinProperties local_48;
  
  GetOutputPins(this,&local_58);
  iVar1 = local_58.ArrayNum;
  pFVar4 = (FPCGPinProperties *)
           (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x30);
  FVar5.Data = local_58.AllocatorInstance.Data;
  iVar2 = local_58.ArrayNum;
  while( true ) {
    if (iVar2 != iVar1) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
      iVar2 = local_58.ArrayNum;
    }
    if ((FPCGPinProperties *)FVar5.Data == pFVar4) break;
    if (((FPCGPinProperties *)FVar5.Data)->Label == param_1) {
      param_2->Label = ((FPCGPinProperties *)FVar5.Data)->Label;
      param_2->Usage = ((FPCGPinProperties *)FVar5.Data)->Usage;
      FPCGDataTypeIdentifier::operator=
                (&param_2->AllowedTypes,&((FPCGPinProperties *)FVar5.Data)->AllowedTypes);
      bVar3 = true;
      param_2->bAllowMultipleData = ((FPCGPinProperties *)FVar5.Data)->bAllowMultipleData;
      param_2->PinStatus = ((FPCGPinProperties *)FVar5.Data)->PinStatus;
      param_2->bInvisiblePin = ((FPCGPinProperties *)FVar5.Data)->bInvisiblePin;
      param_2->bAllowMultipleConnections =
           ((FPCGPinProperties *)FVar5.Data)->bAllowMultipleConnections;
LAB_1499fa2ec:
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FPCGPinProperties *)local_58.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return bVar3;
    }
    FVar5.Data = FVar5.Data + 0x30;
  }
  pFVar4 = FPCGPinProperties::FPCGPinProperties(&local_48);
  FPCGPinProperties::operator=(param_2,pFVar4);
  if (local_48.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  bVar3 = false;
  goto LAB_1499fa2ec;
}

// GetOutputPins @ 1499fa3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlueprintBaseElement::GetOutputPins
          (UPCGBlueprintBaseElement *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  FPCGPinProperties *pFVar3;
  UPCGBlueprintSettings *pUVar4;
  UClass *pUVar5;
  
  if (this->CurrentContext == (FPCGContext *)0x0) {
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pUVar5 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*plVar2 + 0x458))(plVar2,__return_storage_ptr__);
        return __return_storage_ptr__;
      }
    }
  }
  else {
    pUVar4 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(this->CurrentContext);
    if (pUVar4 != (UPCGBlueprintSettings *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x458))(pUVar4,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CustomOutputPins).ArrayNum;
  pFVar3 = (FPCGPinProperties *)(this->CustomOutputPins).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499faaa0

UClass * __cdecl UPCGBlueprintBaseElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintBaseElement",
               &Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintBaseElement,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBlueprintBaseElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintBaseElement>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintBaseElement.InnerSingleton;
}

// GetRandomStreamWithContext @ 1499fc7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRandomStream __thiscall
UPCGBlueprintBaseElement::GetRandomStreamWithContext
          (UPCGBlueprintBaseElement *this,FPCGBlueprintContextHandle *param_1)

{
  int iVar1;
  FPCGBlueprintContextHandle *in_R8;
  
  iVar1 = GetSeedWithContext(this,in_R8);
  *(int *)&(param_1->Handle).Object = iVar1;
  *(int *)((longlong)&(param_1->Handle).Object + 4) = iVar1;
  return (FRandomStream)param_1;
}

// GetSeedWithContext @ 1499fce50

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
UPCGBlueprintBaseElement::GetSeedWithContext
          (UPCGBlueprintBaseElement *this,FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1499fce76;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (this_00 = pFVar1->Context, this_00 != (FPCGContext *)0x0)) {
      iVar4 = FPCGContext::GetSeed(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return iVar4;
    }
  }
LAB_1499fce76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return 0x2a;
}

// GetWorld @ 1499fe3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UPCGBlueprintBaseElement::GetWorld(UPCGBlueprintBaseElement *this)

{
  UWorld *pUVar1;
  
  if (this->InstanceWorld != (UWorld *)0x0) {
    return this->InstanceWorld;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420fdaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
    return pUVar1;
  }
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc99) = 0;
  return (UWorld *)0x0;
}

// Initialize @ 1499fe590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintBaseElement::Initialize(UPCGBlueprintBaseElement *this)

{
  return;
}

// IsCacheableOverride @ 149a003e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintBaseElement::IsCacheableOverride(UPCGBlueprintBaseElement *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintBaseElement_IsCacheableOverride);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000149a00444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
  return (bool)uVar1;
}

// IsCacheableOverride_Implementation @ 149a00460

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
UPCGBlueprintBaseElement::IsCacheableOverride_Implementation(UPCGBlueprintBaseElement *this)

{
  return this->bIsCacheable;
}

// NodeColorOverride @ 149a02e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLinearColor * __thiscall
UPCGBlueprintBaseElement::NodeColorOverride
          (UPCGBlueprintBaseElement *this,FLinearColor *__return_storage_ptr__)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintBaseElement_NodeColorOverride);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x2c8))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NodeColorOverride_Implementation @ 149a02ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLinearColor * __thiscall
UPCGBlueprintBaseElement::NodeColorOverride_Implementation
          (UPCGBlueprintBaseElement *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// NodeTitleOverride @ 149a02f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall UPCGBlueprintBaseElement::NodeTitleOverride(UPCGBlueprintBaseElement *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  FName in_RDX;
  undefined8 local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintBaseElement_NodeTitleOverride);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    *(undefined8 *)in_RDX = local_res18[0];
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return in_RDX;
}

// NodeTitleOverride_Implementation @ 149a02f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UPCGBlueprintBaseElement::NodeTitleOverride_Implementation(UPCGBlueprintBaseElement *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// NodeTypeOverride @ 149a02fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGSettingsType __thiscall
UPCGBlueprintBaseElement::NodeTypeOverride(UPCGBlueprintBaseElement *this)

{
  EPCGSettingsType EVar1;
  UFunction *this_00;
  UClass *pUVar2;
  EPCGSettingsType local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintBaseElement_NodeTypeOverride);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = InputOutput;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x000149a03001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x2c0))(this);
  return EVar1;
}

// NodeTypeOverride_Implementation @ 149a03010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGSettingsType __thiscall
UPCGBlueprintBaseElement::NodeTypeOverride_Implementation(UPCGBlueprintBaseElement *this)

{
  return Blueprint;
}

// PostLoad @ 149a04ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintBaseElement::PostLoad(UPCGBlueprintBaseElement *this)

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
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPCGBlueprintBaseElement **)FVar5 == this) {
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

// ResolveContext @ 149a0c2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __cdecl UPCGBlueprintBaseElement::ResolveContext(void)

{
  int iVar1;
  UObject *pUVar2;
  FFrame *pFVar3;
  UClass *pUVar4;
  
  pFVar3 = FFrame::GetThreadLocalTopStackFrame();
  if (pFVar3 != (FFrame *)0x0) {
    pFVar3 = FFrame::GetThreadLocalTopStackFrame();
    if (pFVar3->Object != (UObject *)0x0) {
      pFVar3 = FFrame::GetThreadLocalTopStackFrame();
      pUVar2 = pFVar3->Object;
      if (pUVar2 != (UObject *)0x0) {
        pUVar4 = StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          return *(FPCGContext **)&pUVar2[2].field_0x10;
        }
      }
    }
  }
  return (FPCGContext *)0x0;
}

// SetCurrentContext @ 149a0c360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintBaseElement::SetCurrentContext(UPCGBlueprintBaseElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<FPCGContextHandle,1> local_18;
  
  if (((this->CurrentContext != (FPCGContext *)0x0) && (param_1 != (FPCGContext *)0x0)) &&
     (this->CurrentContext != param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1656313451477204890>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Blueprint\\PCGBlueprintBaseElement.cpp"
                       ,0x66,
                       "CurrentContext == nullptr || InCurrentContext == nullptr || CurrentContext == InCurrentContext"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->CurrentContext = param_1;
  if (param_1 != (FPCGContext *)0x0) {
    FPCGContext::GetOrCreateHandle(param_1,&local_18);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// StaticRegisterNativesUPCGBlueprintBaseElement @ 149a0ff20

void __cdecl UPCGBlueprintBaseElement::StaticRegisterNativesUPCGBlueprintBaseElement(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintBaseElement_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCustomInputLabels @ 149a14340

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

void __cdecl
UPCGBlueprintBaseElement::execCustomInputLabels(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 auStack_88 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = CustomInputLabels((UPCGBlueprintBaseElement *)param_1,&local_68);
  if (param_3 != pTVar1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(param_3,pTVar1);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execCustomOutputLabels @ 149a143d0

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

void __cdecl
UPCGBlueprintBaseElement::execCustomOutputLabels(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 auStack_88 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = CustomOutputLabels((UPCGBlueprintBaseElement *)param_1,&local_68);
  if (param_3 != pTVar1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(param_3,pTVar1);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execDynamicPinTypesOverride @ 149a14460

void __cdecl
UPCGBlueprintBaseElement::execDynamicPinTypesOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res10,local_res8);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execExecute @ 149a14540

void __cdecl UPCGBlueprintBaseElement::execExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGTaggedData **ppFVar2;
  FPCGTaggedData **ppFVar3;
  FPCGTaggedData *local_68;
  undefined8 local_60;
  undefined2 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  FPCGTaggedData *local_38;
  undefined8 local_30;
  undefined2 local_28;
  void *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = (FPCGTaggedData *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_68 = (FPCGTaggedData *)0x0;
  local_60 = 0;
  ppFVar2 = &local_38;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar2 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  ppFVar3 = &local_68;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar3 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,ppFVar2,ppFVar3);
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<FPCGTaggedData,int>(local_68,(int)local_60);
  if (local_68 != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FPCGTaggedData,int>(local_38,(int)local_30);
  if (local_38 != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetContextHandle @ 149a146c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetContextHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  TWeakPtr<FPCGContextHandle,1> *pTVar8;
  FWeakReferencer<1> FVar9;
  FPCGContextHandle *pFVar10;
  TWeakPtr<FPCGContextHandle,1> local_58;
  TWeakPtr<FPCGContextHandle,1> local_48;
  TWeakPtr<FPCGContextHandle,1> local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58.Object = (FPCGContextHandle *)0x0;
  local_58.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(FPCGContext **)&param_1[2].field_0x10 == (FPCGContext *)0x0) {
    local_48.Object = (FPCGContextHandle *)0x0;
    local_48.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = &local_48;
    bVar7 = false;
    bVar6 = true;
LAB_149a14743:
    FVar9.ReferenceController = (pTVar8->WeakReferenceCount).ReferenceController;
    pFVar10 = pTVar8->Object;
    pTVar8->Object = (FPCGContextHandle *)0x0;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((bVar6) &&
       (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (!bVar7) goto LAB_149a147c4;
  }
  else {
    pTVar8 = FPCGContext::GetOrCreateHandle(*(FPCGContext **)&param_1[2].field_0x10,&local_38);
    bVar7 = true;
    bVar6 = false;
    FVar9.ReferenceController = local_58.WeakReferenceCount.ReferenceController;
    pFVar10 = local_58.Object;
    if (&local_58 != pTVar8) goto LAB_149a14743;
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
LAB_149a147c4:
  if (param_3 != &local_58) {
    plVar5 = *(longlong **)((longlong)param_3 + 8);
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = FVar9.ReferenceController;
    FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    *(FPCGContextHandle **)param_3 = pFVar10;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar9.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((FVar9.ReferenceController)->_padding_ + 8))(FVar9.ReferenceController,1);
    }
  }
  return;
}

// execGetInputPinByLabel @ 149a14840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetInputPinByLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FPCGPinProperties *pFVar7;
  FPCGPinProperties *this;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_98;
  FPCGPinProperties local_88;
  FPCGPinProperties local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FPCGPinProperties::FPCGPinProperties(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FVar2 = local_res18[0];
  this = &local_88;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    this = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetInputPins((UPCGBlueprintBaseElement *)param_1,&local_98);
  iVar3 = local_98.ArrayNum;
  pFVar7 = (FPCGPinProperties *)
           (local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x30);
  FVar6.Data = local_98.AllocatorInstance.Data;
  iVar5 = local_98.ArrayNum;
  while( true ) {
    if (iVar5 != iVar3) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      iVar5 = local_98.ArrayNum;
    }
    if ((FPCGPinProperties *)FVar6.Data == pFVar7) break;
    if (((FPCGPinProperties *)FVar6.Data)->Label == FVar2) {
      this->Label = ((FPCGPinProperties *)FVar6.Data)->Label;
      this->Usage = ((FPCGPinProperties *)FVar6.Data)->Usage;
      FPCGDataTypeIdentifier::operator=
                (&this->AllowedTypes,&((FPCGPinProperties *)FVar6.Data)->AllowedTypes);
      this->bAllowMultipleData = ((FPCGPinProperties *)FVar6.Data)->bAllowMultipleData;
      this->PinStatus = ((FPCGPinProperties *)FVar6.Data)->PinStatus;
      this->bInvisiblePin = ((FPCGPinProperties *)FVar6.Data)->bInvisiblePin;
      this->bAllowMultipleConnections = ((FPCGPinProperties *)FVar6.Data)->bAllowMultipleConnections
      ;
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FPCGPinProperties *)local_98.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      uVar4 = 1;
LAB_149a14a03:
      *(undefined1 *)param_3 = uVar4;
      if (local_88.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllowedTypes.Ids.AllocatorInstance.Data);
      }
      return;
    }
    FVar6.Data = FVar6.Data + 0x30;
  }
  pFVar7 = FPCGPinProperties::FPCGPinProperties(&local_58);
  FPCGPinProperties::operator=(this,pFVar7);
  if (local_58.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPCGPinProperties *)local_98.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  uVar4 = 0;
  goto LAB_149a14a03;
}

// execGetInputPins @ 149a14a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetInputPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetInputPins((UPCGBlueprintBaseElement *)param_1,&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FPCGPinProperties,int>
              (*(FPCGPinProperties **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetOutputPinByLabel @ 149a14b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetOutputPinByLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FPCGPinProperties *pFVar7;
  FPCGPinProperties *this;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_98;
  FPCGPinProperties local_88;
  FPCGPinProperties local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FPCGPinProperties::FPCGPinProperties(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FVar2 = local_res18[0];
  this = &local_88;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    this = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetOutputPins((UPCGBlueprintBaseElement *)param_1,&local_98);
  iVar3 = local_98.ArrayNum;
  pFVar7 = (FPCGPinProperties *)
           (local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x30);
  FVar6.Data = local_98.AllocatorInstance.Data;
  iVar5 = local_98.ArrayNum;
  while( true ) {
    if (iVar5 != iVar3) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      iVar5 = local_98.ArrayNum;
    }
    if ((FPCGPinProperties *)FVar6.Data == pFVar7) break;
    if (((FPCGPinProperties *)FVar6.Data)->Label == FVar2) {
      this->Label = ((FPCGPinProperties *)FVar6.Data)->Label;
      this->Usage = ((FPCGPinProperties *)FVar6.Data)->Usage;
      FPCGDataTypeIdentifier::operator=
                (&this->AllowedTypes,&((FPCGPinProperties *)FVar6.Data)->AllowedTypes);
      this->bAllowMultipleData = ((FPCGPinProperties *)FVar6.Data)->bAllowMultipleData;
      this->PinStatus = ((FPCGPinProperties *)FVar6.Data)->PinStatus;
      this->bInvisiblePin = ((FPCGPinProperties *)FVar6.Data)->bInvisiblePin;
      this->bAllowMultipleConnections = ((FPCGPinProperties *)FVar6.Data)->bAllowMultipleConnections
      ;
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FPCGPinProperties *)local_98.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      uVar4 = 1;
LAB_149a14d23:
      *(undefined1 *)param_3 = uVar4;
      if (local_88.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllowedTypes.Ids.AllocatorInstance.Data);
      }
      return;
    }
    FVar6.Data = FVar6.Data + 0x30;
  }
  pFVar7 = FPCGPinProperties::FPCGPinProperties(&local_58);
  FPCGPinProperties::operator=(this,pFVar7);
  if (local_58.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPCGPinProperties *)local_98.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  uVar4 = 0;
  goto LAB_149a14d23;
}

// execGetOutputPins @ 149a14d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetOutputPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetOutputPins((UPCGBlueprintBaseElement *)param_1,&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FPCGPinProperties,int>
              (*(FPCGPinProperties **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetRandomStreamWithContext @ 149a14e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetRandomStreamWithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  int iVar4;
  FPCGBlueprintContextHandle *pFVar5;
  FPCGBlueprintContextHandle local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.Handle.Object = (FPCGContextHandle *)0x0;
  local_18.Handle.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar5 = &local_18;
  if ((FPCGBlueprintContextHandle *)param_2->MostRecentPropertyAddress !=
      (FPCGBlueprintContextHandle *)0x0) {
    pFVar5 = (FPCGBlueprintContextHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = GetSeedWithContext((UPCGBlueprintBaseElement *)param_1,pFVar5);
  *(ulonglong *)param_3 = CONCAT44(iVar4,iVar4);
  if (local_18.Handle.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_18.Handle.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.Handle.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.Handle.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execGetSeedWithContext @ 149a14ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintBaseElement::execGetSeedWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  int iVar4;
  FPCGBlueprintContextHandle *pFVar5;
  FPCGBlueprintContextHandle local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.Handle.Object = (FPCGContextHandle *)0x0;
  local_18.Handle.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar5 = &local_18;
  if ((FPCGBlueprintContextHandle *)param_2->MostRecentPropertyAddress !=
      (FPCGBlueprintContextHandle *)0x0) {
    pFVar5 = (FPCGBlueprintContextHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = GetSeedWithContext((UPCGBlueprintBaseElement *)param_1,pFVar5);
  *(int *)param_3 = iVar4;
  if (local_18.Handle.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_18.Handle.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.Handle.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.Handle.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execIsCacheableOverride @ 149a14fb0

void __cdecl
UPCGBlueprintBaseElement::execIsCacheableOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execNodeColorOverride @ 149a14ff0

void __cdecl
UPCGBlueprintBaseElement::execNodeColorOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execNodeTitleOverride @ 149a15030

void __cdecl
UPCGBlueprintBaseElement::execNodeTitleOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execNodeTypeOverride @ 149a15070

void __cdecl
UPCGBlueprintBaseElement::execNodeTypeOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

