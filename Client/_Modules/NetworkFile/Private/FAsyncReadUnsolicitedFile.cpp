// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// DoWork @ 148be1a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile::DoWork(void *this)

{
  uchar *puVar1;
  FArchiveSavePackageData *pFVar2;
  FQueuedThreadPool *pFVar3;
  FCustomVersionContainer *pFVar4;
  char cVar5;
  FArchiveState *pFVar6;
  FArchiveState *pFVar7;
  ForAnyElementType FVar8;
  FArchiveState *this_00;
  FArchiveState *pFVar9;
  int local_res8;
  FCustomVersionContainer *local_res10;
  FCustomPropertyListNode *local_res18;
  FString local_48;
  
  LOCK();
  OutstandingAsyncWrites.Counter = OutstandingAsyncWrites.Counter + *(int *)this;
  UNLOCK();
  local_res8 = 0;
  if (0 < *(int *)this) {
    do {
      pFVar9 = (FArchiveState *)0x0;
      pFVar6 = ::operator_new(0xa8);
      this_00 = pFVar9;
      if (pFVar6 != (FArchiveState *)0x0) {
        pFVar6->_padding_ = 0;
        pFVar6->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        (pFVar6->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (pFVar6->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (pFVar6->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&pFVar6->field_0x28 = 0;
        pFVar6->ArSerializingDefaults = 0;
        pFVar6->ArPortFlags = 0;
        pFVar6->ArMaxSerializeSize = 0;
        (pFVar6->ArUEVer).FileVersionUE4 = 0;
        (pFVar6->ArUEVer).FileVersionUE5 = 0;
        pFVar6->ArLicenseeUEVer = 0;
        (pFVar6->ArEngineVer).Major = 0;
        (pFVar6->ArEngineVer).Minor = 0;
        (pFVar6->ArEngineVer).Patch = 0;
        *(undefined2 *)&(pFVar6->ArEngineVer).field_0x6 = 0;
        (pFVar6->ArEngineVer).Changelist = 0;
        pFVar6->CustomVersionContainer = (FCustomVersionContainer *)0x0;
        pFVar6->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        pFVar6->SavePackageData = (FArchiveSavePackageData *)0x0;
        pFVar6->SerializedProperty = (FProperty *)0x0;
        pFVar6->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        *(undefined8 *)&pFVar6->bCustomVersionsAreReset = 0;
        pFVar6->NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(pFVar6);
        pFVar6[1].ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        pFVar6[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        pFVar6[1]._padding_ = 0;
        pFVar6->_padding_ = (longlong)&___7FArrayReader__6B_;
        FArchiveState::SetIsLoading(pFVar6,true);
        (**(code **)(pFVar6->_padding_ + 0x108))(pFVar6,0);
        this_00 = pFVar6;
      }
      cVar5 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x268))
                        (*(longlong **)((longlong)this + 8),&this_00[1].ActiveFPLB);
      if (cVar5 == '\0') {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
        if (this_00 == (FArchiveState *)0x0) {
          return;
        }
        if (this_00[1].ActiveFPLB != (FFastPathLoadBuffer *)0x0) {
          FMemory::Free(this_00[1].ActiveFPLB);
        }
        FArchive::~FArchive((FArchive *)this_00);
        ::operator_delete(this_00,0xa8);
        return;
      }
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::operator<<((FArchive *)this_00,&local_48);
      pFVar6 = this_00;
      if (1 < local_48.Data.ArrayNum) {
        FNetworkPlatformFile::ConvertServerFilenameToClientFilename
                  (&local_48,(FString *)((longlong)this + 0x18),(FString *)((longlong)this + 0x28),
                   (FString *)((longlong)this + 0x38),(FString *)((longlong)this + 0x48));
        local_res10 = (FCustomVersionContainer *)0x0;
        puVar1 = this_00->ActiveFPLB->StartFastPathLoadBuffer;
        if (this_00->ActiveFPLB->EndFastPathLoadBuffer < puVar1 + 8) {
          if (this_00->ArForceByteSwapping == 0) {
            (**(code **)(this_00->_padding_ + 0x188))(this_00,&local_res10,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(ulong64 *)&local_res10);
          }
        }
        else {
          local_res10 = *(FCustomVersionContainer **)puVar1;
          this_00->ActiveFPLB->StartFastPathLoadBuffer =
               this_00->ActiveFPLB->StartFastPathLoadBuffer + 8;
        }
        pFVar4 = local_res10;
        local_res18 = *(FCustomPropertyListNode **)((longlong)this + 0x10);
        pFVar2 = *(FArchiveSavePackageData **)((longlong)this + 0x60);
        pFVar7 = ::operator_new(0x70);
        pFVar6 = pFVar9;
        if (pFVar7 != (FArchiveState *)0x0) {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar8.Data = local_48.Data.AllocatorInstance.Data;
          }
          pFVar7->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          pFVar7->_padding_ = (longlong)&___7__FAutoDeleteAsyncTask_VFAsyncNetworkWriteWorker____6B_
          ;
          ::FString::FString((FString *)&pFVar7->ArMaxSerializeSize,(wchar_t *)FVar8.Data);
          *(FArchiveState **)&(pFVar7->ArEngineVer).Patch = this_00;
          pFVar7->ArCustomPropertyList = local_res18;
          *(FArchiveState **)&pFVar7->ArLicenseeUEVer = this_00;
          pFVar7->CustomVersionContainer = pFVar4;
          pFVar7->SavePackageData = pFVar2;
          this_00 = (FArchiveState *)0x0;
          pFVar6 = pFVar7;
        }
        pFVar3 = GThreadPool;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar6->InlineFPLB);
        if (pFVar3 == (FQueuedThreadPool *)0x0) {
          FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::DoWork
                    ((FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)pFVar6);
        }
        else {
          (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3,pFVar6,3);
        }
        pFVar6 = pFVar9;
        if (this_00 != (FArchiveState *)0x0) {
          if (this_00[1].ActiveFPLB != (FFastPathLoadBuffer *)0x0) {
            FMemory::Free(this_00[1].ActiveFPLB);
          }
          FArchive::~FArchive((FArchive *)this_00);
          ::operator_delete(this_00,0xa8);
        }
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (pFVar6 != (FArchiveState *)0x0) {
        if (pFVar6[1].ActiveFPLB != (FFastPathLoadBuffer *)0x0) {
          FMemory::Free(pFVar6[1].ActiveFPLB);
        }
        FArchive::~FArchive((FArchive *)pFVar6);
        ::operator_delete(pFVar6,0xa8);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < *(int *)this);
  }
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x58) + 0x10))();
  return;
}

