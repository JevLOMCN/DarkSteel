// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// FDerivedDataNavCollisionCooker @ 146d737b0

FDerivedDataNavCollisionCooker * __thiscall
FDerivedDataNavCollisionCooker::FDerivedDataNavCollisionCooker
          (FDerivedDataNavCollisionCooker *this,FName param_1,UNavCollision *param_2)

{
  UNavCollision *pUVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FDerivedDataNavCollisionCooker *pFVar7;
  UClass *pUVar8;
  longlong *plVar9;
  
  this->NavCollisionInstance = param_2;
  this->_padding_ = (longlong)&___7FDerivedDataNavCollisionCooker__6B_;
  this->Format = param_1;
  this->CollisionDataProvider = (UObject *)0x0;
  (this->DataGuid).A = 0;
  (this->DataGuid).B = 0;
  (this->DataGuid).C = 0;
  (this->DataGuid).D = 0;
  (this->MeshId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshId).Data.ArrayNum = 0;
  (this->MeshId).Data.ArrayMax = 0;
  if (this->NavCollisionInstance == (UNavCollision *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavCollisionInstance != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavCollision.cpp"
                       ,0x86,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FDerivedDataNavCollisionCooker *)(*pcVar2)();
      return pFVar7;
    }
  }
  pUVar1 = this->NavCollisionInstance;
  this_00 = (UObjectBaseUtility *)pUVar1->_padding_;
  this->CollisionDataProvider = (UObject *)this_00;
  uVar3 = (pUVar1->BodySetupGuid).B;
  uVar4 = (pUVar1->BodySetupGuid).C;
  uVar5 = (pUVar1->BodySetupGuid).D;
  (this->DataGuid).A = (pUVar1->BodySetupGuid).A;
  (this->DataGuid).B = uVar3;
  (this->DataGuid).C = uVar4;
  (this->DataGuid).D = uVar5;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar8 = Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
    plVar9 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,&this->MeshId);
    }
  }
  return this;
}

// Build @ 146d85630

bool __thiscall
FDerivedDataNavCollisionCooker::Build
          (FDerivedDataNavCollisionCooker *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  UNavCollision *pUVar2;
  uchar *puVar3;
  FArchive *pFVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_res10;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId146,"FDerivedDataNavCollisionCooker::Build",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavCollision.cpp"
               ,0x92);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId146);
  }
  pUVar2 = this->NavCollisionInstance;
  if ((*(int *)&(pUVar2->ConvexShapeIndices).field_0x10 == 0) ||
     (((int)pUVar2->_padding_ == 0 && ((int)pUVar2->_padding_ == 0)))) {
    UNavCollision::GatherCollision(pUVar2);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.ArchiveName = local_res10;
  local_c8.Bytes = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res8[0] = 1;
  if (*(undefined1 **)(local_c8._padding_ + 8) < *(undefined1 **)local_c8._padding_ + 1) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res8,1);
  }
  else {
    local_res8[0] = **(undefined1 **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 1;
  }
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *)
             &this->NavCollisionInstance->_padding_);
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)
             &this->NavCollisionInstance->_padding_);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *)
             &this->NavCollisionInstance->_padding_);
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)
             &this->NavCollisionInstance->_padding_);
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)
             &this->NavCollisionInstance->ConvexShapeIndices);
  pUVar2 = this->NavCollisionInstance;
  puVar1 = &(pUVar2->Bounds).IsValid;
  pFVar4 = UE::Math::operator<<((FArchive *)&local_c8,&(pUVar2->Bounds).Min);
  pFVar4 = UE::Math::operator<<(pFVar4,&(pUVar2->Bounds).Max);
  puVar3 = (uchar *)**(undefined8 **)&pFVar4->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,puVar1,1);
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 1;
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDebugContextString @ 146d9a800

FString * __thiscall
FDerivedDataNavCollisionCooker::GetDebugContextString
          (FDerivedDataNavCollisionCooker *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility *this_00;
  
  if ((this->NavCollisionInstance != (UNavCollision *)0x0) &&
     (this_00 = (UObjectBaseUtility *)this->NavCollisionInstance->_padding_,
     this_00 != (UObjectBaseUtility *)0x0)) {
    UObjectBaseUtility::GetFullName(this_00,__return_storage_ptr__,(UObject *)0x0,None);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown Context");
  return __return_storage_ptr__;
}

// GetPluginName @ 146d9fb20

wchar_t * __thiscall
FDerivedDataNavCollisionCooker::GetPluginName(FDerivedDataNavCollisionCooker *this)

{
  return L"NavCollision";
}

// GetPluginSpecificCacheKeySuffix @ 146d9fb30

FString * __thiscall
FDerivedDataNavCollisionCooker::GetPluginSpecificCacheKeySuffix
          (FDerivedDataNavCollisionCooker *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(&this->DataGuid,&local_28,Digits);
  ::FName::ToString(&this->Format,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%s_%s_%hu");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVersionString @ 146da2d00

wchar_t * __thiscall
FDerivedDataNavCollisionCooker::GetVersionString(FDerivedDataNavCollisionCooker *this)

{
  return L"8F4645C7A18B40C487C7E50E19CD6B6C";
}

// IsBuildThreadsafe @ 146da4690

bool __thiscall
FDerivedDataNavCollisionCooker::IsBuildThreadsafe(FDerivedDataNavCollisionCooker *this)

{
  return false;
}

