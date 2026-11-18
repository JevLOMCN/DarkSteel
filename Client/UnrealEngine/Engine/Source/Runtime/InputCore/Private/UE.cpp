// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 10

// Construct<FKey> @ 14238b850

void __cdecl UE::CoreUObject::Private::Construct<FKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FKey> @ 14238b870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FKey> @ 14238b890

void __cdecl UE::CoreUObject::Private::Destruct<FKey>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// PostSerialize<FKey> @ 14238b8a0

void __cdecl UE::CoreUObject::Private::PostSerialize<FKey>(FArchive *param_1,void *param_2)

{
  FKey::ResetKey(param_2);
  return;
}

// PostScriptConstruct<FKey> @ 14238b8b0

void __cdecl UE::CoreUObject::Private::PostScriptConstruct<FKey>(void *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_1 + 8) != &local_18) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x10),aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// Copy<FKey> @ 14238b900

bool __cdecl UE::CoreUObject::Private::Copy<FKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// ExportTextItem<FKey> @ 14238b980

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FKey>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  if (param_3 == (void *)0x0) {
    pFVar2 = ::FName::ToString(param_2,&local_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar2 = ::FName::ToString(param_2,&local_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return true;
    }
  }
  return true;
}

// ImportTextItem<FKey> @ 14238ba20

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FKey>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  wchar_t *pwVar1;
  ForAnyElementType FVar2;
  FName local_28;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  pwVar1 = FPropertyHelpers::ReadToken(*param_1,&local_20,false);
  if (pwVar1 == (wchar_t *)0x0) {
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    return false;
  }
  *param_1 = pwVar1;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_20.Data.ArrayNum != 0) {
    FVar2.Data = local_20.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_28,(wchar_t *)FVar2.Data);
  *(FName *)param_2 = local_28;
  FKey::ResetKey(param_2);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FKey> @ 14238bac0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FKey>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  FString *pFVar6;
  undefined4 extraout_var;
  FName FVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res8.ComparisonIndex.Value = (param_1->TypeName).Index;
  pFVar5 = ::FName::FName(&local_res10,L"EKeys");
  bVar2 = FPropertyTypeName::IsEnum((FPropertyTypeName *)&local_res8,*pFVar5);
  if (bVar2) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),param_3);
    ::FName::ToString(param_3,&local_28);
    iVar3 = ::FString::Find(&local_28,L"EKeys::",7,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      pFVar6 = ::FString::RightChop(&local_28,&local_18,iVar3 + 7);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,pwVar8);
      *(ulonglong *)param_3 = CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return false;
    }
  }
  else {
    FVar1 = param_1->Type;
    FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    if (FVar1 == FVar7) {
      (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
                (*(longlong **)(*(longlong *)param_2 + 8),param_3);
    }
  }
  return false;
}

// GetStructTypeHash<FKey> @ 14238bc30

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FKey>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

