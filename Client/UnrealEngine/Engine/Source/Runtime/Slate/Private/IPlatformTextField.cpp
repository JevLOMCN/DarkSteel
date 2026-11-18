// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// ~IPlatformTextField @ 1426ab910

void __thiscall IPlatformTextField::~IPlatformTextField(IPlatformTextField *this)

{
  *this = (IPlatformTextField)&___7IPlatformTextField__6B_;
  return;
}

// AllowMoveCursor @ 1426b1680

bool __thiscall IPlatformTextField::AllowMoveCursor(IPlatformTextField *this)

{
  return true;
}

// ShouldUseVirtualKeyboardAutocorrect @ 1426debe0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
IPlatformTextField::ShouldUseVirtualKeyboardAutocorrect
          (TSharedPtr<IVirtualKeyboardEntry,1> *param_1)

{
  IVirtualKeyboardEntry *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *this;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  FInternationalization *this_00;
  FString *pFVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res8[0] = false;
  pIVar1 = param_1->Object;
  if ((pIVar1 != (IVirtualKeyboardEntry *)0x0) &&
     (pcVar9 = (char *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_res18), *pcVar9 != '\0')
     ) {
    if ((param_1->Object == (IVirtualKeyboardEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar7 = (**(code **)(param_1->Object->_padding_ + 0x30))();
    switch(uVar7) {
    default:
      local_res8[0] =
           FConfigCacheIni::GetBool
                     (GConfig,L"/Script/Engine.InputSettings",L"bUseAutocorrect",local_res8,
                      &GInputIni);
      if (local_res8[0]) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`IPlatformTextField::ShouldUseVirtualKeyboardAutocorrect'::__l12::
                 _dynamic_atexit_destructor_for__PlatformVersion__);
          _Init_thread_footer(&::_TSS0);
        }
        if (PlatformVersion.Data.ArrayNum < 2) {
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          FWindowsPlatformMisc::GetOSVersions(&local_68,&local_78);
          ::FString::FString(&local_48," ");
          ::FString::ConcatFF(&local_58,&local_68,&local_48);
          ::FString::ConcatFF(&local_98,&local_58,&local_78);
          if (PlatformVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(PlatformVersion.Data.AllocatorInstance.Data);
          }
          PlatformVersion.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
          PlatformVersion.Data.ArrayNum = local_98.Data.ArrayNum;
          PlatformVersion.Data.ArrayMax = local_98.Data.ArrayMax;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
        FConfigCacheIni::GetArray
                  (GConfig,L"/Script/Engine.InputSettings",L"ExcludedAutocorrectOS",&local_b8,
                   &GInputIni);
        iVar4 = local_b8.ArrayNum;
        pFVar15 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10;
        FVar12.Data = local_b8.AllocatorInstance.Data;
        do {
          if (local_b8.ArrayNum != iVar4) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar12.Data == pFVar15) {
            if ((local_res8[0] != false) && (bVar5 = FInternationalization::IsAvailable(), bVar5)) {
              this_00 = FInternationalization::Get();
              if (((this_00->CurrentLanguage).Object == (FCulture *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x408,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pTVar2 = (this_00->CurrentLanguage).SharedReferenceCount.ReferenceController;
              this = (this_00->CurrentLanguage).Object;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((this == (FCulture *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x25d,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pFVar10 = FCulture::GetName(this);
              FInternationalization::GetPrioritizedCultureNames(this_00,&local_88,pFVar10);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
              local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_a8.ArrayNum = 0;
              local_a8.ArrayMax = 0;
              FConfigCacheIni::GetArray
                        (GConfig,L"/Script/Engine.InputSettings",L"ExcludedAutocorrectCultures",
                         &local_a8,&GInputIni);
              iVar4 = local_88.ArrayNum;
              pFVar15 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
              FVar12.Data = local_88.AllocatorInstance.Data;
              while( true ) {
                if (local_88.ArrayNum != iVar4) {
                  `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_res20);
                }
                if (FVar12.Data == pFVar15) break;
                pFVar14 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x10;
                for (FVar13.Data = local_a8.AllocatorInstance.Data; FVar13.Data != pFVar14;
                    FVar13.Data = FVar13.Data + 0x10) {
                  iVar8 = *(int *)(FVar13.Data + 8);
                  if (iVar8 == *(int *)(FVar12.Data + 8)) {
                    if (1 < iVar8) {
                      iVar8 = FGenericPlatformStricmp::Stricmp
                                        (*(wchar_t **)FVar13.Data,*(wchar_t **)FVar12.Data);
                      bVar5 = iVar8 == 0;
                      goto LAB_1426def83;
                    }
LAB_1426def99:
                    local_res8[0] = false;
                    goto LAB_1426def9d;
                  }
                  bVar5 = iVar8 + *(int *)(FVar12.Data + 8) == 1;
LAB_1426def83:
                  if (bVar5) goto LAB_1426def99;
                }
                FVar12.Data = FVar12.Data + 0x10;
              }
LAB_1426def9d:
              DestructItems<FString,int>
                        ((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
              if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
              if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.AllocatorInstance.Data);
              }
            }
            goto LAB_1426defd1;
          }
          iVar8 = *(int *)(FVar12.Data + 8) + -1;
          if (*(int *)(FVar12.Data + 8) == 0) {
            iVar8 = 0;
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)FVar12.Data;
          }
          bVar5 = ::FString::StartsWith(&PlatformVersion,pwVar11,iVar8,IgnoreCase);
          if (bVar5) goto LAB_1426dee3e;
          FVar12.Data = FVar12.Data + 0x10;
        } while( true );
      }
      break;
    case 4:
      break;
    }
  }
switchD_1426dec66_caseD_4:
  bVar5 = local_res8[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
LAB_1426dee3e:
  local_res8[0] = false;
LAB_1426defd1:
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  goto switchD_1426dec66_caseD_4;
}

