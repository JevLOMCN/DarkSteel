// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f14a90

UClass * __cdecl UEnvQueryGenerator_CurrentLocation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_CurrentLocation",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_CurrentLocation,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_CurrentLocation>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_CurrentLocation>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton;
}

// UEnvQueryGenerator_CurrentLocation @ 146f2afc0

UEnvQueryGenerator_CurrentLocation * __thiscall
UEnvQueryGenerator_CurrentLocation::UEnvQueryGenerator_CurrentLocation
          (UEnvQueryGenerator_CurrentLocation *this,FVTableHelper *param_1)

{
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_CurrentLocation__6B_;
  (this->QueryContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_CurrentLocation @ 146f2b000

UEnvQueryGenerator_CurrentLocation * __thiscall
UEnvQueryGenerator_CurrentLocation::UEnvQueryGenerator_CurrentLocation
          (UEnvQueryGenerator_CurrentLocation *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_CurrentLocation__6B_;
  (this->QueryContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->QueryContext).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UEnvQueryItemType_Point::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return this;
}

// ~UEnvQueryGenerator_CurrentLocation @ 146f2eb10

void __thiscall
UEnvQueryGenerator_CurrentLocation::~UEnvQueryGenerator_CurrentLocation
          (UEnvQueryGenerator_CurrentLocation *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4d9e0

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
UEnvQueryGenerator_CurrentLocation::GenerateItems
          (UEnvQueryGenerator_CurrentLocation *this,FEnvQueryInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  ForAnyElementType FVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  uint local_40;
  uint local_3c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar3 = (this->QueryContext).Class.field0_0x0.DebugPtr;
  pUVar10 = (UClass *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pUVar9 = pUVar10;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar7 = UEnvQueryContext::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar12 = (int)pUVar7->_padding_;
    if (((int)pUVar3->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar12 * 8) != &pUVar7->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar9 = (this->QueryContext).Class.field0_0x0.DebugPtr;
    }
  }
  FEnvQueryInstance::PrepareContext(param_1,pUVar9,&local_38);
  uVar13 = local_38._8_8_ & 0xffffffff;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  if (0 < local_38.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_38.ArrayNum,&local_48,0,(int *)&local_3c);
    uVar13 = local_38._8_8_ & 0xffffffff;
    pUVar10 = (UClass *)(ulonglong)local_40;
  }
  iVar12 = (int)uVar13;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)iVar12 * 0x18;
  FVar11.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    uVar6 = (uint)pUVar10;
    if ((int)uVar13 != iVar12) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      uVar6 = local_40;
    }
    if (FVar11.Data == pFVar2) break;
    if (uVar6 == local_3c) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_48,(int *)&local_3c);
    }
    local_40 = uVar6 + 1;
    uVar4 = *(undefined8 *)(FVar11.Data + 8);
    lVar8 = (longlong)(int)uVar6 * 0x20;
    *(undefined8 *)(local_48.Data + lVar8) = *(undefined8 *)FVar11.Data;
    *(undefined8 *)(local_48.Data + lVar8 + 8) = uVar4;
    pFVar1 = FVar11.Data + 0x10;
    FVar11.Data = FVar11.Data + 0x18;
    *(undefined8 *)(local_48.Data + lVar8 + 0x10) = *(undefined8 *)pFVar1;
    *(undefined8 *)(local_48.Data + lVar8 + 0x18) = 0;
    uVar13 = local_38._8_8_ & 0xffffffff;
    pUVar10 = (UClass *)(ulonglong)local_40;
  }
  (**(code **)(this->_padding_ + 0x2e0))(this,&local_48,param_1);
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_48,param_1);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetDescriptionDetails @ 146f51270

FText * __thiscall
UEnvQueryGenerator_CurrentLocation::GetDescriptionDetails
          (UEnvQueryGenerator_CurrentLocation *this,FText *__return_storage_ptr__)

{
  FEnvTraceData::ToText((FEnvTraceData *)&this->_padding_,__return_storage_ptr__,Brief);
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_CurrentLocation::GetDescriptionTitle
          (UEnvQueryGenerator_CurrentLocation *this,FText *__return_storage_ptr__)

{
  byte bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  UClass *local_res8;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 5);
  if (bVar1 == 0) {
    local_res8 = (this->QueryContext).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pFVar2 = UEnvQueryTypes::DescribeContext(&local_18,(TSubclassOf<UEnvQueryContext>)&local_res8);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"EnvQueryGenerator",L"CurrentLocationOn",
                        L"Current Location of {0}");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
    FText::Format<FText>(__return_storage_ptr__,pFVar4,pFVar2);
  }
  else {
    UEnum::GetDisplayValueAsText<enum_EEnvQueryTrace::Type>(&local_48,(uint)bVar1);
    local_res8 = (this->QueryContext).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pFVar2 = UEnvQueryTypes::DescribeContext(&local_28,(TSubclassOf<UEnvQueryContext>)&local_res8);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"EnvQueryGenerator",L"CurrentLocationProjectedOn",
                        L"Current Location of {0} projected on {1}");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
    FText::Format<FText,FText>(__return_storage_ptr__,pFVar4,pFVar2,&local_48);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f582d0

UClass * __cdecl UEnvQueryGenerator_CurrentLocation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_CurrentLocation",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_CurrentLocation,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_CurrentLocation>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_CurrentLocation>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryGenerator_CurrentLocation @ 146f76d20

void __cdecl
UEnvQueryGenerator_CurrentLocation::StaticRegisterNativesUEnvQueryGenerator_CurrentLocation(void)

{
  return;
}

