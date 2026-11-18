// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 24

// StaticClass @ 14e29edf0

UClass * __cdecl USignificanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USignificanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SignificanceManager",L"SignificanceManager",
               &Z_Registration_Info_UClass_USignificanceManager.InnerSingleton,
               StaticRegisterNativesUSignificanceManager,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USignificanceManager>,
               InternalVTableHelperCtorCaller<USignificanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USignificanceManager.InnerSingleton;
}

// USignificanceManager @ 14e2a1210

USignificanceManager * __thiscall
USignificanceManager::USignificanceManager(USignificanceManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USignificanceManager__6B_;
  (this->Viewpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewpoints).ArrayNum = 0;
  (this->Viewpoints).ArrayMax = 0;
  *(undefined8 *)&this->ManagedObjectsByTag = 0;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x34 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x48 = 0;
  *(undefined8 *)&this->ManagedObjects = 0;
  *(undefined8 *)&(this->ManagedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedObjects).field_0x34 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagedObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x48 = 0;
  (this->ObjArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjArray).ArrayNum = 0;
  (this->ObjArray).ArrayMax = 0;
  (this->ObjArrayCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjArrayCopy).ArrayNum = 0;
  (this->ObjArrayCopy).ArrayMax = 0;
  (this->ObjWithSequentialPostWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjWithSequentialPostWork).ArrayNum = 0;
  (this->ObjWithSequentialPostWork).ArrayMax = 0;
  (this->ObjWithSequentialPostWorkCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjWithSequentialPostWorkCopy).ArrayNum = 0;
  (this->ObjWithSequentialPostWorkCopy).ArrayMax = 0;
  *(undefined8 *)&this->SignificanceManagerClassName = 0;
  *(undefined8 *)&(this->SignificanceManagerClassName).field_0x8 = 0;
  *(undefined8 *)&(this->SignificanceManagerClassName).field_0x10 = 0;
  *(undefined8 *)&(this->SignificanceManagerClassName).field_0x18 = 0;
  return this;
}

// USignificanceManager @ 14e2a1310

USignificanceManager * __thiscall
USignificanceManager::USignificanceManager(USignificanceManager *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  FSoftObjectPath local_28;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7USignificanceManager__6B_;
  puVar1 = &(this->SignificanceManagerClassName).field_0x10;
  (this->Viewpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewpoints).ArrayNum = 0;
  (this->Viewpoints).ArrayMax = 0;
  *(undefined8 *)&this->ManagedObjectsByTag = 0;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x34 = 0;
  *(undefined8 *)&(this->ManagedObjectsByTag).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x48 = 0;
  *(undefined8 *)&this->ManagedObjects = 0;
  *(undefined8 *)&(this->ManagedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagedObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ManagedObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedObjects).field_0x48 = 0;
  pUVar3 = (UObject *)this->_padding_;
  (this->ObjArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjArray).ArrayNum = 0;
  (this->ObjArray).ArrayMax = 0;
  (this->ObjArrayCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjArrayCopy).ArrayNum = 0;
  (this->ObjArrayCopy).ArrayMax = 0;
  (this->ObjWithSequentialPostWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjWithSequentialPostWork).ArrayNum = 0;
  (this->ObjWithSequentialPostWork).ArrayMax = 0;
  (this->ObjWithSequentialPostWorkCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjWithSequentialPostWorkCopy).ArrayNum = 0;
  (this->ObjWithSequentialPostWorkCopy).ArrayMax = 0;
  *(undefined8 *)&this->SignificanceManagerClassName = 0;
  *(undefined8 *)&(this->SignificanceManagerClassName).field_0x8 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SignificanceManagerClassName).field_0x18 = 0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar3);
  *(uint *)&(this->SignificanceManagerClassName).field_0x0 =
       local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->SignificanceManagerClassName).field_0x4 = local_28.AssetPath.PackageName.Number;
  *(uint *)&(this->SignificanceManagerClassName).field_0x8 =
       local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->SignificanceManagerClassName).field_0xc = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->SignificanceManagerClassName).field_0x18 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&(this->SignificanceManagerClassName).field_0x1c = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  puVar2 = &this->field_0x28;
  this->bCreateOnClient = 1;
  this->bSortSignificanceAscending = 0;
  this->bCreateOnServer = 1;
  return this;
}

// ~USignificanceManager @ 14e2a1690

void __thiscall USignificanceManager::~USignificanceManager(USignificanceManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USignificanceManager__6B_;
  pvVar1 = *(void **)&(this->SignificanceManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ObjWithSequentialPostWorkCopy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjArrayCopy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ManagedObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedObjects);
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedObjectsByTag).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedObjectsByTag);
  pFVar2 = (this->Viewpoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e2a1770

void __thiscall `USignificanceManager::Update'::__l3::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0xf8)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  USignificanceManager::FManagedObjectInfo::UpdateSignificance
            (*(FManagedObjectInfo **)(*(longlong *)(lVar1 + 0xf0) + (longlong)param_1 * 8),
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x30),(bool)((byte)(*(uint *)(*(longlong *)this + 0x28) >> 2) & 1)
            );
  return;
}

// AddReferencedObjects @ 14e2a1a70

void __cdecl
USignificanceManager::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<USignificanceManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    (**(code **)(param_2->_padding_ + 0x50))(param_2,0);
    FReferenceCollector::
    AddReferencedObjects<UObject,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
              (param_2,(TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
                        *)&param_1[3].field_0x18,param_1,(FProperty *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014e2a1adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x50))(param_2,1);
    return;
  }
  pFVar3 = GetTypeName<USignificanceManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginDestroy @ 14e2a1b60

void __thiscall USignificanceManager::BeginDestroy(USignificanceManager *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  UObject::BeginDestroy((UObject *)this);
  iVar12 = 0;
  iVar3 = *(int *)&(this->ManagedObjects).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ManagedObjects).field_0x10;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ManagedObjects).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e2a1c0e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e2a1c0e:
  uVar11 = *(uint *)&(this->ManagedObjects).field_0x28;
  puVar2 = &(this->ManagedObjects).field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ManagedObjects).field_0x8 -
                       *(int *)&(this->ManagedObjects).field_0x34);
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ManagedObjects).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ManagedObjects).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e2a1d10;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14e2a1d10:
  while( true ) {
    if (*(int *)&(this->ManagedObjects).field_0x8 - *(int *)&(this->ManagedObjects).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&(this->ManagedObjects).field_0x0 + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           *)&this->ManagedObjects);
  TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->ManagedObjectsByTag);
  (this->ObjArray).ArrayNum = 0;
  if ((this->ObjArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ObjArray).AllocatorInstance,0,&(this->ObjArray).ArrayMax);
  }
  (this->ObjWithSequentialPostWork).ArrayNum = 0;
  if ((this->ObjWithSequentialPostWork).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ObjWithSequentialPostWork).AllocatorInstance,0,
               &(this->ObjWithSequentialPostWork).ArrayMax);
  }
  return;
}

// Get @ 14e2a2350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USignificanceManager * __cdecl USignificanceManager::Get(UWorld *param_1)

{
  USignificanceManager *pUVar1;
  TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
                   *)&FSignificanceManagerModule::WorldSignificanceManagers,param_1);
  if (pTVar2 != (TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *)0x0) {
    pUVar1 = *(USignificanceManager **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (USignificanceManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (USignificanceManager *)0x0;
}

// GetManagedObject @ 14e2a23b0

FManagedObjectInfo * __thiscall
USignificanceManager::GetManagedObject(USignificanceManager *this,UObject *param_1)

{
  TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *pTVar1;
  undefined8 *puVar2;
  UObject *local_res8;
  
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pTVar1 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                   *)&this->ManagedObjects,(TObjectPtr<UObject_const_>)&local_res8);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FManagedObjectInfo *)*puVar2;
  }
  return (FManagedObjectInfo *)0x0;
}

// GetManagedObject @ 14e2a2460

FManagedObjectInfo * __thiscall
USignificanceManager::GetManagedObject(USignificanceManager *this,UObject *param_1)

{
  TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *pTVar1;
  undefined8 *puVar2;
  UObject *local_res8;
  
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pTVar1 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                   *)&this->ManagedObjects,(TObjectPtr<UObject_const_>)&local_res8);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FManagedObjectInfo *)*puVar2;
  }
  return (FManagedObjectInfo *)0x0;
}

// GetManagedObjects @ 14e2a2510

TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> * __thiscall
USignificanceManager::GetManagedObjects(USignificanceManager *this,FName param_1)

{
  TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar1 = TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->ManagedObjectsByTag,param_1);
  pTVar2 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
           &pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  if (pTVar2 != (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
                0x0) {
    return pTVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USignificanceManager::GetManagedObjects'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptySet;
}

// GetManagedObjects @ 14e2a25a0

void __thiscall
USignificanceManager::GetManagedObjects
          (USignificanceManager *this,
          TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  code *pcVar13;
  uint *puVar14;
  uint uVar15;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar9 = *(int *)&(this->ManagedObjects).field_0x8 - *(int *)&(this->ManagedObjects).field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (param_1->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  }
  iVar3 = *(int *)&(this->ManagedObjectsByTag).field_0x28;
  puVar2 = &(this->ManagedObjectsByTag).field_0x10;
  iVar10 = 0;
  uVar9 = 1;
  iVar12 = 0;
  iVar5 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ManagedObjectsByTag).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar8 = *puVar14;
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar5 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e2a269d;
      uVar8 = puVar14[lVar6 + 1];
    }
    uVar9 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = iVar12 + -1 + (int)lVar6;
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
  }
LAB_14e2a269d:
  uVar8 = *(uint *)&(this->ManagedObjectsByTag).field_0x28;
  uVar15 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar10);
  TStack_60.CurrentBitIndex = iVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar8 >> 5;
  TStack_60._28_4_ = iVar5;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_7c,
                       *(int *)&(this->ManagedObjectsByTag).field_0x8 -
                       *(int *)&(this->ManagedObjectsByTag).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar8 < 0) || (iVar3 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar9 = *(uint *)&(this->ManagedObjectsByTag).field_0x28;
  if (uVar8 != uVar9) {
    puVar11 = *(undefined1 **)&(this->ManagedObjectsByTag).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar8 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e2a279f;
      uVar8 = *(uint *)(puVar11 + lVar6 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar9;
    }
  }
LAB_14e2a279f:
  while( true ) {
    if (*(int *)&(this->ManagedObjectsByTag).field_0x8 -
        *(int *)&(this->ManagedObjectsByTag).field_0x34 != (int)uStack_40) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pTVar7 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&this->ManagedObjectsByTag + 8 +
             (longlong)TStack_60.CurrentBitIndex * 0x20);
    if ((param_1 == pTVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar3 = pTVar7->ArrayNum;
    if (iVar3 != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar3,&param_1->AllocatorInstance,&param_1->ArrayNum,
                          &param_1->ArrayMax);
      memcpy((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8,
             (pTVar7->AllocatorInstance).Data,(longlong)iVar3 << 3);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (param_2) {
    pcVar13 = CompareBySignificanceDescending;
    local_res8 = SUB81(this,0);
    if (this->bSortSignificanceAscending != 0) {
      pcVar13 = CompareBySignificanceAscending;
    }
    AlgoImpl::
    IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
              ((FManagedObjectInfo **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8
               ,(TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
                 )pcVar13);
  }
  return;
}

// GetPrivateStaticClass @ 14e2a2900

UClass * __cdecl USignificanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USignificanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SignificanceManager",L"SignificanceManager",
               &Z_Registration_Info_UClass_USignificanceManager.InnerSingleton,
               StaticRegisterNativesUSignificanceManager,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USignificanceManager>,
               InternalVTableHelperCtorCaller<USignificanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USignificanceManager.InnerSingleton;
}

// GetSignificance @ 14e2a29b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USignificanceManager::GetSignificance(USignificanceManager *this,UObject *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck> FVar6;
  TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *pTVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  FNameEntryId FVar10;
  float fVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48 [2];
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_SignificanceManager_SignificanceCheck;
  if (StatPtr_STAT_SignificanceManager_SignificanceCheck ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_SignificanceManager_SignificanceCheck");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_SignificanceManager_SignificanceCheck,*pFVar5,
                       L"Significance Check","STATGROUP_SignificanceManager","STATCAT_Advanced",
                       L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x198);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = LVar9.s.LowPart;
      goto LAB_14e2a2b1c;
    }
  }
  bVar3 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_14e2a2b1c:
  fVar11 = 0.0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  local_res8 = (LARGE_INTEGER)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pTVar7 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                   *)&this->ManagedObjects,(TObjectPtr<UObject_const_>)&local_res8);
  plVar8 = (longlong *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    fVar11 = *(float *)(*plVar8 + 0x18);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return fVar11;
}

// GetWorld @ 14e2a2cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall USignificanceManager::GetWorld(USignificanceManager *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pFVar4 = GetTypeName<UWorld>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UWorld>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// OnShowDebugInfo @ 14e2a3020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USignificanceManager::OnShowDebugInfo
          (USignificanceManager *this,AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,
          float *param_4,float *param_5)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UWorld *pUVar9;
  TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *pTVar10;
  UFont *this_00;
  undefined8 *puVar11;
  TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
  *pTVar12;
  int iVar13;
  wchar_t *pwVar14;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18 [2];
  float local_b8 [2];
  FName local_b0;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> local_a8;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_SignificanceManager,"SignificanceManager");
    _Init_thread_footer(&::_TSS0);
  }
  if (param_2 == (UCanvas *)0x0) {
    return;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_SignificanceManager);
  if (cVar4 == '\0') {
    return;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pUVar9 = AActor::GetWorld((AActor *)param_1);
    pTVar10 = TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<USignificanceManager>,0>,FDefaultSetAllocator>
                      *)&FSignificanceManagerModule::WorldSignificanceManagers,pUVar9);
    if (pTVar10 == (TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_> *)0x0) {
      return;
    }
    pUVar2 = *(UObject **)&pTVar10->field_0x8;
    if (pUVar2 == (UObject *)0x0) {
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  this_00 = UEngine::GetSmallFont();
  if ((this_00 != (UFont *)0x0) &&
     (this_00 != (UFont *)(param_2->DisplayDebugManager).DebugTextItem._padding_)) {
    (param_2->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_00;
    fVar18 = UFont::GetMaxCharHeight(this_00);
    (param_2->DisplayDebugManager).MaxCharHeight = fVar18;
  }
  fVar18 = __real_3b808081;
  uVar6 = (uint)FColor::Red.field0_0x0._s_0.A;
  fVar19 = (float)FColor::Red.field0_0x0._1_1_ * __real_3b808081;
  fVar20 = (float)FColor::Red.field0_0x0._0_1_ * __real_3b808081;
  *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
       (float)FColor::Red.field0_0x0._2_1_ * __real_3b808081;
  *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar19;
  *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = fVar20;
  *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)uVar6 * fVar18;
  local_res18[0] = 0.0;
  ::FString::PrintfImpl(&local_78,L"SIGNIFICANCE MANAGER - %d Managed Objects");
  FDisplayDebugManager::DrawString(&param_2->DisplayDebugManager,&local_78,local_res18);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  puVar11 = (undefined8 *)
            (**(code **)(*(longlong *)CVarSignificanceManagerFilterTag._8_8_ + 0xd8))
                      (CVarSignificanceManagerFilterTag._8_8_,local_58);
  if (*(int *)(puVar11 + 1) == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)*puVar11;
  }
  ::FName::FName(&local_b0,pwVar14);
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  pTVar15 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if (local_b0 == (FName)0x0) {
    pTVar17 = &local_a8;
  }
  else {
    pTVar12 = TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ManagedObjectsByTag,local_b0);
    pTVar17 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
              &pTVar12->field_0x8;
    if (pTVar12 ==
        (TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pTVar17 = pTVar15;
    }
    if (pTVar17 ==
        (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)0x0) {
      if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`USignificanceManager::GetManagedObjects'::__l2::
               _dynamic_atexit_destructor_for__EmptySet__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar17 = &EmptySet;
    }
    if (local_b0 != (FName)0x0) goto LAB_14e2a3296;
  }
  GetManagedObjects(this,&local_a8,true);
LAB_14e2a3296:
  uVar6 = (uint)FColor::White.field0_0x0._s_0.G;
  uVar7 = (uint)FColor::White.field0_0x0._s_0.B;
  uVar8 = (uint)FColor::White.field0_0x0._s_0.A;
  *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
       (float)FColor::White.field0_0x0._2_1_ * fVar18;
  *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)uVar6 * fVar18;
  *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar7 * fVar18;
  *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)uVar8 * fVar18;
  iVar13 = pTVar17->ArrayNum;
  if (GSignificanceManagerObjectsToShow < pTVar17->ArrayNum) {
    iVar13 = GSignificanceManagerObjectsToShow;
  }
  pTVar16 = pTVar15;
  if (0 < iVar13) {
    do {
      uVar7 = (uint)pTVar15;
      uVar6 = 0;
      if ((int)uVar7 < pTVar17->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((pTVar17->AllocatorInstance).Data + (longlong)pTVar16 * 8);
      local_98 = *(FName *)(lVar1 + 0x10);
      ::FName::ToString(&local_98,local_48);
      local_90 = *(FName *)(*(longlong *)(lVar1 + 8) + 0x18);
      ::FName::ToString(&local_90,&local_88);
      ::FString::PrintfImpl(&local_68,L"%6.3f - %s (%s)");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      local_b8[0] = 0.0;
      FDisplayDebugManager::DrawString(&param_2->DisplayDebugManager,&local_68,local_b8);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pTVar15 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
                (ulonglong)(uVar7 + 1);
      pTVar16 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
                ((longlong)&(pTVar16->AllocatorInstance).Data + 1);
    } while ((longlong)pTVar16 < (longlong)iVar13);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// QuerySignificance @ 14e2a3a20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USignificanceManager::QuerySignificance(USignificanceManager *this,UObject *param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck> FVar6;
  TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *pTVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  FNameEntryId FVar10;
  float fVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_SignificanceManager_SignificanceCheck;
  if (StatPtr_STAT_SignificanceManager_SignificanceCheck ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_SignificanceManager_SignificanceCheck");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_SignificanceManager_SignificanceCheck,*pFVar5,
                       L"Significance Check","STATGROUP_SignificanceManager","STATCAT_Advanced",
                       L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x1a3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = LVar9.s.LowPart;
      goto LAB_14e2a3b8c;
    }
  }
  bVar3 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_14e2a3b8c:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  local_res8 = (LARGE_INTEGER)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pTVar7 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                   *)&this->ManagedObjects,(TObjectPtr<UObject_const_>)&local_res8);
  plVar8 = (longlong *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 == (longlong *)0x0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(*plVar8 + 0x18);
  }
  *param_2 = fVar11;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return plVar8 != (longlong *)0x0;
}

// RegisterManagedObject @ 14e2a3d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USignificanceManager::RegisterManagedObject(USignificanceManager *this,FManagedObjectInfo *param_1)

{
  int *piVar1;
  TArray<USignificanceManager::FSequentialPostWorkPair,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_RegisterObject> FVar17;
  FManagedObjectInfo **ppFVar18;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_InitialSignificanceUpdate> FVar19;
  uint uVar20;
  undefined1 *puVar21;
  FName FVar22;
  uint uVar23;
  FName FVar24;
  code *pcVar25;
  FManagedObjectInfo *local_res10;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_168;
  FName local_160;
  int local_158 [2];
  FName local_150;
  FName local_148;
  FName local_140;
  FManagedObjectInfo *local_138;
  float fStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_118;
  TPairInitializer<TObjectPtr<UObject>_&&,USignificanceManager::FManagedObjectInfo_*_const_&>
  local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName *local_d0;
  FStatMessage local_c8;
  FString local_b8;
  FName *local_a8;
  FManagedObjectInfo **local_a0;
  FName *local_98;
  USignificanceManager *local_90;
  FManagedObjectInfo **local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  FVar16 = StatPtr_STAT_SignificanceManager_NumObjects;
  local_res10 = param_1;
  if (StatPtr_STAT_SignificanceManager_NumObjects ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects>)0x0) {
    pFVar15 = ::FName::FName(&local_80,"STAT_SignificanceManager_NumObjects");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_NumObjects,
                        *pFVar15,L"Num Managed Objects","STATGROUP_SignificanceManager",
                        "STATCAT_Advanced",L"Significance Manager",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  ppFVar18 = *(FManagedObjectInfo ***)FVar16;
  if (((ppFVar18 != (FManagedObjectInfo **)0x0) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_c8.NameAndInfo.Number = (uint)((ulonglong)ppFVar18 >> 0x20) & 0xffffafff | 0xa000;
    local_c8.StatData.Pad[0] = '\x01';
    local_c8.StatData.Pad[1] = '\0';
    local_c8.StatData.Pad[2] = '\0';
    local_c8.StatData.Pad[3] = '\0';
    local_c8.StatData.Pad[4] = '\0';
    local_c8.StatData.Pad[5] = '\0';
    local_c8.StatData.Pad[6] = '\0';
    local_c8.StatData.Pad[7] = '\0';
    local_108.Value = ppFVar18;
    local_c8.NameAndInfo.Index.Value = (uint)ppFVar18;
    FThreadStats::AddStatMessage(this_00,&local_c8);
    FStatsTrace::Add((FName *)&local_108.Value,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  FVar17 = StatPtr_STAT_SignificanceManager_RegisterObject;
  if (StatPtr_STAT_SignificanceManager_RegisterObject ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_RegisterObject>)0x0) {
    pFVar15 = ::FName::FName(&local_78,"STAT_SignificanceManager_RegisterObject");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_RegisterObject>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SignificanceManager_RegisterObject,*pFVar15,L"Register Object"
                        ,"STATGROUP_SignificanceManager","STATCAT_Advanced",L"Significance Manager",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar9 = false;
  bVar8 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14e2a3fb4:
    bVar9 = bVar11;
    bVar8 = bVar10;
    bVar10 = false;
    FVar24 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_150.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0xd3);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2a3fb4;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
  }
  local_168 = (FName)local_res10->Object;
  if ((local_168 == (FName)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                          ,0xd7,L""), bVar11)) {
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  FVar22 = local_168;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  local_f8 = FVar22;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (FVar22 != (FName)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar22);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar22 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar22);
    }
  }
  uVar20 = ((uint)((ulonglong)FVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar22 >> 4)) *
           -0x7a143595;
  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
  iVar13 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                     ((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                       *)&this->ManagedObjects,uVar20 >> 0x10 ^ uVar20,
                      (TObjectPtr<UObject_const_> *)&local_f8);
  if (iVar13 != -1) {
    local_98 = &local_168;
    local_88 = &local_res10;
    local_90 = this;
    bVar11 = `USignificanceManager::RegisterManagedObject'::__l14::<lambda_1>::operator()(&local_98)
    ;
    if (!bVar11) {
      if (2 < (byte)LogSignificance._0_1_) {
        local_f0 = local_res10->Tag;
        ::FName::ToString(&local_f0,&local_58);
        local_e8 = local_168;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_168);
        }
        ppFVar18 = TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
                   ::FindChecked((TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
                                  *)&this->ManagedObjects,(TObjectPtr<UObject_const_>)&local_e8);
        local_e0 = (*ppFVar18)->Tag;
        ::FName::ToString(&local_e0,&local_68);
        local_d8 = *(FName *)((longlong)local_168 + 0x18);
        ::FName::ToString(&local_d8,&local_b8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignificance);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (local_res10 != (FManagedObjectInfo *)0x0) {
        (**(code **)local_res10->_padding_)(local_res10,1);
      }
      goto LAB_14e2a472e;
    }
  }
  if (local_res10->PostSignificanceType == Sequential) {
    local_138 = local_res10;
    pTVar2 = &this->ObjWithSequentialPostWork;
    fStack_130 = local_res10->Significance;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 <
         pFVar5 + (longlong)(this->ObjWithSequentialPostWork).ArrayMax * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    iVar13 = (this->ObjWithSequentialPostWork).ArrayNum;
    piVar1 = &(this->ObjWithSequentialPostWork).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ObjWithSequentialPostWork).ArrayNum = iVar13 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(FManagedObjectInfo **)pFVar5 = local_138;
    *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_12c,fStack_130);
  }
  if ((this->Viewpoints).ArrayNum != 0) {
    FVar19 = StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate;
    if (StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_InitialSignificanceUpdate>)0x0) {
      pFVar15 = ::FName::FName(&local_70,"STAT_SignificanceManager_InitialSignificanceUpdate");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_InitialSignificanceUpdate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate,*pFVar15,
                          L"Initial Significance Update","STATGROUP_SignificanceManager",
                          "STATCAT_Advanced",L"Significance Manager",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar22 = *(FName *)FVar19;
    bVar6 = false;
    bVar11 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_14e2a43ac:
      bVar7 = false;
      FVar22 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar6 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
          local_148.Number = FVar22.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                     ,0xe7);
          bVar6 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2a43ac;
      local_160 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar7 = true;
    }
    FManagedObjectInfo::UpdateSignificance
              (local_res10,&this->Viewpoints,this->bSortSignificanceAscending);
    if (local_res10->PostSignificanceType == Sequential) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USignificanceManager::FManagedObjectInfo_*,float,float,bool)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USignificanceManager::FManagedObjectInfo_*,float,float,bool)>
                    *)&local_res10->PostSignificanceFunction,local_res10,__real_3f800000,
                   local_res10->Significance,false);
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(FVar22,CycleScopeEnd);
    }
  }
  local_160 = local_168;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  local_a8 = &local_160;
  local_a0 = &local_res10;
  TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<UObject>_&&,USignificanceManager::FManagedObjectInfo_*_const_&>_>
            ((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
              *)&this->ManagedObjects,&local_108,(bool *)&local_a8);
  pTVar3 = &this->ObjArray;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar5 + (longlong)(this->ObjArray).ArrayMax * 8))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  iVar13 = (this->ObjArray).ArrayNum;
  piVar1 = &(this->ObjArray).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ObjArray).ArrayNum = iVar13 + 1;
  *(FManagedObjectInfo **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_res10;
  FVar22 = local_res10->Tag;
  local_140 = FVar22;
  uVar20 = ::GetTypeHash(FVar22.ComparisonIndex.Value);
  uVar20 = uVar20 + FVar22.Number;
  if (*(int *)&(this->ManagedObjectsByTag).field_0x8 !=
      *(int *)&(this->ManagedObjectsByTag).field_0x34) {
    puVar21 = *(undefined1 **)&(this->ManagedObjectsByTag).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->ManagedObjectsByTag).field_0x38;
    }
    uVar23 = *(uint *)(puVar21 +
                      (ulonglong)(*(int *)&(this->ManagedObjectsByTag).field_0x48 - 1U & uVar20) * 4
                      );
    if (uVar23 != 0xffffffff) {
      do {
        pFVar15 = (FName *)((longlong)(int)uVar23 * 0x20 + *(longlong *)&this->ManagedObjectsByTag);
        if (*pFVar15 == local_140) {
          if (pFVar15 != (FName *)0x0) goto LAB_14e2a45bf;
          break;
        }
        uVar23 = pFVar15[3].ComparisonIndex.Value;
      } while (uVar23 != 0xffffffff);
    }
  }
  local_d0 = &local_140;
  TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->ManagedObjectsByTag,(uint)local_158,
             (TKeyInitializer<FName_&&> *)(ulonglong)uVar20,(bool *)&local_d0);
  pFVar15 = (FName *)((longlong)local_158[0] * 0x20 + *(longlong *)&this->ManagedObjectsByTag);
LAB_14e2a45bf:
  uVar20 = pFVar15[2].ComparisonIndex.Value;
  pTVar3 = (TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *)
           (pFVar15 + 1);
  if ((int)uVar20 < 1) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar5 + (longlong)(int)pFVar15[2].Number * 8))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    uVar20 = pFVar15[2].ComparisonIndex.Value;
    if (uVar20 == pFVar15[2].Number) {
      uVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pTVar3,(int *)&pFVar15[2].Number);
    }
    pFVar15[2].ComparisonIndex.Value = uVar20 + 1;
    *(FManagedObjectInfo **)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar20 * 8) =
         local_res10;
  }
  else {
    pcVar25 = CompareBySignificanceDescending;
    uVar20 = uVar20 - 1;
    uVar23 = 0;
    if (this->bSortSignificanceAscending != 0) {
      pcVar25 = CompareBySignificanceAscending;
      uVar23 = 0;
    }
    while( true ) {
      while( true ) {
        iVar13 = uVar20 - uVar23;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 1;
        }
        uVar4 = (iVar13 >> 1) + uVar23;
        uVar14 = 0;
        if ((int)uVar4 < (int)pFVar15[2].ComparisonIndex.Value) {
          uVar14 = ~uVar4 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        cVar12 = (*pcVar25)(local_res10,
                            *(undefined8 *)
                             ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar4 * 8));
        if (cVar12 == '\0') break;
        if (uVar23 == uVar4) goto LAB_14e2a4678;
        uVar20 = uVar4 - 1;
      }
      if (uVar23 == uVar20) break;
      uVar23 = uVar4 + 1;
    }
    uVar23 = uVar23 + 1;
LAB_14e2a4678:
    TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>::Insert
              (pTVar3,&local_res10,uVar23);
  }
LAB_14e2a472e:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// RegisterObject @ 14e2a4780

void __thiscall
USignificanceManager::RegisterObject
          (USignificanceManager *this,UObject *param_1,FName param_2,
          TFunction<float___cdecl(USignificanceManager::FManagedObjectInfo_*,UE::Math::TTransform<double>_const_&)>
          *param_3,EPostSignificanceType param_4,
          TFunction<void___cdecl(USignificanceManager::FManagedObjectInfo_*,float,float,bool)>
          *param_5)

{
  code *pcVar1;
  bool bVar2;
  FManagedObjectInfo *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  
  pFVar3 = ::operator_new(0x80);
  if (pFVar3 == (FManagedObjectInfo *)0x0) {
    pFVar3 = (FManagedObjectInfo *)0x0;
  }
  else {
    local_68 = *(longlong *)param_5;
    local_40 = (longlong *)0x0;
    if (*(longlong *)param_5 != 0) {
      puVar4 = (undefined8 *)&param_5->field_0x10;
      if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_5->field_0x28;
      }
      (**(code **)*puVar4)();
    }
    local_98 = *(longlong *)param_3;
    local_70 = (longlong *)0x0;
    if (local_98 != 0) {
      puVar4 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar4)();
    }
    pFVar3->Object = param_1;
    pFVar3->_padding_ = (longlong)&___7FManagedObjectInfo_USignificanceManager__6B_;
    pFVar3->PostSignificanceType = param_4;
    pFVar3->Tag = param_2;
    pFVar3->Significance = 1.0;
    *(longlong *)&pFVar3->SignificanceFunction = local_98;
    *(longlong **)&(pFVar3->SignificanceFunction).field_0x28 = local_70;
    local_70 = (longlong *)0x0;
    *(longlong *)&(pFVar3->SignificanceFunction).field_0x10 = local_88;
    *(undefined8 *)&(pFVar3->SignificanceFunction).field_0x18 = uStack_80;
    *(undefined8 *)&(pFVar3->SignificanceFunction).field_0x20 = local_78;
    if (*(longlong *)&pFVar3->SignificanceFunction != 0) {
      local_98 = 0;
    }
    *(longlong *)&pFVar3->PostSignificanceFunction = local_68;
    *(longlong **)&(pFVar3->PostSignificanceFunction).field_0x28 = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)&(pFVar3->PostSignificanceFunction).field_0x10 = local_58;
    *(undefined8 *)&(pFVar3->PostSignificanceFunction).field_0x18 = uStack_50;
    *(undefined8 *)&(pFVar3->PostSignificanceFunction).field_0x20 = local_48;
    if (*(longlong *)&pFVar3->PostSignificanceFunction == 0) {
      if (pFVar3->PostSignificanceType != None) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1372711259069218733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Public\\SignificanceManager.h"
                           ,0x53,"PostSignificanceType == EPostSignificanceType::None");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar3->PostSignificanceType = None;
    }
    else {
      local_68 = 0;
      if (pFVar3->PostSignificanceType == None) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1372711259069218737>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Public\\SignificanceManager.h"
                           ,0x4f,"PostSignificanceType != EPostSignificanceType::None");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_98 != 0) {
      plVar5 = &local_88;
      if (local_70 != (longlong *)0x0) {
        plVar5 = local_70;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_68 != 0) {
      plVar5 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  RegisterManagedObject(this,pFVar3);
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_5 != 0) {
    plVar5 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUSignificanceManager @ 14e2a5250

void __cdecl USignificanceManager::StaticRegisterNativesUSignificanceManager(void)

{
  return;
}

// UnregisterAll @ 14e2a5790

void __thiscall USignificanceManager::UnregisterAll(USignificanceManager *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  undefined1 *puVar6;
  longlong lVar7;
  UObject *pUVar8;
  code *pcVar9;
  TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  uint uStackX_14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  uint local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong *local_60;
  TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_58;
  FName local_50 [2];
  
  local_58 = (TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->ManagedObjectsByTag;
  pTVar14 = TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Find(local_58,param_1);
  plVar16 = (longlong *)&pTVar14->field_0x8;
  if (pTVar14 ==
      (TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  if (plVar16 != (longlong *)0x0) {
    plVar21 = (longlong *)*plVar16;
    local_78 = *(uint *)(plVar16 + 1);
    uVar17 = (ulonglong)(int)local_78;
    local_60 = plVar21 + uVar17;
    while( true ) {
      plVar18 = local_60;
      local_70 = plVar21;
      if ((int)plVar16[1] != (int)uVar17) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<USignificanceManager::FManagedObjectInfo_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      this_00 = local_58;
      if (plVar21 == plVar18) break;
      puVar3 = (undefined8 *)*plVar21;
      if (*(char *)((longlong)puVar3 + 0x1c) == '\x02') {
        pFVar4 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
        iVar12 = (this->ObjWithSequentialPostWork).ArrayNum;
        for (pFVar20 = pFVar4; pFVar20 != pFVar4 + (longlong)iVar12 * 0x10; pFVar20 = pFVar20 + 0x10
            ) {
          if (*(undefined8 **)pFVar20 == puVar3) {
            uVar13 = (uint)((longlong)pFVar20 - (longlong)pFVar4 >> 4);
            if (uVar13 != 0xffffffff) {
              uVar11 = 0;
              if ((int)uVar13 < iVar12) {
                uVar11 = ~uVar13 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar2 = (this->ObjWithSequentialPostWork).ArrayNum;
              pFVar4 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
              iVar12 = ~uVar13 + iVar2;
              if (1 < iVar12) {
                iVar12 = 1;
              }
              if (iVar12 != 0) {
                memmove(pFVar4 + (longlong)(int)uVar13 * 0x10,
                        pFVar4 + (longlong)(iVar2 - iVar12) * 0x10,(longlong)iVar12 << 4);
              }
              piVar1 = &(this->ObjWithSequentialPostWork).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            break;
          }
        }
      }
      pFVar4 = (this->ObjArray).AllocatorInstance.Data;
      iVar12 = (this->ObjArray).ArrayNum;
      for (pFVar20 = pFVar4; pFVar20 != pFVar4 + (longlong)iVar12 * 8; pFVar20 = pFVar20 + 8) {
        if (*(undefined8 **)pFVar20 == puVar3) {
          uVar13 = (uint)((longlong)pFVar20 - (longlong)pFVar4 >> 3);
          if (uVar13 != 0xffffffff) {
            uVar11 = 0;
            if ((int)(uVar13 + 1) <= iVar12) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar2 = (this->ObjArray).ArrayNum;
            pFVar4 = (this->ObjArray).AllocatorInstance.Data;
            iVar12 = iVar2 + ~uVar13;
            if (1 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              memmove(pFVar4 + (longlong)(int)uVar13 * 8,pFVar4 + (longlong)(iVar2 - iVar12) * 8,
                      (longlong)iVar12 << 3);
            }
            piVar1 = &(this->ObjArray).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
      pUVar5 = (UObject *)puVar3[1];
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
      }
      if (*(int *)&(this->ManagedObjects).field_0x8 != *(int *)&(this->ManagedObjects).field_0x34) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        uVar13 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
                 -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        puVar6 = *(undefined1 **)&(this->ManagedObjects).field_0x40;
        puVar19 = &(this->ManagedObjects).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar19 = puVar6;
        }
        for (iVar12 = *(int *)(puVar19 +
                              ((longlong)*(int *)&(this->ManagedObjects).field_0x48 - 1U &
                              (longlong)(int)(uVar13 >> 0x10 ^ uVar13)) * 4); iVar12 != -1;
            iVar12 = *(int *)(lVar7 + 0x10 + (longlong)iVar12 * 0x18)) {
          lVar7 = *(longlong *)&(this->ManagedObjects).field_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          pUVar8 = *(UObject **)(lVar7 + (longlong)iVar12 * 0x18);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar8);
          }
          if (pUVar8 == pUVar5) {
            TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                             *)&this->ManagedObjects,iVar12);
            plVar21 = local_70;
            break;
          }
          plVar21 = local_70;
        }
      }
      if ((void *)puVar3[10] != (void *)0x0) {
        local_80[0] = *(undefined4 *)(puVar3 + 3);
        local_res20[0] = 1;
        local_88[0] = 0x3f800000;
        local_68 = puVar3;
        UE::Core::Private::Function::CheckCallable((void *)puVar3[10]);
        pcVar9 = (code *)puVar3[10];
        plVar18 = puVar3 + 0xc;
        if ((longlong *)puVar3[0xf] != (longlong *)0x0) {
          plVar18 = (longlong *)puVar3[0xf];
        }
        uVar15 = (**(code **)(*plVar18 + 8))();
        (*pcVar9)(uVar15,&local_68,local_80,local_88,local_res20);
      }
      (**(code **)*puVar3)(puVar3,1);
      uVar17 = (ulonglong)local_78;
      plVar21 = plVar21 + 1;
    }
    if (*(int *)&(local_58->Elements).field_0x8 != *(int *)&(local_58->Elements).field_0x34) {
      local_50[0] = param_1;
      uVar13 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      uStackX_14 = param_1.Number;
      TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,uStackX_14 + uVar13,local_50);
    }
  }
  return;
}

// UnregisterObject @ 14e2a5c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USignificanceManager::UnregisterObject(USignificanceManager *this,UObject *param_1)

{
  int *piVar1;
  FManagedObjectInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_UnregisterObject> FVar16;
  TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
  *pTVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  undefined4 local_res18 [2];
  float local_res20 [2];
  FManagedObjectInfo *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  TObjectPtr<UObject_const_>_u_0 local_a0;
  FName local_98;
  FManagedObjectInfo *local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  FVar13 = StatPtr_STAT_SignificanceManager_NumObjects;
  if (StatPtr_STAT_SignificanceManager_NumObjects ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_SignificanceManager_NumObjects");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_NumObjects,
                        *pFVar12,L"Num Managed Objects","STATGROUP_SignificanceManager",
                        "STATCAT_Advanced",L"Significance Manager",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar23 = *(FName *)FVar13;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar19 = FVar23.Number;
  local_res8 = FVar22.Value;
  uStackX_c = uVar19;
  if (((FVar23 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_80.NameAndInfo.Number = uVar19 & 0xffffbfff | 0xb000;
    local_80.StatData.Pad[0] = '\x01';
    local_80.StatData.Pad[1] = '\0';
    local_80.StatData.Pad[2] = '\0';
    local_80.StatData.Pad[3] = '\0';
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_a8 = FVar23;
    local_80.NameAndInfo.Index.Value = FVar22.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_80);
    FStatsTrace::Add(&local_a8,-1);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  FVar16 = StatPtr_STAT_SignificanceManager_UnregisterObject;
  if (StatPtr_STAT_SignificanceManager_UnregisterObject ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_UnregisterObject>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_SignificanceManager_UnregisterObject");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_UnregisterObject>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SignificanceManager_UnregisterObject,*pFVar12,
                        L"Unregister Object","STATGROUP_SignificanceManager","STATCAT_Advanced",
                        L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar7 = false;
  bVar9 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar19 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar22.Value;
        local_c0.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x12a);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar22.Value;
      uStackX_c = uVar19;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar8 = true;
      goto LAB_14e2a5e76;
    }
  }
  bVar8 = false;
  FVar23 = local_b8;
LAB_14e2a5e76:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_a0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  uVar19 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  iVar11 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                     ((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                       *)&this->ManagedObjects,uVar19 >> 0x10 ^ uVar19,
                      (TObjectPtr<UObject_const_> *)&local_a0.ObjectPtr);
  if (iVar11 != -1) {
    pFVar2 = *(FManagedObjectInfo **)
              (*(longlong *)&this->ManagedObjects + 8 + (longlong)iVar11 * 0x18);
    local_c8 = pFVar2;
    TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
                     *)&this->ManagedObjects,iVar11);
    if (pFVar2->PostSignificanceType == Sequential) {
      pFVar3 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
      iVar11 = (this->ObjWithSequentialPostWork).ArrayNum;
      for (pFVar24 = pFVar3; pFVar24 != pFVar3 + (longlong)iVar11 * 0x10; pFVar24 = pFVar24 + 0x10)
      {
        if (*(FManagedObjectInfo **)pFVar24 == pFVar2) {
          uVar19 = (uint)((longlong)pFVar24 - (longlong)pFVar3 >> 4);
          if (uVar19 != 0xffffffff) {
            uVar25 = 0;
            if ((int)uVar19 < iVar11) {
              uVar25 = ~uVar19 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar21 = (this->ObjWithSequentialPostWork).ArrayNum;
            pFVar3 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
            iVar11 = iVar21 + ~uVar19;
            if (1 < iVar11) {
              iVar11 = 1;
            }
            if (iVar11 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar19 * 0x10,
                      pFVar3 + (longlong)(iVar21 - iVar11) * 0x10,(longlong)iVar11 << 4);
            }
            piVar1 = &(this->ObjWithSequentialPostWork).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
    }
    TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&this->ObjArray,&local_c8,No);
    pTVar17 = TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ManagedObjectsByTag,pFVar2->Tag);
    if ((pTVar17 ==
         (TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>
          *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = *(int *)&pTVar17->field_0x10;
    plVar4 = *(longlong **)&pTVar17->field_0x8;
    if (iVar11 == 1) {
      if (((FManagedObjectInfo *)*plVar4 != pFVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ObjectsWithTag[0] == ObjectInfo",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                              ,0x13d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = pFVar2->Tag;
      local_98 = FVar5;
      if (*(int *)&(this->ManagedObjectsByTag).field_0x8 !=
          *(int *)&(this->ManagedObjectsByTag).field_0x34) {
        uVar19 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)&this->ManagedObjectsByTag,FVar5.Number + uVar19,&local_98);
      }
    }
    else {
      for (plVar20 = plVar4; plVar20 != plVar4 + iVar11; plVar20 = plVar20 + 1) {
        if ((FManagedObjectInfo *)*plVar20 == pFVar2) {
          iVar21 = (int)((longlong)plVar20 - (longlong)plVar4 >> 3);
          if (iVar21 != -1) {
            memmove(plVar4 + iVar21,plVar4 + iVar21 + 1,(longlong)((iVar11 - iVar21) + -1) << 3);
            *(int *)&pTVar17->field_0x10 = *(int *)&pTVar17->field_0x10 + -1;
          }
          break;
        }
      }
    }
    if (*(void **)&pFVar2->PostSignificanceFunction != (void *)0x0) {
      local_res8 = CONCAT31(local_res8._1_3_,1);
      local_res18[0] = 0x3f800000;
      local_res20[0] = pFVar2->Significance;
      local_90 = pFVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->PostSignificanceFunction);
      plVar4 = *(longlong **)&(pFVar2->PostSignificanceFunction).field_0x28;
      pcVar6 = *(code **)&pFVar2->PostSignificanceFunction;
      plVar20 = (longlong *)&(pFVar2->PostSignificanceFunction).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar20 = plVar4;
      }
      uVar18 = (**(code **)(*plVar20 + 8))();
      (*pcVar6)(uVar18,&local_90,local_res20,local_res18,&local_res8);
    }
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_70.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_70);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return;
}

// Update @ 14e2a6280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USignificanceManager::Update
          (USignificanceManager *this,TArrayView<UE::Math::TTransform<double>_const_,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<USignificanceManager::FSequentialPostWorkPair,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  TTransform<double> *_Src;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName FVar10;
  TMap<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar11;
  TMap<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_Update> FVar19;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceUpdate> FVar20;
  undefined8 uVar21;
  FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceSort> FVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  undefined1 *puVar28;
  uint *puVar29;
  code *pcVar30;
  FScriptContainerElement *pFVar31;
  TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<USignificanceManager::FSequentialPostWorkPair,TSizedDefaultAllocator<32>_> *pTVar33;
  uint uVar34;
  uint uVar35;
  <lambda_1> local_res8;
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [4];
  FColor_u_0 local_1a4;
  FColor_u_0 local_1a0 [2];
  undefined4 local_198 [2];
  undefined4 local_190 [2];
  FColor_u_0 local_188 [2];
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  ulonglong local_160;
  FName local_158;
  FName local_150;
  FName local_140;
  FName local_130;
  int local_120;
  USignificanceManager *local_118;
  longlong local_110;
  TMap<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_108;
  TMap<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  USignificanceManager **local_88;
  FName local_80;
  FName local_78;
  FName local_70 [4];
  undefined4 local_4c;
  
  uVar34 = param_1->ArrayNum;
  if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
  }
  piVar1 = &(this->Viewpoints).ArrayMax;
  piVar2 = &(this->Viewpoints).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < (int)uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar34,&(this->Viewpoints).AllocatorInstance,0,piVar1);
  }
  _Src = param_1->DataPtr;
  if (((_Src == (TTransform<double> *)0x0) && (uVar34 != 0)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9c1,L""), bVar15)) {
    pcVar30 = (code *)swi(3);
    (*pcVar30)();
    return;
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,uVar34,&(this->Viewpoints).AllocatorInstance,piVar2,piVar1);
  if (uVar34 != 0) {
    memcpy((this->Viewpoints).AllocatorInstance.Data + (longlong)iVar17 * 0x60,_Src,
           (longlong)(int)uVar34 * 0x60);
  }
  FVar19 = StatPtr_STAT_SignificanceManager_Update;
  if (StatPtr_STAT_SignificanceManager_Update ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_Update>)0x0) {
    pFVar18 = ::FName::FName(&local_80,"STAT_SignificanceManager_Update");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_Update>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_Update,
                        *pFVar18,L"Update Total","STATGROUP_SignificanceManager","STATCAT_Advanced",
                        L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar19;
  bVar15 = false;
  bVar9 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  bVar13 = false;
  bVar7 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_14e2a64cc:
    bVar9 = bVar7;
    bVar15 = bVar13;
    bVar13 = false;
    local_180 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar15 = false;
      bVar9 = true;
      bVar13 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_178.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x1e3);
        bVar15 = true;
        bVar9 = true;
        bVar13 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2a64cc;
    local_180 = FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar13 = true;
  }
  FVar20 = StatPtr_STAT_SignificanceManager_SignificanceUpdate;
  if (StatPtr_STAT_SignificanceManager_SignificanceUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceUpdate>)0x0) {
    pFVar18 = ::FName::FName(&local_78,"STAT_SignificanceManager_SignificanceUpdate");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SignificanceManager_SignificanceUpdate,*pFVar18,
                        L"Significance Update","STATGROUP_SignificanceManager","STATCAT_Advanced",
                        L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar8 = false;
  bVar7 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar16 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_14e2a660b:
    bVar8 = bVar16;
    bVar7 = bVar14;
    bVar14 = false;
    FVar26 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar16 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_170.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x1e6);
        bVar8 = true;
        bVar7 = true;
        bVar16 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2a660b;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = true;
  }
  pTVar3 = &this->ObjWithSequentialPostWork;
  iVar17 = (this->ObjWithSequentialPostWork).ArrayNum;
  pFVar27 = (pTVar3->AllocatorInstance).Data;
  pFVar31 = pFVar27 + (longlong)iVar17 * 0x10;
  while( true ) {
    if ((this->ObjWithSequentialPostWork).ArrayNum != iVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<USignificanceManager::FSequentialPostWorkPair,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar27 == pFVar31) break;
    *(undefined4 *)(pFVar27 + 8) = *(undefined4 *)(*(longlong *)pFVar27 + 0x18);
    pFVar27 = pFVar27 + 0x10;
  }
  pTVar32 = &this->ObjArrayCopy;
  if (pTVar32 != &this->ObjArray) {
    iVar17 = (this->ObjArray).ArrayNum;
    piVar1 = &(this->ObjArrayCopy).ArrayMax;
    pFVar27 = (this->ObjArray).AllocatorInstance.Data;
    (this->ObjArrayCopy).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar32->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar32->AllocatorInstance).Data,pFVar27,(longlong)iVar17 << 3);
      }
    }
  }
  pTVar33 = &this->ObjWithSequentialPostWorkCopy;
  if (pTVar33 != pTVar3) {
    iVar17 = (this->ObjWithSequentialPostWork).ArrayNum;
    piVar1 = &(this->ObjWithSequentialPostWorkCopy).ArrayMax;
    pFVar27 = (pTVar3->AllocatorInstance).Data;
    (this->ObjWithSequentialPostWorkCopy).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar17,*piVar1,&pTVar33->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar33->AllocatorInstance).Data,pFVar27,(longlong)iVar17 << 4);
      }
    }
  }
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`USignificanceManager::Update'::__l3::<lambda_1>,void,int>::Call;
  local_res8 = SUB81(this,0);
  local_a0.DataPtr = (void **)0x0;
  local_a0.ArrayNum = 0;
  local_160 = 1;
  local_118 = this;
  local_88 = &local_118;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->ObjArrayCopy).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_90,local_res8,None,&local_a0);
  iVar17 = (this->ObjWithSequentialPostWorkCopy).ArrayNum;
  pFVar27 = (pTVar33->AllocatorInstance).Data;
  pFVar31 = pFVar27 + (longlong)iVar17 * 0x10;
  while( true ) {
    if ((this->ObjWithSequentialPostWorkCopy).ArrayNum != iVar17) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<USignificanceManager::FSequentialPostWorkPair,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1b8);
    }
    if (pFVar27 == pFVar31) break;
    lVar24 = *(longlong *)pFVar27;
    local_190[0] = *(undefined4 *)(pFVar27 + 8);
    local_1b0[0] = 0;
    local_198[0] = *(undefined4 *)(lVar24 + 0x18);
    local_110 = lVar24;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar24 + 0x50));
    pcVar30 = *(code **)(lVar24 + 0x50);
    plVar23 = (longlong *)(lVar24 + 0x60);
    if (*(longlong **)(lVar24 + 0x78) != (longlong *)0x0) {
      plVar23 = *(longlong **)(lVar24 + 0x78);
    }
    uVar21 = (**(code **)(*plVar23 + 8))();
    (*pcVar30)(uVar21,&local_110,local_190,local_198,local_1b0);
    pFVar27 = pFVar27 + 0x10;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  FVar22 = StatPtr_STAT_SignificanceManager_SignificanceSort;
  if (StatPtr_STAT_SignificanceManager_SignificanceSort ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceSort>)0x0) {
    pFVar18 = ::FName::FName(local_70,"STAT_SignificanceManager_SignificanceSort");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceSort>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SignificanceManager_SignificanceSort,*pFVar18,
                        L"Significance Sort","STATGROUP_SignificanceManager","STATCAT_Advanced",
                        L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar22;
  bVar8 = false;
  bVar7 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar16 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar16 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_168.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SignificanceManager\\Source\\SignificanceManager\\Private\\SignificanceManager.cpp"
                   ,0x205);
        bVar8 = true;
        bVar7 = true;
        bVar16 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_158 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_14e2a69b3;
    }
  }
  bVar8 = bVar16;
  bVar7 = bVar14;
  bVar14 = false;
  local_158 = local_130;
LAB_14e2a69b3:
  iVar17 = *(int *)&(this->ManagedObjectsByTag).field_0x28;
  puVar5 = &(this->ManagedObjectsByTag).field_0x10;
  local_e0 = 0;
  local_108 = &this->ManagedObjectsByTag;
  iStack_e4 = 0;
  iStack_f8 = 0;
  if (iVar17 != 0) {
    puVar29 = *(uint **)&(this->ManagedObjectsByTag).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)puVar5;
    }
    uVar34 = *puVar29;
    while (uVar34 == 0) {
      lVar24 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14e2a6a41;
      uVar34 = puVar29[lVar24 + 1];
    }
    local_160 = (ulonglong)(-uVar34 & uVar34);
    uVar4 = local_160 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_120 = (int)lVar24;
    iStack_e4 = local_120 + -1 + local_e0;
    if (iVar17 < iStack_e4) {
      iStack_e4 = iVar17;
    }
  }
LAB_14e2a6a41:
  uStack_f4 = (undefined4)local_160;
  uStack_dc = local_4c;
  iStack_d8 = *(int *)&(this->ManagedObjectsByTag).field_0x8 -
              *(int *)&(this->ManagedObjectsByTag).field_0x34;
  uVar34 = *(uint *)&(this->ManagedObjectsByTag).field_0x28;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  uStack_e8 = 0xffffffff;
  uVar35 = uVar34 & 0xffffffe0;
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar34 >> 5;
  TStack_c8._28_4_ = local_4c;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = local_108;
  local_f0 = puVar5;
  local_d0 = local_108;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if ((((int)uVar34 < 0) || (iVar17 < (int)uVar34)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar30 = (code *)swi(3);
    (*pcVar30)();
    return;
  }
  pTVar11 = local_108;
  uVar6 = *(uint *)&(this->ManagedObjectsByTag).field_0x28;
  if (uVar34 != uVar6) {
    puVar28 = *(undefined1 **)&(this->ManagedObjectsByTag).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar5;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar25 * 4);
    while (uVar34 == 0) {
      lVar24 = (longlong)iVar25;
      uVar35 = uVar35 + 0x20;
      iVar25 = iVar25 + 1;
      uVar34 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e2a6b70;
      uVar34 = *(uint *)(puVar28 + lVar24 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar34 = (uVar35 - 1) + (int)lVar24;
    if ((int)uVar6 < (int)uVar34) {
      uVar34 = uVar6;
    }
  }
LAB_14e2a6b70:
  while( true ) {
    pTVar12 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    FVar10 = local_158;
    FVar26 = local_180;
    if (((TStack_c8.CurrentBitIndex == uVar34) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) && (pTVar12 == pTVar11)
       ) break;
    lVar24 = *(longlong *)pTVar12;
    pcVar30 = CompareBySignificanceDescending;
    if (this->bSortSignificanceAscending != 0) {
      pcVar30 = CompareBySignificanceAscending;
    }
    AlgoImpl::
    StableSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
              (*(FManagedObjectInfo ***)((longlong)TStack_c8.CurrentBitIndex * 0x20 + 8 + lVar24),
               *(int *)((longlong)TStack_c8.CurrentBitIndex * 0x20 + 0x10 + lVar24),
               (FIdentityFunctor)local_res8,
               (TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
                )pcVar30);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar10,CycleScopeEnd);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// operator() @ 150595320

bool __thiscall
`USignificanceManager::RegisterManagedObject'::__l14::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FManagedObjectInfo **ppFVar8;
  FName local_res10;
  UObject *local_res18;
  FName local_res20;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8916633886415388456>);
  if (bVar6) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x10);
    ::FName::ToString(&local_res10,&local_40);
    lVar1 = *(longlong *)((longlong)this + 8);
    local_res18 = (UObject *)**(undefined8 **)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    ppFVar8 = TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
              ::FindChecked((TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
                             *)(lVar1 + 0x90),(TObjectPtr<UObject_const_>)&local_res18);
    local_res20 = (*ppFVar8)->Tag;
    ::FName::ToString(&local_res20,&local_50);
    local_68 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_68,&local_60);
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8916633886415388456>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_150595479;
    }
  }
  bVar6 = false;
LAB_150595479:
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return false;
}

