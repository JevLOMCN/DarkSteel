// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 31

// StaticClass @ 141fb5290

UClass * __cdecl UPackageMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMap.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PackageMap",
               &Z_Registration_Info_UClass_UPackageMap.InnerSingleton,
               StaticRegisterNativesUPackageMap,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPackageMap>,InternalVTableHelperCtorCaller<UPackageMap>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMap.InnerSingleton;
}

// UPackageMap @ 141fbf050

UPackageMap * __thiscall UPackageMap::UPackageMap(UPackageMap *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPackageMap__6B_;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedUnmappedNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedUnmappedNetGuids).HashSize = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedMappedDynamicNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedMappedDynamicNetGuids).HashSize = 0;
  (this->DebugContextString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugContextString).Data.ArrayNum = 0;
  (this->DebugContextString).Data.ArrayMax = 0;
  return this;
}

// UPackageMap @ 141fbf0f0

UPackageMap * __thiscall UPackageMap::UPackageMap(UPackageMap *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPackageMap__6B_;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedUnmappedNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedUnmappedNetGuids).HashSize = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedMappedDynamicNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedMappedDynamicNetGuids).HashSize = 0;
  (this->DebugContextString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugContextString).Data.ArrayNum = 0;
  (this->DebugContextString).Data.ArrayMax = 0;
  return this;
}

// UPackageMap @ 141fbf190

UPackageMap * __thiscall UPackageMap::UPackageMap(UPackageMap *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPackageMap__6B_;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedUnmappedNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedUnmappedNetGuids).HashSize = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x30 = 0xffffffff;
  (this->TrackedMappedDynamicNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedMappedDynamicNetGuids).HashSize = 0;
  (this->DebugContextString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugContextString).Data.ArrayNum = 0;
  (this->DebugContextString).Data.ArrayMax = 0;
  return this;
}

// ~UPackageMap @ 141fc0130

void __thiscall UPackageMap::~UPackageMap(UPackageMap *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPackageMap__6B_;
  pFVar1 = (this->DebugContextString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TrackedMappedDynamicNetGuids).HashSize = 0;
  FVar2 = (this->TrackedMappedDynamicNetGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrackedMappedDynamicNetGuids).Elements);
  (this->TrackedUnmappedNetGuids).HashSize = 0;
  FVar2 = (this->TrackedUnmappedNetGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrackedUnmappedNetGuids).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// AddUnmappedNetGUIDReference @ 141fc5890

void __thiscall UPackageMap::AddUnmappedNetGUIDReference(UPackageMap *this,FNetworkGUID param_1)

{
  return;
}

// GetNetGUIDFromObject @ 141fd1a20

FNetworkGUID __thiscall UPackageMap::GetNetGUIDFromObject(UPackageMap *this,UObject *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetNetGUIDStats @ 141fd1a40

void __thiscall
UPackageMap::GetNetGUIDStats(UPackageMap *this,int *param_1,int *param_2,int *param_3)

{
  return;
}

// GetNetTokenResolveContext @ 141fd1a50

FNetTokenResolveContext * __thiscall UPackageMap::GetNetTokenResolveContext(UPackageMap *this)

{
  return (FNetTokenResolveContext *)0x0;
}

// GetObjectFromNetGUID @ 141fd1a60

UObject * __thiscall
UPackageMap::GetObjectFromNetGUID(UPackageMap *this,FNetworkGUID *param_1,bool param_2)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 141fd28c0

UClass * __cdecl UPackageMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PackageMap",
               &Z_Registration_Info_UClass_UPackageMap.InnerSingleton,
               StaticRegisterNativesUPackageMap,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPackageMap>,InternalVTableHelperCtorCaller<UPackageMap>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMap.InnerSingleton;
}

// IsGUIDBroken @ 141fd5980

bool __thiscall UPackageMap::IsGUIDBroken(UPackageMap *this,FNetworkGUID *param_1,bool param_2)

{
  return false;
}

// IsUsingRemoteObjectReferences @ 141fd5e20

bool __thiscall UPackageMap::IsUsingRemoteObjectReferences(UPackageMap *this)

{
  return false;
}

// LogDebugInfo @ 141fd6aa0

void __thiscall UPackageMap::LogDebugInfo(UPackageMap *this,FOutputDevice *param_1)

{
  return;
}

// NotifyBunchCommit @ 141fd8970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMap::NotifyBunchCommit(UPackageMap *this,int param_1,FOutBunch *param_2)

{
  return;
}

// NotifyStreamingLevelUnload @ 141fd8980

void __thiscall UPackageMap::NotifyStreamingLevelUnload(UPackageMap *this,UObject *param_1)

{
  return;
}

// PrintExportBatch @ 141fd96a0

bool __thiscall UPackageMap::PrintExportBatch(UPackageMap *this)

{
  return false;
}

// ReceivedAck @ 141fda700

void __thiscall UPackageMap::ReceivedAck(UPackageMap *this,int param_1)

{
  return;
}

// ReceivedNak @ 141fda710

void __thiscall UPackageMap::ReceivedNak(UPackageMap *this,int param_1)

{
  return;
}

// RemoveUnmappedNetGUIDReference @ 141fe2a90

void __thiscall UPackageMap::RemoveUnmappedNetGUIDReference(UPackageMap *this,FNetworkGUID param_1)

{
  return;
}

// ReportSyncLoadsForProperty @ 141fe2cb0

void __thiscall
UPackageMap::ReportSyncLoadsForProperty(UPackageMap *this,FProperty *param_1,UObject *param_2)

{
  return;
}

// ResetTrackedSyncLoadedGuids @ 141fe2e50

void __thiscall UPackageMap::ResetTrackedSyncLoadedGuids(UPackageMap *this)

{
  return;
}

// ResolvePathAndAssignNetGUID @ 141fe3180

UObject * __thiscall
UPackageMap::ResolvePathAndAssignNetGUID(UPackageMap *this,FNetworkGUID *param_1,FString *param_2)

{
  return (UObject *)0x0;
}

// Serialize @ 141fe8780

void __thiscall UPackageMap::Serialize(UPackageMap *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x2b & 4) != 0) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->TrackedUnmappedNetGuids,param_1);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->TrackedMappedDynamicNetGuids,param_1);
    ::operator<<(param_1,&this->DebugContextString);
  }
  return;
}

// Serialize @ 141fe87e0

void __thiscall UPackageMap::Serialize(UPackageMap *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if ((pFVar1->field_0x2b & 4) != 0) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->TrackedUnmappedNetGuids,pFVar1);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->TrackedMappedDynamicNetGuids,pFVar1);
    ::operator<<(pFVar1,&this->DebugContextString);
  }
  return;
}

// SerializeName @ 141fe8d20

bool __thiscall UPackageMap::SerializeName(UPackageMap *this,FArchive *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = StaticSerializeName(param_1,param_2);
  return bVar1;
}

// SerializeNewActor @ 141fe8d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMap::SerializeNewActor
          (UPackageMap *this,FArchive *param_1,UActorChannel *param_2,AActor **param_3)

{
  return false;
}

// SerializeObject @ 141fe8d50

bool __thiscall
UPackageMap::SerializeObject
          (UPackageMap *this,FArchive *param_1,UClass *param_2,UObject **param_3,
          FNetworkGUID *param_4)

{
  return false;
}

// StaticRegisterNativesUPackageMap @ 141fe99c0

void __cdecl UPackageMap::StaticRegisterNativesUPackageMap(void)

{
  return;
}

// StaticSerializeName @ 141fe99e0

bool __cdecl UPackageMap::StaticSerializeName(FArchive *param_1,FName *param_2)

{
  FName FVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FArchive *pFVar6;
  FName *pFVar7;
  EName *pEVar8;
  ForAnyElementType FVar9;
  uint local_res8 [2];
  EName local_res18 [2];
  FName local_res20;
  FString local_28;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      return true;
    }
    pEVar8 = ::FName::ToEName(param_2);
    if ((pEVar8 == (EName *)0x0) || (bVar2 = ShouldReplicateAsInteger(*pEVar8,param_2), !bVar2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,uVar3);
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
    if (((char)local_res8[0] != '\0') && (pEVar8 != (EName *)0x0)) {
      local_res18[0] = *pEVar8;
      (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res18);
      return true;
    }
    ::FName::GetPlainNameString(param_2,&local_28);
    local_res18[0] = param_2->Number;
    pFVar6 = ::operator<<(param_1,&local_28);
    pEVar8 = (EName *)**(undefined8 **)&pFVar6->field_0x8;
    if ((EName *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pEVar8 + 1) {
      if ((pFVar6->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar6,local_res18);
      }
    }
    else {
      local_res18[0] = *pEVar8;
      **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
    }
  }
  else {
    local_res8[0] = local_res8[0] & 0xffffff00;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
    if ((char)local_res8[0] != '\0') {
      uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))();
      if (uVar4 < 6) {
        (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0x19b);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res18);
      }
      if (Root < local_res18[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
        return true;
      }
      if (local_res18[0] != None) {
        FVar5 = FNameEntryId::FromValidEName((EName)&local_res20);
        FVar1.Number = 0;
        FVar1.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
        *param_2 = FVar1;
        return true;
      }
      param_2->ComparisonIndex = 0;
      param_2->Number = 0;
      return true;
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar6 = ::operator<<(param_1,&local_28);
    pEVar8 = (EName *)**(undefined8 **)&pFVar6->field_0x8;
    if ((EName *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pEVar8 + 1) {
      if ((pFVar6->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar6,local_res18);
      }
    }
    else {
      local_res18[0] = *pEVar8;
      **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_res20,(wchar_t *)FVar9.Data,local_res18[0]);
    *param_2 = *pFVar7;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// WriteObject @ 141fecb10

bool __thiscall
UPackageMap::WriteObject
          (UPackageMap *this,FArchive *param_1,UObject *param_2,FNetworkGUID param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

