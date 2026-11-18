// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// FHeightfieldGeometryRef @ 145f02710

FHeightfieldGeometryRef * __thiscall
ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef::FHeightfieldGeometryRef
          (FHeightfieldGeometryRef *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7FHeightfieldGeometryRef_ULandscapeHeightfieldCollisionComponent__6B_;
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->Guid).A = param_1->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  (this->UsedChaosMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedChaosMaterials).ArrayNum = 0;
  (this->UsedChaosMaterials).ArrayMax = 0;
  (this->HeightfieldGeometry).Reference = (FHeightField *)0x0;
  (this->HeightfieldSimpleGeometry).Reference = (FHeightField *)0x0;
  return this;
}

// ~FHeightfieldGeometryRef @ 145f03dd0

void __thiscall
ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef::~FHeightfieldGeometryRef
          (FHeightfieldGeometryRef *this)

{
  undefined1 *puVar1;
  int iVar2;
  FHeightField *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  
  this->_padding_ =
       (longlong)&___7FHeightfieldGeometryRef_ULandscapeHeightfieldCollisionComponent__6B_;
  EnterCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
  if (GSharedHeightfieldRefs._8_4_ != GSharedHeightfieldRefs._52_4_) {
    uVar7 = CityHash64((char *)&this->Guid,0x10);
    TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
                         *)&GSharedHeightfieldRefs,(uint)uVar7,&this->Guid);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
  pFVar3 = (this->HeightfieldSimpleGeometry).Reference;
  if (pFVar3 != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&pFVar3->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pFVar3 = (this->HeightfieldGeometry).Reference;
  if (pFVar3 != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&pFVar3->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pFVar4 = (this->UsedChaosMaterials).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// GetResourceSizeEx @ 145f132c0

void __thiscall
ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef::GetResourceSizeEx
          (FHeightfieldGeometryRef *this,FResourceSizeEx *param_1)

{
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar1;
  FChaosArchiveContext *pFVar2;
  FChaosArchiveContext *pFVar3;
  void *local_188;
  undefined8 local_180;
  FArchiveState local_178;
  undefined8 local_e8;
  void **local_e0;
  undefined8 local_d8;
  FChaosArchive local_c8;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x40);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->UsedChaosMaterials).ArrayMax << 2);
  pFVar3 = (FChaosArchiveContext *)0x0;
  if ((this->HeightfieldGeometry).Reference != (FHeightField *)0x0) {
    local_188 = (void *)0x0;
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_180 = 0;
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
    local_e0 = &local_188;
    local_e8 = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8 = 0;
    FArchiveState::SetIsSaving(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_c8,(FArchive *)&local_178);
    local_c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar2 = ::operator_new(0x158);
    local_c8.Context.Ptr = pFVar3;
    if (pFVar2 != (FChaosArchiveContext *)0x0) {
      local_c8.Context.Ptr = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar2);
    }
    Chaos::FHeightField::Serialize((this->HeightfieldGeometry).Reference,&local_c8);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)local_180);
    TVar1.Ptr = local_c8.Context.Ptr;
    if (local_c8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_c8.Context.Ptr);
      ::operator_delete(TVar1.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
  }
  if ((this->HeightfieldSimpleGeometry).Reference != (FHeightField *)0x0) {
    local_188 = (void *)0x0;
    local_180 = 0;
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
    local_e0 = &local_188;
    local_e8 = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8 = 0;
    FArchiveState::SetIsSaving(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_c8,(FArchive *)&local_178);
    local_c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar2 = ::operator_new(0x158);
    if (pFVar2 != (FChaosArchiveContext *)0x0) {
      pFVar3 = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar2);
    }
    local_c8.Context.Ptr = pFVar3;
    Chaos::FHeightField::Serialize((this->HeightfieldSimpleGeometry).Reference,&local_c8);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)local_180);
    TVar1.Ptr = local_c8.Context.Ptr;
    if (local_c8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_c8.Context.Ptr);
      ::operator_delete(TVar1.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
  }
  return;
}

