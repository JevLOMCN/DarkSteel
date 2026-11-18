// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 147aa4b40

UClass * __cdecl UDataTableFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataTableFunctionLibrary",
               &Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDataTableFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDataTableFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton;
}

// UDataTableFunctionLibrary @ 147abcaa0

UDataTableFunctionLibrary * __thiscall
UDataTableFunctionLibrary::UDataTableFunctionLibrary
          (UDataTableFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDataTableFunctionLibrary__6B_;
  return this;
}

// UDataTableFunctionLibrary @ 147abcad0

UDataTableFunctionLibrary * __thiscall
UDataTableFunctionLibrary::UDataTableFunctionLibrary
          (UDataTableFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDataTableFunctionLibrary__6B_;
  return this;
}

// ~UDataTableFunctionLibrary @ 147abf610

void __thiscall
UDataTableFunctionLibrary::~UDataTableFunctionLibrary(UDataTableFunctionLibrary *this)

{
  *(undefined ***)this = &___7UDataTableFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DoesDataTableRowExist @ 147ad0e00

bool __cdecl UDataTableFunctionLibrary::DoesDataTableRowExist(UDataTable *param_1,FName param_2)

{
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this;
  uchar **ppuVar1;
  
  if ((param_1 != (UDataTable *)0x0) &&
     ((param_1->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    this = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
            *)(**(code **)(param_1->_padding_ + 0x2d0))();
    ppuVar1 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
              ::Find(this,param_2);
    return ppuVar1 != (uchar **)0x0;
  }
  return false;
}

// EvaluateCurveTableRow @ 147ad65e0

void __cdecl
UDataTableFunctionLibrary::EvaluateCurveTableRow
          (UCurveTable *param_1,FName param_2,float param_3,
          TEnumAsByte<EEvaluateCurveTableResult::Type> *param_4,float *param_5,FString *param_6)

{
  bool bVar1;
  FCurveTableRowHandle local_28 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCurveTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_28[0].CurveTable.field0_0x0 = (TObjectPtr<UCurveTable_const_>_u_0)param_1;
  local_28[0].RowName = param_2;
  bVar1 = FCurveTableRowHandle::Eval(local_28,param_3,param_5,param_6);
  param_4->Value = !bVar1;
  return;
}

// Generic_GetDataTableRowFromName @ 147ae24c0

bool __cdecl
UDataTableFunctionLibrary::Generic_GetDataTableRowFromName
          (UDataTable *param_1,FName param_2,void *param_3)

{
  UScriptStruct *this;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar1;
  
  if (((param_3 != (void *)0x0) && (param_1 != (UDataTable *)0x0)) &&
     ((param_1->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
               *)(**(code **)(param_1->_padding_ + 0x2d0))();
    ppuVar1 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
              ::Find(this_00,param_2);
    if (((ppuVar1 != (uchar **)0x0) && (*ppuVar1 != (uchar *)0x0)) &&
       (this = (param_1->RowStruct).field0_0x0.DebugPtr, this != (UScriptStruct *)0x0)) {
      UScriptStruct::CopyScriptStruct(this,param_3,*ppuVar1,1);
      return true;
    }
  }
  return false;
}

// GetDataTableColumnAsString @ 147ae5c30

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UDataTableFunctionLibrary::GetDataTableColumnAsString
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UDataTable *param_1,
          FName param_2)

{
  FName local_res18 [2];
  
  if ((param_1 != (UDataTable *)0x0) && (param_2 != (FName)0x0)) {
    local_res18[0] = param_2;
    DataTableUtils::GetColumnDataAsString(__return_storage_ptr__,param_1,local_res18,None);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataTableColumnExportNames @ 147ae5c80

/* WARNING: Removing unreachable block (ram,0x000147ae5e07) */

void __cdecl
UDataTableFunctionLibrary::GetDataTableColumnExportNames
          (UDataTable *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  FField *this;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_48;
  TObjectPtr<UScriptStruct>_u_0 local_38;
  FField *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if ((param_1 != (UDataTable *)0x0) &&
     (local_38 = (TObjectPtr<UScriptStruct>_u_0)(param_1->RowStruct).field0_0x0.DebugPtr,
     local_38.DebugPtr != (UScriptStruct *)0x0)) {
    local_30 = (FField *)(local_38.DebugPtr)->_padding_;
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    TFieldIterator<FProperty_const_>::IterateToNext
              ((TFieldIterator<FProperty_const_> *)&local_38.ObjectPtr);
    this = local_30;
    while (this != (FField *)0x0) {
      local_30 = this;
      FField::GetAuthoredName(this,&local_48);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
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
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,piVar1);
        param_2->ArrayNum = iVar4 + 1;
      }
      else {
        param_2->ArrayNum = iVar4 + 1;
      }
      pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar5 = 0;
      *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
      *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
      *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30 = this->Next;
      TFieldIterator<FProperty_const_>::IterateToNext
                ((TFieldIterator<FProperty_const_> *)&local_38.ObjectPtr);
      this = local_30;
    }
  }
  return;
}

// GetDataTableColumnNameFromExportName @ 147ae5e50

bool __cdecl
UDataTableFunctionLibrary::GetDataTableColumnNameFromExportName
          (UDataTable *param_1,FString *param_2,FName *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNameEntryId FVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  FField *pFVar9;
  FString local_48;
  TObjectPtr<UScriptStruct>_u_0 local_38;
  FField *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((param_1 != (UDataTable *)0x0) &&
     (local_38 = (TObjectPtr<UScriptStruct>_u_0)(param_1->RowStruct).field0_0x0.DebugPtr,
     local_38.DebugPtr != (UScriptStruct *)0x0)) {
    local_30 = (FField *)(local_38.DebugPtr)->_padding_;
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    TFieldIterator<FProperty_const_>::IterateToNext
              ((TFieldIterator<FProperty_const_> *)&local_38.ObjectPtr);
    pFVar9 = local_30;
    if (local_30 != (FField *)0x0) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (local_30 != (FField *)0x0) goto LAB_147ae5f05;
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7199246111658212943>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTableUtils.cpp"
                         ,0x1b1,"Prop");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      FVar7 = FVar8;
      while( true ) {
        uVar1 = (param_2->Data).ArrayNum;
        FVar5 = FVar7.ComparisonIndex.Value;
        if (FVar5.Value == uVar1) {
          if ((int)FVar5.Value < 2) break;
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar3 = iVar6 == 0;
        }
        else {
          bVar3 = FVar5.Value + uVar1 == 1;
        }
        if (bVar3) break;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_30 = pFVar9->Next;
        TFieldIterator<FProperty_const_>::IterateToNext
                  ((TFieldIterator<FProperty_const_> *)&local_38.ObjectPtr);
        if (local_30 == (FField *)0x0) {
          return false;
        }
LAB_147ae5f05:
        pFVar9 = local_30;
        FField::GetAuthoredName(local_30,&local_48);
        FVar7.Number = 0;
        FVar7.ComparisonIndex.Value = local_48.Data.ArrayNum;
      }
      bVar3 = IsThisNotNull(pFVar9,"FField::GetFName");
      if (bVar3) {
        FVar8 = pFVar9->NamePrivate;
      }
      *param_3 = FVar8;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// GetDataTableColumnNames @ 147ae5fd0

void __cdecl
UDataTableFunctionLibrary::GetDataTableColumnNames
          (UDataTable *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  UScriptStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1 == (UDataTable *)0x0) ||
     (pUVar1 = (param_1->RowStruct).field0_0x0.DebugPtr, pUVar1 == (UScriptStruct *)0x0)) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    pTVar3 = DataTableUtils::GetStructPropertyNames(&local_18,(UStruct *)pUVar1);
    if (param_2 != pTVar3) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_2->ArrayNum = pTVar3->ArrayNum;
      param_2->ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// GetDataTableRowFromName @ 147ae6080

bool __cdecl
UDataTableFunctionLibrary::GetDataTableRowFromName
          (UDataTable *param_1,FName param_2,FTableRowBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTableFunctionLibrary.cpp"
                     ,0x5e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetDataTableRowNames @ 147ae60c0

void __cdecl
UDataTableFunctionLibrary::GetDataTableRowNames
          (UDataTable *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UDataTable *)0x0) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                *)&param_1->RowMap,&local_18);
    if (param_2 != &local_18) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
      param_2->ArrayNum = local_18.ArrayNum;
      param_2->ArrayMax = local_18.ArrayMax;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// GetDataTableRowStruct @ 147ae6180

UScriptStruct * __cdecl UDataTableFunctionLibrary::GetDataTableRowStruct(UDataTable *param_1)

{
  if (param_1 != (UDataTable *)0x0) {
    return (param_1->RowStruct).field0_0x0.DebugPtr;
  }
  return (UScriptStruct *)0x0;
}

// GetPrivateStaticClass @ 147aeb2b0

UClass * __cdecl UDataTableFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataTableFunctionLibrary",
               &Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDataTableFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDataTableFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataTableFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUDataTableFunctionLibrary @ 147b17240

void __cdecl UDataTableFunctionLibrary::StaticRegisterNativesUDataTableFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDataTableFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDoesDataTableRowExist @ 147b24d90

void __cdecl
UDataTableFunctionLibrary::execDoesDataTableRowExist(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this;
  uchar **ppuVar3;
  FName local_res10;
  longlong *local_res18;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != (longlong *)0x0) && (local_res18[5] != 0)) {
    this = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
            *)(**(code **)(*local_res18 + 0x2d0))();
    ppuVar3 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
              ::Find(this,FVar2);
    *(bool *)param_3 = ppuVar3 != (uchar **)0x0;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execEvaluateCurveTableRow @ 147b24ea0

void __cdecl
UDataTableFunctionLibrary::execEvaluateCurveTableRow(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  float fVar3;
  FName FVar4;
  UCurveTable *pUVar5;
  bool bVar6;
  float *pfVar7;
  uchar *puVar8;
  uchar local_res10 [8];
  float local_res20 [2];
  float local_68 [2];
  FName local_60;
  UCurveTable *local_58;
  FString local_50;
  TObjectPtr<UCurveTable_const_>_u_0 local_40;
  FName local_38;
  
  local_58 = (UCurveTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar8 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  pfVar7 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar7 = (float *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pUVar5 = local_58;
  FVar4 = local_60;
  fVar3 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UCurveTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  local_40.DebugPtr = pUVar5;
  local_38 = FVar4;
  bVar6 = FCurveTableRowHandle::Eval
                    ((FCurveTableRowHandle *)&local_40.ObjectPtr,fVar3,pfVar7,&local_50);
  *puVar8 = !bVar6;
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetDataTableColumnAsString @ 147b250d0

/* WARNING: Removing unreachable block (ram,0x000147b254f5) */

void __cdecl
UDataTableFunctionLibrary::execGetDataTableColumnAsString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  UDataTable *pUVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FProperty *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  void *pvVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  FName local_res18;
  UDataTable *local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FString local_a8;
  FName local_98;
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  longlong *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  
  local_res20 = (UDataTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar8);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar8);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_res18;
  if ((local_res20 == (UDataTable *)0x0) || (local_res18 == (FName)0x0)) {
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
  }
  else {
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    pFVar8 = UDataTable::FindTableProperty(local_res20,&local_98);
    if (pFVar8 != (FProperty *)0x0) {
      local_90 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4);
      iVar7 = (int)local_90[5];
      iStack_88 = 0;
      uStack_84 = 1;
      local_80 = (TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 2);
      local_70 = iStack_88;
      iStack_74 = 0;
      if (iVar7 != 0) {
        pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)local_90[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)local_90[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar12 = local_80;
        }
        uVar2 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
        local_70 = 0;
        iStack_88 = 0;
        while (uVar2 == 0) {
          lVar9 = (longlong)iStack_88;
          local_70 = local_70 + 0x20;
          iStack_88 = iStack_88 + 1;
          iStack_74 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_147b2525e;
          uVar2 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uStack_84 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uStack_84 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_74 = local_70 + -1 + (int)lVar9;
        if (iVar7 < iStack_74) {
          iStack_74 = iVar7;
        }
      }
LAB_147b2525e:
      uStack_78 = 0xffffffff;
      TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
      TStack_58.CurrentBitIndex = iStack_74;
      TStack_58.UnvisitedBitMask = 0xffffffff;
      TStack_58._28_4_ = iStack_74;
      TStack_58.BaseBitIndex = local_70;
      iStack_6c = iStack_74;
      local_60 = local_90;
      TStack_58.Array = local_80;
      iVar6 = iStack_74;
      if (iStack_74 < iVar7) {
        do {
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          lVar9 = *(longlong *)(*local_60 + 8 + (longlong)iVar6 * 0x18);
          bVar5 = DataTableUtils::IsSupportedTableProperty(pFVar8);
          if (bVar5) {
            if (pFVar8->ArrayDim == 1) {
              if ((lVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pvVar11 = (void *)(pFVar8->Offset_Internal + lVar9);
              FProperty::ExportText_Direct
                        (pFVar8,&local_a8,pvVar11,pvVar11,(UObject *)0x0,0x40,(UObject *)0x0);
            }
            else {
              ::FString::AppendChar(&local_a8,L'(');
              iVar7 = pFVar8->ArrayDim;
              iVar6 = 0;
              if (0 < iVar7) {
                do {
                  if (((iVar6 < 0) || (iVar7 <= iVar6)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if ((lVar9 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ContainerPtr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2de,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pvVar11 = (void *)((longlong)pFVar8->Offset_Internal +
                                    (longlong)pFVar8->ElementSize * (longlong)iVar6 + lVar9);
                  FProperty::ExportText_Direct
                            (pFVar8,&local_a8,pvVar11,pvVar11,(UObject *)0x0,0x41,(UObject *)0x0);
                  iVar6 = iVar6 + 1;
                  if (iVar6 < pFVar8->ArrayDim) {
                    ::FString::AppendChar(&local_a8,L',');
                  }
                  iVar7 = pFVar8->ArrayDim;
                } while (iVar6 < iVar7);
              }
              ::FString::AppendChar(&local_a8,L')');
            }
          }
          if (((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               local_b8.Data + (longlong)local_b0._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)local_b0;
          if ((int)local_b0 == local_b0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
          }
          local_b0 = CONCAT44(local_b0._4_4_,iVar7 + 1);
          pFVar10 = local_b8.Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar10 = 0;
          *(FScriptContainerElement **)pFVar10 = local_a8.Data.AllocatorInstance.Data;
          *(int *)(pFVar10 + 8) = local_a8.Data.ArrayNum;
          *(int *)(pFVar10 + 0xc) = local_a8.Data.ArrayMax;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
          iVar6 = TStack_58.CurrentBitIndex;
        } while (TStack_58.CurrentBitIndex < (TStack_58.Array)->NumBits);
      }
    }
  }
  if (param_3 != &local_b8) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_b8.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_b0;
    *(int *)((longlong)param_3 + 0xc) = local_b0._4_4_;
    local_b0 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// execGetDataTableColumnExportNames @ 147b255c0

/* WARNING: Removing unreachable block (ram,0x000147b257f1) */

void __cdecl
UDataTableFunctionLibrary::execGetDataTableColumnExportNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  FField *this;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType *pFVar9;
  longlong local_res10;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  TFieldIterator<FProperty_const_> local_38;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  lVar5 = local_res10;
  pFVar9 = &local_48;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar9 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DestructItems<FString,int>((FString *)pFVar9->Data,*(int *)&pFVar9[1].Data);
  piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
  *(undefined4 *)&pFVar9[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar9,0,piVar1);
  }
  if ((lVar5 != 0) && (pUVar3 = *(UStruct **)(lVar5 + 0x28), pUVar3 != (UStruct *)0x0)) {
    local_38.Field = pUVar3->ChildProperties;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = pUVar3;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_38);
    this = local_38.Field;
    while (local_38.Field = this, this != (FField *)0x0) {
      FField::GetAuthoredName(this,&local_58);
      if (((pFVar9->Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar9->Data + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&pFVar9[1].Data;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar9,piVar1);
        *(int *)&pFVar9[1].Data = iVar7 + 1;
      }
      else {
        *(int *)&pFVar9[1].Data = iVar7 + 1;
      }
      pFVar8 = pFVar9->Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(FScriptContainerElement **)pFVar8 = local_58.Data.AllocatorInstance.Data;
      *(int *)(pFVar8 + 8) = local_58.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Field = this->Next;
      TFieldIterator<FProperty_const_>::IterateToNext(&local_38);
      this = local_38.Field;
    }
  }
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execGetDataTableColumnNameFromExportName @ 147b25870

void __cdecl
UDataTableFunctionLibrary::execGetDataTableColumnNameFromExportName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UStruct *pUVar3;
  FField *this;
  undefined1 uVar4;
  int iVar5;
  FName FVar6;
  FName *pFVar7;
  bool bVar8;
  FName local_res10;
  longlong local_res18;
  undefined8 local_res20;
  FString local_68;
  wchar_t *local_58;
  undefined8 local_50;
  TFieldIterator<FProperty_const_> local_48;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar7 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != 0) && (pUVar3 = *(UStruct **)(local_res18 + 0x28), pUVar3 != (UStruct *)0x0))
  {
    local_48.Field = pUVar3->ChildProperties;
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = pUVar3;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
    this = local_48.Field;
    while (local_48.Field = this, this != (FField *)0x0) {
      FField::GetAuthoredName(this,&local_68);
      if (local_68.Data.ArrayNum == (int)local_50) {
        if (1 < local_68.Data.ArrayNum) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_68.Data.AllocatorInstance.Data,local_58);
          bVar8 = iVar5 == 0;
          goto LAB_147b259de;
        }
LAB_147b25a30:
        bVar8 = IsThisNotNull(this,"FField::GetFName");
        if (bVar8) {
          FVar6 = this->NamePrivate;
        }
        else {
          local_res20 = 0;
        }
        *pFVar7 = FVar6;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        uVar4 = 1;
        goto LAB_147b25a0b;
      }
      bVar8 = local_68.Data.ArrayNum + (int)local_50 == 1;
LAB_147b259de:
      if (bVar8) goto LAB_147b25a30;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_48.Field = this->Next;
      TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
      this = local_48.Field;
    }
  }
  uVar4 = 0;
LAB_147b25a0b:
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetDataTableColumnNames @ 147b25a70

void __cdecl
UDataTableFunctionLibrary::execGetDataTableColumnNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar4 = &local_28;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 == 0) || (*(UStruct **)(local_res10 + 0x28) == (UStruct *)0x0)) {
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
  }
  else {
    pTVar3 = DataTableUtils::GetStructPropertyNames(&local_18,*(UStruct **)(local_res10 + 0x28));
    if (pTVar4 != pTVar3) {
      pFVar2 = (pTVar4->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar3->ArrayNum;
      pTVar4->ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetDataTableRowFromName @ 147b25bf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UDataTableFunctionLibrary::execGetDataTableRowFromName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  uchar *puVar2;
  UObjectBaseUtility *this;
  ITextData *pIVar3;
  code *pcVar4;
  FName FVar5;
  longlong *plVar6;
  bool bVar7;
  FText *pFVar8;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  undefined8 uVar14;
  FProperty *pFVar15;
  undefined1 uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_188;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_180;
  longlong *local_170;
  FText local_168;
  FString local_158;
  FBlueprintExceptionInfo local_148;
  FBlueprintExceptionInfo local_130;
  FBlueprintExceptionInfo local_118;
  FTextFormat local_100;
  FFormatArgumentValue local_e8;
  undefined4 local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_170 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar15);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar15);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar15);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  plVar6 = local_170;
  FVar5 = local_188;
  pFVar15 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar15 == (FProperty *)0x0) || ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    pFVar15 = (FProperty *)0x0;
  }
  if (local_170 == (longlong *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"GetDataTableRow",L"MissingTableInput",
                        L"Failed to resolve the table input. Be sure the DataTable is valid.");
    local_148.EventType = AccessViolation;
    local_148.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_148.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_148.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_148.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_148.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if ((local_148.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_148);
    uVar14 = local_148.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else if ((pFVar15 == (FProperty *)0x0) || (puVar2 == (uchar *)0x0)) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"GetDataTableRow",L"MissingOutputProperty",
                        L"Failed to resolve the output parameter for GetDataTableRow.");
    local_118.EventType = AccessViolation;
    local_118.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_118.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_118.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_118.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
    }
    local_118.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if ((local_118.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_118);
    uVar14 = local_118.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    this = (UObjectBaseUtility *)local_170[5];
    if ((UObjectBaseUtility *)pFVar15[1]._padding_ == this) {
      uVar16 = 0;
      if (this != (UObjectBaseUtility *)0x0) {
        this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                   *)(**(code **)(*local_170 + 0x2d0))(local_170);
        ppuVar9 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                  ::Find(this_00,FVar5);
        if (((ppuVar9 != (uchar **)0x0) && (*ppuVar9 != (uchar *)0x0)) &&
           ((UScriptStruct *)plVar6[5] != (UScriptStruct *)0x0)) {
          UScriptStruct::CopyScriptStruct((UScriptStruct *)plVar6[5],puVar2,*ppuVar9,1);
          uVar16 = 1;
        }
      }
      *(undefined1 *)param_3 = uVar16;
      return;
    }
    pFVar10 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pFVar15[1]._padding_,&local_88,(UObject *)0x0);
    pFVar8 = FText::AsCultureInvariant(&local_68,pFVar10);
    if (this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_158,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName(this,&local_158,(UObject *)0x0);
    }
    pFVar11 = FText::AsCultureInvariant(&local_58,&local_158);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"GetDataTableRow",L"IncompatibleProperty",
                         L"Incompatible output parameter; the data table\'s type ({0}) is not the same as the return type ({1})."
                        );
    pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
    local_e8.Type = Text;
    FText::FText((FText *)&local_e8.TextValue,pFVar11);
    if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c8 = 4;
    FText::FText(&local_b8,pFVar8);
    if ((local_b8.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_180.AllocatorInstance,2,&local_180.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_180.AllocatorInstance.Data,&local_e8,2);
    local_100.TextFormatData.Object = (pFVar13->TextFormatData).Object;
    local_100.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_100.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_100.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_100.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_168,&local_100,&local_180);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
    if ((FFormatArgumentValue *)local_180.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar3 = (pFVar11->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (pFVar8->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    local_130.EventType = AccessViolation;
    local_130.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_168.TextData.Reference;
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 8))
                (local_168.TextData.Reference,local_res18);
    }
    local_130.Description.field0_0x0.TypedValue.Flags = local_168.Flags;
    if ((local_130.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_130);
    uVar14 = local_130.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  if ((ITextData *)uVar14 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar14 + 0x10))();
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDataTableRowNames @ 147b26180

void __cdecl
UDataTableFunctionLibrary::execGetDataTableRowNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                *)(local_res10 + 0x30),&local_28);
    if (pTVar3 != &local_28) {
      pFVar2 = (pTVar3->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar3->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
      pTVar3->ArrayNum = local_28.ArrayNum;
      pTVar3->ArrayMax = local_28.ArrayMax;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetDataTableRowStruct @ 147b26310

void __cdecl
UDataTableFunctionLibrary::execGetDataTableRowStruct(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0x28);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

