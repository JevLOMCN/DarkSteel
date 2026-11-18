// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Exec_Dev @ 142a6bef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FPakExec::Exec_Dev(FPakExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  FPakPlatformFile *pFVar4;
  code *pcVar5;
  longlong lVar6;
  FPakPrecacher *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  FPakFile *pFVar12;
  ForAnyElementType FVar13;
  byte *pbVar14;
  FPakListEntry *pFVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *local_res18;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5 [5];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_b0;
  FPakPrecacher *local_a0;
  wchar_t *local_98;
  FString local_90;
  wchar_t *local_80;
  FScriptContainerElement *local_78;
  LPCRITICAL_SECTION local_70;
  FString local_68;
  FString local_58;
  FPakMountArgs local_48;
  
  local_res18 = param_2;
  bVar9 = FParse::Command(&local_res18,L"Mount",true);
  if (bVar9) {
    pFVar4 = this->PlatformFile;
    local_98 = local_res18;
    FParse::Token(&local_90,&local_98,false);
    local_58.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    if (1 < local_90.Data.ArrayNum) {
      FParse::Token(&local_68,&local_98,false);
      local_48.bLoadIndex = true;
      local_48.PakOrder = 0;
      local_48.Path = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum < 2) {
        local_48.Path = (wchar_t *)(FScriptContainerElement *)0x0;
      }
      local_48.MountOptions.MountFlags = None;
      local_48.PakFilename = L"";
      if (local_90.Data.ArrayNum != 0) {
        local_48.PakFilename = (wchar_t *)local_90.Data.AllocatorInstance.Data;
      }
      FPakPlatformFile::Mount(pFVar4,&local_48,(FIoStatus *)0x0,(FPakListEntry *)0x0);
      local_58.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    bVar9 = FParse::Command(&local_res18,L"Unmount",true);
    if (bVar9) {
      pFVar4 = this->PlatformFile;
      local_80 = local_res18;
      FParse::Token(&local_58,&local_80,false);
      if (1 < local_58.Data.ArrayNum) {
        FPakPlatformFile::Unmount(pFVar4,(wchar_t *)local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar9 = FParse::Command(&local_res18,L"PakList",true);
      if (bVar9) {
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        FPakPlatformFile::GetMountedPaks(this->PlatformFile,&local_c0);
        iVar3 = local_c0.ArrayNum;
        pFVar15 = (FPakListEntry *)
                  (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x10);
        FVar13.Data = local_c0.AllocatorInstance.Data;
        while( true ) {
          if (local_c0.ArrayNum != iVar3) {
            `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c6);
          }
          if ((FPakListEntry *)FVar13.Data == pFVar15) break;
          pFVar12 = (((FPakListEntry *)FVar13.Data)->PakFile).Reference;
          if (pFVar12 != (FPakFile *)0x0) {
            LOCK();
            *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
            UNLOCK();
          }
          FOutputDevice::LogfImpl(param_3,L"%s Mounted to %s");
          if (pFVar12 != (FPakFile *)0x0) {
            plVar1 = &pFVar12->_padding_;
            LOCK();
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              if (plVar1 == (longlong *)0x0) {
                pFVar12 = (FPakFile *)0x0;
              }
              if (pFVar12 != (FPakFile *)0x0) {
                (**(code **)pFVar12->_padding_)(pFVar12,1);
              }
            }
          }
          FVar13.Data = FVar13.Data + 0x10;
        }
        DestructItems<FPakPlatformFile::FPakListEntry,int>
                  ((FPakListEntry *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
        local_58.Data.AllocatorInstance.Data = local_c0.AllocatorInstance.Data;
      }
      else {
        bVar9 = FParse::Command(&local_res18,L"PakCorrupt",true);
        if (bVar9) {
          if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PakPrecacherSingleton",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x33f,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          local_a0 = PakPrecacherSingleton;
          local_70 = (LPCRITICAL_SECTION)&PakPrecacherSingleton->CachedFilesScopeLock;
          if (local_70 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection(local_70);
          pFVar7 = local_a0;
          iVar3 = (local_a0->CachedPakData).ArrayNum;
          uVar11 = (ulonglong)iVar3;
          pFVar16 = (local_a0->CachedPakData).AllocatorInstance.Data;
          local_a0 = (FPakPrecacher *)CONCAT44(local_a0._4_4_,iVar3);
          local_78 = pFVar16 + uVar11 * 0x98;
          while( true ) {
            pFVar8 = local_78;
            if ((pFVar7->CachedPakData).ArrayNum != (int)uVar11) {
              local_c8 = 0;
              `TCheckedPointerIterator<FPakPrecacher::FPakData,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_c8);
            }
            if (pFVar16 == pFVar8) break;
            if ((*(longlong *)(pFVar16 + 0x88) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            lVar6 = *(longlong *)(pFVar16 + 0x88);
            pbVar14 = *(byte **)(lVar6 + 0x40);
            iVar3 = *(int *)(lVar6 + 0x48);
            pbVar2 = pbVar14 + (longlong)iVar3 * 4;
            while( true ) {
              if (*(int *)(lVar6 + 0x48) != iVar3) {
                local_c7 = 0;
                `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_c7);
              }
              if (pbVar14 == pbVar2) break;
              *pbVar14 = *pbVar14 | 1;
              pbVar14 = pbVar14 + 4;
            }
            pFVar16 = pFVar16 + 0x98;
            uVar11 = (ulonglong)local_a0 & 0xffffffff;
          }
          LeaveCriticalSection(local_70);
          return true;
        }
        bVar9 = FParse::Command(&local_res18,L"ReloadPakReaders",true);
        if (!bVar9) {
          return false;
        }
        pFVar4 = this->PlatformFile;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        FPakPlatformFile::GetMountedPaks(pFVar4,&local_b0);
        iVar3 = local_b0.ArrayNum;
        pFVar15 = (FPakListEntry *)
                  (local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 0x10);
        FVar13.Data = local_b0.AllocatorInstance.Data;
        while( true ) {
          if (local_b0.ArrayNum != iVar3) {
            `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_c5);
          }
          if ((FPakListEntry *)FVar13.Data == pFVar15) break;
          FPakFile::RecreatePakReaders
                    ((((FPakListEntry *)FVar13.Data)->PakFile).Reference,pFVar4->LowerLevel);
          FVar13.Data = FVar13.Data + 0x10;
        }
        DestructItems<FPakPlatformFile::FPakListEntry,int>
                  ((FPakListEntry *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
        local_58.Data.AllocatorInstance.Data = local_b0.AllocatorInstance.Data;
      }
    }
  }
  if ((FPakListEntry *)local_58.Data.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

