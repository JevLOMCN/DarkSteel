// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 35

// BatchCreateRelations<FMassChildOfRelation> @ 1470d7720

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::BatchCreateRelations<FMassChildOfRelation>
          (FMassEntityManager *this,TArrayView<FMassEntityHandle,int> *param_1,
          TArrayView<FMassEntityHandle,int> *param_2)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FWeakObjectPtr local_res10;
  UScriptStruct *local_res18;
  FObjectKey local_res20;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  
  pUVar2 = FMassChildOfRelation::StaticStruct();
  if (pUVar2 != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    UE::Mass::FTypeHandle::FTypeHandle
              ((FTypeHandle *)&local_res20,(TObjectKey<UStruct_const_>)local_res10);
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_28.DataPtr = param_1->DataPtr;
    local_28.ArrayNum = param_1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar1 = BatchCreateRelations(this,(FTypeHandle)local_res20,&local_28,&local_38);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ForEachConstSharedFragment<FTestConstSharedFragment_Int> @ 1470ddb70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::ForEachConstSharedFragment<FTestConstSharedFragment_Int>
          (FMassEntityManager *this,
          TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *param_1)

{
  int iVar1;
  longlong *plVar2;
  UPackage *pUVar3;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  UScriptStruct *pUVar9;
  undefined1 local_res8 [8];
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar3,
                         L"TestConstSharedFragment_Int");
  }
  pTVar4 = TSharedFragmentsContainer<FConstSharedStruct>::Find
                     (&this->ConstSharedFragmentsContainer,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
  ;
  if (pTVar4 != (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    iVar1 = pTVar4->ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstSharedStruct,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      plVar2 = *(longlong **)pFVar7;
      if (plVar2 == (longlong *)0x0) {
        pvVar6 = (void *)0x0;
        pUVar9 = (UScriptStruct *)0x0;
      }
      else {
        pUVar9 = (UScriptStruct *)*plVar2;
        lVar5 = (longlong)*(short *)((longlong)&pUVar9->_padding_ + 4);
        pvVar6 = (void *)(lVar5 + 7 + (longlong)plVar2 & -lVar5);
      }
      UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>(pUVar9,pvVar6);
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
      pFVar7 = pFVar7 + 0x10;
    }
  }
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>::
  ~TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>(param_1);
  return;
}

// ForEachConstSharedFragmentConditional<FTestConstSharedFragment_Int> @ 1470ddc60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::ForEachConstSharedFragmentConditional<FTestConstSharedFragment_Int>
          (FMassEntityManager *this,
          TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)> *param_1,
          TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  UPackage *pUVar4;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  UScriptStruct *pUVar10;
  undefined1 local_res8 [8];
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  pTVar5 = TSharedFragmentsContainer<FConstSharedStruct>::Find
                     (&this->ConstSharedFragmentsContainer,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
  ;
  if (pTVar5 != (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar8 = (pTVar5->AllocatorInstance).Data;
    iVar1 = pTVar5->ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar5->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstSharedStruct,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar9) break;
      plVar2 = *(longlong **)pFVar8;
      if (plVar2 == (longlong *)0x0) {
        pvVar7 = (void *)0x0;
        pUVar10 = (UScriptStruct *)0x0;
      }
      else {
        pUVar10 = (UScriptStruct *)*plVar2;
        lVar6 = (longlong)*(short *)((longlong)&pUVar10->_padding_ + 4);
        pvVar7 = (void *)(lVar6 + 7 + (longlong)plVar2 & -lVar6);
      }
      UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>(pUVar10,pvVar7);
      cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
      if (cVar3 != '\0') {
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)>::
  ~TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)>(param_1);
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>::
  ~TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>(param_2);
  return;
}

// ForEachSharedFragment<FTestSharedFragment_Int> @ 1470ddf30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::ForEachSharedFragment<FTestSharedFragment_Int>
          (FMassEntityManager *this,TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *param_1)

{
  int iVar1;
  longlong *plVar2;
  UPackage *pUVar3;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  UScriptStruct *pUVar9;
  undefined1 local_res8 [8];
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar3,
                         L"TestSharedFragment_Int");
  }
  pTVar4 = TSharedFragmentsContainer<FSharedStruct>::Find
                     (&this->SharedFragmentsContainer,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  if (pTVar4 != (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    iVar1 = pTVar4->ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar8) break;
      plVar2 = *(longlong **)pFVar7;
      if (plVar2 == (longlong *)0x0) {
        pvVar6 = (void *)0x0;
        pUVar9 = (UScriptStruct *)0x0;
      }
      else {
        pUVar9 = (UScriptStruct *)*plVar2;
        lVar5 = (longlong)*(short *)((longlong)&pUVar9->_padding_ + 4);
        pvVar6 = (void *)(lVar5 + 7 + (longlong)plVar2 & -lVar5);
      }
      UE::StructUtils::GetStructRef<FTestSharedFragment_Int>(pUVar9,pvVar6);
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
      pFVar7 = pFVar7 + 0x10;
    }
  }
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>::
  ~TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>(param_1);
  return;
}

// ForEachSharedFragmentConditional<FTestSharedFragment_Int> @ 1470de020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::ForEachSharedFragmentConditional<FTestSharedFragment_Int>
          (FMassEntityManager *this,TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)> *param_1,
          TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  UPackage *pUVar4;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  UScriptStruct *pUVar10;
  undefined1 local_res8 [8];
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar4,
                         L"TestSharedFragment_Int");
  }
  pTVar5 = TSharedFragmentsContainer<FSharedStruct>::Find
                     (&this->SharedFragmentsContainer,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  if (pTVar5 != (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar8 = (pTVar5->AllocatorInstance).Data;
    iVar1 = pTVar5->ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar5->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) break;
      plVar2 = *(longlong **)pFVar8;
      if (plVar2 == (longlong *)0x0) {
        pvVar7 = (void *)0x0;
        pUVar10 = (UScriptStruct *)0x0;
      }
      else {
        pUVar10 = (UScriptStruct *)*plVar2;
        lVar6 = (longlong)*(short *)((longlong)&pUVar10->_padding_ + 4);
        pvVar7 = (void *)(lVar6 + 7 + (longlong)plVar2 & -lVar6);
      }
      UE::StructUtils::GetStructRef<FTestSharedFragment_Int>(pUVar10,pvVar7);
      cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
      if (cVar3 != '\0') {
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)>::
  ~TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)>(param_1);
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>::
  ~TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>(param_2);
  return;
}

// GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int> @ 1470deb40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestConstSharedFragment_Int * __thiscall
FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  FStructSharedMemory *pFVar1;
  UPackage *pUVar2;
  FConstSharedStruct *pFVar3;
  longlong lVar4;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  pFVar3 = InternalGetConstSharedFragmentPtr
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
  ;
  if ((pFVar3 != (FConstSharedStruct *)0x0) &&
     (pFVar1 = (pFVar3->StructMemoryPtr).Object, pFVar1 != (FStructSharedMemory *)0x0)) {
    lVar4 = (longlong)
            *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
    return (FTestConstSharedFragment_Int *)
           ((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar4 + 7 & -lVar4);
  }
  return (FTestConstSharedFragment_Int *)0x0;
}

// GetFragmentDataChecked<FFragmentWithSharedPtr> @ 1470df030

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FFragmentWithSharedPtr * __thiscall
FMassEntityManager::GetFragmentDataChecked<FFragmentWithSharedPtr>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UPackage *pUVar1;
  FFragmentWithSharedPtr *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFragmentWithSharedPtr,(UObject *)pUVar1,
                         L"FragmentWithSharedPtr");
  }
  pFVar2 = InternalGetFragmentDataChecked
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton);
  return pFVar2;
}

// GetFragmentDataChecked<FTestFragment_Float> @ 1470df090

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Float * __thiscall
FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UPackage *pUVar1;
  FTestFragment_Float *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  pFVar2 = InternalGetFragmentDataChecked
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  return pFVar2;
}

// GetFragmentDataChecked<FTestFragment_Int> @ 1470df0f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UPackage *pUVar1;
  FTestFragment_Int *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  pFVar2 = InternalGetFragmentDataChecked
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton);
  return pFVar2;
}

// GetFragmentDataPtr<FMassRelationFragment> @ 1470df150

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassRelationFragment * __thiscall
FMassEntityManager::GetFragmentDataPtr<FMassRelationFragment>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UScriptStruct *pUVar1;
  FMassRelationFragment *pFVar2;
  
  pUVar1 = FMassRelationFragment::StaticStruct();
  pFVar2 = InternalGetFragmentDataPtr(this,param_1,pUVar1);
  return pFVar2;
}

// GetFragmentDataPtr<FTestFragment_Float> @ 1470df190

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Float * __thiscall
FMassEntityManager::GetFragmentDataPtr<FTestFragment_Float>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UPackage *pUVar1;
  FTestFragment_Float *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  pFVar2 = InternalGetFragmentDataPtr
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  return pFVar2;
}

// GetFragmentDataPtr<FTestFragment_Int> @ 1470df1f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
FMassEntityManager::GetFragmentDataPtr<FTestFragment_Int>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  UPackage *pUVar1;
  FTestFragment_Int *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  pFVar2 = InternalGetFragmentDataPtr
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton);
  return pFVar2;
}

// GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int> @ 1470e13c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>
          (FMassEntityManager *this)

{
  uint uVar1;
  UPackage *pUVar2;
  FConstSharedStruct *pFVar3;
  uchar local_res8 [8];
  FConstStructView local_18;
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  local_18.StructMemory = local_res8;
  local_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
                     (&this->ConstSharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
                      local_res8);
  return pFVar3;
}

// GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int> @ 1470e1480

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>
          (FMassEntityManager *this,FTestConstSharedFragment_Int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FConstSharedStruct *pFVar3;
  FConstStructView local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  local_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  local_18.StructMemory = (uchar *)param_1;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  pFVar3 = GetOrCreateConstSharedFragmentByHash<FTestConstSharedFragment_Int>(this,uVar1,param_1);
  return pFVar3;
}

// GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int,int_&> @ 1470e1500

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int,int_&>
          (FMassEntityManager *this,int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FConstSharedStruct *pFVar3;
  int local_res8 [2];
  FConstStructView local_18;
  
  local_res8[0] = *param_1;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  local_18.StructMemory = (uchar *)local_res8;
  local_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
                     (&this->ConstSharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
                      (uchar *)local_res8);
  return pFVar3;
}

// GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int,int_const_&> @ 1470e15c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int,int_const_&>
          (FMassEntityManager *this,int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FConstSharedStruct *pFVar3;
  int local_res8 [2];
  FConstStructView local_18;
  
  local_res8[0] = *param_1;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  local_18.StructMemory = (uchar *)local_res8;
  local_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
                     (&this->ConstSharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
                      (uchar *)local_res8);
  return pFVar3;
}

// GetOrCreateConstSharedFragmentByHash<FTestConstSharedFragment_Int> @ 1470e1680

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::GetOrCreateConstSharedFragmentByHash<FTestConstSharedFragment_Int>
          (FMassEntityManager *this,uint param_1,FTestConstSharedFragment_Int *param_2)

{
  UPackage *pUVar1;
  FConstSharedStruct *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar1,
                         L"TestConstSharedFragment_Int");
  }
  pFVar2 = TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
                     (&this->ConstSharedFragmentsContainer,param_1,
                      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
                      (uchar *)param_2);
  return pFVar2;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Array> @ 1470e16f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Array>
          (FMassEntityManager *this,FTestSharedFragment_Array *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  FConstStructView local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Array,(UObject *)pUVar2,
                         L"TestSharedFragment_Array");
  }
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton
  ;
  local_18.StructMemory = (uchar *)param_1;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  pFVar3 = GetOrCreateSharedFragmentByHash<FTestSharedFragment_Array>(this,uVar1,param_1);
  return pFVar3;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Array,TArray<int,TSizedDefaultAllocator<32>_>_> @ 1470e1770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::
GetOrCreateSharedFragment<FTestSharedFragment_Array,TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMassEntityManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  longlong lVar4;
  FTestSharedFragment_Array local_28;
  FConstStructView local_18;
  
  local_28.Value.ArrayNum = param_1->ArrayNum;
  lVar4 = (longlong)local_28.Value.ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  local_28.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Value.ArrayNum == 0) {
    local_28.Value.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_28.Value.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Value.ArrayNum,
               &local_28.Value.ArrayMax);
    memcpy(local_28.Value.AllocatorInstance.Data,_Src,lVar4 << 2);
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Array,(UObject *)pUVar2,
                         L"TestSharedFragment_Array");
  }
  local_18.StructMemory = (uchar *)&local_28;
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton
  ;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Array,(UObject *)pUVar2,
                         L"TestSharedFragment_Array");
  }
  pFVar3 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton,
                      (uchar *)&local_28);
  FTestSharedFragment_Array::~FTestSharedFragment_Array(&local_28);
  return pFVar3;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Int> @ 1470e18a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>(FMassEntityManager *this)

{
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  uchar local_res8 [8];
  FConstStructView local_18;
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  local_18.StructMemory = local_res8;
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,
                      local_res8);
  return pFVar3;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Int> @ 1470e1960

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>
          (FMassEntityManager *this,FTestSharedFragment_Int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  FConstStructView local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  local_18.StructMemory = (uchar *)param_1;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  pFVar3 = GetOrCreateSharedFragmentByHash<FTestSharedFragment_Int>(this,uVar1,param_1);
  return pFVar3;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Int,int_&> @ 1470e19e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_&>
          (FMassEntityManager *this,int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  int local_res8 [2];
  FConstStructView local_18;
  
  local_res8[0] = *param_1;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  local_18.StructMemory = (uchar *)local_res8;
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,
                      (uchar *)local_res8);
  return pFVar3;
}

// GetOrCreateSharedFragment<FTestSharedFragment_Int,int_const_&> @ 1470e1aa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_const_&>
          (FMassEntityManager *this,int *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  int local_res8 [2];
  FConstStructView local_18;
  
  local_res8[0] = *param_1;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  local_18.StructMemory = (uchar *)local_res8;
  local_18.ScriptStruct = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar1 = UE::StructUtils::GetStructInstanceCrc32(&local_18,0);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  pFVar3 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,uVar1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,
                      (uchar *)local_res8);
  return pFVar3;
}

// GetOrCreateSharedFragmentByHash<FTestSharedFragment_Array> @ 1470e1b60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragmentByHash<FTestSharedFragment_Array>
          (FMassEntityManager *this,uint param_1,FTestSharedFragment_Array *param_2)

{
  UPackage *pUVar1;
  FSharedStruct *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Array,(UObject *)pUVar1,
                         L"TestSharedFragment_Array");
  }
  pFVar2 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,param_1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton,
                      (uchar *)param_2);
  return pFVar2;
}

// GetOrCreateSharedFragmentByHash<FTestSharedFragment_Int> @ 1470e1bd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::GetOrCreateSharedFragmentByHash<FTestSharedFragment_Int>
          (FMassEntityManager *this,uint param_1,FTestSharedFragment_Int *param_2)

{
  UPackage *pUVar1;
  FSharedStruct *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
  }
  pFVar2 = TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                     (&this->SharedFragmentsContainer,param_1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,
                      (uchar *)param_2);
  return pFVar2;
}

// GetSharedFragmentDataPtr<FTestSharedFragment_Float> @ 1470e1dc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestSharedFragment_Float * __thiscall
FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Float>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  FStructSharedMemory *pFVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  longlong lVar4;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar2,
                         L"TestSharedFragment_Float");
  }
  pFVar3 = InternalGetSharedFragmentPtr
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton);
  if ((pFVar3 != (FSharedStruct *)0x0) &&
     (pFVar1 = (pFVar3->StructMemoryPtr).Object, pFVar1 != (FStructSharedMemory *)0x0)) {
    lVar4 = (longlong)
            *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
    return (FTestSharedFragment_Float *)
           ((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar4 + 7 & -lVar4);
  }
  return (FTestSharedFragment_Float *)0x0;
}

// GetSharedFragmentDataPtr<FTestSharedFragment_Int> @ 1470e1e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestSharedFragment_Int * __thiscall
FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
          (FMassEntityManager *this,FMassEntityHandle param_1)

{
  FStructSharedMemory *pFVar1;
  UPackage *pUVar2;
  FSharedStruct *pFVar3;
  longlong lVar4;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  pFVar3 = InternalGetSharedFragmentPtr
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  if ((pFVar3 != (FSharedStruct *)0x0) &&
     (pFVar1 = (pFVar3->StructMemoryPtr).Object, pFVar1 != (FStructSharedMemory *)0x0)) {
    lVar4 = (longlong)
            *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
    return (FTestSharedFragment_Int *)
           ((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar4 + 7 & -lVar4);
  }
  return (FTestSharedFragment_Int *)0x0;
}

// BatchCreateEntities @ 147110cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::BatchCreateEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,int param_2,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [24];
  void *pvStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  void *pvStack_60;
  undefined8 local_58;
  ForAnyElementType FStack_50;
  undefined8 local_48;
  ForAnyElementType FStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  auStack_70._0_8_ = 0;
  local_98._8_8_ = 0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_98._16_8_ = 0;
  pvStack_80 = (void *)0x0;
  auStack_70._8_8_ = 0;
  pvStack_60 = (void *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_98._0_4_ = 0xffffffff;
  local_98[4] = true;
  local_98[5] = 0;
  local_98._6_2_ = 0;
  local_78 = 0x8000000000;
  local_58 = 0x8000000000;
  BatchCreateEntities(this,__return_storage_ptr__,param_1,
                      (FMassArchetypeSharedFragmentValues *)local_98,param_2,param_3);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_40.Data,(int)local_38);
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_50.Data,(int)local_48);
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  if (pvStack_80 != (void *)0x0) {
    FMemory::Free(pvStack_80);
  }
  return __return_storage_ptr__;
}

// Defer @ 14711bfa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassCommandBuffer * __thiscall FMassEntityManager::Defer(FMassEntityManager *this)

{
  return (this->DeferredCommandBuffers).Elements[this->OpenedCommandBufferIndex].Object;
}

// GetObserverManager @ 147120360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassObserverManager * __thiscall FMassEntityManager::GetObserverManager(FMassEntityManager *this)

{
  return &this->ObserverManager;
}

// GetOnNewArchetypeEvent @ 147120370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy> *
__thiscall FMassEntityManager::GetOnNewArchetypeEvent(FMassEntityManager *this)

{
  return &this->OnNewArchetypeEvent;
}

// GetOrMakeObserversLock @ 147120380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> * __thiscall
FMassEntityManager::GetOrMakeObserversLock
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *__return_storage_ptr__)

{
  FMassObserverManager::GetOrMakeObserverLock(&this->ObserverManager,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRelationManager @ 1471217e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FRelationManager * __thiscall FMassEntityManager::GetRelationManager(FMassEntityManager *this)

{
  return &this->RelationManager;
}

// GetTypeManager @ 147122140

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeManager * __thiscall FMassEntityManager::GetTypeManager(FMassEntityManager *this)

{
  return (this->TypeManager).Object;
}

// IsProcessing @ 147192940

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassEntityManager::IsProcessing(FMassEntityManager *this)

{
  return 0 < (int)this->ProcessingScopeCount;
}

