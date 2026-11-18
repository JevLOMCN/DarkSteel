// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 11

// Call @ 14b2adcd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
::Call(void *param_1,int *param_2,TWeakPtr<Metasound::FOperatorPool,1> *param_3)

{
  TWeakPtr<Metasound::FOperatorPool,1> local_18;
  
  local_18.Object = param_3->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_3->WeakReferenceCount).ReferenceController;
  (param_3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (FOperatorPool *)0x0;
  `Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>::operator()(param_1,*param_2,&local_18);
  return;
}

// Call @ 14b2add10

/* WARNING: Removing unreachable block (ram,0x00014b2a8d56) */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FAnyDataReference *pFVar12;
  longlong lVar13;
  IVertexAnalyzerRegistry *pIVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lStackX_10;
  longlong lStack_78;
  longlong lStack_70;
  FAnyDataReference *pFStack_68;
  FDestructionSentinel FStack_60;
  FDelegateAllocation *pFStack_48;
  
  pFVar12 = Metasound::FOutputVertexInterfaceData::FindDataReference
                      ((FOutputVertexInterfaceData *)(*(longlong *)param_1 + 0x168),
                       (FName *)((longlong)param_1 + 0x28));
  if (pFVar12 != (FAnyDataReference *)0x0) {
    lVar18 = *(longlong *)((longlong)param_1 + 0x38);
    plVar20 = *(longlong **)(*(longlong *)param_1 + 0x318);
    lVar19 = *(longlong *)((longlong)param_1 + 0x28);
    plVar15 = plVar20 + *(int *)(*(longlong *)param_1 + 800);
    for (; plVar20 != plVar15; plVar20 = plVar20 + 1) {
      lVar13 = (**(code **)(*(longlong *)*plVar20 + 8))();
      if ((lVar19 == *(longlong *)(lVar13 + 0x20)) && (lVar18 == *(longlong *)(lVar13 + 0x30))) {
        plVar15 = (longlong *)*plVar20;
        if (plVar15 != (longlong *)0x0) {
          lVar18 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          lVar19 = (**(code **)(*plVar15 + 0x10))(plVar15);
          if (lVar19 == lVar18) {
            return;
          }
          (**(code **)(*(longlong *)*plVar20 + 0x18))((longlong *)*plVar20,pFVar12);
          return;
        }
        break;
      }
    }
    pIVar14 = Metasound::Frontend::IVertexAnalyzerRegistry::Get();
    plVar15 = (longlong *)
              (**(code **)((longlong)*pIVar14 + 8))
                        (pIVar14,*(undefined8 *)((longlong)param_1 + 0x38));
    if (plVar15 != (longlong *)0x0) {
      lStack_70 = *(longlong *)param_1 + 0x18;
      lStack_78 = (longlong)param_1 + 8;
      pFStack_68 = pFVar12;
      (**(code **)(*plVar15 + 0x18))(plVar15,&lStackX_10,&lStack_78);
      if (lStackX_10 != 0) {
        bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lStackX_10 + 8));
        lVar18 = lStackX_10;
        if (!bVar10) {
          uVar8 = *(undefined8 *)((longlong)param_1 + 0x18);
          uVar9 = *(undefined8 *)((longlong)param_1 + 0x20);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x58);
          uVar2 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
          uVar4 = *(undefined8 *)((longlong)param_1 + 0x28);
          uVar5 = *(undefined8 *)((longlong)param_1 + 0x30);
          uVar6 = *(undefined8 *)((longlong)param_1 + 0x38);
          uVar7 = *(undefined8 *)((longlong)param_1 + 0x50);
          lStack_78 = *(longlong *)((longlong)param_1 + 0x40);
          lStack_70 = *(longlong *)((longlong)param_1 + 0x48);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lStackX_10 + 8),
                     (FWriteAccessScope *)&FStack_60);
          pFStack_48 = (FDelegateAllocation *)(lVar18 + 0x10);
          puVar16 = DelegateAllocate(0x78,pFStack_48);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXVFName__V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar17;
            *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>::operator()'::`20'::<lambda_2>_>
                        ::_vftable_;
            puVar16[3] = uVar2;
            puVar16[6] = uVar8;
            puVar16[7] = uVar9;
            puVar16[4] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
            puVar16[5] = uVar3;
            puVar16[0xb] = lStack_78;
            puVar16[0xc] = lStack_70;
            puVar16[8] = uVar4;
            puVar16[9] = uVar5;
            puVar16[10] = uVar6;
            puVar16[0xd] = uVar7;
            *(undefined1 *)(puVar16 + 0xe) = uVar1;
          }
          if (FStack_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
          }
        }
        lVar18 = *(longlong *)param_1;
        iVar11 = *(int *)(lVar18 + 800);
        if (iVar11 == *(int *)(lVar18 + 0x324)) {
          iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar18 + 0x318),(int *)(lVar18 + 0x324));
        }
        *(int *)(lVar18 + 800) = iVar11 + 1;
        *(longlong *)(*(longlong *)(lVar18 + 0x318) + (longlong)iVar11 * 8) = lStackX_10;
      }
    }
  }
  return;
}

// Call @ 14b2add20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
::Call(void *param_1,int *param_2,TWeakPtr<Metasound::FOperatorPool,1> *param_3)

{
  TWeakPtr<Metasound::FOperatorPool,1> local_18;
  
  local_18.Object = param_3->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_3->WeakReferenceCount).ReferenceController;
  (param_3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (FOperatorPool *)0x0;
  `Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>::operator()
            (param_1,*param_2,&local_18);
  return;
}

// Call @ 14b2add60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
::Call(void *param_1,FName *param_2,FInputVertexInterfaceData *param_3)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IDataTypeRegistry *pIVar7;
  FAnyDataReference *pFVar8;
  FInputDataVertex *pFVar9;
  FName FStack_18;
  undefined4 uStack_10;
  
  lVar2 = *(longlong *)param_1;
  Metasound::FInputVertexInterfaceData::operator=
            ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_3);
  pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
  pFVar8 = Metasound::FInputVertexInterfaceData::FindDataReference
                     ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_2);
  if ((pFVar8 != (FAnyDataReference *)0x0) && (pFVar8->AccessType == Write)) {
    pFVar9 = Metasound::FInputVertexInterfaceData::GetVertex
                       ((FInputVertexInterfaceData *)(lVar2 + 0x140),param_2);
    Metasound::GeneratorBuilder::AddParameterSetter
              (pIVar7,pFVar9,pFVar8,
               (TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
                *)(lVar2 + 0x1d0),
               (TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                *)(lVar2 + 0x1e0));
  }
  FStack_18 = *param_2;
  pFVar1 = (ForAnyElementType *)(lVar2 + 400);
  uStack_10 = CONCAT22(uStack_10._2_2_,2);
  if (((FName *)pFVar1->Data <= &FStack_18) &&
     (&FStack_18 < (FName *)((longlong)pFVar1->Data + (longlong)*(int *)(lVar2 + 0x19c) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x198);
  if (iVar6 == *(int *)(lVar2 + 0x19c)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)(lVar2 + 0x19c));
  }
  *(int *)(lVar2 + 0x198) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = FStack_18;
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = uStack_10;
  LOCK();
  *(undefined1 *)(lVar2 + 0x110) = 1;
  UNLOCK();
  return;
}

// Call @ 14b2add70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
::Call(void *param_1,int *param_2,TWeakPtr<Metasound::FOperatorPool,1> *param_3)

{
  TWeakPtr<Metasound::FOperatorPool,1> local_18;
  
  local_18.Object = param_3->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_3->WeakReferenceCount).ReferenceController;
  (param_3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (FOperatorPool *)0x0;
  `Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>::operator()
            (param_1,*param_2,&local_18);
  return;
}

// Call @ 14b2addb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iStackX_8;
  
  lVar2 = *(longlong *)param_1;
  lVar3 = *(longlong *)((longlong)param_1 + 0x28);
  lVar4 = *(longlong *)((longlong)param_1 + 0x38);
  iVar1 = *(int *)(lVar2 + 800);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(lVar2 + 0x318);
    iVar10 = 0;
    iStackX_8 = 0;
    lVar7 = (**(code **)(*(longlong *)*puVar5 + 8))();
    if ((lVar3 == *(longlong *)(lVar7 + 0x20)) && (lVar4 == *(longlong *)(lVar7 + 0x30))) {
      bVar13 = 0;
    }
    else {
      bVar13 = 1;
    }
    lVar7 = 0;
    iVar12 = 0;
    iVar11 = iVar10;
joined_r0x00014b2a9be2:
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar10 + 1;
      if (lVar7 < iVar1) {
        lVar8 = (**(code **)(*(longlong *)puVar5[lVar7] + 8))();
        if ((lVar3 == *(longlong *)(lVar8 + 0x20)) && (lVar4 == *(longlong *)(lVar8 + 0x30))) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        iVar12 = iStackX_8;
        if (bVar13 == bVar6) goto joined_r0x00014b2a9be2;
      }
      iVar9 = iVar10 - iVar11;
      if (bVar13 == 0) {
        DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
                  ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                    *)(puVar5 + iVar11),iVar9);
      }
      else {
        if (iVar12 != iVar11) {
          memmove(puVar5 + iVar12,puVar5 + iVar11,(longlong)iVar9 << 3);
        }
        iVar12 = iVar12 + iVar9;
        iStackX_8 = iVar12;
      }
      bVar13 = bVar13 ^ 1;
      iVar11 = iVar10;
    } while (lVar7 < iVar1);
    *(int *)(lVar2 + 800) = iVar12;
  }
  return;
}

// Call @ 14b2addc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,void,FTopLevelAssetPath_const_&,__int64>
::Call(void *param_1,FTopLevelAssetPath *param_2,long64 *param_3)

{
  long64 lVar1;
  uint uVar2;
  UPackage *pUVar3;
  FName local_res18 [2];
  
  uVar2 = _GCsvCategory_MetaSound_ActiveOperators.Index;
  lVar1 = *param_3;
  pUVar3 = GetTransientPackage();
  if ((pUVar3 == (UPackage *)0x0) || (param_2->PackageName != (FName)pUVar3->_padding_)) {
    FCsvProfiler::Get();
    local_res18[0] = param_2->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_res18[0] = param_2->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_res18,uVar2,(int)lVar1,Set);
  return;
}

// Call @ 14b2ade30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,void,FName_const_&,Metasound::FInputVertexInterfaceData_const_&>
::Call(void *param_1,FName *param_2,FInputVertexInterfaceData *param_3)

{
  Metasound::FMetasoundDynamicGraphGenerator::OnInputRemoved
            (*(FMetasoundDynamicGraphGenerator **)param_1,param_2,param_3);
  return;
}

// Call @ 14b2ade40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
::Call(void *param_1,FName *param_2,FOutputVertexInterfaceData *param_3)

{
  Metasound::FMetasoundDynamicGraphGenerator::OnOutputAdded
            (*(FMetasoundDynamicGraphGenerator **)param_1,param_2,param_3);
  return;
}

// Call @ 14b2ade50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
::Call(void *param_1,FName *param_2,FOutputVertexInterfaceData *param_3)

{
  Metasound::FMetasoundDynamicGraphGenerator::OnOutputUpdated
            (*(FMetasoundDynamicGraphGenerator **)param_1,param_2,param_3);
  return;
}

// Call @ 14b2ade60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,void,FName_const_&,Metasound::FOutputVertexInterfaceData_const_&>
::Call(void *param_1,FName *param_2,FOutputVertexInterfaceData *param_3)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FStack_18;
  undefined4 uStack_10;
  
  lVar2 = *(longlong *)param_1;
  Metasound::MetasoundGeneratorPrivate::LogErrorIfIsAudioVertex
            (param_2,L"The MetaSound Generator cannot dynamically remove audio outputs");
  Metasound::FOutputVertexInterfaceData::operator=
            ((FOutputVertexInterfaceData *)(lVar2 + 0x168),param_3);
  FStack_18 = *param_2;
  pFVar1 = (ForAnyElementType *)(lVar2 + 400);
  uStack_10 = CONCAT22(uStack_10._2_2_,0x203);
  if (((FName *)pFVar1->Data <= &FStack_18) &&
     (&FStack_18 < (FName *)((longlong)pFVar1->Data + (longlong)*(int *)(lVar2 + 0x19c) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x198);
  if (iVar6 == *(int *)(lVar2 + 0x19c)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar1,(int *)(lVar2 + 0x19c));
  }
  *(int *)(lVar2 + 0x198) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = FStack_18;
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = uStack_10;
  LOCK();
  *(undefined1 *)(lVar2 + 0x110) = 1;
  UNLOCK();
  return;
}

