// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149ce6300

UClass * __cdecl UPCGSkinnedMeshInstanceDataPackerByAttribute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshInstanceDataPackerByAttribute",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.
                InnerSingleton,StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerByAttribute,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSkinnedMeshInstanceDataPackerByAttribute>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshInstanceDataPackerByAttribute>,
               local_res8,UPCGSkinnedMeshInstanceDataPackerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.InnerSingleton;
}

// UPCGSkinnedMeshInstanceDataPackerByAttribute @ 149d34640

UPCGSkinnedMeshInstanceDataPackerByAttribute * __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::UPCGSkinnedMeshInstanceDataPackerByAttribute
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshInstanceDataPackerByAttribute__6B_;
  (this->AttributeSelectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 0;
  (this->AttributeSelectors).ArrayMax = 0;
  return this;
}

// UPCGSkinnedMeshInstanceDataPackerByAttribute @ 149d34680

UPCGSkinnedMeshInstanceDataPackerByAttribute * __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::UPCGSkinnedMeshInstanceDataPackerByAttribute
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshInstanceDataPackerByAttribute__6B_;
  (this->AttributeSelectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 0;
  (this->AttributeSelectors).ArrayMax = 0;
  return this;
}

// ~UPCGSkinnedMeshInstanceDataPackerByAttribute @ 149d35150

void __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::~UPCGSkinnedMeshInstanceDataPackerByAttribute
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshInstanceDataPackerByAttribute__6B_;
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)(this->AttributeSelectors).AllocatorInstance.Data
             ,(this->AttributeSelectors).ArrayNum);
  pFVar1 = (this->AttributeSelectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshInstanceDataPackerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAttributeNames @ 149d4e750

bool __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::GetAttributeNames
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined8 local_28 [2];
  
  if (param_1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar7 = (this->AttributeSelectors).AllocatorInstance.Data;
    iVar1 = (this->AttributeSelectors).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((this->AttributeSelectors).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGAttributePropertyInputSelector,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      local_28[0] = *(undefined8 *)(pFVar7 + 0x14);
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar6;
      }
      pFVar7 = pFVar7 + 0x40;
      param_1->ArrayNum = iVar6 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
    }
  }
  return true;
}

// GetAttributeSelectors @ 149d4e960

TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> * __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::GetAttributeSelectors
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this,
          TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FPCGAttributePropertyInputSelector *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> *pTVar5;
  undefined4 uStack_c;
  
  pFVar2 = (FPCGAttributePropertyInputSelector *)(this->AttributeSelectors).AllocatorInstance.Data;
  iVar1 = (this->AttributeSelectors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = pFVar2;
  *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = CONCAT44(uStack_c,iVar1);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149d549f0

UClass * __cdecl UPCGSkinnedMeshInstanceDataPackerByAttribute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshInstanceDataPackerByAttribute",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.
                InnerSingleton,StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerByAttribute,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSkinnedMeshInstanceDataPackerByAttribute>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshInstanceDataPackerByAttribute>,
               local_res8,UPCGSkinnedMeshInstanceDataPackerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute.InnerSingleton;
}

// PackInstances_Implementation @ 149d5e2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshInstanceDataPackerByAttribute::PackInstances_Implementation
          (UPCGSkinnedMeshInstanceDataPackerByAttribute *this,FPCGContext *param_1,
          UPCGSpatialData *param_2,FPCGSkinnedMeshInstanceList *param_3,
          FPCGSkinnedMeshPackedCustomData *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FPCGAttributeAccessorKeysPointsSubset *pFVar5;
  FPCGAttributePropertySelector *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  UPCGSpatialData *pUVar11;
  FPCGAttributeAccessorKeysPointsSubset *pFVar12;
  FPCGAttributeAccessorKeysEntries *this_00;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FPCGAttributePropertySelector *this_01;
  undefined1 local_res18 [16];
  undefined1 local_138 [8];
  FPCGAttributeAccessorKeysPointsSubset *local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  FPCGCrc local_118;
  undefined8 local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong local_f0;
  uint local_e8;
  FPCGAttributePropertySelector *local_e0;
  TArray<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,TSizedDefaultAllocator<32>_>
  local_d8;
  undefined1 local_c8 [16];
  TArrayView<int_const_,int> local_b8;
  TArrayView<FPCGPoint_const_,int> local_a8;
  TArrayView<__int64_const_,int> local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  if ((param_2 == (UPCGSpatialData *)0x0) || (param_2->_padding_ == 0)) {
    PCGLog::InputOutput::LogInvalidInputDataError(param_1);
    return;
  }
  uVar2 = (this->AttributeSelectors).ArrayNum;
  local_118.Value = 0;
  local_118.bValid = false;
  local_118._5_3_ = 0;
  local_110 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,(ForAnyElementType *)&local_118,0,(int *)((longlong)&local_110 + 4));
  }
  uVar2 = (this->AttributeSelectors).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (local_120._4_4_ < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_128,(int)local_120,(int *)((longlong)&local_120 + 4));
  }
  local_e8 = (this->AttributeSelectors).ArrayNum;
  uVar10 = (ulonglong)(int)local_e8;
  this_01 = (FPCGAttributePropertySelector *)(this->AttributeSelectors).AllocatorInstance.Data;
  local_e0 = this_01 + uVar10;
LAB_149d5e3c0:
  do {
    pFVar6 = local_e0;
    if ((this->AttributeSelectors).ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGAttributePropertyInputSelector_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (this_01 == pFVar6) {
      local_d8.AllocatorInstance.Data = local_128.Data;
      local_d8.ArrayNum = (int)local_120;
      local_d8.ArrayMax = local_120._4_4_;
      local_c8._0_4_ = local_118.Value;
      local_c8[4] = local_118.bValid;
      local_c8._5_3_ = local_118._5_3_;
      local_c8._8_4_ = (int)local_110;
      local_c8._12_4_ = local_110._4_4_;
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120 = 0;
      local_118.Value = 0;
      local_118.bValid = false;
      local_118._5_3_ = 0;
      local_110 = 0;
      UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors
                ((UPCGSkinnedMeshInstanceDataPackerBase *)this,param_3,
                 (TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
                  *)local_c8,&local_d8,param_4);
      DestructItems<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int>
                ((TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                  *)local_128.Data,(int)local_120);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
                ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                  *)local_118,(int)local_110);
      if (local_118 != (FPCGCrc)0x0) {
        FMemory::Free((void *)local_118);
      }
      return;
    }
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)local_f8,(FPCGAttributePropertySelector *)param_2,SUB81(this_01,0));
    local_130 = (FPCGAttributeAccessorKeysPointsSubset *)0x0;
    pUVar11 = (UPCGSpatialData *)FWeakObjectPtr::Get(&(param_3->PointData).WeakPtr);
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    if (param_2 == pUVar11) {
      pFVar12 = ::operator_new(0x38);
      if (pFVar12 == (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
LAB_149d5e638:
        pFVar12 = (FPCGAttributeAccessorKeysPointsSubset *)0x0;
      }
      else {
        local_b8.DataPtr = (int *)(param_3->InstancePointIndices).AllocatorInstance.Data;
        iVar9 = (param_3->InstancePointIndices).ArrayNum;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_a8.DataPtr = *(FPCGPoint **)&pUVar11[2].CachedLastSelector.field_0x28;
        iVar8 = *(int *)&pUVar11[2].CachedLastSelector.field_0x30;
        local_b8.ArrayNum = iVar9;
        if ((iVar8 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_a8.ArrayNum = iVar8;
        pFVar12 = FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
                            (pFVar12,&local_a8,&local_b8);
      }
    }
    else {
      uVar2 = (param_3->InstancePointIndices).ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar2,&local_108,0,(int *)((longlong)&local_100 + 4));
      }
      pFVar17 = (param_3->InstancePointIndices).AllocatorInstance.Data;
      iVar9 = (param_3->InstancePointIndices).ArrayNum;
      pFVar1 = pFVar17 + (longlong)iVar9 * 4;
      while( true ) {
        if ((param_3->InstancePointIndices).ArrayNum != iVar9) {
          local_138[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_138);
        }
        if (pFVar17 == pFVar1) break;
        local_f0 = (longlong)*(int *)pFVar17;
        if (((local_108.Data <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < local_108.Data + (longlong)local_100._4_4_ * 8))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_100 == local_100._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_108,(int *)((longlong)&local_100 + 4));
          local_100 = CONCAT44(local_100._4_4_,iVar8);
        }
        lVar16 = (longlong)(int)local_100;
        pFVar17 = pFVar17 + 4;
        local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
        *(longlong *)(local_108.Data + lVar16 * 8) = local_f0;
      }
      this_00 = ::operator_new(0x30);
      if (this_00 == (FPCGAttributeAccessorKeysEntries *)0x0) goto LAB_149d5e638;
      iVar9 = (int)local_100;
      local_98.DataPtr = (long64 *)local_108.Data;
      if (((int)local_100 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_98.ArrayNum = iVar9;
      pFVar12 = (FPCGAttributeAccessorKeysPointsSubset *)
                FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
                          (this_00,&local_98);
    }
    pFVar5 = local_130;
    if (local_130 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
      puVar3 = *(undefined8 **)local_130;
      local_130 = pFVar12;
      (*(code *)*puVar3)(pFVar5,1);
      pFVar12 = local_130;
    }
    local_130 = pFVar12;
    if ((local_f8 == (undefined1  [8])0x0) ||
       (local_130 == (FPCGAttributeAccessorKeysPointsSubset *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError(this_01,param_1);
LAB_149d5e8d8:
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (local_130 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
        (**(code **)local_130->_padding_)(local_130,1);
      }
      if (local_f8 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_f8)(local_f8,1);
      }
    }
    else {
      bVar7 = UPCGSkinnedMeshInstanceDataPackerBase::AddTypeToPacking
                        ((UPCGSkinnedMeshInstanceDataPackerBase *)this,
                         (int)*(short *)((longlong)local_f8 + 10),param_4);
      if (!bVar7) {
        pFVar13 = FPCGAttributePropertySelector::ToString(this_01,&local_88,false);
        FText::FromString(&local_78,pFVar13);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"PCGSkinnedMeshInstanceDataPackerByAttribute",
                             L"AttributeInvalidType",
                             L"Attribute/property \'{0}\' is not a valid type - skipped.");
        pFVar15 = FTextFormat::FTextFormat(&local_48,pFVar14,Default);
        pFVar14 = FText::Format<FText>(&local_68,pFVar15,&local_78);
        PCGLog::LogWarningOnGraph(pFVar14,param_1);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        goto LAB_149d5e8d8;
      }
      if ((((ulonglong)local_118 <= local_f8) &&
          (local_f8 < (undefined1 *)((longlong)local_118 + (longlong)local_110._4_4_ * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (int)local_110;
      if ((int)local_110 == local_110._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&local_118,(int *)((longlong)&local_110 + 4));
      }
      local_110 = CONCAT44(local_110._4_4_,iVar9 + 1);
      *(undefined1 (*) [8])((longlong)local_118 + (longlong)iVar9 * 8) = local_f8;
      local_f8 = (undefined1  [8])0x0;
      if (((local_128.Data <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < local_128.Data + (longlong)local_120._4_4_ * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120 = CONCAT44(local_120._4_4_,iVar9 + 1);
      *(FPCGAttributeAccessorKeysPointsSubset **)(local_128.Data + (longlong)iVar9 * 8) = local_130;
      local_130 = (FPCGAttributeAccessorKeysPointsSubset *)0x0;
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (local_130 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
        (**(code **)local_130->_padding_)(local_130,1);
      }
      if (local_f8 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_f8)(local_f8,1);
        uVar10 = (ulonglong)local_e8;
        this_01 = this_01 + 1;
        goto LAB_149d5e3c0;
      }
    }
    this_01 = this_01 + 1;
    uVar10 = (ulonglong)local_e8;
  } while( true );
}

// StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerByAttribute @ 149d66390

void __cdecl
UPCGSkinnedMeshInstanceDataPackerByAttribute::
StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerByAttribute(void)

{
  return;
}

