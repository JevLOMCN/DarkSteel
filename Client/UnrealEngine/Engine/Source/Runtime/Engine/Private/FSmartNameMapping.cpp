// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticStruct @ 14758bbc0

UScriptStruct * __cdecl FSmartNameMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSmartNameMapping.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSmartNameMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping,(UObject *)pUVar1,
                         L"SmartNameMapping");
  }
  return Z_Registration_Info_UScriptStruct_FSmartNameMapping.OuterSingleton;
}

// FSmartNameMapping @ 1475a5df0

FSmartNameMapping * __thiscall FSmartNameMapping::FSmartNameMapping(FSmartNameMapping *this)

{
  (this->CurveNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveNameList).ArrayNum = 0;
  (this->CurveNameList).ArrayMax = 0;
  (this->CurveMetaDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveMetaDataList).ArrayNum = 0;
  (this->CurveMetaDataList).ArrayMax = 0;
  *(undefined8 *)&this->CurveMetaDataMap = 0;
  *(undefined8 *)&(this->CurveMetaDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveMetaDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurveMetaDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveMetaDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveMetaDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurveMetaDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveMetaDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveMetaDataMap).field_0x48 = 0;
  return this;
}

// AddName @ 1475b1f60

FSmartName * __thiscall
FSmartNameMapping::AddName(FSmartNameMapping *this,FSmartName *__return_storage_ptr__,FName param_1)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSmartName *pFVar7;
  FName *pFVar8;
  int *piVar9;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  bVar5 = ::FName::IsWithinBounds(local_res18[0].ComparisonIndex);
  if (bVar5) {
    pFVar8 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (this->CurveNameList).ArrayNum;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 1) {
      if (*pFVar8 == local_res18[0]) goto LAB_1475b1fcc;
    }
  }
  else {
LAB_1475b1fcc:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Name.IsValid() && !CurveNameList.Contains(Name)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SmartName.cpp"
                       ,0x28,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSmartName *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar9 = &(this->CurveNameList).ArrayNum;
  if ((0xfffd < *piVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurveNameList.Num() < (SmartName::MaxUID-1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SmartName.cpp"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSmartName *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  if (((pFVar2 <= local_res18) && (local_res18 < pFVar2 + (this->CurveNameList).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSmartName *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = *piVar9;
  piVar1 = &(this->CurveNameList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
    *piVar9 = iVar6;
  }
  pFVar3 = (this->CurveNameList).AllocatorInstance.Data;
  *piVar9 = iVar6 + 1;
  __return_storage_ptr__->UID = (ushort)iVar6;
  *(FName *)(pFVar3 + (longlong)iVar6 * 8) = local_res18[0];
  __return_storage_ptr__->DisplayName = local_res18[0];
  TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
  ::Emplace<FName_const_&>
            ((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
              *)&this->CurveMetaDataMap,local_res18);
  iVar6 = (this->CurveMetaDataList).ArrayNum;
  piVar9 = &(this->CurveMetaDataList).ArrayMax;
  if (iVar6 == *piVar9) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->CurveMetaDataList).AllocatorInstance,piVar9);
  }
  (this->CurveMetaDataList).ArrayNum = iVar6 + 1;
  DefaultConstructItems<FCurveMetaData,int>
            ((this->CurveMetaDataList).AllocatorInstance.Data + (longlong)iVar6 * 0x18,1);
  ReleaseSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  return __return_storage_ptr__;
}

// Exists @ 1475c6380

bool __thiscall FSmartNameMapping::Exists(FSmartNameMapping *this,ushort *param_1)

{
  bool bVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  if (((int)(uint)*param_1 < (this->CurveNameList).ArrayNum) &&
     (*(longlong *)((this->CurveNameList).AllocatorInstance.Data + (ulonglong)*param_1 * 8) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return bVar1;
}

// Exists @ 1475c63e0

bool __thiscall FSmartNameMapping::Exists(FSmartNameMapping *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  bool bVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  pFVar2 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->CurveNameList).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == *param_1) {
        bVar3 = true;
        goto LAB_1475c6420;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  bVar3 = false;
LAB_1475c6420:
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return bVar3;
}

// Exists_NoLock @ 1475c6450

bool __thiscall FSmartNameMapping::Exists_NoLock(FSmartNameMapping *this,ushort *param_1)

{
  if (((int)(uint)*param_1 < (this->CurveNameList).ArrayNum) &&
     (*(longlong *)((this->CurveNameList).AllocatorInstance.Data + (ulonglong)*param_1 * 8) != 0)) {
    return true;
  }
  return false;
}

// Exists_NoLock @ 1475c6470

bool __thiscall FSmartNameMapping::Exists_NoLock(FSmartNameMapping *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->CurveNameList).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == *param_1) {
        return true;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// FillCurveTypeArray @ 1475c79e0

void __thiscall
FSmartNameMapping::FillCurveTypeArray
          (FSmartNameMapping *this,TArray<FAnimCurveType,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FAnimCurveType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCurveMetaData *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FAnimCurveType local_28 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  uVar3 = (this->CurveNameList).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,uVar3,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  iVar4 = (this->CurveNameList).ArrayNum;
  pFVar2 = pFVar10 + iVar4;
  while( true ) {
    if ((this->CurveNameList).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    pFVar9 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
             ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                     *)&this->CurveMetaDataMap,*pFVar10);
    local_28[0].bMaterial = false;
    local_28[0].bMorphtarget = false;
    if (pFVar9 != (FCurveMetaData *)0x0) {
      local_28[0] = pFVar9->Type;
    }
    pFVar5 = (FAnimCurveType *)(param_1->AllocatorInstance).Data;
    if ((pFVar5 <= local_28) && (local_28 < pFVar5 + *piVar1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x102,&param_1->AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 1;
    param_1->ArrayNum = iVar8 + 1;
    *(FAnimCurveType *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_28[0];
  }
                    /* WARNING: Could not recover jumptable at 0x0001475c7b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return;
}

// FillNameArray @ 1475c8200

void __thiscall
FSmartNameMapping::FillNameArray
          (FSmartNameMapping *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->CurveNameList);
                    /* WARNING: Could not recover jumptable at 0x0001475c8239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return;
}

// FillUIDToCurveTypeArray @ 1475c8520

void __thiscall
FSmartNameMapping::FillUIDToCurveTypeArray
          (FSmartNameMapping *this,TArray<FAnimCurveType,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FAnimCurveType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCurveMetaData *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FAnimCurveType local_28 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  uVar3 = (this->CurveNameList).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,uVar3,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  iVar4 = (this->CurveNameList).ArrayNum;
  pFVar2 = pFVar10 + iVar4;
  while( true ) {
    if ((this->CurveNameList).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    pFVar9 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
             ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                     *)&this->CurveMetaDataMap,*pFVar10);
    local_28[0].bMaterial = false;
    local_28[0].bMorphtarget = false;
    if (pFVar9 != (FCurveMetaData *)0x0) {
      local_28[0] = pFVar9->Type;
    }
    pFVar5 = (FAnimCurveType *)(param_1->AllocatorInstance).Data;
    if ((pFVar5 <= local_28) && (local_28 < pFVar5 + *piVar1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x102,&param_1->AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 1;
    param_1->ArrayNum = iVar8 + 1;
    *(FAnimCurveType *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_28[0];
  }
                    /* WARNING: Could not recover jumptable at 0x0001475c86aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return;
}

// FillUIDToNameArray @ 1475c86c0

void __thiscall
FSmartNameMapping::FillUIDToNameArray
          (FSmartNameMapping *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->CurveNameList);
  return;
}

// FillUidArray @ 1475c86e0

void __thiscall
FSmartNameMapping::FillUidArray
          (FSmartNameMapping *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined2 local_18 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  uVar2 = (this->CurveNameList).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  iVar7 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar2,&param_1->AllocatorInstance,0,piVar1);
  }
  if (0 < (this->CurveNameList).ArrayNum) {
    do {
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_18[0] = (undefined2)iVar7;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_1->AllocatorInstance,piVar1);
      }
      iVar7 = iVar7 + 1;
      param_1->ArrayNum = iVar6 + 1;
      *(undefined2 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 2) = local_18[0];
    } while (iVar7 < (this->CurveNameList).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x0001475c8815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return;
}

// FindSmartName @ 1475cb150

bool __thiscall
FSmartNameMapping::FindSmartName(FSmartNameMapping *this,FName param_1,FSmartName *param_2)

{
  FName *pFVar1;
  short sVar2;
  FName *pFVar3;
  bool bVar4;
  undefined4 local_10;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  pFVar1 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (this->CurveNameList).ArrayNum) {
LAB_1475cb196:
      bVar4 = false;
LAB_1475cb198:
      ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
      return bVar4;
    }
    if (*pFVar3 == param_1) {
      sVar2 = (short)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      if (sVar2 != -1) {
        bVar4 = true;
        local_10 = CONCAT22(local_10._2_2_,sVar2);
        param_2->DisplayName = param_1;
        *(undefined4 *)&param_2->UID = local_10;
        goto LAB_1475cb198;
      }
      goto LAB_1475cb196;
    }
    pFVar3 = pFVar3 + 1;
  } while( true );
}

// FindSmartNameByUID @ 1475cb1f0

bool __thiscall
FSmartNameMapping::FindSmartNameByUID(FSmartNameMapping *this,ushort param_1,FSmartName *param_2)

{
  FName FVar1;
  bool bVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  if (((int)(uint)param_1 < (this->CurveNameList).ArrayNum) &&
     (FVar1 = *(FName *)((this->CurveNameList).AllocatorInstance.Data + (ulonglong)param_1 * 8),
     FVar1 != (FName)0x0)) {
    param_2->DisplayName = FVar1;
    param_2->UID = param_1;
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return bVar2;
}

// FindUID @ 1475cb410

ushort __thiscall FSmartNameMapping::FindUID(FSmartNameMapping *this,FName *param_1)

{
  FName *pFVar1;
  ushort uVar2;
  FName *pFVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  pFVar1 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (this->CurveNameList).ArrayNum) {
    pFVar3 = pFVar1;
    do {
      if (*pFVar3 == *param_1) {
        uVar2 = (ushort)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
        goto LAB_1475cb45b;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1 + (this->CurveNameList).ArrayNum);
  }
  uVar2 = 0xffff;
LAB_1475cb45b:
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return uVar2;
}

// FindUID_NoLock @ 1475cb490

ushort __thiscall FSmartNameMapping::FindUID_NoLock(FSmartNameMapping *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->CurveNameList).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (this->CurveNameList).ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if (*pFVar2 == *param_1) {
        return (ushort)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + (this->CurveNameList).ArrayNum);
  }
  return 0xffff;
}

// GetCurveMetaData @ 1475d3a20

FCurveMetaData * __thiscall
FSmartNameMapping::GetCurveMetaData(FSmartNameMapping *this,FName param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  FCurveMetaData *pFVar4;
  undefined1 *puVar5;
  int iVar6;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  FVar2 = local_res10[0];
  uVar3 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->CurveMetaDataMap).field_0x8 != *(int *)&(this->CurveMetaDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CurveMetaDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CurveMetaDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CurveMetaDataMap).field_0x48 - 1U & uVar3)
                              * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->CurveMetaDataMap + (longlong)iVar6 * 0x28;
        if (*(FName *)(*(longlong *)&this->CurveMetaDataMap + (longlong)iVar6 * 0x28) ==
            local_res10[0]) {
          if (lVar1 != 0) {
            pFVar4 = (FCurveMetaData *)(lVar1 + 8);
            goto LAB_1475d3abf;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  pFVar4 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                       *)&this->CurveMetaDataMap,uVar3,local_res10);
LAB_1475d3abf:
  ReleaseSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  return pFVar4;
}

// GetCurveMetaData @ 1475d3af0

FCurveMetaData * __thiscall
FSmartNameMapping::GetCurveMetaData(FSmartNameMapping *this,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCurveMetaData *pFVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  if ((this->CurveMetaDataList).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCurveMetaData *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->CurveMetaDataList).AllocatorInstance.Data;
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return (FCurveMetaData *)(pFVar1 + (ulonglong)param_1 * 0x18);
}

// GetCurveMetaData @ 1475d3b70

FCurveMetaData * __thiscall
FSmartNameMapping::GetCurveMetaData(FSmartNameMapping *this,FName param_1)

{
  FCurveMetaData *pFVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  pFVar1 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                   *)&this->CurveMetaDataMap,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return pFVar1;
}

// GetCurveMetaData_NoLock @ 1475d3c80

FCurveMetaData * __thiscall
FSmartNameMapping::GetCurveMetaData_NoLock(FSmartNameMapping *this,FName param_1)

{
  FCurveMetaData *pFVar1;
  
  pFVar1 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                   *)&this->CurveMetaDataMap,param_1);
  return pFVar1;
}

// GetName @ 1475d5c80

bool __thiscall FSmartNameMapping::GetName(FSmartNameMapping *this,ushort *param_1,FName *param_2)

{
  FName FVar1;
  bool bVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  if ((int)(uint)*param_1 < (this->CurveNameList).ArrayNum) {
    FVar1 = *(FName *)((this->CurveNameList).AllocatorInstance.Data + (ulonglong)*param_1 * 8);
    bVar2 = FVar1 != (FName)0x0;
    *param_2 = FVar1;
  }
  else {
    bVar2 = false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  return bVar2;
}

// GetName_NoLock @ 1475d5e00

bool __thiscall
FSmartNameMapping::GetName_NoLock(FSmartNameMapping *this,ushort *param_1,FName *param_2)

{
  FName FVar1;
  
  if ((int)(uint)*param_1 < (this->CurveNameList).ArrayNum) {
    FVar1 = *(FName *)((this->CurveNameList).AllocatorInstance.Data + (ulonglong)*param_1 * 8);
    *param_2 = FVar1;
    return FVar1 != (FName)0x0;
  }
  return false;
}

// InitializeCurveMetaData @ 1475e0be0

void __thiscall
FSmartNameMapping::InitializeCurveMetaData(FSmartNameMapping *this,USkeleton *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  iVar8 = *(int *)&(this->CurveMetaDataMap).field_0x28;
  puVar1 = &(this->CurveMetaDataMap).field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(this->CurveMetaDataMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475e0c8e;
      uVar10 = puVar14[lVar7 + 1];
    }
    uVar5 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = iVar13 + -1 + (int)lVar7;
    if (iVar8 < iVar6) {
      iVar6 = iVar8;
    }
  }
LAB_1475e0c8e:
  uVar10 = *(uint *)&(this->CurveMetaDataMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CurveMetaDataMap).field_0x8 -
                       *(int *)&(this->CurveMetaDataMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->CurveMetaDataMap).field_0x28;
  if (uVar10 != uVar5) {
    puVar12 = *(undefined1 **)&(this->CurveMetaDataMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475e0d90;
      uVar10 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_1475e0d90:
  do {
    if (*(int *)&(this->CurveMetaDataMap).field_0x8 - *(int *)&(this->CurveMetaDataMap).field_0x34
        != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0001475e0e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
      return;
    }
    iVar8 = *(int *)(*(longlong *)&this->CurveMetaDataMap + 0x10 +
                    (longlong)TStack_60.CurrentBitIndex * 0x28);
    lVar7 = *(longlong *)&this->CurveMetaDataMap + (longlong)TStack_60.CurrentBitIndex * 0x28;
    uVar5 = 0;
    if (0 < iVar8) {
      do {
        uVar9 = 0;
        if ((int)uVar5 < iVar8) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FBoneReference::Initialize
                  ((FBoneReference *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar7 + 8)),
                   param_1);
        iVar8 = *(int *)(lVar7 + 0x10);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// Iterate @ 1475e2f70

void __thiscall
FSmartNameMapping::Iterate
          (FSmartNameMapping *this,
          TFunction<void___cdecl(FSmartNameMappingIterator_const_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  FSmartNameMapping *local_28;
  undefined2 local_20;
  
  AcquireSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  iVar4 = 0;
  if (0 < (this->CurveNameList).ArrayNum) {
    do {
      local_20 = (undefined2)iVar4;
      local_28 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar3 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar3 = (longlong *)&param_1->field_0x10;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->CurveNameList).ArrayNum);
  }
  ReleaseSRWLockShared((PSRWLOCK)&SmartNameRWLock);
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// Serialize @ 1475f9cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSmartNameMapping::Serialize(FSmartNameMapping *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_b8 [32];
  ushort local_88 [8];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar2 < 7) {
    if (*(int *)&param_1->field_0x40 < 0x184) goto LAB_1475f9e9d;
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_88);
      }
    }
    else {
      local_88[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_48 = 0xffffffff;
    TSetPrivateFriend::
    Serialize<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
                        *)local_78);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      uVar3 = 0x14;
      goto LAB_1475f9e3b;
    }
  }
  else {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
    if (9 < iVar2) goto LAB_1475f9e9d;
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_48 = 0xffffffff;
    TSetPrivateFriend::
    Serialize<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
                        *)local_78);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      uVar3 = 0x20;
LAB_1475f9e3b:
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (uVar3,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
  }
  local_50 = 0;
  local_44 = 0;
  local_48 = 0xffffffff;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
LAB_1475f9e9d:
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (0xe < iVar2) {
    TSetPrivateFriend::
    Serialize<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
                        *)&this->CurveMetaDataMap);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                *)&this->CurveMetaDataMap,&this->CurveNameList);
    TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                *)&this->CurveMetaDataMap,&this->CurveMetaDataList);
  }
  return;
}

