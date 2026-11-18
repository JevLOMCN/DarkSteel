// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticStruct @ 1498549f0

UScriptStruct * __cdecl FPCGWorldCommonQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams,(UObject *)pUVar1,
                         L"PCGWorldCommonQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.OuterSingleton;
}

// FPCGWorldCommonQueryParams @ 14988d590

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldCommonQueryParams * __thiscall
FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(FPCGWorldCommonQueryParams *this)

{
  this->bIgnorePCGHits = false;
  this->bIgnoreSelfHits = true;
  this->CollisionChannel = '\0';
  this->bTraceComplex = false;
  (this->ActorTagsList).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTagsList).Data.ArrayNum = 0;
  (this->ActorTagsList).Data.ArrayMax = 0;
  this->ActorClassFilter = NoTagFilter;
  (this->ActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ActorFilterFromInput = NoTagFilter;
  this->ActorTagFilter = NoTagFilter;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorFilterInputSource);
  this->SelectLandscapeHits = Include;
  this->bGetReferenceToActorHit = false;
  this->bGetReferenceToPhysicalMaterial = false;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x34 = 0;
  (this->ParsedActorTagsList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ParsedActorTagsList).HashSize = 0;
  return this;
}

// ~FPCGWorldCommonQueryParams @ 149891340

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall
FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams(FPCGWorldCommonQueryParams *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->ParsedActorTagsList).HashSize = 0;
  FVar1 = (this->ParsedActorTagsList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ParsedActorTagsList).Elements);
  DestructItems<FString,int>
            (*(FString **)&(this->ActorFilterInputSource).field_0x28,
             *(int *)&(this->ActorFilterInputSource).field_0x30);
  pvVar2 = *(void **)&(this->ActorFilterInputSource).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar3 = (this->ActorTagsList).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator= @ 149892cd0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldCommonQueryParams * __thiscall
FPCGWorldCommonQueryParams::operator=
          (FPCGWorldCommonQueryParams *this,FPCGWorldCommonQueryParams *param_1)

{
  UClass *pUVar1;
  
  this->bIgnorePCGHits = param_1->bIgnorePCGHits;
  this->bIgnoreSelfHits = param_1->bIgnoreSelfHits;
  (this->CollisionChannel).Value = (param_1->CollisionChannel).Value;
  this->bTraceComplex = param_1->bTraceComplex;
  this->ActorTagFilter = param_1->ActorTagFilter;
  ::FString::operator=(&this->ActorTagsList,&param_1->ActorTagsList);
  this->ActorClassFilter = param_1->ActorClassFilter;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ActorClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ActorClass).Class.field0_0x0 = (param_1->ActorClass).Class.field0_0x0;
  this->ActorFilterFromInput = param_1->ActorFilterFromInput;
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&this->ActorFilterInputSource,
             (FPCGAttributePropertySelector *)&param_1->ActorFilterInputSource);
  this->SelectLandscapeHits = param_1->SelectLandscapeHits;
  this->bGetReferenceToActorHit = param_1->bGetReferenceToActorHit;
  this->bGetReferenceToPhysicalMaterial = param_1->bGetReferenceToPhysicalMaterial;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->ParsedActorTagsList,&param_1->ParsedActorTagsList);
  return this;
}

// AddFilterPinIfNeeded @ 14989d160

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
FPCGWorldCommonQueryParams::AddFilterPinIfNeeded
          (FPCGWorldCommonQueryParams *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  if (this->ActorFilterFromInput != NoTagFilter) {
    iVar2 = param_1->ArrayNum;
    if (iVar2 == param_1->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGWorldRayHitConstants::FilterActorPinLabel,pFVar4,true,true,pFVar3);
  }
  return;
}

// ExtractActorFiltersIfNeeded @ 1498b2e80

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */
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
FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded
          (FPCGWorldCommonQueryParams *this,UPCGData *param_1,
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_2,FPCGContext *param_3)

{
  bool bVar1;
  undefined1 local_18;
  
  bVar1 = PCGWorldCommonQueryParams::
          ExtractActorFiltersIfNeeded<TSoftObjectPtr<AActor>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,_FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded_::__l2::<lambda_1>_>
                    (this,param_1,param_2,param_3,local_18);
  return bVar1;
}

// ExtractLoadedActorFiltersIfNeeded @ 1498b2ea0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */
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
FPCGWorldCommonQueryParams::ExtractLoadedActorFiltersIfNeeded
          (FPCGWorldCommonQueryParams *this,UPCGData *param_1,
          TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
          *param_2,FPCGContext *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FSoftObjectPath *pFVar6;
  ForAnyElementType this_00;
  UObject *local_res8;
  TObjectKey<AActor> local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_40;
  
  if (this->ActorFilterFromInput != NoTagFilter) {
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    bVar3 = PCGAttributeAccessorHelpers::
            ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_>
                      (param_1,&this->ActorFilterInputSource,&local_40,param_3,
                       AllowBroadcastAndConstructible,false);
    if (!bVar3) {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
      if ((FSoftObjectPath *)local_40.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return false;
    }
    TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>::Empty
              (param_2,local_40.ArrayNum);
    iVar2 = local_40.ArrayNum;
    pFVar6 = (FSoftObjectPath *)
             (local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0x20);
    this_00.Data = local_40.AllocatorInstance.Data;
    while( true ) {
      if (local_40.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if ((FSoftObjectPath *)this_00.Data == pFVar6) break;
      pUVar4 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)this_00.Data);
      if (pUVar4 == (UObject *)0x0) {
LAB_1498b2fd3:
        local_48.ObjectIndex = 0;
        local_48.ObjectSerialNumber = 0;
      }
      else {
        pUVar5 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) goto LAB_1498b2fd3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_50.ObjectIndex = 0;
        local_50.ObjectSerialNumber = 0;
        local_res8 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_res8);
        local_48 = local_50;
      }
      TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>::
      Emplace<TObjectKey<AActor>_>(param_2,&local_58,(bool *)&local_48);
      this_00.Data = this_00.Data + 0x20;
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
    if ((FSoftObjectPath *)local_40.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  return true;
}

// Initialize @ 1498cb150

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall FPCGWorldCommonQueryParams::Initialize(FPCGWorldCommonQueryParams *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar1;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = &this->ParsedActorTagsList;
  if (this->ActorTagFilter == NoTagFilter) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(this_00);
    return;
  }
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_38,&this->ActorTagsList);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(this_00);
  iVar1 = local_38.ArrayNum;
  pFVar5 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar4.Data == pFVar5) break;
    iVar3 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(local_res18,iVar3,*(wchar_t **)FVar4.Data,FNAME_Add);
    local_res8 = *pFVar2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (this_00,&local_res10,(bool *)&local_res8);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// FPCGWorldCommonQueryParams @ 149be5f10

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldCommonQueryParams * __thiscall
FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
          (FPCGWorldCommonQueryParams *this,FPCGWorldCommonQueryParams *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  EPCGWorldQueryFilter EVar3;
  UClass *pUVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  
  this->bIgnorePCGHits = param_1->bIgnorePCGHits;
  this->bIgnoreSelfHits = param_1->bIgnoreSelfHits;
  (this->CollisionChannel).Value = (param_1->CollisionChannel).Value;
  this->bTraceComplex = param_1->bTraceComplex;
  EVar3 = param_1->ActorTagFilter;
  (this->ActorTagsList).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActorTagFilter = EVar3;
  (this->ActorTagsList).Data.AllocatorInstance.Data =
       (param_1->ActorTagsList).Data.AllocatorInstance.Data;
  (param_1->ActorTagsList).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTagsList).Data.ArrayNum = (param_1->ActorTagsList).Data.ArrayNum;
  (this->ActorTagsList).Data.ArrayMax = (param_1->ActorTagsList).Data.ArrayMax;
  (param_1->ActorTagsList).Data.ArrayNum = 0;
  (param_1->ActorTagsList).Data.ArrayMax = 0;
  this->ActorClassFilter = param_1->ActorClassFilter;
  pUVar4 = (param_1->ActorClass).Class.field0_0x0.DebugPtr;
  (this->ActorClass).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->ActorFilterFromInput = param_1->ActorFilterFromInput;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)&this->ActorFilterInputSource,
             (FPCGAttributePropertySelector *)&param_1->ActorFilterInputSource);
  pTVar1 = &this->ParsedActorTagsList;
  *(undefined ***)&this->ActorFilterInputSource = &___7FPCGAttributePropertyInputSelector__6B_;
  pTVar2 = &param_1->ParsedActorTagsList;
  this->SelectLandscapeHits = param_1->SelectLandscapeHits;
  this->bGetReferenceToActorHit = param_1->bGetReferenceToActorHit;
  this->bGetReferenceToPhysicalMaterial = param_1->bGetReferenceToPhysicalMaterial;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x34 = 0;
  (this->ParsedActorTagsList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ParsedActorTagsList).HashSize = 0;
  if (pTVar1 != pTVar2) {
    _Src = &(param_1->ParsedActorTagsList).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x8 =
         *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x8;
    _Dst = &(this->ParsedActorTagsList).Elements.field_0x10;
    *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0xc =
         *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0xc;
    *(undefined8 *)&(param_1->ParsedActorTagsList).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ParsedActorTagsList).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->ParsedActorTagsList).Elements.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x20 =
           *(undefined8 *)&(param_1->ParsedActorTagsList).Elements.field_0x20;
      *(undefined8 *)&(param_1->ParsedActorTagsList).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x28 =
           *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x28;
      *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x2c =
           *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x2c;
      *(undefined8 *)&(param_1->ParsedActorTagsList).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x30 =
         *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x30;
    *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x34 =
         *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x34;
    *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ParsedActorTagsList).Elements.field_0x34 = 0;
  }
  if ((param_1->ParsedActorTagsList).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->ParsedActorTagsList).Hash.InlineData =
         *(undefined4 *)(param_1->ParsedActorTagsList).Hash.InlineData;
  }
  FVar6 = (this->ParsedActorTagsList).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->ParsedActorTagsList).Hash.SecondaryData = (param_1->ParsedActorTagsList).Hash.SecondaryData
  ;
  (param_1->ParsedActorTagsList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ParsedActorTagsList).HashSize = (param_1->ParsedActorTagsList).HashSize;
  (param_1->ParsedActorTagsList).HashSize = 0;
  return this;
}

// FPCGWorldCommonQueryParams @ 149c4a940

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldCommonQueryParams * __thiscall
FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
          (FPCGWorldCommonQueryParams *this,FPCGWorldCommonQueryParams *param_1)

{
  UClass *pUVar1;
  
  this->bIgnorePCGHits = param_1->bIgnorePCGHits;
  this->bIgnoreSelfHits = param_1->bIgnoreSelfHits;
  (this->CollisionChannel).Value = (param_1->CollisionChannel).Value;
  this->bTraceComplex = param_1->bTraceComplex;
  this->ActorTagFilter = param_1->ActorTagFilter;
  ::FString::FString(&this->ActorTagsList,&param_1->ActorTagsList);
  this->ActorClassFilter = param_1->ActorClassFilter;
  pUVar1 = (param_1->ActorClass).Class.field0_0x0.DebugPtr;
  (this->ActorClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ActorFilterFromInput = param_1->ActorFilterFromInput;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)&this->ActorFilterInputSource,
             (FPCGAttributePropertySelector *)&param_1->ActorFilterInputSource);
  *(undefined ***)&this->ActorFilterInputSource = &___7FPCGAttributePropertyInputSelector__6B_;
  this->SelectLandscapeHits = param_1->SelectLandscapeHits;
  this->bGetReferenceToActorHit = param_1->bGetReferenceToActorHit;
  this->bGetReferenceToPhysicalMaterial = param_1->bGetReferenceToPhysicalMaterial;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParsedActorTagsList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParsedActorTagsList).Elements.field_0x34 = 0;
  (this->ParsedActorTagsList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ParsedActorTagsList).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->ParsedActorTagsList,&param_1->ParsedActorTagsList);
  return this;
}

