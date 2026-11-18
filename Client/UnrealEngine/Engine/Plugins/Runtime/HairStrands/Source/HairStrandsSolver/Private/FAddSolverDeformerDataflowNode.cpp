// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 22

// EvaluateSimulation @ 14e245d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAddSolverDeformerDataflowNode::EvaluateSimulation
          (FAddSolverDeformerDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  int *piVar1;
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *_Src;
  longlong *plVar11;
  TObjectPtr<UOptimusDeformer>_u_0 TVar12;
  longlong lVar13;
  UOptimusDeformerDynamicInstanceManager *this_00;
  FProperty *pFVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  FDataflowInput *pFVar21;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar22;
  ulong64 uVar23;
  undefined8 *puVar24;
  UPackage *pUVar25;
  ulong64 uVar26;
  FGuid *pFVar27;
  UClass *pUVar28;
  FGuid *pFVar29;
  TStatId TVar30;
  UOptimusDeformerInstance *this_01;
  FDataflowInput *pFVar31;
  FDataflowInput *pFVar32;
  FName *pFVar33;
  FDataflowOutput *pFVar34;
  FTimestamp FVar35;
  ulonglong uVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  int iVar41;
  double dVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auStackY_b08 [32];
  undefined1 local_ab0;
  undefined1 local_aaf [7];
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> local_aa8;
  FDataflowInput *local_a98;
  uint local_a90;
  FName local_a8c;
  TIntVector3<int>_u_0 local_a84;
  int local_a78;
  int iStack_a74;
  TIntPoint<int>_u_0 local_a70;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_a68;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_a58;
  TArray<bool,TSizedDefaultAllocator<32>_> local_a48;
  TArray<int,TSizedDefaultAllocator<32>_> local_a38;
  TArray<int,TSizedDefaultAllocator<32>_> local_a28;
  TArray<double,TSizedDefaultAllocator<32>_> local_a18;
  TArray<double,TSizedDefaultAllocator<32>_> local_a08;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_9f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_9e8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_9d8;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_9c8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_9b8;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_9a8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_998;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> local_988;
  int local_978;
  int iStack_974;
  int local_970;
  int local_968;
  int iStack_964;
  int iStack_960;
  int iStack_95c;
  undefined8 *local_958;
  FConnectionReference local_950;
  FConnectionReference local_938;
  FConnectionReference local_920;
  FString local_8f8;
  FConnectionReference local_8e8;
  FConnectionReference local_8d0;
  FConnectionReference local_8b8;
  FConnectionReference local_8a0;
  FConnectionReference local_888;
  FConnectionReference local_870;
  FConnectionReference local_858;
  FConnectionReference local_840;
  FConnectionReference local_828;
  FConnectionReference local_810;
  FConnectionReference local_7f8;
  FConnectionReference local_7e0;
  FConnectionReference local_7c8;
  FConnectionReference local_7b0;
  FConnectionReference local_798;
  FConnectionReference local_780;
  FConnectionReference local_768;
  FConnectionReference local_750;
  FConnectionReference local_738;
  FConnectionReference local_720;
  FConnectionReference local_708;
  FConnectionReference local_6f0;
  FConnectionReference local_6d8;
  FConnectionReference local_6c0;
  FConnectionReference local_6a8;
  FConnectionReference local_690;
  FConnectionReference local_678;
  TRotator<double> local_660;
  FConnectionReference local_648;
  TVector<double>_u_0 local_630;
  FConnectionReference local_618;
  FConnectionReference local_600;
  TArray<double,TSizedDefaultAllocator<32>_> local_5e8;
  FGuid local_5d8;
  TVector2<double>_u_0 local_5c8;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  TIntVector4<int>_u_0 local_5a8;
  TArray<double,TSizedDefaultAllocator<32>_> local_598;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_588;
  TArray<double,TSizedDefaultAllocator<32>_> local_578;
  TArray<double,TSizedDefaultAllocator<32>_> local_568;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_558;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_548;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_538;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_528;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_518;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_508;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_4f8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_4e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_4d8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_4c8;
  FConnectionReference local_4b8;
  FConnectionReference local_4a0;
  FConnectionReference local_488;
  FConnectionReference local_470;
  FConnectionReference local_458;
  FConnectionReference local_440;
  FConnectionReference local_428;
  FConnectionReference local_410;
  FConnectionReference local_3f8;
  FConnectionReference local_3e0;
  TVector4<double>_u_0 local_3c8;
  TVector4<double>_u_0 local_3a8;
  TQuat<double> local_388;
  TVector4<double>_u_0 local_368;
  TVector4<double>_u_0 local_348;
  FName local_328 [4];
  FGuid local_308;
  FGuid local_2f8;
  TVector4<double>_u_0 local_2e8;
  TVector4<double>_u_0 local_2c8;
  TVector4<double>_u_0 local_2a8;
  TObjectPtr<UOptimusDeformer>_u_0 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong local_268;
  TVector4<double>_u_0 local_258;
  TVector4<double>_u_0 local_238;
  TVector4<double>_u_0 local_218;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  TTransform<double> local_1c8;
  FGuid local_168;
  FGuid local_158;
  FGuid local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  TUniqueFunction<void___cdecl(void)> local_118;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  local_618.Reference = &this->PhysicsSolvers;
  local_618.Index = -1;
  local_618.ContainerReference = (void *)0x0;
  pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_618);
  pTVar22 = local_618.Reference;
  pFVar34 = pFVar21->Connection;
  local_a98 = pFVar21;
  if (pFVar34 != (FDataflowOutput *)0x0) {
    bVar18 = FDataflowOutput::HasFrozenValue(pFVar34);
    if (bVar18) {
      pTVar22 = (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(pFVar34,(uchar *)pTVar22);
    }
    else {
      bVar18 = FDataflowOutput::Evaluate(pFVar34,(FContext *)param_1);
      if (!bVar18) {
        FVar35 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar21);
        uVar38 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar21);
        pFVar27 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar21,&local_158);
        pFVar14 = (FProperty *)pFVar21->_padding_;
        uVar26 = CityHash64((char *)&pFVar34->_padding_,0x10);
        UE::Dataflow::FContext::
        SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
                  ((FContext *)param_1,(uint)uVar26,pFVar14,pTVar22,pFVar27,uVar38,
                   (FTimestamp *)FVar35.Value);
        pFVar21 = local_a98;
      }
      uVar26 = UE::Dataflow::FTimestamp::Invalid;
      uVar23 = CityHash64((char *)&pFVar34->_padding_,0x10);
      bVar18 = UE::Dataflow::FContext::HasData((FContext *)param_1,(uint)uVar23,(FTimestamp)uVar26);
      if (bVar18) {
        pFVar14 = (FProperty *)pFVar21->_padding_;
        uVar26 = CityHash64((char *)&pFVar34->_padding_,0x10);
        puVar24 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar26 & 0xffffffff);
        if (puVar24 != (undefined8 *)0x0) {
          pTVar22 = UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                              ((FContextCacheElementBase *)*puVar24,(IContextCacheStore *)param_1,
                               pFVar14,pTVar22);
        }
      }
    }
  }
  local_aa8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_aa8.ArrayNum = pTVar22->ArrayNum;
  lVar39 = (longlong)local_aa8.ArrayNum;
  _Src = (pTVar22->AllocatorInstance).Data;
  if (local_aa8.ArrayNum == 0) {
    local_aa8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_aa8.ArrayNum,0,&local_aa8.AllocatorInstance,local_aa8.ArrayNum,
               &local_aa8.ArrayMax);
    memcpy(local_aa8.AllocatorInstance.Data,_Src,lVar39 << 3);
  }
  local_600.Reference = &this->SimulationTime;
  local_600.Index = -1;
  local_600.ContainerReference = (void *)0x0;
  pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_600);
  FDataflowInput::GetValue<FDataflowSimulationTime>(pFVar21,(FContext *)param_1,local_600.Reference)
  ;
  dVar17 = _UNK_15061cbc8;
  dVar16 = ___xmm_3ff00000000000000000000000000000;
  uVar36 = (ulonglong)local_aa8.ArrayNum;
  local_a90 = local_aa8.ArrayNum;
  if ((local_aa8.ArrayNum != 0) &&
     ((this->MeshDeformer).field0_0x0.DebugPtr != (UOptimusDeformer *)0x0)) {
    pFVar21 = (FDataflowInput *)(local_aa8.AllocatorInstance.Data + uVar36 * 8);
    FVar37.Data = local_aa8.AllocatorInstance.Data;
    while( true ) {
      local_a98 = (FDataflowInput *)FVar37.Data;
      if (local_aa8.ArrayNum != (uint)uVar36) {
        local_ab0 = 0;
        `TCheckedPointerIterator<FDataflowSimulationProperty_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_ab0);
      }
      if ((FDataflowInput *)FVar37.Data == pFVar21) break;
      plVar11 = (longlong *)((FDataflowInput *)FVar37.Data)->_padding_;
      if ((plVar11 != (longlong *)0x0) &&
         (lVar39 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar39 != 0)) {
        if (Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar25 = Z_Construct_UPackage__Script_HairStrandsSolver();
          Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGroomSolverProxy,
                               (UObject *)pUVar25,L"DataflowGroomSolverProxy");
          if (Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14e24873e;
        }
        iVar41 = (int)(Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton)->
                      _padding_;
        if ((*(int *)(lVar39 + 0x38) < iVar41) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar39 + 0x30) + (longlong)iVar41 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton)->_padding_
           )) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if (bVar18) {
          local_5d8._0_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
          local_5d8._8_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
          uVar26 = CityHash64((char *)&local_5d8,0x10);
          pFVar27 = TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                    ::FindOrAddImpl<FGuid>
                              ((TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                                *)(plVar11 + 0x21),(uint)uVar26,&local_5d8);
          if (((pFVar27->D == 0 && pFVar27->C == 0) && pFVar27->B == 0) && pFVar27->A == 0) {
            if (param_1->_padding_ != 0) {
              pUVar28 = Z_Construct_UClass_UDataflow_NoRegister();
              bVar18 = FObjectPtr::IsA((FObjectPtr *)&param_1->_padding_,pUVar28);
              if ((((bVar18) && (lVar39 = param_1->_padding_, lVar39 != 0)) &&
                  ((this->MeshDeformer).field0_0x0.DebugPtr != (UOptimusDeformer *)0x0)) &&
                 (plVar11[0x20] != 0)) {
                pFVar29 = FGuid::NewGuid(&local_148);
                uVar38 = pFVar29->B;
                uVar20 = pFVar29->C;
                uVar40 = pFVar29->D;
                pFVar27->A = pFVar29->A;
                pFVar27->B = uVar38;
                pFVar27->C = uVar20;
                pFVar27->D = uVar40;
                TVar12 = (TObjectPtr<UOptimusDeformer>_u_0)(this->MeshDeformer).field0_0x0.DebugPtr;
                lVar13 = plVar11[0x20];
                if (((TVar12.DebugPtr != (UOptimusDeformer *)0x0) && (lVar13 != 0)) &&
                   (*(longlong *)(lVar13 + 0x20) != 0)) {
                  local_278._0_4_ = pFVar29->A;
                  local_278._4_4_ = pFVar29->B;
                  uStack_270._0_4_ = pFVar29->C;
                  uStack_270._4_4_ = pFVar29->D;
                  local_288 = TVar12;
                  local_280 = lVar13;
                  local_268 = lVar39;
                  TVar30.StatIdPtr =
                       (TStatIdData *)
                       TUniqueFunction<void___cdecl(void)>::
                       TUniqueFunction<void___cdecl(void)><_UE::Groom::Private::CreateDeformerInstance_::__l5::<lambda_1>_>
                                 (&local_118,(<lambda_1> *)&local_288.ObjectPtr);
                  FFunctionGraphTask::CreateAndDispatchWhenReady
                            ((TUniqueFunction<void___cdecl(void)> *)&local_958,TVar30,
                             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                              *)&TStatId::TStatId_NAME_None,MainQueue);
                  if (local_958 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(local_958 + 6);
                    iVar41 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar41 == 1) {
                      (**(code **)*local_958)(local_958,1);
                    }
                  }
                }
              }
            }
          }
          else {
            this_00 = (UOptimusDeformerDynamicInstanceManager *)plVar11[0x20];
            if (this_00 != (UOptimusDeformerDynamicInstanceManager *)0x0) {
              pUVar28 = Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister();
              iVar41 = (int)pUVar28->_padding_;
              if ((iVar41 <= *(int *)(this_00->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar41 * 8)
                  == &pUVar28->_padding_)) {
                local_2f8.A = pFVar27->A;
                local_2f8.B = pFVar27->B;
                local_2f8.C = pFVar27->C;
                local_2f8.D = pFVar27->D;
                this_01 = UOptimusDeformerDynamicInstanceManager::GetDeformerInstance
                                    (this_00,&local_2f8);
                if (this_01 != (UOptimusDeformerInstance *)0x0) {
                  local_308.A = pFVar27->A;
                  local_308.B = pFVar27->B;
                  local_308.C = pFVar27->C;
                  local_308.D = pFVar27->D;
                  UOptimusDeformerDynamicInstanceManager::EnqueueProducerDeformer
                            (this_00,&local_308,OverrideDefaultDeformer,1);
                  uVar38 = 0;
                  if (0 < (this->DeformerNumericInputs).ArrayNum) {
                    pTVar2 = &this->DeformerNumericInputs;
                    do {
                      uVar40 = ~uVar38 >> 0x1f;
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum) {
                        uVar20 = uVar40;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      lVar39 = (longlong)(int)uVar38;
                      local_458.Reference = (pTVar2->AllocatorInstance).Data + lVar39 * 8;
                      local_458.Index = uVar38;
                      local_458.ContainerReference = pTVar2;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_458);
                      if (pFVar31 != (FDataflowInput *)0x0) {
                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"int32");
                        if (bVar18) {
                          iVar41 = 0;
                          uVar20 = 0;
                          if ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum) {
                            uVar20 = uVar40;
                          }
                          if ((uVar20 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          local_6d8.Reference = (pTVar2->AllocatorInstance).Data + lVar39 * 8;
                          local_6d8.Index = uVar38;
                          local_6d8.ContainerReference = pTVar2;
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6d8);
                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                            dVar42 = FDataflowNode::GetValue<FDataflowNumericTypes>
                                               ((FDataflowNode *)this,(FContext *)param_1,
                                                (TConnectionReference<FDataflowNumericTypes> *)
                                                &local_6d8);
                            iVar41 = (int)dVar42;
                          }
                        }
                        else {
                          bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"uint32");
                          if (!bVar18) {
                            bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"double");
                            if (bVar18) {
                              uVar43 = 0;
                              uVar45 = 0;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum) {
                                uVar20 = uVar40;
                              }
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_6a8.Reference = (pTVar2->AllocatorInstance).Data + lVar39 * 8;
                              local_6a8.Index = uVar38;
                              local_6a8.ContainerReference = pTVar2;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6a8);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                dVar42 = FDataflowNode::GetValue<FDataflowNumericTypes>
                                                   ((FDataflowNode *)this,(FContext *)param_1,
                                                    (TConnectionReference<FDataflowNumericTypes> *)
                                                    &local_6a8);
                                uVar43 = SUB84(dVar42,0);
                                uVar45 = (undefined4)((ulonglong)dVar42 >> 0x20);
                              }
                              dVar42 = (double)CONCAT44(uVar45,uVar43);
                            }
                            else {
                              bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"float");
                              if (!bVar18) goto LAB_14e2465db;
                              fVar44 = 0.0;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum) {
                                uVar20 = ~uVar38 >> 0x1f;
                              }
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_648.Reference =
                                   (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
                              local_648.Index = uVar38;
                              local_648.ContainerReference = pTVar2;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_648);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                dVar42 = FDataflowNode::GetValue<FDataflowNumericTypes>
                                                   ((FDataflowNode *)this,(FContext *)param_1,
                                                    (TConnectionReference<FDataflowNumericTypes> *)
                                                    &local_648);
                                fVar44 = (float)dVar42;
                              }
                              dVar42 = (double)fVar44;
                            }
                            UOptimusDeformerInstance::SetFloatVariable
                                      (this_01,(FName)pFVar31->_padding_,dVar42);
                            goto LAB_14e2465db;
                          }
                          iVar41 = 0;
                          uVar20 = 0;
                          if ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum) {
                            uVar20 = uVar40;
                          }
                          if ((uVar20 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          local_6c0.Reference = (pTVar2->AllocatorInstance).Data + lVar39 * 8;
                          local_6c0.Index = uVar38;
                          local_6c0.ContainerReference = pTVar2;
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6c0);
                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                            dVar42 = FDataflowNode::GetValue<FDataflowNumericTypes>
                                               ((FDataflowNode *)this,(FContext *)param_1,
                                                (TConnectionReference<FDataflowNumericTypes> *)
                                                &local_6c0);
                            iVar41 = (int)(longlong)dVar42;
                          }
                        }
                        UOptimusDeformerInstance::SetIntVariable
                                  (this_01,(FName)pFVar31->_padding_,iVar41);
                      }
LAB_14e2465db:
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerNumericInputs).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerVectorInputs).ArrayNum) {
                    pTVar3 = &this->DeformerVectorInputs;
                    do {
                      uVar40 = ~uVar38 >> 0x1f;
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                        uVar20 = uVar40;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      lVar39 = (longlong)(int)uVar38 * 0x20;
                      local_440.Reference = (pTVar3->AllocatorInstance).Data + lVar39;
                      local_440.Index = uVar38;
                      local_440.ContainerReference = pTVar3;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_440);
                      if (pFVar31 != (FDataflowInput *)0x0) {
                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FVector2D");
                        if (bVar18) {
                          local_5c8._s_0.X = 0.0;
                          local_5c8._s_0.Y = 0.0;
                          uVar20 = 0;
                          if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                            uVar20 = uVar40;
                          }
                          if ((uVar20 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          local_920.Reference = (pTVar3->AllocatorInstance).Data + lVar39;
                          local_920.Index = uVar38;
                          local_920.ContainerReference = pTVar3;
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_920);
                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_920);
                            FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                      (pFVar32,(TVector4<double> *)&local_258._s_0,
                                       (FContext *)param_1,local_920.Reference);
                            local_5c8._s_0.X = local_258._s_0.X;
                            local_5c8._s_0.Y = local_258._s_0.Y;
                          }
                          UOptimusDeformerInstance::SetVector2Variable
                                    (this_01,(FName)pFVar31->_padding_,
                                     (TVector2<double> *)&local_5c8._s_0);
                        }
                        else {
                          bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FVector");
                          if (bVar18) {
                            local_630._s_0.Z = 0.0;
                            uVar20 = 0;
                            if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                              uVar20 = uVar40;
                            }
                            local_630._s_0.X = 0.0;
                            local_630._s_0.Y = 0.0;
                            if ((uVar20 == 0) &&
                               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            local_8e8.Reference = (pTVar3->AllocatorInstance).Data + lVar39;
                            local_8e8.Index = uVar38;
                            local_8e8.ContainerReference = pTVar3;
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_8e8);
                            if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_8e8);
                              FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                        (pFVar32,(TVector4<double> *)&local_2c8._s_0,
                                         (FContext *)param_1,local_8e8.Reference);
                              local_1e8 = local_2c8._s_0.Z;
                              local_1f8 = local_2c8._s_0.X;
                              dStack_1f0 = local_2c8._s_0.Y;
                              local_630._s_0.X = local_2c8._s_0.X;
                              local_630._s_0.Y = local_2c8._s_0.Y;
                              local_630._s_0.Z = local_2c8._s_0.Z;
                            }
                            UOptimusDeformerInstance::SetVectorVariable
                                      (this_01,(FName)pFVar31->_padding_,
                                       (TVector<double> *)&local_630._s_0);
                          }
                          else {
                            bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FVector4");
                            if (bVar18) {
                              local_3c8._s_0.Z = dVar16;
                              local_3c8._s_0.W = dVar17;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                uVar20 = uVar40;
                              }
                              local_3c8._s_0.X = 0.0;
                              local_3c8._s_0.Y = 0.0;
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_7e0.Reference = (pTVar3->AllocatorInstance).Data + lVar39;
                              local_7e0.Index = uVar38;
                              local_7e0.ContainerReference = pTVar3;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7e0);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7e0)
                                ;
                                FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                          (pFVar32,(TVector4<double> *)&local_238._s_0,
                                           (FContext *)param_1,local_7e0.Reference);
                                local_3c8._s_0.X = local_238._s_0.X;
                                local_3c8._s_0.Y = local_238._s_0.Y;
                                local_3c8._s_0.Z = local_238._s_0.Z;
                                local_3c8._s_0.W = local_238._s_0.W;
                              }
                              UOptimusDeformerInstance::SetVector4Variable
                                        (this_01,(FName)pFVar31->_padding_,
                                         (TVector4<double> *)&local_3c8._s_0);
                            }
                            else {
                              bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FQuat");
                              if (bVar18) {
                                local_388.X = 0.0;
                                local_388.Y = 0.0;
                                local_388.Z = 0.0;
                                local_388.W = 0.0;
                                uVar20 = 0;
                                if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                  uVar20 = ~uVar38 >> 0x1f;
                                }
                                if ((uVar20 == 0) &&
                                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                  pcVar15 = (code *)swi(3);
                                  (*pcVar15)();
                                  return;
                                }
                                local_8b8.Reference =
                                     (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x20
                                ;
                                local_8b8.Index = uVar38;
                                local_8b8.ContainerReference = pTVar3;
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_8b8)
                                ;
                                if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                  pFVar32 = FDataflowNode::FindInput
                                                      ((FDataflowNode *)this,&local_8b8);
                                  FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                            (pFVar32,(TVector4<double> *)&local_3a8._s_0,
                                             (FContext *)param_1,local_8b8.Reference);
                                  local_138 = local_3a8._s_0.X;
                                  dStack_130 = local_3a8._s_0.Y;
                                  local_388.X = local_3a8._s_0.X;
                                  local_388.Y = local_3a8._s_0.Y;
                                  local_128 = local_3a8._s_0.Z;
                                  dStack_120 = local_3a8._s_0.W;
                                  local_388.Z = local_3a8._s_0.Z;
                                  local_388.W = local_3a8._s_0.W;
                                }
                                UOptimusDeformerInstance::SetQuatVariable
                                          (this_01,(FName)pFVar31->_padding_,&local_388);
                              }
                              else {
                                bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FLinearColor");
                                if (bVar18) {
                                  _local_5b8 = 0;
                                  _fStack_5b0 = 0;
                                  uVar20 = 0;
                                  if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                    uVar20 = ~uVar38 >> 0x1f;
                                  }
                                  if ((uVar20 == 0) &&
                                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                    pcVar15 = (code *)swi(3);
                                    (*pcVar15)();
                                    return;
                                  }
                                  local_8a0.Reference =
                                       (pTVar3->AllocatorInstance).Data +
                                       (longlong)(int)uVar38 * 0x20;
                                  local_8a0.Index = uVar38;
                                  local_8a0.ContainerReference = pTVar3;
                                  pFVar32 = FDataflowNode::FindInput
                                                      ((FDataflowNode *)this,&local_8a0);
                                  if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                    pFVar32 = FDataflowNode::FindInput
                                                        ((FDataflowNode *)this,&local_8a0);
                                    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                              (pFVar32,(TVector4<double> *)&local_368._s_0,
                                               (FContext *)param_1,local_8a0.Reference);
                                    fStack_5b4 = (float)local_368._s_0.Y;
                                    local_5b8 = (float)local_368._s_0.X;
                                    fStack_5ac = (float)local_368._s_0.W;
                                    fStack_5b0 = (float)local_368._s_0.Z;
                                  }
                                  UOptimusDeformerInstance::SetLinearColorVariable
                                            (this_01,(FName)pFVar31->_padding_,
                                             (FLinearColor *)&local_5b8);
                                }
                                else {
                                  bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FIntPoint");
                                  if (bVar18) {
                                    local_a70 = (TIntPoint<int>_u_0)0x0;
                                    uVar20 = 0;
                                    if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                      uVar20 = ~uVar38 >> 0x1f;
                                    }
                                    if ((uVar20 == 0) &&
                                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                      pcVar15 = (code *)swi(3);
                                      (*pcVar15)();
                                      return;
                                    }
                                    local_888.Reference =
                                         (pTVar3->AllocatorInstance).Data +
                                         (longlong)(int)uVar38 * 0x20;
                                    local_888.Index = uVar38;
                                    local_888.ContainerReference = pTVar3;
                                    pFVar32 = FDataflowNode::FindInput
                                                        ((FDataflowNode *)this,&local_888);
                                    if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                      pFVar32 = FDataflowNode::FindInput
                                                          ((FDataflowNode *)this,&local_888);
                                      FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                                (pFVar32,(TVector4<double> *)&local_218._s_0,
                                                 (FContext *)param_1,local_888.Reference);
                                      local_a78 = (int)local_218._s_0.X;
                                      iStack_a74 = (int)local_218._s_0.Y;
                                      local_a70._s_0.Y = iStack_a74;
                                      local_a70._s_0.X = local_a78;
                                    }
                                    UOptimusDeformerInstance::SetInt2Variable
                                              (this_01,(FName)pFVar31->_padding_,
                                               (TIntPoint<int> *)&local_a70._s_0);
                                  }
                                  else {
                                    bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                             L"FIntVector3");
                                    if (bVar18) {
                                      local_a84._0_8_ = 0;
                                      local_a84._s_0.Z = 0;
                                      uVar20 = 0;
                                      if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                        uVar20 = ~uVar38 >> 0x1f;
                                      }
                                      if ((uVar20 == 0) &&
                                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                        pcVar15 = (code *)swi(3);
                                        (*pcVar15)();
                                        return;
                                      }
                                      local_870.Reference =
                                           (pTVar3->AllocatorInstance).Data +
                                           (longlong)(int)uVar38 * 0x20;
                                      local_870.Index = uVar38;
                                      local_870.ContainerReference = pTVar3;
                                      pFVar32 = FDataflowNode::FindInput
                                                          ((FDataflowNode *)this,&local_870);
                                      if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                        pFVar32 = FDataflowNode::FindInput
                                                            ((FDataflowNode *)this,&local_870);
                                        FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                                  (pFVar32,(TVector4<double> *)&local_2a8._s_0,
                                                   (FContext *)param_1,local_870.Reference);
                                        local_978 = (int)local_2a8._s_0.X;
                                        iStack_974 = (int)local_2a8._s_0.Y;
                                        local_a84._s_0.Z = (int)local_2a8._s_0.Z;
                                        local_a84._0_8_ = CONCAT44(iStack_974,local_978);
                                        local_970 = local_a84._s_0.Z;
                                      }
                                      UOptimusDeformerInstance::SetInt3Variable
                                                (this_01,(FName)pFVar31->_padding_,
                                                 (TIntVector3<int> *)&local_a84._s_0);
                                    }
                                    else {
                                      bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                               L"FIntVector4");
                                      if (bVar18) {
                                        local_5a8._0_8_ = 0;
                                        local_5a8._8_8_ = 0;
                                        uVar20 = 0;
                                        if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                          uVar20 = ~uVar38 >> 0x1f;
                                        }
                                        if ((uVar20 == 0) &&
                                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                          pcVar15 = (code *)swi(3);
                                          (*pcVar15)();
                                          return;
                                        }
                                        local_858.Reference =
                                             (pTVar3->AllocatorInstance).Data +
                                             (longlong)(int)uVar38 * 0x20;
                                        local_858.Index = uVar38;
                                        local_858.ContainerReference = pTVar3;
                                        pFVar32 = FDataflowNode::FindInput
                                                            ((FDataflowNode *)this,&local_858);
                                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                          pFVar32 = FDataflowNode::FindInput
                                                              ((FDataflowNode *)this,&local_858);
                                          FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                                                    (pFVar32,(TVector4<double> *)&local_348._s_0,
                                                     (FContext *)param_1,local_858.Reference);
                                          local_968 = (int)local_348._s_0.X;
                                          iStack_964 = (int)local_348._s_0.Y;
                                          iStack_960 = (int)local_348._s_0.Z;
                                          iStack_95c = (int)local_348._s_0.W;
                                          local_5a8._0_8_ = CONCAT44(iStack_964,local_968);
                                          local_5a8._8_8_ = CONCAT44(iStack_95c,iStack_960);
                                        }
                                        UOptimusDeformerInstance::SetInt4Variable
                                                  (this_01,(FName)pFVar31->_padding_,
                                                   (TIntVector4<int> *)&local_5a8._s_0);
                                      }
                                      else {
                                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                                 L"FRotator");
                                        if (bVar18) {
                                          local_660.Roll = 0.0;
                                          local_660.Pitch = 0.0;
                                          local_660.Yaw = 0.0;
                                          uVar20 = 0;
                                          if ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum) {
                                            uVar20 = ~uVar38 >> 0x1f;
                                          }
                                          if ((uVar20 == 0) &&
                                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                            pcVar15 = (code *)swi(3);
                                            (*pcVar15)();
                                            return;
                                          }
                                          local_840.Reference =
                                               (pTVar3->AllocatorInstance).Data +
                                               (longlong)(int)uVar38 * 0x20;
                                          local_840.Index = uVar38;
                                          local_840.ContainerReference = pTVar3;
                                          pFVar32 = FDataflowNode::FindInput
                                                              ((FDataflowNode *)this,&local_840);
                                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                            pFVar32 = FDataflowNode::FindInput
                                                                ((FDataflowNode *)this,&local_840);
                                            FDataflowInput::
                                            GetValueFromAnyType<FDataflowVectorTypes>
                                                      (pFVar32,(TVector4<double> *)&local_2e8._s_0,
                                                       (FContext *)param_1,local_840.Reference);
                                            local_1d0 = local_2e8._s_0.Z;
                                            local_1e0 = local_2e8._s_0.X;
                                            dStack_1d8 = local_2e8._s_0.Y;
                                            local_660.Pitch = local_2e8._s_0.X;
                                            local_660.Yaw = local_2e8._s_0.Y;
                                            local_660.Roll = local_2e8._s_0.Z;
                                          }
                                          UOptimusDeformerInstance::SetRotatorVariable
                                                    (this_01,(FName)pFVar31->_padding_,&local_660);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerVectorInputs).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerStringInputs).ArrayNum) {
                    pTVar4 = &this->DeformerStringInputs;
                    do {
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerStringInputs).ArrayNum) {
                        uVar20 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      local_428.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                      local_428.Index = uVar38;
                      local_428.ContainerReference = pTVar4;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_428);
                      if ((pFVar31 != (FDataflowInput *)0x0) &&
                         (bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FName"), bVar18)) {
                        local_a8c.ComparisonIndex.Value = 0;
                        local_a8c.Number = 0;
                        uVar20 = 0;
                        if ((int)uVar38 < (this->DeformerStringInputs).ArrayNum) {
                          uVar20 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar20 == 0) &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar18)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        local_828.Reference =
                             (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                        local_828.Index = uVar38;
                        local_828.ContainerReference = pTVar4;
                        pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_828);
                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_828);
                          FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>
                                    (pFVar32,&local_8f8,(FContext *)param_1,local_828.Reference);
                          if (local_8f8.Data.ArrayNum == 0) {
                            iVar41 = 0;
                          }
                          else {
                            iVar41 = local_8f8.Data.ArrayNum + -1;
                          }
                          pFVar33 = ::FName::FName(local_328,iVar41,
                                                   (wchar_t *)local_8f8.Data.AllocatorInstance.Data,
                                                   FNAME_Add);
                          local_a8c = *pFVar33;
                          if (local_8f8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
                          }
                        }
                        UOptimusDeformerInstance::SetNameVariable
                                  (this_01,(FName)pFVar31->_padding_,&local_a8c);
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerStringInputs).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerBoolInputs).ArrayNum) {
                    pTVar5 = &this->DeformerBoolInputs;
                    do {
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerBoolInputs).ArrayNum) {
                        uVar20 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      local_470.Reference = (pTVar5->AllocatorInstance).Data + (int)uVar38;
                      local_470.Index = uVar38;
                      local_470.ContainerReference = pTVar5;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_470);
                      if ((pFVar31 != (FDataflowInput *)0x0) &&
                         (bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"bool"), bVar18)) {
                        bVar18 = false;
                        uVar20 = 0;
                        if ((int)uVar38 < (this->DeformerBoolInputs).ArrayNum) {
                          uVar20 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar20 == 0) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar19)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        local_678.Reference = (pTVar5->AllocatorInstance).Data + (int)uVar38;
                        local_678.Index = uVar38;
                        local_678.ContainerReference = pTVar5;
                        pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_678);
                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                          bVar18 = FDataflowNode::GetValue<FDataflowBoolTypes>
                                             ((FDataflowNode *)this,(FContext *)param_1,
                                              (TConnectionReference<FDataflowBoolTypes> *)&local_678
                                             );
                        }
                        UOptimusDeformerInstance::SetBoolVariable
                                  (this_01,(FName)pFVar31->_padding_,bVar18);
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerBoolInputs).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerTransformInputs).ArrayNum) {
                    pTVar6 = &this->DeformerTransformInputs;
                    do {
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerTransformInputs).ArrayNum) {
                        uVar20 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      local_410.Reference =
                           (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x60;
                      local_410.Index = uVar38;
                      local_410.ContainerReference = pTVar6;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_410);
                      if ((pFVar31 != (FDataflowInput *)0x0) &&
                         (bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"FTransform"), bVar18)
                         ) {
                        uVar20 = 0;
                        if ((int)uVar38 < (this->DeformerTransformInputs).ArrayNum) {
                          uVar20 = ~uVar38 >> 0x1f;
                        }
                        local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                        local_e8.Rotation.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[0];
                        local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1]
                                  >> 0x20);
                        local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                        local_e8.Rotation.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[2];
                        local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3]
                                  >> 0x20);
                        local_e8.Translation.XY.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                        local_e8.Translation.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                        local_e8.Translation.XY.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1]
                                  >> 0x20);
                        local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                        local_e8.Translation.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                        local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3]
                                  >> 0x20);
                        local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                        local_e8.Scale3D.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[0];
                        local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1]
                                  >> 0x20);
                        local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                        local_e8.Scale3D.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[2];
                        local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3]
                                  >> 0x20);
                        if ((uVar20 == 0) &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar18)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        local_690.Reference =
                             (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x60;
                        local_690.Index = uVar38;
                        local_690.ContainerReference = pTVar6;
                        pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_690);
                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                          FDataflowNode::GetValue<FDataflowTransformTypes>
                                    ((FDataflowNode *)this,&local_1c8,(FContext *)param_1,
                                     (TConnectionReference<FDataflowTransformTypes> *)&local_690);
                          local_e8.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
                          local_e8.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
                          local_e8.Rotation.ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
                          local_e8.Rotation.ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
                          local_e8.Translation.XY.m128d_f64[1] =
                               local_1c8.Translation.XY.m128d_f64[1];
                          local_e8.Translation.XY.m128d_f64[0] =
                               local_1c8.Translation.XY.m128d_f64[0];
                          local_e8.Translation.ZW.m128d_f64[1] =
                               local_1c8.Translation.ZW.m128d_f64[1];
                          local_e8.Translation.ZW.m128d_f64[0] =
                               local_1c8.Translation.ZW.m128d_f64[0];
                          local_e8.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
                          local_e8.Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
                          local_e8.Scale3D.ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
                          local_e8.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
                        }
                        UOptimusDeformerInstance::SetTransformVariable
                                  (this_01,(FName)pFVar31->_padding_,&local_e8);
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerTransformInputs).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerNumericArrays).ArrayNum) {
                    pTVar7 = &this->DeformerNumericArrays;
                    do {
                      uVar40 = ~uVar38 >> 0x1f;
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar20 = uVar40;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      lVar39 = (longlong)(int)uVar38 * 0x10;
                      local_3f8.Reference = (pTVar7->AllocatorInstance).Data + lVar39;
                      local_3f8.Index = uVar38;
                      local_3f8.ContainerReference = pTVar7;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_3f8);
                      if (pFVar31 != (FDataflowInput *)0x0) {
                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<int32>");
                        if (bVar18) {
                          local_a38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_a38.ArrayNum = 0;
                          local_a38.ArrayMax = 0;
                          uVar20 = 0;
                          if ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum) {
                            uVar20 = uVar40;
                          }
                          if ((uVar20 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          local_810.Reference = (pTVar7->AllocatorInstance).Data + lVar39;
                          local_810.Index = uVar38;
                          local_810.ContainerReference = pTVar7;
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_810);
                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_810);
                            FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>
                                      (pFVar32,&local_598,(FContext *)param_1,local_810.Reference);
                            FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
                            To<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_598,&local_a38);
                            if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                            {
                              FMemory::Free(local_598.AllocatorInstance.Data);
                            }
                          }
                          UOptimusDeformerInstance::SetIntArrayVariable
                                    (this_01,(FName)pFVar31->_padding_,&local_a38);
                          FVar37.Data = local_a38.AllocatorInstance.Data;
                        }
                        else {
                          bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<uint32>");
                          if (bVar18) {
                            local_a28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_a28.ArrayNum = 0;
                            local_a28.ArrayMax = 0;
                            uVar20 = 0;
                            if ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum) {
                              uVar20 = uVar40;
                            }
                            if ((uVar20 == 0) &&
                               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            local_7f8.Reference = (pTVar7->AllocatorInstance).Data + lVar39;
                            local_7f8.Index = uVar38;
                            local_7f8.ContainerReference = pTVar7;
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7f8);
                            if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7f8);
                              FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>
                                        (pFVar32,&local_5e8,(FContext *)param_1,local_7f8.Reference)
                              ;
                              FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
                              To<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_5e8,&local_a28);
                              if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                                 ) {
                                FMemory::Free(local_5e8.AllocatorInstance.Data);
                              }
                            }
                            UOptimusDeformerInstance::SetIntArrayVariable
                                      (this_01,(FName)pFVar31->_padding_,&local_a28);
                            FVar37.Data = local_a28.AllocatorInstance.Data;
                          }
                          else {
                            bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<double>");
                            if (bVar18) {
                              local_a18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                              local_a18.ArrayNum = 0;
                              local_a18.ArrayMax = 0;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum) {
                                uVar20 = uVar40;
                              }
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_7c8.Reference = (pTVar7->AllocatorInstance).Data + lVar39;
                              local_7c8.Index = uVar38;
                              local_7c8.ContainerReference = pTVar7;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7c8);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7c8)
                                ;
                                FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>
                                          (pFVar32,&local_578,(FContext *)param_1,
                                           local_7c8.Reference);
                                FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
                                To<TArray<double,TSizedDefaultAllocator<32>_>_>
                                          (&local_578,&local_a18);
                                if (local_578.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_578.AllocatorInstance.Data);
                                }
                              }
                              UOptimusDeformerInstance::SetFloatArrayVariable
                                        (this_01,(FName)pFVar31->_padding_,&local_a18);
                              FVar37.Data = local_a18.AllocatorInstance.Data;
                            }
                            else {
                              bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<float>");
                              if (!bVar18) goto LAB_14e2479e7;
                              local_a08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                              local_a08.ArrayNum = 0;
                              local_a08.ArrayMax = 0;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum) {
                                uVar20 = ~uVar38 >> 0x1f;
                              }
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_7b0.Reference =
                                   (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                              local_7b0.Index = uVar38;
                              local_7b0.ContainerReference = pTVar7;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7b0);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_7b0)
                                ;
                                FDataflowInput::GetValueFromAnyType<FDataflowNumericArrayTypes>
                                          (pFVar32,&local_568,(FContext *)param_1,
                                           local_7b0.Reference);
                                FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
                                To<TArray<double,TSizedDefaultAllocator<32>_>_>
                                          (&local_568,&local_a08);
                                if (local_568.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_568.AllocatorInstance.Data);
                                }
                              }
                              UOptimusDeformerInstance::SetFloatArrayVariable
                                        (this_01,(FName)pFVar31->_padding_,&local_a08);
                              FVar37.Data = local_a08.AllocatorInstance.Data;
                            }
                          }
                        }
                        if (FVar37.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar37.Data);
                        }
                      }
LAB_14e2479e7:
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerNumericArrays).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerVectorArrays).ArrayNum) {
                    pTVar8 = &this->DeformerVectorArrays;
                    do {
                      uVar40 = ~uVar38 >> 0x1f;
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar20 = uVar40;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      lVar39 = (longlong)(int)uVar38 * 0x10;
                      local_3e0.Reference = (pTVar8->AllocatorInstance).Data + lVar39;
                      local_3e0.Index = uVar38;
                      local_3e0.ContainerReference = pTVar8;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_3e0);
                      if (pFVar31 != (FDataflowInput *)0x0) {
                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FVector2D>");
                        if (bVar18) {
                          local_9f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_9f8.ArrayNum = 0;
                          local_9f8.ArrayMax = 0;
                          uVar20 = 0;
                          if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                            uVar20 = uVar40;
                          }
                          if ((uVar20 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          local_798.Reference = (pTVar8->AllocatorInstance).Data + lVar39;
                          local_798.Index = uVar38;
                          local_798.ContainerReference = pTVar8;
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_798);
                          if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_798);
                            FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                      (pFVar32,&local_558,(FContext *)param_1,local_798.Reference);
                            FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                            ::To<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                                      (&local_558,&local_9f8);
                            if (local_558.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                            {
                              FMemory::Free(local_558.AllocatorInstance.Data);
                            }
                          }
                          UOptimusDeformerInstance::SetVector2ArrayVariable
                                    (this_01,(FName)pFVar31->_padding_,&local_9f8);
                          FVar37.Data = local_9f8.AllocatorInstance.Data;
                        }
                        else {
                          bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FVector>");
                          if (bVar18) {
                            local_9e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_9e8.ArrayNum = 0;
                            local_9e8.ArrayMax = 0;
                            uVar20 = 0;
                            if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                              uVar20 = uVar40;
                            }
                            if ((uVar20 == 0) &&
                               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            local_780.Reference = (pTVar8->AllocatorInstance).Data + lVar39;
                            local_780.Index = uVar38;
                            local_780.ContainerReference = pTVar8;
                            pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_780);
                            if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_780);
                              FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                        (pFVar32,&local_548,(FContext *)param_1,local_780.Reference)
                              ;
                              FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                              ::To<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                                        (&local_548,&local_9e8);
                              if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                                 ) {
                                FMemory::Free(local_548.AllocatorInstance.Data);
                              }
                            }
                            UOptimusDeformerInstance::SetVectorArrayVariable
                                      (this_01,(FName)pFVar31->_padding_,&local_9e8);
                            FVar37.Data = local_9e8.AllocatorInstance.Data;
                          }
                          else {
                            bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FVector4>");
                            if (bVar18) {
                              local_9d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                              local_9d8.ArrayNum = 0;
                              local_9d8.ArrayMax = 0;
                              uVar20 = 0;
                              if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                uVar20 = uVar40;
                              }
                              if ((uVar20 == 0) &&
                                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              local_768.Reference = (pTVar8->AllocatorInstance).Data + lVar39;
                              local_768.Index = uVar38;
                              local_768.ContainerReference = pTVar8;
                              pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_768);
                              if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_768)
                                ;
                                FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                          (pFVar32,&local_538,(FContext *)param_1,
                                           local_768.Reference);
                                FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                ::
                                To<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                          (&local_538,&local_9d8);
                                if (local_538.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_538.AllocatorInstance.Data);
                                }
                              }
                              UOptimusDeformerInstance::SetVector4ArrayVariable
                                        (this_01,(FName)pFVar31->_padding_,&local_9d8);
                              FVar37.Data = local_9d8.AllocatorInstance.Data;
                            }
                            else {
                              bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FQuat>");
                              if (bVar18) {
                                local_9c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                                local_9c8.ArrayNum = 0;
                                local_9c8.ArrayMax = 0;
                                uVar20 = 0;
                                if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                  uVar20 = ~uVar38 >> 0x1f;
                                }
                                if ((uVar20 == 0) &&
                                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                  pcVar15 = (code *)swi(3);
                                  (*pcVar15)();
                                  return;
                                }
                                local_8d0.Reference =
                                     (pTVar8->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10
                                ;
                                local_8d0.Index = uVar38;
                                local_8d0.ContainerReference = pTVar8;
                                pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_8d0)
                                ;
                                if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                  pFVar32 = FDataflowNode::FindInput
                                                      ((FDataflowNode *)this,&local_8d0);
                                  FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                            (pFVar32,&local_4c8,(FContext *)param_1,
                                             local_8d0.Reference);
                                  FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                  ::To<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                                            (&local_4c8,&local_9c8);
                                  if (local_4c8.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_4c8.AllocatorInstance.Data);
                                  }
                                }
                                UOptimusDeformerInstance::SetQuatArrayVariable
                                          (this_01,(FName)pFVar31->_padding_,&local_9c8);
                                FVar37.Data = local_9c8.AllocatorInstance.Data;
                              }
                              else {
                                bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                         L"TArray<FLinearColor>");
                                if (bVar18) {
                                  local_9b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                                  local_9b8.ArrayNum = 0;
                                  local_9b8.ArrayMax = 0;
                                  uVar20 = 0;
                                  if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                    uVar20 = ~uVar38 >> 0x1f;
                                  }
                                  if ((uVar20 == 0) &&
                                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                    pcVar15 = (code *)swi(3);
                                    (*pcVar15)();
                                    return;
                                  }
                                  local_750.Reference =
                                       (pTVar8->AllocatorInstance).Data +
                                       (longlong)(int)uVar38 * 0x10;
                                  local_750.Index = uVar38;
                                  local_750.ContainerReference = pTVar8;
                                  pFVar32 = FDataflowNode::FindInput
                                                      ((FDataflowNode *)this,&local_750);
                                  if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                    pFVar32 = FDataflowNode::FindInput
                                                        ((FDataflowNode *)this,&local_750);
                                    FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                              (pFVar32,&local_528,(FContext *)param_1,
                                               local_750.Reference);
                                    FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                    ::To<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                                              (&local_528,&local_9b8);
                                    if (local_528.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_528.AllocatorInstance.Data);
                                    }
                                  }
                                  UOptimusDeformerInstance::SetLinearColorArrayVariable
                                            (this_01,(FName)pFVar31->_padding_,&local_9b8);
                                  FVar37.Data = local_9b8.AllocatorInstance.Data;
                                }
                                else {
                                  bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                           L"TArray<FIntPoint>");
                                  if (bVar18) {
                                    local_9a8.AllocatorInstance.Data =
                                         (FScriptContainerElement *)0x0;
                                    local_9a8.ArrayNum = 0;
                                    local_9a8.ArrayMax = 0;
                                    uVar20 = 0;
                                    if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                      uVar20 = ~uVar38 >> 0x1f;
                                    }
                                    if ((uVar20 == 0) &&
                                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                      pcVar15 = (code *)swi(3);
                                      (*pcVar15)();
                                      return;
                                    }
                                    local_738.Reference =
                                         (pTVar8->AllocatorInstance).Data +
                                         (longlong)(int)uVar38 * 0x10;
                                    local_738.Index = uVar38;
                                    local_738.ContainerReference = pTVar8;
                                    pFVar32 = FDataflowNode::FindInput
                                                        ((FDataflowNode *)this,&local_738);
                                    if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                      pFVar32 = FDataflowNode::FindInput
                                                          ((FDataflowNode *)this,&local_738);
                                      FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>
                                                (pFVar32,&local_518,(FContext *)param_1,
                                                 local_738.Reference);
                                      FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                      ::
                                      To<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                                                (&local_518,&local_9a8);
                                      if (local_518.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_518.AllocatorInstance.Data);
                                      }
                                    }
                                    UOptimusDeformerInstance::SetInt2ArrayVariable
                                              (this_01,(FName)pFVar31->_padding_,&local_9a8);
                                    FVar37.Data = local_9a8.AllocatorInstance.Data;
                                  }
                                  else {
                                    bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                             L"TArray<FIntVector3>");
                                    if (bVar18) {
                                      local_998.AllocatorInstance.Data =
                                           (FScriptContainerElement *)0x0;
                                      local_998.ArrayNum = 0;
                                      local_998.ArrayMax = 0;
                                      uVar20 = 0;
                                      if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                        uVar20 = ~uVar38 >> 0x1f;
                                      }
                                      if ((uVar20 == 0) &&
                                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                        pcVar15 = (code *)swi(3);
                                        (*pcVar15)();
                                        return;
                                      }
                                      local_720.Reference =
                                           (pTVar8->AllocatorInstance).Data +
                                           (longlong)(int)uVar38 * 0x10;
                                      local_720.Index = uVar38;
                                      local_720.ContainerReference = pTVar8;
                                      pFVar32 = FDataflowNode::FindInput
                                                          ((FDataflowNode *)this,&local_720);
                                      if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                        pFVar32 = FDataflowNode::FindInput
                                                            ((FDataflowNode *)this,&local_720);
                                        FDataflowInput::
                                        GetValueFromAnyType<FDataflowVectorArrayTypes>
                                                  (pFVar32,&local_588,(FContext *)param_1,
                                                   local_720.Reference);
                                        FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                        ::
                                        To<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                                                  (&local_588,&local_998);
                                        if (local_588.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_588.AllocatorInstance.Data);
                                        }
                                      }
                                      UOptimusDeformerInstance::SetInt3ArrayVariable
                                                (this_01,(FName)pFVar31->_padding_,&local_998);
                                      FVar37.Data = local_998.AllocatorInstance.Data;
                                    }
                                    else {
                                      bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                               L"TArray<FIntVector4>");
                                      if (bVar18) {
                                        local_988.AllocatorInstance.Data =
                                             (FScriptContainerElement *)0x0;
                                        local_988.ArrayNum = 0;
                                        local_988.ArrayMax = 0;
                                        uVar20 = 0;
                                        if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                          uVar20 = ~uVar38 >> 0x1f;
                                        }
                                        if ((uVar20 == 0) &&
                                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                          pcVar15 = (code *)swi(3);
                                          (*pcVar15)();
                                          return;
                                        }
                                        local_708.Reference =
                                             (pTVar8->AllocatorInstance).Data +
                                             (longlong)(int)uVar38 * 0x10;
                                        local_708.Index = uVar38;
                                        local_708.ContainerReference = pTVar8;
                                        pFVar32 = FDataflowNode::FindInput
                                                            ((FDataflowNode *)this,&local_708);
                                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                          pFVar32 = FDataflowNode::FindInput
                                                              ((FDataflowNode *)this,&local_708);
                                          FDataflowInput::
                                          GetValueFromAnyType<FDataflowVectorArrayTypes>
                                                    (pFVar32,&local_508,(FContext *)param_1,
                                                     local_708.Reference);
                                          FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                          ::
                                          To<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                                                    (&local_508,&local_988);
                                          if (local_508.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_508.AllocatorInstance.Data);
                                          }
                                        }
                                        UOptimusDeformerInstance::SetInt4ArrayVariable
                                                  (this_01,(FName)pFVar31->_padding_,&local_988);
                                        FVar37.Data = local_988.AllocatorInstance.Data;
                                      }
                                      else {
                                        bVar18 = ::FName::Equals((FName)pFVar31->_padding_,
                                                                 L"TArray<FRotator>");
                                        if (!bVar18) goto LAB_14e2483cd;
                                        local_a68.AllocatorInstance.Data =
                                             (FScriptContainerElement *)0x0;
                                        local_a68.ArrayNum = 0;
                                        local_a68.ArrayMax = 0;
                                        uVar20 = 0;
                                        if ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum) {
                                          uVar20 = ~uVar38 >> 0x1f;
                                        }
                                        if ((uVar20 == 0) &&
                                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                                          pcVar15 = (code *)swi(3);
                                          (*pcVar15)();
                                          return;
                                        }
                                        local_6f0.Reference =
                                             (pTVar8->AllocatorInstance).Data +
                                             (longlong)(int)uVar38 * 0x10;
                                        local_6f0.Index = uVar38;
                                        local_6f0.ContainerReference = pTVar8;
                                        pFVar32 = FDataflowNode::FindInput
                                                            ((FDataflowNode *)this,&local_6f0);
                                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                                          pFVar32 = FDataflowNode::FindInput
                                                              ((FDataflowNode *)this,&local_6f0);
                                          FDataflowInput::
                                          GetValueFromAnyType<FDataflowVectorArrayTypes>
                                                    (pFVar32,&local_4f8,(FContext *)param_1,
                                                     local_6f0.Reference);
                                          FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                                          ::
                                          To<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                                                    (&local_4f8,&local_a68);
                                          if (local_4f8.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_4f8.AllocatorInstance.Data);
                                          }
                                        }
                                        UOptimusDeformerInstance::SetRotatorArrayVariable
                                                  (this_01,(FName)pFVar31->_padding_,&local_a68);
                                        FVar37.Data = local_a68.AllocatorInstance.Data;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        if (FVar37.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar37.Data);
                        }
                      }
LAB_14e2483cd:
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerVectorArrays).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerBoolArrays).ArrayNum) {
                    pTVar9 = &this->DeformerBoolArrays;
                    do {
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerBoolArrays).ArrayNum) {
                        uVar20 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      local_4b8.Reference =
                           (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                      local_4b8.Index = uVar38;
                      local_4b8.ContainerReference = pTVar9;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4b8);
                      if ((pFVar31 != (FDataflowInput *)0x0) &&
                         (bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FTransform>"),
                         bVar18)) {
                        local_a48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_a48.ArrayNum = 0;
                        local_a48.ArrayMax = 0;
                        uVar20 = 0;
                        if ((int)uVar38 < (this->DeformerBoolArrays).ArrayNum) {
                          uVar20 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar20 == 0) &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar18)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        local_950.Reference =
                             (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                        local_950.Index = uVar38;
                        local_950.ContainerReference = pTVar9;
                        pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_950);
                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_950);
                          FDataflowInput::GetValueFromAnyType<FDataflowBoolArrayTypes>
                                    (pFVar32,&local_4e8,(FContext *)param_1,local_950.Reference);
                          FDataflowConverter<TArray<bool,TSizedDefaultAllocator<32>_>_>::
                          To<TArray<bool,TSizedDefaultAllocator<32>_>_>(&local_4e8,&local_a48);
                          if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4e8.AllocatorInstance.Data);
                          }
                        }
                        UOptimusDeformerInstance::SetBoolArrayVariable
                                  (this_01,(FName)pFVar31->_padding_,&local_a48);
                        if (local_a48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_a48.AllocatorInstance.Data);
                        }
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerBoolArrays).ArrayNum);
                  }
                  uVar38 = 0;
                  if (0 < (this->DeformerTransformArrays).ArrayNum) {
                    pTVar10 = &this->DeformerTransformArrays;
                    do {
                      uVar20 = 0;
                      if ((int)uVar38 < (this->DeformerTransformArrays).ArrayNum) {
                        uVar20 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar20 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      local_4a0.Reference =
                           (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                      local_4a0.Index = uVar38;
                      local_4a0.ContainerReference = pTVar10;
                      pFVar31 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4a0);
                      if ((pFVar31 != (FDataflowInput *)0x0) &&
                         (bVar18 = ::FName::Equals((FName)pFVar31->_padding_,L"TArray<FTransform>"),
                         bVar18)) {
                        local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_a58.ArrayNum = 0;
                        local_a58.ArrayMax = 0;
                        uVar20 = 0;
                        if ((int)uVar38 < (this->DeformerTransformArrays).ArrayNum) {
                          uVar20 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar20 == 0) &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar18)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        local_938.Reference =
                             (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10;
                        local_938.Index = uVar38;
                        local_938.ContainerReference = pTVar10;
                        pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_938);
                        if (pFVar32->Connection != (FDataflowOutput *)0x0) {
                          pFVar32 = FDataflowNode::FindInput((FDataflowNode *)this,&local_938);
                          FDataflowInput::GetValueFromAnyType<FDataflowTransformArrayTypes>
                                    (pFVar32,&local_4d8,(FContext *)param_1,local_938.Reference);
                          FDataflowConverter<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                          ::To<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                                    (&local_4d8,&local_a58);
                          if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4d8.AllocatorInstance.Data);
                          }
                        }
                        UOptimusDeformerInstance::SetTransformArrayVariable
                                  (this_01,(FName)pFVar31->_padding_,&local_a58);
                        if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_a58.AllocatorInstance.Data);
                        }
                      }
                      uVar38 = uVar38 + 1;
                    } while ((int)uVar38 < (this->DeformerTransformArrays).ArrayNum);
                  }
                }
              }
            }
          }
        }
      }
LAB_14e24873e:
      uVar36 = (ulonglong)local_a90;
      FVar37.Data = (FScriptContainerElement *)&local_a98->_padding_;
    }
  }
  local_488.Reference = &this->PhysicsSolvers;
  local_488.Index = -1;
  local_488.ContainerReference = (void *)0x0;
  pFVar34 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_488);
  if (pFVar34 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_aaf);
  }
  else if (pFVar34->_padding_ != 0) {
    FVar35 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar34);
    uVar38 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar34);
    pFVar27 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar34,&local_168);
    pFVar14 = (FProperty *)pFVar34->_padding_;
    uVar26 = CityHash64((char *)&pFVar34->_padding_,0x10);
    UE::Dataflow::FContext::
    SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
              ((FContext *)param_1,(uint)uVar26,pFVar14,&local_aa8,pFVar27,uVar38,
               (FTimestamp *)FVar35.Value);
  }
  if ((FDataflowInput *)local_aa8.AllocatorInstance.Data != (FDataflowInput *)0x0) {
    FMemory::Free(local_aa8.AllocatorInstance.Data);
  }
  return;
}

// AddPins @ 14e248890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FAddSolverDeformerDataflowNode::AddPins
          (FAddSolverDeformerDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *this_02;
  TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_> *this_03;
  TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *this_04;
  TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *this_05;
  UOptimusDeformer *pUVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FOptimusDataTypeRegistry *pFVar13;
  FFieldClass *pFVar14;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar15;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar16;
  FDataflowInput *pFVar17;
  FName *pFVar18;
  UScriptStruct *pUVar19;
  ulonglong uVar20;
  FConnectionReference *pFVar21;
  FScriptContainerElement *pFVar22;
  FName FVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_1178;
  undefined8 local_1170;
  undefined1 local_1168 [16];
  FSoftObjectPath FStack_1158;
  longlong local_1138;
  FName local_1130;
  FName local_1128;
  FName local_1120;
  FName local_1118;
  FName local_1110;
  FName local_1108;
  FName local_1100;
  FName local_10f8;
  FName local_10f0;
  FName local_10e8;
  FName local_10e0;
  FName local_10d8;
  FName local_10d0;
  FName local_10c8;
  FName local_10c0;
  FName local_10b8;
  FName local_10b0;
  FName local_10a8;
  FName local_10a0;
  FName local_1098;
  FName local_1090;
  FName local_1088;
  FName local_1080;
  FName local_1078;
  FName local_1070;
  FName local_1068;
  FName local_1060;
  FName local_1058;
  FName local_1050;
  FName local_1048;
  FName local_1040;
  FName local_1038;
  FName local_1030;
  FName local_1028;
  FName local_1020;
  FName local_1018;
  FName local_1010;
  FName local_1008;
  FName local_1000;
  FName local_ff8;
  FName local_ff0;
  FName local_fe8;
  FName local_fe0;
  FName local_fd8;
  FName local_fd0;
  FName local_fc8;
  FName local_fc0;
  FName local_fb8;
  FName local_fb0;
  FName local_fa8;
  FName local_fa0;
  FName local_f98;
  FName local_f90;
  FName local_f88;
  FName local_f80;
  FName local_f78;
  FName local_f70;
  FName local_f68;
  FName local_f60;
  FName local_f58;
  FName local_f50;
  FName local_f48;
  FScriptContainerElement *local_f40;
  FName local_f38;
  FName local_f30;
  UOptimusVariableContainer *local_f28;
  FScriptContainerElement *local_f20;
  FConnectionReference local_f18;
  FConnectionReference local_f00;
  FConnectionReference local_ee8;
  FConnectionReference local_ed0;
  FConnectionReference local_eb8;
  FConnectionReference local_ea0;
  FConnectionReference local_e88;
  FConnectionReference local_e70;
  FConnectionReference local_e58;
  FConnectionReference local_e40;
  FConnectionReference local_e28;
  FConnectionReference local_e10;
  FConnectionReference local_df8;
  FConnectionReference local_de0;
  FConnectionReference local_dc8;
  FConnectionReference local_db0;
  FConnectionReference local_d98;
  FConnectionReference local_d80;
  FConnectionReference local_d68;
  FConnectionReference local_d50;
  FConnectionReference local_d38;
  FConnectionReference local_d20;
  FConnectionReference local_d08;
  FConnectionReference local_cf0;
  FConnectionReference local_cd8;
  FConnectionReference local_cc0;
  FConnectionReference local_ca8;
  FConnectionReference local_c90;
  FConnectionReference local_c78;
  FConnectionReference local_c60;
  FConnectionReference local_c48;
  FConnectionReference local_c30;
  FConnectionReference local_c18;
  FConnectionReference local_c00;
  FConnectionReference local_be8;
  FConnectionReference local_bd0;
  FConnectionReference local_bb8;
  FConnectionReference local_ba0;
  FConnectionReference local_b88;
  FConnectionReference local_b70;
  FConnectionReference local_b58;
  FConnectionReference local_b40;
  FConnectionReference local_b28;
  FConnectionReference local_b10;
  FConnectionReference local_af8;
  FConnectionReference local_ae0;
  FConnectionReference local_ac8;
  FConnectionReference local_ab0;
  FConnectionReference local_a98;
  FConnectionReference local_a80;
  FConnectionReference local_a68;
  FConnectionReference local_a50;
  FConnectionReference local_a38;
  FConnectionReference local_a20;
  FConnectionReference local_a08;
  FConnectionReference local_9f0;
  FConnectionReference local_9d8;
  FConnectionReference local_9c0;
  FConnectionReference local_9a8;
  FConnectionReference local_990;
  FConnectionReference local_978;
  FConnectionReference local_960;
  FConnectionReference local_948;
  FConnectionReference local_930;
  FName local_918;
  FName local_910;
  FName local_908;
  FName local_900;
  FName local_8f8;
  FName local_8f0;
  FName local_8e8;
  FName local_8e0;
  FName local_8d8;
  FName local_8d0;
  FName local_8c8;
  FName local_8c0;
  FName local_8b8;
  FName local_8b0;
  FName local_8a8;
  FName local_8a0;
  FName local_898;
  FName local_890;
  FName local_888;
  FName local_880;
  FName local_878;
  FName local_870;
  FName local_868;
  FName local_860;
  FName local_858;
  FName local_850;
  FName local_848;
  FName local_840;
  FName local_838;
  FName local_830;
  FName local_828;
  FName local_820;
  undefined1 local_818 [32];
  void *local_7f8;
  undefined1 local_7e8 [32];
  void *local_7c8;
  undefined1 local_7b8 [32];
  void *local_798;
  undefined1 local_788 [32];
  void *local_768;
  undefined1 local_758 [32];
  void *local_738;
  undefined1 local_728 [32];
  void *local_708;
  undefined1 local_6f8 [32];
  void *local_6d8;
  undefined1 local_6c8 [32];
  void *local_6a8;
  undefined1 local_698 [32];
  void *local_678;
  undefined1 local_668 [32];
  void *local_648;
  undefined1 local_638 [32];
  void *local_618;
  undefined1 local_608 [32];
  void *local_5e8;
  undefined1 local_5d8 [32];
  void *local_5b8;
  undefined1 local_5a8 [32];
  void *local_588;
  undefined1 local_578 [32];
  void *local_558;
  undefined1 local_548 [32];
  void *local_528;
  undefined1 local_518 [32];
  void *local_4f8;
  undefined1 local_4e8 [32];
  void *local_4c8;
  undefined1 local_4b8 [32];
  void *local_498;
  undefined1 local_488 [32];
  void *local_468;
  undefined1 local_458 [32];
  void *local_438;
  undefined1 local_428 [32];
  void *local_408;
  undefined1 local_3f8 [32];
  void *local_3d8;
  undefined1 local_3c8 [32];
  void *local_3a8;
  undefined1 local_398 [32];
  void *local_378;
  undefined1 local_368 [32];
  void *local_348;
  undefined1 local_338 [32];
  void *local_318;
  TSharedPtr<FOptimusDataType_const_,1> local_308;
  TSharedPtr<FOptimusDataType_const_,1> local_2f8;
  TSharedPtr<FOptimusDataType_const_,1> local_2e8;
  TSharedPtr<FOptimusDataType_const_,1> local_2d8;
  TSharedPtr<FOptimusDataType_const_,1> local_2c8;
  TSharedPtr<FOptimusDataType_const_,1> local_2b8;
  TSharedPtr<FOptimusDataType_const_,1> local_2a8;
  TSharedPtr<FOptimusDataType_const_,1> local_298;
  TSharedPtr<FOptimusDataType_const_,1> local_288;
  TSharedPtr<FOptimusDataType_const_,1> local_278;
  TSharedPtr<FOptimusDataType_const_,1> local_268;
  TSharedPtr<FOptimusDataType_const_,1> local_258;
  TSharedPtr<FOptimusDataType_const_,1> local_248;
  TSharedPtr<FOptimusDataType_const_,1> local_238;
  TSharedPtr<FOptimusDataType_const_,1> local_228;
  TSharedPtr<FOptimusDataType_const_,1> local_218;
  TSharedPtr<FOptimusDataType_const_,1> local_208;
  TSharedPtr<FOptimusDataType_const_,1> local_1f8;
  TSharedPtr<FOptimusDataType_const_,1> local_1e8;
  TSharedPtr<FOptimusDataType_const_,1> local_1d8;
  TSharedPtr<FOptimusDataType_const_,1> local_1c8;
  TSharedPtr<FOptimusDataType_const_,1> local_1b8;
  TSharedPtr<FOptimusDataType_const_,1> local_1a8;
  TSharedPtr<FOptimusDataType_const_,1> local_198;
  TSharedPtr<FOptimusDataType_const_,1> local_188;
  TSharedPtr<FOptimusDataType_const_,1> local_178;
  TSharedPtr<FOptimusDataType_const_,1> local_168;
  TSharedPtr<FOptimusDataType_const_,1> local_158;
  TSharedPtr<FOptimusDataType_const_,1> local_148;
  TSharedPtr<FOptimusDataType_const_,1> local_138;
  TSharedPtr<FOptimusDataType_const_,1> local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_118;
  undefined1 local_108 [48];
  undefined1 local_d8 [48];
  undefined1 local_a8 [48];
  undefined1 local_78 [56];
  
  pUVar6 = (this->MeshDeformer).field0_0x0.DebugPtr;
  if (pUVar6 == (UOptimusDeformer *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_1178.Data = (FScriptContainerElement *)0x0;
  local_1170 = 0;
  local_f28 = (pUVar6->Variables).field0_0x0.DebugPtr;
  local_res20 = (local_f28->Descriptions).ArrayNum;
  uVar20 = (ulonglong)(int)local_res20;
  pFVar22 = (local_f28->Descriptions).AllocatorInstance.Data;
  local_f20 = pFVar22 + uVar20 * 8;
  do {
    pFVar8 = local_f20;
    uVar11 = 0;
    local_f40 = pFVar22;
    if ((local_f28->Descriptions).ArrayNum != (int)uVar20) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UOptimusVariableDescription_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar22 == pFVar8) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_1178.Data;
      __return_storage_ptr__->ArrayNum = (int)local_1170;
      __return_storage_ptr__->ArrayMax = local_1170._4_4_;
      return __return_storage_ptr__;
    }
    lVar25 = *(longlong *)pFVar22;
    local_1138 = lVar25;
    pFVar13 = FOptimusDataTypeRegistry::Get();
    pFVar14 = FIntProperty::StaticClass();
    pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_1f8,pFVar14);
    FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_1168,pTVar15);
    if (*(longlong *)(lVar25 + 0x40) == CONCAT44(local_1168._4_4_,local_1168._0_4_)) {
      bVar9 = FSoftObjectPath::operator==((FSoftObjectPath *)(lVar25 + 0x50),&FStack_1158);
      if (!bVar9) goto LAB_14e2489a1;
      bVar9 = true;
    }
    else {
LAB_14e2489a1:
      bVar9 = false;
    }
    if (FStack_1158.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1158.SubPathString.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pTVar2 = &this->DeformerNumericInputs;
      uVar10 = (this->DeformerNumericInputs).ArrayNum;
      piVar1 = &(this->DeformerNumericInputs).ArrayMax;
      if (uVar10 == *piVar1) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar24 = (longlong)(int)uVar10;
      (this->DeformerNumericInputs).ArrayNum = uVar10 + 1;
      DefaultConstructItems<FDataflowNumericTypes,int>
                ((pTVar2->AllocatorInstance).Data + lVar24 * 8,1);
      local_fb0.ComparisonIndex.Value = 0;
      local_fb0.Number = 0;
      local_f38.ComparisonIndex.Value = 0;
      local_f38.Number = 0;
      if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar16;
        }
      }
      local_f18.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
      local_f18.Index = uVar10;
      local_f18.ContainerReference = pTVar2;
      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                          ((FDataflowNode *)this,&local_f18,&local_f38,&local_fb0);
      FDataflowConnection::SetTypePolicy
                ((FDataflowConnection *)pFVar17,
                 (IDataflowTypePolicy *)
                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                  ::__l2::Instance);
      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
      pFVar18 = ::FName::FName(&local_8b0,L"int32");
      FVar23 = *pFVar18;
      uVar11 = 0;
      if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar16;
        }
      }
      local_df8.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
      local_df8.Index = uVar10;
      local_df8.ContainerReference = pTVar2;
      FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_df8,FVar23);
      local_1168._4_4_ = (undefined4)pFVar17->_padding_;
      local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
      local_1168._12_4_ = (undefined4)pFVar17->_padding_;
      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
           (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
      local_1168[0] = 1;
      FStack_1158.AssetPath.PackageName.Number =
           FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
      iVar12 = (int)local_1170;
      if ((int)local_1170 == local_1170._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
      }
      else {
LAB_14e24a715:
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
      }
    }
    else {
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pFVar14 = FUInt32Property::StaticClass();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_208,pFVar14);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_7b8,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_7b8._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_7b8 + 0x10))
        ;
        if (!bVar9) goto LAB_14e248bfa;
        bVar9 = true;
      }
      else {
LAB_14e248bfa:
        bVar9 = false;
      }
      if (local_798 != (void *)0x0) {
        FMemory::Free(local_798);
      }
      if (bVar9) {
        pTVar2 = &this->DeformerNumericInputs;
        uVar10 = (this->DeformerNumericInputs).ArrayNum;
        piVar1 = &(this->DeformerNumericInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar24 = (longlong)(int)uVar10;
        (this->DeformerNumericInputs).ArrayNum = uVar10 + 1;
        DefaultConstructItems<FDataflowNumericTypes,int>
                  ((pTVar2->AllocatorInstance).Data + lVar24 * 8,1);
        local_1130.ComparisonIndex.Value = 0;
        local_1130.Number = 0;
        local_1128.ComparisonIndex.Value = 0;
        local_1128.Number = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e10.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e10.Index = uVar10;
        local_e10.ContainerReference = pTVar2;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_e10,&local_1128,&local_1130);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
        pFVar18 = ::FName::FName(&local_8a8,L"uint32");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e28.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e28.Index = uVar10;
        local_e28.ContainerReference = pTVar2;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_e28,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pFVar14 = FDoubleProperty::StaticClass();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_218,pFVar14);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_788,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_788._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_788 + 0x10))
        ;
        if (!bVar9) goto LAB_14e248e4b;
        bVar9 = true;
      }
      else {
LAB_14e248e4b:
        bVar9 = false;
      }
      if (local_768 != (void *)0x0) {
        FMemory::Free(local_768);
      }
      if (bVar9) {
        pTVar2 = &this->DeformerNumericInputs;
        uVar10 = (this->DeformerNumericInputs).ArrayNum;
        piVar1 = &(this->DeformerNumericInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar24 = (longlong)(int)uVar10;
        (this->DeformerNumericInputs).ArrayNum = uVar10 + 1;
        DefaultConstructItems<FDataflowNumericTypes,int>
                  ((pTVar2->AllocatorInstance).Data + lVar24 * 8,1);
        local_1120.ComparisonIndex.Value = 0;
        local_1120.Number = 0;
        local_1118.ComparisonIndex.Value = 0;
        local_1118.Number = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e40.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e40.Index = uVar10;
        local_e40.ContainerReference = pTVar2;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_e40,&local_1118,&local_1120);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
        pFVar18 = ::FName::FName(&local_8a0,L"double");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e58.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e58.Index = uVar10;
        local_e58.ContainerReference = pTVar2;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_e58,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pFVar14 = FFloatProperty::StaticClass();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_228,pFVar14);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_758,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_758._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_758 + 0x10))
        ;
        if (!bVar9) goto LAB_14e24909a;
        bVar9 = true;
      }
      else {
LAB_14e24909a:
        bVar9 = false;
      }
      if (local_738 != (void *)0x0) {
        FMemory::Free(local_738);
      }
      if (bVar9) {
        pTVar2 = &this->DeformerNumericInputs;
        uVar10 = (this->DeformerNumericInputs).ArrayNum;
        piVar1 = &(this->DeformerNumericInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar24 = (longlong)(int)uVar10;
        (this->DeformerNumericInputs).ArrayNum = uVar10 + 1;
        DefaultConstructItems<FDataflowNumericTypes,int>
                  ((pTVar2->AllocatorInstance).Data + lVar24 * 8,1);
        local_1110.ComparisonIndex.Value = 0;
        local_1110.Number = 0;
        local_1108.ComparisonIndex.Value = 0;
        local_1108.Number = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e70.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e70.Index = uVar10;
        local_e70.ContainerReference = pTVar2;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_e70,&local_1108,&local_1110);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
        pFVar18 = ::FName::FName(&local_898,L"float");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerNumericInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_e88.Reference = (pTVar2->AllocatorInstance).Data + lVar24 * 8;
        local_e88.Index = uVar10;
        local_e88.ContainerReference = pTVar2;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_e88,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pUVar19 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_2c8,pUVar19);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_728,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_728._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_728 + 0x10))
        ;
        if (!bVar9) goto LAB_14e2492e9;
        bVar9 = true;
      }
      else {
LAB_14e2492e9:
        bVar9 = false;
      }
      if (local_708 != (void *)0x0) {
        FMemory::Free(local_708);
      }
      if (bVar9) {
        pTVar3 = &this->DeformerVectorInputs;
        uVar10 = (this->DeformerVectorInputs).ArrayNum;
        piVar1 = &(this->DeformerVectorInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1020,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->DeformerVectorInputs).ArrayNum = uVar10 + 1;
        lVar25 = (longlong)(int)uVar10 * 0x20;
        DefaultConstructItems<FDataflowVectorTypes,int>((pTVar3->AllocatorInstance).Data + lVar25,1)
        ;
        local_1100.ComparisonIndex.Value = 0;
        local_1100.Number = 0;
        local_10f8.ComparisonIndex.Value = 0;
        local_10f8.Number = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_f00.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_f00.Index = uVar10;
        local_f00.ContainerReference = pTVar3;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_f00,&local_10f8,&local_1100);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(local_1138 + 0x38);
        pFVar18 = ::FName::FName(&local_890,L"FVector2D");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_ea0.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_ea0.Index = uVar10;
        local_ea0.ContainerReference = pTVar3;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_ea0,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pUVar19 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_248,pUVar19);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_6f8,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_6f8._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_6f8 + 0x10))
        ;
        if (!bVar9) goto LAB_14e249540;
        bVar9 = true;
      }
      else {
LAB_14e249540:
        bVar9 = false;
      }
      if (local_6d8 != (void *)0x0) {
        FMemory::Free(local_6d8);
      }
      if (bVar9) {
        pTVar3 = &this->DeformerVectorInputs;
        uVar10 = (this->DeformerVectorInputs).ArrayNum;
        piVar1 = &(this->DeformerVectorInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1020,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->DeformerVectorInputs).ArrayNum = uVar10 + 1;
        lVar25 = (longlong)(int)uVar10 * 0x20;
        DefaultConstructItems<FDataflowVectorTypes,int>((pTVar3->AllocatorInstance).Data + lVar25,1)
        ;
        local_10f0.ComparisonIndex.Value = 0;
        local_10f0.Number = 0;
        local_10e8.ComparisonIndex.Value = 0;
        local_10e8.Number = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_eb8.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_eb8.Index = uVar10;
        local_eb8.ContainerReference = pTVar3;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_eb8,&local_10e8,&local_10f0);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(local_1138 + 0x38);
        pFVar18 = ::FName::FName(&local_888,L"FVector");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_ed0.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_ed0.Index = uVar10;
        local_ed0.ContainerReference = pTVar3;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_ed0,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pUVar19 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_268,pUVar19);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_6c8,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_6c8._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_6c8 + 0x10))
        ;
        if (!bVar9) goto LAB_14e249797;
        bVar9 = true;
      }
      else {
LAB_14e249797:
        bVar9 = false;
      }
      if (local_6a8 != (void *)0x0) {
        FMemory::Free(local_6a8);
      }
      if (bVar9) {
        pTVar3 = &this->DeformerVectorInputs;
        uVar10 = (this->DeformerVectorInputs).ArrayNum;
        piVar1 = &(this->DeformerVectorInputs).ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1020,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->DeformerVectorInputs).ArrayNum = uVar10 + 1;
        lVar25 = (longlong)(int)uVar10 * 0x20;
        DefaultConstructItems<FDataflowVectorTypes,int>((pTVar3->AllocatorInstance).Data + lVar25,1)
        ;
        local_10e0.ComparisonIndex.Value = 0;
        local_10e0.Number = 0;
        local_10d8.ComparisonIndex.Value = 0;
        local_10d8.Number = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_ee8.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_ee8.Index = uVar10;
        local_ee8.ContainerReference = pTVar3;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_ee8,&local_10d8,&local_10e0);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(local_1138 + 0x38);
        pFVar18 = ::FName::FName(&local_880,L"FVector4");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_de0.Reference = (pTVar3->AllocatorInstance).Data + lVar25;
        local_de0.Index = uVar10;
        local_de0.ContainerReference = pTVar3;
        FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_de0,FVar23);
        local_1168._4_4_ = (undefined4)pFVar17->_padding_;
        local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168._12_4_ = (undefined4)pFVar17->_padding_;
        FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
             (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
        local_1168[0] = 1;
        FStack_1158.AssetPath.PackageName.Number =
             FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
        iVar12 = (int)local_1170;
        if ((int)local_1170 != local_1170._4_4_) goto LAB_14e24a715;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
        local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
             CONCAT44(local_1168._4_4_,local_1168._0_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
             CONCAT44(local_1168._12_4_,local_1168._8_4_);
        *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
             CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
        goto LAB_14e24c449;
      }
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pUVar19 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_278,pUVar19);
      FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_818,pTVar15);
      if (*(FName *)(lVar25 + 0x40) == (FName)local_818._0_8_) {
        bVar9 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar25 + 0x50),(FSoftObjectPath *)(local_818 + 0x10))
        ;
        if (!bVar9) goto LAB_14e2499ee;
        bVar9 = true;
      }
      else {
LAB_14e2499ee:
        bVar9 = false;
      }
      if (local_7f8 != (void *)0x0) {
        FMemory::Free(local_7f8);
      }
      if (bVar9) {
        pTVar3 = &this->DeformerVectorInputs;
        uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted(pTVar3);
        local_10d0.ComparisonIndex.Value = 0;
        local_10d0.Number = 0;
        local_10c8.ComparisonIndex.Value = 0;
        local_10c8.Number = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        local_dc8.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
        local_dc8.Index = uVar10;
        local_dc8.ContainerReference = pTVar3;
        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                            ((FDataflowNode *)this,&local_dc8,&local_10c8,&local_10d0);
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)pFVar17,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                    ::__l2::Instance);
        pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
        pFVar18 = ::FName::FName(&local_878,L"FQuat");
        FVar23 = *pFVar18;
        uVar11 = 0;
        if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar16;
          }
        }
        pFVar21 = &local_db0;
        local_db0.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
        local_db0.Index = uVar10;
        local_db0.ContainerReference = pTVar3;
      }
      else {
        pFVar13 = FOptimusDataTypeRegistry::Get();
        pUVar19 = TBaseStructure<FLinearColor>::Get();
        pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_288,pUVar19);
        FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_698,pTVar15);
        if (*(FName *)(lVar25 + 0x40) == (FName)local_698._0_8_) {
          bVar9 = FSoftObjectPath::operator==
                            ((FSoftObjectPath *)(lVar25 + 0x50),
                             (FSoftObjectPath *)(local_698 + 0x10));
          if (!bVar9) goto LAB_14e249b95;
          bVar9 = true;
        }
        else {
LAB_14e249b95:
          bVar9 = false;
        }
        if (local_678 != (void *)0x0) {
          FMemory::Free(local_678);
        }
        if (bVar9) {
          pTVar3 = &this->DeformerVectorInputs;
          uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted(pTVar3);
          local_10c0.ComparisonIndex.Value = 0;
          local_10c0.Number = 0;
          local_10b8.ComparisonIndex.Value = 0;
          local_10b8.Number = 0;
          if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
              return pTVar16;
            }
          }
          local_d98.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
          local_d98.Index = uVar10;
          local_d98.ContainerReference = pTVar3;
          pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                              ((FDataflowNode *)this,&local_d98,&local_10b8,&local_10c0);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar17,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                      ::__l2::Instance);
          pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
          pFVar18 = ::FName::FName(&local_870,L"FLinearColor");
          FVar23 = *pFVar18;
          uVar11 = 0;
          if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
              return pTVar16;
            }
          }
          pFVar21 = &local_d80;
          local_d80.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
          local_d80.Index = uVar10;
          local_d80.ContainerReference = pTVar3;
        }
        else {
          pFVar13 = FOptimusDataTypeRegistry::Get();
          pUVar19 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
          pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_298,pUVar19);
          FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_668,pTVar15);
          if (*(FName *)(lVar25 + 0x40) == (FName)local_668._0_8_) {
            bVar9 = FSoftObjectPath::operator==
                              ((FSoftObjectPath *)(lVar25 + 0x50),
                               (FSoftObjectPath *)(local_668 + 0x10));
            if (!bVar9) goto LAB_14e249d3c;
            bVar9 = true;
          }
          else {
LAB_14e249d3c:
            bVar9 = false;
          }
          if (local_648 != (void *)0x0) {
            FMemory::Free(local_648);
          }
          if (bVar9) {
            pTVar3 = &this->DeformerVectorInputs;
            uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted(pTVar3);
            local_10b0.ComparisonIndex.Value = 0;
            local_10b0.Number = 0;
            local_10a8.ComparisonIndex.Value = 0;
            local_10a8.Number = 0;
            if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                return pTVar16;
              }
            }
            local_d68.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
            local_d68.Index = uVar10;
            local_d68.ContainerReference = pTVar3;
            pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                ((FDataflowNode *)this,&local_d68,&local_10a8,&local_10b0);
            FDataflowConnection::SetTypePolicy
                      ((FDataflowConnection *)pFVar17,
                       (IDataflowTypePolicy *)
                       &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                        ::__l2::Instance);
            pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
            pFVar18 = ::FName::FName(&local_868,L"FIntPoint");
            FVar23 = *pFVar18;
            uVar11 = 0;
            if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                return pTVar16;
              }
            }
            pFVar21 = &local_d50;
            local_d50.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
            local_d50.Index = uVar10;
            local_d50.ContainerReference = pTVar3;
          }
          else {
            pFVar13 = FOptimusDataTypeRegistry::Get();
            pUVar19 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
            pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_2a8,pUVar19);
            FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_638,pTVar15);
            if (*(FName *)(lVar25 + 0x40) == (FName)local_638._0_8_) {
              bVar9 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)(lVar25 + 0x50),
                                 (FSoftObjectPath *)(local_638 + 0x10));
              if (!bVar9) goto LAB_14e249ee3;
              bVar9 = true;
            }
            else {
LAB_14e249ee3:
              bVar9 = false;
            }
            if (local_618 != (void *)0x0) {
              FMemory::Free(local_618);
            }
            if (bVar9) {
              pTVar3 = &this->DeformerVectorInputs;
              uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
                                 (pTVar3);
              local_10a0.ComparisonIndex.Value = 0;
              local_10a0.Number = 0;
              local_1098.ComparisonIndex.Value = 0;
              local_1098.Number = 0;
              if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if (uVar11 == 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar7 = (code *)swi(3);
                  pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                  return pTVar16;
                }
              }
              local_d38.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
              local_d38.Index = uVar10;
              local_d38.ContainerReference = pTVar3;
              pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                  ((FDataflowNode *)this,&local_d38,&local_1098,&local_10a0);
              FDataflowConnection::SetTypePolicy
                        ((FDataflowConnection *)pFVar17,
                         (IDataflowTypePolicy *)
                         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                          ::__l2::Instance);
              pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
              pFVar18 = ::FName::FName(&local_860,L"FIntVector3");
              FVar23 = *pFVar18;
              uVar11 = 0;
              if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if (uVar11 == 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar7 = (code *)swi(3);
                  pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                  return pTVar16;
                }
              }
              pFVar21 = &local_d20;
              local_d20.Reference = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
              local_d20.Index = uVar10;
              local_d20.ContainerReference = pTVar3;
            }
            else {
              pFVar13 = FOptimusDataTypeRegistry::Get();
              pUVar19 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
              pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_2b8,pUVar19);
              FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_608,pTVar15);
              if (*(FName *)(lVar25 + 0x40) == (FName)local_608._0_8_) {
                bVar9 = FSoftObjectPath::operator==
                                  ((FSoftObjectPath *)(lVar25 + 0x50),
                                   (FSoftObjectPath *)(local_608 + 0x10));
                if (!bVar9) goto LAB_14e24a08a;
                bVar9 = true;
              }
              else {
LAB_14e24a08a:
                bVar9 = false;
              }
              if (local_5e8 != (void *)0x0) {
                FMemory::Free(local_5e8);
              }
              if (bVar9) {
                pTVar3 = &this->DeformerVectorInputs;
                uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
                                   (pTVar3);
                local_1090.ComparisonIndex.Value = 0;
                local_1090.Number = 0;
                local_1088.ComparisonIndex.Value = 0;
                local_1088.Number = 0;
                if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if (uVar11 == 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar7 = (code *)swi(3);
                    pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                    return pTVar16;
                  }
                }
                local_d08.Reference =
                     (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
                local_d08.Index = uVar10;
                local_d08.ContainerReference = pTVar3;
                pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                    ((FDataflowNode *)this,&local_d08,&local_1088,&local_1090);
                FDataflowConnection::SetTypePolicy
                          ((FDataflowConnection *)pFVar17,
                           (IDataflowTypePolicy *)
                           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                            ::__l2::Instance);
                pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                pFVar18 = ::FName::FName(&local_858,L"FIntVector4");
                FVar23 = *pFVar18;
                uVar11 = 0;
                if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if (uVar11 == 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar7 = (code *)swi(3);
                    pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
                    return pTVar16;
                  }
                }
                pFVar21 = &local_cf0;
                local_cf0.Reference =
                     (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
                local_cf0.Index = uVar10;
                local_cf0.ContainerReference = pTVar3;
              }
              else {
                pFVar13 = FOptimusDataTypeRegistry::Get();
                pUVar19 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
                pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_258,pUVar19);
                FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_5d8,pTVar15);
                if (*(FName *)(lVar25 + 0x40) == (FName)local_5d8._0_8_) {
                  bVar9 = FSoftObjectPath::operator==
                                    ((FSoftObjectPath *)(lVar25 + 0x50),
                                     (FSoftObjectPath *)(local_5d8 + 0x10));
                  if (!bVar9) goto LAB_14e24a231;
                  bVar9 = true;
                }
                else {
LAB_14e24a231:
                  bVar9 = false;
                }
                if (local_5b8 != (void *)0x0) {
                  FMemory::Free(local_5b8);
                }
                if (bVar9) {
                  pTVar3 = &this->DeformerVectorInputs;
                  uVar10 = TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
                                     (pTVar3);
                  local_1080.ComparisonIndex.Value = 0;
                  local_1080.Number = 0;
                  local_1078.ComparisonIndex.Value = 0;
                  local_1078.Number = 0;
                  if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if (uVar11 == 0) {
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar7 = (code *)swi(3);
                      pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                (*pcVar7)();
                      return pTVar16;
                    }
                  }
                  local_cd8.Reference =
                       (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
                  local_cd8.Index = uVar10;
                  local_cd8.ContainerReference = pTVar3;
                  pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                      ((FDataflowNode *)this,&local_cd8,&local_1078,&local_1080);
                  FDataflowConnection::SetTypePolicy
                            ((FDataflowConnection *)pFVar17,
                             (IDataflowTypePolicy *)
                             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                              ::__l2::Instance);
                  pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                  pFVar18 = ::FName::FName(&local_850,L"FRotator");
                  FVar23 = *pFVar18;
                  uVar11 = 0;
                  if ((int)uVar10 < (this->DeformerVectorInputs).ArrayNum) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if (uVar11 == 0) {
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar7 = (code *)swi(3);
                      pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                (*pcVar7)();
                      return pTVar16;
                    }
                  }
                  pFVar21 = &local_cc0;
                  local_cc0.Reference =
                       (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
                  local_cc0.Index = uVar10;
                  local_cc0.ContainerReference = pTVar3;
                }
                else {
                  pFVar13 = FOptimusDataTypeRegistry::Get();
                  pFVar14 = FNameProperty::StaticClass();
                  pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_238,pFVar14);
                  FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_5a8,pTVar15)
                  ;
                  if (*(FName *)(lVar25 + 0x40) == (FName)local_5a8._0_8_) {
                    bVar9 = FSoftObjectPath::operator==
                                      ((FSoftObjectPath *)(lVar25 + 0x50),
                                       (FSoftObjectPath *)(local_5a8 + 0x10));
                    if (!bVar9) goto LAB_14e24a3d8;
                    bVar9 = true;
                  }
                  else {
LAB_14e24a3d8:
                    bVar9 = false;
                  }
                  if (local_588 != (void *)0x0) {
                    FMemory::Free(local_588);
                  }
                  if (bVar9) {
                    this_00 = &this->DeformerStringInputs;
                    uVar10 = TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
                                       (this_00);
                    local_1070.ComparisonIndex.Value = 0;
                    local_1070.Number = 0;
                    local_1068.ComparisonIndex.Value = 0;
                    local_1068.Number = 0;
                    if ((int)uVar10 < (this->DeformerStringInputs).ArrayNum) {
                      uVar11 = ~uVar10 >> 0x1f;
                    }
                    if (uVar11 == 0) {
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar7 = (code *)swi(3);
                        pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                  (*pcVar7)();
                        return pTVar16;
                      }
                    }
                    local_ca8.Reference =
                         (this_00->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                    local_ca8.Index = uVar10;
                    local_ca8.ContainerReference = this_00;
                    pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                        ((FDataflowNode *)this,&local_ca8,&local_1068,&local_1070);
                    FDataflowConnection::SetTypePolicy
                              ((FDataflowConnection *)pFVar17,
                               (IDataflowTypePolicy *)
                               &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FString,FName,FText>::GetInterface(void)'
                                ::__l2::Instance);
                    pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                    pFVar18 = ::FName::FName(&local_848,L"FName");
                    FVar23 = *pFVar18;
                    uVar11 = 0;
                    if ((int)uVar10 < (this->DeformerStringInputs).ArrayNum) {
                      uVar11 = ~uVar10 >> 0x1f;
                    }
                    if (uVar11 == 0) {
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar7 = (code *)swi(3);
                        pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                  (*pcVar7)();
                        return pTVar16;
                      }
                    }
                    pFVar21 = &local_c90;
                    local_c90.Reference =
                         (this_00->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                    local_c90.Index = uVar10;
                    local_c90.ContainerReference = this_00;
                  }
                  else {
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pFVar14 = FBoolProperty::StaticClass();
                    pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_1e8,pFVar14);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_578,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_578._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_578 + 0x10));
                      if (!bVar9) goto LAB_14e24a57f;
                      bVar9 = true;
                    }
                    else {
LAB_14e24a57f:
                      bVar9 = false;
                    }
                    if (local_558 != (void *)0x0) {
                      FMemory::Free(local_558);
                    }
                    if (bVar9) {
                      this_01 = &this->DeformerBoolInputs;
                      uVar10 = TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_>::AddDefaulted
                                         (this_01);
                      local_1060.ComparisonIndex.Value = 0;
                      local_1060.Number = 0;
                      local_1058.ComparisonIndex.Value = 0;
                      local_1058.Number = 0;
                      if ((int)uVar10 < (this->DeformerBoolInputs).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_c78.Reference = (this_01->AllocatorInstance).Data + (int)uVar10;
                      local_c78.Index = uVar10;
                      local_c78.ContainerReference = this_01;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_c78,&local_1058,&local_1060)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<bool>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_840,L"bool");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerBoolInputs).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_c60.Reference = (this_01->AllocatorInstance).Data + (int)uVar10;
                      local_c60.Index = uVar10;
                      local_c60.ContainerReference = this_01;
                      FDataflowNode::SetInputConcreteType((FDataflowNode *)this,&local_c60,FVar23);
                      local_1168._4_4_ = (undefined4)pFVar17->_padding_;
                      local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
                      local_1168._12_4_ = (undefined4)pFVar17->_padding_;
                      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
                           (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
                      local_1168[0] = 1;
                      FStack_1158.AssetPath.PackageName.Number =
                           FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
                      iVar12 = (int)local_1170;
                      if ((int)local_1170 == local_1170._4_4_) {
                        iVar12 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
                      }
                      goto LAB_14e24a715;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindType(pFVar13,&local_1d8,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_548,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_548._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_548 + 0x10));
                      if (!bVar9) goto LAB_14e24a799;
                      bVar9 = true;
                    }
                    else {
LAB_14e24a799:
                      bVar9 = false;
                    }
                    if (local_528 != (void *)0x0) {
                      FMemory::Free(local_528);
                    }
                    if (bVar9) {
                      this_02 = &this->DeformerTransformInputs;
                      uVar10 = TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(this_02);
                      local_1050.ComparisonIndex.Value = 0;
                      local_1050.Number = 0;
                      local_1048.ComparisonIndex.Value = 0;
                      local_1048.Number = 0;
                      if ((int)uVar10 < (this->DeformerTransformInputs).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_c48.Reference =
                           (this_02->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x60;
                      local_c48.Index = uVar10;
                      local_c48.ContainerReference = this_02;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_c48,&local_1048,&local_1050)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_838,L"FTransform");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerTransformInputs).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_c30;
                      local_c30.Reference =
                           (this_02->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x60;
                      local_c30.Index = uVar10;
                      local_c30.ContainerReference = this_02;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pFVar14 = FIntProperty::StaticClass();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_1c8,pFVar14);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_518,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_518._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_518 + 0x10));
                      if (!bVar9) goto LAB_14e24a941;
                      bVar9 = true;
                    }
                    else {
LAB_14e24a941:
                      bVar9 = false;
                    }
                    if (local_4f8 != (void *)0x0) {
                      FMemory::Free(local_4f8);
                    }
                    if (bVar9) {
                      pTVar4 = &this->DeformerNumericArrays;
                      uVar10 = TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar4);
                      local_1040.ComparisonIndex.Value = 0;
                      local_1040.Number = 0;
                      local_1038.ComparisonIndex.Value = 0;
                      local_1038.Number = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_c18.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_c18.Index = uVar10;
                      local_c18.ContainerReference = pTVar4;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_c18,&local_1038,&local_1040)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_830,L"TArray<int32>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_c00;
                      local_c00.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_c00.Index = uVar10;
                      local_c00.ContainerReference = pTVar4;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pFVar14 = FUInt32Property::StaticClass();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_1b8,pFVar14);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_4e8,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_4e8._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_4e8 + 0x10));
                      if (!bVar9) goto LAB_14e24aae8;
                      bVar9 = true;
                    }
                    else {
LAB_14e24aae8:
                      bVar9 = false;
                    }
                    if (local_4c8 != (void *)0x0) {
                      FMemory::Free(local_4c8);
                    }
                    if (bVar9) {
                      pTVar4 = &this->DeformerNumericArrays;
                      uVar10 = TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar4);
                      local_1030.ComparisonIndex.Value = 0;
                      local_1030.Number = 0;
                      local_1028.ComparisonIndex.Value = 0;
                      local_1028.Number = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_be8.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_be8.Index = uVar10;
                      local_be8.ContainerReference = pTVar4;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_be8,&local_1028,&local_1030)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_828,L"TArray<uint32>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_bd0;
                      local_bd0.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_bd0.Index = uVar10;
                      local_bd0.ContainerReference = pTVar4;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pFVar14 = FDoubleProperty::StaticClass();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_1a8,pFVar14);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_4b8,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_4b8._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_4b8 + 0x10));
                      if (!bVar9) goto LAB_14e24ac95;
                      bVar9 = true;
                    }
                    else {
LAB_14e24ac95:
                      bVar9 = false;
                    }
                    if (local_498 != (void *)0x0) {
                      FMemory::Free(local_498);
                    }
                    if (bVar9) {
                      pTVar4 = &this->DeformerNumericArrays;
                      uVar10 = TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar4);
                      local_1020.ComparisonIndex.Value = 0;
                      local_1020.Number = 0;
                      local_1018.ComparisonIndex.Value = 0;
                      local_1018.Number = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_bb8.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_bb8.Index = uVar10;
                      local_bb8.ContainerReference = pTVar4;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_bb8,&local_1018,&local_1020)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_8b8,L"TArray<double>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_ba0;
                      local_ba0.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_ba0.Index = uVar10;
                      local_ba0.ContainerReference = pTVar4;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pFVar14 = FFloatProperty::StaticClass();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_198,pFVar14);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_488,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_488._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_488 + 0x10));
                      if (!bVar9) goto LAB_14e24ae48;
                      bVar9 = true;
                    }
                    else {
LAB_14e24ae48:
                      bVar9 = false;
                    }
                    if (local_468 != (void *)0x0) {
                      FMemory::Free(local_468);
                    }
                    if (bVar9) {
                      pTVar4 = &this->DeformerNumericArrays;
                      uVar10 = TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar4);
                      local_1010.ComparisonIndex.Value = 0;
                      local_1010.Number = 0;
                      local_1008.ComparisonIndex.Value = 0;
                      local_1008.Number = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_b88.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b88.Index = uVar10;
                      local_b88.ContainerReference = pTVar4;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_b88,&local_1008,&local_1010)
                      ;
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_820,L"TArray<float>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerNumericArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_b70;
                      local_b70.Reference =
                           (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b70.Index = uVar10;
                      local_b70.ContainerReference = pTVar4;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_188,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_458,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_458._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_458 + 0x10));
                      if (!bVar9) goto LAB_14e24affb;
                      bVar9 = true;
                    }
                    else {
LAB_14e24affb:
                      bVar9 = false;
                    }
                    if (local_438 != (void *)0x0) {
                      FMemory::Free(local_438);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_1000.ComparisonIndex.Value = 0;
                      local_1000.Number = 0;
                      local_ff8.ComparisonIndex.Value = 0;
                      local_ff8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_b58.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b58.Index = uVar10;
                      local_b58.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_b58,&local_ff8,&local_1000);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_918,L"TArray<FVector2D>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_b40;
                      local_b40.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b40.Index = uVar10;
                      local_b40.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TVector<double>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_178,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_428,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_428._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_428 + 0x10));
                      if (!bVar9) goto LAB_14e24b1ae;
                      bVar9 = true;
                    }
                    else {
LAB_14e24b1ae:
                      bVar9 = false;
                    }
                    if (local_408 != (void *)0x0) {
                      FMemory::Free(local_408);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_ff0.ComparisonIndex.Value = 0;
                      local_ff0.Number = 0;
                      local_fe8.ComparisonIndex.Value = 0;
                      local_fe8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_b28.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b28.Index = uVar10;
                      local_b28.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_b28,&local_fe8,&local_ff0);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_910,L"TArray<FVector>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_b10;
                      local_b10.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_b10.Index = uVar10;
                      local_b10.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_168,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_3f8,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_3f8._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_3f8 + 0x10));
                      if (!bVar9) goto LAB_14e24b361;
                      bVar9 = true;
                    }
                    else {
LAB_14e24b361:
                      bVar9 = false;
                    }
                    if (local_3d8 != (void *)0x0) {
                      FMemory::Free(local_3d8);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_fe0.ComparisonIndex.Value = 0;
                      local_fe0.Number = 0;
                      local_fd8.ComparisonIndex.Value = 0;
                      local_fd8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_af8.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_af8.Index = uVar10;
                      local_af8.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_af8,&local_fd8,&local_fe0);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_908,L"TArray<FVector4>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_ae0;
                      local_ae0.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_ae0.Index = uVar10;
                      local_ae0.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_158,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_3c8,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_3c8._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_3c8 + 0x10));
                      if (!bVar9) goto LAB_14e24b514;
                      bVar9 = true;
                    }
                    else {
LAB_14e24b514:
                      bVar9 = false;
                    }
                    if (local_3a8 != (void *)0x0) {
                      FMemory::Free(local_3a8);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_fd0.ComparisonIndex.Value = 0;
                      local_fd0.Number = 0;
                      local_fc8.ComparisonIndex.Value = 0;
                      local_fc8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_ac8.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_ac8.Index = uVar10;
                      local_ac8.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_ac8,&local_fc8,&local_fd0);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_900,L"TArray<FQuat>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_ab0;
                      local_ab0.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_ab0.Index = uVar10;
                      local_ab0.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<FLinearColor>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_138,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_7e8,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_7e8._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_7e8 + 0x10));
                      if (!bVar9) goto LAB_14e24b6c7;
                      bVar9 = true;
                    }
                    else {
LAB_14e24b6c7:
                      bVar9 = false;
                    }
                    if (local_7c8 != (void *)0x0) {
                      FMemory::Free(local_7c8);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_fc0.ComparisonIndex.Value = 0;
                      local_fc0.Number = 0;
                      local_fb8.ComparisonIndex.Value = 0;
                      local_fb8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_a98.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a98.Index = uVar10;
                      local_a98.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_a98,&local_fb8,&local_fc0);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_8f8,L"TArray<FLinearColor>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_a80;
                      local_a80.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a80.Index = uVar10;
                      local_a80.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_148,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_398,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_398._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_398 + 0x10));
                      if (!bVar9) goto LAB_14e24b87a;
                      bVar9 = true;
                    }
                    else {
LAB_14e24b87a:
                      bVar9 = false;
                    }
                    if (local_378 != (void *)0x0) {
                      FMemory::Free(local_378);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_f70.ComparisonIndex.Value = 0;
                      local_f70.Number = 0;
                      local_fa8.ComparisonIndex.Value = 0;
                      local_fa8.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_a68.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a68.Index = uVar10;
                      local_a68.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_a68,&local_fa8,&local_f70);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_8f0,L"TArray<FIntPoint>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_a50;
                      local_a50.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a50.Index = uVar10;
                      local_a50.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_128,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_368,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_368._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_368 + 0x10));
                      if (!bVar9) goto LAB_14e24ba2d;
                      bVar9 = true;
                    }
                    else {
LAB_14e24ba2d:
                      bVar9 = false;
                    }
                    if (local_348 != (void *)0x0) {
                      FMemory::Free(local_348);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_fa0.ComparisonIndex.Value = 0;
                      local_fa0.Number = 0;
                      local_f98.ComparisonIndex.Value = 0;
                      local_f98.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_a38.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a38.Index = uVar10;
                      local_a38.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_a38,&local_f98,&local_fa0);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_8e8,L"TArray<FIntVector3>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_a20;
                      local_a20.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a20.Index = uVar10;
                      local_a20.ContainerReference = pTVar5;
                      goto LAB_14e24c3b1;
                    }
                    pFVar13 = FOptimusDataTypeRegistry::Get();
                    pUVar19 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
                    pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_118,pUVar19);
                    FOptimusDataTypeRef::FOptimusDataTypeRef
                              ((FOptimusDataTypeRef *)local_338,pTVar15);
                    if (*(FName *)(lVar25 + 0x40) == (FName)local_338._0_8_) {
                      bVar9 = FSoftObjectPath::operator==
                                        ((FSoftObjectPath *)(lVar25 + 0x50),
                                         (FSoftObjectPath *)(local_338 + 0x10));
                      if (!bVar9) goto LAB_14e24bbe0;
                      bVar9 = true;
                    }
                    else {
LAB_14e24bbe0:
                      bVar9 = false;
                    }
                    if (local_318 != (void *)0x0) {
                      FMemory::Free(local_318);
                    }
                    if (bVar9) {
                      pTVar5 = &this->DeformerVectorArrays;
                      uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                               AddDefaulted(pTVar5);
                      local_f90.ComparisonIndex.Value = 0;
                      local_f90.Number = 0;
                      local_f88.ComparisonIndex.Value = 0;
                      local_f88.Number = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      local_a08.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_a08.Index = uVar10;
                      local_a08.ContainerReference = pTVar5;
                      pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                          ((FDataflowNode *)this,&local_a08,&local_f88,&local_f90);
                      FDataflowConnection::SetTypePolicy
                                ((FDataflowConnection *)pFVar17,
                                 (IDataflowTypePolicy *)
                                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                  ::__l2::Instance);
                      pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                      pFVar18 = ::FName::FName(&local_8e0,L"TArray<FIntVector4>");
                      FVar23 = *pFVar18;
                      uVar11 = 0;
                      if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (uVar11 == 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar7 = (code *)swi(3);
                          pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                    (*pcVar7)();
                          return pTVar16;
                        }
                      }
                      pFVar21 = &local_9f0;
                      local_9f0.Reference =
                           (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                      local_9f0.Index = uVar10;
                      local_9f0.ContainerReference = pTVar5;
                    }
                    else {
                      pFVar13 = FOptimusDataTypeRegistry::Get();
                      pUVar19 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
                      pTVar15 = FOptimusDataTypeRegistry::FindArrayType(pFVar13,&local_308,pUVar19);
                      FOptimusDataTypeRef::FOptimusDataTypeRef
                                ((FOptimusDataTypeRef *)local_108,pTVar15);
                      bVar9 = FOptimusDataTypeRef::operator==
                                        ((FOptimusDataTypeRef *)(lVar25 + 0x40),
                                         (FOptimusDataTypeRef *)local_108);
                      if ((void *)local_108._32_8_ != (void *)0x0) {
                        FMemory::Free((void *)local_108._32_8_);
                      }
                      if (bVar9) {
                        pTVar5 = &this->DeformerVectorArrays;
                        uVar10 = TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::
                                 AddDefaulted(pTVar5);
                        local_f80.ComparisonIndex.Value = 0;
                        local_f80.Number = 0;
                        local_f78.ComparisonIndex.Value = 0;
                        local_f78.Number = 0;
                        if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                          uVar11 = ~uVar10 >> 0x1f;
                        }
                        if (uVar11 == 0) {
                          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar9) {
                            pcVar7 = (code *)swi(3);
                            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                      (*pcVar7)();
                            return pTVar16;
                          }
                        }
                        local_9d8.Reference =
                             (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                        local_9d8.Index = uVar10;
                        local_9d8.ContainerReference = pTVar5;
                        pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                            ((FDataflowNode *)this,&local_9d8,&local_f78,&local_f80)
                        ;
                        FDataflowConnection::SetTypePolicy
                                  ((FDataflowConnection *)pFVar17,
                                   (IDataflowTypePolicy *)
                                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                    ::__l2::Instance);
                        pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                        pFVar18 = ::FName::FName(&local_8d8,L"TArray<FRotator>");
                        FVar23 = *pFVar18;
                        uVar11 = 0;
                        if ((int)uVar10 < (this->DeformerVectorArrays).ArrayNum) {
                          uVar11 = ~uVar10 >> 0x1f;
                        }
                        if (uVar11 == 0) {
                          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar9) {
                            pcVar7 = (code *)swi(3);
                            pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                      (*pcVar7)();
                            return pTVar16;
                          }
                        }
                        pFVar21 = &local_9c0;
                        local_9c0.Reference =
                             (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                        local_9c0.Index = uVar10;
                        local_9c0.ContainerReference = pTVar5;
                      }
                      else {
                        pFVar13 = FOptimusDataTypeRegistry::Get();
                        pFVar14 = FNameProperty::StaticClass();
                        pTVar15 = FOptimusDataTypeRegistry::FindArrayType
                                            (pFVar13,&local_2f8,pFVar14);
                        FOptimusDataTypeRef::FOptimusDataTypeRef
                                  ((FOptimusDataTypeRef *)local_d8,pTVar15);
                        bVar9 = FOptimusDataTypeRef::operator==
                                          ((FOptimusDataTypeRef *)(lVar25 + 0x40),
                                           (FOptimusDataTypeRef *)local_d8);
                        if ((void *)local_d8._32_8_ != (void *)0x0) {
                          FMemory::Free((void *)local_d8._32_8_);
                        }
                        if (bVar9) {
                          this_03 = &this->DeformerStringArrays;
                          uVar10 = TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_>::
                                   AddDefaulted(this_03);
                          local_f30.ComparisonIndex.Value = 0;
                          local_f30.Number = 0;
                          local_f68.ComparisonIndex.Value = 0;
                          local_f68.Number = 0;
                          if ((int)uVar10 < (this->DeformerStringArrays).ArrayNum) {
                            uVar11 = ~uVar10 >> 0x1f;
                          }
                          if (uVar11 == 0) {
                            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar9) {
                              pcVar7 = (code *)swi(3);
                              pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                        (*pcVar7)();
                              return pTVar16;
                            }
                          }
                          local_9a8.Reference =
                               (this_03->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                          local_9a8.Index = uVar10;
                          local_9a8.ContainerReference = this_03;
                          pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                              ((FDataflowNode *)this,&local_9a8,&local_f68,
                                               &local_f30);
                          FDataflowConnection::SetTypePolicy
                                    ((FDataflowConnection *)pFVar17,
                                     (IDataflowTypePolicy *)
                                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                      ::__l2::Instance);
                          pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                          pFVar18 = ::FName::FName(&local_8d0,L"TArray<FName>");
                          FVar23 = *pFVar18;
                          uVar11 = 0;
                          if ((int)uVar10 < (this->DeformerStringArrays).ArrayNum) {
                            uVar11 = ~uVar10 >> 0x1f;
                          }
                          if (uVar11 == 0) {
                            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar9) {
                              pcVar7 = (code *)swi(3);
                              pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                        (*pcVar7)();
                              return pTVar16;
                            }
                          }
                          pFVar21 = &local_990;
                          local_990.Reference =
                               (this_03->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                          local_990.Index = uVar10;
                          local_990.ContainerReference = this_03;
                        }
                        else {
                          pFVar13 = FOptimusDataTypeRegistry::Get();
                          pFVar14 = FBoolProperty::StaticClass();
                          pTVar15 = FOptimusDataTypeRegistry::FindArrayType
                                              (pFVar13,&local_2e8,pFVar14);
                          FOptimusDataTypeRef::FOptimusDataTypeRef
                                    ((FOptimusDataTypeRef *)local_a8,pTVar15);
                          bVar9 = FOptimusDataTypeRef::operator==
                                            ((FOptimusDataTypeRef *)(lVar25 + 0x40),
                                             (FOptimusDataTypeRef *)local_a8);
                          if ((void *)local_a8._32_8_ != (void *)0x0) {
                            FMemory::Free((void *)local_a8._32_8_);
                          }
                          if (bVar9) {
                            this_04 = &this->DeformerBoolArrays;
                            uVar10 = TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_>::
                                     AddDefaulted(this_04);
                            local_f60.ComparisonIndex.Value = 0;
                            local_f60.Number = 0;
                            local_f58.ComparisonIndex.Value = 0;
                            local_f58.Number = 0;
                            if ((int)uVar10 < (this->DeformerBoolArrays).ArrayNum) {
                              uVar11 = ~uVar10 >> 0x1f;
                            }
                            if (uVar11 == 0) {
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar9) {
                                pcVar7 = (code *)swi(3);
                                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                          (*pcVar7)();
                                return pTVar16;
                              }
                            }
                            local_978.Reference =
                                 (this_04->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                            local_978.Index = uVar10;
                            local_978.ContainerReference = this_04;
                            pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                                ((FDataflowNode *)this,&local_978,&local_f58,
                                                 &local_f60);
                            FDataflowConnection::SetTypePolicy
                                      ((FDataflowConnection *)pFVar17,
                                       (IDataflowTypePolicy *)
                                       &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                        ::__l2::Instance);
                            pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                            pFVar18 = ::FName::FName(&local_8c8,L"TArray<bool>");
                            FVar23 = *pFVar18;
                            uVar11 = 0;
                            if ((int)uVar10 < (this->DeformerBoolArrays).ArrayNum) {
                              uVar11 = ~uVar10 >> 0x1f;
                            }
                            if (uVar11 == 0) {
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar9) {
                                pcVar7 = (code *)swi(3);
                                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                          (*pcVar7)();
                                return pTVar16;
                              }
                            }
                            pFVar21 = &local_960;
                            local_960.Reference =
                                 (this_04->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                            local_960.Index = uVar10;
                            local_960.ContainerReference = this_04;
                          }
                          else {
                            pFVar13 = FOptimusDataTypeRegistry::Get();
                            pUVar19 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
                            pTVar15 = FOptimusDataTypeRegistry::FindArrayType
                                                (pFVar13,&local_2d8,pUVar19);
                            FOptimusDataTypeRef::FOptimusDataTypeRef
                                      ((FOptimusDataTypeRef *)local_78,pTVar15);
                            bVar9 = FOptimusDataTypeRef::operator==
                                              ((FOptimusDataTypeRef *)(lVar25 + 0x40),
                                               (FOptimusDataTypeRef *)local_78);
                            if ((void *)local_78._32_8_ != (void *)0x0) {
                              FMemory::Free((void *)local_78._32_8_);
                            }
                            if (!bVar9) {
                              if (1 < (byte)LogTemp._0_1_) {
                                UE::Logging::Private::BasicLog<2>
                                          ((FStaticBasicLogRecord *)&PTR_u_Unsupported_Dat_152e293b0
                                           ,(FLogCategoryBase *)&LogTemp);
                              }
                              goto LAB_14e24c449;
                            }
                            this_05 = &this->DeformerTransformArrays;
                            uVar10 = TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_>
                                     ::AddDefaulted(this_05);
                            local_f50.ComparisonIndex.Value = 0;
                            local_f50.Number = 0;
                            local_f48.ComparisonIndex.Value = 0;
                            local_f48.Number = 0;
                            if ((int)uVar10 < (this->DeformerTransformArrays).ArrayNum) {
                              uVar11 = ~uVar10 >> 0x1f;
                            }
                            if (uVar11 == 0) {
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar9) {
                                pcVar7 = (code *)swi(3);
                                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                          (*pcVar7)();
                                return pTVar16;
                              }
                            }
                            local_948.Reference =
                                 (this_05->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                            local_948.Index = uVar10;
                            local_948.ContainerReference = this_05;
                            pFVar17 = FDataflowNode::RegisterInputArrayConnectionInternal
                                                ((FDataflowNode *)this,&local_948,&local_f48,
                                                 &local_f50);
                            FDataflowConnection::SetTypePolicy
                                      ((FDataflowConnection *)pFVar17,
                                       (IDataflowTypePolicy *)
                                       &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                                        ::__l2::Instance);
                            pFVar17->_padding_ = *(longlong *)(lVar25 + 0x38);
                            pFVar18 = ::FName::FName(&local_8c0,L"TArray<FTransform>");
                            FVar23 = *pFVar18;
                            uVar11 = 0;
                            if ((int)uVar10 < (this->DeformerTransformArrays).ArrayNum) {
                              uVar11 = ~uVar10 >> 0x1f;
                            }
                            if (uVar11 == 0) {
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar9) {
                                pcVar7 = (code *)swi(3);
                                pTVar16 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)
                                          (*pcVar7)();
                                return pTVar16;
                              }
                            }
                            pFVar21 = &local_930;
                            local_930.Reference =
                                 (this_05->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                            local_930.Index = uVar10;
                            local_930.ContainerReference = this_05;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_14e24c3b1:
      FDataflowNode::SetInputConcreteType((FDataflowNode *)this,pFVar21,FVar23);
      local_1168[0] = 1;
      local_1168._4_4_ = (undefined4)pFVar17->_padding_;
      local_1168._8_4_ = (undefined4)((ulonglong)pFVar17->_padding_ >> 0x20);
      local_1168._12_4_ = (undefined4)pFVar17->_padding_;
      FStack_1158.AssetPath.PackageName.ComparisonIndex.Value =
           (uint)((ulonglong)pFVar17->_padding_ >> 0x20);
      FStack_1158.AssetPath.PackageName.Number =
           FStack_1158.AssetPath.PackageName.Number & 0xffffff00;
      iVar12 = (int)local_1170;
      if ((int)local_1170 == local_1170._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_1178,(int *)((longlong)&local_1170 + 4));
      }
      local_1170 = CONCAT44(local_1170._4_4_,iVar12 + 1);
      *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18) =
           CONCAT44(local_1168._4_4_,local_1168._0_4_);
      *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 8) =
           CONCAT44(local_1168._12_4_,local_1168._8_4_);
      *(ulonglong *)(local_1178.Data + (longlong)iVar12 * 0x18 + 0x10) =
           CONCAT44(FStack_1158.AssetPath.PackageName.Number,
                    FStack_1158.AssetPath.PackageName.ComparisonIndex.Value);
    }
LAB_14e24c449:
    pFVar22 = local_f40 + 8;
    uVar20 = (ulonglong)local_res20;
  } while( true );
}

// CanAddPin @ 14e24c4f0

bool __thiscall FAddSolverDeformerDataflowNode::CanAddPin(FAddSolverDeformerDataflowNode *this)

{
  if ((((this->DeformerNumericInputs).ArrayNum == 0) && ((this->DeformerVectorInputs).ArrayNum == 0)
      ) && ((this->DeformerStringInputs).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// GetPinsToRemove @ 14e24c520

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FAddSolverDeformerDataflowNode::GetPinsToRemove
          (FAddSolverDeformerDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  FConnectionReference local_120;
  FConnectionReference local_108;
  FConnectionReference local_f0;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FConnectionReference local_78;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  iVar3 = (this->DeformerNumericInputs).ArrayNum;
  if ((((iVar3 == 0) && ((this->DeformerStringInputs).ArrayNum == 0)) &&
      ((this->DeformerVectorInputs).ArrayNum == 0)) &&
     (((this->DeformerBoolInputs).ArrayNum == 0 && ((this->DeformerTransformInputs).ArrayNum == 0)))
     ) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    uVar7 = iVar3 - 1;
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140 = 0;
    if (-1 < (int)uVar7) {
      lVar9 = (longlong)(int)uVar7;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->DeformerNumericInputs).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_120.Reference = (this->DeformerNumericInputs).AllocatorInstance.Data + lVar9 * 8;
        local_120.Index = uVar7;
        local_120.ContainerReference = &this->DeformerNumericInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -1;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    uVar8 = (this->DeformerVectorInputs).ArrayNum - 1;
    uVar7 = 0;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 5;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerVectorInputs).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_108.Reference = (this->DeformerVectorInputs).AllocatorInstance.Data + lVar9;
        local_108.Index = uVar8;
        local_108.ContainerReference = &this->DeformerVectorInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_108);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x20;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerStringInputs).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerStringInputs).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_f0.Reference = (this->DeformerStringInputs).AllocatorInstance.Data + lVar9;
        local_f0.Index = uVar8;
        local_f0.ContainerReference = &this->DeformerStringInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f0);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerBoolInputs).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerBoolInputs).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_d8.Reference = (this->DeformerBoolInputs).AllocatorInstance.Data + lVar9;
        local_d8.Index = uVar8;
        local_d8.ContainerReference = &this->DeformerBoolInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -1;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerTransformInputs).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x60;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerTransformInputs).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_c0.Reference = (this->DeformerTransformInputs).AllocatorInstance.Data + lVar9;
        local_c0.Index = uVar8;
        local_c0.ContainerReference = &this->DeformerTransformInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x60;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerNumericArrays).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerNumericArrays).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_a8.Reference = (this->DeformerNumericArrays).AllocatorInstance.Data + lVar9;
        local_a8.Index = uVar8;
        local_a8.ContainerReference = &this->DeformerNumericArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerVectorArrays).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerVectorArrays).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_90.Reference = (this->DeformerVectorArrays).AllocatorInstance.Data + lVar9;
        local_90.Index = uVar8;
        local_90.ContainerReference = &this->DeformerVectorArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_90);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerStringArrays).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerStringArrays).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_78.Reference = (this->DeformerStringArrays).AllocatorInstance.Data + lVar9;
        local_78.Index = uVar8;
        local_78.ContainerReference = &this->DeformerStringArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->DeformerBoolArrays).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar4 = uVar7;
        if ((int)uVar8 < (this->DeformerBoolArrays).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_60.Reference = (this->DeformerBoolArrays).AllocatorInstance.Data + lVar9;
        local_60.Index = uVar8;
        local_60.ContainerReference = &this->DeformerBoolArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar7 = (this->DeformerTransformArrays).ArrayNum - 1;
    if (-1 < (int)uVar7) {
      lVar9 = (longlong)(int)uVar7 << 4;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->DeformerTransformArrays).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_48.Reference = (this->DeformerTransformArrays).AllocatorInstance.Data + lVar9;
        local_48.Index = uVar7;
        local_48.ContainerReference = &this->DeformerTransformArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
        if (pFVar6 != (FDataflowInput *)0x0) {
          uStack_12c = (undefined4)pFVar6->_padding_;
          uStack_128 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          local_138 = CONCAT31(local_138._1_3_,1);
          uStack_134 = (undefined4)pFVar6->_padding_;
          uStack_130 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
          uStack_124 = uStack_124 & 0xffffff00;
          iVar3 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_148.Data + (longlong)iVar3 * 0x18 + 0x10) =
               CONCAT44(uStack_124,uStack_128);
        }
        lVar9 = lVar9 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_148.Data;
    __return_storage_ptr__->ArrayNum = (int)local_140;
    __return_storage_ptr__->ArrayMax = local_140._4_4_;
  }
  return __return_storage_ptr__;
}

// CanRemovePin @ 14e24cfd0

bool __thiscall FAddSolverDeformerDataflowNode::CanRemovePin(FAddSolverDeformerDataflowNode *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x58))();
  return cVar1 == '\0';
}

// OnPinRemoved @ 14e24cff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAddSolverDeformerDataflowNode::OnPinRemoved(FAddSolverDeformerDataflowNode *this,FPin *param_1)

{
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *this_02;
  TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *this_03;
  TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *this_04;
  TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *this_05;
  TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *this_06;
  TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_> *this_07;
  TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *this_08;
  TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *this_09;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  int iVar5;
  uint uVar6;
  FConnectionReference local_f8;
  FConnectionReference local_e0;
  FConnectionReference local_c8;
  FConnectionReference local_b0;
  FConnectionReference local_98;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  iVar5 = (this->DeformerNumericInputs).ArrayNum;
  if ((((iVar5 != 0) || ((this->DeformerStringInputs).ArrayNum != 0)) ||
      ((this->DeformerVectorInputs).ArrayNum != 0)) ||
     (((this->DeformerBoolInputs).ArrayNum != 0 || ((this->DeformerTransformInputs).ArrayNum != 0)))
     ) {
    this_00 = &this->DeformerNumericInputs;
    if ((iVar5 != 0) && (param_1->Direction == INPUT)) {
      iVar5 = (this->DeformerNumericInputs).ArrayNum;
      uVar6 = 0;
      if (0 < iVar5) {
        do {
          uVar3 = 0;
          if ((int)uVar6 < iVar5) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_f8.Reference = (this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
          local_f8.Index = uVar6;
          local_f8.ContainerReference = this_00;
          pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
          if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
             (param_1->Name == (FName)pFVar4->_padding_)) {
            TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                      (this_00,uVar6,Default);
            break;
          }
          iVar5 = (this->DeformerNumericInputs).ArrayNum;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar5);
      }
    }
    this_01 = &this->DeformerVectorInputs;
    iVar5 = (this->DeformerVectorInputs).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_e0.Reference = (this_01->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20;
        local_e0.Index = uVar6;
        local_e0.ContainerReference = this_01;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e0);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_>::RemoveAt(this_01,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerVectorInputs).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_02 = &this->DeformerStringInputs;
    iVar5 = (this->DeformerStringInputs).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_c8.Reference = (this_02->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_c8.Index = uVar6;
        local_c8.ContainerReference = this_02;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c8);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_>::RemoveAt(this_02,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerStringInputs).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_03 = &this->DeformerBoolInputs;
    iVar5 = (this->DeformerBoolInputs).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_b0.Reference = (this_03->AllocatorInstance).Data + (int)uVar6;
        local_b0.Index = uVar6;
        local_b0.ContainerReference = this_03;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b0);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_>::RemoveAt(this_03,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerBoolInputs).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_04 = &this->DeformerTransformInputs;
    iVar5 = (this->DeformerTransformInputs).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_98.Reference = (this_04->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60;
        local_98.Index = uVar6;
        local_98.ContainerReference = this_04;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_04,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerTransformInputs).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_05 = &this->DeformerNumericArrays;
    iVar5 = (this->DeformerNumericArrays).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_80.Reference = (this_05->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_80.Index = uVar6;
        local_80.ContainerReference = this_05;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_80);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_05,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerNumericArrays).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_06 = &this->DeformerVectorArrays;
    iVar5 = (this->DeformerVectorArrays).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68.Reference = (this_06->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_68.Index = uVar6;
        local_68.ContainerReference = this_06;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_06,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerVectorArrays).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_07 = &this->DeformerStringArrays;
    iVar5 = (this->DeformerStringArrays).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_50.Reference = (this_07->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_50.Index = uVar6;
        local_50.ContainerReference = this_07;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_07,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerStringArrays).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_08 = &this->DeformerBoolArrays;
    iVar5 = (this->DeformerBoolArrays).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_38.Reference = (this_08->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_38.Index = uVar6;
        local_38.ContainerReference = this_08;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_08,uVar6,Default);
          break;
        }
        iVar5 = (this->DeformerBoolArrays).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    this_09 = &this->DeformerTransformArrays;
    iVar5 = (this->DeformerTransformArrays).ArrayNum;
    if (((iVar5 != 0) && (param_1->Direction == INPUT)) && (uVar6 = 0, 0 < iVar5)) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_20.Reference = (this_09->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        local_20.Index = uVar6;
        local_20.ContainerReference = this_09;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_20);
        if (((pFVar4 != (FDataflowInput *)0x0) && (param_1->Type == (FName)pFVar4->_padding_)) &&
           (param_1->Name == (FName)pFVar4->_padding_)) {
          TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_09,uVar6,Default);
          return;
        }
        iVar5 = (this->DeformerTransformArrays).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// OnInvalidate @ 14e24d860

void __thiscall FAddSolverDeformerDataflowNode::OnInvalidate(FAddSolverDeformerDataflowNode *this)

{
  return;
}

// PostSerialize @ 14e24d870

void __thiscall
FAddSolverDeformerDataflowNode::PostSerialize
          (FAddSolverDeformerDataflowNode *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
  uint uVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FConnectionReference local_120;
  FConnectionReference local_108;
  FConnectionReference local_f0;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FConnectionReference local_78;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar5 = (this->DeformerNumericInputs).ArrayNum;
    uVar8 = 0;
    uVar3 = 0;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_120.Reference =
             (this->DeformerNumericInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        local_120.Index = uVar7;
        local_120.ContainerReference = &this->DeformerNumericInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_120,&local_res18,&local_res10);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerNumericInputs).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerVectorInputs).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        local_1a8.ComparisonIndex.Value = 0;
        local_1a8.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_108.Reference =
             (this->DeformerVectorInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
        local_108.Index = uVar7;
        local_108.ContainerReference = &this->DeformerVectorInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_108);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_108,&local_1a8,&local_res20);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerVectorInputs).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerStringInputs).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_1a0.ComparisonIndex.Value = 0;
        local_1a0.Number = 0;
        local_198.ComparisonIndex.Value = 0;
        local_198.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_f0.Reference =
             (this->DeformerStringInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_f0.Index = uVar7;
        local_f0.ContainerReference = &this->DeformerStringInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f0);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_f0,&local_198,&local_1a0);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FString,FName,FText>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerStringInputs).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerBoolInputs).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_190.ComparisonIndex.Value = 0;
        local_190.Number = 0;
        local_188.ComparisonIndex.Value = 0;
        local_188.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_d8.Reference = (this->DeformerBoolInputs).AllocatorInstance.Data + (int)uVar7;
        local_d8.Index = uVar7;
        local_d8.ContainerReference = &this->DeformerBoolInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_d8,&local_188,&local_190);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<bool>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerBoolInputs).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerTransformInputs).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_180.ComparisonIndex.Value = 0;
        local_180.Number = 0;
        local_178.ComparisonIndex.Value = 0;
        local_178.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_c0.Reference =
             (this->DeformerTransformInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60;
        local_c0.Index = uVar7;
        local_c0.ContainerReference = &this->DeformerTransformInputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_c0,&local_178,&local_180);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerTransformInputs).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerNumericArrays).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_170.ComparisonIndex.Value = 0;
        local_170.Number = 0;
        local_168.ComparisonIndex.Value = 0;
        local_168.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_a8.Reference =
             (this->DeformerNumericArrays).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_a8.Index = uVar7;
        local_a8.ContainerReference = &this->DeformerNumericArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_a8,&local_168,&local_170);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerNumericArrays).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerVectorArrays).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_160.ComparisonIndex.Value = 0;
        local_160.Number = 0;
        local_158.ComparisonIndex.Value = 0;
        local_158.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_90.Reference =
             (this->DeformerVectorArrays).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_90.Index = uVar7;
        local_90.ContainerReference = &this->DeformerVectorArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_90);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_90,&local_158,&local_160);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerVectorArrays).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerStringArrays).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_150.ComparisonIndex.Value = 0;
        local_150.Number = 0;
        local_148.ComparisonIndex.Value = 0;
        local_148.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_78.Reference =
             (this->DeformerStringArrays).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_78.Index = uVar7;
        local_78.ContainerReference = &this->DeformerStringArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_78,&local_148,&local_150);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerStringArrays).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerBoolArrays).ArrayNum;
    if ((iVar5 != 0) && (uVar7 = uVar8, 0 < iVar5)) {
      do {
        local_140.ComparisonIndex.Value = 0;
        local_140.Number = 0;
        local_138.ComparisonIndex.Value = 0;
        local_138.Number = 0;
        uVar4 = uVar3;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_60.Reference =
             (this->DeformerBoolArrays).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_60.Index = uVar7;
        local_60.ContainerReference = &this->DeformerBoolArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_60,&local_138,&local_140);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerBoolArrays).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    iVar5 = (this->DeformerTransformArrays).ArrayNum;
    if ((iVar5 != 0) && (0 < iVar5)) {
      do {
        local_130.ComparisonIndex.Value = 0;
        local_130.Number = 0;
        local_128.ComparisonIndex.Value = 0;
        local_128.Number = 0;
        uVar7 = uVar3;
        if ((int)uVar8 < iVar5) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48.Reference =
             (this->DeformerTransformArrays).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        local_48.Index = uVar8;
        local_48.ContainerReference = &this->DeformerTransformArrays;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_48,&local_128,&local_130);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
                      ::__l2::Instance);
        }
        iVar5 = (this->DeformerTransformArrays).ArrayNum;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
    }
    iVar5 = FDataflowNode::GetNumInputs((FDataflowNode *)this);
    if (((this->DeformerTransformArrays).ArrayNum + (this->DeformerBoolArrays).ArrayNum +
         (this->DeformerStringArrays).ArrayNum + (this->DeformerVectorArrays).ArrayNum +
         (this->DeformerNumericArrays).ArrayNum + (this->DeformerTransformInputs).ArrayNum +
         (this->DeformerBoolInputs).ArrayNum + (this->DeformerStringInputs).ArrayNum +
         (this->DeformerVectorInputs).ArrayNum + (this->DeformerNumericInputs).ArrayNum + 2 != iVar5
        ) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4080072154987625864>,true,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsSolver\\Private\\AddSolverDeformerNode.cpp"
                                 ,0x278,
                                 "(DeformerNumericInputs.Num() + DeformerVectorInputs.Num() + DeformerStringInputs.Num() + DeformerBoolInputs.Num() + DeformerTransformInputs.Num() + DeformerNumericArrays.Num() + DeformerVectorArrays.Num() + DeformerStringArrays.Num() + DeformerBoolArrays.Num() + DeformerTransformArrays.Num() + 2)== GetNumInputs()"
                                ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticStruct @ 14e24e9a0

UScriptStruct * __cdecl FAddSolverDeformerDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddSolverDeformerDataflowNode,(UObject *)pUVar1,
                         L"AddSolverDeformerDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton;
}

// GetType @ 14e24e9e0

FName __thiscall FAddSolverDeformerDataflowNode::GetType(FAddSolverDeformerDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddSolverDeformerDataflowNode");
  return in_RDX;
}

// IsA @ 14e24ea10

bool __thiscall
FAddSolverDeformerDataflowNode::IsA(FAddSolverDeformerDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FAddSolverDeformerDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e24ea78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e24ea78:
    if (!bVar5) {
      bVar5 = FDataflowSimulationNode::IsA((FDataflowSimulationNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e24ea96;
      }
    }
  }
  bVar5 = true;
LAB_14e24ea96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e24ead0

FStructOnScope * __thiscall
FAddSolverDeformerDataflowNode::NewStructOnScope(FAddSolverDeformerDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_HairStrandsSolver();
      Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddSolverDeformerDataflowNode,
                           (UObject *)pUVar2,L"AddSolverDeformerDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e24eb50

void __thiscall
FAddSolverDeformerDataflowNode::SerializeInternal
          (FAddSolverDeformerDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddSolverDeformerDataflowNode,(UObject *)pUVar1,
                         L"AddSolverDeformerDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e24ebcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e24ebe0

FName __thiscall
FAddSolverDeformerDataflowNode::GetDisplayName(FAddSolverDeformerDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddSolverDeformer");
  return in_RDX;
}

// GetCategory @ 14e24ec10

FName __thiscall FAddSolverDeformerDataflowNode::GetCategory(FAddSolverDeformerDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Physics|Solver");
  return in_RDX;
}

// GetTags @ 14e24ec40

FString * __thiscall
FAddSolverDeformerDataflowNode::GetTags
          (FAddSolverDeformerDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e24ec60

UScriptStruct * __thiscall
FAddSolverDeformerDataflowNode::TypedScriptStruct(FAddSolverDeformerDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddSolverDeformerDataflowNode,(UObject *)pUVar1,
                         L"AddSolverDeformerDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton;
}

// FAddSolverDeformerDataflowNode @ 14e2513a0

FAddSolverDeformerDataflowNode * __thiscall
FAddSolverDeformerDataflowNode::FAddSolverDeformerDataflowNode
          (FAddSolverDeformerDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FAddSolverDeformerDataflowNode__6B_;
  pTVar1 = &this->PhysicsSolvers;
  local_48.Reference = &this->SimulationTime;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  ((FDataflowSimulationTime *)local_48.Reference)->DeltaTime = 0.0;
  ((FDataflowSimulationTime *)local_48.Reference)->CurrentTime = 0.0;
  (this->SimulationTime).TimeOffset = 0.0;
  (this->PhysicsSolvers).ArrayNum = 0;
  (this->PhysicsSolvers).ArrayMax = 0;
  (this->MeshDeformer).field0_0x0.DebugPtr = (UOptimusDeformer *)0x0;
  (this->DeformerNumericInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerNumericInputs).ArrayNum = 0;
  (this->DeformerNumericInputs).ArrayMax = 0;
  (this->DeformerVectorInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerVectorInputs).ArrayNum = 0;
  (this->DeformerVectorInputs).ArrayMax = 0;
  (this->DeformerStringInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerStringInputs).ArrayNum = 0;
  (this->DeformerStringInputs).ArrayMax = 0;
  (this->DeformerBoolInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerBoolInputs).ArrayNum = 0;
  (this->DeformerBoolInputs).ArrayMax = 0;
  (this->DeformerTransformInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerTransformInputs).ArrayNum = 0;
  (this->DeformerTransformInputs).ArrayMax = 0;
  (this->DeformerNumericArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerNumericArrays).ArrayNum = 0;
  (this->DeformerNumericArrays).ArrayMax = 0;
  (this->DeformerVectorArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerVectorArrays).ArrayNum = 0;
  (this->DeformerVectorArrays).ArrayMax = 0;
  (this->DeformerStringArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerStringArrays).ArrayNum = 0;
  (this->DeformerStringArrays).ArrayMax = 0;
  (this->DeformerBoolArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerBoolArrays).ArrayNum = 0;
  (this->DeformerBoolArrays).ArrayMax = 0;
  (this->DeformerTransformArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerTransformArrays).ArrayNum = 0;
  (this->DeformerTransformArrays).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar1;
  local_28.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)0x0)
  {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FAddSolverDeformerDataflowNode @ 14e251530

FAddSolverDeformerDataflowNode * __thiscall
FAddSolverDeformerDataflowNode::FAddSolverDeformerDataflowNode(FAddSolverDeformerDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAddSolverDeformerDataflowNode__6B_;
  (this->PhysicsSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsSolvers).ArrayNum = 0;
  (this->PhysicsSolvers).ArrayMax = 0;
  (this->SimulationTime).DeltaTime = 0.0;
  (this->SimulationTime).CurrentTime = 0.0;
  (this->SimulationTime).TimeOffset = 0.0;
  (this->MeshDeformer).field0_0x0.DebugPtr = (UOptimusDeformer *)0x0;
  (this->DeformerNumericInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerNumericInputs).ArrayNum = 0;
  (this->DeformerNumericInputs).ArrayMax = 0;
  (this->DeformerVectorInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerVectorInputs).ArrayNum = 0;
  (this->DeformerVectorInputs).ArrayMax = 0;
  (this->DeformerStringInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerStringInputs).ArrayNum = 0;
  (this->DeformerStringInputs).ArrayMax = 0;
  (this->DeformerBoolInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerBoolInputs).ArrayNum = 0;
  (this->DeformerBoolInputs).ArrayMax = 0;
  (this->DeformerTransformInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerTransformInputs).ArrayNum = 0;
  (this->DeformerTransformInputs).ArrayMax = 0;
  (this->DeformerNumericArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerNumericArrays).ArrayNum = 0;
  (this->DeformerNumericArrays).ArrayMax = 0;
  (this->DeformerVectorArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerVectorArrays).ArrayNum = 0;
  (this->DeformerVectorArrays).ArrayMax = 0;
  (this->DeformerStringArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerStringArrays).ArrayNum = 0;
  (this->DeformerStringArrays).ArrayMax = 0;
  (this->DeformerBoolArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerBoolArrays).ArrayNum = 0;
  (this->DeformerBoolArrays).ArrayMax = 0;
  (this->DeformerTransformArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformerTransformArrays).ArrayNum = 0;
  (this->DeformerTransformArrays).ArrayMax = 0;
  return this;
}

// ~FAddSolverDeformerDataflowNode @ 14e251e90

void __thiscall
FAddSolverDeformerDataflowNode::~FAddSolverDeformerDataflowNode
          (FAddSolverDeformerDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowTransformArrayTypes,int>
            ((FDataflowTransformArrayTypes *)(this->DeformerTransformArrays).AllocatorInstance.Data,
             (this->DeformerTransformArrays).ArrayNum);
  pFVar1 = (this->DeformerTransformArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowBoolArrayTypes,int>
            ((FDataflowBoolArrayTypes *)(this->DeformerBoolArrays).AllocatorInstance.Data,
             (this->DeformerBoolArrays).ArrayNum);
  pFVar1 = (this->DeformerBoolArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowStringArrayTypes,int>
            ((FDataflowStringArrayTypes *)(this->DeformerStringArrays).AllocatorInstance.Data,
             (this->DeformerStringArrays).ArrayNum);
  pFVar1 = (this->DeformerStringArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowVectorArrayTypes,int>
            ((FDataflowVectorArrayTypes *)(this->DeformerVectorArrays).AllocatorInstance.Data,
             (this->DeformerVectorArrays).ArrayNum);
  pFVar1 = (this->DeformerVectorArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowNumericArrayTypes,int>
            ((FDataflowNumericArrayTypes *)(this->DeformerNumericArrays).AllocatorInstance.Data,
             (this->DeformerNumericArrays).ArrayNum);
  pFVar1 = (this->DeformerNumericArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeformerTransformInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeformerBoolInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowStringTypes,int>
            ((FDataflowStringTypes *)(this->DeformerStringInputs).AllocatorInstance.Data,
             (this->DeformerStringInputs).ArrayNum);
  pFVar1 = (this->DeformerStringInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeformerVectorInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeformerNumericInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// operator= @ 14e2522e0

FAddSolverDeformerDataflowNode * __thiscall
FAddSolverDeformerDataflowNode::operator=
          (FAddSolverDeformerDataflowNode *this,FAddSolverDeformerDataflowNode *param_1)

{
  int *piVar1;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDataflowVectorTypes,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDataflowStringTypes,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDataflowBoolTypes,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FDataflowTransformTypes,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FDataflowNumericArrayTypes,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FDataflowVectorArrayTypes,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDataflowStringArrayTypes,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FDataflowBoolArrayTypes,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FDataflowTransformArrayTypes,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  UOptimusDeformer *pUVar15;
  code *pcVar16;
  float fVar17;
  bool bVar18;
  FAddSolverDeformerDataflowNode *pFVar19;
  
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("!\"Enclosing block should never be called\"",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                      ,0x51,L"");
  if (bVar18) {
    pcVar16 = (code *)swi(3);
    pFVar19 = (FAddSolverDeformerDataflowNode *)(*pcVar16)();
    return pFVar19;
  }
  pTVar2 = &this->PhysicsSolvers;
  if (pTVar2 != &param_1->PhysicsSolvers) {
    iVar13 = (param_1->PhysicsSolvers).ArrayNum;
    piVar1 = &(this->PhysicsSolvers).ArrayMax;
    pFVar14 = (param_1->PhysicsSolvers).AllocatorInstance.Data;
    (this->PhysicsSolvers).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar2->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 3);
      }
    }
  }
  fVar17 = (param_1->SimulationTime).CurrentTime;
  (this->SimulationTime).DeltaTime = (param_1->SimulationTime).DeltaTime;
  (this->SimulationTime).CurrentTime = fVar17;
  (this->SimulationTime).TimeOffset = (param_1->SimulationTime).TimeOffset;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 = (param_1->MeshDeformer).field0_0x0.DebugPtr, pUVar15 != (UOptimusDeformer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pTVar3 = &this->DeformerNumericInputs;
  (this->MeshDeformer).field0_0x0 = (param_1->MeshDeformer).field0_0x0;
  if (pTVar3 != &param_1->DeformerNumericInputs) {
    iVar13 = (param_1->DeformerNumericInputs).ArrayNum;
    piVar1 = &(this->DeformerNumericInputs).ArrayMax;
    pFVar14 = (param_1->DeformerNumericInputs).AllocatorInstance.Data;
    (this->DeformerNumericInputs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar3->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 3);
      }
    }
  }
  pTVar4 = &this->DeformerVectorInputs;
  if (pTVar4 != &param_1->DeformerVectorInputs) {
    iVar13 = (param_1->DeformerVectorInputs).ArrayNum;
    piVar1 = &(this->DeformerVectorInputs).ArrayMax;
    pFVar14 = (param_1->DeformerVectorInputs).AllocatorInstance.Data;
    (this->DeformerVectorInputs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar13,*piVar1,&pTVar4->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 5);
      }
    }
  }
  pTVar5 = &this->DeformerStringInputs;
  if (pTVar5 != &param_1->DeformerStringInputs) {
    DestructItems<FDataflowStringTypes,int>
              ((FDataflowStringTypes *)(pTVar5->AllocatorInstance).Data,
               (this->DeformerStringInputs).ArrayNum);
    iVar13 = (param_1->DeformerStringInputs).ArrayNum;
    piVar1 = &(this->DeformerStringInputs).ArrayMax;
    pFVar14 = (param_1->DeformerStringInputs).AllocatorInstance.Data;
    (this->DeformerStringInputs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar5->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowStringTypes,FDataflowStringTypes,int>
                ((pTVar5->AllocatorInstance).Data,(FDataflowStringTypes *)pFVar14,iVar13);
    }
  }
  pTVar6 = &this->DeformerBoolInputs;
  if (pTVar6 != &param_1->DeformerBoolInputs) {
    iVar13 = (param_1->DeformerBoolInputs).ArrayNum;
    piVar1 = &(this->DeformerBoolInputs).ArrayMax;
    pFVar14 = (param_1->DeformerBoolInputs).AllocatorInstance.Data;
    (this->DeformerBoolInputs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar13,*piVar1,&pTVar6->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar13);
      }
    }
  }
  pTVar7 = &this->DeformerTransformInputs;
  if (pTVar7 != &param_1->DeformerTransformInputs) {
    iVar13 = (param_1->DeformerTransformInputs).ArrayNum;
    piVar1 = &(this->DeformerTransformInputs).ArrayMax;
    pFVar14 = (param_1->DeformerTransformInputs).AllocatorInstance.Data;
    (this->DeformerTransformInputs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar13,*piVar1,&pTVar7->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0x60);
      }
    }
  }
  pTVar8 = &this->DeformerNumericArrays;
  if (pTVar8 != &param_1->DeformerNumericArrays) {
    DestructItems<FDataflowNumericArrayTypes,int>
              ((FDataflowNumericArrayTypes *)(pTVar8->AllocatorInstance).Data,
               (this->DeformerNumericArrays).ArrayNum);
    iVar13 = (param_1->DeformerNumericArrays).ArrayNum;
    piVar1 = &(this->DeformerNumericArrays).ArrayMax;
    pFVar14 = (param_1->DeformerNumericArrays).AllocatorInstance.Data;
    (this->DeformerNumericArrays).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar8->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowNumericArrayTypes,FDataflowNumericArrayTypes,int>
                ((pTVar8->AllocatorInstance).Data,(FDataflowNumericArrayTypes *)pFVar14,iVar13);
    }
  }
  pTVar9 = &this->DeformerVectorArrays;
  if (pTVar9 != &param_1->DeformerVectorArrays) {
    DestructItems<FDataflowVectorArrayTypes,int>
              ((FDataflowVectorArrayTypes *)(pTVar9->AllocatorInstance).Data,
               (this->DeformerVectorArrays).ArrayNum);
    iVar13 = (param_1->DeformerVectorArrays).ArrayNum;
    piVar1 = &(this->DeformerVectorArrays).ArrayMax;
    pFVar14 = (param_1->DeformerVectorArrays).AllocatorInstance.Data;
    (this->DeformerVectorArrays).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar9->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowVectorArrayTypes,FDataflowVectorArrayTypes,int>
                ((pTVar9->AllocatorInstance).Data,(FDataflowVectorArrayTypes *)pFVar14,iVar13);
    }
  }
  pTVar10 = &this->DeformerStringArrays;
  if (pTVar10 != &param_1->DeformerStringArrays) {
    DestructItems<FDataflowStringArrayTypes,int>
              ((FDataflowStringArrayTypes *)(pTVar10->AllocatorInstance).Data,
               (this->DeformerStringArrays).ArrayNum);
    iVar13 = (param_1->DeformerStringArrays).ArrayNum;
    piVar1 = &(this->DeformerStringArrays).ArrayMax;
    pFVar14 = (param_1->DeformerStringArrays).AllocatorInstance.Data;
    (this->DeformerStringArrays).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar10->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowStringArrayTypes,FDataflowStringArrayTypes,int>
                ((pTVar10->AllocatorInstance).Data,(FDataflowStringArrayTypes *)pFVar14,iVar13);
    }
  }
  pTVar11 = &this->DeformerBoolArrays;
  if (pTVar11 != &param_1->DeformerBoolArrays) {
    DestructItems<FDataflowBoolArrayTypes,int>
              ((FDataflowBoolArrayTypes *)(pTVar11->AllocatorInstance).Data,
               (this->DeformerBoolArrays).ArrayNum);
    iVar13 = (param_1->DeformerBoolArrays).ArrayNum;
    piVar1 = &(this->DeformerBoolArrays).ArrayMax;
    pFVar14 = (param_1->DeformerBoolArrays).AllocatorInstance.Data;
    (this->DeformerBoolArrays).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar11->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowBoolArrayTypes,FDataflowBoolArrayTypes,int>
                ((pTVar11->AllocatorInstance).Data,(FDataflowBoolArrayTypes *)pFVar14,iVar13);
    }
  }
  pTVar12 = &this->DeformerTransformArrays;
  if (pTVar12 != &param_1->DeformerTransformArrays) {
    DestructItems<FDataflowTransformArrayTypes,int>
              ((FDataflowTransformArrayTypes *)(pTVar12->AllocatorInstance).Data,
               (this->DeformerTransformArrays).ArrayNum);
    iVar13 = (param_1->DeformerTransformArrays).ArrayNum;
    piVar1 = &(this->DeformerTransformArrays).ArrayMax;
    pFVar14 = (param_1->DeformerTransformArrays).AllocatorInstance.Data;
    (this->DeformerTransformArrays).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,*piVar1,&pTVar12->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FDataflowTransformArrayTypes,FDataflowTransformArrayTypes,int>
                ((pTVar12->AllocatorInstance).Data,(FDataflowTransformArrayTypes *)pFVar14,iVar13);
    }
  }
  return this;
}

// StaticTags @ 14e2569c0

FString * __cdecl FAddSolverDeformerDataflowNode::StaticTags(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = UDataflow::SimulationTag.Data.ArrayNum;
  _Src = UDataflow::SimulationTag.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = UDataflow::SimulationTag.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

