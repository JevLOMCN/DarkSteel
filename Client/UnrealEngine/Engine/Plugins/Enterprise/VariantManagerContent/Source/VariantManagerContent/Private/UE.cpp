// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 18

// Construct<FVariantDependency> @ 14e2cf780

void __cdecl UE::CoreUObject::Private::Construct<FVariantDependency>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// ConstructForTests<FVariantDependency> @ 14e2cf7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVariantDependency>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Destruct<FVariantDependency> @ 14e2cf850

void __cdecl UE::CoreUObject::Private::Destruct<FVariantDependency>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FVariantDependency> @ 14e2cf890

bool __cdecl
UE::CoreUObject::Private::Copy<FVariantDependency>(void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TPersistentObjectPtr<FSoftObjectPath>::operator=(param_1,param_2);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x50);
    param_2 = &((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x50))->ObjectID;
    *(char *)&(((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x50))->WeakPtr).
              ObjectIndex = (char)(pTVar1->WeakPtr).ObjectIndex;
    param_1 = &((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x50))->ObjectID;
  }
  return true;
}

// Construct<FCapturedPropSegment> @ 14e2cfbe0

void __cdecl UE::CoreUObject::Private::Construct<FCapturedPropSegment>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FCapturedPropSegment> @ 14e2cfc10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCapturedPropSegment>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCapturedPropSegment> @ 14e2cfc30

void __cdecl UE::CoreUObject::Private::Destruct<FCapturedPropSegment>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCapturedPropSegment> @ 14e2cfc70

bool __cdecl
UE::CoreUObject::Private::Copy<FCapturedPropSegment>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x10) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    param_2 = (void *)((longlong)param_2 + 0x28);
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FFunctionCaller> @ 14e2d0da0

void __cdecl UE::CoreUObject::Private::Construct<FFunctionCaller>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FFunctionCaller> @ 14e2d0db0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFunctionCaller>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FFunctionCaller> @ 14e2d0dc0

void __cdecl UE::CoreUObject::Private::Destruct<FFunctionCaller>(void *param_1)

{
  return;
}

// PostSerialize<FFunctionCaller> @ 14e2d0dd0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FFunctionCaller>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FFunctionCaller> @ 14e2d0de0

bool __cdecl
UE::CoreUObject::Private::Copy<FFunctionCaller>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConvertRecordedValueSizes<float,double> @ 14e2d1700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::PropertyValue::Private::ConvertRecordedValueSizes<float,double>
          (ulong64 param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  iVar15 = param_2->ArrayNum;
  if ((((longlong)iVar15 & 3U) != 0) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7929381180359573469>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                         ,0x23,"ValueBytes.Num() % sizeof( OldType ) == 0"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = (uint)((ulonglong)(longlong)iVar15 >> 2);
  if ((param_1 != (longlong)(int)uVar13 * 8) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7929381180359573468>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                         ,0x24,"TargetStructSize == NumElements * sizeof( NewType )"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_18,(int)param_1,Default);
  pFVar14 = (param_2->AllocatorInstance).Data;
  if (0 < (int)uVar13) {
    FVar12.Data = local_18.AllocatorInstance.Data;
    iVar15 = 0;
    if ((7 < uVar13) &&
       ((pFVar14 + (longlong)(int)(uVar13 - 1) * 4 < local_18.AllocatorInstance.Data ||
        (iVar15 = 0, local_18.AllocatorInstance.Data + (longlong)(int)(uVar13 - 1) * 8 < pFVar14))))
    {
      uVar9 = uVar13 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      iVar15 = 0;
      do {
        uVar3 = *(undefined8 *)pFVar14;
        iVar15 = iVar15 + 8;
        uVar4 = *(undefined8 *)(pFVar14 + 0x18);
        dVar7 = (double)(float)((ulonglong)uVar4 >> 0x20);
        *(double *)FVar12.Data = (double)(float)uVar3;
        *(double *)(FVar12.Data + 8) = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(pFVar14 + 8);
        *(double *)(FVar12.Data + 0x10) = (double)(float)uVar3;
        *(double *)(FVar12.Data + 0x18) = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(pFVar14 + 0x10);
        pFVar14 = pFVar14 + 0x20;
        *(double *)(FVar12.Data + 0x20) = (double)(float)uVar3;
        *(double *)(FVar12.Data + 0x28) = (double)(float)((ulonglong)uVar3 >> 0x20);
        auVar6._8_4_ = SUB84(dVar7,0);
        auVar6._0_8_ = (double)(float)uVar4;
        auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])(FVar12.Data + 0x30) = auVar6;
        FVar12.Data = FVar12.Data + 0x40;
      } while (iVar15 < (int)(uVar13 - uVar9));
      if ((int)uVar13 <= iVar15) goto LAB_14e2d18bf;
    }
    if (3 < (int)(uVar13 - iVar15)) {
      uVar9 = ((uVar13 - iVar15) - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar9;
      iVar15 = iVar15 + uVar9 * 4;
      do {
        *(double *)FVar12.Data = (double)*(float *)pFVar14;
        *(double *)(FVar12.Data + 8) = (double)*(float *)(pFVar14 + 4);
        *(double *)(FVar12.Data + 0x10) = (double)*(float *)(pFVar14 + 8);
        pFVar1 = pFVar14 + 0xc;
        pFVar14 = pFVar14 + 0x10;
        *(double *)(FVar12.Data + 0x18) = (double)*(float *)pFVar1;
        FVar12.Data = FVar12.Data + 0x20;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      if ((int)uVar13 <= iVar15) goto LAB_14e2d18bf;
    }
    lVar10 = (longlong)(int)(uVar13 - iVar15);
    do {
      fVar2 = *(float *)pFVar14;
      pFVar14 = pFVar14 + 4;
      *(double *)FVar12.Data = (double)fVar2;
      lVar10 = lVar10 + -1;
      FVar12.Data = FVar12.Data + 8;
    } while (lVar10 != 0);
  }
LAB_14e2d18bf:
  if (param_2 != &local_18) {
    pFVar14 = (param_2->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (param_2->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
    param_2->ArrayNum = local_18.ArrayNum;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    param_2->ArrayMax = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ConvertRecordedValueSizes<double,float> @ 14e2d1930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::PropertyValue::Private::ConvertRecordedValueSizes<double,float>
          (ulong64 param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  iVar14 = param_2->ArrayNum;
  if ((((longlong)iVar14 & 7U) != 0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7929381180359573469>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                         ,0x23,"ValueBytes.Num() % sizeof( OldType ) == 0"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = (uint)((ulonglong)(longlong)iVar14 >> 3);
  if ((param_1 != (longlong)(int)uVar11 * 4) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7929381180359573468>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                         ,0x24,"TargetStructSize == NumElements * sizeof( NewType )"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_18,(int)param_1,Default);
  pFVar13 = (param_2->AllocatorInstance).Data;
  if (0 < (int)uVar11) {
    FVar10.Data = local_18.AllocatorInstance.Data;
    iVar14 = 0;
    if ((7 < uVar11) &&
       ((pFVar13 + (longlong)(int)(uVar11 - 1) * 8 < local_18.AllocatorInstance.Data ||
        (iVar14 = 0, local_18.AllocatorInstance.Data + (longlong)(int)(uVar11 - 1) * 4 < pFVar13))))
    {
      uVar7 = uVar11 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      pFVar12 = pFVar13;
      iVar14 = 0;
      do {
        iVar14 = iVar14 + 8;
        dVar1 = *(double *)(pFVar12 + 0x10);
        dVar3 = *(double *)(pFVar12 + 0x18);
        *(ulonglong *)FVar10.Data =
             CONCAT44((float)*(double *)(pFVar12 + 8),(float)*(double *)pFVar12);
        dVar4 = *(double *)(pFVar12 + 0x20);
        dVar5 = *(double *)(pFVar12 + 0x28);
        pFVar13 = pFVar12 + 0x40;
        *(ulonglong *)(FVar10.Data + 8) = CONCAT44((float)dVar3,(float)dVar1);
        dVar1 = *(double *)(pFVar12 + 0x30);
        dVar3 = *(double *)(pFVar12 + 0x38);
        *(ulonglong *)(FVar10.Data + 0x10) = CONCAT44((float)dVar5,(float)dVar4);
        *(ulonglong *)(FVar10.Data + 0x18) = CONCAT44((float)dVar3,(float)dVar1);
        FVar10.Data = FVar10.Data + 0x20;
        pFVar12 = pFVar13;
      } while (iVar14 < (int)(uVar11 - uVar7));
      if ((int)uVar11 <= iVar14) goto LAB_14e2d1b14;
    }
    if (3 < (int)(uVar11 - iVar14)) {
      uVar7 = ((uVar11 - iVar14) - 4 >> 2) + 1;
      uVar9 = (ulonglong)uVar7;
      iVar14 = iVar14 + uVar7 * 4;
      do {
        *(float *)FVar10.Data = (float)*(double *)pFVar13;
        *(float *)(FVar10.Data + 4) = (float)*(double *)(pFVar13 + 8);
        *(float *)(FVar10.Data + 8) = (float)*(double *)(pFVar13 + 0x10);
        pFVar12 = pFVar13 + 0x18;
        pFVar13 = pFVar13 + 0x20;
        *(float *)(FVar10.Data + 0xc) = (float)*(double *)pFVar12;
        FVar10.Data = FVar10.Data + 0x10;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if ((int)uVar11 <= iVar14) goto LAB_14e2d1b14;
    }
    lVar8 = (longlong)(int)(uVar11 - iVar14);
    do {
      dVar1 = *(double *)pFVar13;
      pFVar13 = pFVar13 + 8;
      *(float *)FVar10.Data = (float)dVar1;
      lVar8 = lVar8 + -1;
      FVar10.Data = FVar10.Data + 4;
    } while (lVar8 != 0);
  }
LAB_14e2d1b14:
  if (param_2 != &local_18) {
    pFVar13 = (param_2->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (param_2->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
    param_2->ArrayNum = local_18.ArrayNum;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    param_2->ArrayMax = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetTargetStructElementSize @ 14e2df3d0

ulong64 __cdecl UE::PropertyValue::Private::GetTargetStructElementSize(UScriptStruct *param_1)

{
  ulonglong uVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ulong64 uVar3;
  undefined1 local_res8 [32];
  
  if (param_1 == (UScriptStruct *)0x0) {
    return 0;
  }
  uVar1 = param_1->_padding_;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  if (uVar1 != *(uint *)CONCAT44(extraout_var,FVar2.Value)) {
    FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
    if (uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar2.Value)) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      if (uVar1 != *(uint *)CONCAT44(extraout_var_01,FVar2.Value)) {
        FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
        if (uVar1 != *(uint *)CONCAT44(extraout_var_02,FVar2.Value)) {
          FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
          uVar3 = 0;
          if (uVar1 == *(uint *)CONCAT44(extraout_var_03,FVar2.Value)) {
            uVar3 = 8;
          }
          return uVar3;
        }
      }
    }
  }
  return 8;
}

// ResetVariantSetDependents @ 14e2e2df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::LevelVariantSets::Private::ResetVariantSetDependents(UVariantSet *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UVariant *this;
  UVariant *this_00;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  ULevelVariantSets *pUVar8;
  ulonglong uVar9;
  UVariant *pUVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> local_58;
  
  if (param_1 != (UVariantSet *)0x0) {
    pUVar7 = ULevelVariantSets::StaticClass();
    pUVar8 = (ULevelVariantSets *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
    if (pUVar8 != (ULevelVariantSets *)0x0) {
      local_res20 = (param_1->Variants).ArrayNum;
      uVar9 = (ulonglong)(int)local_res20;
      pFVar13 = (param_1->Variants).AllocatorInstance.Data;
      pFVar1 = pFVar13 + uVar9 * 8;
      while( true ) {
        if ((param_1->Variants).ArrayNum != (int)uVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar13 == pFVar1) break;
        this = *(UVariant **)pFVar13;
        UVariant::GetDependents(this,&local_58,pUVar8,false);
        iVar5 = local_58.ArrayNum;
        pFVar2 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
        FVar14.Data = local_58.AllocatorInstance.Data;
        while( true ) {
          if (local_58.ArrayNum != iVar5) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UVariant_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar14.Data == pFVar2) break;
          this_00 = *(UVariant **)FVar14.Data;
          iVar11 = (this_00->Dependencies).ArrayNum + -1;
          if (-1 < iVar11) {
            lVar12 = (longlong)iVar11 * 0x58;
            do {
              if (((this_00->Dependencies).ArrayNum <= iVar11) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar10 = (UVariant *)
                        TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)
                                   ((this_00->Dependencies).AllocatorInstance.Data + lVar12 + 0x28))
              ;
              if (pUVar10 == (UVariant *)0x0) {
LAB_14e2e2f75:
                pUVar10 = (UVariant *)0x0;
              }
              else {
                pUVar7 = UVariant::StaticClass();
                iVar3 = (int)pUVar7->_padding_;
                if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar3) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar3 * 8)
                    != &pUVar7->_padding_)) goto LAB_14e2e2f75;
              }
              if (pUVar10 == this) {
                UVariant::DeleteDependency(this_00,iVar11);
              }
              lVar12 = lVar12 + -0x58;
              iVar11 = iVar11 + -1;
            } while (-1 < iVar11);
          }
          FVar14.Data = FVar14.Data + 8;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        pFVar13 = pFVar13 + 8;
        uVar9 = (ulonglong)local_res20;
      }
    }
  }
  return;
}

// UpdateRecordedDataSizesIfNeeded @ 14e2e7700

void __cdecl
UE::PropertyValue::Private::UpdateRecordedDataSizesIfNeeded
          (UScriptStruct *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ulong64 uVar5;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  FString local_30;
  
  if (param_1 != (UScriptStruct *)0x0) {
    if (param_1->bPrepareCppStructOpsCompleted == false) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_30,(UObject *)0x0);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = param_1->_padding_;
    uVar5 = (ulong64)param_1->CppStructOps->Size;
    FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
    if (((((uVar1 == *(uint *)CONCAT44(extraout_var,FVar4.Value)) ||
          (FVar4 = FNameEntryId::FromValidEName((EName)local_res18),
          uVar1 == *(uint *)CONCAT44(extraout_var_00,FVar4.Value))) ||
         (FVar4 = FNameEntryId::FromValidEName((EName)local_res20),
         uVar1 == *(uint *)CONCAT44(extraout_var_01,FVar4.Value))) ||
        ((FVar4 = FNameEntryId::FromValidEName((EName)local_38),
         uVar1 == *(uint *)CONCAT44(extraout_var_02,FVar4.Value) ||
         (FVar4 = FNameEntryId::FromValidEName((EName)local_34),
         uVar1 == *(uint *)CONCAT44(extraout_var_03,FVar4.Value))))) &&
       ((uVar5 != 0 && (uVar5 != (longlong)param_2->ArrayNum)))) {
      ConvertRecordedValueSizes<float,double>(uVar5,param_2);
    }
  }
  return;
}

