// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StaticStruct @ 146065f40

UScriptStruct * __cdecl FMovieSceneObjectPathChannelKeyValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue,
                         (UObject *)pUVar1,L"MovieSceneObjectPathChannelKeyValue");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.OuterSingleton;
}

// FMovieSceneObjectPathChannelKeyValue @ 146093e30

FMovieSceneObjectPathChannelKeyValue * __thiscall
FMovieSceneObjectPathChannelKeyValue::FMovieSceneObjectPathChannelKeyValue
          (FMovieSceneObjectPathChannelKeyValue *this,UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *this_00;
  UObject *pUVar3;
  UObject *local_res8;
  
  this_00 = &(this->SoftPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftPtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = (UObject *)0x0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->HardPtr).field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar3 = (UObject *)0x0;
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    if ((pUVar2 == (UObject *)0x0) &&
       (pUVar3 = param_1, UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  (this->HardPtr).field0_0x0.DebugPtr = pUVar3;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  return this;
}

// operator= @ 14609a6a0

FMovieSceneObjectPathChannelKeyValue * __thiscall
FMovieSceneObjectPathChannelKeyValue::operator=
          (FMovieSceneObjectPathChannelKeyValue *this,UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    if (pUVar2 == (UObject *)0x0) {
      pUVar2 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      goto LAB_14609a6e1;
    }
  }
  pUVar2 = (UObject *)0x0;
LAB_14609a6e1:
  (this->HardPtr).field0_0x0.DebugPtr = pUVar2;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  return this;
}

// Get @ 1460c90e0

UObject * __thiscall
FMovieSceneObjectPathChannelKeyValue::Get(FMovieSceneObjectPathChannelKeyValue *this)

{
  UObject *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  
  this_00 = (this->HardPtr).field0_0x0.DebugPtr;
  if ((this_00 == (UObject *)0x0) && (*(longlong *)&(this->SoftPtr).SoftObjectPtr.field_0x8 != 0)) {
    this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)this);
    if (this_00 == (UObject *)0x0) {
      this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)this);
      if ((this_00 == (UObject *)0x0) &&
         (*(longlong *)&(this->SoftPtr).SoftObjectPtr.field_0x8 != 0)) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(this->SoftPtr).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)this);
      }
      if (this_00 == (UObject *)0x0) {
        return (UObject *)0x0;
      }
    }
    pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
    if (pUVar2 == (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
      (this->HardPtr).field0_0x0.DebugPtr = this_00;
    }
  }
  return this_00;
}

// SerializeFromMismatchedTag @ 1460f5d00

bool __thiscall
FMovieSceneObjectPathChannelKeyValue::SerializeFromMismatchedTag
          (FMovieSceneObjectPathChannelKeyValue *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  FSoftObjectPath *pFVar6;
  FString *pFVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  TObjectPtr<UObject>_u_0 TVar9;
  FUObjectItem *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TObjectPtr<UObject>_u_0 local_res10;
  FSoftObjectPath local_78;
  FString local_58;
  FWeakObjectPtr local_48;
  FSoftObjectPath local_40;
  
  FVar1 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar1 != FVar5) {
    return false;
  }
  local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.SubPathString.Data.ArrayNum = 0;
  local_40.SubPathString.Data.ArrayMax = 0;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_40.AssetPath.AssetName.Number = 0;
  local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_40.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_40.SubPathString,0);
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x148))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_48);
  pFVar6 = FSoftObjectPath::FSoftObjectPath(&local_78,&local_40);
  *(undefined8 *)&(this->SoftPtr).SoftObjectPtr = 0;
  FSoftObjectPath::operator=((FSoftObjectPath *)&(this->SoftPtr).SoftObjectPtr.field_0x8,pFVar6);
  pFVar2 = (pFVar6->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  iVar15 = local_40.SubPathString.Data.ArrayNum + -1;
  if (local_40.SubPathString.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  pFVar7 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_78,
                      (uchar *)local_40.SubPathString.Data.AllocatorInstance.Data,iVar15);
  iVar14 = 0;
  TVar8.DebugPtr = (UObject *)0x0;
  iVar15 = iVar14;
  if (&local_58 != pFVar7) {
    TVar8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar15 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_78.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_78.AssetPath.PackageName);
  }
  iVar13 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar13 = 0;
  }
  if (TVar8.DebugPtr != (UObject *)0x0) {
    FMemory::Free(TVar8.DebugPtr);
  }
  if (iVar13 != 0) goto LAB_1460f5fc3;
  TVar8.DebugPtr = FWeakObjectPtr::Get(&local_48);
  if (TVar8.DebugPtr == (UObject *)0x0) {
    if (local_40.AssetPath.PackageName != (FName)0x0) {
      TVar9.DebugPtr = FSoftObjectPath::ResolveObject(&local_40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar9.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar9.DebugPtr);
      }
      bVar3 = (*IsInAsyncLoadingThread)();
      if (((bVar3) && (TVar9.DebugPtr != (UObject *)0x0)) &&
         (pFVar10 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)&(TVar9.DebugPtr)->field_0xc),
         ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1460f5ead:
        iVar15 = 1;
        if ((*(uint *)&(TVar9.DebugPtr)->field_0x8 >> 0x1e & 1) != 0) goto LAB_1460f5eb8;
      }
      else {
        local_res10.DebugPtr = TVar9.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar9.DebugPtr);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res10);
        if (TVar9.DebugPtr != (UObject *)0x0) goto LAB_1460f5ead;
LAB_1460f5eb8:
        iVar15 = iVar14;
      }
      TVar8.DebugPtr = (UObject *)0x0;
      if (iVar15 != 0) {
        TVar8.DebugPtr = TVar9.DebugPtr;
      }
    }
    if (TVar8.DebugPtr == (UObject *)0x0) {
      if (local_40.AssetPath.PackageName == (FName)0x0) goto LAB_1460f5fc3;
      FSoftObjectPath::TryLoad(&local_40,(FUObjectSerializeContext *)0x0);
      TVar8.DebugPtr = FWeakObjectPtr::Get(&local_48);
      if ((TVar8.DebugPtr == (UObject *)0x0) && (local_40.AssetPath.PackageName != (FName)0x0)) {
        TVar9.DebugPtr = FSoftObjectPath::ResolveObject(&local_40);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar9.DebugPtr);
        }
        bVar3 = (*IsInAsyncLoadingThread)();
        if (((bVar3) && (TVar9.DebugPtr != (UObject *)0x0)) &&
           (pFVar10 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)&(TVar9.DebugPtr)->field_0xc),
           ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1460f5f7f:
          iVar15 = 1;
          if ((*(uint *)&(TVar9.DebugPtr)->field_0x8 >> 0x1e & 1) != 0) goto LAB_1460f5f88;
        }
        else {
          local_res10.DebugPtr = TVar9.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar9.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(TVar9.DebugPtr);
          }
          FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res10);
          if (TVar9.DebugPtr != (UObject *)0x0) goto LAB_1460f5f7f;
LAB_1460f5f88:
          iVar15 = iVar14;
        }
        TVar8.DebugPtr = (UObject *)0x0;
        if (iVar15 != 0) {
          TVar8.DebugPtr = TVar9.DebugPtr;
        }
      }
      if (TVar8.DebugPtr == (UObject *)0x0) goto LAB_1460f5fc3;
    }
  }
  pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar12 = UObjectBaseUtility::GetTypedOuter(TVar8.DebugPtr,pUVar11);
  if (pUVar12 == (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(TVar8.DebugPtr);
    }
    (this->HardPtr).field0_0x0.DebugPtr = (UObject *)TVar8;
  }
LAB_1460f5fc3:
  if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
  }
  return true;
}

