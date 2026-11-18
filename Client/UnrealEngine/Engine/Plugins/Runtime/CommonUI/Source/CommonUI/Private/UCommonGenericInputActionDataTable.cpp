// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// StaticClass @ 14a78b160

UClass * __cdecl UCommonGenericInputActionDataTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonGenericInputActionDataTable",
               &Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton,
               StaticRegisterNativesUCommonGenericInputActionDataTable,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonGenericInputActionDataTable>,
               InternalVTableHelperCtorCaller<UCommonGenericInputActionDataTable>,local_res8,
               UDataTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton;
}

// UCommonGenericInputActionDataTable @ 14a7ad910

UCommonGenericInputActionDataTable * __thiscall
UCommonGenericInputActionDataTable::UCommonGenericInputActionDataTable
          (UCommonGenericInputActionDataTable *this,FVTableHelper *param_1)

{
  UDataTable::UDataTable((UDataTable *)this,param_1);
  *(undefined ***)this = &___7UCommonGenericInputActionDataTable__6B_;
  return this;
}

// UCommonGenericInputActionDataTable @ 14a7ad940

UCommonGenericInputActionDataTable * __thiscall
UCommonGenericInputActionDataTable::UCommonGenericInputActionDataTable
          (UCommonGenericInputActionDataTable *this)

{
  UScriptStruct *pUVar1;
  FObjectInitializer *pFVar2;
  UPackage *pUVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UDataTable::UDataTable((UDataTable *)this,pFVar2);
  *(undefined ***)this = &___7UCommonGenericInputActionDataTable__6B_;
  if (Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionDataBase,(UObject *)pUVar3,
                         L"CommonInputActionDataBase");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton !=
      (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton);
  }
  *(UScriptStruct **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UCommonGenericInputActionDataTable @ 14a7b2ce0

void __thiscall
UCommonGenericInputActionDataTable::~UCommonGenericInputActionDataTable
          (UCommonGenericInputActionDataTable *this)

{
  *(undefined ***)this = &___7UDataTable__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0xa0,
             *(int *)&this->field_0xa8);
  if (*(void **)&this->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x98);
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  *(undefined4 *)&this->field_0x78 = 0;
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e55e0

UClass * __cdecl UCommonGenericInputActionDataTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonGenericInputActionDataTable",
               &Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton,
               StaticRegisterNativesUCommonGenericInputActionDataTable,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonGenericInputActionDataTable>,
               InternalVTableHelperCtorCaller<UCommonGenericInputActionDataTable>,local_res8,
               UDataTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.InnerSingleton;
}

// PostLoad @ 14a802610

void __thiscall
UCommonGenericInputActionDataTable::PostLoad(UCommonGenericInputActionDataTable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_28;
  
  UObject::PostLoad((UObject *)this);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pUVar5 = UCommonInputActionDataProcessor::StaticClass();
  GetDerivedClasses(pUVar5,&local_28,false);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6.Data == pFVar1) break;
    pUVar5 = *(UClass **)FVar6.Data;
    if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar5);
    }
    pUVar3 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 != (UObject *)0x0) {
      pUVar5 = UCommonInputActionDataProcessor::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3,this);
      }
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUCommonGenericInputActionDataTable @ 14a81e590

void __cdecl
UCommonGenericInputActionDataTable::StaticRegisterNativesUCommonGenericInputActionDataTable(void)

{
  return;
}

