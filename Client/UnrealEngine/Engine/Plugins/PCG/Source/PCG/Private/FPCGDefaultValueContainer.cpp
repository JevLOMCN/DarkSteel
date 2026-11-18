// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticStruct @ 149ce53b0

UScriptStruct * __cdecl FPCGDefaultValueContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDefaultValueContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDefaultValueContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDefaultValueContainer,(UObject *)pUVar1,
                         L"PCGDefaultValueContainer");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDefaultValueContainer.OuterSingleton;
}

// CreateNewProperty @ 149d45f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

FProperty * __thiscall
FPCGDefaultValueContainer::CreateNewProperty
          (FPCGDefaultValueContainer *this,FName param_1,EPCGMetadataTypes param_2)

{
  FInstancedPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar1;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  undefined1 uVar3;
  undefined1 auStack_e8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 local_97;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FName local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 != (FName)0x0) {
    switch(param_2) {
    case Double:
    case Integer32:
    case Integer64:
    case Vector2:
    case Vector:
    case Vector4:
    case String:
    case Boolean:
    case Rotator:
    case Name:
      this_00 = &this->PropertyBag;
      pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(this_00,param_1);
      if (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
        FInstancedPropertyBag::RemovePropertyByName(this_00,param_1);
      }
      TVar2.DebugPtr = (UObject *)0x0;
      uVar3 = 0xb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2) {
      case Float:
        uVar3 = 5;
        break;
      case Double:
        uVar3 = 6;
        break;
      case Integer32:
        uVar3 = 3;
        break;
      case Integer64:
        uVar3 = 4;
        break;
      case Vector2:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TVector2<double>_>::Get();
        break;
      case Vector:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TVector<double>_>::Get();
        break;
      case Vector4:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TVector4<double>_>::Get();
        break;
      case Quaternion:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TQuat<double>_>::Get();
        break;
      case Transform:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TTransform<double>_>::Get();
        break;
      case String:
        uVar3 = 8;
        break;
      case Boolean:
        uVar3 = 1;
        break;
      case Rotator:
        TVar2.DebugPtr = (UObject *)TBaseStructure<UE::Math::TRotator<double>_>::Get();
        break;
      case Name:
        uVar3 = 7;
        TVar2.DebugPtr = (UObject *)0x0;
        break;
      case SoftObjectPath:
        TVar2.DebugPtr = (UObject *)FSoftObjectPath::StaticStruct();
        break;
      case SoftClassPath:
        TVar2.DebugPtr = (UObject *)FSoftClassPath::StaticStruct();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)TVar2.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      local_97 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_78 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)TVar2.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      local_c8.ArrayNum = 1;
      local_57 = local_97;
      local_c8.DataPtr = (FPropertyBagPropertyDesc *)&local_78;
      local_70 = local_b0;
      uStack_68 = uStack_a8;
      local_55 = 0;
      local_50 = 1;
      local_48 = 0;
      local_40 = 0xffffffff;
      local_60 = param_1;
      local_58 = uVar3;
      FInstancedPropertyBag::AddProperties(this_00,&local_c8,true);
      pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(this_00,param_1);
      if (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
        return pFVar1->CachedProperty;
      }
    }
  }
  return (FProperty *)0x0;
}

// CreateParamData @ 149d46420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
FPCGDefaultValueContainer::CreateParamData
          (FPCGDefaultValueContainer *this,FPCGContext *param_1,FName param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  UPCGParamData *pUVar6;
  UObject *pUVar7;
  UPCGParamData *pUVar8;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res20;
  UPCGParamData *local_58;
  undefined8 local_50;
  FPCGMetadataDomainID FStack_48;
  FPCGAttributeIdentifier local_38;
  
  pFVar5 = FInstancedPropertyBag::FindPropertyDescByName(&this->PropertyBag,param_2);
  if ((pFVar5 == (FPropertyBagPropertyDesc *)0x0) ||
     (pFVar1 = pFVar5->CachedProperty, pFVar1 == (FProperty *)0x0)) {
    return (UPCGParamData *)0x0;
  }
  bVar4 = IsInGameThread();
  if (param_1 == (FPCGContext *)0x0) {
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UPCGParamData *)(*pcVar2)();
        return pUVar6;
      }
    }
  }
  else if (!bVar4) {
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UPCGParamData *)(*pcVar2)();
        return pUVar6;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar7 = GetTransientPackageAsObject();
    pUVar6 = NewObject<UPCGParamData>(pUVar7);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar6 == (UPCGParamData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UPCGParamData *)(*pcVar2)();
        return pUVar6;
      }
    }
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPCGParamData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res20,(bool *)&local_58);
    goto LAB_149d464a7;
  }
  pUVar7 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UPCGParamData>(pUVar7);
LAB_149d464a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPCGParamData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FStack_48 = PCGMetadataDomainID::Default;
  FVar3 = FStack_48;
  local_50 = 0;
  FStack_48._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name.ComparisonIndex.Value = 0;
  local_38.Name.Number = 0;
  local_38.MetadataDomain.Flag = FStack_48.Flag;
  local_38.MetadataDomain._1_3_ = FStack_48._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_48.CustomFlag;
  FStack_48 = FVar3;
  bVar4 = UPCGMetadata::CreateAttributeFromDataProperty
                    ((UPCGMetadata *)pUVar6->_padding_,&local_38,
                     (this->PropertyBag).Value.StructMemory,pFVar1);
  pUVar8 = (UPCGParamData *)0x0;
  if (bVar4) {
    pUVar8 = pUVar6;
  }
  return pUVar8;
}

// FindProperty @ 149d4c8a0

FProperty * __thiscall
FPCGDefaultValueContainer::FindProperty(FPCGDefaultValueContainer *this,FName param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&this->PropertyBag,param_1);
  if (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
    return pFVar1->CachedProperty;
  }
  return (FProperty *)0x0;
}

// GetCurrentPropertyType @ 149d4f1a0

EPCGMetadataTypes __thiscall
FPCGDefaultValueContainer::GetCurrentPropertyType(FPCGDefaultValueContainer *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->PropertyBag,param_1);
  if ((pFVar2 != (FPropertyBagPropertyDesc *)0x0) && (pFVar2->CachedProperty != (FProperty *)0x0)) {
    EVar1 = PCGAttributeAccessorHelpers::GetMetadataTypeForProperty(pFVar2->CachedProperty);
    return EVar1;
  }
  return Unknown;
}

// GetPropertyValueAsString @ 149d54b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPCGDefaultValueContainer::GetPropertyValueAsString
          (FPCGDefaultValueContainer *this,FString *__return_storage_ptr__,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  ulonglong uVar5;
  undefined1 auStackY_b8 [32];
  FString local_78;
  undefined4 local_68;
  FString local_60;
  TValueOrError<FString,EPropertyBagResult> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68 = 0;
  FInstancedPropertyBag::GetValueSerializedString(&this->PropertyBag,&local_50,param_1);
  uVar5 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    pFVar4 = ::FString::FString(&local_60,L"Error");
    bVar2 = false;
    bVar3 = true;
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (int)local_50.Variant._padding_;
    if ((int)local_50.Variant._padding_ == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_50.Variant._padding_,0,(ForAnyElementType *)&local_78,
                 (int)local_50.Variant._padding_,&local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,(void *)local_50.Variant._padding_,
             (longlong)(int)local_50.Variant._padding_ * 2);
    }
    pFVar4 = &local_78;
    bVar2 = true;
    bVar3 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (2 < local_50.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  return __return_storage_ptr__;
}

// IsPropertyActivated @ 149d57dc0

bool __thiscall
FPCGDefaultValueContainer::IsPropertyActivated(FPCGDefaultValueContainer *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ActivatedProperties).Elements.field_0x8 !=
      *(int *)&(this->ActivatedProperties).Elements.field_0x34) {
    FVar4 = (this->ActivatedProperties).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->ActivatedProperties).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->ActivatedProperties).HashSize - 1U & param_1.Number + uVar2)
                    * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->ActivatedProperties).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar3 * 0x10) == param_1) goto LAB_149d57e2a;
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_149d57e2a:
  return iVar3 != -1;
}

// RemoveProperty @ 149d61fa0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FPCGDefaultValueContainer::RemoveProperty(FPCGDefaultValueContainer *this,FName param_1)

{
  FInstancedPropertyBag::RemovePropertyByName(&this->PropertyBag,param_1);
  return;
}

