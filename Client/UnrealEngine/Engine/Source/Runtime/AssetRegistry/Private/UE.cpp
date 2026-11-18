// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 127

// Construct<FTagAndValue> @ 142aadf60

void __cdecl UE::CoreUObject::Private::Construct<FTagAndValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTagAndValue> @ 142aadf80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTagAndValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTagAndValue> @ 142aadfa0

void __cdecl UE::CoreUObject::Private::Destruct<FTagAndValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTagAndValue> @ 142aadfd0

bool __cdecl UE::CoreUObject::Private::Copy<FTagAndValue>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      ::FString::operator=
                ((FString *)(puVar1 + 1),
                 (FString *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// FCachedVolumeInfo> @ 142ab1340

FArchive * __cdecl
operator<<<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>
          (FArchive *param_1,
          TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  ::operator<<(param_1,(FString *)param_2);
  TSetPrivateFriend::
  Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                      *)&param_2->field_0x10);
  ::operator<<(param_1,(FString *)&param_2->field_0x60);
  puVar1 = &param_2->field_0x70;
  puVar2 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if ((undefined8 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)puVar1);
    }
  }
  else {
    *(undefined8 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->field_0x78;
  puVar2 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined8 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *(undefined8 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)puVar1);
  return param_1;
}

// GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData,TSizedDefaultAllocator<32>_>_> @ 142abf250

ulong64 __cdecl
UE::AssetDataGather::Private::
GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int iVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulong64 uVar9;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  uVar9 = (longlong)param_1->ArrayMax << 7;
  pFVar4 = pFVar5 + 0x20;
  pFVar8 = pFVar5 + (longlong)iVar1 * 0x80;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar8) break;
    if (pFVar4[8] == (FScriptContainerElement)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (*(longlong *)pFVar4 - *(longlong *)(pFVar4 + -0x10) >> 1) * 2;
    }
    if (pFVar4[0x28] == (FScriptContainerElement)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (*(longlong *)(pFVar4 + 0x20) - *(longlong *)(pFVar4 + 0x10) >> 1) * 2;
    }
    uVar2 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                      ((TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>
                        *)(pFVar4 + 0x30));
    uVar3 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                      ((TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>
                        *)(pFVar4 + 0x40));
    pFVar5 = pFVar5 + 0x80;
    uVar9 = uVar9 + uVar3 + lVar7 + uVar2 + lVar6;
    pFVar4 = pFVar4 + 0x80;
  }
  return uVar9;
}

// GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,TSizedDefaultAllocator<32>_>_> @ 142abf330

ulong64 __cdecl
UE::AssetDataGather::Private::
GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  undefined1 local_res8 [8];
  
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  uVar6 = (longlong)param_1->ArrayMax << 5;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar1 = pFVar4 + 0x1c;
    pFVar2 = pFVar4 + 0xc;
    pFVar4 = pFVar4 + 0x20;
    uVar6 = uVar6 + ((longlong)*(int *)pFVar2 + (longlong)*(int *)pFVar1 * 0x18) * 2;
  }
  return uVar6;
}

// GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_> @ 142abf3b0

ulong64 __cdecl
UE::AssetDataGather::Private::
GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  undefined1 local_res8 [8];
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  uVar7 = (longlong)param_1->ArrayMax << 6;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar1 = pFVar5 + 0x1c;
    pFVar2 = pFVar5 + 0x2c;
    pFVar3 = pFVar5 + 0xc;
    pFVar5 = pFVar5 + 0x40;
    uVar7 = uVar7 + ((longlong)*(int *)pFVar2 + (longlong)*(int *)pFVar1 + (longlong)*(int *)pFVar3)
                    * 2;
  }
  return uVar7;
}

// GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>_> @ 142abf430

ulong64 __cdecl
UE::AssetDataGather::Private::
GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  undefined1 local_res8 [8];
  
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  uVar6 = (longlong)param_1->ArrayMax * 0x30;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FGatheredPathData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar1 = pFVar4 + 0x1c;
    pFVar2 = pFVar4 + 0xc;
    pFVar4 = pFVar4 + 0x30;
    uVar6 = uVar6 + ((longlong)*(int *)pFVar1 + (longlong)*(int *)pFVar2) * 2;
  }
  return uVar6;
}

// GetArrayRecursiveAllocatedSize<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142abf4c0

ulong64 __cdecl
UE::AssetDataGather::Private::
GetArrayRecursiveAllocatedSize<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  uVar5 = (longlong)param_1->ArrayMax << 4;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar1 = pFVar3 + 0xc;
    pFVar3 = pFVar3 + 0x10;
    uVar5 = uVar5 + (longlong)*(int *)pFVar1 * 2;
  }
  return uVar5;
}

// GetDataKey<UE::Telemetry::AssetRegistry::FFileJournalErrorTelemetry> @ 142abf530

FGuid * __cdecl
UE::Telemetry::Private::GetDataKey<UE::Telemetry::AssetRegistry::FFileJournalErrorTelemetry>
          (FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
  return __return_storage_ptr__;
}

// GetDataKey<UE::Telemetry::AssetRegistry::FFileJournalWrappedTelemetry> @ 142abf550

FGuid * __cdecl
UE::Telemetry::Private::GetDataKey<UE::Telemetry::AssetRegistry::FFileJournalWrappedTelemetry>
          (FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = AssetRegistry::FFileJournalWrappedTelemetry::TelemetryID;
  return __return_storage_ptr__;
}

// Prerequisites<UE::Tasks::Private::FTaskHandle,UE::Tasks::FTaskEvent,0> @ 142acd5e0

TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> * __cdecl
UE::Tasks::Prerequisites<UE::Tasks::Private::FTaskHandle,UE::Tasks::FTaskEvent,0>
          (TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *__return_storage_ptr__,
          FTaskHandle *param_1,FTaskEvent *param_2)

{
  __return_storage_ptr__->Elements[0] = (param_1->Pimpl).Reference;
  *(FTaskEvent *)(__return_storage_ptr__->Elements + 1) = *param_2;
  return __return_storage_ptr__;
}

// PrerequisitesUnpacker<1,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,UE::Tasks::FTaskEvent> @ 142acd600

void __cdecl
UE::Tasks::Private::
PrerequisitesUnpacker<1,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,UE::Tasks::FTaskEvent>
          (TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *param_1,FTaskEvent *param_2)

{
  *(FTaskEvent *)(param_1->Elements + 1) = *param_2;
  return;
}

// PrerequisitesUnpacker<0,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,UE::Tasks::Private::FTaskHandle,UE::Tasks::FTaskEvent> @ 142acd610

void __cdecl
UE::Tasks::Private::
PrerequisitesUnpacker<0,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,UE::Tasks::Private::FTaskHandle,UE::Tasks::FTaskEvent>
          (TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *param_1,FTaskHandle *param_2,
          FTaskEvent *param_3)

{
  param_1->Elements[0] = (param_2->Pimpl).Reference;
  *(FTaskEvent *)(param_1->Elements + 1) = *param_3;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_> @ 142ace940

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
          (ushort param_1,ForElementType<FAssetData_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_> @ 142acea10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
          (ushort param_1,ForElementType<FAssetData_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_> @ 142aceae0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_>
          (ushort param_1,
          ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_> @ 142acebb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_>
          (ushort param_1,ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetDataGather::Private::FGatheredPathData>_> @ 142acec80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetDataGather::Private::FGatheredPathData>_>
          (ushort param_1,ForElementType<UE::AssetDataGather::Private::FGatheredPathData> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AssetDataGather::Private::FGatheredPathData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>_> @ 142aced50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>_>
          (ushort param_1,
          ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FAssetData_const_*_const,int>_>_> @ 142acee20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FAssetData_const_*_const,int>_>_>
          (ushort param_1,ForElementType<TArrayView<FAssetData_const_*_const,int>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArrayView<FAssetData_const_*_const,int>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_> @ 142aceef0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
          (ushort param_1,
          ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142acefc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageDependencyData>_> @ 142acf090

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageDependencyData>_>
          (ushort param_1,ForElementType<FPackageDependencyData> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPackageDependencyData>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 142acf160

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_> @ 142acf230

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_> @ 142acf310

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xb) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_> @ 142acf3f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x65) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 142acf4d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x65) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_> @ 142acf810

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
          (uint param_1,uint param_2,ForElementType<FAssetData_*> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_> @ 142acf8d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xb) {
    iVar2 = 10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::AssetDataGather::Private::FScanDir_*,int>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_> @ 142acf990

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FAssetData_const_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_> @ 142acfa10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_> @ 142acfa90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>_> @ 142acfb10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FAssetData_const_*_const,int>_>_> @ 142acfb90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FAssetData_const_*_const,int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArrayView<FAssetData_const_*_const,int>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArrayView<FAssetData_const_*_const,int>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_> @ 142acfc10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x65) {
      iVar1 = 100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 142adcdc0

FArchive * __cdecl
UE::AssetDataGather::Private::operator<<(FArchive *param_1,FCachedDirScanDir *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->JournalHandle,0x14);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->SubDirRelPaths);
  TArrayPrivateFriend::
  Serialize<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Files);
  ::operator<<(param_1,&param_2->bCacheValid);
  return param_1;
}

// operator<< @ 142adce20

FArchive * __cdecl
UE::AssetDataGather::Private::operator<<(FArchive *param_1,FCachedDirScanFile *param_2)

{
  FDateTime *pFVar1;
  long64 *plVar2;
  
  ::operator<<(param_1,&param_2->RelPath);
  pFVar1 = &param_2->ModificationTime;
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar1);
    }
  }
  else {
    pFVar1->Ticks = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  ::operator<<(param_1,&param_2->bIsReadOnly);
  return param_1;
}

// operator<< @ 142adcea0

FArchive * __cdecl
UE::AssetDataGather::Private::operator<<(FArchive *param_1,FCachedVolumeInfo *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  TSetPrivateFriend::
  Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                      *)param_2);
  ::operator<<(param_1,&param_2->VolumeName);
  puVar1 = &param_2->JournalId;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->NextJournalEntryToScan;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator() @ 142adf730

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCachePayload * __thiscall
`UE::AssetDataGather::Private::LoadCacheFiles'::__l2::<lambda_1>::operator()
          (void *this,FCachePayload *__return_storage_ptr__,FArchive *param_1)

{
  bool *pbVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FAssetRegistryHeader FVar4;
  char cVar5;
  FCachePayload *pFVar6;
  FName *pFVar7;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  bool bVar10;
  uint uStackX_14;
  FCachePayload local_f8;
  FCachePayload local_e0;
  undefined1 local_c8 [192];
  
  pFVar7 = (FName *)0x0;
  uStackX_14 = uStackX_14 & 0xffffff00;
  FVar4._4_4_ = uStackX_14;
  FVar4.Version = LatestVersion;
  FAssetRegistryReader::FAssetRegistryReader((FAssetRegistryReader *)local_c8,param_1,0,FVar4);
  bVar10 = (local_c8[0x29] & 2) == 0;
  if (bVar10) {
    pFVar6 = UE::AssetDataGather::Private::SerializeCacheLoad
                       (&local_e0,(FAssetRegistryReader *)local_c8);
    pFVar7 = (pFVar6->PackageNames).Ptr;
  }
  else {
    local_f8._21_2_ = 0;
    pFVar6 = &local_f8;
    local_f8._23_1_ = 0;
    local_f8.AssetDatas.Ptr = (FDiskCachedAssetData *)0x0;
    local_f8.NumAssets = 0;
    local_f8.bSucceeded = false;
  }
  (__return_storage_ptr__->PackageNames).Ptr = pFVar7;
  (pFVar6->PackageNames).Ptr = (FName *)0x0;
  (__return_storage_ptr__->AssetDatas).Ptr = (pFVar6->AssetDatas).Ptr;
  (pFVar6->AssetDatas).Ptr = (FDiskCachedAssetData *)0x0;
  __return_storage_ptr__->NumAssets = pFVar6->NumAssets;
  __return_storage_ptr__->bSucceeded = pFVar6->bSucceeded;
  if (bVar10) {
    UE::AssetDataGather::Private::FCachePayload::~FCachePayload(&local_e0);
  }
  else {
    if (local_f8.AssetDatas.Ptr != (FDiskCachedAssetData *)0x0) {
      lVar9 = *(longlong *)&local_f8.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
      pbVar1 = &local_f8.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
      if (lVar9 != 0) {
        pTVar8 = &local_f8.AssetDatas.Ptr[lVar9].AssetDataList;
        do {
          pTVar2 = pTVar8 + -0x11;
          lVar9 = lVar9 + -1;
          FPackageDependencyData::~FPackageDependencyData
                    ((FPackageDependencyData *)(pTVar8 + -0x10));
          DestructItems<FAssetData,int>
                    ((FAssetData *)(pTVar2->AllocatorInstance).Data,
                     *(int *)((longlong)(pTVar8 + -0x11) + 8));
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pTVar8 = pTVar2;
        } while (lVar9 != 0);
      }
      operator_delete__(pbVar1,*(longlong *)pbVar1 * 0x110 + 8);
    }
    operator_delete__(local_f8.PackageNames.Ptr);
  }
  local_c8._0_8_ = &___7FAssetRegistryReader__6B_;
  if (local_c8._176_8_ != 0) {
    do {
      cVar5 = (**(code **)(**(longlong **)(local_c8._176_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_c8._176_8_ + 0x60),0xffffffff,0);
    } while (cVar5 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_c8._184_8_);
  if ((FStore *)local_c8._168_8_ != (FStore *)0x0) {
    FixedTagPrivate::FStore::Release((FStore *)local_c8._168_8_);
  }
  if ((FScriptContainerElement *)local_c8._152_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._152_8_);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_c8);
  return __return_storage_ptr__;
}

// operator() @ 142adf920

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
          (void *this,EDependencyProperty param_1,wchar_t *param_2,wchar_t *param_3)

{
  TStringBuilderBase<wchar_t> *this_00;
  int iVar1;
  size_t sVar2;
  
  if (**(char **)((longlong)this + 0x10) == '\0') {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),L",",1);
  }
  this_00 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 8);
  if ((**(EDependencyProperty **)this & param_1) == None) {
    iVar1 = 0;
    param_2 = param_3;
    if (param_3 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_3);
      iVar1 = (int)sVar2;
    }
  }
  else {
    iVar1 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_2);
      iVar1 = (int)sVar2;
    }
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,param_2,iVar1);
  **(undefined1 **)((longlong)this + 0x10) = 0;
  return;
}

// operator() @ 142ae1060

bool __thiscall
`UE::AssetRegistry::Private::
FilterAssets<TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FTopLevelAssetPath,`FAssetRegistryState::EnumerateAssets'::__l32::<lambda_6>_>'
::__l21::<lambda_1>::operator()(void *this,FAssetData *param_1)

{
  FName FVar1;
  longlong lVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  FVar1 = (param_1->AssetClassPath).AssetName;
  lVar2 = **(longlong **)this;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar3 = (param_1->AssetClassPath).PackageName;
  uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  if (*(int *)(lVar2 + 0x198) != *(int *)(lVar2 + 0x1c4)) {
    lVar7 = *(longlong *)(lVar2 + 0x1d0);
    if (*(longlong *)(lVar2 + 0x1d0) == 0) {
      lVar7 = lVar2 + 0x1c8;
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x1d8) - 1U &
                             (uVar5 * 0x40 + uVar4 + FVar1.Number + -0x61c88647 + (uVar5 >> 2) ^
                             uVar5)) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)(lVar2 + 400);
      do {
        lVar7 = (longlong)iVar6;
        if ((*(FName *)(lVar2 + lVar7 * 0x18) == (param_1->AssetClassPath).PackageName) &&
           (*(FName *)(lVar2 + 8 + lVar7 * 0x18) == (param_1->AssetClassPath).AssetName))
        goto LAB_142ae1127;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar7 * 0x18);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_142ae1127:
  return iVar6 == -1;
}

// operator() @ 142ae1150

bool __thiscall
`UE::AssetRegistry::Private::
FilterAssets<TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FName,`FAssetRegistryState::EnumerateAssets'::__l20::<lambda_4>_>'
::__l21::<lambda_1>::operator()(void *this,FAssetData *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  FVar1 = param_1->PackagePath;
  lVar2 = **(longlong **)this;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
    lVar5 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar5 = lVar2 + 0x88;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar4 * 0x10) == FVar1)
        goto LAB_142ae11ca;
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x50) + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_142ae11ca:
  return iVar4 == -1;
}

// operator() @ 142ae11f0

bool __thiscall
`UE::AssetRegistry::Private::
FilterAssets<TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FName,`FAssetRegistryState::EnumerateAssets'::__l14::<lambda_3>_>'
::__l21::<lambda_1>::operator()(void *this,FAssetData *param_1)

{
  FName FVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  FVar1 = param_1->PackageName;
  plVar2 = (longlong *)**(longlong **)this;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar5 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar5 = plVar2 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[9] - 1U & FVar1.Number + uVar3) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*plVar2 + (longlong)iVar4 * 0x10) == FVar1) goto LAB_142ae125b;
        iVar4 = *(int *)(*plVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_142ae125b:
  return iVar4 == -1;
}

// operator() @ 142ae1280

bool __thiscall
`UE::AssetRegistry::Private::ArrayIntersection'::__l22::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)this;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FAssetData **)(*plVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_142ae12fb;
        iVar2 = *(int *)(*plVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_142ae12fb:
  return iVar2 == -1;
}

// operator() @ 142ae2bd0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::AssetDataGather::Private::LoadCacheFiles'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> *pTVar2;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar3;
  char cVar4;
  int iVar5;
  LPCRITICAL_SECTION p_Var6;
  longlong *plVar7;
  undefined8 *puVar8;
  IMappedFileRegion *pIVar9;
  ForAnyElementType *pFVar10;
  ulonglong uVar11;
  IMappedFileHandle *pIVar12;
  TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> TVar13;
  FScriptContainerElement *pFVar14;
  FName *pFVar15;
  code *pcVar16;
  TUniquePtr<FName_[0],TDefaultDelete<FName_[0]>_> TVar17;
  TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> TVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  FString *pFVar25;
  FCachePayload *pFVar26;
  wchar_t *pwVar27;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar28;
  FMemoryMappedFile *this_00;
  longlong lVar29;
  byte bVar30;
  FMemoryMappedFile *pFVar31;
  FCachePayload local_188;
  FMemoryMappedFile *local_170;
  FMemoryMappedFile *local_168;
  FCachePayload *local_160;
  longlong local_158;
  undefined1 local_150;
  FString local_148;
  FArchiveState local_138;
  longlong *local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78;
  FCachePayload local_68;
  undefined1 local_48;
  
  this_00 = (FMemoryMappedFile *)0x0;
  bVar20 = false;
  pFVar31 = this_00;
LAB_142ae2c01:
  plVar24 = (longlong *)0x0;
  p_Var6 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
  if (p_Var6 == (LPCRITICAL_SECTION)0x0) goto LAB_142ae3554;
  EnterCriticalSection(p_Var6);
  uVar21 = **(int **)((longlong)this + 0x30) / 2;
  bVar30 = (char)**(int **)((longlong)this + 0x30) + (char)uVar21 * -2;
  if ((1 < bVar30) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= (int32)TaskType && TaskType < ETaskType::Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x1531,L""), bVar19)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  plVar7 = *(longlong **)((longlong)this + 0x28);
  if (((int)plVar7[1] == 0) ||
     ((bVar30 != 0 && (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) <= (int)(uVar21 + 1))))) {
    **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
    plVar7 = *(longlong **)((longlong)this + 0x10);
    uVar22 = 0;
    if ((int)uVar21 < (int)plVar7[1]) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar31 = (FMemoryMappedFile *)((longlong)(int)uVar21 * 0x10 + *plVar7);
    plVar7 = *(longlong **)((longlong)this + 0x20);
    uVar22 = 0;
    if ((int)uVar21 < (int)plVar7[1]) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    this_00 = (FMemoryMappedFile *)(*plVar7 + (longlong)(int)uVar21 * 0x20);
    if (*(int *)&(pFVar31->Region).Ptr == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar31->Handle).Ptr;
    }
    if (*(char *)&this_00[1].Handle.Ptr == '\0') {
      UE::AssetDataGather::Private::FMemoryMappedFile::FMemoryMappedFile(this_00,pwVar27);
      *(undefined1 *)&this_00[1].Handle.Ptr = 1;
    }
    if ((bVar30 == 1) && (*(char *)&this_00[1].Region.Ptr == '\0')) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
  }
  else {
    if (((int)plVar7[1] < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    plVar24 = *(longlong **)(*plVar7 + -8 + (longlong)(int)plVar7[1] * 8);
    *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
    if ((plVar24 == (longlong *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("DestructData != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                            ,0x1538,L""), bVar19)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  LeaveCriticalSection(p_Var6);
  if (plVar24 != (longlong *)0x0) {
    if ((char)plVar24[2] != '\0') {
      puVar8 = (undefined8 *)plVar24[1];
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      puVar8 = (undefined8 *)*plVar24;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      *(undefined1 *)(plVar24 + 2) = 0;
    }
    goto LAB_142ae2c01;
  }
  if (((this_00 == (FMemoryMappedFile *)0x0) || (pFVar31 == (FMemoryMappedFile *)0x0)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("FileData != nullptr && CacheFilename != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x154b,L""), bVar19)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (bVar30 == 1) {
    if (bVar20) {
      if ((*(char *)&this_00[1].Handle.Ptr == '\0') &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pIVar9 = (this_00->Region).Ptr;
      if (pIVar9 != (IMappedFileRegion *)0x0) {
        (**(code **)(pIVar9->_padding_ + 8))(pIVar9,0,0x7fffffffffffffff);
      }
    }
    p_Var6 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(p_Var6);
      cVar4 = *(char *)&this_00[1].Region.Ptr;
      *(undefined1 *)((longlong)&this_00[1].Region.Ptr + 1) = 1;
      pFVar10 = *(ForAnyElementType **)((longlong)this + 0x28);
      if (cVar4 != '\0') {
        local_170 = this_00;
        if (((pFVar10->Data <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 <
             pFVar10->Data + (longlong)*(int *)((longlong)&pFVar10[1].Data + 4) * 8)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar23 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar10,piVar1);
        }
        *(int *)&pFVar10[1].Data = iVar23 + 1;
        *(FMemoryMappedFile **)(pFVar10->Data + (longlong)iVar23 * 8) = local_170;
      }
      LeaveCriticalSection(p_Var6);
      return;
    }
    goto LAB_142ae3554;
  }
  local_188.PackageNames.Ptr = (FName *)0x0;
  local_188.AssetDatas.Ptr = (FDiskCachedAssetData *)0x0;
  local_188.NumAssets = 0;
  local_188.bSucceeded = false;
  if ((*(char *)&this_00[1].Handle.Ptr == '\0') &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar20)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pIVar9 = (this_00->Region).Ptr;
  if (pIVar9 != (IMappedFileRegion *)0x0) {
    if (((pIVar9->MappedPtr == (uchar *)0x0) || (pIVar9->MappedSize == 0)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("MappedPtr && MappedSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                            ,0x19,L""), bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uVar11 = pIVar9->MappedSize;
    pIVar9 = (this_00->Region).Ptr;
    if (((pIVar9->MappedPtr == (uchar *)0x0) || (pIVar9->MappedSize == 0)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("MappedPtr && MappedSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                            ,0x19,L""), bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    plVar24 = (longlong *)pIVar9->MappedPtr;
    if (7 < uVar11) {
      local_150 = 1;
      local_158 = *plVar24;
      if (local_158 == 0x29fe48b000000016) {
        pIVar12 = (pFVar31->Handle).Ptr;
        iVar5 = *(int *)&(pFVar31->Region).Ptr;
        iVar23 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar23 = 0;
        }
        FArchiveState::FArchiveState(&local_138);
        local_138._padding_ = (longlong)&___7FChecksumViewReader_Private_AssetDataGather_UE__6B_;
        local_88 = 0;
        uStack_80 = 0;
        local_90 = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_a8 = plVar24 + 1;
        local_a0 = uVar11 - 8;
        local_98 = uVar11;
        pFVar25 = ::FString::ConstructFromPtrSize(&local_148,(wchar_t *)pIVar12,iVar23);
        if (&local_78 != pFVar25) {
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          local_78.Data.AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
          (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = (pFVar25->Data).ArrayNum;
          local_78.Data.ArrayMax = (pFVar25->Data).ArrayMax;
          (pFVar25->Data).ArrayNum = 0;
          (pFVar25->Data).ArrayMax = 0;
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        (**(code **)(local_138._padding_ + 200))(&local_138,1);
        pFVar26 = LoadCacheFiles'::__l2::<lambda_1>::operator()
                            (*(void **)this,&local_68,(FArchive *)&local_138);
        TVar17.Ptr = local_188.PackageNames.Ptr;
        local_160 = pFVar26;
        if (&local_188 != pFVar26) {
          local_188.PackageNames.Ptr = (pFVar26->PackageNames).Ptr;
          (pFVar26->PackageNames).Ptr = (FName *)0x0;
          operator_delete__(TVar17.Ptr);
        }
        TVar18.Ptr = local_188.AssetDatas.Ptr;
        pTVar2 = &pFVar26->AssetDatas;
        TVar13.Ptr = local_188.AssetDatas.Ptr;
        if (&local_188.AssetDatas != pTVar2) {
          TVar13.Ptr = pTVar2->Ptr;
          pTVar2->Ptr = (FDiskCachedAssetData *)0x0;
          if (local_188.AssetDatas.Ptr != (FDiskCachedAssetData *)0x0) {
            lVar29 = *(longlong *)&local_188.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
            if (lVar29 != 0) {
              pTVar28 = &local_188.AssetDatas.Ptr[lVar29].AssetDataList;
              local_188.AssetDatas.Ptr = TVar13.Ptr;
              do {
                pTVar3 = pTVar28 + -0x11;
                lVar29 = lVar29 + -1;
                FPackageDependencyData::~FPackageDependencyData
                          ((FPackageDependencyData *)(pTVar28 + -0x10));
                DestructItems<FAssetData,int>
                          ((FAssetData *)(pTVar3->AllocatorInstance).Data,
                           *(int *)((longlong)(pTVar28 + -0x11) + 8));
                pFVar14 = (pTVar3->AllocatorInstance).Data;
                if (pFVar14 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar14);
                }
                pFVar26 = local_160;
                pTVar28 = pTVar3;
                TVar13.Ptr = local_188.AssetDatas.Ptr;
              } while (lVar29 != 0);
            }
            local_188.AssetDatas.Ptr = TVar13.Ptr;
            operator_delete__(&TVar18.Ptr[-1].DependencyData.bHasPackageData,
                              *(longlong *)&TVar18.Ptr[-1].DependencyData.bHasPackageData * 0x110 +
                              8);
            TVar13.Ptr = local_188.AssetDatas.Ptr;
          }
        }
        local_188.AssetDatas.Ptr = TVar13.Ptr;
        local_188.NumAssets = pFVar26->NumAssets;
        bVar20 = pFVar26->bSucceeded;
        local_188.bSucceeded = bVar20;
        UE::AssetDataGather::Private::FCachePayload::~FCachePayload(&local_68);
        if ((3 < (byte)LogAssetRegistry._0_1_) && (bVar20 != false)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        if ((2 < (byte)LogAssetRegistry._0_1_) && (bVar20 == false)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        FArchive::~FArchive((FArchive *)&local_138);
      }
LAB_142ae3365:
      plVar24 = *(longlong **)((longlong)this + 0x18);
      uVar22 = 0;
      if ((int)uVar21 < (int)plVar24[1]) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar26 = (FCachePayload *)(*plVar24 + (longlong)(int)uVar21 * 0x18);
      if (pFVar26 != &local_188) {
        pFVar15 = (pFVar26->PackageNames).Ptr;
        (pFVar26->PackageNames).Ptr = local_188.PackageNames.Ptr;
        local_188.PackageNames.Ptr = (FName *)0x0;
        operator_delete__(pFVar15);
      }
      TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_>::operator=
                (&pFVar26->AssetDatas,&local_188.AssetDatas);
      pFVar26->NumAssets = local_188.NumAssets;
      pFVar26->bSucceeded = local_188.bSucceeded;
      p_Var6 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
      if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(p_Var6);
        cVar4 = *(char *)((longlong)&this_00[1].Region.Ptr + 1);
        *(undefined1 *)&this_00[1].Region.Ptr = 1;
        pFVar10 = *(ForAnyElementType **)((longlong)this + 0x28);
        if (cVar4 != '\0') {
          local_168 = this_00;
          if (((pFVar10->Data <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar10->Data + (longlong)*(int *)((longlong)&pFVar10[1].Data + 4) * 8)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar23 = *(int *)&pFVar10[1].Data;
          piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
          if (iVar23 == *piVar1) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar10,piVar1);
          }
          *(int *)&pFVar10[1].Data = iVar23 + 1;
          *(FMemoryMappedFile **)(pFVar10->Data + (longlong)iVar23 * 8) = local_168;
        }
        LeaveCriticalSection(p_Var6);
        TVar13.Ptr = local_188.AssetDatas.Ptr;
        if (local_188.AssetDatas.Ptr != (FDiskCachedAssetData *)0x0) {
          lVar29 = *(longlong *)&local_188.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
          if (lVar29 != 0) {
            pTVar28 = &local_188.AssetDatas.Ptr[lVar29].AssetDataList;
            do {
              pTVar3 = pTVar28 + -0x11;
              lVar29 = lVar29 + -1;
              FPackageDependencyData::~FPackageDependencyData
                        ((FPackageDependencyData *)(pTVar28 + -0x10));
              DestructItems<FAssetData,int>
                        ((FAssetData *)(pTVar3->AllocatorInstance).Data,
                         *(int *)((longlong)(pTVar28 + -0x11) + 8));
              pFVar14 = (pTVar3->AllocatorInstance).Data;
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar14);
              }
              pTVar28 = pTVar3;
            } while (lVar29 != 0);
          }
          operator_delete__(&TVar13.Ptr[-1].DependencyData.bHasPackageData,
                            *(longlong *)&TVar13.Ptr[-1].DependencyData.bHasPackageData * 0x110 + 8)
          ;
        }
        operator_delete__(local_188.PackageNames.Ptr);
        return;
      }
LAB_142ae3554:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  local_48 = 0;
  goto LAB_142ae3365;
}

// operator() @ 142ae4cb0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::AssetDataGather::Private::LoadCacheFiles'::__l18::<lambda_4>::operator()
          (void *this,int param_1)

{
  TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> *pTVar1;
  bool *pbVar2;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar3;
  ulong64 *puVar4;
  longlong *plVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FString *pFVar11;
  IFileManager *pIVar12;
  FArchive *this_00;
  ulonglong uVar13;
  FCachePayload *pFVar14;
  wchar_t *pwVar15;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar16;
  ulong64 uVar17;
  longlong lVar18;
  ulong64 local_res8;
  FCachePayload local_118;
  FChecksumArchiveBase local_f8;
  FCachePayload local_48;
  
  pFVar11 = TArrayView<FString_const_,int>::operator[]
                      (*(TArrayView<FString_const_,int> **)((longlong)this + 8),param_1);
  local_118.PackageNames.Ptr = (FName *)0x0;
  local_118.AssetDatas.Ptr = (FDiskCachedAssetData *)0x0;
  local_118.NumAssets = 0;
  local_118.bSucceeded = false;
  pIVar12 = IFileManager::Get();
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  this_00 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,pwVar15,2);
  if (((this_00 != (FArchive *)0x0) && ((this_00->field_0x29 & 2) == 0)) &&
     (uVar13 = (**(code **)(*(longlong *)this_00 + 0x30))(this_00), 8 < uVar13)) {
    local_res8 = 0;
    puVar4 = (ulong64 *)**(longlong **)&this_00->field_0x8;
    if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar4 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
      }
    }
    else {
      local_res8 = *puVar4;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    }
    if (local_res8 == 0x29fe48b000000016) {
      FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_f8,this_00);
      local_f8._padding_ = (longlong)&___7FChecksumArchiveBase_Private_AssetDataGather_UE__6B_;
      local_f8.Block.Begin = (uchar *)0x0;
      uVar17 = (ulonglong)((byte)~(byte)local_f8._padding_ & 1) * 0x400000;
      local_f8.Block.Cursor = (uchar *)0x0;
      local_f8.Block.End = (uchar *)0x0;
      if ((ulonglong)((byte)~(byte)local_f8._padding_ & 1) != 0) {
        FMemory::Free((void *)0x0);
        local_f8.Block.Begin = FMemory::Malloc(uVar17,0);
      }
      local_f8.Block.End = local_f8.Block.Begin + uVar17;
      local_f8._padding_ = (longlong)&___7FChecksumArchiveReader_Private_AssetDataGather_UE__6B_;
      local_f8.Block.Cursor = local_f8.Block.Begin;
      pFVar14 = LoadCacheFiles'::__l2::<lambda_1>::operator()
                          (*(void **)this,&local_48,(FArchive *)&local_f8);
      if (&local_118 != pFVar14) {
        local_118.PackageNames.Ptr = (pFVar14->PackageNames).Ptr;
        (pFVar14->PackageNames).Ptr = (FName *)0x0;
        operator_delete__((void *)0x0);
      }
      pTVar1 = &pFVar14->AssetDatas;
      if (&local_118.AssetDatas != pTVar1) {
        local_118.AssetDatas.Ptr = pTVar1->Ptr;
        pTVar1->Ptr = (FDiskCachedAssetData *)0x0;
      }
      local_118.NumAssets = pFVar14->NumAssets;
      bVar9 = pFVar14->bSucceeded;
      local_118.bSucceeded = bVar9;
      UE::AssetDataGather::Private::FCachePayload::~FCachePayload(&local_48);
      if ((3 < (byte)LogAssetRegistry._0_1_) && (bVar9 != false)) {
        (**(code **)(*(longlong *)this_00 + 0x30))(this_00);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      if ((2 < (byte)LogAssetRegistry._0_1_) && (bVar9 == false)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      local_f8._padding_ = (longlong)&___7FChecksumArchiveBase_Private_AssetDataGather_UE__6B_;
      if ((((byte)local_f8._padding_ & 1) == 0) && (local_f8.Block.Cursor != local_f8.Block.Begin))
      {
        UE::AssetDataGather::Private::FChecksumArchiveBase::SaveBlock(&local_f8);
      }
      FMemory::Free(local_f8.Block.Begin);
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_f8);
    }
  }
  plVar5 = *(longlong **)((longlong)this + 0x10);
  uVar10 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = (FCachePayload *)(*plVar5 + (longlong)param_1 * 0x18);
  if (pFVar14 != &local_118) {
    pFVar6 = (pFVar14->PackageNames).Ptr;
    (pFVar14->PackageNames).Ptr = local_118.PackageNames.Ptr;
    local_118.PackageNames.Ptr = (FName *)0x0;
    operator_delete__(pFVar6);
  }
  TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_>::operator=
            (&pFVar14->AssetDatas,&local_118.AssetDatas);
  pFVar14->NumAssets = local_118.NumAssets;
  pFVar14->bSucceeded = local_118.bSucceeded;
  if (this_00 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)this_00)(this_00,1);
  }
  if (local_118.AssetDatas.Ptr != (FDiskCachedAssetData *)0x0) {
    lVar18 = *(longlong *)&local_118.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
    pbVar2 = &local_118.AssetDatas.Ptr[-1].DependencyData.bHasPackageData;
    if (lVar18 != 0) {
      pTVar16 = &local_118.AssetDatas.Ptr[lVar18].AssetDataList;
      do {
        pTVar3 = pTVar16 + -0x11;
        lVar18 = lVar18 + -1;
        FPackageDependencyData::~FPackageDependencyData((FPackageDependencyData *)(pTVar16 + -0x10))
        ;
        DestructItems<FAssetData,int>
                  ((FAssetData *)(pTVar3->AllocatorInstance).Data,
                   *(int *)((longlong)(pTVar16 + -0x11) + 8));
        pFVar7 = (pTVar3->AllocatorInstance).Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar16 = pTVar3;
      } while (lVar18 != 0);
    }
    operator_delete__(pbVar2,*(longlong *)pbVar2 * 0x110 + 8);
  }
  operator_delete__(local_118.PackageNames.Ptr);
  return;
}

// ArrayIntersection @ 142aeb0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::AssetRegistry::Private::ArrayIntersection
          (TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<TArrayView<FAssetData_const_*_const,int>_const_,int> *param_2,int param_3)

{
  int *piVar1;
  FAssetData **ppFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FAssetData **ppFVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ForElementType<unsigned_int> FVar18;
  TArrayView<FAssetData_const_*_const,int> *pTVar19;
  TArrayView<FAssetData_const_*_const,int> *pTVar20;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  FAssetData *local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  int local_184;
  TPairInitializer<FAssetData_const_*_const_&,bool_&&> local_180;
  FAssetData *local_170;
  <lambda_1> local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  bool **local_110;
  undefined1 *local_108;
  FAssetData **local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar9 = param_1->ArrayNum;
  pFVar11 = (FScriptContainerElement *)0x0;
  if (param_3 <= (int)uVar9) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    if (param_3 == 0) goto LAB_142aeb90c;
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)param_3);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,param_3);
    if ((uint)param_3 < 4) {
      uVar9 = 1;
    }
    else {
      uVar16 = (ulonglong)(((uint)param_3 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_50 != 0) && ((int)uVar9 <= (int)local_50)) goto LAB_142aeb90c;
    local_50 = uVar9;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar9 != 0) {
      uVar13 = uVar9;
      if (uVar9 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar13 = 0;
          goto LAB_142aeb721;
        }
      }
      else {
LAB_142aeb721:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
      }
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
        pFVar15 = pFVar11;
        do {
          FVar10.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_58.Data;
          }
          uVar7 = (longlong)(int)uVar9 - 1U & (ulonglong)pFVar15;
          pFVar15 = pFVar15 + 1;
          *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    if (local_50 != 0) {
      pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_1a8 = 0;
      uStack_1a4 = 1;
      uStack_194 = 0;
      uStack_190 = 0;
      if (local_70 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_78;
        }
        uVar9 = *(uint *)FVar18;
        pFVar15 = pFVar11;
        while (uVar9 == 0) {
          uStack_190 = (int)pFVar15 + 0x20;
          pFVar15 = (FScriptContainerElement *)(ulonglong)uStack_190;
          iVar6 = (int)pFVar11;
          local_1a8 = iVar6 + 1;
          pFVar11 = (FScriptContainerElement *)(ulonglong)local_1a8;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a8)
          goto LAB_142aeb83a;
          uVar9 = ((uint *)((longlong)FVar18 + 4))[iVar6];
        }
        uStack_1a4 = -uVar9 & uVar9;
        uVar16 = (ulonglong)uStack_1a4 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uStack_194 = (uStack_190 - 1) + (int)lVar3;
        pFVar11 = (FScriptContainerElement *)(ulonglong)uStack_194;
        if ((int)local_70 < (int)uStack_194) {
LAB_142aeb83a:
          pFVar11 = (FScriptContainerElement *)(ulonglong)local_70;
          uStack_194 = local_70;
        }
      }
      local_198 = 0xffffffff;
      local_138 = (longlong *)local_98;
      local_130._padding_ = CONCAT44(uStack_1a4,local_1a8);
      local_130.CurrentBitIndex = uStack_194;
      local_130.UnvisitedBitMask = 0xffffffff;
      local_130._28_4_ = uStack_18c;
      local_130.BaseBitIndex = uStack_190;
      local_130.Array = pTStack_1a0;
      if ((int)pFVar11 < (int)local_70) {
        do {
          puVar17 = (ulonglong *)((longlong)(int)pFVar11 * 0x10 + *local_138);
          uVar9 = ((uint)(*puVar17 >> 0x14) & 0xffff ^ (uint)(*puVar17 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_50 - 1;
          *(uint *)((longlong)puVar17 + 0xc) = uVar9;
          FVar10.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_58.Data;
          }
          uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
          *(int *)(FVar10.Data + uVar16 * 4) = (int)pFVar11;
          local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
          pFVar11 = (FScriptContainerElement *)(ulonglong)(uint)local_130.CurrentBitIndex;
        } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
      }
    }
LAB_142aeb90c:
    pTVar19 = param_2->DataPtr;
    pTVar20 = pTVar19 + param_2->ArrayNum;
    for (; pTVar19 != pTVar20; pTVar19 = pTVar19 + 1) {
      ppFVar14 = pTVar19->DataPtr;
      ppFVar2 = ppFVar14 + (int)*(undefined8 *)&pTVar19->ArrayNum;
      for (; ppFVar14 != ppFVar2; ppFVar14 = ppFVar14 + 1) {
        local_170 = *ppFVar14;
        TSet<FAssetData_const_*,DefaultKeyFuncs<FAssetData_const_*,0>,FDefaultSetAllocator>::
        Emplace<FAssetData_const_*_const_&>
                  ((TSet<FAssetData_const_*,DefaultKeyFuncs<FAssetData_const_*,0>,FDefaultSetAllocator>
                    *)local_98,(FAssetData **)((longlong)&local_180.Key + 4),(bool *)&local_170);
      }
    }
    local_168.Exists =
         (TSet<FAssetData_const_*,DefaultKeyFuncs<FAssetData_const_*,0>,FDefaultSetAllocator> *)
         local_98;
    TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_UE::AssetRegistry::Private::ArrayIntersection_::__l22::<lambda_1>_>
              (param_1,&local_168,Default);
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<FAssetData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FAssetData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FAssetData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return;
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (uVar9 == 0) goto LAB_142aeb3ce;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar9);
  uVar13 = 1;
  if (3 < uVar9) {
    uVar16 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_188 = (undefined4)lVar3;
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar13 <= (int)local_a0)) goto LAB_142aeb3ce;
  local_a0 = uVar13;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar13 != 0) {
    uVar9 = uVar13;
    if (uVar13 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_142aeb1e4;
      }
    }
    else {
LAB_142aeb1e4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar9,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      pFVar15 = pFVar11;
      do {
        FVar10.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_a8.Data;
        }
        uVar7 = (longlong)(int)uVar13 - 1U & (ulonglong)pFVar15;
        pFVar15 = pFVar15 + 1;
        *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_1c8 = 0;
    uStack_1c4 = 1;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    pFVar15 = pFVar11;
    if (local_c0 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_c8;
      }
      uVar9 = *(uint *)FVar18;
      pFVar12 = pFVar11;
      while (uVar9 == 0) {
        uStack_1b0 = (int)pFVar12 + 0x20;
        pFVar12 = (FScriptContainerElement *)(ulonglong)uStack_1b0;
        iVar6 = (int)pFVar15;
        local_1c8 = iVar6 + 1;
        pFVar15 = (FScriptContainerElement *)(ulonglong)local_1c8;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_142aeb302;
        uVar9 = ((uint *)((longlong)FVar18 + 4))[iVar6];
      }
      uStack_1c4 = -uVar9 & uVar9;
      uVar16 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_184 = (int)lVar3;
      uStack_1b4 = local_184 + -1 + uStack_1b0;
      pFVar15 = (FScriptContainerElement *)(ulonglong)uStack_1b4;
      if ((int)local_c0 < (int)uStack_1b4) {
LAB_142aeb302:
        pFVar15 = (FScriptContainerElement *)(ulonglong)local_c0;
        uStack_1b4 = local_c0;
      }
    }
    local_1b8 = 0xffffffff;
    local_160 = (longlong *)local_e8;
    local_158._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_158.CurrentBitIndex = uStack_1b4;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_1ac;
    local_158.BaseBitIndex = uStack_1b0;
    local_158.Array = pTStack_1c0;
    if ((int)pFVar15 < (int)local_c0) {
      do {
        iVar6 = (int)pFVar15;
        lVar3 = *local_160 + (longlong)iVar6 * 0x18;
        uVar16 = *(ulonglong *)(*local_160 + (longlong)iVar6 * 0x18);
        uVar9 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_a0 - 1;
        *(uint *)(lVar3 + 0x14) = uVar9;
        FVar10.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_a8.Data;
        }
        uVar16 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
        *(int *)(FVar10.Data + uVar16 * 4) = iVar6;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        pFVar15 = (FScriptContainerElement *)(ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
LAB_142aeb3ce:
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar6 = param_1->ArrayNum;
  pFVar15 = pFVar12 + (longlong)iVar6 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar6) {
      local_1d8 = 0;
      `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d8);
    }
    if (pFVar12 == pFVar15) break;
    local_180.Value = *(bool **)pFVar12;
    local_110 = &local_180.Value;
    local_1d7[0] = 0;
    local_108 = local_1d7;
    TSet<TTuple<FAssetData_const_*,bool>,TDefaultMapHashableKeyFuncs<FAssetData_const_*,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FAssetData_const_*_const_&,bool_&&>_>
              ((TSet<TTuple<FAssetData_const_*,bool>,TDefaultMapHashableKeyFuncs<FAssetData_const_*,bool,0>,FDefaultSetAllocator>
                *)local_e8,&local_180,(bool *)&local_110);
    pFVar12 = pFVar12 + 8;
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pTVar19 = param_2->DataPtr;
  pTVar20 = pTVar19 + param_2->ArrayNum;
  pFVar15 = (FScriptContainerElement *)local_e8._0_8_;
  FVar10.Data = local_a8.Data;
  do {
    if (pTVar19 == pTVar20) {
      local_a0 = 0;
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FAssetData_const_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FAssetData_const_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FAssetData_const_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return;
    }
    ppFVar14 = pTVar19->DataPtr;
    uStack_f8 = *(undefined8 *)&pTVar19->ArrayNum;
    ppFVar2 = ppFVar14 + (int)*(undefined8 *)&pTVar19->ArrayNum;
    local_100 = ppFVar14;
    for (; ppFVar14 != ppFVar2; ppFVar14 = ppFVar14 + 1) {
      local_1d0 = *ppFVar14;
      uVar9 = ((uint)((ulonglong)local_1d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1d0 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (local_e8._8_4_ != local_b4) {
        pFVar12 = local_b0;
        if (FVar10.Data != (FScriptContainerElement *)0x0) {
          pFVar12 = FVar10.Data;
        }
        iVar6 = *(int *)(pFVar12 + (ulonglong)(local_a0 - 1 & (uVar9 >> 0x10 ^ uVar9)) * 4);
        while (iVar6 != -1) {
          pFVar12 = pFVar15 + (longlong)iVar6 * 0x18;
          if (*(FAssetData **)(pFVar15 + (longlong)iVar6 * 0x18) == local_1d0) {
            pFVar8 = pFVar12 + 8;
            if (pFVar12 == (FScriptContainerElement *)0x0) {
              pFVar8 = pFVar11;
            }
            if ((pFVar8 != (FScriptContainerElement *)0x0) &&
               (*pFVar8 == (FScriptContainerElement)0x0)) {
              *pFVar8 = (FScriptContainerElement)0x1;
              pFVar15 = (param_1->AllocatorInstance).Data;
              if ((pFVar15 <= (FScriptContainerElement *)&local_1d0) &&
                 (((FScriptContainerElement *)&local_1d0 < pFVar15 + (longlong)*piVar1 * 8 &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar6 = param_1->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar6 + 1;
              *(FAssetData **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_1d0;
              pFVar15 = (FScriptContainerElement *)local_e8._0_8_;
              FVar10.Data = local_a8.Data;
            }
            break;
          }
          iVar6 = *(int *)(pFVar12 + 0x10);
        }
      }
    }
    pTVar19 = pTVar19 + 1;
  } while( true );
}

// AssetDataMatchesTag @ 142aeb9f0

bool __cdecl
UE::AssetRegistry::Private::AssetDataMatchesTag
          (FAssetData *param_1,FName param_2,TOptional<FString> *param_3)

{
  FAssetDataTagMapSharedView *this;
  int iVar1;
  bool bVar2;
  FValueId *pFVar3;
  FAssetTagValueRef_u_0 local_res8;
  TStringView<wchar_t> local_18;
  
  if (param_1 == (FAssetData *)0x0) {
    return false;
  }
  this = &param_1->TagsAndValues;
  if (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) {
    bVar2 = FAssetDataTagMapSharedView::Contains(this,param_2);
    return bVar2;
  }
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose == (FAssetDataTagMap *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                      (this->field0_0x0).Loose,param_2);
    }
  }
  else {
    pFVar3 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this,param_2);
    if (pFVar3 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar3;
    }
  }
  local_18.DataPtr = (wchar_t *)(param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
  iVar1 = *(int *)((longlong)&param_3->field0_0x0 + 8);
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = FAssetTagValueRef::Equals((FAssetTagValueRef *)&local_res8.Fixed,&local_18);
  return bVar2;
}

// AssignStringWithoutShrinking @ 142aebd10

void __cdecl
UE::AssetDataGather::Private::AssignStringWithoutShrinking
          (FString *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = param_2->Size;
  piVar1 = &(param_1->Data).ArrayNum;
  if (uVar2 == 0) {
    *piVar1 = 0;
    if ((param_1->Data).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)param_1,0,&(param_1->Data).ArrayMax);
    }
  }
  else {
    iVar5 = *piVar1;
    uVar6 = uVar2 + 1;
    if (iVar5 < (int)uVar6) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6 - iVar5,(ForAnyElementType *)param_1,piVar1,&(param_1->Data).ArrayMax);
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar5) {
        uVar7 = iVar5 - uVar6;
        if ((int)(uVar7 | uVar6) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar7 != 0) {
          _Dst = (param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar6 * 2;
          iVar5 = (*piVar1 - uVar7) - uVar6;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 2,(longlong)iVar5 * 2);
          }
          *piVar1 = *piVar1 - uVar7;
        }
      }
    }
    memcpy((param_1->Data).AllocatorInstance.Data,param_2->DataPtr,(longlong)(int)uVar2 * 2);
    uVar6 = 0;
    if ((int)uVar2 < *piVar1) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 2) = 0;
  }
  return;
}

// DecideIntersectionMethod @ 142aee3b0

bool __cdecl
UE::AssetRegistry::Private::DecideIntersectionMethod(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1;
  lVar2 = (longlong)param_2;
  lVar1 = lVar3;
  if (param_2 <= param_1) {
    lVar2 = lVar3;
    lVar1 = (longlong)param_2;
  }
  return (ulonglong)(param_3 * lVar3) < (ulonglong)(lVar1 * 3 + lVar2);
}

// DoesPathContainInvalidCharacters @ 142aef850

bool __cdecl
UE::AssetDataGather::Private::DoesPathContainInvalidCharacters
          (EGatherableFileType param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t wVar5;
  int iVar6;
  undefined *puVar7;
  wchar_t *pwVar8;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_2->Size == 0) {
    return true;
  }
  if (param_1 == VerseFile) {
    puVar7 = &u______<>________;
    wVar5 = L'\\';
    do {
      if (wVar5 != L'.') {
        local_28.DataPtr = param_2->DataPtr;
        local_28.Size = param_2->Size;
        local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
        iVar6 = String::FindFirstChar(&local_28,wVar5,CaseSensitive);
        if (iVar6 != -1) {
          return true;
        }
      }
      wVar5 = *(wchar_t *)(puVar7 + 2);
      puVar7 = puVar7 + 2;
    } while (wVar5 != L'\0');
  }
  else {
    if (param_1 != VerseModule) {
      local_18.DataPtr = param_2->DataPtr;
      local_18.Size = param_2->Size;
      local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
      bVar3 = FPackageName::DoesPackageNameContainInvalidCharacters(&local_18,(EErrorCode *)0x0);
      return bVar3;
    }
    if ((param_2->Size < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pwVar8 = param_2->DataPtr;
    iVar6 = iswalpha(*pwVar8);
    if (iVar6 == 0) {
      if ((param_2->Size < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pwVar8 = param_2->DataPtr;
      if (*pwVar8 != L'_') {
        return true;
      }
    }
    pwVar1 = pwVar8 + param_2->Size;
    for (; pwVar8 != pwVar1; pwVar8 = pwVar8 + 1) {
      iVar6 = iswalnum(*pwVar8);
      if ((iVar6 == 0) && (*pwVar8 != L'_')) {
        return true;
      }
    }
  }
  return false;
}

// FindOrAddIsReparsePointRecursive @ 142af7620

bool __cdecl
UE::AssetDataGather::Private::FindOrAddIsReparsePointRecursive
          (TStringView<wchar_t> *param_1,FCachedVolumeInfo *param_2,bool *param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FCachedDirScanDir *pFVar8;
  FPlatformFileManager *this;
  IPlatformFile *pIVar9;
  FString *pFVar10;
  TOptional<bool> *pTVar11;
  bool local_res8 [8];
  undefined1 local_98;
  TOptional<bool> local_97 [7];
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = param_1->Size;
  *param_3 = false;
  if (iVar1 == 0) {
    return false;
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar8 = FCachedVolumeInfo::FindOrAddDir(param_2,&local_68,param_3);
  if ((pFVar8->bIsInsideReparsePoint).bIsSet == false) {
    if ((pFVar8->bIsReparsePoint).bIsSet == false) {
      this = FPlatformFileManager::Get();
      pIVar9 = FPlatformFileManager::GetPlatformFile(this);
      cVar4 = (**(code **)((longlong)*pIVar9 + 0xd0))(pIVar9,param_1->DataPtr);
      if ((TOptional<bool> *)&local_98 != &pFVar8->bIsReparsePoint) {
        (pFVar8->bIsReparsePoint).TypedValue = cVar4 == '\x01';
        (pFVar8->bIsReparsePoint).bIsSet = true;
      }
    }
    if (((pFVar8->bIsReparsePoint).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((pFVar8->bIsReparsePoint).TypedValue != false) {
      pTVar11 = &pFVar8->bIsInsideReparsePoint;
      if (local_97 != pTVar11) {
        pTVar11->TypedValue = true;
        pTVar11->bIsSet = true;
      }
      return true;
    }
    local_res8[0] = false;
    ::FString::FString(&local_78,param_1->DataPtr);
    pFVar10 = FPaths::GetPath(&local_48,&local_78);
    local_88 = (pFVar10->Data).AllocatorInstance.Data;
    iVar1 = (pFVar10->Data).ArrayNum;
    iStack_80 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_80 = 0;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_88;
    bVar5 = FindOrAddIsReparsePointRecursive(&local_58,param_2,local_res8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_res8[0] != false) {
      local_38.DataPtr = param_1->DataPtr;
      local_38.Size = param_1->Size;
      local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
      uVar2 = *(undefined8 *)&param_1->Size;
      *param_3 = true;
      local_28 = local_38.DataPtr;
      uStack_20 = local_38._8_8_;
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>((int)uVar2,local_38.DataPtr);
      pFVar8 = TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
               ::FindByHash<TStringView<wchar_t>_>
                         ((TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                           *)param_2,uVar7,&local_38);
    }
    if ((TOptional<bool> *)&local_97[0].bIsSet != &pFVar8->bIsInsideReparsePoint) {
      (pFVar8->bIsInsideReparsePoint).TypedValue = bVar5;
      (pFVar8->bIsInsideReparsePoint).bIsSet = true;
    }
  }
  if (((pFVar8->bIsInsideReparsePoint).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  return (pFVar8->bIsInsideReparsePoint).TypedValue;
}

// GetEditorGameScanModeFromConfig @ 142afe7f0

EEditorGameScanMode __cdecl UE::AssetDataGather::Private::GetEditorGameScanModeFromConfig(void)

{
  return None;
}

// IsFilterValid @ 142b045c0

bool __cdecl UE::AssetRegistry::Utils::IsFilterValid(FARCompiledFilter *param_1)

{
  longlong lVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  bool bVar9;
  undefined1 *puVar10;
  FSoftObjectPath local_38;
  
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  if (*(int *)&(param_1->PackageNames).Elements.field_0x8 !=
      *(int *)&(param_1->PackageNames).Elements.field_0x34) {
    FVar8 = (param_1->PackageNames).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(param_1->PackageNames).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((param_1->PackageNames).HashSize - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(param_1->PackageNames).Elements;
      do {
        bVar9 = false;
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x10) == 0) goto LAB_142b048bd;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  if (*(int *)&(param_1->PackagePaths).Elements.field_0x8 !=
      *(int *)&(param_1->PackagePaths).Elements.field_0x34) {
    FVar8 = (param_1->PackagePaths).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(param_1->PackagePaths).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((param_1->PackagePaths).HashSize - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(param_1->PackagePaths).Elements;
      do {
        bVar9 = false;
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x10) == 0) goto LAB_142b048bd;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  FVar3 = local_38.AssetPath.PackageName;
  uVar5 = ::GetTypeHash(local_38.AssetPath.PackageName.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  uVar5 = uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  if (1 < local_38.SubPathString.Data.ArrayNum) {
    iVar6 = local_38.SubPathString.Data.ArrayNum + -1;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar6,(uchar *)local_38.SubPathString.Data.AllocatorInstance.Data);
    uVar5 = uVar5 ^ uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  bVar9 = true;
  iVar6 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
          FindIndexByHash<FSoftObjectPath>(&param_1->SoftObjectPaths,uVar5,&local_38);
  if (iVar6 == -1) {
    uVar4 = ::GetTypeHash((FNameEntryId)0x0);
    uVar5 = ::GetTypeHash((FNameEntryId)0x0);
    if (*(int *)&(param_1->ClassPaths).Elements.field_0x8 !=
        *(int *)&(param_1->ClassPaths).Elements.field_0x34) {
      FVar8 = (param_1->ClassPaths).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(param_1->ClassPaths).Hash;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)
                      ((param_1->ClassPaths).HashSize - 1U &
                      (uVar5 * 0x40 + uVar4 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5)) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(param_1->ClassPaths).Elements;
        do {
          lVar7 = (longlong)iVar6;
          if ((*(longlong *)(lVar1 + lVar7 * 0x18) == 0) &&
             (*(longlong *)(lVar1 + 8 + lVar7 * 0x18) == 0)) {
            bVar9 = true;
            if (iVar6 != -1) goto LAB_142b048bd;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
        } while (iVar6 != -1);
      }
    }
    uVar4 = ::GetTypeHash((FNameEntryId)0x0);
    if (*(int *)&(param_1->TagsAndValues).field_0x8 != *(int *)&(param_1->TagsAndValues).field_0x34)
    {
      puVar10 = *(undefined1 **)&(param_1->TagsAndValues).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(param_1->TagsAndValues).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(param_1->TagsAndValues).field_0x48 - 1U & uVar4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&param_1->TagsAndValues) == 0) {
            bVar9 = true;
            if (iVar6 != -1) goto LAB_142b048bd;
            goto LAB_142b048b8;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&param_1->TagsAndValues);
        } while (iVar6 != -1);
        bVar2 = false;
        goto LAB_142b048c5;
      }
    }
LAB_142b048b8:
    bVar2 = false;
  }
  else {
LAB_142b048bd:
    bVar2 = true;
    if (!bVar9) {
      return false;
    }
  }
LAB_142b048c5:
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return !bVar2;
}

// IsVerseFile @ 142b05ae0

bool __cdecl UE::AssetDataGather::Private::IsVerseFile(EGatherableFileType param_1)

{
  return param_1 == VerseModule || param_1 == VerseFile;
}

// LexFromString @ 142b06400

/* WARNING: Enum "EFeatureEnabledReadWrite": Some values do not have unique names */

void __cdecl
UE::AssetDataGather::Private::LexFromString
          (EFeatureEnabledReadWrite *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  uint local_res10 [2];
  undefined4 uStack_1c;
  
  pwVar6 = param_2->DataPtr;
  iVar4 = 0;
  pwVar1 = pwVar6 + param_2->Size;
  while ((pwVar6 != pwVar1 && (iVar2 = iswspace(*pwVar6), iVar2 != 0))) {
    iVar4 = iVar4 + 1;
    pwVar6 = pwVar6 + 1;
  }
  pwVar1 = param_2->DataPtr;
  iVar2 = param_2->Size - iVar4;
  if (iVar2 != 0) {
    lVar5 = (longlong)iVar2;
    do {
      iVar3 = iswspace((pwVar1 + iVar4)[lVar5 + -1]);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  param_2->DataPtr = pwVar1 + iVar4;
  *(ulonglong *)&param_2->Size = CONCAT44(uStack_1c,iVar2);
  if (((param_2->Size == 0x13) &&
      (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"NeverWriteNeverRead",0x13),
      iVar4 == 0)) ||
     ((param_2->Size == 5 &&
      (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"Never",5), iVar4 == 0)))) {
LAB_142b066dc:
    *param_1 = NeverRead;
  }
  else {
    if ((param_2->Size == 0x15) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"NeverWriteDefaultRead",0x15),
       iVar4 == 0)) {
      *param_1 = DefaultRead;
      return;
    }
    if ((param_2->Size == 0x14) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"NeverWriteAlwaysRead",0x14),
       iVar4 == 0)) {
      *param_1 = AlwaysRead;
      return;
    }
    if ((param_2->Size == 0x15) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"DefaultWriteNeverRead",0x15),
       iVar4 == 0)) {
      *param_1 = DefaultWrite;
      return;
    }
    if (((param_2->Size != 0x17) ||
        (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"DefaultWriteDefaultRead",0x17)
        , iVar4 != 0)) &&
       ((param_2->Size != 7 ||
        (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"Default",7), iVar4 != 0)))) {
      if ((param_2->Size == 0x16) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"DefaultWriteAlwaysRead",0x16)
         , iVar4 == 0)) {
        *param_1 = DefaultWriteAlwaysRead;
        return;
      }
      if ((param_2->Size == 0x14) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"AlwaysWriteNeverRead",0x14),
         iVar4 == 0)) {
        *param_1 = AlwaysWrite;
        return;
      }
      if (((param_2->Size == 0x16) &&
          (iVar4 = FGenericPlatformStricmp::Strnicmp
                             (param_2->DataPtr,L"AlwaysWriteDefaultRead",0x16), iVar4 == 0)) ||
         ((param_2->Size == 0xb &&
          (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"AlwaysWrite",0xb),
          iVar4 == 0)))) {
        *param_1 = AlwaysWriteDefaultRead;
        return;
      }
      if ((param_2->Size == 0x15) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"AlwaysWriteAlwaysRead",0x15),
         iVar4 == 0)) {
        *param_1 = AlwaysWriteAlwaysRead;
        return;
      }
      if (((((param_2->Size == 5) &&
            (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"false",5), iVar4 == 0)) ||
           ((param_2->Size == 1 &&
            (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"f",1), iVar4 == 0)))) ||
          ((param_2->Size == 3 &&
           (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"off",3), iVar4 == 0)))) ||
         ((param_2->Size == 1 &&
          (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"0",1), iVar4 == 0))))
      goto LAB_142b066dc;
      if ((((param_2->Size != 4) ||
           (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"true",4), iVar4 != 0)) &&
          ((param_2->Size != 1 ||
           (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"t",1), iVar4 != 0)))) &&
         ((param_2->Size != 2 ||
          (iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"on",2), iVar4 != 0)))) {
        local_res10[0] = 0;
        ::LexFromString(local_res10,param_2);
        if (local_res10[0] == 0) {
          *param_1 = Invalid;
          return;
        }
      }
    }
    *param_1 = DefaultWriteDefaultRead;
  }
  return;
}

// LoadBlockHeader @ 142b07bb0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::AssetDataGather::Private::FBlockHeader> * __cdecl
UE::AssetDataGather::Private::LoadBlockHeader
          (TOptional<UE::AssetDataGather::Private::FBlockHeader> *__return_storage_ptr__,
          TMemoryView<void_const_> *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  TOptional<UE::AssetDataGather::Private::FBlockHeader> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if ((param_1->Size != 0x10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.GetSize() == sizeof(FBlockHeader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xd16,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<UE::AssetDataGather::Private::FBlockHeader> *)(*pcVar5)();
    return pTVar8;
  }
  piVar6 = param_1->Data;
  uVar10 = param_1->Size;
  if ((uVar10 < 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= Remaining.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xce7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<UE::AssetDataGather::Private::FBlockHeader> *)(*pcVar5)();
    return pTVar8;
  }
  iVar2 = *piVar6;
  uVar9 = 4;
  if (uVar10 < 4) {
    uVar9 = uVar10;
  }
  uVar10 = uVar10 - uVar9;
  puVar1 = (uint *)(uVar9 + (longlong)piVar6);
  if ((uVar10 < 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= Remaining.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xce7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<UE::AssetDataGather::Private::FBlockHeader> *)(*pcVar5)();
    return pTVar8;
  }
  uVar3 = *puVar1;
  uVar9 = 4;
  if (uVar10 < 4) {
    uVar9 = uVar10;
  }
  if ((uVar10 - uVar9 < 8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= Remaining.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xce7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<UE::AssetDataGather::Private::FBlockHeader> *)(*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(ulong64 *)(uVar9 + (longlong)puVar1);
  if (iVar2 == 0xb1a3) {
    (__return_storage_ptr__->TypedValue).Magic = 0xb1a3;
    (__return_storage_ptr__->TypedValue).Size = uVar3;
    (__return_storage_ptr__->TypedValue).Checksum = uVar4;
    __return_storage_ptr__->bIsSet = true;
  }
  else {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// LoadCacheFiles @ 142b082b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> * __cdecl
UE::AssetDataGather::Private::LoadCacheFiles
          (TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TArrayView<FString_const_,int> *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> *pTVar8;
  FTaskBase *this;
  FTask *pFVar9;
  FSharedFileData *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 auStackY_148 [32];
  undefined1 local_108;
  <lambda_1> local_107 [7];
  ForAnyElementType local_100;
  int local_f8 [2];
  ForAnyElementType local_f0;
  int local_e8 [2];
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4 [3];
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  <lambda_1> **local_b0;
  <lambda_1> *local_a8;
  _RTL_CRITICAL_SECTION *local_a0;
  TArrayView<FString_const_,int> *local_98;
  ForAnyElementType *local_90;
  ForAnyElementType *local_88;
  ForAnyElementType *local_80;
  int *local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5329,"LoadCacheFiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x14d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5329);
  }
  iVar7 = param_1->ArrayNum;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar7,&local_f0,local_e8,local_e8 + 1);
  DefaultConstructItems<UE::AssetDataGather::Private::FCachePayload,int>
            (local_f0.Data + (longlong)iVar6 * 0x18,iVar7);
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar3 = param_1->ArrayNum;
  local_d8 = 0;
  local_d4[0] = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar3,&local_100,local_f8,local_f8 + 1);
    DefaultConstructItems<_UE::AssetDataGather::Private::LoadCacheFiles_::__l5::FSharedFileData,int>
              (local_100.Data + (longlong)iVar7 * 0x20,uVar3);
  }
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (local_d4[0] < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_e0,local_d8,local_d4);
  }
  local_d4[1] = 0;
  local_c8.DataPtr = (void **)0x0;
  iVar7 = param_1->ArrayNum * 2;
  local_c8.ArrayNum = 0;
  local_a8 = local_107;
  local_a0 = &local_70;
  local_90 = &local_f0;
  local_88 = &local_100;
  local_80 = &local_e0;
  local_78 = local_d4 + 1;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetDataGather::Private::LoadCacheFiles'::__l5::<lambda_2>,void,int>
             ::Call;
  local_b0 = &local_a8;
  local_98 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"AssetDataGatherer::LoadCacheFiles",iVar7,
             (FGatherSettings::GARGatherCacheParallelism * 2 + -1 + iVar7) /
             (FGatherSettings::GARGatherCacheParallelism * 2),
             (TFunctionRef<void___cdecl(int)> *)&local_b8,local_107[0],BackgroundPriority,&local_c8)
  ;
  iVar7 = local_f8[0];
  pFVar10 = (FSharedFileData *)(local_100.Data + (longlong)local_f8[0] * 0x20);
  pFVar11 = local_100.Data + 0x19;
  while( true ) {
    if (local_f8[0] != iVar7) {
      local_108 = 0;
      `TCheckedPointerIterator<`UE::AssetDataGather::Private::LoadCacheFiles'::__l5::FSharedFileData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    if ((FSharedFileData *)(pFVar11 + -0x19) == pFVar10) break;
    if (((pFVar11[-1] == (FScriptContainerElement)0x0) || (*pFVar11 == (FScriptContainerElement)0x0)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FileData.bLoadComplete && FileData.bAsyncCacheComplete",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                 ,0x1574,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pFVar11 = pFVar11 + 0x20;
  }
  local_d8 = 0;
  if (local_d4[0] != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_e0,0,local_d4);
  }
  FVar12.Data = local_100.Data;
  local_d4[2] = local_f8[1];
  local_100.Data = (FScriptContainerElement *)0x0;
  iVar7 = local_f8[0];
  local_f8[0] = 0;
  local_f8[1] = 0;
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Tasks::Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::AssetDataGather::Private::LoadCacheFiles'::`5'::<lambda_3>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    (**(code **)(*(longlong *)&(this->LowLevelTask).field_0x28 + 0x18))
              (&(this->LowLevelTask).field_0x28,&this->LowLevelTask);
    *(FTaskBase **)&this->LowLevelTask = this;
    *(undefined ***)&(this->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this->LowLevelTask).field_0x8 = this;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    pFVar10 = (FSharedFileData *)0x0;
    if (pFVar9 != (FTask *)0x0) {
      pFVar10 = *(FSharedFileData **)&pFVar9->field_0x30;
    }
    *(FSharedFileData **)&(this->LowLevelTask).field_0x30 = pFVar10;
    *(undefined8 *)&(this->LowLevelTask).field_0x38 = 0xc80000542648d400;
    this->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
    this[1]._padding_ = (longlong)FVar12.Data;
    *(int *)((longlong)&this[1]._padding_ + 4) = local_d4[2];
    *(int *)&this[1]._padding_ = iVar7;
    this->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::AssetDataGather::Private::LoadCacheFiles'::`5'::<lambda_3>_>::
          _vftable_;
    iVar7 = 0;
    Tasks::Private::FTaskBase::TryLaunch(this,0x100);
    LOCK();
    paVar1 = &this->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    FVar12.Data = (FScriptContainerElement *)(FSharedFileData *)0x0;
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this->_padding_)(this,1);
      DestructItems<_UE::AssetDataGather::Private::LoadCacheFiles_::__l5::FSharedFileData,int>
                ((FSharedFileData *)0x0,0);
      goto LAB_142b08709;
    }
  }
  DestructItems<_UE::AssetDataGather::Private::LoadCacheFiles_::__l5::FSharedFileData,int>
            ((FSharedFileData *)FVar12.Data,iVar7);
  if ((FSharedFileData *)FVar12.Data != (FSharedFileData *)0x0) {
    FMemory::Free(FVar12.Data);
  }
LAB_142b08709:
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  DestructItems<_UE::AssetDataGather::Private::LoadCacheFiles_::__l5::FSharedFileData,int>
            ((FSharedFileData *)local_100.Data,local_f8[0]);
  if ((FSharedFileData *)local_100.Data != (FSharedFileData *)0x0) {
    FMemory::Free(local_100.Data);
  }
  DeleteCriticalSection(&local_70);
  (__return_storage_ptr__->AllocatorInstance).Data = local_f0.Data;
  __return_storage_ptr__->ArrayNum = local_e8[0];
  __return_storage_ptr__->ArrayMax = local_e8[1];
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  DestructItems<UE::AssetDataGather::Private::FCachePayload,int>((FCachePayload *)0x0,0);
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// PropertiesToString @ 142b0d140

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::AssetRegistry::PropertiesToString
          (EDependencyProperty param_1,TStringBuilderBase<wchar_t> *param_2,
          EDependencyCategory param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((param_3 & Package) != None) {
    pwVar1 = L"Hard";
    iVar2 = 4;
    if ((param_1 & Hard) == None) {
      pwVar1 = L"Soft";
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar1,4);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L",",1);
    pwVar1 = L"Game";
    if ((param_1 & Game) == None) {
      iVar2 = 10;
      pwVar1 = L"EditorOnly";
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar1,iVar2);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L",",1);
    bVar3 = (param_1 & Build) == None;
    pwVar1 = L"Build";
    if (bVar3) {
      pwVar1 = L"NotBuild";
    }
    iVar2 = 5;
    if (bVar3) {
      iVar2 = 8;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar1,iVar2);
    bVar3 = false;
  }
  if ((param_3 & Manage) != None) {
    if (!bVar3) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L",",1);
    }
    bVar3 = (param_1 & Direct) == None;
    pwVar1 = L"Direct";
    if (bVar3) {
      pwVar1 = L"Indirect";
    }
    iVar2 = 6;
    if (bVar3) {
      iVar2 = 8;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar1,iVar2);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L",",1);
    if ((param_1 & CookRule) == None) {
      iVar2 = 9;
      pwVar1 = L"ChunkOnly";
    }
    else {
      iVar2 = 8;
      pwVar1 = L"CookRule";
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar1,iVar2);
  }
  return;
}

// SerializeCacheLoad @ 142b1d200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCachePayload * __cdecl
UE::AssetDataGather::Private::SerializeCacheLoad
          (FCachePayload *__return_storage_ptr__,FAssetRegistryReader *param_1)

{
  FDiskCachedAssetData *pFVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  FName *pFVar8;
  longlong lVar9;
  longlong lVar10;
  ulong64 uVar11;
  FName *pFVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  FDiskCachedAssetData *pFVar18;
  LARGE_INTEGER local_res10;
  uint local_res18 [2];
  undefined8 local_res20;
  
  QueryPerformanceCounter(&local_res10);
  plVar3 = (longlong *)param_1->_padding_;
  iVar17 = 0;
  local_res18[0] = 0;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  pcVar4 = *(code **)(param_1->_padding_ + 0x28);
  lVar9 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
  lVar10 = (*pcVar4)();
  if ((((param_1->_padding_ & 0x200) == 0) && (-1 < (int)local_res18[0])) &&
     ((longlong)(int)local_res18[0] <=
      (longlong)((lVar9 - lVar10) + (ulonglong)((uint)(lVar9 - lVar10 >> 0x3f) & 3)) >> 2)) {
    if (local_res18[0] != 0) {
      local_res10.QuadPart = 0;
      local_res20 = 0;
      FSoftObjectPathSerializationScope::FSoftObjectPathSerializationScope
                ((FSoftObjectPathSerializationScope *)&local_res10.s,(FName)0x0,(FName)0x0,
                 NonPackage,AlwaysSerialize);
      uVar15 = (ulonglong)(int)local_res18[0];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      uVar11 = SUB168(ZEXT816(8) * auVar6,0);
      if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      pFVar12 = operator_new__(uVar11);
      pFVar8 = pFVar12;
      if (pFVar12 == (FName *)0x0) {
        pFVar12 = (FName *)0x0;
      }
      else {
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          pFVar8->ComparisonIndex = 0;
          pFVar8->Number = 0;
          pFVar8 = pFVar8 + 1;
        }
      }
      uVar15 = (ulonglong)(int)local_res18[0];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      uVar13 = SUB168(ZEXT816(0x110) * auVar7,0);
      if (SUB168(ZEXT816(0x110) * auVar7,8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      uVar11 = uVar13 + 8;
      if (0xfffffffffffffff7 < uVar13) {
        uVar11 = 0xffffffffffffffff;
      }
      puVar14 = operator_new__(uVar11);
      if (puVar14 == (ulonglong *)0x0) {
        pFVar18 = (FDiskCachedAssetData *)0x0;
      }
      else {
        *puVar14 = uVar15;
        pFVar18 = (FDiskCachedAssetData *)(puVar14 + 1);
        pFVar1 = pFVar18;
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          (pFVar1->ModificationTime).Ticks = 0;
          (pFVar1->LastGatheredTime).Ticks = 0;
          (pFVar1->Extension).ComparisonIndex = 0;
          (pFVar1->Extension).Number = 0;
          pFVar1->HasMarkOfTheWeb = Unset;
          (pFVar1->AssetDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar1->AssetDataList).ArrayNum = 0;
          (pFVar1->AssetDataList).ArrayMax = 0;
          (pFVar1->DependencyData).PackageName.ComparisonIndex = 0;
          (pFVar1->DependencyData).PackageName.Number = 0;
          (pFVar1->DependencyData).PackageData.CookedHash.bIsValid = false;
          *(undefined8 *)&(pFVar1->DependencyData).PackageData.ChunkHashes = 0;
          *(undefined8 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x8 = 0;
          *(undefined8 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x20 = 0;
          (pFVar1->DependencyData).PackageData.Extension = Unspecified;
          (pFVar1->DependencyData).PackageData.Flags = 0;
          *(undefined4 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x28 = 0;
          *(undefined4 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x34 = 0;
          *(undefined8 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x40 = 0;
          *(undefined4 *)&(pFVar1->DependencyData).PackageData.ChunkHashes.field_0x48 = 0;
          (pFVar1->DependencyData).PackageData.ImportedClasses.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar1->DependencyData).PackageData.ImportedClasses.ArrayNum = 0;
          (pFVar1->DependencyData).PackageData.ImportedClasses.ArrayMax = 0;
          (pFVar1->DependencyData).PackageData.DiskSize = 0;
          (pFVar1->DependencyData).PackageData.FileVersionUE.FileVersionUE4 = 0;
          (pFVar1->DependencyData).PackageData.FileVersionUE.FileVersionUE5 = 0;
          (pFVar1->DependencyData).PackageData.FileVersionLicenseeUE = -1;
          (pFVar1->DependencyData).PackageData.CustomVersions.Ptr.DataPtr =
               (FPackageCustomVersion *)0x0;
          (pFVar1->DependencyData).PackageData.CustomVersions.Ptr.ArrayNum = 0;
          (pFVar1->DependencyData).PackageDependencies.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar1->DependencyData).PackageDependencies.ArrayNum = 0;
          (pFVar1->DependencyData).PackageDependencies.ArrayMax = 0;
          (pFVar1->DependencyData).SearchableNameDependencies.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar1->DependencyData).SearchableNameDependencies.ArrayNum = 0;
          (pFVar1->DependencyData).SearchableNameDependencies.ArrayMax = 0;
          (pFVar1->DependencyData).DependsNodeReservations.PackageDependenciesSize = 0;
          (pFVar1->DependencyData).DependsNodeReservations.NameDependenciesSize = 0;
          (pFVar1->DependencyData).DependsNodeReservations.ManageDependenciesSize = 0;
          (pFVar1->DependencyData).DependsNodeReservations.ReferencersSize = 0;
          (pFVar1->DependencyData).bHasPackageData = false;
          (pFVar1->DependencyData).bHasDependencyData = false;
          pFVar1 = pFVar1 + 1;
        }
      }
      if (0 < (int)local_res18[0]) {
        do {
          (**(code **)(param_1->_padding_ + 0x178))(param_1,pFVar12 + iVar17);
          FDiskCachedAssetData::SerializeForCache<FAssetRegistryReader_&>(pFVar18 + iVar17,param_1);
          if ((param_1->_padding_ & 0x200) != 0) goto LAB_142b1d4fe;
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)local_res18[0]);
      }
      if ((param_1->_padding_ & 0x200) == 0) {
        operator_delete__((void *)0x0);
        __return_storage_ptr__->NumAssets = local_res18[0];
        (__return_storage_ptr__->PackageNames).Ptr = pFVar12;
        (__return_storage_ptr__->AssetDatas).Ptr = pFVar18;
        __return_storage_ptr__->bSucceeded = true;
        operator_delete__((void *)0x0);
        pFVar12 = (FName *)0x0;
      }
      else {
LAB_142b1d4fe:
        *(undefined2 *)&__return_storage_ptr__->field_0x15 = 0;
        __return_storage_ptr__->field_0x17 = 0;
        (__return_storage_ptr__->PackageNames).Ptr = (FName *)0x0;
        (__return_storage_ptr__->AssetDatas).Ptr = (FDiskCachedAssetData *)0x0;
        __return_storage_ptr__->NumAssets = 0;
        __return_storage_ptr__->bSucceeded = false;
        if (pFVar18 != (FDiskCachedAssetData *)0x0) {
          lVar9 = *(longlong *)&pFVar18[-1].DependencyData.bHasPackageData;
          if (lVar9 != 0) {
            pTVar16 = &pFVar18[lVar9].AssetDataList;
            do {
              pTVar2 = pTVar16 + -0x11;
              lVar9 = lVar9 + -1;
              FPackageDependencyData::~FPackageDependencyData
                        ((FPackageDependencyData *)(pTVar16 + -0x10));
              DestructItems<FAssetData,int>
                        ((FAssetData *)(pTVar2->AllocatorInstance).Data,
                         *(int *)((longlong)(pTVar16 + -0x11) + 8));
              pFVar5 = (pTVar2->AllocatorInstance).Data;
              if (pFVar5 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar5);
              }
              pTVar16 = pTVar2;
            } while (lVar9 != 0);
          }
          operator_delete__(&pFVar18[-1].DependencyData.bHasPackageData,
                            *(longlong *)&pFVar18[-1].DependencyData.bHasPackageData * 0x110 + 8);
        }
      }
      operator_delete__(pFVar12);
      FSoftObjectPathSerializationScope::~FSoftObjectPathSerializationScope
                ((FSoftObjectPathSerializationScope *)&local_res10.s);
      if ((byte)LogAssetRegistry._0_1_ < 6) {
        return __return_storage_ptr__;
      }
      QueryPerformanceCounter(&local_res10);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Asset_data_gath_150991fb0,
                 (FLogCategoryBase *)&LogAssetRegistry);
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->PackageNames).Ptr = (FName *)0x0;
    (__return_storage_ptr__->AssetDatas).Ptr = (FDiskCachedAssetData *)0x0;
    __return_storage_ptr__->NumAssets = 0;
    __return_storage_ptr__->bSucceeded = true;
    operator_delete__((void *)0x0);
  }
  else {
    FArchiveState::SetError((FArchiveState *)param_1);
    *(undefined2 *)&__return_storage_ptr__->field_0x15 = 0;
    __return_storage_ptr__->field_0x17 = 0;
    (__return_storage_ptr__->PackageNames).Ptr = (FName *)0x0;
    (__return_storage_ptr__->AssetDatas).Ptr = (FDiskCachedAssetData *)0x0;
    __return_storage_ptr__->NumAssets = 0;
    __return_storage_ptr__->bSucceeded = false;
  }
  if (5 < (byte)LogAssetRegistry._0_1_) {
    QueryPerformanceCounter(&local_res10);
    Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_Asset_data_gath_150991fb0,
               (FLogCategoryBase *)&LogAssetRegistry);
  }
  return __return_storage_ptr__;
}

// SerializeCacheSave @ 142b1d640

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::AssetDataGather::Private::SerializeCacheSave
          (FAssetRegistryWriter *param_1,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong *plVar2;
  LARGE_INTEGER *pLVar3;
  LARGE_INTEGER *pLVar4;
  LARGE_INTEGER local_res8;
  uint local_res10 [2];
  
  QueryPerformanceCounter(&local_res8);
  plVar2 = (longlong *)param_1->_padding_;
  local_res10[0] = param_2->ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  iVar1 = param_2->ArrayNum;
  pLVar3 = (LARGE_INTEGER *)(param_2->AllocatorInstance).Data;
  pLVar4 = pLVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FName,FDiskCachedAssetData_*>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    if (pLVar3 == pLVar4) break;
    local_res8 = *pLVar3;
    (**(code **)(param_1->_padding_ + 0x178))(param_1,&local_res8);
    FDiskCachedAssetData::SerializeForCache<FAssetRegistryWriter_&>
              ((FDiskCachedAssetData *)pLVar3[1],param_1);
    pLVar3 = pLVar3 + 2;
  }
  if (5 < (byte)LogAssetRegistry._0_1_) {
    QueryPerformanceCounter(&local_res8);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142b44140

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142b44210

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 6) {
      iVar1 = 5;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ApplyRelocationToTagsAndValues @ 142b54e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Private::ApplyRelocationToTagsAndValues
          (FAssetDataTagMap *param_1,FPackageRelocationContext *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  int *this;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_1ad8 [32];
  undefined1 local_1a98 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a90;
  FString local_1a80;
  uint local_1a70;
  TStringView<wchar_t> local_1a68;
  TStringView<wchar_t> local_1a58;
  wchar_t *local_1a48;
  int iStack_1a40;
  undefined4 uStack_1a3c;
  wchar_t *local_1a38;
  int iStack_1a30;
  undefined4 uStack_1a2c;
  longlong local_1a28;
  FAssetDataTagMap *local_1a20;
  wchar_t *local_1a18;
  int iStack_1a10;
  undefined4 uStack_1a0c;
  wchar_t *local_1a08;
  int iStack_1a00;
  undefined4 uStack_19fc;
  wchar_t *local_19f8;
  int iStack_19f0;
  undefined4 uStack_19ec;
  wchar_t *local_19e8;
  int iStack_19e0;
  undefined4 uStack_19dc;
  TStringView<wchar_t> local_19d8;
  TStringView<wchar_t> local_19c8;
  TStringView<wchar_t> local_19b8;
  TStringView<wchar_t> local_19a8;
  TStringView<wchar_t> local_1998;
  TStringView<wchar_t> local_1988;
  TStringView<wchar_t> local_1978;
  TStringView<wchar_t> local_1968;
  FStringFormatArg local_1958;
  FStringFormatArg local_1938 [2];
  TStringBuilderBase<wchar_t> local_18f8;
  wchar_t local_18d8 [1035];
  wchar_t local_10c2 [5];
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142b54e3a;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1ad8;
  lVar8 = param_1->_padding_;
  local_1a70 = (uint)param_1->_padding_;
  uVar7 = (ulonglong)(int)local_1a70;
  this = (int *)(lVar8 + 8);
  lVar9 = lVar8 + uVar7 * 0x18;
  local_1a28 = lVar9;
  local_1a20 = param_1;
LAB_142b54e80:
  do {
    if ((int)local_1a20->_padding_ != (int)uVar7) {
      local_1a98[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a98);
    }
    if (lVar8 == lVar9) {
      return;
    }
    if (1 < this[2]) {
      local_1a18 = *(wchar_t **)this;
      iStack_1a10 = this[2] + -1;
      local_19d8._12_4_ = uStack_1a0c;
      local_19d8.Size = iStack_1a10;
      local_19d8.DataPtr = local_1a18;
      bVar3 = FPackageName::IsValidObjectPath(&local_19d8,(FText *)0x0);
      iVar5 = this[2];
      pwVar1 = *(wchar_t **)this;
      if (bVar3) {
        local_878.Base = local_858;
        local_878.bIsDynamic = false;
        local_878.bIsExternal = false;
        iStack_1a00 = iVar5 + -1;
        if (iVar5 == 0) {
          iStack_1a00 = 0;
        }
        local_878.CurPos = local_858;
        local_19c8._12_4_ = uStack_19fc;
        local_19c8.Size = iStack_1a00;
        local_878.End = local_42;
        local_1a08 = pwVar1;
        local_19c8.DataPtr = pwVar1;
        bVar3 = Package::Relocation::Private::TryRelocateReference(param_2,&local_19c8,&local_878);
        if ((bVar3) && ((int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1) != 0)) {
          if (local_878.End < local_878.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_878,1);
          }
          *local_878.CurPos = L'\0';
          ::FString::operator=((FString *)this,local_878.Base);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
        lVar8 = lVar8 + 0x18;
        uVar7 = (ulonglong)local_1a70;
        this = this + 6;
        goto LAB_142b54e80;
      }
      local_1a58.DataPtr = (wchar_t *)0x0;
      iStack_19f0 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_19f0 = 0;
      }
      local_1a58.Size = 0;
      local_19b8._12_4_ = uStack_19ec;
      local_19b8.Size = iStack_19f0;
      local_1a68.DataPtr = (wchar_t *)0x0;
      local_1a68.Size = 0;
      local_19f8 = pwVar1;
      local_19b8.DataPtr = pwVar1;
      bVar3 = FPackageName::ParseExportTextPath(&local_19b8,&local_1a58,&local_1a68);
      if (bVar3) {
        local_19a8._12_4_ = local_1a58._12_4_;
        local_19a8.Size = local_1a58.Size;
        local_10b8.Base = local_1098;
        local_10b8.CurPos = local_1098;
        local_10b8.bIsDynamic = false;
        local_10b8.bIsExternal = false;
        local_10b8.End = local_882;
        local_19a8.DataPtr = local_1a58.DataPtr;
        bVar3 = Package::Relocation::Private::TryRelocateReference(param_2,&local_19a8,&local_10b8);
        if ((bVar3) && ((int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        local_1998._12_4_ = local_1a68._12_4_;
        local_1998.Size = local_1a68.Size;
        local_18f8.Base = local_18d8;
        local_18f8.CurPos = local_18d8;
        local_18f8.bIsDynamic = false;
        local_18f8.bIsExternal = false;
        local_18f8.End = local_10c2;
        local_1998.DataPtr = local_1a68.DataPtr;
        bVar4 = Package::Relocation::Private::TryRelocateReference(param_2,&local_1998,&local_18f8);
        if ((bVar4) && ((int)((longlong)local_18f8.CurPos - (longlong)local_18f8.Base >> 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar3) {
          if (local_10b8.End < local_10b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_10b8,1);
          }
          pwVar1 = local_10b8.Base;
          iVar5 = 0;
          *local_10b8.CurPos = L'\0';
          if (local_10b8.Base != (wchar_t *)0x0) {
            sVar6 = wcslen(local_10b8.Base);
            iVar5 = (int)sVar6;
          }
          local_1a48 = pwVar1;
          uStack_1a3c = local_1938[1].field1_0x8._4_4_;
          iStack_1a40 = iVar5;
        }
        else {
          local_1a48 = local_1a58.DataPtr;
          iStack_1a40 = local_1a58.Size;
          uStack_1a3c = local_1a58._12_4_;
        }
        local_1988._12_4_ = uStack_1a3c;
        local_1988.Size = iStack_1a40;
        local_1988.DataPtr = local_1a48;
        FStringFormatArg::FStringFormatArg(&local_1958,&local_1988);
        if (bVar4) {
          if (local_18f8.End < local_18f8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_18f8,1);
          }
          pwVar1 = local_18f8.Base;
          *local_18f8.CurPos = L'\0';
          iVar5 = 0;
          if (local_18f8.Base != (wchar_t *)0x0) {
            sVar6 = wcslen(local_18f8.Base);
            iVar5 = (int)sVar6;
          }
          local_1a38 = pwVar1;
          uStack_1a2c = local_1938[1].StringValue.Data.ArrayMax;
          iStack_1a30 = iVar5;
        }
        else {
          local_1a38 = local_1a68.DataPtr;
          iStack_1a30 = local_1a68.Size;
          uStack_1a2c = local_1a68._12_4_;
        }
        local_1978._12_4_ = uStack_1a2c;
        local_1978.Size = iStack_1a30;
        local_1978.DataPtr = local_1a38;
        FStringFormatArg::FStringFormatArg(local_1938,&local_1978);
        local_1a90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a90.ArrayNum = 2;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_1a90.AllocatorInstance,2,&local_1a90.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_1a90.AllocatorInstance.Data,&local_1958,2);
        ::FString::FormatImpl(&local_1a80,L"{0}\'{1}\'",&local_1a90);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_1a90.AllocatorInstance.Data,local_1a90.ArrayNum);
        if ((FStringFormatArg *)local_1a90.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_1a90.AllocatorInstance.Data);
        }
        if (local_1938[0].StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_1938[0].StringValue.Data.AllocatorInstance.Data);
        }
        if (local_1958.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1958.StringValue.Data.AllocatorInstance.Data);
        }
        if ((FString *)this != &local_1a80) {
          if (*(void **)this != (void *)0x0) {
            FMemory::Free(*(void **)this);
          }
          *(FScriptContainerElement **)this = local_1a80.Data.AllocatorInstance.Data;
          this[2] = local_1a80.Data.ArrayNum;
          this[3] = local_1a80.Data.ArrayMax;
          local_1a80.Data.ArrayNum = 0;
          local_1a80.Data.ArrayMax = 0;
          local_1a80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        local_19e8 = *(wchar_t **)this;
        iStack_19e0 = this[2] + -1;
        if (this[2] == 0) {
          iStack_19e0 = 0;
        }
        local_1968._12_4_ = uStack_19dc;
        local_1968.Size = iStack_19e0;
        local_1968.DataPtr = local_19e8;
        bVar3 = FPackageName::ParseExportTextPath(&local_1968,&local_1a58,&local_1a68);
        if (!bVar3) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3340944159207849902>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                             ,0x52,
                             "FPackageName::ParseExportTextPath(Value, &ClassName, &ObjectPath)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (local_1a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a80.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_18f8);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
        lVar9 = local_1a28;
      }
    }
    lVar8 = lVar8 + 0x18;
    uVar7 = (ulonglong)local_1a70;
    this = this + 6;
  } while( true );
}

// ReadPackageDataDependencies @ 142b61000

bool __cdecl
UE::AssetRegistry::ReadPackageDataDependencies(FReadPackageDataDependenciesArgs *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint *puVar3;
  FArchive *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  
  if (param_1->AssetRegistryDependencyDataOffset == -1) {
    iVar7 = param_1->NumImports;
    pTVar1 = &param_1->ImportUsedInGame;
    (param_1->ImportUsedInGame).NumBits = iVar7;
    uVar6 = iVar7 + 0x1f;
    uVar10 = uVar6 >> 5;
    if (uVar6 >> 5 != 0) {
      if ((param_1->ImportUsedInGame).MaxBits + 0x1fU >> 5 < uVar10) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
        (param_1->ImportUsedInGame).MaxBits = uVar10 << 5;
      }
      FVar9 = (param_1->ImportUsedInGame).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      if (uVar10 < 9) {
        iVar7 = -1;
      }
      else {
        iVar7 = 0xff;
      }
      memset((void *)FVar9,iVar7,(ulonglong)uVar10 << 2);
      iVar7 = (param_1->ImportUsedInGame).NumBits;
      uVar10 = iVar7 >> 0x1f & 0x1f;
      uVar6 = iVar7 + uVar10;
      iVar7 = (uVar6 & 0x1f) - uVar10;
      if (iVar7 != 0) {
        FVar9 = (param_1->ImportUsedInGame).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
      }
    }
    iVar7 = param_1->NumSoftPackageReferences;
    pTVar1 = &param_1->SoftPackageUsedInGame;
    (param_1->SoftPackageUsedInGame).NumBits = iVar7;
    uVar6 = iVar7 + 0x1f;
    uVar10 = uVar6 >> 5;
    if (uVar6 >> 5 != 0) {
      if ((param_1->SoftPackageUsedInGame).MaxBits + 0x1fU >> 5 < uVar10) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
        (param_1->SoftPackageUsedInGame).MaxBits = uVar10 << 5;
      }
      FVar9 = (param_1->SoftPackageUsedInGame).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      if (uVar10 < 9) {
        iVar7 = -1;
      }
      else {
        iVar7 = 0xff;
      }
      memset((void *)FVar9,iVar7,(ulonglong)uVar10 << 2);
      iVar7 = (param_1->SoftPackageUsedInGame).NumBits;
      uVar10 = iVar7 >> 0x1f & 0x1f;
      uVar6 = iVar7 + uVar10;
      iVar7 = (uVar6 & 0x1f) - uVar10;
      if (iVar7 != 0) {
        FVar9 = (param_1->SoftPackageUsedInGame).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    piVar2 = &(param_1->ExtraPackageDependencies).ArrayMax;
    (param_1->ExtraPackageDependencies).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(param_1->ExtraPackageDependencies).AllocatorInstance,0,piVar2);
    }
    param_1->AssetRegistryDependencyDataSize = 0;
    return true;
  }
  pFVar4 = param_1->BinaryNameAwareArchive;
  (**(code **)(*(longlong *)pFVar4 + 0x1b8))(pFVar4);
  if ((pFVar4->field_0x29 & 2) == 0) {
    operator<<<FDefaultBitArrayAllocator>(pFVar4,&param_1->ImportUsedInGame);
    operator<<<FDefaultBitArrayAllocator>(pFVar4,&param_1->SoftPackageUsedInGame);
    if ((param_1->PackageVersion).FileVersionUE5 < 0x3f5) {
      piVar2 = &(param_1->ExtraPackageDependencies).ArrayMax;
      (param_1->ExtraPackageDependencies).ArrayNum = 0;
      if (*piVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(param_1->ExtraPackageDependencies).AllocatorInstance,0,piVar2);
      }
    }
    else {
      TArrayPrivateFriend::Serialize<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_>
                (pFVar4,(TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_> *)
                        &param_1->ExtraPackageDependencies);
    }
    if (((param_1->ImportUsedInGame).NumBits == param_1->NumImports) &&
       ((param_1->SoftPackageUsedInGame).NumBits == param_1->NumSoftPackageReferences)) {
      lVar5 = param_1->AssetRegistryDependencyDataOffset;
      lVar8 = (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4);
      param_1->AssetRegistryDependencyDataSize = lVar8 - lVar5;
      return (bool)((byte)~pFVar4->field_0x29 >> 1 & 1);
    }
  }
  return false;
}

// ReadPackageDataMain @ 142b61290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::AssetRegistry::ReadPackageDataMain
          (FArchive *param_1,FString *param_2,FPackageFileSummary *param_3,long64 *param_4,
          TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_5,
          EReadPackageDataMainErrorCode *param_6,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_8)

{
  undefined1 *puVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FAssetData *pFVar15;
  TArrayView<int_const_,int> *pTVar16;
  FName *pFVar17;
  FAssetData *pFVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  TTuple<FName,FString> *pTVar22;
  FString *pFVar23;
  wchar_t *pwVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  FString local_2c8;
  FString local_2b8;
  uint local_2a8 [2];
  FAssetDataTagMap local_2a0;
  int local_288;
  FAssetData *local_280;
  FAssetData *local_278;
  FString local_270;
  FString local_260;
  uint local_250;
  FString local_248;
  FDeserializePackageData local_238;
  FTopLevelAssetPath local_228;
  FTopLevelAssetPath local_218;
  FAssetDataTagMap local_208;
  FString local_1f0;
  FString local_1e0;
  FPackageRelocationContext local_1d0;
  FAssetDataTagMap local_1a0;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FString local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  TArrayView<int_const_,int> local_138;
  FTopLevelAssetPath local_128;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  TArrayView<int_const_,int> local_e8;
  FTopLevelAssetPath local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FPackageRelocationContext local_98;
  TArrayView<int_const_,int> local_68 [3];
  
  *param_6 = Unknown;
  FPackageName::GetLongPackagePath(&local_1e0,param_2);
  (**(code **)(*(longlong *)param_1 + 0x30))();
  local_238.ObjectCount = 0;
  uVar26 = param_3->PackageFlags & 0x20000;
  local_238.DependencyDataOffset = -1;
  local_250 = uVar26;
  bVar11 = FDeserializePackageData::DoSerialize(&local_238,param_1,param_3,param_6);
  if (bVar11) {
    *param_4 = local_238.DependencyDataOffset;
    local_188 = (param_2->Data).AllocatorInstance.Data;
    pFVar18 = (FAssetData *)0x0;
    iVar14 = (param_2->Data).ArrayNum;
    local_1d0.OriginalPackagePath.DataPtr = (wchar_t *)0x0;
    local_1d0.OriginalPackagePath.Size = 0;
    local_1d0.CurrentPackagePath.DataPtr = (wchar_t *)0x0;
    local_1d0.CurrentPackagePath.Size = 0;
    iStack_180 = iVar14 + -1;
    if (iVar14 == 0) {
      iStack_180 = 0;
    }
    local_1d0.OriginalPackageMount.DataPtr = (wchar_t *)0x0;
    local_148._12_4_ = uStack_17c;
    local_148.Size = iStack_180;
    local_1d0.OriginalPackageMount.Size = 0;
    local_148.DataPtr = (wchar_t *)local_188;
    bVar11 = Package::Relocation::Private::ShouldApplyRelocation(param_3,&local_148,&local_1d0);
    if ((uVar26 != 0) &&
       (((param_3->FileVersionUE).FileVersionUE4 < 0x151 || (local_238.ObjectCount == 0)))) {
      FPackageName::GetLongPackageAssetName(&local_1f0,param_2);
      pFVar15 = ::operator_new(0x68);
      if (pFVar15 != (FAssetData *)0x0) {
        uVar26 = param_3->PackageFlags;
        pTVar16 = TArrayView<int_const_,int>::
                  TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                            (local_68,&param_3->ChunkIDs);
        piVar8 = pTVar16->DataPtr;
        uVar9._0_4_ = pTVar16->ArrayNum;
        uVar9._4_4_ = *(undefined4 *)&pTVar16->field_0xc;
        local_208._padding_ = 0;
        local_208._padding_ = 0;
        local_208.RefCount.Counter = 0;
        local_208._20_4_ = 0;
        pFVar17 = ::FName::FName(&local_a0,L"World");
        FVar2 = *pFVar17;
        pFVar17 = ::FName::FName(&local_a8,L"/Script/Engine");
        local_228.PackageName.ComparisonIndex.Value = 0;
        local_228.PackageName.Number = 0;
        local_228.AssetName.ComparisonIndex.Value = 0;
        local_228.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_228,*pFVar17,FVar2);
        FVar10 = local_228.AssetName;
        FVar2 = local_228.PackageName;
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          FVar25.Data = local_1f0.Data.AllocatorInstance.Data;
        }
        pFVar17 = ::FName::FName(&local_b0,(wchar_t *)FVar25.Data);
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_1e0.Data.ArrayNum != 0) {
          FVar25.Data = local_1e0.Data.AllocatorInstance.Data;
        }
        FVar3 = *pFVar17;
        pFVar17 = ::FName::FName(&local_b8,(wchar_t *)FVar25.Data);
        FVar4 = *pFVar17;
        if ((param_2->Data).ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        pFVar17 = ::FName::FName(&local_c0,pwVar24);
        local_128.PackageName = FVar2;
        local_128.AssetName = FVar10;
        local_138.DataPtr = piVar8;
        local_138._8_8_ = uVar9;
        pFVar18 = FAssetData::FAssetData
                            (pFVar15,*pFVar17,FVar4,FVar3,&local_128,&local_208,&local_138,uVar26);
      }
      pFVar5 = (param_5->AllocatorInstance).Data;
      local_280 = pFVar18;
      if (((pFVar5 <= (FScriptContainerElement *)&local_280) &&
          ((FScriptContainerElement *)&local_280 < pFVar5 + (longlong)param_5->ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      iVar14 = param_5->ArrayNum;
      if (iVar14 == param_5->ArrayMax) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar14 + 1;
      *(FAssetData **)((param_5->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_280;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
    }
    local_288 = 0;
    if (0 < local_238.ObjectCount) {
      do {
        iVar14 = 0;
        local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.Data.ArrayNum = 0;
        local_2c8.Data.ArrayMax = 0;
        local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.Data.ArrayNum = 0;
        local_2b8.Data.ArrayMax = 0;
        local_2a8[0] = 0;
        lVar19 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
        ::operator<<(param_1,&local_2c8);
        ::operator<<(param_1,&local_2b8);
        plVar6 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_2a8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_2a8);
          }
        }
        else {
          local_2a8[0] = *(uint *)*plVar6;
          *plVar6 = *plVar6 + 4;
        }
        if ((((param_1->field_0x29 & 2) != 0) ||
            (lVar20 = (longlong)(int)local_2a8[0], (int)local_2a8[0] < 0)) ||
           (lVar21 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1), lVar19 < lVar21 + lVar20))
        {
          *param_6 = InvalidTagCount;
LAB_142b61cf9:
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          bVar11 = false;
          goto LAB_142b61d1d;
        }
        local_2a0._padding_ = 0;
        local_2a0._padding_ = 0;
        local_2a0.RefCount.Counter = 0;
        if ((int)local_2a8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_2a8[0]);
        }
        if (0 < (int)local_2a8[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_2a8[0],(ForAnyElementType *)&local_2a0,0,
                     (int *)((longlong)&local_2a0._padding_ + 4));
        }
        if (0 < (int)local_2a8[0]) {
          do {
            local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_270.Data.ArrayNum = 0;
            local_270.Data.ArrayMax = 0;
            local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.Data.ArrayNum = 0;
            local_260.Data.ArrayMax = 0;
            ::operator<<(param_1,&local_270);
            ::operator<<(param_1,&local_260);
            if ((param_1->field_0x29 & 2) != 0) {
              *param_6 = InvalidTag;
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_270.Data.AllocatorInstance.Data);
              }
              DestructItems<TTuple<FName,FString>,int>
                        ((TTuple<FName,FString> *)local_2a0._padding_,(int)local_2a0._padding_);
              if ((TTuple<FName,FString> *)local_2a0._padding_ != (TTuple<FName,FString> *)0x0) {
                FMemory::Free((void *)local_2a0._padding_);
              }
              goto LAB_142b61cf9;
            }
            if ((1 < local_270.Data.ArrayNum) && (1 < local_260.Data.ArrayNum)) {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_270.Data.ArrayNum != 0) {
                FVar25.Data = local_270.Data.AllocatorInstance.Data;
              }
              pFVar17 = ::FName::FName(&local_c8,(wchar_t *)FVar25.Data);
              pTVar22 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                        AllocateMemoryForEmplace<FName_&>
                                  ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                    *)&local_2a0,pFVar17);
              FVar25.Data = local_260.Data.AllocatorInstance.Data;
              uVar26 = pFVar17->Number;
              *(uint *)&pTVar22->field_0x0 = (pFVar17->ComparisonIndex).Value;
              *(uint *)&pTVar22->field_0x4 = uVar26;
              puVar1 = &pTVar22->field_0x8;
              *(undefined8 *)puVar1 = 0;
              lVar19 = (longlong)local_260.Data.ArrayNum;
              *(int *)&pTVar22->field_0x10 = local_260.Data.ArrayNum;
              if (local_260.Data.ArrayNum == 0) {
                *(undefined4 *)&pTVar22->field_0x14 = 0;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_260.Data.ArrayNum,0,(ForAnyElementType *)puVar1,
                           local_260.Data.ArrayNum,(int *)&pTVar22->field_0x14);
                memcpy(*(void **)puVar1,FVar25.Data,lVar19 * 2);
              }
            }
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)local_2a8[0]);
        }
        if (bVar11) {
          local_98.OriginalPackagePath._12_4_ = local_1d0.OriginalPackagePath._12_4_;
          local_98.OriginalPackagePath.Size = local_1d0.OriginalPackagePath.Size;
          local_98.CurrentPackagePath._12_4_ = local_1d0.CurrentPackagePath._12_4_;
          local_98.CurrentPackagePath.Size = local_1d0.CurrentPackagePath.Size;
          local_98.OriginalPackagePath.DataPtr = local_1d0.OriginalPackagePath.DataPtr;
          local_98.OriginalPackageMount._12_4_ = local_1d0.OriginalPackageMount._12_4_;
          local_98.OriginalPackageMount.Size = local_1d0.OriginalPackageMount.Size;
          local_98.CurrentPackagePath.DataPtr = local_1d0.CurrentPackagePath.DataPtr;
          local_98.OriginalPackageMount.DataPtr = local_1d0.OriginalPackageMount.DataPtr;
          UE::Private::ApplyRelocationToTagsAndValues(&local_2a0,&local_98);
        }
        if ((local_250 == 0) || (0x150 < (param_3->FileVersionUE).FileVersionUE4)) {
LAB_142b6187c:
          bVar12 = ::FString::StartsWith(&local_2c8,L"/",1,CaseSensitive);
          if (bVar12) {
            if (0x207 < (param_3->FileVersionUE).FileVersionUE4) goto LAB_142b619d7;
            if (2 < (byte)LogAssetRegistry._0_1_) {
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            }
          }
          else {
            iVar14 = ::FString::Find(&local_2c8,L".",1,CaseSensitive,FromStart,-1);
            if (iVar14 == -1) {
              ::FString::ConcatFC(&local_178,param_2,L".");
              ::FString::ConcatFF(&local_248,&local_178,&local_2c8);
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              local_2c8.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
              local_2c8.Data.ArrayNum = local_248.Data.ArrayNum;
              local_2c8.Data.ArrayMax = local_248.Data.ArrayMax;
              local_248.Data.ArrayNum = 0;
              local_248.Data.ArrayMax = 0;
              local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
LAB_142b619d7:
              pFVar18 = (FAssetData *)0x0;
              if ((1 < local_2b8.Data.ArrayNum) &&
                 (bVar12 = FPackageName::IsShortPackageName(&local_2b8), bVar12)) {
                (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
                pFVar23 = ReconstructFullClassPath
                                    (&local_108,param_1,param_2,param_3,&local_2b8,param_7,param_8);
                if (&local_2b8 != pFVar23) {
                  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                  }
                  local_2b8.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
                  (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_2b8.Data.ArrayNum = (pFVar23->Data).ArrayNum;
                  local_2b8.Data.ArrayMax = (pFVar23->Data).ArrayMax;
                  (pFVar23->Data).ArrayNum = 0;
                  (pFVar23->Data).ArrayMax = 0;
                }
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1);
              }
              pFVar15 = ::operator_new(0x68);
              if (pFVar15 != (FAssetData *)0x0) {
                local_158 = (param_3->ChunkIDs).AllocatorInstance.Data;
                iVar14 = (param_3->ChunkIDs).ArrayNum;
                uVar26 = param_3->PackageFlags;
                if ((iVar14 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_1a0._padding_ = local_2a0._padding_;
                local_1a0._padding_._0_4_ = (int)local_2a0._padding_;
                local_1a0._padding_._4_4_ = local_2a0._padding_._4_4_;
                local_168 = local_2b8.Data.AllocatorInstance.Data;
                local_2a0._padding_ = 0;
                local_2a0._padding_ = 0;
                local_1a0.RefCount.Counter = 0;
                local_218.PackageName.ComparisonIndex.Value = 0;
                local_218.PackageName.Number = 0;
                iStack_160 = local_2b8.Data.ArrayNum + -1;
                if (local_2b8.Data.ArrayNum == 0) {
                  iStack_160 = 0;
                }
                local_218.AssetName.ComparisonIndex.Value = 0;
                local_218.AssetName.Number = 0;
                local_f8._12_4_ = uStack_15c;
                local_f8.Size = iStack_160;
                local_f8.DataPtr = (wchar_t *)local_2b8.Data.AllocatorInstance.Data;
                iStack_150 = iVar14;
                FTopLevelAssetPath::TrySetPath(&local_218,&local_f8);
                local_e8._12_4_ = uStack_14c;
                local_e8.ArrayNum = iStack_150;
                local_e8.DataPtr = (int *)local_158;
                local_d8.PackageName = local_218.PackageName;
                local_d8.AssetName = local_218.AssetName;
                pFVar18 = FAssetData::FAssetData
                                    (pFVar15,param_2,&local_2c8,&local_d8,&local_1a0,&local_e8,
                                     uVar26);
              }
              pFVar5 = (param_5->AllocatorInstance).Data;
              local_278 = pFVar18;
              if (((pFVar5 <= (FScriptContainerElement *)&local_278) &&
                  ((FScriptContainerElement *)&local_278 < pFVar5 + (longlong)param_5->ArrayMax * 8)
                  ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              iVar14 = param_5->ArrayNum;
              if (iVar14 == param_5->ArrayMax) {
                iVar14 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
              }
              param_5->ArrayNum = iVar14 + 1;
              *(FAssetData **)((param_5->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_278
              ;
            }
            else if (2 < (byte)LogAssetRegistry._0_1_) {
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            }
          }
        }
        else {
          pFVar23 = FPackageName::GetLongPackageAssetName(&local_118,param_2);
          iVar14 = (pFVar23->Data).ArrayNum;
          if (local_2c8.Data.ArrayNum == iVar14) {
            if (local_2c8.Data.ArrayNum < 2) {
              bVar12 = false;
            }
            else {
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_2c8.Data.AllocatorInstance.Data,
                                  (wchar_t *)(pFVar23->Data).AllocatorInstance.Data);
              bVar12 = iVar14 != 0;
            }
          }
          else {
            bVar12 = iVar14 + local_2c8.Data.ArrayNum != 1;
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (!bVar12) goto LAB_142b6187c;
        }
        DestructItems<TTuple<FName,FString>,int>
                  ((TTuple<FName,FString> *)local_2a0._padding_,(int)local_2a0._padding_);
        if ((TTuple<FName,FString> *)local_2a0._padding_ != (TTuple<FName,FString> *)0x0) {
          FMemory::Free((void *)local_2a0._padding_);
        }
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        local_288 = local_288 + 1;
      } while (local_288 < local_238.ObjectCount);
    }
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
LAB_142b61d1d:
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  return bVar11;
}

// ReconstructFullClassPath @ 142b61fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UE::AssetRegistry::ReconstructFullClassPath
          (FString *__return_storage_ptr__,FArchive *param_1,FString *param_2,
          FPackageFileSummary *param_3,FString *param_4,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FName *pFVar5;
  FObjectImport *pFVar6;
  FObjectExport *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_a58 [32];
  undefined1 local_a18 [8];
  FName local_a10;
  FString *local_a08;
  FString *local_a00;
  FArchiveProxy local_9f8;
  ForAnyElementType local_960;
  undefined8 local_958;
  FName local_948;
  FString local_940;
  FString local_930;
  FNameEntrySerialized local_918;
  FLinkerTables local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  local_a08 = param_4;
  if ((param_4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  local_a00 = param_2;
  ::FName::FName(&local_a10,pwVar9);
  local_108.SearchableNamesMap._44_4_ = 0x80;
  local_108.ImportMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  local_108.ImportMap.ArrayNum = 0;
  local_108.ImportMap.ArrayMax = 0;
  local_108.ExportMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ExportMap.ArrayNum = 0;
  local_108.ExportMap.ArrayMax = 0;
  local_108.CellImportMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.CellImportMap.ArrayNum = 0;
  local_108.CellImportMap.ArrayMax = 0;
  local_108.CellExportMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.CellExportMap.ArrayNum = 0;
  local_108.CellExportMap.ArrayMax = 0;
  local_108.DependsMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.DependsMap.ArrayNum = 0;
  local_108.DependsMap.ArrayMax = 0;
  local_108.SoftPackageReferenceList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.SoftPackageReferenceList.ArrayNum = 0;
  local_108.SoftPackageReferenceList.ArrayMax = 0;
  local_108.SearchableNamesMap._0_8_ = 0;
  local_108.SearchableNamesMap._8_8_ = 0;
  local_108.SearchableNamesMap._32_8_ = 0;
  local_108.SearchableNamesMap._40_4_ = 0;
  local_108.SearchableNamesMap._48_4_ = 0xffffffff;
  local_108.SearchableNamesMap._52_4_ = 0;
  local_108.SearchableNamesMap._64_8_ = 0;
  local_108.SearchableNamesMap._72_4_ = 0;
  if ((param_5 == (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)0x0) ||
     (param_6 == (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)0x0)) {
    FArchiveProxy::FArchiveProxy(&local_9f8,param_1);
    local_9f8._padding_ = (longlong)&___7FNameMapAwareArchive_AssetRegistry_UE__6B_;
    local_960.Data = (FScriptContainerElement *)0x0;
    local_958 = 0;
    (**(code **)(*(longlong *)local_9f8.InnerArchive + 0x1b8))
              (local_9f8.InnerArchive,(longlong)param_3->NameOffset);
    uVar10 = param_3->NameCount;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_958._4_4_ < (int)uVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar10,&local_960,(int)local_958,(int *)((longlong)&local_958 + 4));
    }
    local_918.bIsWide = false;
    local_918.NonCasePreservingHash = 0;
    local_918.CasePreservingHash = 0;
    iVar12 = (int)local_958;
    if ((int)local_958 < param_3->NameCount) {
      do {
        ::operator<<((FArchive *)&local_9f8,&local_918);
        pFVar5 = ::FName::FName(&local_948,&local_918);
        uVar10 = (pFVar5->ComparisonIndex).Value;
        iVar3 = (int)local_958;
        if ((int)local_958 == local_958._4_4_) {
          iVar3 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_960,(int *)((longlong)&local_958 + 4));
        }
        iVar12 = iVar12 + 1;
        local_958 = CONCAT44(local_958._4_4_,iVar3 + 1);
        *(uint *)(local_960.Data + (longlong)iVar3 * 4) = uVar10;
      } while (iVar12 < param_3->NameCount);
    }
    iVar12 = 0;
    if ((param_5 == (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)0x0) &&
       ((**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(longlong)param_3->ImportOffset),
       0 < param_3->ImportCount)) {
      do {
        iVar3 = local_108.ImportMap.ArrayNum;
        if (local_108.ImportMap.ArrayNum == local_108.ImportMap.ArrayMax) {
          iVar3 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,(ForAnyElementType *)&local_108,&local_108.ImportMap.ArrayMax);
        }
        local_108.ImportMap.ArrayNum = iVar3 + 1;
        pFVar6 = FObjectImport::FObjectImport
                           ((FObjectImport *)
                            (local_108.ImportMap.AllocatorInstance.Data + (longlong)iVar3 * 0x38));
        ::operator<<((FArchive *)&local_9f8,pFVar6);
        iVar12 = iVar12 + 1;
      } while (iVar12 < param_3->ImportCount);
    }
    if (param_6 == (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)0x0) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(longlong)param_3->ExportOffset);
      iVar12 = 0;
      if (0 < param_3->ExportCount) {
        do {
          iVar3 = local_108.ExportMap.ArrayNum;
          if (local_108.ExportMap.ArrayNum == local_108.ExportMap.ArrayMax) {
            iVar3 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&local_108.ExportMap.AllocatorInstance,
                               &local_108.ExportMap.ArrayMax);
          }
          local_108.ExportMap.ArrayNum = iVar3 + 1;
          pFVar7 = FObjectExport::FObjectExport
                             ((FObjectExport *)
                              (local_108.ExportMap.AllocatorInstance.Data + (longlong)iVar3 * 0x68))
          ;
          ::operator<<((FArchive *)&local_9f8,pFVar7);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_3->ExportCount);
      }
    }
    if (local_960.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.Data);
    }
    FArchiveProxy::~FArchiveProxy(&local_9f8);
    if (param_5 == (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_142b62343;
    iVar12 = local_108.ImportMap.ArrayMax;
  }
  if (&local_108 != (FLinkerTables *)param_5) {
    iVar3 = param_5->ArrayNum;
    pFVar11 = (param_5->AllocatorInstance).Data;
    local_108.ImportMap.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar12 == 0)) {
      local_108.ImportMap.ArrayNum = 0;
      local_108.ImportMap.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,iVar12,(ForAnyElementType *)&local_108,iVar3,
                 &local_108.ImportMap.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_108.ImportMap.AllocatorInstance.Data,pFVar11,(longlong)iVar3 * 0x38);
      }
    }
  }
LAB_142b62343:
  if ((param_6 != (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)0x0) &&
     (&local_108.ExportMap != param_6)) {
    iVar12 = param_6->ArrayNum;
    pFVar11 = (param_6->AllocatorInstance).Data;
    local_108.ExportMap.ArrayNum = iVar12;
    if ((iVar12 == 0) && (local_108.ExportMap.ArrayMax == 0)) {
      local_108.ExportMap.ArrayNum = 0;
      local_108.ExportMap.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar12,local_108.ExportMap.ArrayMax,&local_108.ExportMap.AllocatorInstance,
                 iVar12,&local_108.ExportMap.ArrayMax);
      if (iVar12 != 0) {
        memcpy(local_108.ExportMap.AllocatorInstance.Data,pFVar11,(longlong)iVar12 * 0x68);
      }
    }
  }
  iVar12 = local_108.ExportMap.ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar11 = local_108.ExportMap.AllocatorInstance.Data +
            (longlong)local_108.ExportMap.ArrayNum * 0x68;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar13.Data = local_108.ExportMap.AllocatorInstance.Data;
  do {
    if (local_108.ExportMap.ArrayNum != iVar12) {
      local_a18[0] = 0;
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a18);
    }
    if (FVar13.Data == pFVar11) goto LAB_142b62622;
    uVar10 = *(uint *)(FVar13.Data + 0xc);
    if ((int)uVar10 < 0) {
      if (((uVar10 >> 0x1f & (uint)((int)~uVar10 < local_108.ImportMap.ArrayNum)) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar1)();
        return pFVar8;
      }
      if (*(FName *)(local_108.ImportMap.AllocatorInstance.Data + (longlong)(int)~uVar10 * 0x38) ==
          local_a10) {
        if ((-1 < *(int *)(FVar13.Data + 0xc)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsImport()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x55,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar1)();
          return pFVar8;
        }
        pFVar8 = FLinkerTables::GetImportPathName
                           (&local_108,&local_940,~*(uint *)(FVar13.Data + 0xc));
        if (__return_storage_ptr__ != pFVar8) {
          pFVar11 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_940.Data.AllocatorInstance.Data);
        }
LAB_142b62622:
        pFVar8 = local_a08;
        if ((__return_storage_ptr__->Data).ArrayNum < 2) {
          if (1 < (byte)LogAssetRegistry._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          ::FString::operator=(__return_storage_ptr__,pFVar8);
        }
        FLinkerTables::~FLinkerTables(&local_108);
        return __return_storage_ptr__;
      }
    }
    else if (0 < (int)uVar10) {
      uVar10 = uVar10 - 1;
      uVar4 = 0;
      if ((int)uVar10 < local_108.ExportMap.ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar1)();
        return pFVar8;
      }
      if (*(FName *)(local_108.ExportMap.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x68) ==
          local_a10) {
        if ((*(int *)(FVar13.Data + 0xc) < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsExport()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x5b,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar1)();
          return pFVar8;
        }
        pFVar8 = FLinkerTables::GetExportPathName
                           (&local_108,&local_930,local_a00,*(int *)(FVar13.Data + 0xc) + -1,false);
        if (__return_storage_ptr__ != pFVar8) {
          pFVar11 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_930.Data.AllocatorInstance.Data);
        }
        goto LAB_142b62622;
      }
    }
    FVar13.Data = FVar13.Data + 0x68;
  } while( true );
}

// Construct<FAssetRegistryDependencyOptions> @ 142b6ea40

void __cdecl UE::CoreUObject::Private::Construct<FAssetRegistryDependencyOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// ConstructForTests<FAssetRegistryDependencyOptions> @ 142b6ea60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAssetRegistryDependencyOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FAssetRegistryDependencyOptions> @ 142b6eac0

void __cdecl UE::CoreUObject::Private::Destruct<FAssetRegistryDependencyOptions>(void *param_1)

{
  return;
}

// Copy<FAssetRegistryDependencyOptions> @ 142b6ebc0

bool __cdecl
UE::CoreUObject::Private::Copy<FAssetRegistryDependencyOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<UE::AssetRegistry::FSetManageReferencesScratch> @ 142b719f0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::AssetRegistry::FSetManageReferencesScratch>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x60);
  return;
}

// DereferenceIfNecessary<FAssetRegistryConsoleCommands,FAssetRegistryConsoleCommands_*_&> @ 142b71a40

FAssetRegistryConsoleCommands * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FAssetRegistryConsoleCommands,FAssetRegistryConsoleCommands_*_&>
          (FAssetRegistryConsoleCommands **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAssetRegistryImpl,UAssetRegistryImpl_*_&> @ 142b71a60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UAssetRegistryImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAssetRegistryImpl,UAssetRegistryImpl_*_&>
          (UAssetRegistryImpl **param_1)

{
  return *param_1;
}

// GetDataKey<UE::Telemetry::AssetRegistry::FGatherTelemetry> @ 142b74a60

FGuid * __cdecl
UE::Telemetry::Private::GetDataKey<UE::Telemetry::AssetRegistry::FGatherTelemetry>
          (FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = AssetRegistry::FGatherTelemetry::TelemetryID;
  return __return_storage_ptr__;
}

// GetDataKey<UE::Telemetry::AssetRegistry::FStartupTelemetry> @ 142b74a80

FGuid * __cdecl
UE::Telemetry::Private::GetDataKey<UE::Telemetry::AssetRegistry::FStartupTelemetry>
          (FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = AssetRegistry::FStartupTelemetry::TelemetryID;
  return __return_storage_ptr__;
}

// GetDataKey<UE::Telemetry::AssetRegistry::FSynchronousScanTelemetry> @ 142b74aa0

FGuid * __cdecl
UE::Telemetry::Private::GetDataKey<UE::Telemetry::AssetRegistry::FSynchronousScanTelemetry>
          (FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = AssetRegistry::FSynchronousScanTelemetry::TelemetryID;
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 142b77a40

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FSoftObjectPath> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_> @ 142b77ae0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_>
          (ushort param_1,ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_> @ 142b77bb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
          (ushort param_1,ForElementType<UObject_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_> @ 142b77c80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
          (ushort param_1,ForElementType<FAssetData_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_> @ 142b77d50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
          (ushort param_1,ForElementType<FAssetData> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 142b77e20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (ushort param_1,ForElementType<FSoftObjectPath> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 142b77ef0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_> @ 142b77fc0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AssetRegistry::DependsNode::FConstructData_*>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_> @ 142b78040

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FAssetData_const_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_> @ 142b780c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FAssetData> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 142b7f060

/* WARNING: Removing unreachable block (ram,0x000142b7f1e4) */

void __thiscall
`UE::AssetRegistry::Utils::AddNonOverlappingTags'::__l2::<lambda_1>::operator()
          (void *this,TTuple<FName,FAssetTagValueRef> *param_1)

{
  FName FVar1;
  TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar2;
  TOptional<FAssetDataTagMap> *this_00;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TTuple<FName,FString> *pTVar6;
  FAssetDataTagMap *pFVar7;
  FString local_48;
  FString local_38;
  FAssetDataTagMap local_28;
  
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar1.Number = *(uint *)&param_1->field_0x4;
  if ((char)(*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
              ((longlong)this + 8))[1].Pairs.ArrayNum == '\0') {
    bVar4 = FAssetDataTagMapSharedView::Contains
                      ((FAssetDataTagMapSharedView *)(*(longlong *)this + 0x38),FVar1);
    if (!bVar4) {
      this_00 = *(TOptional<FAssetDataTagMap> **)((longlong)this + 8);
      pFVar7 = FAssetDataTagMapSharedView::CopyMap
                         ((FAssetDataTagMapSharedView *)(*(longlong *)this + 0x38),&local_28);
      TOptional<FAssetDataTagMap>::Emplace<FAssetDataTagMap>(this_00,pFVar7);
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)local_28._padding_,(int)local_28._padding_);
      if ((TTuple<FName,FString> *)local_28._padding_ != (TTuple<FName,FString> *)0x0) {
        FMemory::Free((void *)local_28._padding_);
      }
      pTVar2 = *(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                ((longlong)this + 8);
      if (((char)pTVar2[1].Pairs.ArrayNum == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&param_1->field_0x8,&local_38);
      pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
               AllocateMemoryForEmplace<FName_const_&>(pTVar2,(FName *)param_1);
      *(undefined8 *)pTVar6 = *(undefined8 *)param_1;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(FScriptContainerElement **)&pTVar6->field_0x8 = local_38.Data.AllocatorInstance.Data;
      *(int *)&pTVar6->field_0x10 = local_38.Data.ArrayNum;
      *(int *)&pTVar6->field_0x14 = local_38.Data.ArrayMax;
    }
  }
  else {
    pFVar5 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                       (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                         ((longlong)this + 8),FVar1);
    if (pFVar5 == (FString *)0x0) {
      pTVar2 = *(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                ((longlong)this + 8);
      if (((char)pTVar2[1].Pairs.ArrayNum == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&param_1->field_0x8,&local_48);
      pTVar6 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
               AllocateMemoryForEmplace<FName_const_&>(pTVar2,(FName *)param_1);
      *(undefined8 *)pTVar6 = *(undefined8 *)param_1;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(FScriptContainerElement **)&pTVar6->field_0x8 = local_48.Data.AllocatorInstance.Data;
      *(int *)&pTVar6->field_0x10 = local_48.Data.ArrayNum;
      *(int *)&pTVar6->field_0x14 = local_48.Data.ArrayMax;
    }
  }
  return;
}

// operator() @ 142b7f500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::AssetRegistry::Utils::EnumerateMemoryAssets'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1,FAssetData *param_2)

{
  PSRWLOCK pRVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  PSRWLOCK SRWLock;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator> *this_00;
  FAssetDataTagMap *this_01;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  FAssetRegistryTagsContext FVar11;
  FSoftObjectPath *pFVar12;
  FCachedAssetKey *pFVar13;
  FAssetData **ppFVar14;
  FAssetDataTagMapSharedView *pFVar15;
  TArrayView<int_const_,int> *pTVar16;
  FValueId *pFVar17;
  FAssetTagValueRef_u_0 FVar18;
  longlong lVar19;
  int iVar20;
  FAssetData *pFVar21;
  uint uVar22;
  uint uVar23;
  FName *pFVar24;
  FAssetData *pFVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  int iVar27;
  undefined1 auStack_248 [32];
  undefined1 local_228 [4];
  int local_224;
  FAssetDataTagMapSharedView local_220;
  longlong *local_218;
  FAssetTagValueRef_u_0 local_210;
  void *local_208;
  TOptional<FAssetDataTagMap> local_200;
  longlong *local_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  <lambda_1> local_178;
  FName local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FAssetRegistryTagsContext local_158 [2];
  FCachedAssetKey local_148;
  TStringView<wchar_t> local_138;
  FCachedAssetKey local_128;
  TArrayView<int_const_,int> local_118;
  FSoftObjectPath local_108;
  undefined4 local_cc;
  undefined1 local_c8 [72];
  undefined4 local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_208 = this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)local_c8,param_1,AssetRegistryQuery);
  FVar11.Data = (FAssetRegistryTagsContextData *)
                FAssetRegistryTagsContext::FAssetRegistryTagsContext
                          (local_158,(FAssetRegistryTagsContextData *)local_c8);
  UObject::GetAssetRegistryTags(param_1,FVar11,param_2);
  SRWLock = *(PSRWLOCK *)((longlong)this + 0x10);
  pRVar1 = SRWLock + 1;
  if (pRVar1 != (PSRWLOCK)0x0) {
    LOCK();
    *(int *)&pRVar1->Ptr = *(int *)&pRVar1->Ptr + 1;
    UNLOCK();
  }
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  AcquireSRWLockShared(SRWLock);
  if (pRVar1 != (PSRWLOCK)0x0) {
    LOCK();
    *(int *)&pRVar1->Ptr = *(int *)&pRVar1->Ptr + -1;
    UNLOCK();
  }
  this_00 = *(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
              **)((longlong)this + 0x18);
  pFVar12 = FSoftObjectPath::ConstructFromObject(&local_108,param_1);
  pFVar13 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_128,pFVar12);
  local_148.OuterPath = pFVar13->OuterPath;
  local_148.ObjectName = pFVar13->ObjectName;
  ppFVar14 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
             ::Find(this_00,&local_148);
  pFVar25 = (FAssetData *)0x0;
  pFVar21 = pFVar25;
  if (ppFVar14 != (FAssetData **)0x0) {
    pFVar21 = *ppFVar14;
  }
  if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pFVar21 != (FAssetData *)0x0) {
    local_178.ModifiedTags = &local_200;
    local_200.bIsSet = false;
    local_178.ExistingAssetData = param_2;
    FAssetDataTagMapSharedView::
    ForEach<_UE::AssetRegistry::Utils::AddNonOverlappingTags_::__l2::<lambda_1>_>
              (&pFVar21->TagsAndValues,&local_178);
    if (local_200.bIsSet != false) {
      pFVar15 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                          (&local_220,&local_200.TypedValue);
      FAssetDataTagMapSharedView::operator=(&param_2->TagsAndValues,pFVar15);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_220);
    }
    pTVar16 = FAssetData::GetChunkIDs(pFVar21,&local_118);
    FAssetData::SetChunkIDs(param_2,pTVar16);
    if ((local_200.bIsSet != false) &&
       (DestructItems<TTuple<FName,FString>,int>
                  ((TTuple<FName,FString> *)local_200.TypedValue._padding_,
                   (int)local_200.TypedValue._padding_),
       (TTuple<FName,FString> *)local_200.TypedValue._padding_ != (TTuple<FName,FString> *)0x0)) {
      FMemory::Free((void *)local_200.TypedValue._padding_);
    }
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  lVar19 = *(longlong *)this;
  iVar27 = *(int *)(lVar19 + 0x1e8) - *(int *)(lVar19 + 0x214);
  if (iVar27 < 1) {
LAB_142b7f94b:
    uVar10 = (*(code *)**(undefined8 **)((longlong)local_208 + 8))
                       ((*(undefined8 **)((longlong)local_208 + 8))[1],param_2);
LAB_142b7f963:
    local_80 = 0;
    if ((void *)local_c8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
    return (bool)uVar10;
  }
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar19 + 0x1f0);
  uStack_1d8 = 0;
  local_218 = (longlong *)(lVar19 + 0x1e0);
  uVar4 = *(uint *)(lVar19 + 0x208);
  uStack_1d4 = 1;
  uStack_1c4 = uStack_1d8;
  local_1c0 = uStack_1d8;
  if (uVar4 != 0) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x200);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x200) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar2;
    }
    uVar23 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
    pFVar21 = pFVar25;
    local_1c0 = 0;
    uStack_1d8 = 0;
    while (uVar23 == 0) {
      iVar20 = (int)pFVar25;
      local_1c0 = (int)pFVar21 + 0x20;
      pFVar21 = (FAssetData *)(ulonglong)local_1c0;
      uStack_1d8 = iVar20 + 1;
      pFVar25 = (FAssetData *)(ulonglong)uStack_1d8;
      uStack_1c4 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1d8)
      goto LAB_142b7f75e;
      uVar23 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar20 * 4 + 4);
    }
    uStack_1d4 = -uVar23 & uVar23;
    uVar3 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_224 = (int)lVar5;
    uStack_1c4 = (local_1c0 - 1) + local_224;
    if ((int)uVar4 < (int)uStack_1c4) {
      uStack_1c4 = uVar4;
    }
  }
LAB_142b7f75e:
  uVar23 = *(uint *)(lVar19 + 0x208);
  uVar22 = uVar23 & 0xffffffe0;
  uStack_1c8 = 0xffffffff;
  TStack_1a8._padding_ = CONCAT44(uStack_1d4,uStack_1d8);
  TStack_1a8.CurrentBitIndex = uStack_1c4;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  uStack_1bc = local_cc;
  TStack_1a8._28_4_ = local_cc;
  TStack_1a8.BaseBitIndex = local_1c0;
  uStack_188 = CONCAT44(uStack_1b4,iVar27);
  iVar20 = (int)uVar23 >> 5;
  local_1e0 = local_218;
  local_1d0 = pTVar2;
  iStack_1b8 = iVar27;
  local_1b0 = local_218;
  TStack_1a8.Array = pTVar2;
  if ((((int)uVar23 < 0) || ((int)uVar4 < (int)uVar23)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  plVar7 = local_218;
  uVar4 = *(uint *)(lVar19 + 0x208);
  if (uVar23 != uVar4) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x200);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x200) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar2;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) &
             *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_142b7f859;
      uVar23 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar23 = (int)lVar19 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar23) {
      uVar23 = uVar4;
    }
  }
LAB_142b7f859:
  do {
    plVar8 = local_1b0;
    if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar23) && (TStack_1a8.Array == pTVar2)) &&
       (plVar8 == plVar7)) {
      uVar10 = 1;
      goto LAB_142b7f963;
    }
    pFVar24 = (FName *)((longlong)TStack_1a8.CurrentBitIndex * 0x20 + *plVar8);
    if ((*(byte *)&(param_2->TagsAndValues).field0_0x0 & 1) == 0) {
      this_01 = (param_2->TagsAndValues).field0_0x0.Loose;
      if (this_01 != (FAssetDataTagMap *)0x0) {
        FVar18.Loose = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                                 ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                   *)this_01,*pFVar24);
        goto LAB_142b7f8ef;
      }
    }
    else {
      pFVar17 = FixedTagPrivate::FMapHandle::FindValue
                          ((FMapHandle *)&param_2->TagsAndValues,*pFVar24);
      FVar18.Loose = (FString *)0x0;
      if (pFVar17 != (FValueId *)0x0) {
        FVar18.Bits = ((ulonglong)*(ushort *)&(param_2->TagsAndValues).field0_0x0 &
                       0xfffffffffffffffc | 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar17;
      }
LAB_142b7f8ef:
      if (FVar18.Loose != (FString *)0x0) {
        if (pFVar24[2].Number == 0xffffffff) goto LAB_142b7f94b;
        local_168 = pFVar24[1];
        uVar4 = pFVar24[2].ComparisonIndex.Value;
        iStack_160 = uVar4 - 1;
        if (uVar4 == 0) {
          iStack_160 = 0;
        }
        local_138._12_4_ = uStack_15c;
        local_138.Size = iStack_160;
        local_210 = FVar18;
        local_138.DataPtr = (wchar_t *)local_168;
        bVar9 = FAssetTagValueRef::Equals((FAssetTagValueRef *)&local_210.Fixed,&local_138);
        if (bVar9) goto LAB_142b7f94b;
      }
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  } while( true );
}

// operator() @ 142b7f9e0

bool __thiscall
`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1,FFilterData *param_2)

{
  longlong *plVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UPackage *pUVar10;
  UObject *this_00;
  FSoftObjectPath *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  FName local_res10 [2];
  FName local_res20;
  FString local_58;
  FSoftObjectPath local_48;
  
  cVar5 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
  if ((cVar5 != '\0') && ((*(uint *)&param_1->field_0x8 >> 10 & 1) == 0)) {
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    pwVar15 = L"";
    if ((((uint)pUVar10->PackageFlagsPrivate >> 0x14 & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Obj->GetPackage()->HasAnyPackageFlags(PKG_PlayInEditor)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0xb82,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    this_00 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)param_1);
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
    if ((((uint)pUVar10->PackageFlagsPrivate >> 0x14 & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Obj->GetOutermostObject()->GetPackage()->HasAnyPackageFlags(PKG_PlayInEditor)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0xb83,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    param_2->Package = pUVar10;
    if (((((uint)pUVar10->PackageFlagsPrivate & *(uint *)((longlong)this + 0xc)) == 0) &&
        ((*(uint *)((longlong)this + 0x10) & (uint)param_2->Package->PackageFlagsPrivate) ==
         *(uint *)((longlong)this + 0x10))) &&
       ((*(char *)((longlong)this + 8) == '\0' ||
        (bVar6 = UE::AssetRegistry::FFiltering::ShouldSkipAsset(param_1), !bVar6)))) {
      plVar1 = *(longlong **)this;
      FVar2 = (FName)param_2->Package->_padding_;
      local_res10[0] = FVar2;
      if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
LAB_142b7fb5a:
        pFVar11 = FSoftObjectPath::ConstructFromObject(&local_48,param_1);
        FSoftObjectPath::operator=(&param_2->ObjectPath,pFVar11);
        if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        }
        lVar3 = *(longlong *)this;
        if (0 < *(int *)(lVar3 + 0xf8) - *(int *)(lVar3 + 0x124)) {
          uVar8 = ::GetTypeHash(&param_2->ObjectPath);
          iVar9 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
                  FindIndexByHash<FSoftObjectPath>
                            ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                              *)(lVar3 + 0xf0),uVar8,&param_2->ObjectPath);
          if (iVar9 == -1) {
            return false;
          }
        }
        ::FName::ToString(local_res10,&param_2->PackageNameStr);
        if (*(int *)(*(longlong *)this + 0x58) - *(int *)(*(longlong *)this + 0x84) < 1) {
LAB_142b7fc89:
          param_2->Object = param_1;
          return true;
        }
        pFVar12 = FPackageName::GetLongPackagePath(&local_58,&param_2->PackageNameStr);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res20,pwVar15);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        lVar3 = *(longlong *)this;
        uVar8 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
          lVar14 = *(longlong *)(lVar3 + 0x90);
          if (*(longlong *)(lVar3 + 0x90) == 0) {
            lVar14 = lVar3 + 0x88;
          }
          iVar9 = *(int *)(lVar14 + (ulonglong)
                                    (*(int *)(lVar3 + 0x98) - 1U & local_res20.Number + uVar8) * 4);
          if (iVar9 != -1) {
            do {
              if (*(FName *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar9 * 0x10) == local_res20)
              goto LAB_142b7fc89;
              iVar9 = *(int *)(*(longlong *)(lVar3 + 0x50) + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
      }
      else {
        uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
          plVar13 = (longlong *)plVar1[8];
          if ((longlong *)plVar1[8] == (longlong *)0x0) {
            plVar13 = plVar1 + 7;
          }
          iVar9 = *(int *)((longlong)plVar13 +
                          (ulonglong)((int)plVar1[9] - 1U & FVar2.Number + uVar8) * 4);
          if (iVar9 != -1) {
            do {
              if (*(FName *)(*plVar1 + (longlong)iVar9 * 0x10) == FVar2) goto LAB_142b7fb5a;
              iVar9 = *(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
      }
    }
  }
  return false;
}

// operator() @ 142b81be0

void __thiscall
`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l24::<lambda_3>::operator()
          (void *this,UObject *param_1)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UObject_*> FVar5;
  UObject *local_res10 [3];
  
  FVar1 = *(ForElementType<UObject_*> *)this;
  FVar5 = *(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50);
  if (*(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50) == (ForElementType<UObject_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 < (UObject **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x5c) * 8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x58);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x5c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)((longlong)FVar1 + 0x5c));
  }
  *(int *)((longlong)FVar1 + 0x58) = iVar4 + 1;
  FVar5 = *(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50);
  if (*(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50) == (ForElementType<UObject_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UObject **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 142b824e0

bool __thiscall
`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l33::<lambda_4>::operator()
          (void *this,UObject *param_1)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ForElementType<UObject_*> FVar7;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
  if (cVar3 != '\0') {
    FVar1 = *(ForElementType<UObject_*> *)this;
    FVar7 = *(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50);
    if (*(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50) == (ForElementType<UObject_*>)0x0) {
      FVar7 = FVar1;
    }
    if (((ulonglong)FVar7 <= local_res10) &&
       (local_res10 < (UObject **)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar1 + 0x5c) * 8)
       )) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    iVar6 = *(int *)((longlong)FVar1 + 0x58);
    if (iVar6 == *(int *)((longlong)FVar1 + 0x5c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                        (0x808,(ForElementType<UObject_*> *)FVar1,(int *)((longlong)FVar1 + 0x5c));
    }
    *(int *)((longlong)FVar1 + 0x58) = iVar6 + 1;
    FVar7 = *(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50);
    if (*(ForElementType<UObject_*> *)((longlong)FVar1 + 0x50) == (ForElementType<UObject_*>)0x0) {
      FVar7 = FVar1;
    }
    *(UObject **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_res10[0];
  }
  return true;
}

// AddNonOverlappingTags @ 142b831b0

TOptional<FAssetDataTagMap> * __cdecl
UE::AssetRegistry::Utils::AddNonOverlappingTags
          (TOptional<FAssetDataTagMap> *__return_storage_ptr__,FAssetData *param_1,
          FAssetData *param_2)

{
  <lambda_1> local_18;
  
  __return_storage_ptr__->bIsSet = false;
  local_18.ExistingAssetData = param_1;
  local_18.ModifiedTags = __return_storage_ptr__;
  FAssetDataTagMapSharedView::
  ForEach<_UE::AssetRegistry::Utils::AddNonOverlappingTags_::__l2::<lambda_1>_>
            (&param_2->TagsAndValues,&local_18);
  return __return_storage_ptr__;
}

// CreateStandardFilename @ 142b8b370

FString * __cdecl
UE::AssetRegistry::CreateStandardFilename(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  
  FPaths::CreateStandardFilename(__return_storage_ptr__,param_1);
  bVar3 = ::FString::StartsWith(param_1,L"\\\\",2,IgnoreCase);
  ::FString::ReplaceInline(__return_storage_ptr__,L"\\",L"/",CaseSensitive);
  if (bVar3) {
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    *(undefined2 *)(__return_storage_ptr__->Data).AllocatorInstance.Data = 0x5c;
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + 2) = 0x5c;
  }
  return __return_storage_ptr__;
}

// EnumerateAllMemoryAssets @ 142b8ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::AssetRegistry::Utils::EnumerateAllMemoryAssets
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,bool *param_2,
          TFunctionRef<bool___cdecl(FAssetData_&&)> *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  undefined1 auStackY_f8 [32];
  FName local_c8;
  TObjectIteratorBase<1> local_c0;
  FAssetData local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar4 = IsInGameThread();
  if ((((!bVar4) && (bVar4 = (*IsInAsyncLoadingThread)(), !bVar4)) &&
      (bVar4 = IsInParallelLoadingThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0xd2e,
                         L"Enumerating memory assets can only be done on the game thread or in the loader, there are too many GetAssetRegistryTags() still not thread-safe."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_2 = false;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_c0,pUVar6,false,RF_NoFlags,Borrowed);
  lVar3 = local_c0._padding_;
joined_r0x000142b8efae:
  do {
    if (lVar3 == 0) {
LAB_142b8f0f2:
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_c0._padding_ + 0x30));
      return;
    }
    cVar5 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x1c0))();
    if ((cVar5 != '\0') && (bVar4 = FFiltering::ShouldSkipAsset(*(UObject **)(lVar3 + 8)), !bVar4))
    {
      FAssetData::FAssetData(&local_98,*(UObject **)(lVar3 + 8),AllowBlueprintClass);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (param_1,&local_c8,(bool *)&local_98);
      cVar5 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_98);
      if (cVar5 == '\0') {
        *param_2 = true;
        if (local_98.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_98.ChunkIDs.AllocatorInstance.SecondaryData);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_98.TagsAndValues);
        goto LAB_142b8f0f2;
      }
      if (local_98.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_98.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_98.TagsAndValues);
    }
LAB_142b8f050:
    do {
      do {
        bVar4 = FUObjectArray::TIterator::Advance((TIterator *)&local_c0);
        lVar3 = local_c0._padding_;
        if (!bVar4) goto joined_r0x000142b8efae;
        if (local_c0._padding_ == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(local_c0._padding_ + 8);
        }
      } while ((local_c0.ExclusionFlags & *(EObjectFlags *)(lVar8 + 8)) != RF_NoFlags);
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      if (local_c0.Class != pUVar6) {
        iVar1 = (int)(local_c0.Class)->_padding_;
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
            &(local_c0.Class)->_padding_)) goto LAB_142b8f050;
      }
      pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar8 + 0xc));
    } while ((local_c0.InternalExclusionFlags &
             (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// EnumerateMemoryAssets @ 142b8fc40

void __cdecl
UE::AssetRegistry::Utils::EnumerateMemoryAssets
          (FARCompiledFilter *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,bool *param_3,
          FRWLockWithPriority *param_4,FAssetRegistryState *param_5,
          TFunctionRef<bool___cdecl(FAssetData_&&)> *param_6,bool param_7)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  code *local_38;
  FARCompiledFilter **local_30;
  FARCompiledFilter *local_28;
  TFunctionRef<bool___cdecl(FAssetData_&&)> *local_20;
  FRWLockWithPriority *local_18;
  FAssetRegistryState *local_10;
  
  if ((((((*(int *)&(param_1->TagsAndValues).field_0x8 !=
           *(int *)&(param_1->TagsAndValues).field_0x34 ||
          *(int *)&(param_1->ClassPaths).Elements.field_0x8 !=
          *(int *)&(param_1->ClassPaths).Elements.field_0x34) ||
         *(int *)&(param_1->SoftObjectPaths).Elements.field_0x8 !=
         *(int *)&(param_1->SoftObjectPaths).Elements.field_0x34) ||
        *(int *)&(param_1->PackagePaths).Elements.field_0x8 !=
        *(int *)&(param_1->PackagePaths).Elements.field_0x34) ||
       *(int *)&(param_1->PackageNames).Elements.field_0x8 !=
       *(int *)&(param_1->PackageNames).Elements.field_0x34) || param_1->WithPackageFlags != 0) ||
      param_1->WithoutPackageFlags != 0) {
    bVar3 = IsFilterValid(param_1);
    if (bVar3) goto LAB_142b8fce6;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!InFilter.IsEmpty() && Utils::IsFilterValid(InFilter)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0xc25,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142b8fce6:
  pIVar2 = AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*pIVar2 + 0x428))(pIVar2);
  local_20 = param_6;
  local_10 = param_5;
  local_30 = &local_28;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssets'::__l2::<lambda_1>,bool,UObject_const_*,FAssetData_&&>
             ::Call;
  local_28 = param_1;
  local_18 = param_4;
  EnumerateMemoryAssetsHelper
            (param_1,param_2,param_3,
             (TFunctionRef<bool___cdecl(UObject_const_*,FAssetData_&&)> *)&local_38,param_7);
  pIVar2 = AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8fdcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0x430))(pIVar2);
  return;
}

// EnumerateMemoryAssetsHelper @ 142b8fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper
          (FARCompiledFilter *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,bool *param_3,
          TFunctionRef<bool___cdecl(UObject_const_*,FAssetData_&&)> *param_4,bool param_5)

{
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar1;
  FName *pFVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  undefined1 *puVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  FName FVar9;
  FARCompiledFilter *pFVar10;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  char cVar13;
  UClass *pUVar14;
  FUObjectItem *pFVar15;
  FString *pFVar16;
  UPackage *pUVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  FFilterData *pFVar24;
  int iVar25;
  int iVar26;
  undefined1 *puVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  FFilterData *pFVar31;
  undefined1 *puVar32;
  undefined1 auStackY_4e8 [32];
  undefined1 local_498;
  undefined1 local_497;
  undefined1 local_496;
  undefined1 local_495 [5];
  ForAnyElementType local_490;
  undefined8 local_488;
  FFilterData local_478;
  FARCompiledFilter *local_438;
  int iStack_430;
  uint uStack_42c;
  undefined1 *local_428;
  undefined4 uStack_420;
  int iStack_41c;
  int local_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_408;
  TFunctionRef<bool___cdecl(UObject_const_*,FAssetData_&&)> *local_400;
  bool *local_3f8;
  FFilterData local_3e8;
  FName local_3a8;
  int local_3a0;
  int local_39c;
  FName local_398;
  longlong local_390;
  UObject *local_388;
  FFilterData *local_380;
  FFilterData *local_378;
  longlong local_370;
  UObject *local_368;
  FAssetDataTagMap local_360;
  FARCompiledFilter *local_348;
  bool local_340;
  uint local_33c;
  uint local_338;
  FAssetDataTagMap local_330;
  FARCompiledFilter *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  TObjectIteratorBase<1> local_2b8;
  code *local_290;
  FFilterData **local_288;
  code *local_280;
  FFilterData **local_278;
  int *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  int *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FTopLevelAssetPath local_248;
  TArrayView<int_const_,int> local_238;
  FTopLevelAssetPath local_228;
  FString local_218;
  FTopLevelAssetPath local_208;
  FTopLevelAssetPath local_1f8;
  TArrayView<int_const_,int> local_1e8;
  FTopLevelAssetPath local_1d8;
  FString local_1c8 [2];
  undefined4 local_19c;
  undefined4 local_17c;
  FFilterData local_178;
  FFilterData *local_128;
  uint local_120;
  undefined4 local_11c;
  FAssetData local_118;
  FAssetData local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_408 = param_2;
  local_400 = param_4;
  local_3f8 = param_3;
  bVar12 = IsInGameThread();
  if ((((!bVar12) && (bVar12 = (*IsInAsyncLoadingThread)(), !bVar12)) &&
      (bVar12 = IsInParallelLoadingThread(), !bVar12)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                          ,0xb5e,
                          L"Enumerating in-memory assets can only be done on the game thread or in the loader, there are too many GetAssetRegistryTags() still not thread-safe."
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar1 = &param_1->ClassPaths;
  *param_3 = false;
  iVar29 = *(int *)&(param_1->ClassPaths).Elements.field_0x8 -
           *(int *)&(param_1->ClassPaths).Elements.field_0x34;
  local_340 = param_5;
  local_33c = param_1->WithoutPackageFlags | 0x20;
  local_338 = param_1->WithPackageFlags;
  local_348 = param_1;
  if ((0 < iVar29) ||
     (0 < *(int *)&(param_1->PackageNames).Elements.field_0x8 -
          *(int *)&(param_1->PackageNames).Elements.field_0x34)) {
    iVar26 = 0;
    local_418 = 0;
    local_11c = 10;
    local_128 = (FFilterData *)0x0;
    iStack_430 = 0;
    local_120 = 0;
    iStack_41c = 0;
    if (iVar29 == 0) {
      iVar29 = *(int *)&(param_1->PackageNames).Elements.field_0x28;
      local_428 = &(param_1->PackageNames).Elements.field_0x10;
      uStack_42c = 1;
      if (iVar29 != 0) {
        puVar28 = *(uint **)&(param_1->PackageNames).Elements.field_0x20;
        if (puVar28 == (uint *)0x0) {
          puVar28 = (uint *)local_428;
        }
        uVar22 = *puVar28;
        iStack_430 = 0;
        local_418 = 0;
        while (uVar22 == 0) {
          iStack_430 = iStack_430 + 1;
          local_418 = local_418 + 0x20;
          if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_430)
          goto LAB_142b905f2;
          uVar22 = puVar28[iStack_430];
        }
        uStack_42c = ~(uVar22 - 1) & uVar22;
        uVar21 = (ulonglong)uStack_42c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_3a0 = (int)lVar7;
        iStack_41c = local_3a0 + -1 + local_418;
        if (iVar29 < iStack_41c) {
LAB_142b905f2:
          iStack_41c = iVar29;
        }
      }
      puVar32 = &(param_1->PackageNames).Elements.field_0x10;
      uVar22 = *(uint *)&(param_1->PackageNames).Elements.field_0x28;
      uVar30 = uVar22 & 0xffffffe0;
      uStack_414 = local_19c;
      iStack_410 = *(int *)&(param_1->PackageNames).Elements.field_0x8 -
                   *(int *)&(param_1->PackageNames).Elements.field_0x34;
      uStack_420 = 0xffffffff;
      TStack_310.CurrentBitIndex = iStack_41c;
      TStack_310.UnvisitedBitMask = 0xffffffff;
      TStack_310._padding_ = CONCAT44(uStack_42c,iStack_430);
      iVar29 = (int)uVar22 >> 5;
      TStack_310._28_4_ = local_19c;
      TStack_310.BaseBitIndex = local_418;
      uStack_2f0 = CONCAT44(uStack_40c,iStack_410);
      local_438 = param_1;
      local_318 = param_1;
      TStack_310.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_428;
      if ((((int)uVar22 < 0) || (*(int *)&(param_1->PackageNames).Elements.field_0x28 < (int)uVar22)
          ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_1->PackageNames).Elements.field_0x28;
      if (uVar22 != uVar4) {
        puVar5 = *(undefined1 **)&(param_1->PackageNames).Elements.field_0x20;
        puVar27 = puVar32;
        if (puVar5 != (undefined1 *)0x0) {
          puVar27 = puVar5;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar29 * 4);
        while (uVar22 == 0) {
          iVar29 = iVar29 + 1;
          uVar30 = uVar30 + 0x20;
          uVar22 = uVar4;
          if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar29)
          goto LAB_142b90710;
          uVar22 = *(uint *)(puVar27 + (longlong)iVar29 * 4);
        }
        uVar21 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_39c = (int)lVar7;
        uVar22 = (uVar30 - 1) + local_39c;
        if ((int)uVar4 < (int)uVar22) {
          uVar22 = uVar4;
        }
      }
LAB_142b90710:
      while( true ) {
        pFVar10 = local_318;
        if (*(int *)&(local_318->PackageNames).Elements.field_0x8 -
            *(int *)&(local_318->PackageNames).Elements.field_0x34 != (int)uStack_2f0) {
          local_496 = 0;
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_496);
        }
        if (((TStack_310.CurrentBitIndex == uVar22) &&
            (TStack_310.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar32)) &&
           (pFVar10 == param_1)) break;
        FVar6 = *(FName *)(*(longlong *)&(pFVar10->PackageNames).Elements +
                          (longlong)TStack_310.CurrentBitIndex * 0x10);
        pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
        pUVar17 = (UPackage *)
                  StaticFindObjectFast(pUVar14,(UObject *)0x0,FVar6,None,RF_NoFlags,Borrowed);
        if (pUVar17 != (UPackage *)0x0) {
          local_378 = &local_178;
          local_280 = Core::Private::Function::
                      TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l33::<lambda_4>,bool,UObject_*>
                      ::Call;
          local_278 = &local_378;
          ForEachObjectWithPackage
                    (pUVar17,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_280,true,RF_NoFlags,
                     Borrowed);
        }
        TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
      }
    }
    else {
      iVar25 = *(int *)&(param_1->ClassPaths).Elements.field_0x28;
      puVar32 = &(param_1->ClassPaths).Elements.field_0x10;
      uStack_42c = 1;
      iVar20 = 0;
      local_418 = 0;
      if (iVar25 != 0) {
        puVar28 = *(uint **)&(param_1->ClassPaths).Elements.field_0x20;
        if (puVar28 == (uint *)0x0) {
          puVar28 = (uint *)puVar32;
        }
        uVar22 = *puVar28;
        iVar26 = 0;
        while (uVar22 == 0) {
          iVar26 = iVar26 + 1;
          local_418 = local_418 + 0x20;
          iStack_41c = iVar25;
          if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_142b9039c;
          uVar22 = puVar28[iVar26];
        }
        uStack_42c = ~(uVar22 - 1) & uVar22;
        uVar21 = (ulonglong)uStack_42c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_398.Number = (uint)lVar7;
        iStack_41c = (local_398.Number - 1) + local_418;
        if (iVar25 < iStack_41c) {
          iStack_41c = iVar25;
        }
LAB_142b9039c:
        iVar20 = *(int *)&(param_1->ClassPaths).Elements.field_0x28;
      }
      uVar22 = *(uint *)&(param_1->ClassPaths).Elements.field_0x28;
      uVar30 = uVar22 & 0xffffffe0;
      uStack_420 = 0xffffffff;
      TStack_2e0._padding_ = CONCAT44(uStack_42c,iVar26);
      TStack_2e0.CurrentBitIndex = iStack_41c;
      TStack_2e0.UnvisitedBitMask = 0xffffffff;
      uStack_414 = local_17c;
      TStack_2e0._28_4_ = local_17c;
      TStack_2e0.BaseBitIndex = local_418;
      uStack_2c0 = CONCAT44(uStack_40c,iVar29);
      iVar25 = (int)uVar22 >> 5;
      local_438 = (FARCompiledFilter *)pTVar1;
      iStack_430 = iVar26;
      local_428 = puVar32;
      iStack_410 = iVar29;
      local_2e8 = pTVar1;
      TStack_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
      if ((((int)uVar22 < 0) || (iVar20 < (int)uVar22)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_1->ClassPaths).Elements.field_0x28;
      if (uVar22 != uVar4) {
        puVar5 = *(undefined1 **)&(param_1->ClassPaths).Elements.field_0x20;
        puVar27 = puVar32;
        if (puVar5 != (undefined1 *)0x0) {
          puVar27 = puVar5;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar25 * 4);
        while (uVar22 == 0) {
          iVar25 = iVar25 + 1;
          uVar30 = uVar30 + 0x20;
          uVar22 = uVar4;
          if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar25)
          goto LAB_142b904b0;
          uVar22 = *(uint *)(puVar27 + (longlong)iVar25 * 4);
        }
        uVar21 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_3a8.Number = (uint)lVar7;
        uVar22 = (local_3a8.Number - 1) + uVar30;
        if ((int)uVar4 < (int)uVar22) {
          uVar22 = uVar4;
        }
      }
LAB_142b904b0:
      while( true ) {
        pTVar11 = local_2e8;
        if (*(int *)&(local_2e8->Elements).field_0x8 - *(int *)&(local_2e8->Elements).field_0x34 !=
            (int)uStack_2c0) {
          local_497 = 0;
          `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_497);
        }
        if (((TStack_2e0.CurrentBitIndex == uVar22) &&
            (TStack_2e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar32)) &&
           (pTVar11 == pTVar1)) break;
        pFVar2 = (FName *)(*(longlong *)&pTVar11->Elements +
                          (longlong)TStack_2e0.CurrentBitIndex * 0x18);
        FVar6 = *pFVar2;
        FVar9 = pFVar2[1];
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        local_208.PackageName = FVar6;
        local_208.AssetName = FVar9;
        pUVar14 = (UClass *)StaticFindObject(pUVar14,&local_208,None);
        if (pUVar14 != (UClass *)0x0) {
          local_380 = &local_178;
          local_290 = Core::Private::Function::
                      TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l24::<lambda_3>,void,UObject_*>
                      ::Call;
          local_288 = &local_380;
          ForEachObjectOfClass
                    (pUVar14,(TFunctionRef<void___cdecl(UObject_*)> *)&local_290,false,RF_NoFlags,
                     Borrowed);
        }
        TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
      }
    }
    uVar22 = local_120;
    uVar21 = (ulonglong)(int)local_120;
    local_3e8.PackageNameStr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.PackageNameStr.Data.ArrayNum = 0;
    local_3e8.PackageNameStr.Data.ArrayMax = 0;
    pFVar31 = &local_178;
    if (local_128 != (FFilterData *)0x0) {
      pFVar31 = local_128;
    }
    local_3e8.ObjectPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_3e8.ObjectPath.AssetPath.PackageName.Number = 0;
    local_3e8.ObjectPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_3e8.ObjectPath.AssetPath.AssetName.Number = 0;
    pFVar24 = &local_178;
    if (local_128 != (FFilterData *)0x0) {
      pFVar24 = local_128;
    }
    local_3e8.ObjectPath.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.ObjectPath.SubPathString.Data.ArrayNum = 0;
    local_3e8.ObjectPath.SubPathString.Data.ArrayMax = 0;
    pFVar31 = (FFilterData *)(&pFVar31->Object + uVar21);
    do {
      if ((uint)uVar21 != uVar22) {
        local_495[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_495);
      }
      if (pFVar24 == pFVar31) goto LAB_142b90a05;
      bVar12 = `UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l2::<lambda_1>::operator()
                         (&local_348,pFVar24->Object,&local_3e8);
      if (bVar12) {
        local_370 = (local_3e8.Package)->_padding_;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (local_408,&local_398,(bool *)&local_370);
        aVar3 = (local_3e8.Package)->PackageFlagsPrivate;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          atexit(`UPackage::GetChunkIDs'::__l2::_dynamic_atexit_destructor_for__Dummy__);
          _Init_thread_footer(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        iVar29 = DAT_155015f08;
        local_268 = _Dummy;
        if ((DAT_155015f08 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_330._padding_ = 0;
        local_330._padding_ = 0;
        local_330.RefCount.Counter = 0;
        local_330._20_4_ = 0;
        iStack_260 = iVar29;
        UStruct::GetStructPathName(*(UStruct **)&(local_3e8.Object)->field_0x10,&local_1f8);
        FVar9 = local_1f8.AssetName;
        FVar6 = local_1f8.PackageName;
        pFVar16 = FSoftObjectPath::ToString(&local_3e8.ObjectPath,local_1c8);
        local_1e8._12_4_ = uStack_25c;
        local_1e8.ArrayNum = iStack_260;
        local_1e8.DataPtr = local_268;
        local_1d8.PackageName = FVar6;
        local_1d8.AssetName = FVar9;
        FAssetData::FAssetData
                  (&local_b0,&local_3e8.PackageNameStr,pFVar16,&local_1d8,&local_330,&local_1e8,
                   (uint)aVar3);
        if (local_1c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8[0].Data.AllocatorInstance.Data);
        }
        local_368 = local_3e8.Object;
        cVar13 = (**(code **)local_400)(*(undefined8 *)&local_400->field_0x8,&local_368,&local_b0);
        if (local_b0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_b0.ChunkIDs.AllocatorInstance.SecondaryData);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_b0.TagsAndValues);
        if (cVar13 == '\0') goto LAB_142b909fe;
      }
      uVar21 = (ulonglong)local_120;
      pFVar24 = (FFilterData *)&pFVar24->Package;
    } while( true );
  }
  local_490.Data = (FScriptContainerElement *)0x0;
  local_488 = 0;
  local_478.PackageNameStr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.PackageNameStr.Data.ArrayNum = 0;
  local_478.PackageNameStr.Data.ArrayMax = 0;
  local_478.ObjectPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_478.ObjectPath.AssetPath.PackageName.Number = 0;
  local_478.ObjectPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_478.ObjectPath.AssetPath.AssetName.Number = 0;
  local_478.ObjectPath.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.ObjectPath.SubPathString.Data.ArrayNum = 0;
  local_478.ObjectPath.SubPathString.Data.ArrayMax = 0;
  pUVar14 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_2b8,pUVar14,false,RF_NoFlags,Borrowed);
  lVar7 = local_2b8._padding_;
joined_r0x000142b8ff2d:
  if (lVar7 != 0) {
    bVar12 = `UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l2::<lambda_1>::operator()
                       (&local_348,*(UObject **)(lVar7 + 8),&local_478);
    if (bVar12) {
      if (((local_490.Data <= &local_478) &&
          (&local_478 < (FFilterData *)(local_490.Data + (longlong)local_488._4_4_ * 0x40))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar29 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar29 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar29 + 1);
      pFVar18 = local_490.Data + (longlong)iVar29 * 0x40;
      *(UObject **)&pFVar18->field_0x0 = local_478.Object;
      *(UPackage **)(pFVar18 + 8) = local_478.Package;
      *(undefined8 *)(pFVar18 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar18 + 0x10) =
           local_478.PackageNameStr.Data.AllocatorInstance.Data;
      local_478.PackageNameStr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar18 + 0x18) = local_478.PackageNameStr.Data.ArrayNum;
      *(int *)(pFVar18 + 0x1c) = local_478.PackageNameStr.Data.ArrayMax;
      local_478.PackageNameStr.Data.ArrayNum = 0;
      local_478.PackageNameStr.Data.ArrayMax = 0;
      *(FName *)(pFVar18 + 0x20) = local_478.ObjectPath.AssetPath.PackageName;
      *(FName *)(pFVar18 + 0x28) = local_478.ObjectPath.AssetPath.AssetName;
      *(undefined8 *)(pFVar18 + 0x30) = 0;
      *(FScriptContainerElement **)(pFVar18 + 0x30) =
           local_478.ObjectPath.SubPathString.Data.AllocatorInstance.Data;
      local_478.ObjectPath.SubPathString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(pFVar18 + 0x38) = local_478.ObjectPath.SubPathString.Data.ArrayNum;
      *(int *)(pFVar18 + 0x3c) = local_478.ObjectPath.SubPathString.Data.ArrayMax;
      local_478.ObjectPath.SubPathString.Data.ArrayNum = 0;
      local_478.ObjectPath.SubPathString.Data.ArrayMax = 0;
    }
LAB_142b90060:
    do {
      do {
        bVar12 = FUObjectArray::TIterator::Advance((TIterator *)&local_2b8);
        lVar7 = local_2b8._padding_;
        if (!bVar12) goto joined_r0x000142b8ff2d;
        lVar23 = 0;
        if (local_2b8._padding_ != 0) {
          lVar23 = *(longlong *)(local_2b8._padding_ + 8);
        }
      } while ((local_2b8.ExclusionFlags & *(EObjectFlags *)(lVar23 + 8)) != RF_NoFlags);
      pUVar14 = Z_Construct_UClass_UObject_NoRegister();
      if (local_2b8.Class != pUVar14) {
        iVar29 = (int)(local_2b8.Class)->_padding_;
        if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar29) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar29 * 8) !=
            &(local_2b8.Class)->_padding_)) goto LAB_142b90060;
      }
      pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar23 + 0xc));
    } while ((local_2b8.InternalExclusionFlags &
             (EInternalObjectFlags)((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
    goto joined_r0x000142b8ff2d;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_2b8._padding_ + 0x30));
  iVar29 = (int)local_488;
  pFVar31 = (FFilterData *)(local_490.Data + (longlong)(int)local_488 * 0x40);
  pFVar18 = local_490.Data + 8;
  while( true ) {
    if ((int)local_488 != iVar29) {
      local_498 = 0;
      `TCheckedPointerIterator<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l2::FFilterData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_498);
    }
    pFVar24 = (FFilterData *)(pFVar18 + -8);
    if (pFVar24 == pFVar31) goto LAB_142b902ca;
    local_390 = (*(UPackage **)pFVar18)->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (local_408,&local_3a8,(bool *)&local_390);
    aVar3 = (*(UPackage **)pFVar18)->PackageFlagsPrivate;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`UPackage::GetChunkIDs'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar26 = DAT_155015f08;
    local_258 = _Dummy;
    if ((DAT_155015f08 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_360._padding_ = 0;
    local_360._padding_ = 0;
    local_360.RefCount.Counter = 0;
    local_360._20_4_ = 0;
    iStack_250 = iVar26;
    UStruct::GetStructPathName(*(UStruct **)&pFVar24->Object->field_0x10,&local_248);
    FVar9 = local_248.AssetName;
    FVar6 = local_248.PackageName;
    pFVar16 = FSoftObjectPath::ToString((FSoftObjectPath *)(pFVar18 + 0x18),&local_218);
    local_238._12_4_ = uStack_24c;
    local_238.ArrayNum = iStack_250;
    local_238.DataPtr = local_258;
    local_228.PackageName = FVar6;
    local_228.AssetName = FVar9;
    FAssetData::FAssetData
              (&local_118,(FString *)(pFVar18 + 8),pFVar16,&local_228,&local_360,&local_238,
               (uint)aVar3);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_388 = pFVar24->Object;
    cVar13 = (**(code **)local_400)(*(undefined8 *)&local_400->field_0x8,&local_388,&local_118);
    if (local_118.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_118.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_118.TagsAndValues);
    if (cVar13 == '\0') break;
    pFVar18 = pFVar18 + 0x40;
  }
  *local_3f8 = true;
LAB_142b902ca:
  if (local_478.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_478.PackageNameStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.PackageNameStr.Data.AllocatorInstance.Data);
  }
  DestructItems<_UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper_::__l2::FFilterData,int>
            ((FFilterData *)local_490.Data,(int)local_488);
  FVar19.Data = local_490.Data;
LAB_142b90a28:
  if ((FFilterData *)FVar19.Data != (FFilterData *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return;
LAB_142b909fe:
  *local_3f8 = true;
LAB_142b90a05:
  if (local_3e8.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
  }
  FVar19.Data = (FScriptContainerElement *)local_128;
  if (local_3e8.PackageNameStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.PackageNameStr.Data.AllocatorInstance.Data);
    FVar19.Data = (FScriptContainerElement *)local_128;
  }
  goto LAB_142b90a28;
}

// GetAssetAvailability @ 142b93f40

Type __cdecl UE::AssetRegistry::Utils::GetAssetAvailability(FAssetData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  Type TVar4;
  IPlatformChunkInstall *pIVar5;
  int iVar6;
  int *piVar7;
  TArrayView<int_const_,int> local_18;
  
  pIVar5 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  iVar6 = 0;
  FAssetData::GetChunkIDs(param_1,&local_18);
  piVar7 = local_18.DataPtr;
  if (local_18.DataPtr != local_18.DataPtr + local_18.ArrayNum) {
    do {
      iVar3 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,*piVar7);
      if (iVar3 == 3) {
        return LocalFast;
      }
      if (iVar6 < iVar3) {
        iVar6 = iVar3;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != local_18.DataPtr + local_18.ArrayNum);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        return NotAvailable;
      }
      if (iVar6 != 2) {
        if ((iVar6 != 3) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                               ,0x1106,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4 = (*pcVar1)();
          return TVar4;
        }
        return LocalFast;
      }
      return LocalSlow;
    }
  }
  return DoesNotExist;
}

// GetAssetAvailabilityProgress @ 142b94170

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UE::AssetRegistry::Utils::GetAssetAvailabilityProgress(FAssetData *param_1,Type param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  IPlatformChunkInstall *pIVar4;
  int *piVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  TArrayView<int_const_,int> local_48 [4];
  
  if ((PercentageComplete < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReportType == EAssetAvailabilityProgressReportingType::PercentageComplete || ReportType == EAssetAvailabilityProgressReportingType::ETA"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x111a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar7 = (float)(*pcVar1)();
    return fVar7;
  }
  pIVar4 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  if (param_2 == ETA) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
    if ((param_2 != PercentageComplete) && (1 < (byte)LogAssetRegistry._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  fVar7 = __real_7f7fffff;
  FAssetData::GetChunkIDs(param_1,local_48);
  fVar2 = __real_42c80000;
  piVar5 = local_48[0].DataPtr;
  do {
    if (piVar5 == local_48[0].DataPtr + local_48[0].ArrayNum) {
LAB_142b94273:
      if (cVar6 != '\0') {
        return fVar2 - fVar7;
      }
      return fVar7;
    }
    fVar8 = (float)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,*piVar5,cVar6);
    if (cVar6 != '\0') {
      fVar8 = fVar2 - fVar8;
    }
    if (fVar8 <= 0.0) {
      fVar7 = 0.0;
      goto LAB_142b94273;
    }
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    piVar5 = piVar5 + 1;
    fVar7 = fVar8;
  } while( true );
}

// GetAssetAvailabilityProgressTypeSupported @ 142b94340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UE::AssetRegistry::Utils::GetAssetAvailabilityProgressTypeSupported(Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  IPlatformChunkInstall *pIVar2;
  undefined8 uVar3;
  
  pIVar2 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x20);
  if (param_1 == ETA) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if ((param_1 != PercentageComplete) && (1 < (byte)LogAssetRegistry._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b943b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,uVar3);
  return (bool)uVar1;
}

// GetAssetForPackages @ 142b94770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::AssetRegistry::GetAssetForPackages
          (TArrayView<FName_const_,int> *param_1,
          TMap<FName,FAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetData,0>_>
          *param_2)

{
  uint *puVar1;
  FName FVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  FAssetData *pFVar9;
  ForElementType<FAssetData_const_*> FVar10;
  FAssetData *pFVar11;
  longlong lVar12;
  undefined1 *puVar13;
  FName *pFVar14;
  FName FVar15;
  ForElementType<int> _Src;
  FName *pFVar16;
  uint uVar17;
  FAssetData *pFVar18;
  undefined1 auStackY_2a8 [32];
  FNameFastLess local_258 [8];
  FName local_250;
  FAssetData *local_248;
  int local_240;
  undefined4 local_23c;
  FName local_238;
  FAssetData *local_230;
  int local_228;
  int local_224;
  FName *local_220;
  FName *local_218 [2];
  ForElementType<FAssetData_const_*> local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  ForElementType<FAssetData_const_*> local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TArrayView<FAssetData_const_*_const,int> local_1e8;
  FName local_1d8;
  FName FStack_1d0;
  TArrayView<FAssetData_const_*_const,int> local_1c8;
  ForElementType<FAssetData_const_*> local_1b8;
  int local_1a8;
  int local_1a4 [3];
  FARFilter local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FARFilter::FARFilter(&local_198);
  pFVar16 = param_1->DataPtr;
  pFVar14 = pFVar16 + param_1->ArrayNum;
  for (; pFVar16 != pFVar14; pFVar16 = pFVar16 + 1) {
    local_238 = *pFVar16;
    if (((local_198.PackageNames.AllocatorInstance.Data <= &local_238) &&
        (&local_238 <
         (FName *)((longlong)local_198.PackageNames.AllocatorInstance.Data +
                  (longlong)local_198.PackageNames.ArrayMax * 8))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_198.PackageNames.ArrayNum == local_198.PackageNames.ArrayMax) {
      local_198.PackageNames.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,(ForAnyElementType *)&local_198,&local_198.PackageNames.ArrayMax);
    }
    *(FName *)(local_198.PackageNames.AllocatorInstance.Data +
              (longlong)local_198.PackageNames.ArrayNum * 8) = local_238;
    local_198.PackageNames.ArrayNum = local_198.PackageNames.ArrayNum + 1;
  }
  local_248 = (FAssetData *)0x0;
  local_240 = 0;
  local_23c = 0;
  if ((Private::IAssetRegistrySingleton::Singleton != (IAssetRegistry *)0x0) &&
     ((**(code **)((longlong)*Private::IAssetRegistrySingleton::Singleton + 0x50))
                (Private::IAssetRegistrySingleton::Singleton,&local_198,&local_248,1),
     local_240 != 0)) {
    AlgoImpl::
    IntroSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess>
              (local_248,local_240,(TProjectionMemberData<FName_FAssetData::*>)0x0,local_258[0]);
    local_1b8.SecondaryData = (ForElementType<FAssetData_const_*>)0x0;
    local_1a8 = 0;
    local_1a4[0] = 1;
    if ((local_240 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar5 = local_240;
    local_250 = local_248->PackageName;
    pFVar18 = local_248 + local_240;
    pFVar11 = local_248;
    while( true ) {
      if (local_240 != iVar5) {
        local_258[0] = (FNameFastLess)0x0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_258);
      }
      iVar6 = local_1a8;
      if (pFVar11 == pFVar18) break;
      if (local_250 != pFVar11->PackageName) {
        local_208 = (ForElementType<FAssetData_const_*>)&local_1b8;
        if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
          local_208 = local_1b8.SecondaryData;
        }
        if ((local_1a8 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_200 = iVar6;
        local_1e8._12_4_ = uStack_1fc;
        local_1e8.ArrayNum = iVar6;
        local_1e8.DataPtr = (FAssetData **)local_208;
        pFVar9 = GetMostImportantAsset(&local_1e8,None);
        FVar15 = local_250;
        uVar8 = ::GetTypeHash(local_250.ComparisonIndex.Value);
        uVar8 = uVar8 + FVar15.Number;
        if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
          puVar13 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar13 = *(undefined1 **)&param_2->field_0x40;
          }
          uVar17 = *(uint *)(puVar13 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar8) * 4);
          if (uVar17 != 0xffffffff) {
            do {
              pFVar14 = (FName *)((longlong)(int)uVar17 * 0x78 + *(longlong *)param_2);
              if (*pFVar14 == local_250) {
                if (pFVar14 != (FName *)0x0) goto LAB_142b94a7c;
                break;
              }
              uVar17 = pFVar14[0xe].ComparisonIndex.Value;
            } while (uVar17 != 0xffffffff);
          }
        }
        local_220 = &local_250;
        TSet<TTuple<FName,FAssetData>,TDefaultMapHashableKeyFuncs<FName,FAssetData,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,FAssetData>,TDefaultMapHashableKeyFuncs<FName,FAssetData,0>,FDefaultSetAllocator>
                    *)param_2,(uint)&local_228,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                   (bool *)&local_220);
        pFVar14 = (FName *)((longlong)local_228 * 0x78 + *(longlong *)param_2);
LAB_142b94a7c:
        pFVar14[1] = pFVar9->PackageName;
        pFVar14[2] = pFVar9->PackagePath;
        pFVar14[3] = pFVar9->AssetName;
        pFVar14[4] = pFVar9->AssetClass;
        FVar15 = (pFVar9->AssetClassPath).AssetName;
        pFVar14[5] = (pFVar9->AssetClassPath).PackageName;
        pFVar14[6] = FVar15;
        pFVar14[7].ComparisonIndex.Value = (pFVar9->ChunkArrayRegistryHandle).Index;
        pFVar14[7].Number = pFVar9->PackageFlags;
        FAssetDataTagMapSharedView::operator=
                  ((FAssetDataTagMapSharedView *)(pFVar14 + 8),&pFVar9->TagsAndValues);
        FVar15 = (FName)(pFVar9->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
        FVar2 = (FName)(pFVar9->TaggedAssetBundles).Object;
        if (FVar15 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar15 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar15 + 8) + 1);
          UNLOCK();
        }
        local_1d8 = pFVar14[9];
        FStack_1d0 = pFVar14[10];
        pFVar14[9] = FVar2;
        pFVar14[10] = FVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FStack_1d0);
        FVar15 = (FName)(pFVar14 + 0xb);
        if (FVar15 != (FName)&pFVar9->ChunkIDs) {
          FVar3 = (pFVar9->ChunkIDs).AllocatorInstance.SecondaryData;
          puVar1 = &pFVar14[0xd].Number;
          uVar8 = (pFVar9->ChunkIDs).ArrayNum;
          uVar17 = *puVar1;
          _Src = (ForElementType<int>)&pFVar9->ChunkIDs;
          if (FVar3 != (ForElementType<int>)0x0) {
            _Src = FVar3;
          }
          pFVar14[0xd].ComparisonIndex.Value = uVar8;
          if ((uVar8 == 0) && (uVar17 == 0)) {
            *puVar1 = 2;
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,uVar8,uVar17,(ForElementType<int> *)FVar15,uVar8,(int *)puVar1);
            if (pFVar14[0xc] != (FName)0x0) {
              FVar15 = pFVar14[0xc];
            }
            if (uVar8 != 0) {
              memcpy((void *)FVar15,(void *)_Src,(longlong)(int)uVar8 << 2);
            }
          }
        }
        local_1a8 = 0;
        if (local_1a4[0] < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
                    (8,8,0,&local_1b8,0,local_1a4);
        }
        local_250 = pFVar11->PackageName;
      }
      FVar10 = (ForElementType<FAssetData_const_*>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
        FVar10 = local_1b8.SecondaryData;
      }
      local_230 = pFVar11;
      if ((ulonglong)FVar10 <= &local_230) {
        FVar10 = (ForElementType<FAssetData_const_*>)&local_1b8;
        if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
          FVar10 = local_1b8.SecondaryData;
        }
        if ((&local_230 < (FAssetData **)((longlong)FVar10 + (longlong)local_1a4[0] * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_1a8 == local_1a4[0]) {
        local_1a8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_const_*>_>
                              (0x808,&local_1b8,local_1a4);
      }
      lVar12 = (longlong)local_1a8;
      FVar10 = (ForElementType<FAssetData_const_*>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
        FVar10 = local_1b8.SecondaryData;
      }
      pFVar11 = pFVar11 + 1;
      local_1a8 = local_1a8 + 1;
      *(FAssetData **)((longlong)FVar10 + lVar12 * 8) = local_230;
    }
    local_1f8 = (ForElementType<FAssetData_const_*>)&local_1b8;
    if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
      local_1f8 = local_1b8.SecondaryData;
    }
    if ((local_1a8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_1f0 = iVar6;
    local_1c8._12_4_ = uStack_1ec;
    local_1c8.ArrayNum = iVar6;
    local_1c8.DataPtr = (FAssetData **)local_1f8;
    pFVar11 = GetMostImportantAsset(&local_1c8,None);
    FVar15 = local_250;
    uVar8 = ::GetTypeHash(local_250.ComparisonIndex.Value);
    uVar8 = uVar8 + FVar15.Number;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar13 = *(undefined1 **)&param_2->field_0x40;
      if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
        puVar13 = &param_2->field_0x38;
      }
      uVar17 = *(uint *)(puVar13 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar8) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          pFVar14 = (FName *)((longlong)(int)uVar17 * 0x78 + *(longlong *)param_2);
          if (*pFVar14 == local_250) {
            if (pFVar14 != (FName *)0x0) goto LAB_142b94d90;
            break;
          }
          uVar17 = pFVar14[0xe].ComparisonIndex.Value;
        } while (uVar17 != 0xffffffff);
      }
    }
    local_218[0] = &local_250;
    TSet<TTuple<FName,FAssetData>,TDefaultMapHashableKeyFuncs<FName,FAssetData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FAssetData>,TDefaultMapHashableKeyFuncs<FName,FAssetData,0>,FDefaultSetAllocator>
                *)param_2,(uint)&local_224,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
               (bool *)local_218);
    pFVar14 = (FName *)((longlong)local_224 * 0x78 + *(longlong *)param_2);
LAB_142b94d90:
    FAssetData::operator=((FAssetData *)(pFVar14 + 1),pFVar11);
    if (local_1b8.SecondaryData != (ForElementType<FAssetData_const_*>)0x0) {
      FMemory::Free((void *)local_1b8.SecondaryData);
    }
  }
  DestructItems<FAssetData,int>(local_248,local_240);
  if (local_248 != (FAssetData *)0x0) {
    FMemory::Free(local_248);
  }
  FARFilter::~FARFilter(&local_198);
  return;
}

// GetMostImportantAsset @ 142b97a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAssetData * __cdecl
UE::AssetRegistry::GetMostImportantAsset
          (TArrayView<FAssetData_const_*_const,int> *param_1,EGetMostImportantAssetFlags param_2)

{
  FAssetData *this;
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FAssetData *pFVar5;
  FAssetData *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FAssetData **ppFVar11;
  FAssetData *pFVar12;
  FAssetData **ppFVar13;
  undefined1 auStack_1118 [32];
  EGetMostImportantAssetFlags local_10f8;
  uint local_10f4;
  wchar_t *local_10f0;
  FAssetData **local_10e8;
  wchar_t *local_10d8;
  int iStack_10d0;
  undefined4 uStack_10cc;
  TStringView<wchar_t> local_10c8;
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1118;
  ppFVar13 = param_1->DataPtr;
  if (param_1->ArrayNum == 1) {
    pFVar5 = *ppFVar13;
  }
  else {
    pFVar6 = (FAssetData *)0x0;
    ppFVar11 = ppFVar13 + param_1->ArrayNum;
    local_10f4 = 0;
    pFVar5 = pFVar6;
    pFVar12 = pFVar6;
    uVar9 = 0;
    local_10f8 = param_2;
    local_10e8 = ppFVar11;
    if (ppFVar13 != ppFVar11) {
      do {
        this = *ppFVar13;
        if (this->AssetName != (FName)0x0) {
          uVar9 = (uint)pFVar6;
          if (this->PackageName != (FName)0x0) {
            local_878.Base = local_858;
            local_878.bIsDynamic = false;
            local_878.bIsExternal = false;
            local_878.CurPos = local_858;
            local_878.End = local_42;
            ::FName::ToString(&this->AssetName,&local_878);
            local_10b8.Base = local_1098;
            local_10b8.bIsDynamic = false;
            local_10b8.bIsExternal = false;
            local_10b8.CurPos = local_1098;
            local_10b8.End = local_882;
            ::FName::ToString(&this->PackageName,&local_10b8);
            pwVar1 = local_10b8.Base;
            lVar10 = (longlong)local_878.CurPos - (longlong)local_878.Base;
            iVar7 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
            local_10d8 = local_10b8.Base;
            local_10c8._12_4_ = uStack_10cc;
            local_10c8.Size = iVar7;
            local_10c8.DataPtr = local_10b8.Base;
            local_10f0 = local_878.Base;
            iStack_10d0 = iVar7;
            iVar3 = String::FindLastChar(&local_10c8,L'/',CaseSensitive);
            iVar4 = iVar3 + 1;
            iVar8 = 0x7fffffff;
            if (iVar4 < 0) {
              iVar4 = 0;
              iVar8 = iVar3 + -0x80000000;
            }
            if (iVar7 < iVar4) {
              iVar4 = iVar7;
            }
            iVar3 = iVar7 - iVar4;
            if (iVar8 < iVar7 - iVar4) {
              iVar3 = iVar8;
            }
            iVar8 = 0;
            if (0 < iVar3) {
              iVar8 = iVar3;
            }
            iVar3 = (int)(lVar10 >> 1);
            if ((iVar8 == iVar3) &&
               ((((iVar8 == 0 || (iVar3 == 0)) ||
                 (iVar4 = FGenericPlatformStricmp::Strnicmp
                                    (pwVar1 + iVar4,local_10f0,(longlong)iVar3), iVar4 == 0)) &&
                (iVar8 == iVar3)))) {
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
              return this;
            }
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
            ppFVar11 = local_10e8;
            param_2 = local_10f8;
            uVar9 = local_10f4;
          }
          if (((param_2 & IgnoreSkipClasses) != None) ||
             (bVar2 = FFiltering::ShouldSkipAsset(&this->AssetClassPath,this->PackageFlags),
             param_2 = local_10f8, !bVar2)) {
            bVar2 = FAssetData::IsTopLevelAsset(this);
            if (bVar2) {
              local_10f4 = uVar9 + 1;
              if (pFVar12 != (FAssetData *)0x0) {
                iVar4 = ::FName::Compare(&(this->AssetClassPath).PackageName,
                                         &(pFVar12->AssetClassPath).PackageName);
                if ((iVar4 == 0) &&
                   (iVar4 = ::FName::Compare(&(this->AssetClassPath).AssetName,
                                             &(pFVar12->AssetClassPath).AssetName), iVar4 == 0)) {
                  iVar4 = ::FName::Compare(&this->AssetName,&pFVar12->AssetName);
                }
                if (-1 < iVar4) goto LAB_142b97ceb;
              }
              pFVar12 = this;
            }
LAB_142b97ceb:
            if (pFVar5 != (FAssetData *)0x0) {
              iVar4 = ::FName::Compare(&(this->AssetClassPath).PackageName,
                                       &(pFVar5->AssetClassPath).PackageName);
              if ((iVar4 == 0) &&
                 (iVar4 = ::FName::Compare(&(this->AssetClassPath).AssetName,
                                           &(pFVar5->AssetClassPath).AssetName), iVar4 == 0)) {
                iVar4 = ::FName::Compare(&this->AssetName,&pFVar5->AssetName);
              }
              param_2 = local_10f8;
              if (-1 < iVar4) goto LAB_142b97d2d;
            }
            pFVar5 = this;
            param_2 = local_10f8;
          }
        }
LAB_142b97d2d:
        pFVar6 = (FAssetData *)(ulonglong)local_10f4;
        ppFVar13 = ppFVar13 + 1;
        uVar9 = local_10f4;
      } while (ppFVar13 != ppFVar11);
    }
    if ((param_2 & RequireOneTopLevelAsset) == None) {
      if (uVar9 != 0) {
        pFVar5 = pFVar12;
      }
    }
    else {
      pFVar5 = pFVar12;
      if (uVar9 != 1) {
        pFVar5 = (FAssetData *)0x0;
      }
    }
  }
  return pFVar5;
}

// GetPriorityPaths @ 142b980a0

/* WARNING: Removing unreachable block (ram,0x000142b98209) */

TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __cdecl
UE::AssetRegistry::Premade::GetPriorityPaths
          (TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__)

{
  ForElementType<FString> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  ForElementType<FString> FVar6;
  TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  undefined8 *puVar8;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FString>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 2;
  pFVar5 = FPaths::ProjectDir(&local_38);
  local_10 = 0x11;
  local_28.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_28.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_28.Size = 0;
  }
  local_18 = L"AssetRegistry.bin";
  FPaths::CombineInternal(&local_48,&local_28,2);
  FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FString>)__return_storage_ptr__;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar6 = FVar1;
  }
  if ((ulonglong)FVar6 <= &local_48) {
    FVar6 = (ForElementType<FString>)__return_storage_ptr__;
    if (FVar1 != (ForElementType<FString>)0x0) {
      FVar6 = FVar1;
    }
    if ((&local_48 <
         (FString *)((longlong)__return_storage_ptr__->ArrayMax * 0x10 + (longlong)FVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FString>)__return_storage_ptr__;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar6 = FVar1;
  }
  puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + (longlong)FVar6);
  *puVar8 = 0;
  *puVar8 = local_48.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_48.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasEngineModuleLoaded @ 142b9a280

bool __cdecl UE::AssetRegistry::Utils::HasEngineModuleLoaded(void)

{
  FModuleManager *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  if (bIsEngineModuleAvaliable) {
    return true;
  }
  this = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res8,L"Engine");
  bIsEngineModuleAvaliable = FModuleManager::IsModuleLoaded(this,*pFVar1);
  return bIsEngineModuleAvaliable;
}

// InitializeMountPoints @ 142b9aee0

void __cdecl
UE::AssetRegistry::Utils::InitializeMountPoints
          (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  uint local_78;
  uint uStack_74;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) != -1) {
    return;
  }
  uVar12 = 0;
  (param_1->field0_0x0).TypedValue.HashSize = 0;
  pvVar3 = *(void **)((longlong)&param_1->field0_0x0 + 0x40);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10) = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x18) = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x38) = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x48) = 0;
  *(undefined8 *)&param_1->field0_0x0 = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x40) = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FPackageName::QueryRootContentPaths(&local_88,true,false,true);
  if ((*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(int *)((longlong)&param_1->field0_0x0 + 8) -
          *(int *)((longlong)&param_1->field0_0x0 + 0x34);
  uVar15 = local_88.ArrayNum + uVar9;
  if (uVar15 <= uVar9) goto LAB_142b9b1db;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)param_1,uVar15);
  if (uVar15 < 4) {
    uVar9 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar10 = (param_1->field0_0x0).TypedValue.HashSize;
  if ((iVar10 != 0) && ((int)uVar9 <= iVar10)) goto LAB_142b9b1db;
  (param_1->field0_0x0).TypedValue.HashSize = uVar9;
  if (*(longlong *)((longlong)&param_1->field0_0x0 + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_1->field0_0x0).TypedValue.Hash.SecondaryData,0,0,4);
  }
  if (uVar9 != 0) {
    uVar15 = uVar9;
    if (uVar9 < 2) {
      if (*(longlong *)((longlong)&param_1->field0_0x0 + 0x40) != 0) {
        uVar15 = 0;
        goto LAB_142b9b032;
      }
    }
    else {
LAB_142b9b032:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(param_1->field0_0x0).TypedValue.Hash.SecondaryData,0,uVar15,
                 4);
    }
    if (0 < (int)uVar9) {
      uVar17 = (ulonglong)uVar9;
      uVar13 = uVar12;
      do {
        puVar4 = *(undefined1 **)((longlong)&param_1->field0_0x0 + 0x40);
        puVar11 = (undefined1 *)((longlong)&param_1->field0_0x0 + 0x38);
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        uVar8 = uVar13 & (longlong)(int)uVar9 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if ((param_1->field0_0x0).TypedValue.HashSize != 0) {
    uVar9 = *(uint *)((longlong)&param_1->field0_0x0 + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)&param_1->field0_0x0 + 0x10);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)&param_1->field0_0x0 + 0x20);
      if (pTVar18 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = pTStack_70;
      }
      uVar15 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      uVar13 = uVar12;
      while (uVar15 == 0) {
        uStack_60 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_60;
        iVar10 = (int)uVar12;
        local_78 = iVar10 + 1;
        uVar12 = (ulonglong)local_78;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_142b9b129;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar10 * 4 + 4);
      }
      uStack_74 = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar12 = (ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_142b9b129:
        uVar12 = (ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = param_1;
    local_50.Array = pTStack_70;
    if ((int)uVar12 < (int)uVar9) {
      do {
        iVar19 = (int)uVar12;
        puVar1 = (undefined8 *)(*(longlong *)&local_58->field0_0x0 + (longlong)iVar19 * 0x18);
        iVar2 = *(int *)(*(longlong *)&local_58->field0_0x0 + 8 + (longlong)iVar19 * 0x18);
        iVar10 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar14 = L"";
          iVar10 = 0;
        }
        else {
          pwVar14 = (wchar_t *)*puVar1;
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar14);
        uVar9 = (param_1->field0_0x0).TypedValue.HashSize - 1U & uVar9;
        *(uint *)((longlong)puVar1 + 0x14) = uVar9;
        puVar4 = *(undefined1 **)((longlong)&param_1->field0_0x0 + 0x40);
        puVar11 = (undefined1 *)((longlong)&param_1->field0_0x0 + 0x38);
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        uVar12 = (longlong)(param_1->field0_0x0).TypedValue.HashSize - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar11 + uVar12 * 4);
        *(int *)(puVar11 + uVar12 * 4) = iVar19;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_142b9b1db:
  iVar10 = local_88.ArrayNum;
  pFVar20 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
  FVar16.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if (local_88.ArrayNum != iVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar16.Data == pFVar20) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)param_1,
               (FString *)(local_res8 + 8),(bool *)FVar16.Data);
    FVar16.Data = FVar16.Data + 0x10;
  }
  iVar10 = 0;
  if ((longlong)local_88._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    iVar2 = local_88.ArrayMax;
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
      iVar10 = local_88.ArrayNum;
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,iVar10);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// InitializeSerializationOptionsFromIni @ 142b9b520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::AssetRegistry::Utils::InitializeSerializationOptionsFromIni
          (FAssetRegistrySerializationOptions *param_1,FFilterTagRules *param_2,
          ITargetPlatform *param_3,ESerializationTarget param_4,bool param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar9;
  FConfigFile *this;
  FAssetRegistrySerializationOptions *pFVar10;
  FFilterTagRules *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FName *pFVar14;
  ulong64 uVar15;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  undefined1 auStackY_618 [32];
  undefined1 local_5e8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_5e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_5d0;
  uint local_5c0;
  FConfigFile *local_5b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_5b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_5a0;
  uint local_590;
  uint uStack_58c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_588;
  undefined4 local_580;
  uint uStack_57c;
  uint uStack_578;
  undefined4 uStack_574;
  int local_570;
  uint uStack_56c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_568;
  undefined4 local_560;
  uint uStack_55c;
  int iStack_558;
  undefined4 uStack_554;
  FString local_550;
  FAssetRegistrySerializationOptions *local_538;
  longlong *local_530;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_528;
  longlong *local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_500;
  FScriptContainerElement *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  FSparseArrayAllocationInfo local_4c8;
  FName local_4b8 [2];
  TArrayView<FString_const_,int> local_4a8;
  undefined1 local_498 [32];
  ForElementType<unsigned_int> local_478;
  uint local_470;
  int local_46c;
  int local_468;
  int local_464;
  FScriptContainerElement local_460 [8];
  ForAnyElementType local_458;
  uint local_450;
  undefined1 local_448 [72];
  undefined4 local_400;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_3f8;
  FConfigFile local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  FAssetRegistrySerializationOptions local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_618;
  uVar13 = 0;
  local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.Data.ArrayNum = 0;
  local_550.Data.ArrayMax = 0;
  local_538 = param_1;
  if (param_3 == (ITargetPlatform *)0x0) {
    pTVar9 = StringCast<wchar_t,128,char>(&local_2b8,"Windows");
    ::FString::operator=(&local_550,pTVar9->Ptr);
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
  }
  FConfigFile::FConfigFile(&local_3a8);
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_550.Data.ArrayNum != 0) {
    FVar26.Data = local_550.Data.AllocatorInstance.Data;
  }
  this = FConfigCacheIni::FindOrLoadPlatformConfig(&local_3a8,L"Engine",(wchar_t *)FVar26.Data);
  local_5b8 = this;
  pFVar10 = FAssetRegistrySerializationOptions::FAssetRegistrySerializationOptions
                      (&local_198,param_4);
  FAssetRegistrySerializationOptions::operator=(param_1,pFVar10);
  FAssetRegistrySerializationOptions::~FAssetRegistrySerializationOptions(&local_198);
  if (param_4 != ForDevelopment) {
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bSerializeAssetRegistry",&param_1->bSerializeAssetRegistry);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bSerializeDependencies",&param_1->bSerializeDependencies);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bSerializeNameDependencies",
               &param_1->bSerializeSearchableNameDependencies);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bSerializeManageDependencies",
               &param_1->bSerializeManageDependencies);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bSerializePackageData",&param_1->bSerializePackageData);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bFilterAssetDataWithNoTags",
               &param_1->bFilterAssetDataWithNoTags);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bFilterDependenciesWithNoTags",
               &param_1->bFilterDependenciesWithNoTags);
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bFilterSearchableNames",&param_1->bFilterSearchableNames);
    local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5d0.ArrayNum = 0;
    local_5d0.ArrayMax = 0;
    FConfigFile::GetArray(this,L"AssetRegistry",L"AssetBundlesDenyList",&local_5d0);
    iStack_4d0 = local_5d0.ArrayNum;
    local_4d8 = local_5d0.AllocatorInstance.Data;
    if ((local_5d0.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_4a8._12_4_ = uStack_4cc;
    local_4a8.ArrayNum = iStack_4d0;
    local_4a8.DataPtr = (FString *)local_4d8;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append
              (&param_1->AssetBundlesDenyList,&local_4a8);
    DestructItems<FString,int>((FString *)local_5d0.AllocatorInstance.Data,local_5d0.ArrayNum);
    if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.AllocatorInstance.Data);
    }
  }
  if (param_2 == (FFilterTagRules *)0x0) {
    param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList = false;
  }
  else {
    FConfigFile::GetBool
              (this,L"AssetRegistry",L"bUseAssetRegistryTagsWhitelistInsteadOfBlacklist",
               &param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList);
    pwVar24 = L"CookedTagsWhitelist";
    local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList == false) {
      pwVar24 = L"CookedTagsBlacklist";
    }
    local_5b0.ArrayNum = 0;
    local_5b0.ArrayMax = 0;
    FConfigFile::GetArray(this,L"AssetRegistry",pwVar24,&local_5b0);
    if (param_4 == ForDevelopment) {
LAB_142b9b7e3:
      bVar5 = true;
    }
    else {
      pwVar24 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar24,L"ARKeepDevTags");
      if (bVar5) goto LAB_142b9b7e3;
      bVar5 = false;
    }
    pFVar11 = (FFilterTagRules *)
              ParseFilterTags((TMap<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
                               *)local_448,&local_5b0,bVar5,
                              param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList);
    if (param_2 != pFVar11) {
      TSet<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>,FDefaultSetAllocator>
                  *)param_2,
                 (TSet<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>,FDefaultSetAllocator>
                  *)pFVar11);
    }
    local_400 = 0;
    if ((void *)local_448._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_448._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_448);
    UpdateSerializationOptions(param_1,param_2,param_5);
    DestructItems<FString,int>((FString *)local_5b0.AllocatorInstance.Data,local_5b0.ArrayNum);
    if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.AllocatorInstance.Data);
    }
  }
  local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.ArrayNum = 0;
  local_5e0.ArrayMax = 0;
  FConfigFile::GetArray(this,L"AssetRegistry",L"CookedTagsAsFName",&local_5e0);
  iVar7 = local_5e0.ArrayNum;
  local_498._0_8_ = (FScriptContainerElement *)0x0;
  local_498._8_8_ = 0;
  local_478 = (ForElementType<unsigned_int>)0x0;
  local_470 = 0;
  local_46c = 0x80;
  local_468 = -1;
  local_464 = 0;
  local_458.Data = (FScriptContainerElement *)0x0;
  local_450 = 0;
  if (local_5e0.ArrayNum == 0) goto LAB_142b9bb1d;
  if (local_5e0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)local_5e0.ArrayNum);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_498,local_5e0.ArrayNum);
  if ((uint)iVar7 < 4) {
    uVar25 = 1;
  }
  else {
    uVar25 = (ulonglong)(((uint)iVar7 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar25 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
  }
  uVar6 = (uint)uVar25;
  if ((local_450 != 0) && ((int)uVar6 <= (int)local_450)) goto LAB_142b9bb1d;
  local_450 = uVar6;
  if (local_458.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_458,0,0,4);
  }
  if (uVar6 != 0) {
    uVar23 = uVar6;
    if (uVar6 < 2) {
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_142b9b969;
      }
    }
    else {
LAB_142b9b969:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_458,0,uVar23,4);
    }
    if (0 < (int)uVar6) {
      uVar19 = uVar13;
      do {
        FVar26.Data = local_460;
        if (local_458.Data != (FScriptContainerElement *)0x0) {
          FVar26.Data = local_458.Data;
        }
        uVar12 = uVar19 & (longlong)(int)uVar6 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar26.Data + uVar12 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (local_450 != 0) {
    pTStack_588 = (TBitArray<FDefaultBitArrayAllocator> *)(local_498 + 0x10);
    local_590 = 0;
    uStack_58c = 1;
    uStack_57c = 0;
    uStack_578 = 0;
    if (local_470 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_498 + 0x10);
      if (local_478 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_478;
      }
      uVar6 = *(uint *)FVar17;
      uVar25 = uVar13;
      while (uVar6 == 0) {
        uStack_578 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_578;
        iVar7 = (int)uVar13;
        local_590 = iVar7 + 1;
        uVar13 = (ulonglong)local_590;
        if ((int)((local_470 - 1) + ((int)(local_470 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_590)
        goto LAB_142b9ba78;
        uVar6 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_58c = -uVar6 & uVar6;
      uVar13 = (ulonglong)uStack_58c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uStack_57c = (uStack_578 - 1) + (int)lVar20;
      uVar13 = (ulonglong)uStack_57c;
      if ((int)local_470 < (int)uStack_57c) {
LAB_142b9ba78:
        uVar13 = (ulonglong)local_470;
        uStack_57c = local_470;
      }
    }
    local_580 = 0xffffffff;
    local_530 = (longlong *)local_498;
    local_528._padding_ = CONCAT44(uStack_58c,local_590);
    local_528.CurrentBitIndex = uStack_57c;
    local_528.UnvisitedBitMask = 0xffffffff;
    local_528._28_4_ = uStack_574;
    local_528.BaseBitIndex = uStack_578;
    local_528.Array = pTStack_588;
    if ((int)uVar13 < (int)local_470) {
      do {
        puVar22 = (undefined8 *)((longlong)(int)uVar13 * 0x10 + *local_530);
        uVar2 = *puVar22;
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar6 = local_450 - 1 & uVar6 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar22 + 0xc) = uVar6;
        FVar26.Data = local_460;
        if (local_458.Data != (FScriptContainerElement *)0x0) {
          FVar26.Data = local_458.Data;
        }
        uVar25 = (longlong)(int)local_450 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar26.Data + uVar25 * 4);
        *(int *)(FVar26.Data + uVar25 * 4) = (int)uVar13;
        local_528.UnvisitedBitMask = local_528.UnvisitedBitMask & ~local_528._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_528);
        uVar13 = (ulonglong)(uint)local_528.CurrentBitIndex;
      } while (local_528.CurrentBitIndex < (local_528.Array)->NumBits);
    }
  }
LAB_142b9bb1d:
  uVar13 = (ulonglong)local_5e0.ArrayNum;
  pFVar27 = local_5e0.AllocatorInstance.Data + uVar13 * 0x10;
  local_5c0 = local_5e0.ArrayNum;
  FVar26.Data = local_5e0.AllocatorInstance.Data;
  do {
    if (local_5e0.ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_5e8);
    }
    pFVar10 = local_538;
    if (FVar26.Data == pFVar27) {
      if (&local_538->CookTagsAsName !=
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_498) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&local_538->CookTagsAsName,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_498);
      }
      local_450 = 0;
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_498,0);
      if (local_478 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_478);
      }
      if ((FScriptContainerElement *)local_498._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_498._0_8_);
      }
      local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5a0.ArrayNum = 0;
      local_5a0.ArrayMax = 0;
      FConfigFile::GetArray(local_5b8,L"AssetRegistry",L"CookedTagsAsPathName",&local_5a0);
      pTVar16 = MakeNameSet(&local_3f8,&local_5a0);
      if (&pFVar10->CookTagsAsPath != pTVar16) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&pFVar10->CookTagsAsPath,pTVar16);
      }
      local_3f8.HashSize = 0;
      if (local_3f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_3f8.Elements);
      DestructItems<FString,int>((FString *)local_5a0.AllocatorInstance.Data,local_5a0.ArrayNum);
      if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a0.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_5e0.AllocatorInstance.Data,local_5e0.ArrayNum);
      if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.AllocatorInstance.Data);
      }
      FConfigFile::~FConfigFile(&local_3a8);
      if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_550.Data.AllocatorInstance.Data);
      }
      return;
    }
    if (*(int *)(FVar26.Data + 8) == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = *(wchar_t **)FVar26.Data;
    }
    pFVar14 = ::FName::FName(local_4b8,pwVar24);
    if (local_464 == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)local_498,(int *)(local_498 + 8),
                         (int *)(local_498 + 0xc));
      uVar6 = local_470;
      if (local_470 == 0) {
        iVar28 = 0;
LAB_142b9bc1d:
        if (local_46c < (int)(local_470 + 1)) {
          uVar23 = local_46c + 0x1fU >> 5;
          uVar21 = local_470 + 0x20 >> 5;
          if (uVar21 < 5) {
            local_46c = 4;
          }
          else {
            uVar13 = (ulonglong)uVar21;
            if (uVar23 < 5) {
              uVar23 = 0;
            }
            if (uVar23 == 0) {
              uVar25 = 4;
              if (4 < uVar13) {
                uVar25 = uVar13;
              }
            }
            else {
              uVar25 = ((ulonglong)uVar21 * 3 >> 3) + 0x10 + uVar13;
            }
            uVar15 = FMemory::QuantizeSize(uVar25 * 4,0);
            local_46c = (int)(uVar15 >> 2);
            if (local_46c < (int)uVar21) {
              local_46c = 0x7fffffff;
            }
          }
          local_46c = local_46c << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_498 + 0x10),local_470);
        }
        local_470 = local_470 + 1;
        uVar21 = (int)local_470 >> 0x1f & 0x1f;
        uVar23 = local_470 + uVar21;
        iVar8 = (uVar23 & 0x1f) - uVar21;
        if (iVar8 != 0) {
          FVar17 = (ForElementType<unsigned_int>)((longlong)local_498 + 0x10);
          if (local_478 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_478;
          }
          puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar23 >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
        }
      }
      else {
        iVar28 = (int)(local_470 + ((int)local_470 >> 0x1f & 0x1fU)) >> 5;
        if (iVar28 != (int)(((int)(local_470 - 1) >> 0x1f & 0x1fU) + (local_470 - 1)) >> 5)
        goto LAB_142b9bc1d;
        local_470 = local_470 + 1;
      }
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_498 + 0x10);
      if (local_478 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_478;
      }
      puVar1 = (uint *)((longlong)FVar17 + (longlong)iVar28 * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar6 & 0x1f));
      iVar28 = local_468;
    }
    else {
      local_464 = local_464 + -1;
      iVar28 = *(int *)(local_498._0_8_ + (longlong)local_468 * 0x10 + 4);
      iVar7 = local_468;
      if (local_464 != 0) {
        *(undefined4 *)(local_498._0_8_ + (longlong)iVar28 * 0x10) = 0xffffffff;
      }
    }
    local_468 = iVar28;
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_498,&local_4c8,iVar7);
    iVar7 = local_4c8.Index;
    if (local_4c8.Pointer == (FName *)0x0) {
      pFVar14 = (FName *)0x0;
    }
    else {
      *(FName *)local_4c8.Pointer = *pFVar14;
      (((FName *)((longlong)local_4c8.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
      pFVar14 = local_4c8.Pointer;
    }
    FVar3 = *pFVar14;
    uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar6 = uVar6 + FVar3.Number;
    if ((local_498._8_4_ - local_464 != 1) && (local_498._8_4_ != local_464)) {
      FVar18.Data = local_460;
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FVar18.Data = local_458.Data;
      }
      for (iVar28 = *(int *)(FVar18.Data + (ulonglong)(local_450 - 1 & uVar6) * 4); iVar28 != -1;
          iVar28 = *(int *)(local_498._0_8_ + (longlong)iVar28 * 0x10 + 8)) {
        if (*(FName *)(local_498._0_8_ + (longlong)iVar28 * 0x10) == *pFVar14) {
          if (iVar28 != -1) {
            *(FName *)(local_498._0_8_ + (longlong)iVar28 * 0x10) = *pFVar14;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_498,iVar7,1);
            goto LAB_142b9c0e7;
          }
          break;
        }
      }
    }
    uVar23 = local_498._8_4_ - local_464;
    uVar13 = 1;
    if (3 < uVar23) {
      uVar13 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar13 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
    }
    if (((int)uVar23 < 1) || (uVar23 = (uint)uVar13, (int)uVar23 <= (int)local_450)) {
      uVar6 = local_450 - 1 & uVar6;
      pFVar14[1].Number = uVar6;
      FVar18.Data = local_460;
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FVar18.Data = local_458.Data;
      }
      uVar13 = (longlong)(int)local_450 - 1U & (longlong)(int)uVar6;
      pFVar14[1].ComparisonIndex.Value = *(uint *)(FVar18.Data + uVar13 * 4);
      *(int *)(FVar18.Data + uVar13 * 4) = iVar7;
    }
    else {
      local_450 = uVar23;
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_458,0,0,4);
      }
      if (uVar23 != 0) {
        uVar6 = uVar23;
        if (uVar23 < 2) {
          if (local_458.Data != (FScriptContainerElement *)0x0) {
            uVar6 = 0;
            goto LAB_142b9bee3;
          }
        }
        else {
LAB_142b9bee3:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_458,0,uVar6,4)
          ;
        }
        if (0 < (int)uVar23) {
          uVar25 = 0;
          do {
            FVar18.Data = local_460;
            if (local_458.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_458.Data;
            }
            uVar19 = uVar25 & (longlong)(int)uVar23 - 1U;
            uVar25 = uVar25 + 1;
            *(undefined4 *)(FVar18.Data + uVar19 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (local_450 != 0) {
        pTStack_568 = (TBitArray<FDefaultBitArrayAllocator> *)(local_498 + 0x10);
        local_570 = 0;
        uStack_56c = 1;
        uStack_55c = 0;
        iStack_558 = 0;
        if (local_470 != 0) {
          FVar17 = (ForElementType<unsigned_int>)((longlong)local_498 + 0x10);
          if (local_478 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_478;
          }
          uVar6 = *(uint *)FVar17;
          iStack_558 = 0;
          local_570 = 0;
          while (uVar6 == 0) {
            iStack_558 = iStack_558 + 0x20;
            lVar20 = (longlong)local_570;
            local_570 = local_570 + 1;
            if ((int)((local_470 - 1) + ((int)(local_470 - 1) >> 0x1f & 0x1fU)) >> 5 < local_570)
            goto LAB_142b9bff8;
            uVar6 = ((uint *)((longlong)FVar17 + 4))[lVar20];
          }
          uStack_56c = -uVar6 & uVar6;
          uVar13 = (ulonglong)uStack_56c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uStack_55c = iStack_558 + -1 + (int)lVar20;
          if ((int)local_470 < (int)uStack_55c) {
LAB_142b9bff8:
            uStack_55c = local_470;
          }
        }
        local_560 = 0xffffffff;
        local_508 = (longlong *)local_498;
        local_500._padding_ = CONCAT44(uStack_56c,local_570);
        local_500.CurrentBitIndex = uStack_55c;
        local_500.UnvisitedBitMask = 0xffffffff;
        local_500._28_4_ = uStack_554;
        local_500.BaseBitIndex = iStack_558;
        uVar6 = uStack_55c;
        local_500.Array = pTStack_568;
        if ((int)uStack_55c < (int)local_470) {
          do {
            puVar22 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + *local_508);
            uVar2 = *puVar22;
            uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar23 = local_450 - 1 & uVar23 + (int)((ulonglong)uVar2 >> 0x20);
            *(uint *)((longlong)puVar22 + 0xc) = uVar23;
            FVar18.Data = local_460;
            if (local_458.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_458.Data;
            }
            uVar13 = (longlong)(int)local_450 - 1U & (longlong)(int)uVar23;
            *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar18.Data + uVar13 * 4);
            *(uint *)(FVar18.Data + uVar13 * 4) = uVar6;
            local_500.UnvisitedBitMask = local_500.UnvisitedBitMask & ~local_500._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_500);
            uVar6 = local_500.CurrentBitIndex;
          } while (local_500.CurrentBitIndex < (local_500.Array)->NumBits);
        }
      }
    }
LAB_142b9c0e7:
    uVar13 = (ulonglong)local_5c0;
    FVar26.Data = FVar26.Data + 0x10;
  } while( true );
}

// IsDirectoryWatcherEnabled @ 142b9c6f0

bool __cdecl UE::AssetRegistry::Impl::IsDirectoryWatcherEnabled(void)

{
  return false;
}

// IsPathMounted @ 142b9c870

bool __cdecl
UE::AssetRegistry::Utils::IsPathMounted
          (FString *param_1,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          FString *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if ((iVar2 < 2) ||
     (iVar2 = ::FString::Find(param_1,L"/",1,CaseSensitive,FromStart,1), iVar2 == -1)) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar2 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar5);
    iVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_2,uVar3,param_1);
    bVar6 = iVar2 != -1;
  }
  else {
    ::FString::Reset(param_3,iVar2);
    pwVar5 = L"";
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::AppendChars(param_3,pwVar4,iVar2);
    iVar1 = (param_3->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar5);
    iVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_2,uVar3,param_3);
    if (iVar2 == -1) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  return bVar6;
}

// LexToString @ 142b9d0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl UE::AssetRegistry::LexToString(FString *__return_storage_ptr__,EScanFlags param_1)

{
  void *pvVar1;
  undefined1 auStack_268 [32];
  undefined1 local_248 [16];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  if (param_1 == None) {
    ::FString::FString(__return_storage_ptr__,L"None");
  }
  else {
    if ((param_1 & 0x1f) != param_1) {
      `UE::AssetRegistry::LexToString'::__l2::<lambda_1>::operator()(local_248);
    }
    local_238.bIsDynamic = false;
    local_238.bIsExternal = false;
    local_238.Base = local_218;
    local_238.CurPos = local_218;
    local_238.End = (wchar_t *)local_18;
    if ((param_1 & ForceRescan) != None) {
      pvVar1 = FGenericPlatformString::Memcpy(local_218,L"ForceRescan",0x16);
      local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 0x16);
    }
    if ((param_1 & IgnoreDenyListScanFilters) != None) {
      if ((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) {
        if (local_238.End < local_238.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_238,1);
        }
        pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"|",2);
        local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      }
      if (local_238.End < local_238.CurPos + 0x19) {
        TStringBuilderBase<wchar_t>::Extend(&local_238,0x19);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"IgnoreDenyListScanFilters",0x32);
      local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 0x32);
    }
    if ((param_1 & WaitForInMemoryObjects) != None) {
      if ((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) {
        if (local_238.End < local_238.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_238,1);
        }
        pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"|",2);
        local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      }
      if (local_238.End < local_238.CurPos + 0x16) {
        TStringBuilderBase<wchar_t>::Extend(&local_238,0x16);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"WaitForInMemoryObjects",0x2c);
      local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 0x2c);
    }
    if ((param_1 & IgnoreInvalidPathWarning) != None) {
      if ((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) {
        if (local_238.End < local_238.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_238,1);
        }
        pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"|",2);
        local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      }
      if (local_238.End < local_238.CurPos + 0x18) {
        TStringBuilderBase<wchar_t>::Extend(&local_238,0x18);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"IgnoreInvalidPathWarning",0x30);
      local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 0x30);
    }
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'\0';
    ::FString::FString(__return_storage_ptr__,local_238.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  }
  return __return_storage_ptr__;
}

// MakeNameSet @ 142b9e040

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
UE::AssetRegistry::Utils::MakeNameSet
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  FName *pFVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar12 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar9 = param_1->ArrayNum;
  if (uVar9 == 0) goto LAB_142b9e296;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar9 <= __return_storage_ptr__->HashSize))
  goto LAB_142b9e296;
  __return_storage_ptr__->HashSize = uVar9;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar9 != 0) {
    uVar15 = uVar9;
    if (uVar9 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar15 = 0;
        goto LAB_142b9e105;
      }
    }
    else {
LAB_142b9e105:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar15,4);
    }
    if (0 < (int)uVar9) {
      uVar16 = (ulonglong)uVar9;
      uVar7 = uVar12;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar1;
        }
        uVar4 = uVar7 & (longlong)(int)uVar9 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar9 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar9 != 0) {
      puVar17 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_60.Array;
      }
      uVar15 = *puVar17;
      uVar7 = uVar12;
      while (uVar15 == 0) {
        iVar11 = (int)uVar12;
        uStack_70 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_70;
        local_88 = iVar11 + 1;
        uVar12 = (ulonglong)local_88;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_142b9e1fb;
        uVar15 = puVar17[(longlong)iVar11 + 1];
      }
      uStack_84 = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_84 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_74 = (int)lVar3 + -1 + uStack_70;
      uVar12 = (ulonglong)uStack_74;
      if ((int)uVar9 < (int)uStack_74) {
LAB_142b9e1fb:
        uVar12 = (ulonglong)uVar9;
        uStack_74 = uVar9;
      }
    }
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    if ((int)uVar12 < (int)uVar9) {
      do {
        puVar13 = (undefined8 *)
                  ((longlong)(int)uVar12 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        uVar2 = *puVar13;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar9 = __return_storage_ptr__->HashSize - 1U & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar13 + 0xc) = uVar9;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar1;
        }
        uVar7 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = (int)uVar12;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar12 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_142b9e296:
  iVar11 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar10 + (longlong)iVar11 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar11) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar14) break;
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar10;
    }
    pFVar5 = ::FName::FName(local_res18,pwVar8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (__return_storage_ptr__,&local_res10,(bool *)pFVar5);
    pFVar10 = pFVar10 + 0x10;
  }
  return __return_storage_ptr__;
}

// ParseFilterTags @ 142ba03c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
* __cdecl UE::AssetRegistry::Utils::ParseFilterTags
                    (TMap<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
                     *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
                    bool param_2,bool param_3)

{
  int *piVar1;
  void *_Src;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FString *pFVar13;
  FName *pFVar14;
  FParsedFilterTagRules *pFVar15;
  size_t sVar16;
  UClass *pUVar17;
  UStruct *this;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  UStruct *pUVar21;
  ForAnyElementType FVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement FVar27;
  FNameEntryId FVar28;
  FNameEntryId FVar29;
  uint uVar30;
  undefined1 local_1c8 [8];
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  FString local_180;
  FString local_170;
  uint local_160;
  FTopLevelAssetPath local_158;
  TStringView<wchar_t> local_148;
  FScriptContainerElement *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  FString local_90;
  FTopLevelAssetPath local_80;
  FTopLevelAssetPath local_68 [2];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_160 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_160;
  pFVar25 = (param_1->AllocatorInstance).Data;
  local_138 = pFVar25 + uVar18 * 0x10;
  do {
    pFVar26 = local_138;
    if (param_1->ArrayNum != (int)uVar18) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c8);
    }
    if (pFVar25 == pFVar26) {
      return __return_storage_ptr__;
    }
    local_1a0.Data.ArrayNum = *(int *)(pFVar25 + 8);
    lVar20 = (longlong)local_1a0.Data.ArrayNum;
    _Src = *(void **)pFVar25;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = 0;
    if (local_1a0.Data.ArrayNum == 0) {
      local_1a0.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0,
                 local_1a0.Data.ArrayNum,&local_1a0.Data.ArrayMax);
      memcpy(local_1a0.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_1a0);
    iVar10 = local_1a0.Data.ArrayNum + -1;
    if (local_1a0.Data.ArrayNum == 0) {
      iVar10 = iVar11;
    }
    if (1 < iVar10) {
      iVar10 = 1;
    }
    iVar23 = iVar11;
    if (0 < iVar10) {
      iVar23 = iVar10;
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar22.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_130,(wchar_t *)FVar22.Data,iVar23);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_130.Data.ArrayNum != 0) {
      FVar22.Data = local_130.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar22.Data,L"(");
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (iVar10 == 0) {
      ::FString::RemoveAt(&local_1a0,0,1,No);
    }
    iVar10 = local_1a0.Data.ArrayNum + -1;
    if (local_1a0.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar22.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    iVar23 = iVar10;
    if (1 < iVar10) {
      iVar23 = 1;
    }
    if (0 < iVar23) {
      iVar11 = iVar23;
    }
    ::FString::FString(&local_120,
                       (wchar_t *)(FVar22.Data + ((longlong)iVar10 - (longlong)iVar11) * 2));
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar22.Data = local_120.Data.AllocatorInstance.Data;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar22.Data,L")");
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (iVar11 == 0) {
      if (local_1a0.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_1a0.Data.ArrayNum + -1;
      }
      if (iVar11 + -1 < iVar11) {
        iVar11 = iVar11 + -1;
      }
      iVar10 = 0;
      if (0 < iVar11) {
        iVar10 = iVar11;
      }
      ::FString::RemoveAt(&local_1a0,iVar10,1,No);
    }
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = 0;
    local_190.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_1a0,&local_190,L",",true);
    iVar11 = local_190.ArrayNum;
    bVar9 = false;
    pFVar26 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 0x10;
    local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.Data.ArrayNum = 0;
    local_1c0.Data.ArrayMax = 0;
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Data.ArrayNum = 0;
    local_170.Data.ArrayMax = 0;
    FVar22.Data = local_190.AllocatorInstance.Data;
    while( true ) {
      if (local_190.ArrayNum != iVar11) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c8);
      }
      if (FVar22.Data == pFVar26) break;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      ::FString::FString(&local_c8,L"=");
      bVar8 = ::FString::Split((FString *)FVar22.Data,&local_c8,&local_1b0,&local_180);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        ::FString::TrimStartAndEndInline(&local_1b0);
        ::FString::TrimStartAndEndInline(&local_180);
        ::FString::FString(&local_110,L"Class");
        if (local_1b0.Data.ArrayNum == local_110.Data.ArrayNum) {
          if (local_1b0.Data.ArrayNum < 2) {
            bVar8 = true;
          }
          else {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_1b0.Data.AllocatorInstance.Data,
                                (wchar_t *)local_110.Data.AllocatorInstance.Data);
            bVar8 = iVar10 == 0;
          }
        }
        else {
          bVar8 = local_1b0.Data.ArrayNum + local_110.Data.ArrayNum == 1;
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          if (local_180.Data.ArrayNum == 0) {
            ::FString::AssignRange(&local_1c0,(wchar_t *)local_180.Data.AllocatorInstance.Data,0);
          }
          else {
            ::FString::AssignRange
                      (&local_1c0,(wchar_t *)local_180.Data.AllocatorInstance.Data,
                       local_180.Data.ArrayNum + -1);
          }
        }
        else {
          ::FString::FString(&local_100,L"Tag");
          if (local_1b0.Data.ArrayNum == local_100.Data.ArrayNum) {
            if (local_1b0.Data.ArrayNum < 2) {
              bVar8 = true;
            }
            else {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_1b0.Data.AllocatorInstance.Data,
                                  (wchar_t *)local_100.Data.AllocatorInstance.Data);
              bVar8 = iVar10 == 0;
            }
          }
          else {
            bVar8 = local_1b0.Data.ArrayNum + local_100.Data.ArrayNum == 1;
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            if (local_180.Data.ArrayNum == 0) {
              ::FString::AssignRange(&local_170,(wchar_t *)local_180.Data.AllocatorInstance.Data,0);
            }
            else {
              ::FString::AssignRange
                        (&local_170,(wchar_t *)local_180.Data.AllocatorInstance.Data,
                         local_180.Data.ArrayNum + -1);
            }
          }
        }
      }
      else {
        pFVar13 = ::FString::TrimStartAndEnd((FString *)FVar22.Data,&local_90);
        if (&local_1b0 != pFVar13) {
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          local_1b0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
          local_1b0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_f0,L"KeepInDevOnly");
        if (local_1b0.Data.ArrayNum == local_f0.Data.ArrayNum) {
          if (local_1b0.Data.ArrayNum < 2) {
            bVar8 = true;
          }
          else {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_1b0.Data.AllocatorInstance.Data,
                                (wchar_t *)local_f0.Data.AllocatorInstance.Data);
            bVar8 = iVar10 == 0;
          }
        }
        else {
          bVar8 = local_1b0.Data.ArrayNum + local_f0.Data.ArrayNum == 1;
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          bVar9 = true;
        }
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      FVar22.Data = FVar22.Data + 0x10;
    }
    if (param_3) {
      if ((!bVar9) || (param_2)) goto LAB_142ba08c7;
LAB_142ba0993:
      FVar27 = (FScriptContainerElement)0x0;
    }
    else {
      if ((bVar9) && (param_2)) goto LAB_142ba0993;
LAB_142ba08c7:
      FVar27 = (FScriptContainerElement)0x1;
    }
    if ((1 < local_1c0.Data.ArrayNum) && (1 < local_170.Data.ArrayNum)) {
      iVar11 = local_170.Data.ArrayNum + -1;
      FVar22.Data = local_170.Data.AllocatorInstance.Data;
      if (local_170.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar22.Data = (FScriptContainerElement *)L"";
      }
      pFVar14 = ::FName::FName(&local_98,iVar11,(wchar_t *)FVar22.Data,FNAME_Add);
      FVar2 = *pFVar14;
      uVar12 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      pFVar15 = TMapBase<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
                            *)__return_storage_ptr__,FVar2.Number + uVar12,pFVar14);
      if (local_1c0.Data.ArrayNum == 0) {
LAB_142ba099b:
        local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_142ba09a6:
        sVar16 = wcslen((wchar_t *)local_d8);
        iVar11 = (int)sVar16;
LAB_142ba09ab:
        iStack_d0 = iVar11;
        pUVar17 = Z_Construct_UClass_UClass_NoRegister();
        local_148._12_4_ = uStack_cc;
        local_148.Size = iStack_d0;
        local_148.DataPtr = (wchar_t *)local_d8;
        this = (UStruct *)StaticFindObject(pUVar17,(UObject *)0x0,&local_148,None);
        if (this != (UStruct *)0x0) {
          pUVar17 = Z_Construct_UClass_UClass_NoRegister();
          iVar11 = (int)pUVar17->_padding_;
          if ((iVar11 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
              &pUVar17->_padding_)) {
            iVar11 = 0;
            pUVar21 = this;
            do {
              pUVar21 = (pUVar21->SuperStruct).field0_0x0.DebugPtr;
              iVar11 = iVar11 + 1;
            } while (pUVar21 != (UStruct *)0x0);
            UStruct::GetStructPathName(this,&local_80);
            iVar10 = (pFVar15->OrderedList).ArrayNum;
            piVar1 = &(pFVar15->OrderedList).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)pFVar15,piVar1);
            }
            (pFVar15->OrderedList).ArrayNum = iVar10 + 1;
            pFVar26 = (pFVar15->OrderedList).AllocatorInstance.Data;
            lVar20 = (longlong)iVar10 * 0x20;
            *(FName *)(pFVar26 + lVar20) = local_80.PackageName;
            ((FName *)(pFVar26 + lVar20))[1] = local_80.AssetName;
            *(UStruct **)(pFVar26 + lVar20 + 0x10) = this;
            *(int *)(pFVar26 + lVar20 + 0x18) = iVar11;
            pFVar26[lVar20 + 0x1c] = FVar27;
            if (pFVar15->bContainsAnyUnresolvedRule == false) {
              pFVar26 = (pFVar15->OrderedList).AllocatorInstance.Data;
              iVar11 = (pFVar15->OrderedList).ArrayNum + -1;
              while (0 < iVar11) {
                pFVar24 = pFVar26 + (longlong)iVar11 * 0x20;
                iVar11 = (iVar11 + -1) / 2;
                pFVar19 = pFVar26 + (longlong)iVar11 * 0x20;
                if (*(int *)(pFVar19 + 0x18) <= *(int *)(pFVar24 + 0x18)) break;
                uVar3 = *(undefined8 *)pFVar24;
                uVar4 = *(undefined8 *)(pFVar24 + 8);
                uVar5 = *(undefined8 *)(pFVar24 + 0x10);
                uVar6 = *(undefined8 *)(pFVar24 + 0x18);
                uVar7 = *(undefined8 *)(pFVar19 + 8);
                *(undefined8 *)pFVar24 = *(undefined8 *)pFVar19;
                *(undefined8 *)(pFVar24 + 8) = uVar7;
                uVar7 = *(undefined8 *)(pFVar19 + 0x18);
                *(undefined8 *)(pFVar24 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
                *(undefined8 *)(pFVar24 + 0x18) = uVar7;
                *(undefined8 *)pFVar19 = uVar3;
                *(undefined8 *)(pFVar19 + 8) = uVar4;
                *(undefined8 *)(pFVar19 + 0x10) = uVar5;
                *(undefined8 *)(pFVar19 + 0x18) = uVar6;
              }
            }
            goto LAB_142ba0ad4;
          }
        }
      }
      else {
        if (local_1c0.Data.ArrayNum != 2) {
LAB_142ba0967:
          if (local_1c0.Data.ArrayNum == 0) goto LAB_142ba099b;
          iVar11 = 0;
          local_d8 = local_1c0.Data.AllocatorInstance.Data;
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_142ba09a6;
          goto LAB_142ba09ab;
        }
        iVar11 = FGenericPlatformStricmp::Strnicmp
                           (L"*",(wchar_t *)local_1c0.Data.AllocatorInstance.Data,1);
        if (iVar11 != 0) {
          goto LAB_142ba0967;
        }
      }
      if (((local_1c0.Data.ArrayNum == 0) || (local_1c0.Data.ArrayNum != 2)) ||
         (iVar11 = FGenericPlatformStricmp::Strnicmp
                             (L"*",(wchar_t *)local_1c0.Data.AllocatorInstance.Data,1), iVar11 != 0)
         ) {
        bVar9 = FPackageName::IsShortPackageName(&local_1c0);
        if (!bVar9) {
          local_a8 = local_1c0.Data.AllocatorInstance.Data;
          local_158.PackageName.ComparisonIndex.Value = 0;
          local_158.PackageName.Number = 0;
          local_158.AssetName.ComparisonIndex.Value = 0;
          local_158.AssetName.Number = 0;
          if (local_1c0.Data.ArrayNum == 0) {
            iStack_a0 = 0;
          }
          else {
            iStack_a0 = local_1c0.Data.ArrayNum + -1;
          }
          local_148._12_4_ = uStack_9c;
          local_148.Size = iStack_a0;
          local_148.DataPtr = (wchar_t *)local_1c0.Data.AllocatorInstance.Data;
          FTopLevelAssetPath::TrySetPath(&local_158,&local_148);
          FVar28.Value = local_158.PackageName.ComparisonIndex.Value;
          uVar12 = local_158.PackageName.Number;
          FVar29.Value = local_158.AssetName.ComparisonIndex.Value;
          uVar30 = local_158.AssetName.Number;
          goto LAB_142ba0c46;
        }
        local_b8 = local_1c0.Data.AllocatorInstance.Data;
        if (local_1c0.Data.ArrayNum == 0) {
          iStack_b0 = 0;
        }
        else {
          iStack_b0 = local_1c0.Data.ArrayNum + -1;
        }
        pUVar17 = Z_Construct_UClass_UClass_NoRegister();
        local_148._12_4_ = uStack_ac;
        local_148.Size = iStack_b0;
        local_148.DataPtr = (wchar_t *)local_b8;
        UClass::TryConvertShortTypeNameToPathName
                  (local_68,pUVar17,&local_148,Warning,
                   L"Parsing [AssetRegistry] CookedTagsWhitelist or CookedTagsBlacklist");
        FVar28.Value = local_68[0].PackageName.ComparisonIndex.Value;
        uVar12 = local_68[0].PackageName.Number;
        FVar29.Value = local_68[0].AssetName.ComparisonIndex.Value;
        uVar30 = local_68[0].AssetName.Number;
        if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142ba0c46;
        if (local_68[0].PackageName == (FName)0x0) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          goto LAB_142ba0c46;
        }
      }
      else {
        FVar28.Value = WildcardPathName.PackageName.ComparisonIndex.Value;
        uVar12 = WildcardPathName.PackageName.Number;
        FVar29.Value = WildcardPathName.AssetName.ComparisonIndex.Value;
        uVar30 = WildcardPathName.AssetName.Number;
LAB_142ba0c46:
        if (CONCAT44(uVar12,FVar28.Value) == 0) {
          if (2 < (byte)LogAssetRegistry._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          goto LAB_142ba0ad4;
        }
      }
      pFVar15->bContainsAnyUnresolvedRule = true;
      piVar1 = &(pFVar15->OrderedList).ArrayMax;
      iVar11 = (pFVar15->OrderedList).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)pFVar15,piVar1);
      }
      (pFVar15->OrderedList).ArrayNum = iVar11 + 1;
      pFVar19 = (pFVar15->OrderedList).AllocatorInstance.Data;
      lVar20 = (longlong)iVar11 * 0x20;
      pFVar26 = pFVar19 + lVar20;
      *(uint *)pFVar26 = FVar28.Value;
      *(uint *)(pFVar26 + 4) = uVar12;
      *(uint *)(pFVar26 + 8) = FVar29.Value;
      *(uint *)(pFVar26 + 0xc) = uVar30;
      *(undefined8 *)(pFVar19 + lVar20 + 0x10) = 0;
      *(undefined4 *)(pFVar19 + lVar20 + 0x18) = 0xffffffff;
      pFVar19[lVar20 + 0x1c] = FVar27;
    }
LAB_142ba0ad4:
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    pFVar25 = pFVar25 + 0x10;
    uVar18 = (ulonglong)local_160;
  } while( true );
}

// PrioritizeAssetInstall @ 142ba15f0

void __cdecl UE::AssetRegistry::Utils::PrioritizeAssetInstall(FAssetData *param_1)

{
  code *pcVar1;
  bool bVar2;
  IPlatformChunkInstall *pIVar3;
  TArrayView<int_const_,int> local_18;
  
  pIVar3 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  FAssetData::GetChunkIDs(param_1,&local_18);
  if (local_18.ArrayNum != 0) {
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x40);
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*pcVar1)(pIVar3,*local_18.DataPtr,0);
  }
  return;
}

// ReadAssetFile @ 142ba1e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::AssetRegistry::Utils::ReadAssetFile(FPackageReader *param_1,FLoadPackageRegistryData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAssetData *pFVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> local_150;
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  undefined1 local_128 [32];
  undefined1 local_108 [64];
  void *local_c8;
  undefined4 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  long64 local_a8;
  FPackageFileVersion local_a0;
  int local_98;
  FPackageCustomVersion *local_90;
  int local_88;
  ForAnyElementType local_80;
  ulonglong local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  FDependsNodeReservations FStack_60;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_108._44_4_ = 0x80;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_128[8] = false;
  local_128[0x19] = Unspecified;
  local_128._28_4_ = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_a8 = 0;
  local_a0.FileVersionUE4 = 0;
  local_a0.FileVersionUE5 = 0;
  local_98 = -1;
  local_90 = (FPackageCustomVersion *)0x0;
  local_88 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  FStack_60.PackageDependenciesSize = 0;
  FStack_60.NameDependenciesSize = 0;
  FStack_60.ManageDependenciesSize = 0;
  FStack_60.ReferencersSize = 0;
  local_50._0_1_ = false;
  local_50._1_1_ = false;
  bVar6 = FAssetDataGatherer::ReadAssetFile
                    (param_1,&local_150,(FPackageDependencyData *)local_128,&local_140,
                     -(uint)(param_2->bGetDependencies != false) & Dependencies);
  if (bVar6) {
    TArray<FAssetData,TSizedDefaultAllocator<32>_>::Reset(&param_2->Data,local_150.ArrayNum);
    iVar8 = local_150.ArrayNum;
    uVar9 = (ulonglong)local_150.ArrayNum;
    pFVar2 = local_150.AllocatorInstance.Data + uVar9 * 8;
    FVar10.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar8) {
        `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      uVar4 = local_150._8_8_;
      if (FVar10.Data == pFVar2) break;
      iVar7 = (param_2->Data).ArrayNum;
      piVar1 = &(param_2->Data).ArrayMax;
      pFVar3 = *(FAssetData **)FVar10.Data;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x868,(ForAnyElementType *)param_2,piVar1);
      }
      (param_2->Data).ArrayNum = iVar7 + 1;
      FAssetData::FAssetData
                ((FAssetData *)((param_2->Data).AllocatorInstance.Data + (longlong)iVar7 * 0x68),
                 pFVar3);
      uVar9 = local_150._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 8;
    }
    iVar8 = local_150.ArrayMax;
    local_150._8_8_ = (ulonglong)(uint)local_150.ArrayMax << 0x20;
    if (((longlong)uVar4 < 0) && (iVar8 != 0)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
    }
    if (param_2->bGetDependencies != false) {
      uVar9 = local_78 & 0xffffffff;
      if ((int)local_78 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar9);
      }
      piVar1 = &(param_2->DataDependencies).ArrayMax;
      (param_2->DataDependencies).ArrayNum = 0;
      if (*piVar1 < (int)local_78) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_78,&(param_2->DataDependencies).AllocatorInstance,0,piVar1);
        uVar9 = local_78 & 0xffffffff;
      }
      iVar8 = (int)uVar9;
      pFVar2 = local_80.Data + (longlong)iVar8 * 0xc;
      FVar10.Data = local_80.Data;
      while( true ) {
        if ((int)uVar9 != iVar8) {
          `TCheckedPointerIterator<FPackageDependencyData::FPackageDependency,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_158);
        }
        if (FVar10.Data == pFVar2) break;
        iVar7 = (param_2->DataDependencies).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(param_2->DataDependencies).AllocatorInstance,piVar1);
        }
        (param_2->DataDependencies).ArrayNum = iVar7 + 1;
        uVar4 = *(undefined8 *)FVar10.Data;
        FVar10.Data = FVar10.Data + 0xc;
        *(undefined8 *)((param_2->DataDependencies).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             uVar4;
        uVar9 = local_78 & 0xffffffff;
      }
    }
  }
  iVar8 = local_150.ArrayNum;
  pFVar2 = local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 8;
  FVar10.Data = local_150.AllocatorInstance.Data;
  while( true ) {
    if (local_150.ArrayNum != iVar8) {
      `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_158);
    }
    if (FVar10.Data == pFVar2) break;
    pvVar5 = *(void **)FVar10.Data;
    if (pvVar5 != (void *)0x0) {
      if (*(void **)((longlong)pvVar5 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar5 + 0x58));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x48));
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)((longlong)pvVar5 + 0x38));
      ::operator_delete(pvVar5,0x68);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>
            ((FSearchableNamesDependency *)local_70.Data,(int)local_68);
  if ((FSearchableNamesDependency *)local_70.Data != (FSearchableNamesDependency *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_c0 = 0;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  DestructItems<FString,int>((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return bVar6;
}

// ResolveFilterTags @ 142ba5f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
* __cdecl UE::AssetRegistry::Utils::ResolveFilterTags
                    (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                     *__return_storage_ptr__,FFilterTagRules *param_1,bool param_2)

{
  undefined1 *puVar1;
  FName *this;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  FTopLevelAssetPath *pFVar6;
  FFilterTagRules *pFVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *pTVar12;
  TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *pTVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  ulong64 uVar15;
  byte bVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  TArray<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,TSizedDefaultAllocator<32>_>
  *pTVar28;
  ForElementType<FSetElementId> FVar29;
  uint *puVar30;
  int iVar31;
  FTopLevelAssetPath *pFVar32;
  undefined1 auStackY_6c8 [32];
  bool local_698;
  undefined1 local_697;
  bool local_696;
  undefined1 local_695;
  undefined1 local_694;
  undefined1 local_693 [3];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_690;
  FFilterTagRules *local_680;
  uint local_678;
  FTopLevelAssetPath *local_670;
  TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *local_668;
  int local_660;
  uint uStack_65c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_658;
  uint local_650;
  uint uStack_64c;
  uint uStack_648;
  undefined4 uStack_644;
  FFilterTagRules *local_640;
  undefined8 uStack_638;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_630;
  uint uStack_628;
  uint uStack_624;
  uint uStack_620;
  int iStack_61c;
  int local_618;
  undefined4 uStack_614;
  undefined8 local_610;
  FTopLevelAssetPath local_608;
  FFilterTagRules *local_5f8;
  int iStack_5f0;
  uint uStack_5ec;
  undefined1 *local_5e8;
  undefined4 uStack_5e0;
  int iStack_5dc;
  int local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  int local_5c8;
  int local_5c4;
  undefined4 local_5c0;
  undefined8 local_5bc;
  undefined1 local_5b4 [8];
  int local_5ac;
  int local_5a8;
  FTopLevelAssetPath *local_5a0;
  TArray<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,TSizedDefaultAllocator<32>_>
  *local_598;
  FName local_590;
  FFilterTagRules *local_588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_580;
  undefined8 uStack_560;
  FFilterTagRules *local_558;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_550;
  undefined8 uStack_530;
  wchar_t *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  TStringView<wchar_t> local_518;
  FFilterTagRules *local_508;
  longlong lStack_500;
  TBitArray<FDefaultBitArrayAllocator> *local_4f8;
  undefined8 uStack_4f0;
  int iStack_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4bc;
  undefined1 local_4b8 [32];
  ForElementType<unsigned_int> local_498;
  uint local_490;
  int local_48c;
  int local_488;
  int local_484;
  undefined1 local_480 [8];
  ForElementType<FSetElementId> local_478;
  int local_470;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_48c = 0x80;
  *(undefined8 *)__return_storage_ptr__ = 0;
  puVar1 = &(param_1->Rules).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  local_5d8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  uStack_5ec = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  param_1->bContainsAnyUnresolvedRule = false;
  local_4b8._0_8_ = (FScriptContainerElement *)0x0;
  local_4b8._8_8_ = 0;
  local_498 = (ForElementType<unsigned_int>)0x0;
  local_490 = 0;
  local_488 = -1;
  local_484 = 0;
  local_478 = (ForElementType<FSetElementId>)0x0;
  local_470 = 0;
  iVar10 = *(int *)&(param_1->Rules).field_0x28;
  iStack_5f0 = 0;
  iStack_5dc = local_5d8;
  if (iVar10 != 0) {
    puVar30 = *(uint **)&(param_1->Rules).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar21 = *puVar30;
    local_5d8 = 0;
    iStack_5f0 = 0;
    while (uVar21 == 0) {
      lVar11 = (longlong)iStack_5f0;
      local_5d8 = local_5d8 + 0x20;
      iStack_5f0 = iStack_5f0 + 1;
      iStack_5dc = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iStack_5f0) goto LAB_142ba6092;
      uVar21 = puVar30[lVar11 + 1];
    }
    uStack_5ec = -uVar21 & uVar21;
    uVar18 = (ulonglong)uStack_5ec * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_5c8 = (int)lVar11;
    iStack_5dc = local_5c8 + -1 + local_5d8;
    if (iVar10 < iStack_5dc) {
      iStack_5dc = iVar10;
    }
  }
LAB_142ba6092:
  uVar21 = *(uint *)&(param_1->Rules).field_0x28;
  bVar16 = (byte)uVar21 & 0x1f;
  iStack_5d0 = *(int *)&(param_1->Rules).field_0x8 - *(int *)&(param_1->Rules).field_0x34;
  uVar27 = uVar21 & 0xffffffe0;
  iVar31 = (int)uVar21 >> 5;
  uStack_65c = 1 << bVar16;
  uVar23 = -1 << bVar16;
  uStack_5e0 = 0xffffffff;
  TStack_550._padding_ = CONCAT44(uStack_5ec,iStack_5f0);
  TStack_550.CurrentBitIndex = iStack_5dc;
  TStack_550.UnvisitedBitMask = 0xffffffff;
  TStack_550._28_4_ = local_4bc;
  TStack_550.BaseBitIndex = local_5d8;
  uStack_530 = CONCAT44(uStack_5cc,iStack_5d0);
  local_696 = param_2;
  local_680 = param_1;
  local_668 = (TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__;
  local_660 = iVar31;
  pTStack_658 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_650 = uVar23;
  uStack_64c = uVar21;
  uStack_648 = uVar27;
  local_5f8 = param_1;
  local_5e8 = puVar1;
  local_558 = param_1;
  TStack_550.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar10 < (int)uVar21)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar5)();
    return pTVar12;
  }
  uVar24 = *(uint *)&(param_1->Rules).field_0x28;
  if (uVar21 != uVar24) {
    puVar17 = *(undefined1 **)&(param_1->Rules).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar23 = uVar23 & *(uint *)(puVar17 + (longlong)iVar31 * 4);
    while (uVar23 == 0) {
      uStack_648 = uVar27 + 0x20;
      local_660 = iVar31 + 1;
      if ((int)(((int)(uVar24 - 1) >> 0x1f & 0x1fU) + (uVar24 - 1)) >> 5 < local_660)
      goto LAB_142ba61db;
      uVar23 = *(uint *)(puVar17 + (longlong)iVar31 * 4 + 4);
      local_650 = 0xffffffff;
      uVar27 = uStack_648;
      iVar31 = local_660;
    }
    uStack_65c = -uVar23 & uVar23;
    uVar18 = (ulonglong)uStack_65c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_5c4 = (int)lVar11;
    uStack_64c = local_5c4 + -1 + uVar27;
    if ((int)uVar24 < (int)uStack_64c) {
LAB_142ba61db:
      uStack_64c = uVar24;
    }
  }
  uStack_638 = CONCAT44(uStack_65c,local_660);
  uStack_624 = uStack_64c;
  uStack_628 = local_650;
  iStack_61c = uStack_644;
  uStack_620 = uStack_648;
  local_618 = *(int *)&(local_680->Rules).field_0x8 - *(int *)&(local_680->Rules).field_0x34;
  pTStack_630 = pTStack_658;
  uStack_4e0 = CONCAT44(uStack_614,local_618);
  local_4f8 = pTStack_658;
  local_640 = local_680;
  local_508 = local_680;
  lStack_500 = uStack_638;
  uStack_4f0 = _uStack_628;
  local_4e8 = _uStack_620;
  do {
    pFVar7 = local_558;
    if (*(int *)&(local_558->Rules).field_0x8 - *(int *)&(local_558->Rules).field_0x34 !=
        (int)uStack_530) {
      local_697 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_697);
    }
    if (((TStack_550.CurrentBitIndex == iStack_4ec) && (TStack_550.Array == local_4f8)) &&
       (pFVar7 == local_508)) {
      uVar15 = GetRegisteredNativeClassesVersionNumber();
      local_680->ClassesFingerprint = uVar15;
      local_470 = 0;
      if (local_478 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_478);
      }
      TSparseArray<TSparseSetElement<UClass_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UClass_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UClass_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_4b8);
      return (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
              *)(TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)__return_storage_ptr__;
    }
    lVar11 = *(longlong *)&pFVar7->Rules;
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    this = (FName *)(lVar11 + (longlong)TStack_550.CurrentBitIndex * 0x28);
    local_610 = *(undefined8 *)(lVar11 + (longlong)TStack_550.CurrentBitIndex * 0x28);
    local_468.Base = local_448;
    local_468.CurPos = local_448;
    local_468.End = (wchar_t *)local_48;
    ::FName::ToString(this,&local_468);
    pTVar28 = (TArray<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,TSizedDefaultAllocator<32>_>
               *)(this + 1);
    local_528 = local_468.Base;
    iStack_520 = (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1);
    local_598 = pTVar28;
    if ((char)this[3].ComparisonIndex.Value != '\0') {
      local_518._12_4_ = uStack_51c;
      local_518.Size = iStack_520;
      local_518.DataPtr = local_468.Base;
      local_698 = false;
      ResolveRules(&local_518,pTVar28,local_696,&local_698);
      *(bool *)&this[3].ComparisonIndex.Value = local_698 == false;
      if (local_698 == false) {
        local_680->bContainsAnyUnresolvedRule = true;
      }
    }
    if (local_4b8._8_4_ != local_484) {
      TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *)
                 local_4b8);
      uVar8 = local_4b8._8_8_;
      local_4b8._8_8_ = local_4b8._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar8 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_4b8,0,(int *)(local_4b8 + 0xc));
      }
      local_488 = -1;
      local_484 = 0;
      local_490 = 0;
    }
    local_678 = this[2].ComparisonIndex.Value;
    uVar18 = (ulonglong)(int)local_678;
    pFVar32 = (FTopLevelAssetPath *)(pTVar28->AllocatorInstance).Data;
    local_5a0 = pFVar32 + uVar18 * 2;
    local_690.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_690.ArrayNum = 0;
    local_690.ArrayMax = 0;
    while( true ) {
      pFVar6 = local_5a0;
      uVar21 = 0;
      local_670 = pFVar32;
      if (pTVar28->ArrayNum != (int)uVar18) {
        local_695 = 0;
        `TCheckedPointerIterator<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_695);
      }
      __return_storage_ptr__ =
           (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
            *)local_668;
      if (pFVar32 == pFVar6) goto LAB_142ba69d5;
      if (pFVar32[1].PackageName == (FName)0x0) break;
      local_690.ArrayNum = 0;
      if ((local_690.ArrayMax < 0) && (local_690.ArrayMax != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_690.AllocatorInstance,0,&local_690.ArrayMax);
      }
      GetDerivedClasses((UClass *)pFVar32[1].PackageName,&local_690,true);
      iVar10 = local_690.ArrayNum;
      if ((char)pFVar32[1].AssetName.Number == '\0') {
        pFVar26 = local_690.AllocatorInstance.Data + (longlong)local_690.ArrayNum * 8;
        FVar29 = local_478;
        FVar22.Data = local_690.AllocatorInstance.Data;
LAB_142ba65f0:
        while( true ) {
          if (local_690.ArrayNum != iVar10) {
            local_694 = 0;
            `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_694);
            FVar29 = local_478;
          }
          if (FVar22.Data == pFVar26) break;
          uVar18 = *(ulonglong *)FVar22.Data;
          if (local_4b8._8_4_ != local_484) {
            uVar21 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
            uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
            FVar20 = (ForElementType<FSetElementId>)local_480;
            if (FVar29 != (ForElementType<FSetElementId>)0x0) {
              FVar20 = FVar29;
            }
            uVar21 = *(uint *)((longlong)FVar20 +
                              (longlong)(int)(local_470 - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
            if (uVar21 != 0xffffffff) {
LAB_142ba6680:
              lVar11 = (longlong)(int)uVar21 * 0x10;
              if (*(ulonglong *)(local_4b8._0_8_ + lVar11) != uVar18) goto code_r0x000142ba6694;
              if (((int)uVar21 < 0) || ((int)local_490 <= (int)uVar21)) {
LAB_142ba66e2:
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Elements.IsValidIndex(ElementIndex)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2ab,
                                   L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
                FVar29 = local_478;
                if (bVar9) {
                  pcVar5 = (code *)swi(3);
                  pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                             *)(*pcVar5)();
                  return pTVar12;
                }
              }
              else {
                FVar19 = (ForElementType<unsigned_int>)((longlong)local_4b8 + 0x10);
                if (local_498 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = local_498;
                }
                uVar23 = uVar21;
                if ((int)uVar21 < 0) {
                  uVar23 = uVar21 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar19 + (longlong)((int)uVar23 >> 5) * 4) >>
                     (uVar21 & 0x1f) & 1) == 0) goto LAB_142ba66e2;
              }
              uVar8 = local_4b8._0_8_;
              FVar20 = (ForElementType<FSetElementId>)local_480;
              if (FVar29 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar29;
              }
              pFVar25 = (FScriptContainerElement *)
                        ((longlong)FVar20 + (longlong)*(int *)(local_4b8._0_8_ + lVar11 + 0xc) * 4);
              while( true ) {
                uVar23 = *(uint *)pFVar25;
                if ((uVar23 == 0xffffffff) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NextElementIndex != INDEX_NONE",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                       ,0x2b5,L"Corrupt hash"), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                             *)(*pcVar5)();
                  return pTVar12;
                }
                if (uVar23 == uVar21) break;
                pFVar25 = (FScriptContainerElement *)
                          (local_4b8._0_8_ + (longlong)(int)uVar23 * 0x10 + 8);
              }
              *(uint *)pFVar25 = *(uint *)(uVar8 + lVar11 + 8);
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_4b8,uVar21,1);
              FVar29 = local_478;
            }
          }
          FVar22.Data = FVar22.Data + 8;
        }
        FVar2 = local_670[1].PackageName;
        if (local_4b8._8_4_ == local_484) goto LAB_142ba6928;
        uVar21 = ((uint)((ulonglong)FVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar2 >> 4)) *
                 -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        FVar20 = (ForElementType<FSetElementId>)local_480;
        if (FVar29 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar29;
        }
        uVar21 = *(uint *)((longlong)FVar20 +
                          (longlong)(int)(local_470 - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
        if (uVar21 != 0xffffffff) {
LAB_142ba6810:
          lVar11 = (longlong)(int)uVar21 * 0x10;
          if (*(FName *)(local_4b8._0_8_ + lVar11) != FVar2) goto code_r0x000142ba6824;
          if (((int)uVar21 < 0) || ((int)local_490 <= (int)uVar21)) {
LAB_142ba686e:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            FVar29 = local_478;
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                         *)(*pcVar5)();
              return pTVar12;
            }
          }
          else {
            FVar19 = (ForElementType<unsigned_int>)((longlong)local_4b8 + 0x10);
            if (local_498 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_498;
            }
            uVar23 = uVar21;
            if ((int)uVar21 < 0) {
              uVar23 = uVar21 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar19 + (longlong)((int)uVar23 >> 5) * 4) >> (uVar21 & 0x1f) &
                1) == 0) goto LAB_142ba686e;
          }
          uVar8 = local_4b8._0_8_;
          FVar20 = (ForElementType<FSetElementId>)local_480;
          if (FVar29 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar29;
          }
          pFVar26 = (FScriptContainerElement *)
                    ((longlong)FVar20 + (longlong)*(int *)(local_4b8._0_8_ + lVar11 + 0xc) * 4);
          while( true ) {
            uVar23 = *(uint *)pFVar26;
            if ((uVar23 == 0xffffffff) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                         *)(*pcVar5)();
              return pTVar12;
            }
            if (uVar23 == uVar21) break;
            pFVar26 = (FScriptContainerElement *)
                      (local_4b8._0_8_ + (longlong)(int)uVar23 * 0x10 + 8);
          }
          *(uint *)pFVar26 = *(uint *)(uVar8 + lVar11 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_4b8,uVar21,1);
        }
      }
      else {
        uVar21 = local_690.ArrayNum + 1 + (local_4b8._8_4_ - local_484);
        if ((uint)(local_4b8._8_4_ - local_484) < uVar21) {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_4b8,uVar21);
          if (uVar21 < 4) {
            iVar10 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            local_5c0 = (undefined4)lVar11;
            iVar10 = 1 << ((byte)lVar11 & 0x1f);
          }
          if ((local_470 == 0) || (local_470 < iVar10)) {
            local_470 = iVar10;
            TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>
                        *)local_4b8);
          }
        }
        TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>::
        Emplace<UClass_const_*_const_&>
                  ((TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *)
                   local_4b8,(UClass **)&local_5bc,(bool *)(pFVar32 + 1));
        iVar10 = local_690.ArrayNum;
        FVar22.Data = local_690.AllocatorInstance.Data;
        lVar11 = (longlong)local_690.ArrayNum;
        if ((local_690.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                     *)(*pcVar5)();
          return pTVar12;
        }
        uVar21 = iVar10 + (local_4b8._8_4_ - local_484);
        if ((uint)(local_4b8._8_4_ - local_484) < uVar21) {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_4b8,uVar21);
          if (uVar21 < 4) {
            iVar10 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_5bc._4_4_ = (undefined4)lVar4;
            iVar10 = 1 << ((byte)lVar4 & 0x1f);
          }
          if ((local_470 == 0) || (local_470 < iVar10)) {
            local_470 = iVar10;
            TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>
                        *)local_4b8);
          }
        }
        pFVar26 = FVar22.Data + lVar11 * 8;
        pFVar6 = local_670;
        for (; local_670 = pFVar32, FVar22.Data != pFVar26; FVar22.Data = FVar22.Data + 8) {
          local_670 = pFVar6;
          TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>::
          Emplace<UClass_const_*_const_&>
                    ((TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *)
                     local_4b8,(UClass **)local_5b4,(bool *)FVar22.Data);
          pFVar6 = local_670;
        }
      }
LAB_142ba6928:
      pFVar32 = local_670 + 2;
      uVar18 = (ulonglong)local_678;
      pTVar28 = local_598;
    }
    if ((char)pFVar32[1].AssetName.Number != '\0') {
      FVar2 = pFVar32->AssetName;
      uVar23 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      FVar3 = pFVar32->PackageName;
      uVar27 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      __return_storage_ptr__ =
           (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
            *)local_668;
      uVar27 = uVar27 + FVar3.Number;
      uVar27 = uVar27 * 0x40 + uVar23 + FVar2.Number + (uVar27 >> 2) + 0x9e3779b9 ^ uVar27;
      pTVar13 = TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindByHash<FTopLevelAssetPath>(local_668,uVar27,pFVar32);
      if (pTVar13 ==
          (TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
          0x0) {
        pTVar14 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                  ::EmplaceByHash<FTopLevelAssetPath_const_&>
                            ((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                              *)__return_storage_ptr__,uVar27,pFVar32);
      }
      else {
        pTVar14 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&pTVar13->field_0x10;
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (pTVar14,(FName *)(local_5b4 + 4),(bool *)&local_610);
    }
LAB_142ba69d5:
    uVar23 = local_490;
    uVar27 = 1;
    uStack_624 = uVar21;
    uStack_620 = uVar21;
    if (local_490 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_4b8 + 0x10);
      if (local_498 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_498;
      }
      uVar24 = *(uint *)FVar19;
      while (uVar24 == 0) {
        lVar11 = (longlong)(int)uVar21;
        uStack_620 = uStack_620 + 0x20;
        uVar21 = uVar21 + 1;
        uStack_624 = local_490;
        if ((int)(((int)(local_490 - 1) >> 0x1f & 0x1fU) + (local_490 - 1)) >> 5 < (int)uVar21)
        goto LAB_142ba6a50;
        uVar24 = ((uint *)((longlong)FVar19 + 4))[lVar11];
      }
      uVar27 = -uVar24 & uVar24;
      uVar18 = (ulonglong)uVar27 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_5ac = (int)lVar11;
      uStack_624 = (uStack_620 - 1) + local_5ac;
      if ((int)local_490 < (int)uStack_624) {
        uStack_624 = local_490;
      }
    }
LAB_142ba6a50:
    local_640 = (FFilterTagRules *)local_4b8;
    pTStack_630 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10);
    local_618 = local_4b8._8_4_ - local_484;
    uVar24 = local_490 & 0xffffffe0;
    uStack_638 = CONCAT44(uVar27,uVar21);
    uStack_628 = 0xffffffff;
    iStack_61c = iStack_5dc;
    TStack_580._padding_ = uStack_638;
    iVar10 = (int)local_490 >> 5;
    uStack_560 = CONCAT44(uStack_614,local_618);
    bVar16 = (byte)local_490;
    TStack_580.UnvisitedBitMask = 0xffffffff;
    TStack_580.CurrentBitIndex = uStack_624;
    TStack_580.BaseBitIndex = uStack_620;
    TStack_580._28_4_ = iStack_5dc;
    local_588 = local_640;
    TStack_580.Array = pTStack_630;
    if (((int)local_490 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                 *)(*pcVar5)();
      return pTVar12;
    }
    if (uVar23 != local_490) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_4b8 + 0x10);
      if (local_498 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_498;
      }
      uVar21 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar10 * 4);
      while (uVar21 == 0) {
        lVar11 = (longlong)iVar10;
        uVar24 = uVar24 + 0x20;
        iVar10 = iVar10 + 1;
        uVar23 = local_490;
        if ((int)(((int)(local_490 - 1) >> 0x1f & 0x1fU) + (local_490 - 1)) >> 5 < iVar10)
        goto LAB_142ba6b70;
        uVar21 = ((uint *)((longlong)FVar19 + 4))[lVar11];
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_5a8 = (int)lVar11;
      uVar23 = (uVar24 - 1) + local_5a8;
      if ((int)local_490 < (int)uVar23) {
        uVar23 = local_490;
      }
    }
LAB_142ba6b70:
    while( true ) {
      pFVar7 = local_588;
      if (*(int *)&(local_588->Rules).field_0x8 - *(int *)&(local_588->Rules).field_0x34 !=
          (int)uStack_560) {
        local_693[0] = 0;
        `TSparseArray<TSparseSetElement<UClass_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_693);
      }
      if (((TStack_580.CurrentBitIndex == uVar23) &&
          (TStack_580.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_4b8 + 0x10))) &&
         (pFVar7 == (FFilterTagRules *)local_4b8)) break;
      UStruct::GetStructPathName
                (*(UStruct **)
                  (*(longlong *)&pFVar7->Rules + (longlong)TStack_580.CurrentBitIndex * 0x10),
                 &local_608);
      FVar3 = local_608.AssetName;
      uVar21 = ::GetTypeHash(local_608.AssetName.ComparisonIndex.Value);
      FVar2 = local_608.PackageName;
      uVar27 = ::GetTypeHash(local_608.PackageName.ComparisonIndex.Value);
      uVar27 = uVar27 + FVar2.Number;
      uVar27 = uVar27 * 0x40 + uVar21 + FVar3.Number + (uVar27 >> 2) + 0x9e3779b9 ^ uVar27;
      pTVar13 = TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindByHash<FTopLevelAssetPath>
                          ((TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__,uVar27,&local_608);
      if (pTVar13 ==
          (TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
          0x0) {
        pTVar14 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                  ::EmplaceByHash<FTopLevelAssetPath>
                            ((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                              *)__return_storage_ptr__,uVar27,&local_608);
      }
      else {
        pTVar14 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&pTVar13->field_0x10;
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (pTVar14,&local_590,(bool *)&local_610);
      TStack_580.UnvisitedBitMask = TStack_580.UnvisitedBitMask & ~TStack_580._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_580);
    }
    if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    TStack_550.UnvisitedBitMask = TStack_550.UnvisitedBitMask & ~TStack_550._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_550);
  } while( true );
code_r0x000142ba6824:
  uVar21 = *(uint *)(local_4b8._0_8_ + lVar11 + 8);
  if (uVar21 == 0xffffffff) goto LAB_142ba6928;
  goto LAB_142ba6810;
code_r0x000142ba6694:
  uVar21 = *(uint *)(local_4b8._0_8_ + lVar11 + 8);
  if (uVar21 == 0xffffffff) goto code_r0x000142ba669d;
  goto LAB_142ba6680;
code_r0x000142ba669d:
  FVar22.Data = FVar22.Data + 8;
  goto LAB_142ba65f0;
}

// ResolveRules @ 142ba6ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::AssetRegistry::Utils::ResolveRules
          (TStringView<wchar_t> *param_1,
          TArray<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3,bool *param_4)

{
  int iVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  UClass *pUVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_ac;
  FString local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68 [2];
  
  uVar13 = 0;
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (FName *)(param_2->AllocatorInstance).Data;
  if ((*pFVar2 == WildcardPathName.PackageName) && (pFVar2[1] == WildcardPathName.AssetName)) {
    while (1 < param_2->ArrayNum) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((2 < (byte)LogAssetRegistry._0_1_) && (!param_3)) && (pFVar3[0x1c] != pFVar3[0x3c])) {
        if ((param_2->ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FTopLevelAssetPath::ToString
                  ((FTopLevelAssetPath *)((param_2->AllocatorInstance).Data + 0x20),&local_a8);
        if ((param_2->ArrayNum < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((param_2->ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      if ((param_2->ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      iVar7 = param_2->ArrayNum + -2;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar3 + 0x20,pFVar3 + (longlong)(param_2->ArrayNum - iVar7) * 0x20,
                (longlong)iVar7 << 5);
      }
      param_2->ArrayNum = param_2->ArrayNum + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
    }
    if (param_4 != (bool *)0x0) {
      *param_4 = true;
    }
  }
  else {
    bVar5 = false;
    while ((-1 < (int)uVar13 && ((int)uVar13 < param_2->ArrayNum))) {
      if (((int)uVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FTopLevelAssetPath::ToString
                          ((FTopLevelAssetPath *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20),
                           &local_78);
      pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
      iVar1 = (pFVar10->Data).ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      local_88._12_4_ = uStack_ac;
      local_88.Size = iVar7;
      local_98.DataPtr = (wchar_t *)0x0;
      local_98.Size = 0;
      local_98._12_4_ = 0;
      local_88.DataPtr = (wchar_t *)pFVar3;
      pUVar11 = StaticLoadClass(pUVar11,(UObject *)0x0,&local_88,&local_98,0x2000,(UPackageMap *)0x0
                               );
      uVar14 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(UClass **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20 + 0x10) =
           pUVar11;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      uVar14 = 0;
      uVar8 = uVar14;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = 0;
      if (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20 + 0x10) ==
          0) {
        if (uVar13 == 0) {
LAB_142ba74ef:
          bVar5 = false;
        }
        else {
          uVar14 = uVar8;
          if ((int)(uVar13 - 1) < param_2->ArrayNum) {
            uVar14 = -uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          uVar14 = uVar8;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pFVar3[(longlong)(int)uVar13 * 0x20 + -4] !=
              (param_2->AllocatorInstance).Data[(longlong)(int)uVar13 * 0x20 + 0x1c])
          goto LAB_142ba74ef;
          bVar5 = true;
        }
        if (((2 < (byte)LogAssetRegistry._0_1_) && (!param_3)) && (!bVar5)) {
          uVar14 = uVar8;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FTopLevelAssetPath::ToString
                    ((FTopLevelAssetPath *)
                     ((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20),local_68);
          uVar14 = uVar8;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = true;
        lVar12 = (longlong)(int)uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + lVar12 * 0x20 + 0x18) = 0x7fffffff;
      }
      else {
        uVar9 = uVar14;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        for (lVar12 = *(longlong *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20 + 0x10);
            lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x40)) {
          uVar14 = uVar14 + 1;
        }
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = (longlong)(int)uVar13;
        uVar13 = uVar13 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + lVar12 * 0x20 + 0x18) = uVar14;
      }
    }
    AlgoImpl::
    HeapSortInternal<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,int,_UE::AssetRegistry::Utils::ResolveRules_::__l2::<lambda_1>,TLess<int>_>
              ((FFilterTagsRule *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
               (<lambda_1>)0x0,(TLess<int>)0x0);
    if (param_4 != (bool *)0x0) {
      *param_4 = !bVar5;
    }
  }
  return;
}

// RunAssetThroughFilter @ 142ba77f0

bool __cdecl
UE::AssetRegistry::Utils::RunAssetThroughFilter
          (FAssetData *param_1,FARCompiledFilter *param_2,EFilterMode param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = param_3 == Inclusive;
  if ((((((*(int *)&(param_2->TagsAndValues).field_0x8 ==
           *(int *)&(param_2->TagsAndValues).field_0x34 &&
          *(int *)&(param_2->ClassPaths).Elements.field_0x8 ==
          *(int *)&(param_2->ClassPaths).Elements.field_0x34) &&
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x8 ==
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x34) &&
        *(int *)&(param_2->PackagePaths).Elements.field_0x8 ==
        *(int *)&(param_2->PackagePaths).Elements.field_0x34) &&
       *(int *)&(param_2->PackageNames).Elements.field_0x8 ==
       *(int *)&(param_2->PackageNames).Elements.field_0x34) && param_2->WithPackageFlags == 0) &&
      param_2->WithoutPackageFlags == 0) {
    return bVar2;
  }
  bVar1 = RunAssetThroughFilter_Unchecked(param_1,param_2,bVar2);
  return bVar1 == bVar2;
}

// RunAssetThroughFilter_Unchecked @ 142ba7880

bool __cdecl
UE::AssetRegistry::Utils::RunAssetThroughFilter_Unchecked
          (FAssetData *param_1,FARCompiledFilter *param_2,bool param_3)

{
  ulonglong uVar1;
  uint uVar2;
  FName FVar3;
  FName FVar4;
  FAssetDataTagMap *this;
  code *pcVar5;
  ForElementType<unsigned_int> FVar6;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *pTVar7;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FSoftObjectPath *pFVar15;
  longlong lVar16;
  FValueId *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ForElementType<FSetElementId> FVar21;
  FName *pFVar22;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  int iVar25;
  undefined1 local_res10 [8];
  byte local_res18;
  int local_res20;
  FAssetTagValueRef_u_0 local_f8;
  ForElementType<unsigned_int> local_f0;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *local_b8;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FName local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FSoftObjectPath local_58;
  
  iVar25 = -1;
  iVar13 = -1;
  local_res18 = param_3;
  if (*(int *)&(param_2->PackageNames).Elements.field_0x8 -
      *(int *)&(param_2->PackageNames).Elements.field_0x34 < 1) {
LAB_142ba7927:
    if (0 < *(int *)&(param_2->PackagePaths).Elements.field_0x8 -
            *(int *)&(param_2->PackagePaths).Elements.field_0x34) {
      FVar3 = param_1->PackagePath;
      uVar12 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      iVar19 = iVar13;
      if (*(int *)&(param_2->PackagePaths).Elements.field_0x8 !=
          *(int *)&(param_2->PackagePaths).Elements.field_0x34) {
        FVar21 = (param_2->PackagePaths).Hash.SecondaryData;
        if (FVar21 == (ForElementType<FSetElementId>)0x0) {
          FVar21 = (ForElementType<FSetElementId>)&(param_2->PackagePaths).Hash;
        }
        iVar18 = *(int *)((longlong)FVar21 +
                         (ulonglong)((param_2->PackagePaths).HashSize - 1U & FVar3.Number + uVar12)
                         * 4);
        if (iVar18 != -1) {
          lVar20 = *(longlong *)&(param_2->PackagePaths).Elements;
          do {
            iVar19 = iVar18;
            if (*(FName *)(lVar20 + (longlong)iVar18 * 0x10) == FVar3) break;
            iVar18 = *(int *)(lVar20 + 8 + (longlong)iVar18 * 0x10);
            iVar19 = iVar13;
          } while (iVar18 != -1);
        }
      }
      if ((iVar19 != -1) != param_3) goto LAB_142ba7ad3;
    }
    if (0 < *(int *)&(param_2->SoftObjectPaths).Elements.field_0x8 -
            *(int *)&(param_2->SoftObjectPaths).Elements.field_0x34) {
      pFVar15 = FAssetData::GetSoftObjectPath(param_1,&local_58);
      uVar12 = ::GetTypeHash(pFVar15);
      iVar13 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
               FindIndexByHash<FSoftObjectPath>(&param_2->SoftObjectPaths,uVar12,pFVar15);
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
      if ((iVar13 != -1) != param_3) goto LAB_142ba7ad3;
    }
    if (0 < *(int *)&(param_2->ClassPaths).Elements.field_0x8 -
            *(int *)&(param_2->ClassPaths).Elements.field_0x34) {
      FVar3 = (param_1->AssetClassPath).AssetName;
      uVar12 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      FVar4 = (param_1->AssetClassPath).PackageName;
      uVar14 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      uVar14 = uVar14 + FVar4.Number;
      iVar13 = iVar25;
      if (*(int *)&(param_2->ClassPaths).Elements.field_0x8 !=
          *(int *)&(param_2->ClassPaths).Elements.field_0x34) {
        FVar21 = (param_2->ClassPaths).Hash.SecondaryData;
        if (FVar21 == (ForElementType<FSetElementId>)0x0) {
          FVar21 = (ForElementType<FSetElementId>)&(param_2->ClassPaths).Hash;
        }
        iVar19 = *(int *)((longlong)FVar21 +
                         (ulonglong)
                         ((param_2->ClassPaths).HashSize - 1U &
                         (uVar14 * 0x40 + -0x61c88647 + uVar12 + FVar3.Number + (uVar14 >> 2) ^
                         uVar14)) * 4);
        if (iVar19 != -1) {
          lVar20 = *(longlong *)&(param_2->ClassPaths).Elements;
          do {
            lVar16 = (longlong)iVar19;
            if ((*(FName *)(lVar20 + lVar16 * 0x18) == (param_1->AssetClassPath).PackageName) &&
               (iVar13 = iVar19,
               *(FName *)(lVar20 + 8 + lVar16 * 0x18) == (param_1->AssetClassPath).AssetName))
            break;
            iVar19 = *(int *)(lVar20 + 0x10 + lVar16 * 0x18);
            iVar13 = iVar25;
          } while (iVar19 != -1);
        }
      }
      if ((iVar13 != -1) != param_3) goto LAB_142ba7ad3;
    }
    iStack_c0 = *(int *)&(param_2->TagsAndValues).field_0x8 -
                *(int *)&(param_2->TagsAndValues).field_0x34;
    if (0 < iStack_c0) {
      local_b8 = &param_2->TagsAndValues;
      bVar11 = false;
      local_f0 = (ForElementType<unsigned_int>)&(param_2->TagsAndValues).field_0x10;
      iVar25 = *(int *)&(param_2->TagsAndValues).field_0x28;
      iStack_e0 = 0;
      uStack_dc = 1;
      local_c8 = 0;
      iStack_cc = 0;
      if (iVar25 != 0) {
        puVar24 = *(uint **)&(param_2->TagsAndValues).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)local_f0;
        }
        uVar12 = *puVar24;
        local_c8 = 0;
        while (uVar12 == 0) {
          lVar20 = (longlong)iStack_e0;
          local_c8 = local_c8 + 0x20;
          iStack_e0 = iStack_e0 + 1;
          iStack_cc = iVar25;
          if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0)
          goto LAB_142ba7ba5;
          uVar12 = (puVar24 + 1)[lVar20];
        }
        uStack_dc = -uVar12 & uVar12;
        uVar1 = (ulonglong)uStack_dc * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_res20 = (int)lVar20;
        iStack_cc = local_res20 + -1 + local_c8;
        if (iVar25 < iStack_cc) {
          iStack_cc = iVar25;
        }
      }
LAB_142ba7ba5:
      local_e8 = &param_2->TagsAndValues;
      uVar12 = *(uint *)&(param_2->TagsAndValues).field_0x28;
      uVar14 = uVar12 & 0xffffffe0;
      uStack_d0 = 0xffffffff;
      TStack_a8.CurrentBitIndex = iStack_cc;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      TStack_a8._padding_ = CONCAT44(uStack_dc,iStack_e0);
      TStack_a8._28_4_ = iStack_cc;
      TStack_a8.BaseBitIndex = local_c8;
      uStack_88 = CONCAT44(uStack_bc,iStack_c0);
      iVar13 = (int)uVar12 >> 5;
      local_d8 = (undefined1 *)local_f0;
      iStack_c4 = iStack_cc;
      local_b0 = local_e8;
      TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
      if ((((int)uVar12 < 0) || (iVar25 < (int)uVar12)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pTVar7 = local_b8;
      FVar6 = local_f0;
      uVar2 = *(int *)((longlong)local_f0 + 0x18);
      if (uVar12 != uVar2) {
        FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar23 = local_f0;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar20 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_142ba7cc0;
          uVar12 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar20 * 4);
        }
        uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar12 = (int)lVar20 + -1 + uVar14;
        if ((int)uVar2 < (int)uVar12) {
          uVar12 = uVar2;
        }
      }
LAB_142ba7cc0:
      do {
        pTVar8 = local_b0;
        if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
          `TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_a8.CurrentBitIndex == uVar12) &&
            ((ForElementType<unsigned_int>)TStack_a8.Array == FVar6)) && (pTVar8 == pTVar7)) {
LAB_142ba7dcc:
          if (bVar11 == (bool)local_res18) {
            return (bool)local_res18;
          }
          return (bool)(local_res18 ^ 1);
        }
        pFVar22 = (FName *)((longlong)TStack_a8.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
        FVar3 = *pFVar22;
        if (pFVar22[2].Number == 0xffffffff) {
          bVar11 = FAssetDataTagMapSharedView::Contains(&param_1->TagsAndValues,FVar3);
        }
        else {
          if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
            this = (param_1->TagsAndValues).field0_0x0.Loose;
            if (this == (FAssetDataTagMap *)0x0) {
              local_f8.Loose = (FString *)0x0;
            }
            else {
              local_f8.Loose =
                   TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                             ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                              this,FVar3);
            }
          }
          else {
            pFVar17 = FixedTagPrivate::FMapHandle::FindValue
                                ((FMapHandle *)&param_1->TagsAndValues,FVar3);
            if (pFVar17 == (FValueId *)0x0) {
              local_f8.Loose = (FString *)0x0;
            }
            else {
              local_f8.Bits =
                   ((ulonglong)*(ushort *)&(param_1->TagsAndValues).field0_0x0 & 0xfffffffffffffffc
                   | 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar17;
            }
          }
          local_78 = pFVar22[1];
          uVar14 = pFVar22[2].ComparisonIndex.Value;
          iStack_70 = uVar14 - 1;
          if (uVar14 == 0) {
            iStack_70 = 0;
          }
          local_68._12_4_ = uStack_6c;
          local_68.Size = iStack_70;
          local_68.DataPtr = (wchar_t *)local_78;
          bVar11 = FAssetTagValueRef::Equals((FAssetTagValueRef *)&local_f8.Fixed,&local_68);
        }
        if (bVar11 != false) goto LAB_142ba7dcc;
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
      } while( true );
    }
  }
  else {
    FVar3 = param_1->PackageName;
    uVar12 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    iVar19 = iVar13;
    if (*(int *)&(param_2->PackageNames).Elements.field_0x8 !=
        *(int *)&(param_2->PackageNames).Elements.field_0x34) {
      FVar21 = (param_2->PackageNames).Hash.SecondaryData;
      if (FVar21 == (ForElementType<FSetElementId>)0x0) {
        FVar21 = (ForElementType<FSetElementId>)&(param_2->PackageNames).Hash;
      }
      iVar18 = *(int *)((longlong)FVar21 +
                       (ulonglong)((param_2->PackageNames).HashSize - 1U & FVar3.Number + uVar12) *
                       4);
      if (iVar18 != -1) {
        lVar20 = *(longlong *)&(param_2->PackageNames).Elements;
        do {
          iVar19 = iVar18;
          if (*(FName *)(lVar20 + (longlong)iVar18 * 0x10) == FVar3) break;
          iVar18 = *(int *)(lVar20 + 8 + (longlong)iVar18 * 0x10);
          iVar19 = iVar13;
        } while (iVar18 != -1);
      }
    }
    if ((iVar19 != -1) == param_3) goto LAB_142ba7927;
LAB_142ba7ad3:
    param_3 = !param_3;
  }
  return param_3;
}

// RunAssetsThroughFilter @ 142ba7eb0

void __cdecl
UE::AssetRegistry::Utils::RunAssetsThroughFilter
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,FARCompiledFilter *param_2,
          EFilterMode param_3)

{
  int iVar1;
  FAssetData *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar3 = IsFilterValid(param_2);
  if (bVar3) {
    bVar3 = param_3 == Inclusive;
    iVar1 = param_1->ArrayNum;
    iVar8 = 0;
    if (iVar1 != 0) {
      iVar7 = 0;
      pFVar2 = (FAssetData *)(param_1->AllocatorInstance).Data;
      bVar4 = RunAssetThroughFilter_Unchecked(pFVar2,param_2,bVar3);
      bVar4 = bVar4 == bVar3;
      iVar8 = iVar7;
      iVar6 = iVar7;
joined_r0x000142ba7f3e:
      do {
        iVar7 = iVar7 + 1;
        if (iVar7 < iVar1) {
          bVar5 = RunAssetThroughFilter_Unchecked(pFVar2 + iVar7,param_2,bVar3);
          if (bVar4 == (bVar5 == bVar3)) goto joined_r0x000142ba7f3e;
        }
        iVar9 = iVar7 - iVar6;
        if (bVar4 == false) {
          DestructItems<FAssetData,int>(pFVar2 + iVar6,iVar9);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(pFVar2 + iVar8,pFVar2 + iVar6,(longlong)iVar9 * 0x68);
          }
          iVar8 = iVar8 + iVar9;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar6 = iVar7;
      } while (iVar7 < iVar1);
      param_1->ArrayNum = iVar8;
    }
    if ((iVar8 < iVar1) && (param_1->ArrayMax != iVar8)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar8,&param_1->AllocatorInstance,iVar8,&param_1->ArrayMax);
    }
  }
  return;
}

// ShouldSearchAllAssetsAtStart @ 142baeff0

bool __cdecl UE::AssetRegistry::ShouldSearchAllAssetsAtStart(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  bool local_res8 [32];
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Bool(pwVar2,L"AssetGatherAll=",local_res8);
  uVar3 = 0;
  if (bVar1) {
    uVar3 = local_res8[0];
  }
  return (bool)uVar3;
}

// UpdateSerializationOptions @ 142bb62d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::AssetRegistry::Utils::UpdateSerializationOptions
          (FAssetRegistrySerializationOptions *param_1,FFilterTagRules *param_2,bool param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_2->bContainsAnyUnresolvedRule == false) &&
     (uVar1 = param_2->ClassesFingerprint, uVar2 = GetRegisteredNativeClassesVersionNumber(),
     uVar1 == uVar2)) {
    return;
  }
  pTVar3 = (TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)ResolveFilterTags((TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                                 *)local_78,param_2,param_3);
  if ((TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
       *)&param_1->CookFilterlistTagsByClass != pTVar3) {
    TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)&param_1->CookFilterlistTagsByClass,pTVar3);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&> @ 1504975c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&>
          (FLogCategoryBase *param_1,FStaticLocalizedLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[10]> *param_5,int *param_6)

{
  FLogField local_38;
  char (*local_20) [10];
  int *local_18;
  code *local_10;
  
  local_38.Name = *param_3->Name;
  local_38.WriteValue = FLogField::Write<FString>;
  local_20 = param_5->Name;
  local_18 = param_6;
  local_10 = FLogField::Write<int>;
  local_38.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&> @ 150497620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&>
          (FLogCategoryBase *param_1,FStaticLocalizedLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[10]> *param_5,int *param_6,
          TLogFieldName<char_const_(&)[11]> *param_7,int *param_8,
          TLogFieldName<char_const_(&)[12]> *param_9,long64 *param_10)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  char (*local_60) [10];
  int *local_58;
  code *local_50;
  char (*local_48) [11];
  int *local_40;
  code *local_38;
  char (*local_30) [12];
  long64 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Name = *param_3->Name;
  local_78.WriteValue = FLogField::Write<FString>;
  local_60 = param_5->Name;
  local_58 = param_6;
  local_50 = FLogField::Write<int>;
  local_38 = FLogField::Write<int>;
  local_48 = param_7->Name;
  local_40 = param_8;
  local_30 = param_9->Name;
  local_28 = param_10;
  local_20 = FLogField::Write<__int64>;
  local_78.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&> @ 1504976f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&>
          (FLogCategoryBase *param_1,FStaticLocalizedLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[11]> *param_5,int *param_6,
          TLogFieldName<char_const_(&)[12]> *param_7,long64 *param_8)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  char (*local_50) [11];
  int *local_48;
  code *local_40;
  char (*local_38) [12];
  long64 *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.Name = *param_3->Name;
  local_68.WriteValue = FLogField::Write<FString>;
  local_50 = param_5->Name;
  local_48 = param_6;
  local_40 = FLogField::Write<int>;
  local_38 = param_7->Name;
  local_30 = param_8;
  local_28 = FLogField::Write<__int64>;
  local_68.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// operator() @ 150498060

bool __thiscall `UE::AssetRegistry::LexToString'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8470630944661831844>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8470630944661831844>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

