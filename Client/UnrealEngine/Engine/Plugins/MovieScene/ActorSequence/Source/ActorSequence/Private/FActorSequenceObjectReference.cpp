// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 7

// StaticStruct @ 14eacfb50

UScriptStruct * __cdecl FActorSequenceObjectReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ActorSequence();
    Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReference,(UObject *)pUVar1,
                         L"ActorSequenceObjectReference");
  }
  return Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.OuterSingleton;
}

// FActorSequenceObjectReference @ 14ead0f00

FActorSequenceObjectReference * __thiscall
FActorSequenceObjectReference::FActorSequenceObjectReference
          (FActorSequenceObjectReference *this,FActorSequenceObjectReference *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = &this->PathToComponent;
  this->Type = param_1->Type;
  uVar4 = (param_1->ActorId).B;
  uVar5 = (param_1->ActorId).C;
  uVar6 = (param_1->ActorId).D;
  piVar2 = &(this->PathToComponent).Data.ArrayMax;
  (this->ActorId).A = (param_1->ActorId).A;
  (this->ActorId).B = uVar4;
  (this->ActorId).C = uVar5;
  (this->ActorId).D = uVar6;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PathToComponent).Data.ArrayNum;
  _Src = (param_1->PathToComponent).Data.AllocatorInstance.Data;
  (this->PathToComponent).Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

// CreateForActor @ 14ead1d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorSequenceObjectReference * __cdecl
FActorSequenceObjectReference::CreateForActor
          (FActorSequenceObjectReference *__return_storage_ptr__,AActor *param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  ULevel *pUVar4;
  FActorSequenceObjectReference *pFVar5;
  AActor *local_res10;
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  if (param_1 == param_2) {
    (__return_storage_ptr__->ActorId).A = 0;
    (__return_storage_ptr__->ActorId).B = 0;
    (__return_storage_ptr__->ActorId).C = 0;
    (__return_storage_ptr__->ActorId).D = 0;
    (__return_storage_ptr__->PathToComponent).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathToComponent).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathToComponent).Data.ArrayMax = 0;
    __return_storage_ptr__->Type = ContextActor;
    return __return_storage_ptr__;
  }
  if ((param_1 != (AActor *)0x0) && (param_2 != (AActor *)0x0)) {
    pUVar3 = AActor::GetLevel(param_1);
    pUVar4 = AActor::GetLevel(param_2);
    if (pUVar3 == pUVar4) goto LAB_14ead1de3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InActor && ContextActor && InActor->GetLevel() == ContextActor->GetLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\ActorSequence\\Source\\ActorSequence\\Private\\ActorSequenceObjectReference.cpp"
                     ,0x36,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FActorSequenceObjectReference *)(*pcVar1)();
    return pFVar5;
  }
LAB_14ead1de3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_28.WeakPtr.ObjectIndex = 0;
  local_28.WeakPtr.ObjectSerialNumber = 0;
  local_28.ObjectID.Guid.C = 0;
  local_28.ObjectID.Guid.D = 0;
  local_28.ObjectID.Guid.A = 0;
  local_28.ObjectID.Guid.B = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_28,(FObjectPtr)&local_res10);
  __return_storage_ptr__->Type = ExternalActor;
  (__return_storage_ptr__->ActorId).A = local_28.ObjectID.Guid.A;
  (__return_storage_ptr__->ActorId).B = local_28.ObjectID.Guid.B;
  (__return_storage_ptr__->ActorId).C = local_28.ObjectID.Guid.C;
  (__return_storage_ptr__->ActorId).D = local_28.ObjectID.Guid.D;
  (__return_storage_ptr__->PathToComponent).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayNum = 0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// CreateForComponent @ 14ead1e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorSequenceObjectReference * __cdecl
FActorSequenceObjectReference::CreateForComponent
          (FActorSequenceObjectReference *__return_storage_ptr__,UActorComponent *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FActorSequenceObjectReference *pFVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\ActorSequence\\Source\\ActorSequence\\Private\\ActorSequenceObjectReference.cpp"
                       ,0xb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FActorSequenceObjectReference *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = &__return_storage_ptr__->PathToComponent;
  (__return_storage_ptr__->ActorId).A = 0;
  (__return_storage_ptr__->ActorId).B = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayNum = 0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayMax = 0;
  (__return_storage_ptr__->ActorId).C = 0;
  (__return_storage_ptr__->ActorId).D = 0;
  __return_storage_ptr__->Type = Component;
  if (param_1->OwnerPrivate == (AActor *)0x0) {
    `FActorSequenceObjectReference::CreateForComponent'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    pFVar6 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,&local_18,(UObject *)param_1->OwnerPrivate);
    if (pFVar1 != pFVar6) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->PathToComponent).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->PathToComponent).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// CreateForContextActor @ 14ead1f70

FActorSequenceObjectReference * __cdecl
FActorSequenceObjectReference::CreateForContextActor
          (FActorSequenceObjectReference *__return_storage_ptr__)

{
  (__return_storage_ptr__->ActorId).A = 0;
  (__return_storage_ptr__->ActorId).B = 0;
  (__return_storage_ptr__->ActorId).C = 0;
  (__return_storage_ptr__->ActorId).D = 0;
  (__return_storage_ptr__->PathToComponent).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayNum = 0;
  (__return_storage_ptr__->PathToComponent).Data.ArrayMax = 0;
  __return_storage_ptr__->Type = ContextActor;
  return __return_storage_ptr__;
}

// Resolve @ 14ead28e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
FActorSequenceObjectReference::Resolve(FActorSequenceObjectReference *this,AActor *param_1)

{
  EActorSequenceObjectReferenceType EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  size_t sVar5;
  UClass *pUVar6;
  AActor *this_00;
  AActor *pAVar7;
  FUObjectItem *pFVar8;
  ULevel *pUVar9;
  ULevel *pUVar10;
  int iVar11;
  AActor *local_res8;
  FScriptContainerElement *local_48;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FWeakObjectPtr local_28;
  FGuid local_20;
  
  if ((param_1 == (AActor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\ActorSequence\\Source\\ActorSequence\\Private\\ActorSequenceObjectReference.cpp"
                         ,0x46,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UObject *)(*pcVar2)();
    return pUVar4;
  }
  EVar1 = this->Type;
  if (EVar1 == ContextActor) {
    return (UObject *)param_1;
  }
  if (EVar1 != ExternalActor) {
    if (EVar1 != Component) {
      return (UObject *)0x0;
    }
    if ((this->PathToComponent).Data.ArrayNum < 2) {
      return (UObject *)0x0;
    }
    if ((this->PathToComponent).Data.ArrayNum == 0) {
      local_48 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_48 = (this->PathToComponent).Data.AllocatorInstance.Data;
      iVar11 = 0;
      if (local_48 == (FScriptContainerElement *)0x0) goto LAB_14ead2971;
    }
    sVar5 = wcslen((wchar_t *)local_48);
    iVar11 = (int)sVar5;
LAB_14ead2971:
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar11;
    local_38.DataPtr = (wchar_t *)local_48;
    pUVar4 = StaticFindObject(pUVar6,(UObject *)param_1,&local_38,None);
    return pUVar4;
  }
  if ((((this->ActorId).D == 0 && (this->ActorId).C == 0) && (this->ActorId).B == 0) &&
      (this->ActorId).A == 0) {
    return (UObject *)0x0;
  }
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_20.A = (this->ActorId).A;
  local_20.B = (this->ActorId).B;
  local_20.C = (this->ActorId).C;
  local_20.D = (this->ActorId).D;
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  this_00 = (AActor *)FWeakObjectPtr::Get(&local_28);
  if (this_00 != (AActor *)0x0) goto LAB_14ead2a9d;
  if (((local_20.D == 0 && local_20.C == 0) && local_20.B == 0) && local_20.A == 0)
  goto LAB_14ead2a9d;
  pAVar7 = (AActor *)FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&local_20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  bVar3 = (*IsInAsyncLoadingThread)();
  if (((bVar3) && (pAVar7 != (AActor *)0x0)) &&
     (pFVar8 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pAVar7->_padding_ + 4)),
     ((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14ead2a84:
    if (((uint)pAVar7->_padding_ >> 0x1e & 1) != 0) goto LAB_14ead2a92;
    bVar3 = true;
  }
  else {
    local_res8 = pAVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
    if (pAVar7 != (AActor *)0x0) goto LAB_14ead2a84;
LAB_14ead2a92:
    bVar3 = false;
  }
  this_00 = (AActor *)0x0;
  if (bVar3) {
    this_00 = pAVar7;
  }
LAB_14ead2a9d:
  if (this_00 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar11 = (int)pUVar6->_padding_;
    if ((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar6->_padding_)) {
      pUVar9 = AActor::GetLevel(this_00);
      pUVar10 = AActor::GetLevel(param_1);
      if (pUVar9 == pUVar10) {
        return (UObject *)this_00;
      }
      return (UObject *)0x0;
    }
  }
  return (UObject *)0x0;
}

// operator() @ 15059ca10

bool __thiscall
`FActorSequenceObjectReference::CreateForComponent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5607310818333949910>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5607310818333949910>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

