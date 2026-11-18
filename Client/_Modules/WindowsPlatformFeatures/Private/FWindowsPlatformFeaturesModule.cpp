// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 5

// FWindowsPlatformFeaturesModule @ 148d24e90

FWindowsPlatformFeaturesModule * __thiscall
FWindowsPlatformFeaturesModule::FWindowsPlatformFeaturesModule(FWindowsPlatformFeaturesModule *this)

{
  this->_padding_ = (longlong)&___7FWindowsPlatformFeaturesModule__6B_;
  (this->VideoRecordingSystem).Object = (IVideoRecordingSystem *)0x0;
  (this->VideoRecordingSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// GetSaveGameSystem @ 148d27800

ISaveGameSystem * __thiscall
FWindowsPlatformFeaturesModule::GetSaveGameSystem(FWindowsPlatformFeaturesModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res10 [3];
  FString local_18;
  
  if ((SaveGameSystem == (ISaveGameSystem *)0x0) || (!bIniChecked)) {
    if (1 < GEngineIni.Data.ArrayNum) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      FConfigCacheIni::GetString
                (GConfig,L"PlatformFeatures",L"SaveGameSystemModule",&local_18,&GEngineIni);
      if (1 < local_18.Data.ArrayNum) {
        pFVar2 = ::FName::FName(local_res10,(wchar_t *)local_18.Data.AllocatorInstance.Data);
        FVar1 = *pFVar2;
        this_00 = FModuleManager::Get();
        pIVar3 = FModuleManager::LoadModule(this_00,FVar1,None);
        if (pIVar3 != (IModuleInterface *)0x0) {
          SaveGameSystem = (ISaveGameSystem *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
        }
      }
      bIniChecked = true;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (SaveGameSystem == (ISaveGameSystem *)0x0) {
      SaveGameSystem = IPlatformFeaturesModule::GetSaveGameSystem((IPlatformFeaturesModule *)this);
    }
  }
  return SaveGameSystem;
}

// GetVideoRecordingSystem @ 148d27b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

IVideoRecordingSystem * __thiscall
FWindowsPlatformFeaturesModule::GetVideoRecordingSystem(FWindowsPlatformFeaturesModule *this)

{
  TSharedPtr<IVideoRecordingSystem,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  IVideoRecordingSystem *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  IVideoRecordingSystem *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->VideoRecordingSystem;
  if ((this->VideoRecordingSystem).Object == (IVideoRecordingSystem *)0x0) {
    pTVar4 = ::operator_new(0xa0);
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_18 = ___xmm_00000000000000000000000000000010;
      pIVar5 = (IVideoRecordingSystem *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFWindowsVideoRecordingSystem___00_SharedPointerInternals__6B_
      ;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 2;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      *(undefined2 *)&pTVar4[4].SharedReferenceCount = 0;
      pTVar4[4].SharedReferenceCount.field_0x2 = 1;
      pTVar4[1]._padding_ = (longlong)&___7FWindowsVideoRecordingSystem__6B_;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0xffffffff;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
      }
      FWindowsVideoRecordingSystem::EnableRecording
                ((FWindowsVideoRecordingSystem *)(pTVar4 + 1),true);
      pIVar5 = (IVideoRecordingSystem *)(pTVar4 + 1);
      if (pIVar5 == (IVideoRecordingSystem *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pIVar5 = (IVideoRecordingSystem *)(*pcVar2)();
          return pIVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar4;
      pTVar6 = pTVar4;
      local_18 = pIVar5;
    }
    if (pTVar1 != (TSharedPtr<IVideoRecordingSystem,1> *)&local_18) {
      pTVar1->Object = pIVar5;
      local_18 = (IVideoRecordingSystem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VideoRecordingSystem).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return pTVar1->Object;
}

// RegisterVideoRecordingSystem @ 148d29450

void __thiscall
FWindowsPlatformFeaturesModule::RegisterVideoRecordingSystem
          (FWindowsPlatformFeaturesModule *this,TSharedPtr<IVideoRecordingSystem,1> *param_1)

{
  IVideoRecordingSystem *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->VideoRecordingSystem).SharedReferenceCount.ReferenceController;
  (this->VideoRecordingSystem).Object = pIVar1;
  (this->VideoRecordingSystem).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StartupModule @ 148d2ac80

void __thiscall FWindowsPlatformFeaturesModule::StartupModule(FWindowsPlatformFeaturesModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"GameplayMediaEncoder");
  FModuleManager::LoadModule(this_00,*pFVar1,None);
  return;
}

