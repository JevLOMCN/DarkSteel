// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 41

// StaticStruct @ 14a1fa500

UScriptStruct * __cdecl FControlRigOverrideContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigOverrideContainer,(UObject *)pUVar1,
                         L"ControlRigOverrideContainer");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.OuterSingleton;
}

// FControlRigOverrideContainer @ 14a21e3d0

FControlRigOverrideContainer * __thiscall
FControlRigOverrideContainer::FControlRigOverrideContainer
          (FControlRigOverrideContainer *this,FControlRigOverrideContainer *param_1)

{
  int *piVar1;
  TMap<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 *puVar2;
  int iVar3;
  FControlRigOverrideValue *pFVar4;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Values).ArrayNum;
  pFVar4 = (FControlRigOverrideValue *)(param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FControlRigOverrideValue,FControlRigOverrideValue,int>
              ((this->Values).AllocatorInstance.Data,pFVar4,iVar3);
  }
  this->bUsesKeyForSubject = param_1->bUsesKeyForSubject;
  *(undefined8 *)&(this->HashIndexLookup).field_0x0 = 0;
  *(undefined8 *)&(this->HashIndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->HashIndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->HashIndexLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HashIndexLookup).field_0x34 = 0;
  *(undefined8 *)&(this->HashIndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x48 = 0;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&this->HashIndexLookup,
              (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&param_1->HashIndexLookup);
  this_00 = &this->SubjectIndexLookup;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x20 = 0;
  puVar2 = &(this->SubjectIndexLookup).field_0x48;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->SubjectIndexLookup) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SubjectIndexLookup).field_0x38,(int *)puVar2
               ,(ForElementType<FSetElementId> *)&(param_1->SubjectIndexLookup).field_0x38,
               *(int *)&(param_1->SubjectIndexLookup).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SubjectIndexLookup);
  }
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x0 = 0;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x8 = 0;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x20 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x28 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x34 = 0;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x40 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x48 = 0;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsParentPathCache,
              (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&param_1->ContainsParentPathCache);
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x0 = 0;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x8 = 0;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x20 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x28 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x34 = 0;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x40 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x48 = 0;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsChildPathCache,
              (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&param_1->ContainsChildPathCache);
  return this;
}

// FControlRigOverrideContainer @ 14a21e570

FControlRigOverrideContainer * __thiscall
FControlRigOverrideContainer::FControlRigOverrideContainer(FControlRigOverrideContainer *this)

{
  this->bUsesKeyForSubject = true;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  *(undefined8 *)&this->HashIndexLookup = 0;
  *(undefined8 *)&(this->HashIndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->HashIndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->HashIndexLookup).field_0x34 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HashIndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->HashIndexLookup).field_0x48 = 0;
  *(undefined8 *)&this->SubjectIndexLookup = 0;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x34 = 0;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubjectIndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x48 = 0;
  *(undefined8 *)&this->ContainsParentPathCache = 0;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x8 = 0;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x20 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x28 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x34 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContainsParentPathCache).field_0x40 = 0;
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x48 = 0;
  *(undefined8 *)&this->ContainsChildPathCache = 0;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x8 = 0;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x20 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x28 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x34 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContainsChildPathCache).field_0x40 = 0;
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x48 = 0;
  return this;
}

// ~FControlRigOverrideContainer @ 14a2256d0

void __thiscall
FControlRigOverrideContainer::~FControlRigOverrideContainer(FControlRigOverrideContainer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ContainsChildPathCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainsChildPathCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainsChildPathCache);
  *(undefined4 *)&(this->ContainsParentPathCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainsParentPathCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainsParentPathCache);
  *(undefined4 *)&(this->SubjectIndexLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubjectIndexLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubjectIndexLookup);
  *(undefined4 *)&(this->HashIndexLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HashIndexLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashIndexLookup);
  DestructItems<FControlRigOverrideValue,int>
            ((FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data,
             (this->Values).ArrayNum);
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14a229030

FControlRigOverrideContainer * __thiscall
FControlRigOverrideContainer::operator=
          (FControlRigOverrideContainer *this,FControlRigOverrideContainer *param_1)

{
  int *piVar1;
  int iVar2;
  FControlRigOverrideValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FControlRigOverrideValue,int>
              ((FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data,
               (this->Values).ArrayNum);
    iVar2 = (param_1->Values).ArrayNum;
    piVar1 = &(this->Values).ArrayMax;
    pFVar3 = (FControlRigOverrideValue *)(param_1->Values).AllocatorInstance.Data;
    (this->Values).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FControlRigOverrideValue,FControlRigOverrideValue,int>
                ((this->Values).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  this->bUsesKeyForSubject = param_1->bUsesKeyForSubject;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&this->HashIndexLookup,
              (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&param_1->HashIndexLookup);
  if (&this->SubjectIndexLookup != &param_1->SubjectIndexLookup) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SubjectIndexLookup).field_0x38,
               (int *)&(this->SubjectIndexLookup).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SubjectIndexLookup).field_0x38,
               *(int *)&(param_1->SubjectIndexLookup).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SubjectIndexLookup,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SubjectIndexLookup);
  }
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsParentPathCache,
              (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&param_1->ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsChildPathCache,
              (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&param_1->ContainsChildPathCache);
  return this;
}

// Add @ 14a236ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FControlRigOverrideContainer::Add
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  TOptional<FName> *pTVar1;
  int *piVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FProperty *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FControlRigOverrideValue *pFVar13;
  uint uVar14;
  TOptional<FName>_u_0 *pTVar15;
  FName *pFVar16;
  longlong lVar17;
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,int_const_&> local_res18;
  uint local_68;
  int local_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  uint *local_50;
  int *local_48;
  
  if ((((*(int *)((longlong)&(param_1->Path).field0_0x0 + 0xc) != -1) &&
       (*(int *)((longlong)&(param_1->CachedStringValue).field0_0x0 + 0xc) != -1)) &&
      ((param_1->DataArray).ArrayNum != 0)) &&
     ((((param_1->DataArray).AllocatorInstance.Data != (FScriptContainerElement *)0x0 &&
       (pFVar9 = FControlRigOverrideValue::GetLeafProperty(param_1), pFVar9 != (FProperty *)0x0)) &&
      ((bVar6 = FControlRigOverrideValue::IsDataValid
                          (param_1,&param_1->DataArray,&param_1->DataPropertyHash), bVar6 &&
       (pFVar10 = FControlRigOverrideValue::GetPath(param_1), 1 < (pFVar10->Data).ArrayNum)))))) {
    pTVar1 = &param_1->SubjectKey;
    pFVar16 = &InvalidName;
    if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      pFVar16 = (FName *)pTVar1;
    }
    iVar7 = GetIndex(this,pFVar10,pFVar16);
    if ((iVar7 < 0) || ((this->Values).ArrayNum <= iVar7)) {
      pFVar16 = &InvalidName;
      if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar16 = (FName *)pTVar1;
      }
      bVar6 = ContainsParentPathOf(this,pFVar10,pFVar16);
      if (!bVar6) {
        pFVar16 = &InvalidName;
        if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
          pFVar16 = (FName *)pTVar1;
        }
        bVar6 = ContainsChildPathOf(this,pFVar10,pFVar16);
        if (bVar6) {
          iVar7 = (this->Values).ArrayNum;
          local_60.Data = (FScriptContainerElement *)0x0;
          local_58 = 0;
          local_68 = 0;
          if (0 < iVar7) {
            do {
              uVar14 = local_68;
              uVar8 = 0;
              if ((int)local_68 < iVar7) {
                uVar8 = ~local_68 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                iVar7 = (*pcVar5)();
                return iVar7;
              }
              pFVar11 = FControlRigOverrideValue::GetPath
                                  ((FControlRigOverrideValue *)
                                   ((this->Values).AllocatorInstance.Data +
                                   (longlong)(int)uVar14 * 0x58));
              bVar6 = IsChildPathOf(pFVar11,pFVar10);
              if (bVar6) {
                if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     local_60.Data + (longlong)local_58._4_4_ * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  iVar7 = (*pcVar5)();
                  return iVar7;
                }
                iVar7 = (int)local_58;
                if ((int)local_58 == local_58._4_4_) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_60,(int *)((longlong)&local_58 + 4));
                }
                local_58 = CONCAT44(local_58._4_4_,iVar7 + 1);
                *(uint *)(local_60.Data + (longlong)iVar7 * 4) = local_68;
              }
              iVar7 = (this->Values).ArrayNum;
              local_68 = local_68 + 1;
            } while ((int)local_68 < iVar7);
            if ((int)local_58 != 0) {
              uVar14 = (int)local_58 - 1;
              if (-1 < (int)uVar14) {
                lVar17 = (longlong)(int)uVar14 * 4;
                while( true ) {
                  uVar8 = 0;
                  if ((int)uVar14 < (int)local_58) {
                    uVar8 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    iVar7 = (*pcVar5)();
                    return iVar7;
                  }
                  TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                            (&this->Values,*(int *)(local_60.Data + lVar17),Default);
                  lVar17 = lVar17 + -4;
                  uVar14 = uVar14 - 1;
                  if ((int)uVar14 < 0) break;
                }
              }
              RebuildLookup(this);
            }
          }
          if (local_60.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data);
          }
        }
        pFVar13 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
        if (((pFVar13 <= param_1) && (param_1 < pFVar13 + (this->Values).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        local_64 = (this->Values).ArrayNum;
        piVar2 = &(this->Values).ArrayMax;
        if (local_64 == *piVar2) {
          local_64 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)this,piVar2);
        }
        (this->Values).ArrayNum = local_64 + 1;
        pFVar13 = (FControlRigOverrideValue *)
                  ((this->Values).AllocatorInstance.Data + (longlong)local_64 * 0x58);
        (pFVar13->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&(pFVar13->Path).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(pFVar13->Path).field0_0x0 + 0xc) = 0xffffffff;
        (pFVar13->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&(pFVar13->CachedStringValue).field0_0x0 + 8) = 0;
        *(undefined8 *)&(pFVar13->CachedStringValue).field0_0x0.TypedValue.Data.ArrayMax =
             0xffffffffffffffff;
        (pFVar13->SubjectKey).field0_0x0.TypedValue.Number = 0;
        (pFVar13->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Properties).ArrayNum = 0;
        (pFVar13->Properties).ArrayMax = 0;
        (pFVar13->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->DataArray).ArrayNum = 0;
        (pFVar13->DataArray).ArrayMax = 0;
        FControlRigOverrideValue::operator=(pFVar13,param_1);
        pTVar15 = (TOptional<FName>_u_0 *)&InvalidName;
        if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
          pTVar15 = &(param_1->SubjectKey).field0_0x0;
        }
        uVar14 = CityHash32((char *)(pFVar10->Data).AllocatorInstance.Data,
                            (pFVar10->Data).ArrayNum * 2);
        FVar3 = pTVar15->TypedValue;
        local_res10[0] = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        local_res10[0] = local_res10[0] + FVar3.Number;
        local_50 = local_res10;
        local_res10[0] =
             (local_res10[0] >> 2) + local_res10[0] * 0x40 + -0x61c88647 + uVar14 ^ local_res10[0];
        local_48 = &local_64;
        TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                  ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                    *)&this->HashIndexLookup,&local_res18,(bool *)&local_50);
        pFVar16 = &InvalidName;
        if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
          pFVar16 = (FName *)&param_1->SubjectKey;
        }
        FVar3 = *pFVar16;
        uVar14 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        pTVar12 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->SubjectIndexLookup,uVar14 + FVar3.Number,pFVar16);
        pFVar4 = (pTVar12->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_64) &&
            ((FScriptContainerElement *)&local_64 < pFVar4 + (longlong)pTVar12->ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        iVar7 = pTVar12->ArrayNum;
        if (iVar7 == pTVar12->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar7 + 1;
        *(int *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_64;
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                 *)&this->ContainsParentPathCache);
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                 *)&this->ContainsChildPathCache);
        return local_64;
      }
    }
  }
  return -1;
}

// AddStructReferencedObjects @ 14a23d0c0

void __thiscall
FControlRigOverrideContainer::AddStructReferencedObjects
          (FControlRigOverrideContainer *this,FReferenceCollector *param_1)

{
  int iVar1;
  FProperty *this_00;
  UClass *pUVar2;
  FWeakObjectPtr *pFVar3;
  FControlRigOverrideValue *this_01;
  FControlRigOverrideValue *pFVar4;
  UClass *local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  iVar1 = (this->Values).ArrayNum;
  this_01 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  pFVar4 = this_01 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar4) {
      return;
    }
    this_00 = FControlRigOverrideValue::GetRootProperty(this_01);
    if (this_00 != (FProperty *)0x0) {
      pUVar2 = FField::GetOwnerClass((FField *)this_00);
      if (pUVar2 == (UClass *)0x0) {
        pUVar2 = (UClass *)FField::GetOwnerStruct((FField *)this_00);
        if (pUVar2 != (UClass *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_res8 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
          pFVar3 = &local_res20;
          goto LAB_14a23d1c7;
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
        pFVar3 = &local_res18;
LAB_14a23d1c7:
        FReferenceCollector::AddReferencedObject(param_1,pFVar3,(UObject *)0x0,(FProperty *)0x0);
      }
      FControlRigOverrideValue::AddStructReferencedObjects(this_01,param_1);
    }
    this_01 = this_01 + 1;
  } while( true );
}

// Contains @ 14a247600

bool __thiscall
FControlRigOverrideContainer::Contains
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  
  pFVar3 = &InvalidName;
  if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar3 = (FName *)&param_1->SubjectKey;
  }
  pFVar2 = FControlRigOverrideValue::GetPath(param_1);
  iVar1 = GetIndex(this,pFVar2,pFVar3);
  if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
    return true;
  }
  return false;
}

// Contains @ 14a247660

bool __thiscall
FControlRigOverrideContainer::Contains
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  int iVar1;
  
  iVar1 = GetIndex(this,param_1,param_2);
  if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
    return true;
  }
  return false;
}

// ContainsAnyPathForSubject @ 14a247690

bool __thiscall
FControlRigOverrideContainer::ContainsAnyPathForSubject
          (FControlRigOverrideContainer *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SubjectIndexLookup).field_0x8 !=
      *(int *)&(this->SubjectIndexLookup).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SubjectIndexLookup).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SubjectIndexLookup).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SubjectIndexLookup).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->SubjectIndexLookup) == FVar1)
        goto LAB_14a24770b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->SubjectIndexLookup);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14a24770b:
  return iVar3 != -1;
}

// ContainsChildPathOf @ 14a247730

bool __thiscall
FControlRigOverrideContainer::ContainsChildPathOf
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FName *pFVar3;
  
  pFVar3 = &InvalidName;
  if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar3 = (FName *)&param_1->SubjectKey;
  }
  pFVar2 = FControlRigOverrideValue::GetPath(param_1);
  bVar1 = ContainsChildPathOf(this,pFVar2,pFVar3);
  return bVar1;
}

// ContainsChildPathOf @ 14a247780

bool __thiscall
FControlRigOverrideContainer::ContainsChildPathOf
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint *puVar6;
  uint *puVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  FControlRigOverrideValue *this_00;
  FControlRigOverrideValue *pFVar10;
  undefined1 local_res10 [8];
  uint local_res20 [2];
  TPairInitializer<unsigned_int_const_&,bool_&&> local_48;
  undefined1 *local_38;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 < 2) {
    return false;
  }
  uVar4 = CityHash32((char *)(param_1->Data).AllocatorInstance.Data,iVar1 * 2);
  FVar2 = *param_2;
  local_res20[0] = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  local_res20[0] = local_res20[0] + FVar2.Number;
  local_res20[0] =
       local_res20[0] * 0x40 + uVar4 + 0x9e3779b9 + (local_res20[0] >> 2) ^ local_res20[0];
  if (*(int *)&(this->ContainsChildPathCache).field_0x8 !=
      *(int *)&(this->ContainsChildPathCache).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ContainsChildPathCache).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ContainsChildPathCache).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->ContainsChildPathCache).field_0x48 - 1U &
                               local_res20[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this->ContainsChildPathCache);
        if (*puVar7 == local_res20[0]) {
          puVar6 = puVar7 + 1;
          if (puVar7 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            return (bool)(char)*puVar6;
          }
          break;
        }
        uVar4 = puVar7[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  this_00 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  iVar1 = (this->Values).ArrayNum;
  pFVar10 = this_00 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == pFVar10) {
      local_48.Value = (bool *)local_res20;
      local_res10[0] = 0;
      local_38 = local_res10;
      TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,bool_&&>_>
                ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                  *)&this->ContainsChildPathCache,&local_48,(bool *)&local_48.Value);
      return false;
    }
    if (this->bUsesKeyForSubject == false) {
LAB_14a2478a5:
      pFVar5 = FControlRigOverrideValue::GetPath(this_00);
      bVar3 = IsChildPathOf(pFVar5,param_1);
      if (bVar3) {
        local_48.Value = (bool *)local_res20;
        local_res10[0] = 1;
        local_38 = local_res10;
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,bool_&&>_>
                  ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                    *)&this->ContainsChildPathCache,&local_48,(bool *)&local_48.Value);
        return true;
      }
    }
    else {
      pFVar8 = &InvalidName;
      if ((this_00->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar8 = (FName *)&this_00->SubjectKey;
      }
      if (*pFVar8 == *param_2) goto LAB_14a2478a5;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ContainsParentPathOf @ 14a247980

bool __thiscall
FControlRigOverrideContainer::ContainsParentPathOf
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FName *pFVar3;
  
  pFVar3 = &InvalidName;
  if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar3 = (FName *)&param_1->SubjectKey;
  }
  pFVar2 = FControlRigOverrideValue::GetPath(param_1);
  bVar1 = ContainsParentPathOf(this,pFVar2,pFVar3);
  return bVar1;
}

// ContainsParentPathOf @ 14a2479d0

bool __thiscall
FControlRigOverrideContainer::ContainsParentPathOf
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  FName FVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [8];
  uint local_res20 [2];
  undefined1 local_48 [16];
  undefined8 local_38;
  uint *local_30;
  undefined1 *local_28;
  
  iVar6 = (param_1->Data).ArrayNum;
  if (iVar6 < 2) {
    return false;
  }
  uVar4 = CityHash32((char *)(param_1->Data).AllocatorInstance.Data,iVar6 * 2);
  FVar1 = *param_2;
  local_res20[0] = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  local_res20[0] = local_res20[0] + FVar1.Number;
  iVar6 = 0;
  local_res20[0] =
       local_res20[0] * 0x40 + uVar4 + 0x9e3779b9 + (local_res20[0] >> 2) ^ local_res20[0];
  if (*(int *)&(this->ContainsParentPathCache).field_0x8 !=
      *(int *)&(this->ContainsParentPathCache).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ContainsParentPathCache).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ContainsParentPathCache).field_0x38;
    }
    uVar4 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->ContainsParentPathCache).field_0x48 - 1U & local_res20[0]) * 4
                     );
    if (uVar4 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar4 * 0x10 +
                         *(longlong *)&(this->ContainsParentPathCache).field_0x0);
        if (*puVar9 == local_res20[0]) {
          puVar7 = puVar9 + 1;
          if (puVar9 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            return (bool)(char)*puVar7;
          }
          break;
        }
        uVar4 = puVar9[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  pwVar12 = L"";
  if (FControlRigOverrideValue::PathSeparator.Data.ArrayNum != 0) {
    pwVar12 = (wchar_t *)FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance;
  }
  iVar13 = 0;
  iVar14 = FControlRigOverrideValue::PathSeparator.Data.ArrayNum + -1;
  if (FControlRigOverrideValue::PathSeparator.Data.ArrayNum == 0) {
    iVar14 = iVar13;
  }
  iVar5 = ::FString::Find(param_1,pwVar12,iVar14,CaseSensitive,FromEnd,-1);
  pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar14 = (param_1->Data).ArrayNum;
  pFVar10 = (FScriptContainerElement *)((longlong)pwVar12 + (longlong)iVar14 * 2);
  do {
    iVar15 = iVar5;
    if (pFVar10 == (FScriptContainerElement *)pwVar12) goto LAB_14a247b22;
    pFVar10 = pFVar10 + -2;
  } while (*(short *)pFVar10 != 0x5b);
  iVar8 = (int)((longlong)pFVar10 - (longlong)pwVar12 >> 1);
  if ((iVar8 != -1) && (iVar15 = iVar8, iVar8 < iVar5)) {
    iVar15 = iVar5;
  }
LAB_14a247b22:
  if (iVar15 == -1) {
    local_48._8_8_ = (bool *)0x0;
    local_38 = 0;
  }
  else {
    if (iVar14 == 0) {
      pwVar12 = L"";
      iVar6 = iVar13;
      if (iVar15 < 0) {
        iVar6 = iVar15;
      }
    }
    else {
      iVar6 = iVar14 + -1;
      if (iVar15 < iVar14 + -1) {
        iVar6 = iVar15;
      }
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::ConstructFromPtrSize((FString *)(local_48 + 8),pwVar12,iVar13);
    iVar6 = (int)local_38;
  }
  if ((iVar6 < 2) ||
     (((iVar6 = GetIndex(this,(FString *)(local_48 + 8),param_2), iVar6 < 0 ||
       ((this->Values).ArrayNum <= iVar6)) &&
      (bVar3 = ContainsParentPathOf(this,(FString *)(local_48 + 8),param_2), !bVar3)))) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = 1;
  }
  local_30 = local_res20;
  local_28 = local_res10;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,bool_const_&>_>
            ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)&this->ContainsParentPathCache,
             (TPairInitializer<unsigned_int_const_&,bool_const_&> *)local_48,(bool *)&local_30);
  uVar2 = local_res10[0];
  if ((bool *)local_48._8_8_ != (bool *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  return (bool)uVar2;
}

// ContainsPathForAnySubject @ 14a247c20

bool __thiscall
FControlRigOverrideContainer::ContainsPathForAnySubject
          (FControlRigOverrideContainer *this,FString *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Values).ArrayNum;
  pFVar6 = (this->Values).AllocatorInstance.Data;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x58;
  while( true ) {
    if ((this->Values).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      return false;
    }
    if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FControlRigOverrideValue::GetPath'::__l2::_dynamic_atexit_destructor_for__EmptyPath__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    iVar4 = (param_1->Data).ArrayNum;
    pFVar5 = (FScriptContainerElement *)&EmptyPath;
    if (*(int *)(pFVar6 + 0xc) != -1) {
      pFVar5 = pFVar6;
    }
    iVar3 = *(int *)(pFVar5 + 8);
    if (iVar3 == iVar4) {
      if (iVar3 < 2) {
        return true;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
    else {
      bVar8 = iVar3 + iVar4 == 1;
    }
    if (bVar8) break;
    pFVar6 = pFVar6 + 0x58;
  }
  return true;
}

// CopyToSubject @ 14a249c00

void __thiscall
FControlRigOverrideContainer::CopyToSubject
          (FControlRigOverrideContainer *this,void *param_1,UStruct *param_2,FName *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FProperty *this_00;
  UStruct *pUVar3;
  uchar *puVar4;
  FName *pFVar5;
  FControlRigOverrideValue *this_01;
  FControlRigOverrideValue *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Values).ArrayNum;
  this_01 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  pFVar6 = this_01 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_01 == pFVar6) {
      return;
    }
    if (this->bUsesKeyForSubject == false) {
LAB_14a249c6d:
      if (param_2 != (UStruct *)0x0) {
        this_00 = FControlRigOverrideValue::GetRootProperty(this_01);
        if (this_00 != (FProperty *)0x0) {
          pUVar3 = FField::GetOwnerStruct((FField *)this_00);
          if (pUVar3 != param_2) goto LAB_14a249cbc;
        }
      }
      if (((this_01->DataArray).ArrayNum != 0) &&
         (pFVar2 = (this_01->DataArray).AllocatorInstance.Data,
         pFVar2 != (FScriptContainerElement *)0x0)) {
        puVar4 = FControlRigOverrideValue::SubjectPtrToValuePtr(this_01,param_1,true);
        if (puVar4 != (uchar *)0x0) {
          FControlRigOverrideValue::CopyValue(this_01,puVar4,pFVar2);
        }
      }
    }
    else {
      pFVar5 = &InvalidName;
      if ((this_01->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar5 = (FName *)&this_01->SubjectKey;
      }
      if (*pFVar5 == *param_3) goto LAB_14a249c6d;
    }
LAB_14a249cbc:
    this_01 = this_01 + 1;
  } while( true );
}

// CopyToUObject @ 14a249d80

void __thiscall
FControlRigOverrideContainer::CopyToUObject(FControlRigOverrideContainer *this,UObject *param_1)

{
  int iVar1;
  FName FVar2;
  UStruct *pUVar3;
  FScriptContainerElement *pFVar4;
  FProperty *this_00;
  UStruct *pUVar5;
  uchar *puVar6;
  FName *pFVar7;
  FControlRigOverrideValue *this_01;
  FControlRigOverrideValue *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Values).ArrayNum;
  this_01 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  FVar2.Number = *(uint *)&param_1->field_0x1c;
  pUVar3 = *(UStruct **)&param_1->field_0x10;
  pFVar8 = this_01 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_01 == pFVar8) {
      return;
    }
    if (this->bUsesKeyForSubject == false) {
LAB_14a249dec:
      if (pUVar3 != (UStruct *)0x0) {
        this_00 = FControlRigOverrideValue::GetRootProperty(this_01);
        if (this_00 != (FProperty *)0x0) {
          pUVar5 = FField::GetOwnerStruct((FField *)this_00);
          if (pUVar5 != pUVar3) goto LAB_14a249e3b;
        }
      }
      if (((this_01->DataArray).ArrayNum != 0) &&
         (pFVar4 = (this_01->DataArray).AllocatorInstance.Data,
         pFVar4 != (FScriptContainerElement *)0x0)) {
        puVar6 = FControlRigOverrideValue::SubjectPtrToValuePtr(this_01,param_1,true);
        if (puVar6 != (uchar *)0x0) {
          FControlRigOverrideValue::CopyValue(this_01,puVar6,pFVar4);
        }
      }
    }
    else {
      pFVar7 = &InvalidName;
      if ((this_01->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar7 = (FName *)&this_01->SubjectKey;
      }
      if (*pFVar7 == FVar2) goto LAB_14a249dec;
    }
LAB_14a249e3b:
    this_01 = this_01 + 1;
  } while( true );
}

// Empty @ 14a251a20

void __thiscall FControlRigOverrideContainer::Empty(FControlRigOverrideContainer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  DestructItems<FControlRigOverrideValue,int>
            ((FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data,
             (this->Values).ArrayNum);
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->HashIndexLookup).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                      *)&this->HashIndexLookup);
  }
  puVar2 = &(this->HashIndexLookup).field_0xc;
  *(undefined4 *)&(this->HashIndexLookup).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->HashIndexLookup,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->HashIndexLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HashIndexLookup).field_0x34 = 0;
  iVar3 = *(int *)&(this->HashIndexLookup).field_0x2c;
  *(undefined4 *)&(this->HashIndexLookup).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->HashIndexLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->HashIndexLookup).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->HashIndexLookup).field_0x48 = 1;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)&this->HashIndexLookup);
  }
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->SubjectIndexLookup);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsChildPathCache);
  return;
}

// Find @ 14a25a7c0

FControlRigOverrideValue * __thiscall
FControlRigOverrideContainer::Find
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FControlRigOverrideValue *pFVar4;
  
  iVar3 = GetIndex(this,param_1,param_2);
  if ((-1 < iVar3) && (iVar3 < (this->Values).ArrayNum)) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FControlRigOverrideValue *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FControlRigOverrideValue *)
           ((this->Values).AllocatorInstance.Data + (longlong)iVar3 * 0x58);
  }
  return (FControlRigOverrideValue *)0x0;
}

// Find @ 14a25a840

FControlRigOverrideValue * __thiscall
FControlRigOverrideContainer::Find
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FControlRigOverrideValue *pFVar4;
  
  iVar3 = GetIndex(this,param_1,param_2);
  if ((-1 < iVar3) && (iVar3 < (this->Values).ArrayNum)) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FControlRigOverrideValue *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FControlRigOverrideValue *)
           ((this->Values).AllocatorInstance.Data + (longlong)iVar3 * 0x58);
  }
  return (FControlRigOverrideValue *)0x0;
}

// FindChecked @ 14a25a980

FControlRigOverrideValue * __thiscall
FControlRigOverrideContainer::FindChecked
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FControlRigOverrideValue *pFVar6;
  
  uVar4 = GetIndex(this,param_1,param_2);
  piVar1 = &(this->Values).ArrayNum;
  if ((((int)uVar4 < 0) || (*piVar1 <= (int)uVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                         ,0x537,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
    return pFVar6;
  }
  uVar5 = 0;
  if ((int)uVar4 < *piVar1) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
    return pFVar6;
  }
  return (FControlRigOverrideValue *)
         ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x58);
}

// FindChecked @ 14a25aa40

FControlRigOverrideValue * __thiscall
FControlRigOverrideContainer::FindChecked
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FControlRigOverrideValue *pFVar6;
  
  uVar4 = GetIndex(this,param_1,param_2);
  piVar1 = &(this->Values).ArrayNum;
  if ((((int)uVar4 < 0) || (*piVar1 <= (int)uVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
    return pFVar6;
  }
  uVar5 = 0;
  if ((int)uVar4 < *piVar1) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
    return pFVar6;
  }
  return (FControlRigOverrideValue *)
         ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x58);
}

// FindOrAdd @ 14a25be80

FControlRigOverrideValue * __thiscall
FControlRigOverrideContainer::FindOrAdd
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FControlRigOverrideValue *pFVar6;
  FName *pFVar7;
  
  pFVar5 = FControlRigOverrideValue::GetPath(param_1);
  if (1 < (pFVar5->Data).ArrayNum) {
    pFVar7 = &InvalidName;
    if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      pFVar7 = (FName *)&param_1->SubjectKey;
    }
    iVar4 = GetIndex(this,pFVar5,pFVar7);
    piVar1 = &(this->Values).ArrayNum;
    if ((-1 < iVar4) && (iVar4 < *piVar1)) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
        return pFVar6;
      }
      pFVar6 = (FControlRigOverrideValue *)
               ((this->Values).AllocatorInstance.Data + (longlong)iVar4 * 0x58);
      if (pFVar6 != (FControlRigOverrideValue *)0x0) {
        FControlRigOverrideValue::operator=(pFVar6,param_1);
        return pFVar6;
      }
    }
    iVar4 = Add(this,param_1);
    if ((-1 < iVar4) && (iVar4 < *piVar1)) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigOverrideValue *)(*pcVar2)();
        return pFVar6;
      }
      return (FControlRigOverrideValue *)
             ((this->Values).AllocatorInstance.Data + (longlong)iVar4 * 0x58);
    }
  }
  return (FControlRigOverrideValue *)0x0;
}

// GenerateSubjectArray @ 14a25d870

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigOverrideContainer::GenerateSubjectArray
          (FControlRigOverrideContainer *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->SubjectIndexLookup,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetIndex @ 14a2644d0

int __thiscall
FControlRigOverrideContainer::GetIndex
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  
  uVar2 = CityHash32((char *)(param_1->Data).AllocatorInstance.Data,(param_1->Data).ArrayNum * 2);
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar1.Number;
  uVar3 = uVar3 * 0x40 + uVar2 + 0x9e3779b9 + (uVar3 >> 2) ^ uVar3;
  if (*(int *)&(this->HashIndexLookup).field_0x8 != *(int *)&(this->HashIndexLookup).field_0x34) {
    puVar6 = *(undefined1 **)&(this->HashIndexLookup).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->HashIndexLookup).field_0x38;
    }
    uVar2 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->HashIndexLookup).field_0x48 - 1U & uVar3)
                               * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar2 * 0x10 + *(longlong *)&this->HashIndexLookup);
        if (*puVar4 == uVar3) {
          puVar5 = puVar4 + 1;
          if (puVar4 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 == (uint *)0x0) {
            return -1;
          }
          return *puVar5;
        }
        uVar2 = puVar4[2];
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// GetIndicesForSubject @ 14a2646f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigOverrideContainer::GetIndicesForSubject
          (FControlRigOverrideContainer *this,FName *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SubjectIndexLookup,*param_1);
  return pTVar1;
}

// GetParentPath @ 14a266d40

FString * __cdecl
FControlRigOverrideContainer::GetParentPath(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pwVar4 = L"";
  if (FControlRigOverrideValue::PathSeparator.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data;
  }
  iVar5 = 0;
  iVar6 = FControlRigOverrideValue::PathSeparator.Data.ArrayNum + -1;
  if (FControlRigOverrideValue::PathSeparator.Data.ArrayNum == 0) {
    iVar6 = iVar5;
  }
  iVar1 = ::FString::Find(param_1,pwVar4,iVar6,CaseSensitive,FromEnd,-1);
  pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar6 = (param_1->Data).ArrayNum;
  pFVar3 = (FScriptContainerElement *)((longlong)pwVar4 + (longlong)iVar6 * 2);
  do {
    iVar7 = iVar1;
    if (pFVar3 == (FScriptContainerElement *)pwVar4) goto LAB_14a266dca;
    pFVar3 = pFVar3 + -2;
  } while (*(short *)pFVar3 != 0x5b);
  iVar2 = (int)((longlong)pFVar3 - (longlong)pwVar4 >> 1);
  if ((iVar2 != -1) && (iVar7 = iVar2, iVar2 < iVar1)) {
    iVar7 = iVar1;
  }
LAB_14a266dca:
  if (iVar7 == -1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (iVar6 == 0) {
    pwVar4 = L"";
    iVar1 = iVar5;
    if (iVar7 < 0) {
      iVar1 = iVar7;
    }
  }
  else {
    iVar1 = iVar6 + -1;
    if (iVar7 < iVar6 + -1) {
      iVar1 = iVar7;
    }
  }
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pwVar4,iVar5);
  return __return_storage_ptr__;
}

// Identical @ 14a26ff40

bool __thiscall
FControlRigOverrideContainer::Identical
          (FControlRigOverrideContainer *this,FControlRigOverrideContainer *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  FControlRigOverrideValue *this_00;
  longlong lVar8;
  int iVar9;
  
  if ((param_1 == (FControlRigOverrideContainer *)0x0) ||
     (iVar9 = (this->Values).ArrayNum, iVar9 != (param_1->Values).ArrayNum)) {
LAB_14a270062:
    bVar3 = false;
  }
  else {
    uVar7 = 0;
    if (0 < iVar9) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar9) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        this_00 = (FControlRigOverrideValue *)((this->Values).AllocatorInstance.Data + lVar8);
        uVar5 = 0;
        if ((int)uVar7 < (param_1->Values).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar1 = (param_1->Values).AllocatorInstance.Data;
        if (this_00->Hash != *(uint *)(pFVar1 + lVar8 + 0x28)) goto LAB_14a270062;
        if (*(int *)(pFVar1 + lVar8 + 0x48) == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = *(void **)(pFVar1 + lVar8 + 0x40);
        }
        bVar3 = FControlRigOverrideValue::IdenticalValue(this_00,pvVar6);
        if (!bVar3) goto LAB_14a270062;
        iVar9 = (this->Values).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x58;
      } while ((int)uVar7 < iVar9);
    }
    bVar3 = true;
  }
  return bVar3;
}

// InvalidateCache @ 14a273860

void __thiscall FControlRigOverrideContainer::InvalidateCache(FControlRigOverrideContainer *this)

{
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsChildPathCache);
  return;
}

// IsChildPathOf @ 14a273dd0

bool __cdecl FControlRigOverrideContainer::IsChildPathOf(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (1 < iVar7) {
    iVar5 = (param_2->Data).ArrayNum;
    iVar7 = iVar7 + -1;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if (iVar6 + 2 < iVar7) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      iVar5 = iVar7;
      if (iVar6 < iVar7) {
        iVar5 = iVar6;
      }
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = iVar5;
      }
      if ((iVar6 == iVar8) &&
         ((((iVar6 == 0 || (iVar8 == 0)) ||
           (iVar5 = FGenericPlatformStricmp::Strnicmp
                              ((wchar_t *)(param_2->Data).AllocatorInstance.Data,(wchar_t *)pFVar1,
                               (longlong)iVar8), iVar5 == 0)) && (iVar6 == iVar8)))) {
        iVar5 = (param_2->Data).ArrayNum;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        if (((iVar6 < 0) || (iVar7 <= iVar6)) &&
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
        if (*(short *)(pFVar1 + (longlong)iVar6 * 2) != 0x5b) {
          iVar5 = (param_2->Data).ArrayNum;
          iVar6 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          iVar5 = 0;
          if (iVar6 < 0) {
            iVar5 = iVar6;
          }
          iVar8 = iVar6 - iVar5;
          if (iVar7 < iVar6 - iVar5) {
            iVar8 = iVar7;
          }
          iVar6 = iVar7 - iVar8;
          if (iVar5 + 2 < iVar7 - iVar8) {
            iVar6 = iVar5 + 2;
          }
          iVar7 = 0;
          if (0 < iVar6) {
            iVar7 = iVar6;
          }
          iVar6 = FControlRigOverrideValue::PathSeparator.Data.ArrayNum + -1;
          if (FControlRigOverrideValue::PathSeparator.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          if (iVar7 != iVar6) {
            return false;
          }
          if (((iVar7 != 0) && (iVar6 != 0)) &&
             (iVar5 = FGenericPlatformStricmp::Strnicmp
                                ((wchar_t *)(pFVar1 + (longlong)iVar8 * 2),
                                 (wchar_t *)
                                 FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data
                                 ,(longlong)iVar6), iVar5 != 0)) {
            return false;
          }
          if (iVar7 != iVar6) {
            return false;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// RebuildLookup @ 14a27dc80

void __thiscall FControlRigOverrideContainer::RebuildLookup(FControlRigOverrideContainer *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FProperty *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FControlRigOverrideValue *this_00;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  uint local_res8 [4];
  uint local_58 [2];
  uint *local_50;
  uint *local_48;
  
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
           *)&this->HashIndexLookup);
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
             *)&this->HashIndexLookup,(this->Values).ArrayNum);
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->SubjectIndexLookup);
  iVar6 = (this->Values).ArrayNum;
  local_58[0] = 0;
  if (0 < iVar6) {
    do {
      uVar5 = local_58[0];
      uVar4 = 0;
      if ((int)local_58[0] < iVar6) {
        uVar4 = ~local_58[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FControlRigOverrideValue *)
                ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58);
      if ((((*(int *)((longlong)&(this_00->Path).field0_0x0 + 0xc) != -1) &&
           (*(int *)((longlong)&(this_00->CachedStringValue).field0_0x0 + 0xc) != -1)) &&
          ((this_00->DataArray).ArrayNum != 0)) &&
         ((((this_00->DataArray).AllocatorInstance.Data != (FScriptContainerElement *)0x0 &&
           (pFVar7 = FControlRigOverrideValue::GetLeafProperty(this_00), pFVar7 != (FProperty *)0x0)
           ) && (bVar3 = FControlRigOverrideValue::IsDataValid
                                   (this_00,&this_00->DataArray,&this_00->DataPropertyHash), bVar3))
         )) {
        lVar9 = (longlong)(int)local_58[0];
        uVar5 = 0;
        if ((int)local_58[0] < (this->Values).ArrayNum) {
          uVar5 = ~local_58[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->Values).AllocatorInstance.Data + lVar9 * 0x58;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`FControlRigOverrideValue::GetPath'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPath__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar12 = (FScriptContainerElement *)&EmptyPath;
        if (*(int *)(pFVar10 + 0xc) != -1) {
          pFVar12 = pFVar10;
        }
        if (1 < *(int *)(pFVar12 + 8)) {
          lVar9 = (longlong)(int)local_58[0];
          uVar5 = 0;
          if ((int)local_58[0] < (this->Values).ArrayNum) {
            uVar5 = ~local_58[0] >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar13 = (FName *)((this->Values).AllocatorInstance.Data + lVar9 * 0x58 + 0x20);
          pFVar11 = &InvalidName;
          if ((pFVar13->ComparisonIndex).Value != 0xffffffff) {
            pFVar11 = pFVar13;
          }
          uVar5 = CityHash32(*(char **)&pFVar12->field_0x0,*(int *)(pFVar12 + 8) * 2);
          FVar1 = *pFVar11;
          local_res8[0] = ::GetTypeHash(FVar1.ComparisonIndex.Value);
          local_res8[0] = local_res8[0] + FVar1.Number;
          local_50 = local_res8;
          local_res8[0] =
               (local_res8[0] >> 2) + local_res8[0] * 0x40 + -0x61c88647 + uVar5 ^ local_res8[0];
          local_48 = local_58;
          TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                    ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                      *)&this->HashIndexLookup,
                     (TPairInitializer<unsigned_int_const_&,int_const_&> *)(local_res8 + 2),
                     (bool *)&local_50);
          lVar9 = (longlong)(int)local_58[0];
          uVar5 = 0;
          if ((int)local_58[0] < (this->Values).ArrayNum) {
            uVar5 = ~local_58[0] >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar13 = (FName *)((this->Values).AllocatorInstance.Data + lVar9 * 0x58 + 0x20);
          pFVar11 = &InvalidName;
          if ((pFVar13->ComparisonIndex).Value != 0xffffffff) {
            pFVar11 = pFVar13;
          }
          FVar1 = *pFVar11;
          uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
          pTVar8 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindOrAddImpl<FName_const_&>
                             ((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                               *)&this->SubjectIndexLookup,uVar5 + FVar1.Number,pFVar11);
          pFVar10 = (pTVar8->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 < pFVar10 + (longlong)pTVar8->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = pTVar8->ArrayNum;
          if (iVar6 == pTVar8->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
          }
          pTVar8->ArrayNum = iVar6 + 1;
          *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_58[0];
        }
      }
      iVar6 = (this->Values).ArrayNum;
      local_58[0] = local_58[0] + 1;
    } while ((int)local_58[0] < iVar6);
  }
  return;
}

// Remove @ 14a283ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FControlRigOverrideContainer::Remove
          (FControlRigOverrideContainer *this,FControlRigOverrideValue *param_1)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  
  pFVar3 = &InvalidName;
  if ((param_1->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar3 = (FName *)&param_1->SubjectKey;
  }
  pFVar2 = FControlRigOverrideValue::GetPath(param_1);
  iVar1 = GetIndex(this,pFVar2,pFVar3);
  if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
    TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Values,iVar1,Default);
    RebuildLookup(this);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsParentPathCache);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsChildPathCache);
    return true;
  }
  return false;
}

// Remove @ 14a283d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FControlRigOverrideContainer::Remove
          (FControlRigOverrideContainer *this,FString *param_1,FName *param_2)

{
  int iVar1;
  
  iVar1 = GetIndex(this,param_1,param_2);
  if ((-1 < iVar1) && (iVar1 < (this->Values).ArrayNum)) {
    TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Values,iVar1,Default);
    RebuildLookup(this);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsParentPathCache);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsChildPathCache);
    return true;
  }
  return false;
}

// RemoveAll @ 14a283dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FControlRigOverrideContainer::RemoveAll(FControlRigOverrideContainer *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((this->Values).ArrayNum != 0) {
    if (*param_1 == (FName)0x0) {
      Reset(this);
      return true;
    }
    pTVar5 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->SubjectIndexLookup,*param_1);
    if (pTVar5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar6 = pTVar5->ArrayNum - 1;
      if (-1 < (int)uVar6) {
        lVar7 = (longlong)(int)uVar6 * 4;
        do {
          uVar4 = 0;
          if ((int)uVar6 < pTVar5->ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Values,*(int *)((pTVar5->AllocatorInstance).Data + lVar7),Default);
          lVar7 = lVar7 + -4;
          uVar6 = uVar6 - 1;
        } while (-1 < (int)uVar6);
      }
      RebuildLookup(this);
      TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsParentPathCache);
      TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this->ContainsChildPathCache);
      return true;
    }
  }
  return false;
}

// Reserve @ 14a2888b0

void __thiscall
FControlRigOverrideContainer::Reserve(FControlRigOverrideContainer *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->Values).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_1,(ForAnyElementType *)this,(this->Values).ArrayNum,
                 &(this->Values).ArrayMax);
    }
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&this->HashIndexLookup,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14a289170

void __thiscall FControlRigOverrideContainer::Reset(FControlRigOverrideContainer *this)

{
  int *piVar1;
  int iVar2;
  FControlRigOverrideValue *pFVar3;
  
  piVar1 = &(this->Values).ArrayMax;
  pFVar3 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  iVar2 = (this->Values).ArrayNum;
  if ((this->Values).ArrayMax < 0) {
    DestructItems<FControlRigOverrideValue,int>(pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FControlRigOverrideValue,int>(pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
  }
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
           *)&this->HashIndexLookup);
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->SubjectIndexLookup);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsChildPathCache);
  return;
}

// Serialize @ 14a28d9d0

bool __thiscall
FControlRigOverrideContainer::Serialize(FControlRigOverrideContainer *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->bUsesKeyForSubject);
  TArrayPrivateFriend::Serialize<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>
            (param_1,&this->Values);
  if ((param_1->field_0x28 & 1) != 0) {
    RebuildLookup(this);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsParentPathCache);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&this->ContainsChildPathCache);
  }
  return true;
}

// SetFromSubject @ 14a2930e0

void __thiscall
FControlRigOverrideContainer::SetFromSubject
          (FControlRigOverrideContainer *this,void *param_1,UStruct *param_2,FName *param_3)

{
  int iVar1;
  FName *pFVar2;
  FControlRigOverrideValue *this_00;
  FControlRigOverrideValue *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Values).ArrayNum;
  this_00 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) {
      return;
    }
    if (this->bUsesKeyForSubject == false) {
LAB_14a293152:
      FControlRigOverrideValue::SetFromSubject(this_00,param_1,param_2);
    }
    else {
      pFVar2 = &InvalidName;
      if ((this_00->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar2 = (FName *)&this_00->SubjectKey;
      }
      if (*pFVar2 == *param_3) goto LAB_14a293152;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// SetFromUObject @ 14a293b80

void __thiscall
FControlRigOverrideContainer::SetFromUObject(FControlRigOverrideContainer *this,UObject *param_1)

{
  int iVar1;
  FName FVar2;
  UStruct *pUVar3;
  FName *pFVar4;
  FControlRigOverrideValue *pFVar5;
  FControlRigOverrideValue *this_00;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Values).ArrayNum;
  this_00 = (FControlRigOverrideValue *)(this->Values).AllocatorInstance.Data;
  FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  FVar2.Number = *(uint *)&param_1->field_0x1c;
  pUVar3 = *(UStruct **)&param_1->field_0x10;
  pFVar5 = this_00 + iVar1;
  do {
    if ((this->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar5) {
      return;
    }
    if (this->bUsesKeyForSubject == false) {
LAB_14a293bef:
      FControlRigOverrideValue::SetFromSubject(this_00,param_1,pUVar3);
    }
    else {
      pFVar4 = &InvalidName;
      if ((this_00->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar4 = (FName *)&this_00->SubjectKey;
      }
      if (*pFVar4 == FVar2) goto LAB_14a293bef;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// SetUsesKeyForSubject @ 14a295b10

void __thiscall
FControlRigOverrideContainer::SetUsesKeyForSubject(FControlRigOverrideContainer *this,bool param_1)

{
  this->bUsesKeyForSubject = param_1;
  RebuildLookup(this);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->ContainsChildPathCache);
  return;
}

// UsesKeyForSubject @ 14a2a6af0

bool __thiscall FControlRigOverrideContainer::UsesKeyForSubject(FControlRigOverrideContainer *this)

{
  return this->bUsesKeyForSubject;
}

