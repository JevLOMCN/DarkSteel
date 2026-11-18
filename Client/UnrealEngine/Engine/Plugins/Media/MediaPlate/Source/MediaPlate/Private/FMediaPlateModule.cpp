// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 3

// StartupModule @ 14ea87490

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlateModule::StartupModule(FMediaPlateModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FName local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = ::FName::FName(&local_res10,"MediaAssets");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModule(this_00,FVar1,None);
  if (pIVar6 != (IModuleInterface *)0x0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x40);
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV2__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateModule____A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV3__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[4] = GetMediaPlayer;
      puVar7[3] = this;
      if (this == (FMediaPlateModule *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    iVar4 = (*pcVar2)(pIVar6,&local_68);
    this->GetPlayerFromObjectID = iVar4;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return;
}

// ShutdownModule @ 14ea87630

void __thiscall FMediaPlateModule::ShutdownModule(FMediaPlateModule *this)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  FName local_res8 [4];
  
  if (this->GetPlayerFromObjectID != -1) {
    pFVar1 = ::FName::FName(local_res8,"MediaAssets");
    pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
    if (pIVar2 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,this->GetPlayerFromObjectID);
      this->GetPlayerFromObjectID = -1;
    }
  }
  return;
}

// GetMediaPlayer @ 14ea8b120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall
FMediaPlateModule::GetMediaPlayer(FMediaPlateModule *this,UObject *param_1,UObject **param_2)

{
  int iVar1;
  UObject *pUVar2;
  UMediaPlayer *pUVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = AMediaPlate::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (pUVar2 = *(UObject **)&param_1[0x11].field_0x18, pUVar2 != (UObject *)0x0)) {
      pUVar3 = *(UMediaPlayer **)&pUVar2[0xb].field_0x8;
      *param_2 = pUVar2;
      return pUVar3;
    }
  }
  return (UMediaPlayer *)0x0;
}

