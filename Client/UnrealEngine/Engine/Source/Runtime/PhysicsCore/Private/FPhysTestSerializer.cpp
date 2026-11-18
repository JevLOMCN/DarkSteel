// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 4

// FPhysTestSerializer @ 1441a0240

FPhysTestSerializer * __thiscall FPhysTestSerializer::FPhysTestSerializer(FPhysTestSerializer *this)

{
  uint uVar1;
  
  (this->UniqueIndices)._padding_ = (longlong)&___7FParticleUniqueIndicesMultithreaded_Chaos__6B_;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->bDiskDataIsChaos = false;
  this->bChaosDataReady = false;
  (this->SQCapture).Ptr = (FSQCapture *)0x0;
  (this->ChaosEvolution).Ptr = (FPBDRigidsEvolutionGBF *)0x0;
  (this->UniqueIndices).Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueIndices).Pages.ArrayNum = 0;
  (this->UniqueIndices).Pages.ArrayMax = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices.field_0x8 = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices.field_0x8 = 0;
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)&(this->UniqueIndices).FreeIndices =
       *(ulonglong *)&(this->UniqueIndices).FreeIndices & 0xfffffffffc000000 | (ulonglong)uVar1;
  *(ulonglong *)&(this->UniqueIndices).FreeIndices.field_0x8 =
       *(ulonglong *)&(this->UniqueIndices).FreeIndices.field_0x8 & 0xfffffffffc000000 |
       (ulonglong)uVar1;
  (this->UniqueIndices).Block = '\0';
  Chaos::FParticleUniqueIndicesMultithreaded::AddPageAndAcquireNextId(&this->UniqueIndices,false);
  Chaos::FPBDRigidsSOAs::FPBDRigidsSOAs
            (&this->Particles,(IParticleUniqueIndices *)&this->UniqueIndices);
  (this->PhysicalMaterials).HandleEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalMaterials).HandleEntries.ArrayNum = 0;
  (this->PhysicalMaterials).HandleEntries.ArrayMax = 0;
  (this->PhysicalMaterials).Validity.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PhysicalMaterials).FreeList = 0xffffff;
  (this->PhysicalMaterials).Validity.NumBits = 0;
  (this->PhysicalMaterials).Validity.MaxBits = 0x80;
  (this->PhysicalMaterials).Data = (FChaosPhysicsMaterial *)0x0;
  (this->PhysicalMaterials).NumData = 0;
  (this->PhysicalMaterials).Capacity = 0;
  (this->PhysicalMaterials).NumActive = 0;
  (this->GTParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GTParticles).ArrayNum = 0;
  (this->GTParticles).ArrayMax = 0;
  (this->ChaosContext).Ptr = (FChaosArchiveContext *)0x0;
  (this->ArchiveVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveVersion).Versions.ArrayNum = 0;
  (this->ArchiveVersion).Versions.ArrayMax = 0;
  return this;
}

// Serialize @ 1441b4e40

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall FPhysTestSerializer::Serialize(FPhysTestSerializer *this,FChaosArchive *param_1)

{
  TUniquePtr<FSQCapture,TDefaultDelete<FSQCapture>_> *pTVar1;
  uint *puVar2;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  FChaosArchiveContext *this_00;
  FName *pFVar7;
  FSQCapture *pFVar8;
  FSQCapture *this_01;
  FChaosArchiveContext *pFVar9;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar10;
  bool bVar11;
  uint local_res8 [2];
  FName local_res10;
  longlong local_48;
  undefined8 local_40;
  FGuid local_38;
  
  this_01 = (FSQCapture *)0x0;
  if ((param_1->_padding_ & 1) == 0) {
    pTVar10 = &this->ChaosContext;
    pTVar3 = &param_1->Context;
    if (pTVar3 != pTVar10) {
      pFVar9 = pTVar3->Ptr;
      pTVar3->Ptr = pTVar10->Ptr;
      pTVar10->Ptr = (FChaosArchiveContext *)0x0;
      if (pFVar9 != (FChaosArchiveContext *)0x0) {
        Chaos::FChaosArchiveContext::~FChaosArchiveContext(pFVar9);
        ::operator_delete(pFVar9,0x158);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&TestSerializerName,L"PhysTestSerializer");
    _Init_thread_footer(&::_TSS0);
  }
  plVar5 = (longlong *)param_1->_padding_;
  local_res8[0] = 1;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  ::operator<<((FArchive *)param_1,&this->bDiskDataIsChaos);
  if ((int)local_res8[0] < 1) {
    pFVar7 = ::FName::FName(&local_res10,L"SerializeGTGeometryParticles");
    local_38 = FPhysicsObjectVersion::GUID;
    FCustomVersionContainer::SetVersion(&this->ArchiveVersion,&local_38,2,*pFVar7);
    pFVar7 = ::FName::FName(&local_res10,L"GroupAndAttributeNameRemapping");
    local_38 = FDestructionObjectVersion::GUID;
    FCustomVersionContainer::SetVersion(&this->ArchiveVersion,&local_38,9,*pFVar7);
    pFVar7 = ::FName::FName(&local_res10,L"BeforeCustomVersionWasAdded");
    local_38 = FExternalPhysicsCustomObjectVersion::GUID;
    FCustomVersionContainer::SetVersion(&this->ArchiveVersion,&local_38,0,*pFVar7);
  }
  else {
    FCustomVersionContainer::Serialize(&this->ArchiveVersion,(FArchive *)param_1,Latest);
  }
  (**(code **)(param_1->_padding_ + 0x68))(param_1,&this->ArchiveVersion);
  Chaos::operator<<<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->Data);
  if ((param_1->_padding_ & 1) != 0) {
    pTVar10 = &this->ChaosContext;
    pTVar3 = &param_1->Context;
    if (pTVar3 != pTVar10) {
      pFVar9 = pTVar3->Ptr;
      pTVar3->Ptr = pTVar10->Ptr;
      pTVar10->Ptr = (FChaosArchiveContext *)0x0;
      if (pFVar9 != (FChaosArchiveContext *)0x0) {
        Chaos::FChaosArchiveContext::~FChaosArchiveContext(pFVar9);
        ::operator_delete(pFVar9,0x158);
      }
    }
  }
  puVar6 = (ulonglong *)param_1->_padding_;
  pTVar1 = &this->SQCapture;
  bVar11 = pTVar1->Ptr != (FSQCapture *)0x0;
  puVar2 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar2) {
    local_res8[0] = 0;
    if ((param_1->_padding_ & 1) == 0) {
      local_res8[0] = (uint)(pTVar1->Ptr != (FSQCapture *)0x0);
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((param_1->_padding_ & 1) != 0) goto LAB_1441b50a3;
  }
  else {
    uVar4 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar2;
LAB_1441b50a3:
    bVar11 = uVar4 != 0;
  }
  if (!bVar11) goto LAB_1441b512b;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar8 = ::operator_new(0x9b20);
    if (pFVar8 != (FSQCapture *)0x0) {
      this_01 = FSQCapture::FSQCapture(pFVar8,this);
    }
    if (pTVar1 == (TUniquePtr<FSQCapture,TDefaultDelete<FSQCapture>_> *)&local_48) {
      if (this_01 != (FSQCapture *)0x0) {
        FSQCapture::~FSQCapture(this_01);
        goto LAB_1441b510e;
      }
    }
    else {
      pFVar8 = pTVar1->Ptr;
      pTVar1->Ptr = this_01;
      if (pFVar8 != (FSQCapture *)0x0) {
        FSQCapture::~FSQCapture(pFVar8);
        this_01 = pFVar8;
LAB_1441b510e:
        ::operator_delete(this_01,0x9b20);
      }
    }
  }
  FSQCapture::Serialize(pTVar1->Ptr,param_1);
LAB_1441b512b:
  pFVar9 = (param_1->Context).Ptr;
  pTVar10 = &this->ChaosContext;
  (param_1->Context).Ptr = (FChaosArchiveContext *)0x0;
  if (pTVar10 ==
      (TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *)
      &local_40) {
    if (pFVar9 == (FChaosArchiveContext *)0x0) {
      return;
    }
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(pFVar9);
  }
  else {
    this_00 = pTVar10->Ptr;
    pTVar10->Ptr = pFVar9;
    if (this_00 == (FChaosArchiveContext *)0x0) {
      return;
    }
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(this_00);
    pFVar9 = this_00;
  }
  ::operator_delete(pFVar9,0x158);
  return;
}

// Serialize @ 1441b51e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysTestSerializer::Serialize(FPhysTestSerializer *this,wchar_t *param_1)

{
  code *pcVar1;
  int iVar2;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar3;
  bool bVar4;
  char cVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  size_t sVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FString local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FChaosArchive local_c8;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\PhysTestSerializer.cpp"
                         ,0x1d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar10 = (FChaosArchiveContext *)0x0;
  pTVar6 = &FPaths::ProfilingDir(&local_d8)->Data;
  sVar7 = wcslen(param_1);
  iVar2 = (int)sVar7;
  if ((pTVar6->ArrayNum != 0) || (iVar11 = 2, iVar2 == -1)) {
    iVar11 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_e8,pTVar6,iVar2 + iVar11);
  ::FString::PathAppend((FString *)&local_e8,param_1,iVar2);
  FVar13.Data = (FScriptContainerElement *)pFVar10;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    FVar13.Data = (FScriptContainerElement *)(FChaosArchiveContext *)0x0;
  }
  do {
    ::FString::PrintfImpl(&local_f8,L"%s_%d.bin");
    if ((FChaosArchiveContext *)FVar13.Data != (FChaosArchiveContext *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    FVar13.Data = local_f8.Data.AllocatorInstance.Data;
    iVar2 = local_f8.Data.ArrayNum;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    pIVar8 = IFileManager::Get();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (iVar2 != 0) {
      FVar12.Data = FVar13.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar8 + 0x50))(pIVar8,FVar12.Data);
  } while (cVar5 != '\0');
  pIVar8 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (iVar2 != 0) {
    FVar12.Data = FVar13.Data;
  }
  pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar12.Data,0);
  if (pFVar9 == (FArchive *)0x0) {
    if (2 < (byte)LogPhysicsCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
    }
  }
  else {
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_c8,pFVar9);
    local_c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pFVar10 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    local_c8.Context.Ptr = pFVar10;
    if (4 < (byte)LogPhysicsCore._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
    }
    Serialize(this,&local_c8);
    TVar3.Ptr = local_c8.Context.Ptr;
    if (local_c8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_c8.Context.Ptr);
      ::operator_delete(TVar3.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_c8);
    (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if ((FChaosArchiveContext *)FVar13.Data != (FChaosArchiveContext *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// SetPhysicsData @ 1441b9060

void __thiscall
FPhysTestSerializer::SetPhysicsData(FPhysTestSerializer *this,FPBDRigidsEvolutionGBF *param_1)

{
  int *piVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FCustomVersionContainer *pFVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar6;
  undefined8 *puVar7;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar8;
  FArchiveState local_178;
  undefined8 local_e8;
  FPhysTestSerializer *local_e0;
  undefined8 local_d8;
  undefined8 local_c8 [2];
  FChaosArchive local_b8;
  
  pFVar6 = (FChaosArchiveContext *)0x0;
  this->bDiskDataIsChaos = true;
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  local_178._padding_ = 0;
  local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_178._40_8_ = 0;
  local_178.ArSerializingDefaults = 0;
  local_178.ArPortFlags = 0;
  local_178.ArMaxSerializeSize = 0;
  local_178.ArUEVer.FileVersionUE4 = 0;
  local_178.ArUEVer.FileVersionUE5 = 0;
  local_178.ArLicenseeUEVer = 0;
  local_178.ArEngineVer.Major = 0;
  local_178.ArEngineVer.Minor = 0;
  local_178.ArEngineVer.Patch = 0;
  local_178.ArEngineVer._6_2_ = 0;
  local_178.ArEngineVer.Changelist = 0;
  local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_178.SerializedProperty = (FProperty *)0x0;
  local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_178.bCustomVersionsAreReset = false;
  local_178._129_7_ = 0;
  local_178.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_178);
  local_e8 = 0;
  local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d8 = 0;
  local_e0 = this;
  FArchiveState::SetIsSaving(&local_178,true);
  (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
  local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_b8,(FArchive *)&local_178);
  local_b8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
  this_00 = ::operator_new(0x158);
  if (this_00 != (FChaosArchiveContext *)0x0) {
    pFVar6 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
  }
  local_b8.Context.Ptr = pFVar6;
  Chaos::FPBDRigidsEvolutionGBF::Serialize(param_1,&local_b8);
  TVar8.Ptr = local_b8.Context.Ptr;
  pTVar2 = &this->ChaosContext;
  local_b8.Context.Ptr = (FChaosArchiveContext *)0x0;
  if (pTVar2 == (TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_>
                 *)local_c8) {
    if (TVar8.Ptr == (FChaosArchiveContext *)0x0) goto LAB_1441b91d2;
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(TVar8.Ptr);
  }
  else {
    pFVar6 = pTVar2->Ptr;
    pTVar2->Ptr = TVar8.Ptr;
    if (pFVar6 == (FChaosArchiveContext *)0x0) goto LAB_1441b91d2;
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(pFVar6);
    TVar8.Ptr = pFVar6;
  }
  ::operator_delete(TVar8.Ptr,0x158);
LAB_1441b91d2:
  puVar7 = (undefined8 *)(**(code **)(local_178._padding_ + 0x60))(&local_178);
  pFVar3 = &this->ArchiveVersion;
  if (pFVar3 != (FCustomVersionContainer *)puVar7) {
    iVar4 = *(int *)(puVar7 + 1);
    piVar1 = &(this->ArchiveVersion).Versions.ArrayMax;
    _Src = (void *)*puVar7;
    iVar5 = *piVar1;
    (this->ArchiveVersion).Versions.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pFVar3->Versions).AllocatorInstance.Data,_Src,(longlong)iVar4 * 0x28);
      }
    }
  }
  TVar8.Ptr = local_b8.Context.Ptr;
  if (local_b8.Context.Ptr != (FChaosArchiveContext *)0x0) {
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_b8.Context.Ptr);
    ::operator_delete(TVar8.Ptr,0x158);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_b8);
  FArchive::~FArchive((FArchive *)&local_178);
  return;
}

