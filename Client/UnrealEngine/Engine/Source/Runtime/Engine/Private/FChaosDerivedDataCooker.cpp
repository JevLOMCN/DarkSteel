// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FChaosDerivedDataCooker @ 14824e1f0

FChaosDerivedDataCooker * __thiscall
FChaosDerivedDataCooker::FChaosDerivedDataCooker
          (FChaosDerivedDataCooker *this,UBodySetup *param_1,FName param_2,bool param_3)

{
  FGCObject *pFVar1;
  FGCObject *this_00;
  
  (this->Setup).field0_0x0.DebugPtr = param_1;
  this->_padding_ = (longlong)&___7FChaosDerivedDataCooker__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->RequestedFormat = param_2;
  (this->RefHolder).Ptr = (FGCObject *)0x0;
  if (param_3) {
    this_00 = ::operator_new(0x18);
    if (this_00 == (FGCObject *)0x0) {
      this_00 = (FGCObject *)0x0;
    }
    else {
      this_00->bCanMakeInitialReferences = false;
      this_00->bReferenceAdded = false;
      this_00->_padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject(this_00);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ = (longlong)&___7FChaosDerivedDataCookerRefHolder__6B_;
    }
    pFVar1 = (this->RefHolder).Ptr;
    (this->RefHolder).Ptr = this_00;
    if (pFVar1 != (FGCObject *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return this;
}

// Build @ 1482690c0

bool __thiscall
FChaosDerivedDataCooker::Build
          (FChaosDerivedDataCooker *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar1;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar2;
  FChaosArchive *pFVar3;
  bool bVar4;
  bool bVar5;
  uint local_res8 [2];
  FArchiveState local_278;
  undefined8 local_1e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_1e0;
  undefined8 local_1d8;
  FChaosArchive local_1c8;
  FCookHelper local_128;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"FChaosDerivedDataCooker::Build",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\ChaosDerivedData.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  bVar4 = false;
  if ((this->Setup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
    pFVar2 = (FChaosArchiveContext *)0x0;
    local_278._padding_ = 0;
    local_278.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_278.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_278.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_278.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_278._40_8_ = 0;
    local_278.ArSerializingDefaults = 0;
    local_278.ArPortFlags = 0;
    local_278.ArMaxSerializeSize = 0;
    local_278.ArUEVer.FileVersionUE4 = 0;
    local_278.ArUEVer.FileVersionUE5 = 0;
    local_278.ArLicenseeUEVer = 0;
    local_278.ArEngineVer.Major = 0;
    local_278.ArEngineVer.Minor = 0;
    local_278.ArEngineVer.Patch = 0;
    local_278.ArEngineVer._6_2_ = 0;
    local_278.ArEngineVer.Changelist = 0;
    local_278.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_278.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_278.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_278.SerializedProperty = (FProperty *)0x0;
    local_278.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_278.bCustomVersionsAreReset = false;
    local_278._129_7_ = 0;
    local_278.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_278);
    local_1e8 = 0;
    local_278._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_1d8 = 0;
    local_1e0 = param_1;
    FArchiveState::SetIsSaving(&local_278,true);
    (**(code **)(local_278._padding_ + 0x108))(&local_278,0);
    local_278._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_1c8,(FArchive *)&local_278);
    local_1c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pFVar2 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    local_res8[0] = 4;
    local_1c8.Context.Ptr = pFVar2;
    if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
      if ((local_1c8._padding_._2_1_ & 1) == 0) {
        if (*(code **)(local_1c8._padding_ + 0x188) == FArchiveProxy::Serialize) {
          (**(code **)(*(longlong *)local_1c8._padding_ + 0x188))();
        }
        else {
          (**(code **)(local_1c8._padding_ + 0x188))(&local_1c8,local_res8,4);
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_1c8._padding_;
      *(longlong *)local_1c8._padding_ = *(longlong *)local_1c8._padding_ + 4;
    }
    Chaos::FCookHelper::FCookHelper(&local_128,(this->Setup).field0_0x0.DebugPtr);
    Chaos::FCookHelper::Cook(&local_128);
    pFVar3 = Chaos::operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>
                       (&local_1c8,&local_128.SimpleImplicits);
    pFVar3 = Chaos::operator<<<Chaos::FTriangleMeshImplicitObject_TSizedDefaultAllocator<32>_>
                       (pFVar3,&local_128.ComplexImplicits);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar3,&local_128.UVInfo.IndexBuffer);
    TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar3,&local_128.UVInfo.VertPositions);
    TArrayPrivateFriend::
    Serialize<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar3,&local_128.UVInfo.VertUVs);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar3,&local_128.FaceRemap);
    bVar4 = true;
    Chaos::FCookHelper::~FCookHelper(&local_128);
    TVar1.Ptr = local_1c8.Context.Ptr;
    if (local_1c8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_1c8.Context.Ptr);
      ::operator_delete(TVar1.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_1c8);
    FArchive::~FArchive((FArchive *)&local_278);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// GetDebugContextString @ 148287570

FString * __thiscall
FChaosDerivedDataCooker::GetDebugContextString
          (FChaosDerivedDataCooker *this,FString *__return_storage_ptr__)

{
  UBodySetup *pUVar1;
  UObjectBaseUtility *this_00;
  
  pUVar1 = (this->Setup).field0_0x0.DebugPtr;
  if ((pUVar1 != (UBodySetup *)0x0) &&
     (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 != (UObjectBaseUtility *)0x0)) {
    UObjectBaseUtility::GetFullName(this_00,__return_storage_ptr__,(UObject *)0x0,None);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown Context");
  return __return_storage_ptr__;
}

// GetPluginName @ 14828b9f0

wchar_t * __thiscall FChaosDerivedDataCooker::GetPluginName(FChaosDerivedDataCooker *this)

{
  return L"ChaosGeometryData";
}

// GetPluginSpecificCacheKeySuffix @ 14828ba00

FString * __thiscall
FChaosDerivedDataCooker::GetPluginSpecificCacheKeySuffix
          (FChaosDerivedDataCooker *this,FString *__return_storage_ptr__)

{
  UBodySetup *this_00;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"INVALID");
  this_00 = (this->Setup).field0_0x0.DebugPtr;
  if (this_00 != (UBodySetup *)0x0) {
    UBodySetup::GetGeometryDDCKey(this_00,&local_28);
  }
  ::FName::ToString(&this->RequestedFormat,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%s_REAL%d");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVersionString @ 14828ed30

wchar_t * __thiscall FChaosDerivedDataCooker::GetVersionString(FChaosDerivedDataCooker *this)

{
  return L"5E07152B-EF71-47B8-B477-0CE28888D459";
}

// IsBuildThreadsafe @ 148294a40

bool __thiscall FChaosDerivedDataCooker::IsBuildThreadsafe(FChaosDerivedDataCooker *this)

{
  return false;
}

