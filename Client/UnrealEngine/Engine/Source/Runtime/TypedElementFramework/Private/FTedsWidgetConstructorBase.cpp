// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// StaticStruct @ 142c861a0

UScriptStruct * __cdecl FTedsWidgetConstructorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTedsWidgetConstructorBase,(UObject *)pUVar1,
                         L"TedsWidgetConstructorBase");
  }
  return Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.OuterSingleton;
}

// Initialize @ 142c86210

bool __thiscall
FTedsWidgetConstructorBase::Initialize
          (FTedsWidgetConstructorBase *this,FMetaDataView *param_1,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  this->WidgetFactoryRow = param_3;
  local_18.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18.ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  bVar2 = Initialize_Internal(this,param_1,&local_18);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// GetTypeInfo @ 142c86270

UScriptStruct * __thiscall FTedsWidgetConstructorBase::GetTypeInfo(FTedsWidgetConstructorBase *this)

{
  return this->TypeInfo;
}

// GetMatchedColumns @ 142c86280

TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FTedsWidgetConstructorBase::GetMatchedColumns(FTedsWidgetConstructorBase *this)

{
  return &this->MatchedColumnTypes;
}

// GetQueryConditions @ 142c86290

FConditions * __thiscall
FTedsWidgetConstructorBase::GetQueryConditions
          (FTedsWidgetConstructorBase *this,ICoreProvider *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  UPackage *pUVar3;
  FConditions *pFVar4;
  
  uVar1 = this->WidgetFactoryRow;
  pcVar2 = *(code **)((longlong)*param_1 + 0xe8);
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn,(UObject *)pUVar3,
                         L"WidgetFactoryConditionsColumn");
  }
  pFVar4 = (FConditions *)
           (*pcVar2)(param_1,uVar1,
                     Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton
                    );
  if (pFVar4 == (FConditions *)0x0) {
    pFVar4 = this->QueryConditions;
  }
  return pFVar4;
}

// FTedsWidgetConstructorBase @ 142c98860

FTedsWidgetConstructorBase * __thiscall
FTedsWidgetConstructorBase::FTedsWidgetConstructorBase
          (FTedsWidgetConstructorBase *this,UScriptStruct *param_1)

{
  this->_padding_ = (longlong)&___7FTedsWidgetConstructorBase__6B_;
  (this->MatchedColumnTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchedColumnTypes).ArrayNum = 0;
  (this->MatchedColumnTypes).ArrayMax = 0;
  *(undefined8 *)&this->MatchedDynamicTemplates = 0;
  *(undefined8 *)&(this->MatchedDynamicTemplates).field_0x8 = 0;
  *(undefined8 *)&(this->MatchedDynamicTemplates).field_0x20 = 0;
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x28 = 0;
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x2c = 0x80;
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x34 = 0;
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MatchedDynamicTemplates).field_0x40 = 0;
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x48 = 0;
  this->WidgetFactoryRow = 0;
  this->QueryConditions = (FConditions *)0x0;
  this->TypeInfo = param_1;
  return this;
}

// ~FTedsWidgetConstructorBase @ 142c9a6a0

void __thiscall
FTedsWidgetConstructorBase::~FTedsWidgetConstructorBase(FTedsWidgetConstructorBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MatchedDynamicTemplates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MatchedDynamicTemplates);
  pFVar2 = (this->MatchedColumnTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 142c9c1a0

FTedsWidgetConstructorBase * __thiscall
FTedsWidgetConstructorBase::operator=
          (FTedsWidgetConstructorBase *this,FTedsWidgetConstructorBase *param_1)

{
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
  *this_00;
  undefined1 *puVar3;
  undefined1 *this_01;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->MatchedColumnTypes;
  if (pTVar1 != &param_1->MatchedColumnTypes) {
    iVar4 = (param_1->MatchedColumnTypes).ArrayNum;
    piVar2 = &(this->MatchedColumnTypes).ArrayMax;
    _Src = (param_1->MatchedColumnTypes).AllocatorInstance.Data;
    (this->MatchedColumnTypes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this_00 = &this->MatchedDynamicTemplates;
  if (this_00 != &param_1->MatchedDynamicTemplates) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MatchedDynamicTemplates).field_0x38,
               (int *)&(this->MatchedDynamicTemplates).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->MatchedDynamicTemplates).field_0x38,
               *(int *)&(param_1->MatchedDynamicTemplates).field_0x48);
    iVar4 = *(int *)&(param_1->MatchedDynamicTemplates).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar4);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar4,(ForAnyElementType *)this_00,
               (int *)&(this->MatchedDynamicTemplates).field_0x8,
               (int *)&(this->MatchedDynamicTemplates).field_0xc);
    puVar3 = &(param_1->MatchedDynamicTemplates).field_0x10;
    this_01 = &(this->MatchedDynamicTemplates).field_0x10;
    *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x30 =
         *(undefined4 *)&(param_1->MatchedDynamicTemplates).field_0x30;
    *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x34 =
         *(undefined4 *)&(param_1->MatchedDynamicTemplates).field_0x34;
    if (this_01 != puVar3) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
    }
    if (iVar4 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->MatchedDynamicTemplates,(longlong)iVar4 * 0x18);
    }
  }
  this->WidgetFactoryRow = param_1->WidgetFactoryRow;
  this->QueryConditions = param_1->QueryConditions;
  this->TypeInfo = param_1->TypeInfo;
  return this;
}

// Initialize_Internal @ 142caf540

/* WARNING: Removing unreachable block (ram,0x000142caf5eb) */
/* WARNING: Removing unreachable block (ram,0x000142caf5fc) */
/* WARNING: Removing unreachable block (ram,0x000142caf612) */
/* WARNING: Removing unreachable block (ram,0x000142caf61f) */
/* WARNING: Removing unreachable block (ram,0x000142caf621) */

bool __thiscall
FTedsWidgetConstructorBase::Initialize_Internal
          (FTedsWidgetConstructorBase *this,FMetaDataView *param_1,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->MatchedColumnTypes;
  if (pTVar1 != param_2) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MatchedColumnTypes).ArrayNum = param_2->ArrayNum;
    (this->MatchedColumnTypes).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  this_00 = (FWeakObjectPtr *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->MatchedColumnTypes).ArrayNum;
  pFVar2 = this_00 + iVar3;
  while( true ) {
    if ((this->MatchedColumnTypes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FWeakObjectPtr::Get(this_00);
    this_00 = this_00 + 1;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return true;
}

