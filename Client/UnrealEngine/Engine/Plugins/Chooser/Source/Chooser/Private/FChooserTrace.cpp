// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// OutputChooserValue<unsigned_char> @ 14a87bd80

void __cdecl
FChooserTrace::OutputChooserValue<unsigned_char>
          (FChooserEvaluationContext *param_1,wchar_t *param_2,uchar *param_3)

{
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  longlong lStack_b0;
  longlong local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  longlong lStack_90;
  longlong local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  longlong local_58;
  FArchiveState *pFStack_50;
  longlong local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  FName local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_30;
  
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  lStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  lStack_90 = 0;
  local_88 = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_48 = 0;
  local_d8 = (undefined1  [8])&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_30;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  local_d8 = (undefined1  [8])&___7FBufferArchive__6B_;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if (pFStack_d0->EndFastPathLoadBuffer < pFStack_d0->StartFastPathLoadBuffer + 1) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
              ((TMemoryWriterBase<TSizedDefaultAllocator<32>_> *)local_d8,param_3,1);
  }
  else {
    *param_3 = *pFStack_d0->StartFastPathLoadBuffer;
    pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 1;
  }
  OutputChooserValueArchive(param_1,param_2,(FBufferArchive *)local_d8);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  return;
}

// OutputChooserValue<double> @ 14a87bea0

void __cdecl
FChooserTrace::OutputChooserValue<double>
          (FChooserEvaluationContext *param_1,wchar_t *param_2,double *param_3)

{
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  longlong lStack_90;
  longlong local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  longlong local_58;
  FArchiveState *pFStack_50;
  longlong local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  FName local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_30;
  
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  lStack_90 = 0;
  local_88 = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_48 = 0;
  local_d8 = (undefined1  [8])&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_30;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  local_d8 = (undefined1  [8])&___7FBufferArchive__6B_;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if (pFStack_d0->EndFastPathLoadBuffer <
      (double *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 8)) {
    if ((uStack_b0 & 0x10000) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
                ((TMemoryWriterBase<TSizedDefaultAllocator<32>_> *)local_d8,param_3,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,(ulong64 *)param_3);
    }
  }
  else {
    *param_3 = *(double *)pFStack_d0->StartFastPathLoadBuffer;
    pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 8;
  }
  OutputChooserValueArchive(param_1,param_2,(FBufferArchive *)local_d8);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  return;
}

// OutputChooserValue<FString> @ 14a87bfd0

void __cdecl
FChooserTrace::OutputChooserValue<FString>
          (FChooserEvaluationContext *param_1,wchar_t *param_2,FString *param_3)

{
  undefined1 local_d8 [16];
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void **local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  
  local_d8._0_8_ = 0;
  local_d8._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_48 = 0;
  local_d8._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_30;
  local_38 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_d8,true);
  (**(code **)(local_d8._0_8_ + 0x108))(local_d8,0);
  local_30 = (void *)0x0;
  local_d8._0_8_ = &___7FBufferArchive__6B_;
  local_28 = 0;
  ::operator<<((FArchive *)local_d8,param_3);
  OutputChooserValueArchive(param_1,param_2,(FBufferArchive *)local_d8);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  return;
}

// OutputChooserEvaluation @ 14a88c810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FChooserTrace::OutputChooserEvaluation
          (UObject *param_1,FChooserEvaluationContext *param_2,uint param_3)

{
  double *pdVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UWorld *pUVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  double local_38;
  double *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (((-1 < ChooserChannel->Enabled) && (param_1 != (UObject *)0x0)) &&
     (pUVar3 = ::`anonymous_namespace'::GetContextObject(param_2), pUVar3 != (UObject *)0x0)) {
    pUVar4 = (UObject *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    bVar2 = FTraceFilter::IsObjectTraceable<1>(pUVar4);
    if (bVar2) {
      FObjectTrace::OutputObject(param_1);
      FObjectTrace::OutputObject(pUVar3);
      if (-1 < ChooserChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FChooserChooserEvaluationFields>
                  ((TLogScope<0> *)&local_30);
        pUVar5 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
        local_38 = FObjectTrace::GetWorldElapsedTime(pUVar5);
        pdVar1 = local_30;
        *local_30 = local_38;
        dVar6 = (double)FObjectTrace::GetObjectId(param_1);
        pdVar1[1] = dVar6;
        dVar6 = (double)FObjectTrace::GetObjectId(pUVar3);
        local_30[2] = dVar6;
        *(uint *)(local_30 + 3) = param_3;
        *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
      }
    }
  }
  return;
}

// OutputChooserValueArchive @ 14a88c940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FChooserTrace::OutputChooserValueArchive
          (FChooserEvaluationContext *param_1,wchar_t *param_2,FBufferArchive *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  double *pdVar4;
  bool bVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UWorld *pUVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  double local_48;
  double *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (((-1 < ChooserChannel->Enabled) && ((param_1->DebuggingInfo).CurrentChooser != (UObject *)0x0)
      ) && (pUVar6 = ::`anonymous_namespace'::GetContextObject(param_1), pUVar6 != (UObject *)0x0))
  {
    pUVar7 = (UObject *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
    bVar5 = FTraceFilter::IsObjectTraceable<1>(pUVar7);
    if (bVar5) {
      FObjectTrace::OutputObject((param_1->DebuggingInfo).CurrentChooser);
      FObjectTrace::OutputObject(pUVar6);
      if (-1 < ChooserChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FChooserChooserValueFields>((TLogScope<1> *)&local_40);
        pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
        local_48 = FObjectTrace::GetWorldElapsedTime(pUVar8);
        pdVar4 = local_40;
        *local_40 = local_48;
        dVar9 = (double)FObjectTrace::GetObjectId((param_1->DebuggingInfo).CurrentChooser);
        pdVar4[1] = dVar9;
        dVar9 = (double)FObjectTrace::GetObjectId(pUVar6);
        iVar11 = 0;
        local_40[2] = dVar9;
        wVar2 = *param_2;
        pwVar1 = param_2;
        while (wVar2 != L'\0') {
          pwVar1 = pwVar1 + 1;
          iVar11 = iVar11 + 1;
          wVar2 = *pwVar1;
        }
        UE::Trace::Private::Field_WriteStringWide(4,param_2,iVar11);
        UE::Trace::Private::Field_WriteAuxData
                  (3,*(uchar **)&param_3->field_0xa8,*(uint *)&param_3->field_0xb0 & 0x7ffff);
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar3 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar3 + 0x20);
        **(undefined1 **)(lVar3 + 0x20) = 6;
        lVar10 = *(longlong *)(lVar3 + 0x20) + 1;
        *(longlong *)(lVar3 + 0x20) = lVar10;
        if (lVar3 != local_38) {
          *(longlong *)(lVar3 + 0x28) = lVar10;
        }
        *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
      }
    }
  }
  return;
}

