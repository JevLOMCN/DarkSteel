// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// DumpVersionsToLog @ 141a7e3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDevVersionRegistration::DumpVersionsToLog(void)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FCustomVersion> *pTVar3;
  FName this;
  TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  int iVar5;
  ForElementType<FGuid> FVar6;
  undefined1 local_res8 [16];
  FString local_98;
  FString local_88;
  FCustomVersion local_78;
  TOptional<FCustomVersion> local_50;
  
  if (4 < (byte)LogDevObjectVersion._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDevObjectVersion);
  }
  pTVar4 = &GDevVersions;
  iVar5 = GDevVersions.ArrayNum;
  if (GDevVersions.AllocatorInstance.SecondaryData != (ForElementType<FGuid>)0x0) {
    pTVar4 = (TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
             GDevVersions.AllocatorInstance.SecondaryData;
  }
  FVar6 = (ForElementType<FGuid>)((longlong)iVar5 * 0x10 + (longlong)pTVar4);
  while( true ) {
    if (GDevVersions.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<FGuid>)pTVar4 == FVar6) break;
    pTVar3 = FCurrentCustomVersions::Get(&local_50,(FGuid *)pTVar4);
    if ((pTVar3->bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78.Key.A = (pTVar3->TypedValue).Key.A;
    local_78.Key.B = (pTVar3->TypedValue).Key.B;
    local_78.Key.C = (pTVar3->TypedValue).Key.C;
    local_78.Key.D = (pTVar3->TypedValue).Key.D;
    local_78.Version = (pTVar3->TypedValue).Version;
    local_78.ReferenceCount = (pTVar3->TypedValue).ReferenceCount;
    local_78.Validator = (pTVar3->TypedValue).Validator;
    local_78.FriendlyName = (pTVar3->TypedValue).FriendlyName;
    if (4 < (byte)LogDevObjectVersion._0_1_) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      FGuid::AppendString(&local_78.Key,&local_98,DigitsWithHyphens);
      this = FCustomVersion::GetFriendlyName(&local_78);
      ::FName::ToString((FName *)this,&local_88);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDevObjectVersion);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    pTVar4 = (TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)pTVar4 + 0x10);
  }
  return;
}

// RecordDevVersion @ 141a8ea60

void __cdecl FDevVersionRegistration::RecordDevVersion(FGuid *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  pTVar6 = &GDevVersions;
  pTVar5 = &GDevVersions;
  if (GDevVersions.AllocatorInstance.SecondaryData != (ForElementType<FGuid>)0x0) {
    pTVar5 = (TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
             GDevVersions.AllocatorInstance.SecondaryData;
  }
  if (pTVar5 <= param_1) {
    pTVar5 = &GDevVersions;
    if (GDevVersions.AllocatorInstance.SecondaryData != (ForElementType<FGuid>)0x0) {
      pTVar5 = (TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
               GDevVersions.AllocatorInstance.SecondaryData;
    }
    if ((param_1 < (FGuid *)((longlong)GDevVersions.ArrayMax * 0x10 + (longlong)pTVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GDevVersions.ArrayNum == GDevVersions.ArrayMax) {
    GDevVersions.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_>
                   (0x410,&GDevVersions.AllocatorInstance,&GDevVersions.ArrayMax);
  }
  uVar3 = *(undefined8 *)&param_1->C;
  if (GDevVersions.AllocatorInstance.SecondaryData != (ForElementType<FGuid>)0x0) {
    pTVar6 = (TArray<FGuid,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
             GDevVersions.AllocatorInstance.SecondaryData;
  }
  puVar1 = (undefined8 *)((longlong)pTVar6 + (longlong)GDevVersions.ArrayNum * 0x10);
  GDevVersions.ArrayNum = GDevVersions.ArrayNum + 1;
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar3;
  return;
}

