// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 111

// FGraphController @ 14ae1bca0

FGraphController * __thiscall
Metasound::Frontend::FGraphController::FGraphController
          (FGraphController *this,EPrivateToken param_1,FInitParams *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGraphController_Frontend_Metasound__6B_;
  *(undefined8 *)&this->GraphClassPtr = *(undefined8 *)&param_2->GraphClassPtr;
  lVar1 = *(longlong *)&(param_2->GraphClassPtr).field_0x10;
  *(longlong *)&(this->GraphClassPtr).field_0x10 = lVar1;
  *(undefined8 *)&(this->GraphClassPtr).field_0x38 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->GraphClassPtr).field_0x38;
    puVar4 = (undefined8 *)&(param_2->GraphClassPtr).field_0x20;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  (this->OwningDocument).Object = (param_2->OwningDocument).Object;
  pTVar3 = (param_2->OwningDocument).SharedReferenceCount.ReferenceController;
  (this->OwningDocument).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FGraphController @ 14ae1d830

void __thiscall Metasound::Frontend::FGraphController::~FGraphController(FGraphController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningDocument).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphClassPtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    plVar4 = (longlong *)&(this->GraphClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae1d883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14ae1ed20

bool __thiscall
`Metasound::Frontend::FGraphController::FindVariableIDOfVariableContainingNode'::__l8::<lambda_1>::
operator()(void *this,FMetasoundFrontendVariable *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  puVar5 = *(uint **)this;
  uVar1 = puVar5[3];
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  if ((((uVar1 != (param_1->VariableNodeID).D || uVar4 != (param_1->VariableNodeID).C) ||
       uVar3 != (param_1->VariableNodeID).B) || uVar2 != (param_1->VariableNodeID).A) &&
     (((uVar1 != (param_1->MutatorNodeID).D || uVar4 != (param_1->MutatorNodeID).C) ||
      uVar3 != (param_1->MutatorNodeID).B) || uVar2 != (param_1->MutatorNodeID).A)) {
    pFVar6 = (param_1->AccessorNodeIDs).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(param_1->AccessorNodeIDs).ArrayNum * 0x10;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x10) {
      if (((uVar1 == *(uint *)(pFVar6 + 0xc) && uVar4 == *(uint *)(pFVar6 + 8)) &&
          uVar3 == *(uint *)(pFVar6 + 4)) && uVar2 == *(uint *)pFVar6) {
        return true;
      }
    }
    pFVar6 = (param_1->DeferredAccessorNodeIDs).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(param_1->DeferredAccessorNodeIDs).ArrayNum * 0x10;
    while( true ) {
      if (pFVar6 == pFVar7) {
        return false;
      }
      if (((uVar1 == *(uint *)(pFVar6 + 0xc) && uVar4 == *(uint *)(pFVar6 + 8)) &&
          uVar3 == *(uint *)(pFVar6 + 4)) && uVar2 == *(uint *)pFVar6) break;
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return true;
}

// AddDuplicateNode @ 14ae204a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddDuplicateNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          INodeController *param_1)

{
  IDocumentController *pIVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  EMetasoundFrontendClassType EVar11;
  FMetasoundFrontendClassMetadata *this_00;
  undefined8 *puVar12;
  longlong *plVar13;
  FGuid *pFVar14;
  undefined1 auStack_108 [32];
  FGuid local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  undefined1 local_88 [32];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = (FMetasoundFrontendClassMetadata *)(**(code **)(*(longlong *)param_1 + 0x118))(param_1);
  local_c8 = 0;
  plStack_90 = (longlong *)0x0;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<FMetasoundFrontendClass_const_*_(__cdecl*)(void),FMetasoundFrontendClass_const_*>
             ::Call;
  local_a8 = &
             ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_a0 = `Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::
              TAccessPtr<FMetasoundFrontendClass_const_>'::__l1::<lambda_28_>::
              <lambda_invoker_cdecl>;
  UE::Core::Private::Function::CheckCallable
            (UE::Core::Private::Function::
             TFunctionRefCaller<FMetasoundFrontendClass_const_*_(__cdecl*)(void),FMetasoundFrontendClass_const_*>
             ::Call);
  pcVar3 = local_b8;
  plVar13 = &local_a8;
  if (plStack_90 != (longlong *)0x0) {
    plVar13 = plStack_90;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar13 + 8))();
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendClass_const_*_(__cdecl*)(void),FMetasoundFrontendClass_const_*>
                ::Call) {
    local_c8 = (*(code *)*puVar12)();
  }
  else {
    local_c8 = (*pcVar3)(puVar12);
  }
  EVar11 = FMetasoundFrontendClassMetadata::GetType(this_00);
  pIVar1 = (this->OwningDocument).Object;
  lVar2 = *(longlong *)pIVar1;
  if (EVar11 == Graph) {
    puVar12 = (undefined8 *)(**(code **)(lVar2 + 0x80))();
    plVar13 = plStack_90;
    uVar6 = (undefined4)local_a8;
    uVar7 = local_a8._4_4_;
    uVar8 = (undefined4)uStack_a0;
    uVar9 = uStack_a0._4_4_;
    uVar4 = CONCAT44(uStack_94,local_98);
    local_c8 = *puVar12;
    pcVar3 = (code *)puVar12[2];
    lVar2 = puVar12[3];
    local_a8 = (undefined **)puVar12[4];
    uStack_a0 = (code *)puVar12[5];
    local_98 = *(undefined4 *)(puVar12 + 6);
    uStack_94 = *(undefined4 *)((longlong)puVar12 + 0x34);
    plStack_90 = (longlong *)puVar12[7];
    *(undefined4 *)(puVar12 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar12 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)(puVar12 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar12 + 0x24) = uVar7;
    *(undefined4 *)(puVar12 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar9;
    puVar12[6] = uVar4;
    puVar12[7] = plVar13;
    local_b8 = pcVar3;
    uStack_b0 = lVar2;
    if (local_88._16_8_ != 0) {
      plVar13 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar3 = local_b8;
    plVar13 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar13 = plStack_90;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar13 + 8))();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<FMetasoundFrontendClass_const_*_(__cdecl*)(void),FMetasoundFrontendClass_const_*>
                  ::Call) {
      local_c8 = (*(code *)*puVar12)();
    }
    else {
      local_c8 = (*pcVar3)(puVar12);
    }
    if (local_c8 != 0) goto LAB_14ae206a9;
    pIVar1 = (this->OwningDocument).Object;
    pcVar3 = *(code **)(*(longlong *)pIVar1 + 0xa0);
    puVar12 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x130))(param_1,&local_e8);
    (*pcVar3)(pIVar1,local_d8,*puVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(local_e8.D,local_e8.C));
    pIVar1 = (this->OwningDocument).Object;
    plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x80))(pIVar1,local_88,this_00);
  }
  else {
    plVar13 = (longlong *)(**(code **)(lVar2 + 0x90))(pIVar1,local_88,this_00);
  }
  plVar10 = plStack_90;
  local_c8 = *plVar13;
  uVar6 = (undefined4)local_a8;
  uVar7 = local_a8._4_4_;
  uVar8 = (undefined4)uStack_a0;
  uVar9 = uStack_a0._4_4_;
  lVar5 = CONCAT44(uStack_94,local_98);
  pcVar3 = (code *)plVar13[2];
  lVar2 = plVar13[3];
  local_a8 = (undefined **)plVar13[4];
  uStack_a0 = (code *)plVar13[5];
  local_98 = (int)plVar13[6];
  uStack_94 = *(undefined4 *)((longlong)plVar13 + 0x34);
  plStack_90 = (longlong *)plVar13[7];
  *(undefined4 *)(plVar13 + 2) = (undefined4)local_b8;
  *(undefined4 *)((longlong)plVar13 + 0x14) = local_b8._4_4_;
  *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)(plVar13 + 4) = uVar6;
  *(undefined4 *)((longlong)plVar13 + 0x24) = uVar7;
  *(undefined4 *)(plVar13 + 5) = uVar8;
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar9;
  plVar13[6] = lVar5;
  plVar13[7] = (longlong)plVar10;
  local_b8 = pcVar3;
  uStack_b0 = lVar2;
  if (local_88._16_8_ != 0) {
    plVar13 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar13 = local_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
LAB_14ae206a9:
  pFVar14 = FGuid::NewGuid((FGuid *)local_d8);
  local_e8.A = pFVar14->A;
  local_e8.B = pFVar14->B;
  local_e8.C = pFVar14->C;
  local_e8.D = pFVar14->D;
  local_88._0_8_ = local_c8;
  local_88._16_8_ = local_b8;
  local_50 = (longlong *)0x0;
  if (local_b8 != (code *)0x0) {
    plVar13 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar13 = plStack_90;
    }
    (**(code **)*plVar13)(local_e8.A,local_68);
  }
  AddNode(this,__return_storage_ptr__,(FConstClassAccessPtr *)local_88,&local_e8);
  if (local_b8 != (code *)0x0) {
    plVar13 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar13 = plStack_90;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddInputVertex @ 14ae217b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddInputVertex
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassInput *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  IDocumentController *pIVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  FGraphController *this_00;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  FMetasoundFrontendGraphClass *pFVar11;
  FMetasoundFrontendClassInterface *pFVar12;
  FMetasoundFrontendClass *pFVar13;
  INodeClassRegistry *pIVar14;
  FMetasoundFrontendGraph *pFVar15;
  FMetasoundFrontendNode *pFVar16;
  FMetasoundFrontendDocument *pFVar17;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar18;
  FName *pFVar19;
  FMetasoundFrontendClassInput *pFVar20;
  FGuid *pFVar21;
  longlong *plVar22;
  FName *pFVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_338 [32];
  FMetasoundFrontendClassInput *local_318;
  FMetasoundFrontendClassInput *local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined1 local_2e8 [8];
  FGraphController *local_2e0;
  FString local_2d8;
  FMetasoundFrontendGraphClass *local_2c8;
  FNodeClassRegistryKey local_2b8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_290;
  undefined8 uStack_288;
  TObjectPtr<UScriptStruct_const_>_u_0 local_280;
  undefined8 local_278;
  FString local_270;
  FGuid local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FGuid local_208;
  FString local_1f8;
  FGuid local_1e8;
  FMetasoundFrontendClass *local_1d8 [2];
  code *local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  FMetasoundFrontendDocument *local_198 [2];
  code *local_188;
  longlong local_178 [3];
  longlong *local_160;
  FMetasoundFrontendDocument *local_158 [2];
  code *local_148;
  longlong local_138 [3];
  longlong *local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [56];
  longlong *local_a0;
  FMetasoundFrontendClass *local_98;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2e0 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar24 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar4 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar22 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar24 != (longlong *)0x0) {
    plVar22 = plVar24;
  }
  uVar10 = (**(code **)(*plVar22 + 8))();
  pFVar11 = (FMetasoundFrontendGraphClass *)(*pcVar4)(uVar10);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = pFVar11;
  local_2c8 = pFVar11;
  if (pFVar11 != (FMetasoundFrontendGraphClass *)0x0) {
    pFVar12 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)pFVar11);
    iVar9 = (pFVar12->Inputs).ArrayNum;
    pFVar25 = (pFVar12->Inputs).AllocatorInstance.Data;
    pFVar7 = pFVar25 + (longlong)iVar9 * 0x48;
    while( true ) {
      if ((pFVar12->Inputs).ArrayNum != iVar9) {
        local_2e8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2e8);
      }
      if (pFVar25 == pFVar7) {
        local_2b8.Type = Invalid;
        local_2b8.ClassName.Namespace.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Namespace.Number = 0;
        local_2b8.ClassName.Name.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Name.Number = 0;
        local_2b8.ClassName.Variant.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Variant.Number = 0;
        local_2b8.Version.Major = 1;
        local_2b8.Version.Minor = 0;
        bVar8 = INodeClassRegistry::GetInputNodeRegistryKeyForDataType
                          ((FName *)&param_1->_padding_,
                           (EMetasoundFrontendVertexAccessType)param_1->_padding_,&local_2b8);
        if (!bVar8) {
          if ((byte)LogMetaSound._0_1_ < 4) goto LAB_14ae21fd8;
          ::FName::ToString((FName *)&param_1->_padding_,&local_1f8);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          goto LAB_14ae21fce;
        }
        pIVar5 = (local_2e0->OwningDocument).Object;
        (**(code **)(*(longlong *)pIVar5 + 0x98))(pIVar5,local_1d8,&local_2b8,0);
        UE::Core::Private::Function::CheckCallable(local_1c8);
        pcVar4 = local_1c8;
        plVar24 = local_1b8;
        if (local_1a0 != (longlong *)0x0) {
          plVar24 = local_1a0;
        }
        uVar10 = (**(code **)(*plVar24 + 8))();
        pFVar13 = (FMetasoundFrontendClass *)(*pcVar4)(uVar10);
        local_1d8[0] = pFVar13;
        if (pFVar13 == (FMetasoundFrontendClass *)0x0) {
          if (local_1c8 != (code *)0x0) {
            plVar24 = local_1b8;
            if (local_1a0 != (longlong *)0x0) {
              plVar24 = local_1a0;
            }
            (**(code **)(*plVar24 + 0x10))();
          }
          goto LAB_14ae21fd8;
        }
        FVar6 = (FName)param_1->_padding_;
        pIVar14 = INodeClassRegistry::Get();
        (**(code **)((longlong)*pIVar14 + 0x78))(pIVar14,&local_290,&local_2b8);
        pFVar15 = FindBuildGraphChecked(local_2c8);
        piVar1 = &(pFVar15->Nodes).ArrayMax;
        iVar9 = (pFVar15->Nodes).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x888,(ForAnyElementType *)pFVar15,piVar1);
        }
        (pFVar15->Nodes).ArrayNum = iVar9 + 1;
        local_280.DebugPtr = local_290.DebugPtr;
        pFVar7 = (pFVar15->Nodes).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_290.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_290.DebugPtr);
        }
        local_278 = uStack_288;
        local_290.DebugPtr = (UScriptStruct *)0x0;
        uStack_288 = 0;
        pFVar16 = FMetasoundFrontendNode::FMetasoundFrontendNode
                            ((FMetasoundFrontendNode *)(pFVar7 + (longlong)iVar9 * 0x88),pFVar13,
                             (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)
                             &local_280.ObjectPtr);
        pFVar16->Name = FVar6;
        uVar2 = param_1->_padding_;
        uVar3 = param_1->_padding_;
        uVar28 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar27 = (uint)uVar2;
        uVar29 = (uint)uVar3;
        uVar30 = (uint)((ulonglong)uVar3 >> 0x20);
        if (((uVar28 == 0 && (int)((ulonglong)param_1->_padding_ >> 0x20) == 0) &&
            (int)param_1->_padding_ == 0) && (uint)uVar2 == 0) {
          pIVar5 = (local_2e0->OwningDocument).Object;
          (**(code **)(*(longlong *)pIVar5 + 0x110))(pIVar5,local_198);
          UE::Core::Private::Function::CheckCallable(local_188);
          pcVar4 = local_188;
          plVar24 = local_178;
          if (local_160 != (longlong *)0x0) {
            plVar24 = local_160;
          }
          uVar10 = (**(code **)(*plVar24 + 8))();
          pFVar17 = (FMetasoundFrontendDocument *)(*pcVar4)(uVar10);
          local_198[0] = pFVar17;
          if ((pFVar17 == (FMetasoundFrontendDocument *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Document",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                 ,0x406,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pTVar18 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
            return pTVar18;
          }
          FDocumentIDGenerator::CreateIDFromDocument
                    ((FDocumentIDGenerator *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9ac8),&local_258,pFVar17);
          uVar27 = local_258.A;
          uVar28 = local_258.B;
          uVar29 = local_258.C;
          uVar30 = local_258.D;
          if (local_188 != (code *)0x0) {
            plVar24 = local_178;
            if (local_160 != (longlong *)0x0) {
              plVar24 = local_160;
            }
            (**(code **)(*plVar24 + 0x10))();
          }
        }
        (pFVar16->ID).A = uVar27;
        (pFVar16->ID).B = uVar28;
        (pFVar16->ID).C = uVar29;
        (pFVar16->ID).D = uVar30;
        pFVar19 = (FName *)(pFVar16->Interface).Inputs.AllocatorInstance.Data;
        pFVar23 = pFVar19 + (longlong)(pFVar16->Interface).Inputs.ArrayNum * 4;
        if (pFVar19 == pFVar23) goto LAB_14ae21b54;
        goto LAB_14ae21b45;
      }
      if (*(longlong *)pFVar25 == param_1->_padding_) break;
      pFVar25 = pFVar25 + 0x48;
    }
    if (3 < (byte)LogMetaSound._0_1_) {
      local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.Data.ArrayNum = 0;
      local_2d8.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)&pFVar11->_padding_,&local_2d8,Digits);
      ::FName::ToString((FName *)param_1,&local_270);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      local_1f8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
      }
LAB_14ae21fce:
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ae21fd8:
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
  while (pFVar19 = pFVar19 + 4, pFVar19 != pFVar23) {
LAB_14ae21b45:
    if (pFVar19[1] == (FName)param_1->_padding_) {
      *pFVar19 = FVar6;
      goto LAB_14ae21bca;
    }
  }
LAB_14ae21b54:
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->_padding_,&local_238);
    ::FName::ToString((FName *)&param_1->_padding_,&local_248);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae21bca:
  pFVar19 = (FName *)(pFVar16->Interface).Outputs.AllocatorInstance.Data;
  pFVar23 = pFVar19 + (longlong)(pFVar16->Interface).Outputs.ArrayNum * 4;
  if (pFVar19 != pFVar23) {
    do {
      if (pFVar19[1] == (FName)param_1->_padding_) {
        *pFVar19 = FVar6;
        goto LAB_14ae21c67;
      }
      pFVar19 = pFVar19 + 4;
    } while (pFVar19 != pFVar23);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->_padding_,&local_218);
    ::FName::ToString((FName *)&param_1->_padding_,&local_228);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae21c67:
  pFVar11 = local_2c8;
  pFVar12 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)local_2c8);
  pFVar20 = (FMetasoundFrontendClassInput *)(pFVar12->Inputs).AllocatorInstance.Data;
  if ((pFVar20 <= param_1) &&
     (lVar26 = (longlong)(pFVar12->Inputs).ArrayMax, param_1 < pFVar20 + lVar26)) {
    local_300 = (longlong)(pFVar12->Inputs).ArrayNum;
    local_2f8 = 0x48;
    local_318 = param_1;
    local_310 = pFVar20;
    local_308 = lVar26;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar18 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
      return pTVar18;
    }
  }
  iVar9 = (pFVar12->Inputs).ArrayNum;
  piVar1 = &(pFVar12->Inputs).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)pFVar12,piVar1);
  }
  (pFVar12->Inputs).ArrayNum = iVar9 + 1;
  pFVar20 = FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
                      ((FMetasoundFrontendClassInput *)
                       ((pFVar12->Inputs).AllocatorInstance.Data + (longlong)iVar9 * 0x48),param_1);
  this_00 = local_2e0;
  uVar28 = (pFVar16->ID).B;
  uVar27 = (pFVar16->ID).C;
  uVar29 = (pFVar16->ID).D;
  *(uint *)&pFVar20->_padding_ = (pFVar16->ID).A;
  *(uint *)((longlong)&pFVar20->_padding_ + 4) = uVar28;
  *(uint *)&pFVar20->_padding_ = uVar27;
  *(uint *)((longlong)&pFVar20->_padding_ + 4) = uVar29;
  if (((*(int *)((longlong)&pFVar20->_padding_ + 4) == 0 && (int)pFVar20->_padding_ == 0) &&
      *(int *)((longlong)&pFVar20->_padding_ + 4) == 0) && (int)pFVar20->_padding_ == 0) {
    pIVar5 = (local_2e0->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar5 + 0x110))(pIVar5,local_158);
    UE::Core::Private::Function::CheckCallable(local_148);
    pcVar4 = local_148;
    plVar24 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar24 = local_120;
    }
    uVar10 = (**(code **)(*plVar24 + 8))();
    pFVar17 = (FMetasoundFrontendDocument *)(*pcVar4)(uVar10);
    local_158[0] = pFVar17;
    if ((pFVar17 == (FMetasoundFrontendDocument *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Document",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                           ,0x429,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar18 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
      return pTVar18;
    }
    FDocumentIDGenerator::CreateIDFromDocument
              ((FDocumentIDGenerator *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9ac8),&local_208,pFVar17);
    *(uint *)&pFVar20->_padding_ = local_208.A;
    *(uint *)((longlong)&pFVar20->_padding_ + 4) = local_208.B;
    *(uint *)&pFVar20->_padding_ = local_208.C;
    *(uint *)((longlong)&pFVar20->_padding_ + 4) = local_208.D;
    if (local_148 != (code *)0x0) {
      plVar24 = local_138;
      if (local_120 != (longlong *)0x0) {
        plVar24 = local_120;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
  }
  pFVar12 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)pFVar11);
  pFVar21 = FGuid::NewGuid(&local_1e8);
  uVar28 = pFVar21->B;
  uVar27 = pFVar21->C;
  uVar29 = pFVar21->D;
  (pFVar12->ChangeID).A = pFVar21->A;
  (pFVar12->ChangeID).B = uVar28;
  (pFVar12->ChangeID).C = uVar27;
  (pFVar12->ChangeID).D = uVar29;
  FGraphClassAccessPtr::GetNodeWithNodeID
            (&this_00->GraphClassPtr,(FNodeAccessPtr *)local_118,&pFVar16->ID);
  local_d8._0_8_ = local_118._0_8_;
  local_d8._16_8_ = local_118._16_8_;
  local_a0 = (longlong *)0x0;
  if (local_118._16_8_ != 0) {
    plVar24 = (longlong *)(local_118 + 0x20);
    if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_118._56_8_;
    }
    (**(code **)*plVar24)(plVar24,local_d8 + 0x20);
  }
  local_98 = local_1d8[0];
  local_88 = local_1c8;
  local_60 = (longlong *)0x0;
  if (local_1c8 != (code *)0x0) {
    plVar24 = local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar24 = local_1a0;
    }
    (**(code **)*plVar24)(plVar24,local_78);
  }
  GetNodeHandle(this_00,__return_storage_ptr__,(FNodeAndClass *)local_d8);
  if (local_88 != (code *)0x0) {
    plVar24 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar24 = local_60;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_d8._16_8_ != 0) {
    plVar24 = (longlong *)(local_d8 + 0x20);
    if (local_a0 != (longlong *)0x0) {
      plVar24 = local_a0;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_118._16_8_ != 0) {
    plVar24 = (longlong *)(local_118 + 0x20);
    if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_118._56_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_290.ObjectPtr);
  if (local_1c8 != (code *)0x0) {
    plVar24 = local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar24 = local_1a0;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddNode @ 14ae22090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FConstClassAccessPtr *param_1,FGuid *param_2)

{
  undefined1 *puVar1;
  FMetasoundFrontendClassMetadata *this_00;
  int *piVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FGraphController *this_01;
  EMetasoundFrontendClassType EVar8;
  int iVar9;
  undefined8 uVar10;
  FMetasoundFrontendClass *pFVar11;
  INodeTemplateRegistry *pIVar12;
  FNodeClassRegistryKey *pFVar13;
  longlong *plVar14;
  FInstancedStruct *pFVar15;
  INodeClassRegistry *pIVar16;
  FMetasoundFrontendGraph *pFVar17;
  FMetasoundFrontendNode *pFVar18;
  IMetaSoundAssetManager *pIVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined1 auStack_1b8 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_198;
  undefined8 uStack_190;
  TObjectPtr<UScriptStruct_const_>_u_0 local_188;
  FName local_180;
  TObjectPtr<UScriptStruct_const_>_u_0 local_178;
  undefined8 local_170;
  FGuid *local_168;
  FGraphController *local_160;
  FConstClassAccessPtr *local_158;
  FNodeClassRegistryKey local_150;
  FMetaSoundAssetKey local_128;
  undefined1 local_108 [64];
  undefined1 local_c8 [56];
  longlong *local_90;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_168 = param_2;
  local_160 = this;
  local_158 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar21 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar14 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar21 != (longlong *)0x0) {
    plVar14 = plVar21;
  }
  uVar10 = (**(code **)(*plVar14 + 8))();
  local_178.DebugPtr = (UScriptStruct *)(*pcVar3)(uVar10);
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)&this->GraphClassPtr = (UScriptStruct *)local_178;
  puVar1 = &param_1->field_0x10;
  if ((FMetasoundFrontendGraphClass *)local_178.DebugPtr == (FMetasoundFrontendGraphClass *)0x0) {
LAB_14ae223d8:
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    if (*(longlong *)puVar1 != 0) {
      plVar21 = (longlong *)&param_1->field_0x20;
      if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
        plVar21 = *(longlong **)&param_1->field_0x38;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    return __return_storage_ptr__;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)puVar1);
  plVar21 = (longlong *)&param_1->field_0x20;
  pcVar3 = *(code **)puVar1;
  plVar14 = plVar21;
  if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
    plVar14 = *(longlong **)&param_1->field_0x38;
  }
  uVar10 = (**(code **)(*plVar14 + 8))(plVar14);
  pFVar11 = (FMetasoundFrontendClass *)(*pcVar3)(uVar10);
  *(FMetasoundFrontendClass **)param_1 = pFVar11;
  if (pFVar11 == (FMetasoundFrontendClass *)0x0) goto LAB_14ae223d8;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_198.ObjectPtr);
  this_00 = &pFVar11->Metadata;
  EVar8 = FMetasoundFrontendClassMetadata::GetType(this_00);
  if (EVar8 == Template) {
    pIVar12 = INodeTemplateRegistry::Get();
    pcVar3 = *(code **)((longlong)*pIVar12 + 0x10);
    pFVar13 = FNodeClassRegistryKey::FNodeClassRegistryKey(&local_150,this_00);
    plVar14 = (longlong *)(*pcVar3)(pIVar12,pFVar13);
    if (plVar14 == (longlong *)0x0) goto LAB_14ae221ef;
    pFVar15 = (FInstancedStruct *)(**(code **)(*plVar14 + 0x20))(plVar14,&local_188);
  }
  else {
    EVar8 = FMetasoundFrontendClassMetadata::GetType(this_00);
    if (EVar8 == Graph) goto LAB_14ae221ef;
    pIVar16 = INodeClassRegistry::Get();
    pcVar3 = *(code **)((longlong)*pIVar16 + 0x78);
    pFVar13 = FNodeClassRegistryKey::FNodeClassRegistryKey(&local_150,this_00);
    pFVar15 = (FInstancedStruct *)(*pcVar3)(pIVar16,&local_188,pFVar13);
  }
  FInstancedStruct::operator=((FInstancedStruct *)&local_198.ObjectPtr,pFVar15);
  FInstancedStruct::Reset((FInstancedStruct *)&local_188.ObjectPtr);
LAB_14ae221ef:
  pFVar17 = FindBuildGraphChecked((FMetasoundFrontendGraphClass *)local_178.DebugPtr);
  piVar2 = &(pFVar17->Nodes).ArrayMax;
  iVar9 = (pFVar17->Nodes).ArrayNum;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)pFVar17,piVar2);
  }
  (pFVar17->Nodes).ArrayNum = iVar9 + 1;
  local_178.DebugPtr = local_198.DebugPtr;
  pFVar4 = (pFVar17->Nodes).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_198.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_198.DebugPtr);
  }
  local_170 = uStack_190;
  local_198.DebugPtr = (UScriptStruct *)0x0;
  uStack_190 = 0;
  pFVar18 = FMetasoundFrontendNode::FMetasoundFrontendNode
                      ((FMetasoundFrontendNode *)(pFVar4 + (longlong)iVar9 * 0x88),pFVar11,
                       (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)&local_178.ObjectPtr
                      );
  pIVar19 = IMetaSoundAssetManager::Get();
  if ((pIVar19 != (IMetaSoundAssetManager *)0x0) &&
     (EVar8 = FMetasoundFrontendClassMetadata::GetType(this_00), EVar8 == External)) {
    FNodeClassRegistryKey::FNodeClassRegistryKey(&local_150,this_00);
    pcVar3 = *(code **)((longlong)*pIVar19 + 0x58);
    FMetaSoundAssetKey::FMetaSoundAssetKey(&local_128,&local_150);
    (*pcVar3)(pIVar19,&local_188,&local_128);
    if (local_188.DebugPtr != (UScriptStruct *)0x0) {
      pFVar18->Name = local_180;
    }
  }
  this_01 = local_160;
  uVar5 = local_168->B;
  uVar6 = local_168->C;
  uVar7 = local_168->D;
  (pFVar18->ID).A = local_168->A;
  (pFVar18->ID).B = uVar5;
  (pFVar18->ID).C = uVar6;
  (pFVar18->ID).D = uVar7;
  FGraphClassAccessPtr::GetNodeWithNodeID
            (&local_160->GraphClassPtr,(FNodeAccessPtr *)local_108,&pFVar18->ID);
  local_c8._0_8_ = local_108._0_8_;
  local_c8._16_8_ = local_108._16_8_;
  local_90 = (longlong *)0x0;
  if (local_108._16_8_ != 0) {
    plVar14 = (longlong *)(local_108 + 0x20);
    if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_108._56_8_;
    }
    (**(code **)*plVar14)(plVar14,local_c8 + 0x20);
  }
  local_50 = (longlong *)0x0;
  local_88._0_8_ = *(undefined8 *)local_158;
  local_88._16_8_ = *(undefined8 *)puVar1;
  if (local_88._16_8_ != 0) {
    puVar20 = plVar21;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar20)(puVar20,local_88 + 0x20);
  }
  GetNodeHandle(this_01,__return_storage_ptr__,(FNodeAndClass *)local_c8);
  if (local_88._16_8_ != 0) {
    plVar14 = (longlong *)(local_88 + 0x20);
    if (local_50 != (longlong *)0x0) {
      plVar14 = local_50;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_c8._16_8_ != 0) {
    plVar14 = (longlong *)(local_c8 + 0x20);
    if (local_90 != (longlong *)0x0) {
      plVar14 = local_90;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_108._16_8_ != 0) {
    plVar14 = (longlong *)(local_108 + 0x20);
    if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_108._56_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_198.ObjectPtr);
  if (*(longlong *)puVar1 == 0) {
    return __return_storage_ptr__;
  }
  if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
    plVar21 = *(longlong **)&param_1->field_0x38;
  }
  (**(code **)(*plVar21 + 0x10))(plVar21);
  return __return_storage_ptr__;
}

// AddNode @ 14ae22430

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1,FGuid *param_2)

{
  code *pcVar1;
  EMetasoundFrontendClassType EVar2;
  FNodeClassRegistryKey *pFVar3;
  FMetasoundFrontendClassMetadata *local_res8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  FNodeClassRegistryKey local_48;
  
  EVar2 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar2 == Template) {
    local_res8 = param_1;
    `Metasound::Frontend::FGraphController::AddNode'::__l2::<lambda_1>::operator()(&local_res8);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x1f8);
  pFVar3 = FNodeClassRegistryKey::FNodeClassRegistryKey(&local_48,param_1);
  local_58 = param_2->A;
  uStack_54 = param_2->B;
  uStack_50 = param_2->C;
  uStack_4c = param_2->D;
  (*pcVar1)(this,__return_storage_ptr__,pFVar3,&local_58);
  return __return_storage_ptr__;
}

// AddNode @ 14ae224c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,FGuid *param_2)

{
  IDocumentController *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  ForAnyElementType local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  code *local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pIVar1 = (this->OwningDocument).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x98))(pIVar1,local_78,param_1,0);
  UE::Core::Private::Function::CheckCallable(local_68);
  pcVar2 = local_68;
  plVar4 = local_58;
  if (local_40 != (longlong *)0x0) {
    plVar4 = local_40;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  local_b8._0_8_ = (*pcVar2)(uVar3);
  local_78[0] = local_b8._0_8_;
  if (local_b8._0_8_ == 0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      FNodeClassRegistryKey::ToString(param_1,(FString *)&local_c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
    }
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    if (local_68 != (code *)0x0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    local_b8._16_8_ = local_68;
    local_80 = 0;
    if (local_68 != (code *)0x0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)*plVar4)(plVar4,local_98);
    }
    local_c8.Data = *(FScriptContainerElement **)param_2;
    uStack_c0._0_4_ = param_2->C;
    uStack_c0._4_4_ = param_2->D;
    AddNode(this,__return_storage_ptr__,(FConstClassAccessPtr *)local_b8,(FGuid *)&local_c8);
    if (local_68 != (code *)0x0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// AddOutputVertex @ 14ae22b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddOutputVertex
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassOutput *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  IDocumentController *pIVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FMetasoundFrontendClassOutput *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FGraphController *this_00;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  FMetasoundFrontendGraphClass *pFVar15;
  FMetasoundFrontendClassInterface *pFVar16;
  FMetasoundFrontendClass *pFVar17;
  INodeClassRegistry *pIVar18;
  FMetasoundFrontendGraph *pFVar19;
  FMetasoundFrontendNode *pFVar20;
  FMetasoundFrontendDocument *pFVar21;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar22;
  FName *pFVar23;
  FGuid *pFVar24;
  longlong *plVar25;
  FName *pFVar26;
  longlong *plVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auStack_338 [32];
  FMetasoundFrontendClassOutput *local_318;
  FMetasoundFrontendClassOutput *local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined1 local_2e8 [8];
  FGraphController *local_2e0;
  FString local_2d8;
  FMetasoundFrontendGraphClass *local_2c8;
  FNodeClassRegistryKey local_2b8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_290;
  undefined8 uStack_288;
  TObjectPtr<UScriptStruct_const_>_u_0 local_280;
  undefined8 local_278;
  FString local_270;
  FGuid local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FGuid local_208;
  FString local_1f8;
  FGuid local_1e8;
  FMetasoundFrontendClass *local_1d8 [2];
  code *local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  FMetasoundFrontendDocument *local_198 [2];
  code *local_188;
  longlong local_178 [3];
  longlong *local_160;
  FMetasoundFrontendDocument *local_158 [2];
  code *local_148;
  longlong local_138 [3];
  longlong *local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [56];
  longlong *local_a0;
  FMetasoundFrontendClass *local_98;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2e0 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar27 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar25 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar27 != (longlong *)0x0) {
    plVar25 = plVar27;
  }
  uVar14 = (**(code **)(*plVar25 + 8))();
  pFVar15 = (FMetasoundFrontendGraphClass *)(*pcVar3)(uVar14);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = pFVar15;
  local_2c8 = pFVar15;
  if (pFVar15 != (FMetasoundFrontendGraphClass *)0x0) {
    pFVar16 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)pFVar15);
    iVar13 = (pFVar16->Outputs).ArrayNum;
    pFVar29 = (pFVar16->Outputs).AllocatorInstance.Data;
    pFVar30 = pFVar29 + (longlong)iVar13 * 0x34;
    while( true ) {
      if ((pFVar16->Outputs).ArrayNum != iVar13) {
        local_2e8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2e8);
      }
      if (pFVar29 == pFVar30) {
        local_2b8.Type = Invalid;
        local_2b8.ClassName.Namespace.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Namespace.Number = 0;
        local_2b8.ClassName.Name.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Name.Number = 0;
        local_2b8.ClassName.Variant.ComparisonIndex.Value = 0;
        local_2b8.ClassName.Variant.Number = 0;
        local_2b8.Version.Major = 1;
        local_2b8.Version.Minor = 0;
        bVar12 = INodeClassRegistry::GetOutputNodeRegistryKeyForDataType
                           ((FName *)&param_1->field_0x8,
                            *(EMetasoundFrontendVertexAccessType *)&param_1->field_0x30,&local_2b8);
        if (!bVar12) {
          if ((byte)LogMetaSound._0_1_ < 4) goto LAB_14ae2338b;
          ::FName::ToString((FName *)&param_1->field_0x8,&local_1f8);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          goto LAB_14ae23381;
        }
        pIVar4 = (local_2e0->OwningDocument).Object;
        (**(code **)(*(longlong *)pIVar4 + 0x98))(pIVar4,local_1d8,&local_2b8,0);
        UE::Core::Private::Function::CheckCallable(local_1c8);
        pcVar3 = local_1c8;
        plVar27 = local_1b8;
        if (local_1a0 != (longlong *)0x0) {
          plVar27 = local_1a0;
        }
        uVar14 = (**(code **)(*plVar27 + 8))();
        pFVar17 = (FMetasoundFrontendClass *)(*pcVar3)(uVar14);
        local_1d8[0] = pFVar17;
        if (pFVar17 == (FMetasoundFrontendClass *)0x0) {
          if (local_1c8 != (code *)0x0) {
            plVar27 = local_1b8;
            if (local_1a0 != (longlong *)0x0) {
              plVar27 = local_1a0;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
          goto LAB_14ae2338b;
        }
        FVar5.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
        FVar5.Number = *(uint *)&param_1->field_0x4;
        pIVar18 = INodeClassRegistry::Get();
        (**(code **)((longlong)*pIVar18 + 0x78))(pIVar18,&local_290,&local_2b8);
        pFVar19 = FindBuildGraphChecked(local_2c8);
        piVar1 = &(pFVar19->Nodes).ArrayMax;
        iVar13 = (pFVar19->Nodes).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x888,(ForAnyElementType *)pFVar19,piVar1);
        }
        (pFVar19->Nodes).ArrayNum = iVar13 + 1;
        local_280.DebugPtr = local_290.DebugPtr;
        pFVar29 = (pFVar19->Nodes).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_290.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_290.DebugPtr);
        }
        local_278 = uStack_288;
        local_290.DebugPtr = (UScriptStruct *)0x0;
        uStack_288 = 0;
        pFVar20 = FMetasoundFrontendNode::FMetasoundFrontendNode
                            ((FMetasoundFrontendNode *)(pFVar29 + (longlong)iVar13 * 0x88),pFVar17,
                             (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)
                             &local_280.ObjectPtr);
        pFVar20->Name = FVar5;
        auVar2 = *(undefined1 (*) [16])&param_1->field_0x20;
        uVar31 = auVar2._0_4_;
        uVar32 = auVar2._4_4_;
        uVar33 = auVar2._8_4_;
        uVar34 = auVar2._12_4_;
        if (((auVar2._4_4_ == 0 &&
             (int)((ulonglong)*(undefined8 *)&param_1->field_0x28 >> 0x20) == 0) &&
            (int)*(undefined8 *)&param_1->field_0x28 == 0) && auVar2._0_4_ == 0) {
          pIVar4 = (local_2e0->OwningDocument).Object;
          (**(code **)(*(longlong *)pIVar4 + 0x110))(pIVar4,local_198);
          UE::Core::Private::Function::CheckCallable(local_188);
          pcVar3 = local_188;
          plVar27 = local_178;
          if (local_160 != (longlong *)0x0) {
            plVar27 = local_160;
          }
          uVar14 = (**(code **)(*plVar27 + 8))();
          pFVar21 = (FMetasoundFrontendDocument *)(*pcVar3)(uVar14);
          local_198[0] = pFVar21;
          if ((pFVar21 == (FMetasoundFrontendDocument *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Document",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                  ,0x481,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar22 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar22;
          }
          FDocumentIDGenerator::CreateIDFromDocument
                    ((FDocumentIDGenerator *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9ac8),&local_258,pFVar21);
          uVar31 = local_258.A;
          uVar32 = local_258.B;
          uVar33 = local_258.C;
          uVar34 = local_258.D;
          if (local_188 != (code *)0x0) {
            plVar27 = local_178;
            if (local_160 != (longlong *)0x0) {
              plVar27 = local_160;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
        }
        (pFVar20->ID).A = uVar31;
        (pFVar20->ID).B = uVar32;
        (pFVar20->ID).C = uVar33;
        (pFVar20->ID).D = uVar34;
        pFVar23 = (FName *)(pFVar20->Interface).Inputs.AllocatorInstance.Data;
        pFVar26 = pFVar23 + (longlong)(pFVar20->Interface).Inputs.ArrayNum * 4;
        if (pFVar23 == pFVar26) goto LAB_14ae22ef5;
        FVar6.ComparisonIndex.Value = *(uint *)&param_1->field_0x8;
        FVar6.Number = *(uint *)&param_1->field_0xc;
        goto LAB_14ae22ee6;
      }
      if (*(longlong *)pFVar29 == *(longlong *)param_1) break;
      pFVar29 = pFVar29 + 0x34;
    }
    if (3 < (byte)LogMetaSound._0_1_) {
      local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.Data.ArrayNum = 0;
      local_2d8.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)&pFVar15->_padding_,&local_2d8,Digits);
      ::FName::ToString((FName *)param_1,&local_270);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      local_1f8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
      }
LAB_14ae23381:
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ae2338b:
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
  while (pFVar23 = pFVar23 + 4, pFVar23 != pFVar26) {
LAB_14ae22ee6:
    if (pFVar23[1] == FVar6) {
      *pFVar23 = FVar5;
      goto LAB_14ae22f6b;
    }
  }
LAB_14ae22ef5:
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->field_0x8,&local_238);
    ::FName::ToString((FName *)&param_1->field_0x8,&local_248);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae22f6b:
  pFVar23 = (FName *)(pFVar20->Interface).Outputs.AllocatorInstance.Data;
  pFVar26 = pFVar23 + (longlong)(pFVar20->Interface).Outputs.ArrayNum * 4;
  if (pFVar23 != pFVar26) {
    FVar7.ComparisonIndex.Value = *(uint *)&param_1->field_0x8;
    FVar7.Number = *(uint *)&param_1->field_0xc;
    do {
      if (pFVar23[1] == FVar7) {
        *pFVar23 = FVar5;
        goto LAB_14ae23008;
      }
      pFVar23 = pFVar23 + 4;
    } while (pFVar23 != pFVar26);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->field_0x8,&local_218);
    ::FName::ToString((FName *)&param_1->field_0x8,&local_228);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae23008:
  pFVar15 = local_2c8;
  pFVar16 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)local_2c8);
  pFVar8 = (FMetasoundFrontendClassOutput *)(pFVar16->Outputs).AllocatorInstance.Data;
  if ((pFVar8 <= param_1) &&
     (lVar28 = (longlong)(pFVar16->Outputs).ArrayMax, param_1 < pFVar8 + lVar28)) {
    local_300 = (longlong)(pFVar16->Outputs).ArrayNum;
    local_2f8 = 0x34;
    local_318 = param_1;
    local_310 = pFVar8;
    local_308 = lVar28;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pTVar22 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
      return pTVar22;
    }
  }
  iVar13 = (pFVar16->Outputs).ArrayNum;
  piVar1 = &(pFVar16->Outputs).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x434,&(pFVar16->Outputs).AllocatorInstance,piVar1);
  }
  this_00 = local_2e0;
  (pFVar16->Outputs).ArrayNum = iVar13 + 1;
  uVar14 = *(undefined8 *)&param_1->field_0x8;
  pFVar29 = (pFVar16->Outputs).AllocatorInstance.Data + (longlong)iVar13 * 0x34;
  *(undefined8 *)pFVar29 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar29 + 8) = uVar14;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)(pFVar29 + 0x10) = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)(pFVar29 + 0x14) = uVar9;
  *(undefined4 *)(pFVar29 + 0x18) = uVar10;
  *(undefined4 *)(pFVar29 + 0x1c) = uVar11;
  uVar14 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)(pFVar29 + 0x20) = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)(pFVar29 + 0x28) = uVar14;
  *(undefined4 *)(pFVar29 + 0x30) = *(undefined4 *)&param_1->field_0x30;
  uVar31 = (pFVar20->ID).B;
  uVar32 = (pFVar20->ID).C;
  uVar33 = (pFVar20->ID).D;
  *(uint *)(pFVar29 + 0x20) = (pFVar20->ID).A;
  *(uint *)(pFVar29 + 0x24) = uVar31;
  *(uint *)(pFVar29 + 0x28) = uVar32;
  *(uint *)(pFVar29 + 0x2c) = uVar33;
  if (((*(int *)(pFVar29 + 0x1c) == 0 && *(int *)(pFVar29 + 0x18) == 0) &&
      *(int *)(pFVar29 + 0x14) == 0) && *(int *)(pFVar29 + 0x10) == 0) {
    pIVar4 = (local_2e0->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar4 + 0x110))(pIVar4,local_158);
    UE::Core::Private::Function::CheckCallable(local_148);
    pcVar3 = local_148;
    plVar27 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar27 = local_120;
    }
    uVar14 = (**(code **)(*plVar27 + 8))();
    pFVar21 = (FMetasoundFrontendDocument *)(*pcVar3)(uVar14);
    local_158[0] = pFVar21;
    if ((pFVar21 == (FMetasoundFrontendDocument *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Document",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                            ,0x4a5,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar22 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
      return pTVar22;
    }
    FDocumentIDGenerator::CreateIDFromDocument
              ((FDocumentIDGenerator *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9ac8),&local_208,pFVar21);
    *(uint *)(pFVar29 + 0x10) = local_208.A;
    *(uint *)(pFVar29 + 0x14) = local_208.B;
    *(uint *)(pFVar29 + 0x18) = local_208.C;
    *(uint *)(pFVar29 + 0x1c) = local_208.D;
    if (local_148 != (code *)0x0) {
      plVar27 = local_138;
      if (local_120 != (longlong *)0x0) {
        plVar27 = local_120;
      }
      (**(code **)(*plVar27 + 0x10))();
    }
  }
  pFVar16 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)pFVar15);
  pFVar24 = FGuid::NewGuid(&local_1e8);
  uVar31 = pFVar24->B;
  uVar32 = pFVar24->C;
  uVar33 = pFVar24->D;
  (pFVar16->ChangeID).A = pFVar24->A;
  (pFVar16->ChangeID).B = uVar31;
  (pFVar16->ChangeID).C = uVar32;
  (pFVar16->ChangeID).D = uVar33;
  FGraphClassAccessPtr::GetNodeWithNodeID
            (&this_00->GraphClassPtr,(FNodeAccessPtr *)local_118,&pFVar20->ID);
  local_d8._0_8_ = local_118._0_8_;
  local_d8._16_8_ = local_118._16_8_;
  local_a0 = (longlong *)0x0;
  if (local_118._16_8_ != 0) {
    plVar27 = (longlong *)(local_118 + 0x20);
    if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_118._56_8_;
    }
    (**(code **)*plVar27)(plVar27,local_d8 + 0x20);
  }
  local_98 = local_1d8[0];
  local_88 = local_1c8;
  local_60 = (longlong *)0x0;
  if (local_1c8 != (code *)0x0) {
    plVar27 = local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar27 = local_1a0;
    }
    (**(code **)*plVar27)(plVar27,local_78);
  }
  GetNodeHandle(this_00,__return_storage_ptr__,(FNodeAndClass *)local_d8);
  if (local_88 != (code *)0x0) {
    plVar27 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar27 = local_60;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (local_d8._16_8_ != 0) {
    plVar27 = (longlong *)(local_d8 + 0x20);
    if (local_a0 != (longlong *)0x0) {
      plVar27 = local_a0;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (local_118._16_8_ != 0) {
    plVar27 = (longlong *)(local_118 + 0x20);
    if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_118._56_8_;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_290.ObjectPtr);
  if (local_1c8 != (code *)0x0) {
    plVar27 = local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar27 = local_1a0;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddOutputVertex @ 14ae233d0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddOutputVertex
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1,
          FName param_2)

{
  FGuid local_58;
  FName local_48;
  FName local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FGuid local_28;
  undefined4 local_18;
  
  FGuid::NewGuid(&local_58);
  local_48 = *param_1;
  local_28 = FrontendInvalidID;
  local_18 = 0;
  local_38 = local_58.A;
  uStack_34 = local_58.B;
  uStack_30 = local_58.C;
  uStack_2c = local_58.D;
  local_40 = param_2;
  (**(code **)(this->_padding_ + 0x188))(this,__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// AddTemplateNode @ 14ae235b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddTemplateNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          INodeTemplate *param_1,FNodeTemplateGenerateInterfaceParams *param_2,FGuid *param_3)

{
  int *piVar1;
  FMetasoundFrontendNodeInterface *pFVar2;
  IDocumentController *pIVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  FMetasoundFrontendGraphClass *pFVar12;
  FMetasoundFrontendClass *pFVar13;
  FMetasoundFrontendGraph *pFVar14;
  FMetasoundFrontendNode *pFVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 auStack_228 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_208;
  undefined8 uStack_200;
  TObjectPtr<UScriptStruct_const_>_u_0 local_1f8;
  undefined8 local_1f0;
  FMetasoundFrontendNode *local_1e8;
  FGraphController *local_1e0;
  FScriptContainerElement *local_1d8;
  int local_1d0;
  int local_1cc;
  FScriptContainerElement *local_1c8;
  int local_1c0;
  int local_1bc;
  FNodeClassRegistryKey local_1b8;
  void *local_190 [2];
  void *local_180;
  void *local_170;
  FMetasoundFrontendClass *local_158 [2];
  code *local_148;
  longlong local_138 [3];
  longlong *local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [56];
  longlong *local_a0;
  FMetasoundFrontendClass *local_98;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1e0 = this;
  lVar10 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_1b8,(FMetasoundFrontendClassMetadata *)(lVar10 + 0x18));
  pIVar3 = (this->OwningDocument).Object;
  (**(code **)(*(longlong *)pIVar3 + 0x98))(pIVar3,local_158,&local_1b8,0);
  UE::Core::Private::Function::CheckCallable(local_148);
  pcVar4 = local_148;
  plVar18 = local_138;
  if (local_120 != (longlong *)0x0) {
    plVar18 = local_120;
  }
  uVar11 = (**(code **)(*plVar18 + 8))();
  local_158[0] = (FMetasoundFrontendClass *)(*pcVar4)(uVar11);
  if (local_158[0] != (FMetasoundFrontendClass *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
    plVar18 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    pcVar4 = *(code **)&(this->GraphClassPtr).field_0x10;
    plVar17 = (longlong *)&(this->GraphClassPtr).field_0x20;
    if (plVar18 != (longlong *)0x0) {
      plVar17 = plVar18;
    }
    uVar11 = (**(code **)(*plVar17 + 8))();
    pFVar12 = (FMetasoundFrontendGraphClass *)(*pcVar4)(uVar11);
    *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = pFVar12;
    if (pFVar12 != (FMetasoundFrontendGraphClass *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_148);
      pcVar4 = local_148;
      plVar18 = local_138;
      if (local_120 != (longlong *)0x0) {
        plVar18 = local_120;
      }
      uVar11 = (**(code **)(*plVar18 + 8))(plVar18);
      pFVar13 = (FMetasoundFrontendClass *)(*pcVar4)(uVar11);
      local_158[0] = pFVar13;
      if (pFVar13 != (FMetasoundFrontendClass *)0x0) {
        pFVar14 = FindBuildGraphChecked(pFVar12);
        local_208.DebugPtr = (UScriptStruct *)0x0;
        uStack_200 = 0;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_208.ObjectPtr);
        iVar9 = (pFVar14->Nodes).ArrayNum;
        piVar1 = &(pFVar14->Nodes).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x888,(ForAnyElementType *)pFVar14,piVar1);
        }
        uVar11 = uStack_200;
        (pFVar14->Nodes).ArrayNum = iVar9 + 1;
        local_1f8.DebugPtr = local_208.DebugPtr;
        pFVar5 = (pFVar14->Nodes).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_208.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_208.DebugPtr);
        }
        local_1f0 = uVar11;
        local_208.DebugPtr = (UScriptStruct *)0x0;
        uStack_200 = 0;
        pFVar15 = FMetasoundFrontendNode::FMetasoundFrontendNode
                            ((FMetasoundFrontendNode *)(pFVar5 + (longlong)iVar9 * 0x88),pFVar13,
                             (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)
                             &local_1f8.ObjectPtr);
        local_1e8 = pFVar15;
        FInstancedStruct::Reset((FInstancedStruct *)&local_208.ObjectPtr);
        uVar6 = param_3->B;
        uVar7 = param_3->C;
        uVar8 = param_3->D;
        (pFVar15->ID).A = param_3->A;
        (pFVar15->ID).B = uVar6;
        (pFVar15->ID).C = uVar7;
        (pFVar15->ID).D = uVar8;
        pcVar4 = *(code **)*param_1;
        local_1d8 = (param_2->InputsToConnect).AllocatorInstance.Data;
        (param_2->InputsToConnect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0 = (param_2->InputsToConnect).ArrayNum;
        local_1cc = (param_2->InputsToConnect).ArrayMax;
        (param_2->InputsToConnect).ArrayNum = 0;
        (param_2->InputsToConnect).ArrayMax = 0;
        local_1c8 = (param_2->OutputsToConnect).AllocatorInstance.Data;
        (param_2->OutputsToConnect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0 = (param_2->OutputsToConnect).ArrayNum;
        local_1bc = (param_2->OutputsToConnect).ArrayMax;
        (param_2->OutputsToConnect).ArrayNum = 0;
        (param_2->OutputsToConnect).ArrayMax = 0;
        puVar16 = (undefined8 *)(*pcVar4)(param_1,local_190,&local_1d8);
        pFVar2 = &pFVar15->Interface;
        if (pFVar2 != (FMetasoundFrontendNodeInterface *)puVar16) {
          pFVar5 = (pFVar2->Inputs).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pFVar2->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)*puVar16;
          *puVar16 = 0;
          (pFVar15->Interface).Inputs.ArrayNum = *(int *)(puVar16 + 1);
          (pFVar15->Interface).Inputs.ArrayMax = *(int *)((longlong)puVar16 + 0xc);
          puVar16[1] = 0;
        }
        puVar19 = puVar16 + 2;
        pTVar20 = &(pFVar15->Interface).Outputs;
        if (pTVar20 != (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)puVar19) {
          pFVar5 = (pTVar20->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)*puVar19;
          *puVar19 = 0;
          (pFVar15->Interface).Outputs.ArrayNum = *(int *)(puVar16 + 3);
          (pFVar15->Interface).Outputs.ArrayMax = *(int *)((longlong)puVar16 + 0x1c);
          puVar16[3] = 0;
        }
        puVar19 = puVar16 + 4;
        pTVar20 = &(pFVar15->Interface).Environment;
        if (pTVar20 != (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)puVar19) {
          pFVar5 = (pTVar20->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)*puVar19;
          *puVar19 = 0;
          (pFVar15->Interface).Environment.ArrayNum = *(int *)(puVar16 + 5);
          (pFVar15->Interface).Environment.ArrayMax = *(int *)((longlong)puVar16 + 0x2c);
          puVar16[5] = 0;
        }
        if (local_170 != (void *)0x0) {
          FMemory::Free(local_170);
        }
        if (local_180 != (void *)0x0) {
          FMemory::Free(local_180);
        }
        if (local_190[0] != (void *)0x0) {
          FMemory::Free(local_190[0]);
        }
        FGraphClassAccessPtr::GetNodeWithNodeID
                  (&this->GraphClassPtr,(FNodeAccessPtr *)local_118,&local_1e8->ID);
        local_d8._0_8_ = local_118._0_8_;
        local_d8._16_8_ = local_118._16_8_;
        local_a0 = (longlong *)0x0;
        if (local_118._16_8_ != 0) {
          plVar18 = (longlong *)(local_118 + 0x20);
          if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_118._56_8_;
          }
          (**(code **)*plVar18)(plVar18,local_d8 + 0x20);
        }
        local_98 = local_158[0];
        local_88 = local_148;
        local_60 = (longlong *)0x0;
        if (local_148 != (code *)0x0) {
          plVar18 = local_138;
          if (local_120 != (longlong *)0x0) {
            plVar18 = local_120;
          }
          (**(code **)*plVar18)(plVar18,local_78);
        }
        GetNodeHandle(local_1e0,__return_storage_ptr__,(FNodeAndClass *)local_d8);
        if (local_88 != (code *)0x0) {
          plVar18 = local_78;
          if (local_60 != (longlong *)0x0) {
            plVar18 = local_60;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (local_d8._16_8_ != 0) {
          plVar18 = (longlong *)(local_d8 + 0x20);
          if (local_a0 != (longlong *)0x0) {
            plVar18 = local_a0;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (local_118._16_8_ != 0) {
          plVar18 = (longlong *)(local_118 + 0x20);
          if ((longlong *)local_118._56_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_118._56_8_;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        goto LAB_14ae239fd;
      }
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    FNodeClassRegistryKey::ToString(&local_1b8,(FString *)&local_1f8.ObjectPtr);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_1f8.DebugPtr != (UScriptStruct *)0x0) {
      FMemory::Free(local_1f8.DebugPtr);
    }
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
LAB_14ae239fd:
  if (local_148 != (code *)0x0) {
    plVar18 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar18 = local_120;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  pFVar5 = (param_2->OutputsToConnect).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (param_2->InputsToConnect).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// AddVariable @ 14ae23a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FGraphController::AddVariable
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FName *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FMetasoundFrontendVariable *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  FMetasoundFrontendGraphClass *pFVar9;
  IDataTypeRegistry *pIVar10;
  TSharedRef<Metasound::Frontend::IVariableController,1> *pTVar11;
  FLiteral *pFVar12;
  FGuid *pFVar13;
  FMetasoundFrontendGraph *pFVar14;
  longlong *plVar15;
  undefined1 auStackY_298 [32];
  FName local_248;
  FText local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined2 local_21c;
  undefined1 local_21a;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_20c;
  longlong *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  FMetasoundFrontendVariable local_1e8;
  FGuid local_128;
  undefined **local_118;
  FGuid local_110;
  FMetasoundFrontendClassMetadata local_100;
  FMetasoundFrontendClassInput *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  FGuid local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar15 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar15 = plVar2;
  }
  uVar8 = (**(code **)(*plVar15 + 8))();
  pFVar9 = (FMetasoundFrontendGraphClass *)(*pcVar3)(uVar8);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = pFVar9;
  if (pFVar9 != (FMetasoundFrontendGraphClass *)0x0) {
    pIVar10 = IDataTypeRegistry::Get();
    local_248.ComparisonIndex.Value = 0;
    local_248.Number = 0;
    FText::FText(&local_240);
    local_230 = 0xc;
    local_228 = 0;
    local_220 = 0;
    local_21c = 0;
    local_21a = 0;
    local_218 = 0;
    local_210 = 0;
    local_20c = 0;
    cVar5 = (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,param_1,&local_248);
    if (cVar5 != '\0') {
      FGuid::NewGuid(&local_128);
      local_1e8.TypeName = local_248;
      local_1e8.Name.ComparisonIndex.Value = 0;
      local_1e8.Name.Number = 0;
      local_1e8.Literal.Type = None;
      local_1e8.Literal.AsNumDefault = 0;
      local_1e8.Literal.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Literal.AsBoolean.ArrayNum = 0;
      local_1e8.Literal.AsBoolean.ArrayMax = 0;
      local_1e8.Literal.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Literal.AsInteger.ArrayNum = 0;
      local_1e8.Literal.AsInteger.ArrayMax = 0;
      local_1e8.Literal.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Literal.AsFloat.ArrayNum = 0;
      local_1e8.Literal.AsFloat.ArrayMax = 0;
      local_1e8.Literal.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Literal.AsString.ArrayNum = 0;
      local_1e8.Literal.AsString.ArrayMax = 0;
      local_1e8.Literal.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Literal.AsUObject.ArrayNum = 0;
      local_1e8.Literal.AsUObject.ArrayMax = 0;
      local_1e8.ID = FrontendInvalidID;
      local_1e8.AccessorNodeIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.VariableNodeID = FrontendInvalidID;
      local_1e8.AccessorNodeIDs.ArrayNum = 0;
      local_1e8.AccessorNodeIDs.ArrayMax = 0;
      local_1e8.MutatorNodeID = FrontendInvalidID;
      local_1e8.DeferredAccessorNodeIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.DeferredAccessorNodeIDs.ArrayNum = 0;
      local_1e8.DeferredAccessorNodeIDs.ArrayMax = 0;
      pFVar12 = (FLiteral *)(**(code **)((longlong)*pIVar10 + 0x80))(pIVar10,local_58,param_1);
      FMetasoundFrontendLiteral::SetFromLiteral(&local_1e8.Literal,pFVar12);
      if ((0xc < local_48) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TSharedRef<Metasound::Frontend::IVariableController,1> *)(*pcVar3)();
        return pTVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48])(local_58);
      local_118 = &___7FMetasoundFrontendClass__6B_;
      local_110 = FrontendInvalidID;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_100);
      local_c8 = (FMetasoundFrontendClassInput *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      pIVar10 = IDataTypeRegistry::Get();
      cVar5 = (**(code **)((longlong)*pIVar10 + 0xe0))(pIVar10,&local_1e8.TypeName,&local_118);
      if (cVar5 != '\0') {
        pcVar3 = *(code **)(this->_padding_ + 0x1f0);
        pFVar13 = FGuid::NewGuid(&local_78);
        local_88 = pFVar13->A;
        uStack_84 = pFVar13->B;
        uStack_80 = pFVar13->C;
        uStack_7c = pFVar13->D;
        (*pcVar3)(this,&local_1f8,&local_100,&local_88);
        cVar5 = (**(code **)(*local_1f8 + 0x18))();
        if (cVar5 != '\0') {
          pFVar13 = (FGuid *)(**(code **)(*local_1f8 + 0x158))(local_1f8,local_68);
          local_1e8.VariableNodeID = *pFVar13;
          pFVar14 = FindBuildGraphChecked(pFVar9);
          pFVar4 = (FMetasoundFrontendVariable *)(pFVar14->Variables).AllocatorInstance.Data;
          if (((pFVar4 <= &local_1e8) && (&local_1e8 < pFVar4 + (pFVar14->Variables).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TSharedRef<Metasound::Frontend::IVariableController,1> *)(*pcVar3)();
            return pTVar11;
          }
          iVar7 = (pFVar14->Variables).ArrayNum;
          piVar1 = &(pFVar14->Variables).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8b8,&(pFVar14->Variables).AllocatorInstance,piVar1);
          }
          (pFVar14->Variables).ArrayNum = iVar7 + 1;
          FMetasoundFrontendVariable::FMetasoundFrontendVariable
                    ((FMetasoundFrontendVariable *)
                     ((pFVar14->Variables).AllocatorInstance.Data + (longlong)iVar7 * 0xb8),
                     &local_1e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f0);
      }
      (**(code **)(this->_padding_ + 0xc0))(this,__return_storage_ptr__,&local_128);
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_c8,(int)local_c0);
      if (local_c8 != (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_1e8.DeferredAccessorNodeIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1e8.DeferredAccessorNodeIDs.AllocatorInstance.Data);
      }
      if (local_1e8.AccessorNodeIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.AccessorNodeIDs.AllocatorInstance.Data);
      }
      if (local_1e8.Literal.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Literal.AsUObject.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_1e8.Literal.AsString.AllocatorInstance.Data,
                 local_1e8.Literal.AsString.ArrayNum);
      if (local_1e8.Literal.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Literal.AsString.AllocatorInstance.Data);
      }
      if (local_1e8.Literal.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Literal.AsFloat.AllocatorInstance.Data);
      }
      if (local_1e8.Literal.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Literal.AsInteger.AllocatorInstance.Data);
      }
      if (local_1e8.Literal.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Literal.AsBoolean.AllocatorInstance.Data);
      }
      if (local_240.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8649931621518016203>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                       ,0x135,"Registry.GetDataTypeInfo(InDataType, Info)");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<Metasound::Frontend::IVariableController,1> *)(*pcVar3)();
      return pTVar11;
    }
    if (local_240.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
    }
  }
  IVariableController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddVariableAccessorNode @ 14ae23ef0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddVariableAccessorNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  INodeController *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FMetasoundFrontendVariable *pFVar11;
  IDataTypeRegistry *pIVar12;
  FGuid *pFVar13;
  undefined8 *puVar14;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  TSharedRef<Metasound::Frontend::INodeController,1> local_168;
  INodeController *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  TReferenceControllerBase<1> *local_138;
  undefined **local_128;
  FGuid local_120;
  FMetasoundFrontendClassMetadata local_110;
  FMetasoundFrontendClassInput *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FGuid local_48;
  undefined1 local_38 [16];
  
  pFVar11 = FindFrontendVariable(this,param_1);
  if (pFVar11 != (FMetasoundFrontendVariable *)0x0) {
    local_128 = &___7FMetasoundFrontendClass__6B_;
    local_120 = FrontendInvalidID;
    FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_110);
    local_d8 = (FMetasoundFrontendClassInput *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    pIVar12 = IDataTypeRegistry::Get();
    cVar8 = (**(code **)((longlong)*pIVar12 + 0xf0))(pIVar12,&pFVar11->TypeName,&local_128);
    if (cVar8 != '\0') {
      pcVar3 = *(code **)(this->_padding_ + 0x1f0);
      pFVar13 = FGuid::NewGuid(&local_48);
      local_88 = pFVar13->A;
      uStack_84 = pFVar13->B;
      uStack_80 = pFVar13->C;
      uStack_7c = pFVar13->D;
      (*pcVar3)(this,&local_158,&local_110,&local_88);
      cVar8 = (**(code **)(*(longlong *)local_158 + 0x18))();
      pIVar5 = local_158;
      if (cVar8 != '\0') {
        pcVar3 = *(code **)(*(longlong *)local_158 + 0x68);
        FLazyName::Resolve(&VariableNames::InputVariableName);
        (*pcVar3)(pIVar5,&local_98,local_res20);
        FindTailNodeInVariableStack(this,&local_168,param_1);
        cVar8 = (**(code **)(*(longlong *)local_168.Object + 0x18))();
        if (cVar8 == '\0') {
          local_78 = (pFVar11->VariableNodeID).A;
          uStack_74 = (pFVar11->VariableNodeID).B;
          uStack_70 = (pFVar11->VariableNodeID).C;
          uStack_6c = (pFVar11->VariableNodeID).D;
          puVar14 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_68,&local_78);
          pIVar5 = (INodeController *)*puVar14;
          pTVar6 = (TReferenceControllerBase<1> *)puVar14[1];
          *puVar14 = local_168.Object;
          puVar14[1] = local_168.SharedReferenceCount.ReferenceController;
          local_168.Object = pIVar5;
          local_168.SharedReferenceCount.ReferenceController = pTVar6;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
        }
        cVar8 = (**(code **)(*(longlong *)local_168.Object + 0x18))();
        pIVar5 = local_168.Object;
        if (cVar8 == '\0') {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8649931621518015968>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                             ,0x220,"TailNode->IsValid()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar15 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar15;
          }
        }
        else {
          pcVar3 = *(code **)(*(longlong *)local_168.Object + 0x88);
          FLazyName::Resolve(&VariableNames::OutputVariableName);
          (*pcVar3)(pIVar5,&local_140,local_148);
          cVar8 = (**(code **)(*local_140 + 0x68))();
          if ((cVar8 != '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!TailNodeOutput->IsConnected()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                 ,0x224,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar15 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar15;
          }
          cVar8 = (**(code **)(*local_140 + 0x98))(local_140,local_98);
          if ((cVar8 == '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bSuccess",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                 ,0x226,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar15 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar15;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138);
        }
        pTVar2 = &pFVar11->AccessorNodeIDs;
        pFVar16 = (FScriptContainerElement *)
                  (**(code **)(*(longlong *)local_158 + 0x158))(local_158,local_38);
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar16) &&
            (pFVar16 < pFVar4 + (longlong)(pFVar11->AccessorNodeIDs).ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar15 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
          return pTVar15;
        }
        iVar10 = (pFVar11->AccessorNodeIDs).ArrayNum;
        piVar1 = &(pFVar11->AccessorNodeIDs).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar2->AllocatorInstance,piVar1);
        }
        (pFVar11->AccessorNodeIDs).ArrayNum = iVar10 + 1;
        uVar7 = *(undefined8 *)(pFVar16 + 8);
        pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar16;
        *(undefined8 *)(pFVar4 + 8) = uVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
      }
      __return_storage_ptr__->Object = local_158;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_150;
      if (local_150 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150)
      ;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_d8,(int)local_d0);
      if (local_d8 == (FMetasoundFrontendClassInput *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_d8);
      return __return_storage_ptr__;
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&pFVar11->TypeName,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<FMetasoundFrontendClassInput,int>(local_d8,(int)local_d0);
    if (local_d8 != (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddVariableDeferredAccessorNode @ 14ae24320

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::AddVariableDeferredAccessorNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  INodeController *pIVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FMetasoundFrontendVariable *pFVar10;
  IDataTypeRegistry *pIVar11;
  FGuid *pFVar12;
  FMetasoundFrontendVariable *pFVar13;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res20 [8];
  INodeController *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  TSharedRef<Metasound::Frontend::INodeController,1> local_1b8;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  longlong *local_190;
  TReferenceControllerBase<1> *local_188;
  undefined **local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  FMetasoundFrontendClassMetadata local_160;
  FMetasoundFrontendClassInput *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  TReferenceControllerBase<1> *local_e0;
  longlong *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined8 local_c8;
  TReferenceControllerBase<1> *local_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  FString local_58;
  FGuid local_48;
  undefined1 local_38 [16];
  
  pFVar10 = FindFrontendVariable(this,param_1);
  if (pFVar10 == (FMetasoundFrontendVariable *)0x0) {
LAB_14ae24875:
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_16c = FrontendInvalidID.B;
  local_168 = FrontendInvalidID.C;
  local_164 = FrontendInvalidID.D;
  local_178 = &___7FMetasoundFrontendClass__6B_;
  local_170 = FrontendInvalidID.A;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_160);
  local_128 = (FMetasoundFrontendClassInput *)0x0;
  local_120 = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  pIVar11 = IDataTypeRegistry::Get();
  cVar7 = (**(code **)((longlong)*pIVar11 + 0xf8))(pIVar11,&pFVar10->TypeName,&local_178);
  if (cVar7 == '\0') {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&pFVar10->TypeName,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    DestructItems<FMetasoundFrontendClassInput,int>(local_128,(int)local_120);
    if (local_128 != (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_128);
    }
    goto LAB_14ae24875;
  }
  pcVar3 = *(code **)(this->_padding_ + 0x1f0);
  pFVar12 = FGuid::NewGuid(&local_48);
  local_a8 = pFVar12->A;
  uStack_a4 = pFVar12->B;
  uStack_a0 = pFVar12->C;
  uStack_9c = pFVar12->D;
  (*pcVar3)(this,&local_1c8,&local_160,&local_a8);
  cVar7 = (**(code **)(*(longlong *)local_1c8 + 0x18))();
  pIVar6 = local_1c8;
  if (cVar7 == '\0') goto LAB_14ae2478a;
  pcVar3 = *(code **)(*(longlong *)local_1c8 + 0x88);
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  (*pcVar3)(pIVar6,&local_b8,local_res20);
  pFVar13 = FindFrontendVariable(this,param_1);
  if (pFVar13 == (FMetasoundFrontendVariable *)0x0) {
LAB_14ae2452f:
    INodeController::GetInvalidHandle(&local_1b8);
  }
  else if ((pFVar13->DeferredAccessorNodeIDs).ArrayNum < 1) {
    if ((((pFVar13->MutatorNodeID).D == FrontendInvalidID.D &&
         (pFVar13->MutatorNodeID).C == FrontendInvalidID.C) &&
        (pFVar13->MutatorNodeID).B == FrontendInvalidID.B) &&
        FrontendInvalidID.A == (pFVar13->MutatorNodeID).A) {
      if ((pFVar13->AccessorNodeIDs).ArrayNum < 1) goto LAB_14ae2452f;
      pFVar4 = (pFVar13->AccessorNodeIDs).AllocatorInstance.Data;
      local_78 = *(undefined4 *)pFVar4;
      uStack_74 = *(undefined4 *)(pFVar4 + 4);
      uStack_70 = *(undefined4 *)(pFVar4 + 8);
      uStack_6c = *(undefined4 *)(pFVar4 + 0xc);
      (**(code **)(this->_padding_ + 0x60))(this,&local_1b8,&local_78);
    }
    else {
      local_88 = (pFVar13->MutatorNodeID).A;
      uStack_84 = (pFVar13->MutatorNodeID).B;
      uStack_80 = (pFVar13->MutatorNodeID).C;
      uStack_7c = (pFVar13->MutatorNodeID).D;
      (**(code **)(this->_padding_ + 0x60))(this,&local_1b8,&local_88);
    }
  }
  else {
    pFVar4 = (pFVar13->DeferredAccessorNodeIDs).AllocatorInstance.Data;
    local_98 = *(undefined4 *)pFVar4;
    uStack_94 = *(undefined4 *)(pFVar4 + 4);
    uStack_90 = *(undefined4 *)(pFVar4 + 8);
    uStack_8c = *(undefined4 *)(pFVar4 + 0xc);
    (**(code **)(this->_padding_ + 0x60))(this,&local_1b8,&local_98);
  }
  cVar7 = (**(code **)(*(longlong *)local_1b8.Object + 0x18))();
  if (cVar7 != '\0') {
    pcVar3 = *(code **)(*(longlong *)local_1b8.Object + 0x68);
    FLazyName::Resolve(&VariableNames::InputVariableName);
    (*pcVar3)(local_1b8.Object,&local_e8,local_1a8);
    cVar7 = (**(code **)(*local_e8 + 0xa8))(local_e8,local_b8);
    if ((cVar7 == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                           ,0x24e,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
      return pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  }
  pIVar6 = local_1c8;
  pcVar3 = *(code **)(*(longlong *)local_1c8 + 0x68);
  FLazyName::Resolve(&VariableNames::InputVariableName);
  (*pcVar3)(pIVar6,&local_c8,local_1a0);
  local_68 = (pFVar10->VariableNodeID).A;
  uStack_64 = (pFVar10->VariableNodeID).B;
  uStack_60 = (pFVar10->VariableNodeID).C;
  uStack_5c = (pFVar10->VariableNodeID).D;
  (**(code **)(this->_padding_ + 0x60))(this,&local_190,&local_68);
  cVar7 = (**(code **)(*local_190 + 0x18))();
  if (cVar7 == '\0') {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8649931621518015917>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                       ,0x253,"VariableNode->IsValid()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
      return pTVar14;
    }
  }
  else {
    pcVar3 = *(code **)(*local_190 + 0x88);
    FLazyName::Resolve(&VariableNames::OutputVariableName);
    (*pcVar3)(local_190,&local_d8,local_198);
    cVar7 = (**(code **)(*local_d8 + 0x98))(local_d8,local_c8);
    if ((cVar7 == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                           ,599,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
      return pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  }
  pTVar2 = &pFVar10->DeferredAccessorNodeIDs;
  pFVar15 = (FScriptContainerElement *)
            (**(code **)(*(longlong *)local_1c8 + 0x158))(local_1c8,local_38);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= pFVar15) &&
      (pFVar15 < pFVar4 + (longlong)(pFVar10->DeferredAccessorNodeIDs).ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
    return pTVar14;
  }
  iVar9 = (pFVar10->DeferredAccessorNodeIDs).ArrayNum;
  piVar1 = &(pFVar10->DeferredAccessorNodeIDs).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar10->DeferredAccessorNodeIDs).ArrayNum = iVar9 + 1;
  uVar5 = *(undefined8 *)(pFVar15 + 8);
  pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar4 = *(undefined8 *)pFVar15;
  *(undefined8 *)(pFVar4 + 8) = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
LAB_14ae2478a:
  __return_storage_ptr__->Object = local_1c8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_1c0;
  if (local_1c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1c0->SharedReferenceCount = (atomic<int>)((int)local_1c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_128,(int)local_120);
  if (local_128 == (FMetasoundFrontendClassInput *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_128);
  return __return_storage_ptr__;
}

// ClearGraph @ 14ae26360

void __thiscall Metasound::Frontend::FGraphController::ClearGraph(FGraphController *this)

{
  int *piVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FMetasoundFrontendNode *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  undefined8 uVar7;
  FMetasoundFrontendGraphClass *this_01;
  IDocumentBuilderRegistry *pIVar8;
  FMetaSoundFrontendDocumentBuilder *this_02;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  longlong *plVar11;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar3 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar4 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar11 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  uVar7 = (**(code **)(*plVar11 + 8))();
  this_01 = (FMetasoundFrontendGraphClass *)(*pcVar4)(uVar7);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_01;
  if (this_01 != (FMetasoundFrontendGraphClass *)0x0) {
    pIVar8 = IDocumentBuilderRegistry::Get();
    if ((pIVar8 == (IDocumentBuilderRegistry *)0x0) ||
       (this_02 = (FMetaSoundFrontendDocumentBuilder *)
                  (**(code **)((longlong)*pIVar8 + 8))(pIVar8,&this_01->_padding_),
       this_02 == (FMetaSoundFrontendDocumentBuilder *)0x0)) {
      pFVar9 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_01);
    }
    else {
      pFVar9 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_02);
    }
    piVar1 = &(pFVar9->Nodes).ArrayMax;
    pFVar5 = (FMetasoundFrontendNode *)(pFVar9->Nodes).AllocatorInstance.Data;
    iVar2 = (pFVar9->Nodes).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FMetasoundFrontendNode,int>(pFVar5,iVar2);
      (pFVar9->Nodes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,(ForAnyElementType *)pFVar9,0,piVar1);
      }
    }
    else {
      DestructItems<FMetasoundFrontendNode,int>(pFVar5,iVar2);
      (pFVar9->Nodes).ArrayNum = 0;
    }
    (pFVar9->Edges).ArrayNum = 0;
    if ((pFVar9->Edges).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,0,&(pFVar9->Edges).AllocatorInstance,0,&(pFVar9->Edges).ArrayMax);
    }
    pFVar10 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_01);
    piVar1 = &(pFVar10->Inputs).ArrayMax;
    pFVar6 = (FMetasoundFrontendClassInput *)(pFVar10->Inputs).AllocatorInstance.Data;
    iVar2 = (pFVar10->Inputs).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FMetasoundFrontendClassInput,int>(pFVar6,iVar2);
      (pFVar10->Inputs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,(ForAnyElementType *)pFVar10,0,piVar1);
      }
    }
    else {
      DestructItems<FMetasoundFrontendClassInput,int>(pFVar6,iVar2);
      (pFVar10->Inputs).ArrayNum = 0;
    }
    pFVar10 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_01);
    (pFVar10->Outputs).ArrayNum = 0;
    if ((pFVar10->Outputs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x34,4,0,&(pFVar10->Outputs).AllocatorInstance,0,&(pFVar10->Outputs).ArrayMax);
    }
    this_00 = &(this_01->PresetOptions).InputsInheritingDefault;
    if (*(int *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x8 !=
        *(int *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x34) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
      iVar2 = *(int *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0xc;
      *(undefined4 *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x8 = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0xc);
      }
      *(undefined4 *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x30 =
           0xffffffff;
      *(undefined4 *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x34 = 0;
      *(undefined4 *)&(this_01->PresetOptions).InputsInheritingDefault.Elements.field_0x28 = 0;
    }
    (**(code **)(*(longlong *)(this->OwningDocument).Object + 0xc0))();
    (**(code **)(*(longlong *)(this->OwningDocument).Object + 200))();
    return;
  }
  return;
}

// ClearLiteralForInput @ 14ae266a0

bool __thiscall
Metasound::Frontend::FGraphController::ClearLiteralForInput
          (FGraphController *this,FName *param_1,FGuid *param_2)

{
  FMetasoundFrontendClassInput *this_00;
  FMetasoundFrontendLiteral *this_01;
  
  this_00 = FindInputDescriptionWithName(this,param_1);
  if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
    this_01 = FMetasoundFrontendClassInput::FindDefaultChecked(this_00,&DefaultPageID);
    FMetasoundFrontendLiteral::Empty(this_01);
    this_01->Type = None;
    this_01->AsNumDefault = 1;
  }
  return false;
}

// ContainsInputVertex @ 14ae27540

bool __thiscall
Metasound::Frontend::FGraphController::ContainsInputVertex
          (FGraphController *this,FName *param_1,FName *param_2)

{
  FName *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  longlong *plVar6;
  FName *pFVar7;
  bool bVar8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar6 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar4);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  bVar8 = false;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar7 = (FName *)(pFVar5->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)(pFVar5->Inputs).ArrayNum * 9;
    if (pFVar7 != pFVar1) {
      do {
        if ((*pFVar7 == *param_1) && (pFVar7[1] == *param_2)) goto LAB_14ae275c9;
        pFVar7 = pFVar7 + 9;
      } while (pFVar7 != pFVar1);
    }
    pFVar7 = (FName *)0x0;
LAB_14ae275c9:
    bVar8 = pFVar7 != (FName *)0x0;
  }
  return bVar8;
}

// ContainsInputVertexWithName @ 14ae275f0

bool __thiscall
Metasound::Frontend::FGraphController::ContainsInputVertexWithName
          (FGraphController *this,FName *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  longlong *plVar6;
  FName *pFVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar6 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar4);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    return false;
  }
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
  pFVar7 = (FName *)(pFVar5->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(pFVar5->Inputs).ArrayNum * 9;
  if (pFVar7 != pFVar1) {
    do {
      if (*pFVar7 == *param_1) goto LAB_14ae27664;
      pFVar7 = pFVar7 + 9;
    } while (pFVar7 != pFVar1);
  }
  pFVar7 = (FName *)0x0;
LAB_14ae27664:
  return pFVar7 != (FName *)0x0;
}

// ContainsNodesAndClassesByPredicate @ 14ae276b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FGraphController::ContainsNodesAndClassesByPredicate
          (FGraphController *this,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  code *pcVar1;
  IDocumentController *pIVar2;
  char cVar3;
  undefined8 uVar4;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar5;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FGuid *this_02;
  FGuid *pFVar11;
  FGuid *this_03;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  FString local_d0;
  uint local_c0;
  FString local_b8;
  FGraphController *local_a8;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar10 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar1 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar10 != (longlong *)0x0) {
    plVar7 = plVar10;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar1)(uVar4);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return false;
  }
  pIVar5 = IDocumentBuilderRegistry::Get();
  if (pIVar5 != (IDocumentBuilderRegistry *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&this_00->_padding_,&local_d0);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar6 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae2775b;
    }
  }
  pFVar6 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae2775b:
  local_c0 = (pFVar6->Nodes).ArrayNum;
  uVar9 = (ulonglong)(int)local_c0;
  this_02 = (FGuid *)(pFVar6->Nodes).AllocatorInstance.Data;
  this_03 = this_02 + 1;
  pFVar11 = (FGuid *)((longlong)this_02 + uVar9 * 0x88);
  while( true ) {
    if ((pFVar6->Nodes).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FMetasoundFrontendNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (this_02 == pFVar11) break;
    pIVar2 = (this->OwningDocument).Object;
    local_98 = this_03->A;
    uStack_94 = this_03->B;
    uStack_90 = this_03->C;
    uStack_8c = this_03->D;
    plVar7 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_88);
    UE::Core::Private::Function::CheckCallable((void *)plVar7[2]);
    pcVar1 = (code *)plVar7[2];
    plVar10 = plVar7 + 4;
    if ((longlong *)plVar7[7] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar7[7];
    }
    uVar4 = (**(code **)(*plVar10 + 8))();
    lVar8 = (*pcVar1)(uVar4);
    *plVar7 = lVar8;
    if (local_78 != 0) {
      plVar10 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar10 = local_50;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (lVar8 == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_d0,Digits);
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        FGuid::AppendString(this_02,&local_b8,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8,this_02);
      if (cVar3 != '\0') {
        return true;
      }
    }
    uVar9 = (ulonglong)local_c0;
    this_02 = (FGuid *)&this_02[8].C;
    this_03 = (FGuid *)&this_03[8].C;
    this = local_a8;
  }
  return false;
}

// ContainsOutputVertex @ 14ae27920

bool __thiscall
Metasound::Frontend::FGraphController::ContainsOutputVertex
          (FGraphController *this,FName *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  bool bVar8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  bVar8 = false;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar4 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar6 = (FName *)(pFVar4->Outputs).AllocatorInstance.Data;
    pFVar7 = (FName *)((longlong)pFVar6 + (longlong)(pFVar4->Outputs).ArrayNum * 0x34);
    if (pFVar6 != pFVar7) {
      do {
        if ((*pFVar6 == *param_1) && (pFVar6[1] == *param_2)) goto LAB_14ae279a9;
        pFVar6 = (FName *)&pFVar6[6].Number;
      } while (pFVar6 != pFVar7);
    }
    pFVar6 = (FName *)0x0;
LAB_14ae279a9:
    bVar8 = pFVar6 != (FName *)0x0;
  }
  return bVar8;
}

// ContainsOutputVertexWithName @ 14ae279d0

bool __thiscall
Metasound::Frontend::FGraphController::ContainsOutputVertexWithName
          (FGraphController *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    return false;
  }
  pFVar4 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
  pFVar6 = (FName *)(pFVar4->Outputs).AllocatorInstance.Data;
  pFVar7 = (FName *)((longlong)pFVar6 + (longlong)(pFVar4->Outputs).ArrayNum * 0x34);
  if (pFVar6 != pFVar7) {
    do {
      if (*pFVar6 == *param_1) goto LAB_14ae27a44;
      pFVar6 = (FName *)&pFVar6[6].Number;
    } while (pFVar6 != pFVar7);
  }
  pFVar6 = (FName *)0x0;
LAB_14ae27a44:
  return pFVar6 != (FName *)0x0;
}

// CreateConstGraphHandle @ 14ae29560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __cdecl
Metasound::Frontend::FGraphController::CreateConstGraphHandle
          (TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  EMetasoundFrontendClassType EVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<Metasound::Frontend::IGraphController_const_,1> *pTVar11;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar12;
  longlong *plVar13;
  TReferenceControllerBase<1> *pTVar14;
  IGraphController *pIVar15;
  undefined8 *puVar16;
  FString local_28;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->GraphClassPtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->GraphClassPtr).field_0x38;
  puVar16 = (undefined8 *)&(param_1->GraphClassPtr).field_0x20;
  pcVar4 = *(code **)&(param_1->GraphClassPtr).field_0x10;
  plVar13 = puVar16;
  if (plVar3 != (longlong *)0x0) {
    plVar13 = plVar3;
  }
  uVar8 = (**(code **)(*plVar13 + 8))();
  lVar9 = (*pcVar4)(uVar8);
  *(longlong *)&param_1->GraphClassPtr = lVar9;
  if (lVar9 != 0) {
    EVar6 = FMetasoundFrontendClassMetadata::GetType
                      ((FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
    if (EVar6 == Graph) {
      pTVar10 = ::operator_new(0x80);
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pIVar15 = (IGraphController *)&DAT_00000010;
LAB_14ae2969f:
        local_18.SharedReferenceCount.ReferenceController = pTVar14;
        if (((*(longlong *)&pIVar15->field_0x8 == 0) || (*(longlong *)&pIVar15->field_0x10 == 0)) ||
           (*(int *)(*(longlong *)&pIVar15->field_0x10 + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(IGraphController **)&pIVar15->field_0x8 = pIVar15;
          if (pTVar14 != *(TReferenceControllerBase<1> **)&pIVar15->field_0x10) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)&pIVar15->field_0x10;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pIVar15->field_0x10 = pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFGraphController_Frontend_Metasound___00_SharedPointerInternals__6B_
        ;
        pTVar10[1]._padding_ = (longlong)&___7FGraphController_Frontend_Metasound__6B_;
        pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[2]._padding_ = 0;
        pTVar10[3]._padding_ = *(longlong *)&param_1->GraphClassPtr;
        lVar9 = *(longlong *)&(param_1->GraphClassPtr).field_0x10;
        pTVar10[4]._padding_ = lVar9;
        pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
        if (lVar9 != 0) {
          puVar5 = *(undefined8 **)&(param_1->GraphClassPtr).field_0x38;
          if (puVar5 != (undefined8 *)0x0) {
            puVar16 = puVar5;
          }
          (**(code **)*puVar16)(puVar16);
        }
        pTVar10[7]._padding_ = (longlong)(param_1->OwningDocument).Object;
        pTVar14 = (param_1->OwningDocument).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar10[7].SharedReferenceCount = pTVar14;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        pIVar15 = (IGraphController *)(pTVar10 + 1);
        pTVar14 = pTVar10;
        if (pIVar15 != (IGraphController *)0x0) goto LAB_14ae2969f;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        local_18.SharedReferenceCount.ReferenceController = pTVar10;
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<Metasound::Frontend::IGraphController_const_,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
      __return_storage_ptr__->Object = pIVar15;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14ae29795;
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar9 + 8),&local_28,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  pTVar12 = IGraphController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar12->Object;
  pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14ae29795:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateEmptySubgraph @ 14ae2abb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::CreateEmptySubgraph
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  int iVar1;
  IDocumentController *pIVar2;
  code *pcVar3;
  EMetasoundFrontendClassType EVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  FGuid *pFVar9;
  FConstClassAccessPtr *pFVar10;
  FMetasoundFrontendClassMetadata *this_00;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  ForAnyElementType local_98;
  undefined8 uStack_90;
  FGuid local_88;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  EVar4 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar4 == Graph) {
    pIVar2 = (this->OwningDocument).Object;
    plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x80))(pIVar2,local_78,param_1);
    UE::Core::Private::Function::CheckCallable((void *)plVar5[2]);
    pcVar3 = (code *)plVar5[2];
    plVar11 = plVar5 + 4;
    if ((longlong *)plVar5[7] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar5[7];
    }
    uVar6 = (**(code **)(*plVar11 + 8))(plVar11);
    lVar7 = (*pcVar3)(uVar6);
    *plVar5 = lVar7;
    if (local_68 != 0) {
      plVar11 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar11 = local_40;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (lVar7 == 0) {
      pFVar9 = FGuid::NewGuid(&local_88);
      pIVar2 = (this->OwningDocument).Object;
      local_98.Data = *(FScriptContainerElement **)pFVar9;
      uStack_90._0_4_ = pFVar9->C;
      uStack_90._4_4_ = pFVar9->D;
      pFVar10 = (FConstClassAccessPtr *)
                (**(code **)(*(longlong *)pIVar2 + 0x90))(pIVar2,local_78,param_1);
      AddNode(this,__return_storage_ptr__,pFVar10,(FGuid *)&local_98);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      this_00 = (FMetasoundFrontendClassMetadata *)(lVar7 + 0x18);
      pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(this_00);
      iVar1 = pFVar8->Minor;
      FMetasoundFrontendClassMetadata::GetVersion(this_00);
      FMetasoundFrontendClassName::ToString
                ((FMetasoundFrontendClassName *)this_00,(FString *)&local_98);
      local_a8 = iVar1;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateGraphHandle @ 14ae2c050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::IGraphController,1> * __cdecl
Metasound::Frontend::FGraphController::CreateGraphHandle
          (TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  EMetasoundFrontendClassType EVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  IGraphController *pIVar14;
  undefined8 *puVar15;
  FString local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->GraphClassPtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->GraphClassPtr).field_0x38;
  puVar15 = (undefined8 *)&(param_1->GraphClassPtr).field_0x20;
  pcVar4 = *(code **)&(param_1->GraphClassPtr).field_0x10;
  plVar12 = puVar15;
  if (plVar3 != (longlong *)0x0) {
    plVar12 = plVar3;
  }
  uVar8 = (**(code **)(*plVar12 + 8))();
  lVar9 = (*pcVar4)(uVar8);
  *(longlong *)&param_1->GraphClassPtr = lVar9;
  if (lVar9 == 0) {
LAB_14ae2c26d:
    IGraphController::GetInvalidHandle(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  EVar6 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
  if (EVar6 != Graph) {
    if (2 < (byte)LogMetaSound._0_1_) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar9 + 8),&local_18,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ae2c26d;
  }
  pTVar10 = ::operator_new(0x80);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pIVar14 = (IGraphController *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGraphController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ = (longlong)&___7FGraphController_Frontend_Metasound__6B_;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[3]._padding_ = *(longlong *)&param_1->GraphClassPtr;
    lVar9 = *(longlong *)&(param_1->GraphClassPtr).field_0x10;
    pTVar10[4]._padding_ = lVar9;
    pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
    if (lVar9 != 0) {
      puVar5 = *(undefined8 **)&(param_1->GraphClassPtr).field_0x38;
      if (puVar5 != (undefined8 *)0x0) {
        puVar15 = puVar5;
      }
      (**(code **)*puVar15)(puVar15);
    }
    pTVar10[7]._padding_ = (longlong)(param_1->OwningDocument).Object;
    pTVar13 = (param_1->OwningDocument).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar10[7].SharedReferenceCount = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar14 = (IGraphController *)(pTVar10 + 1);
    pTVar13 = pTVar10;
    if (pIVar14 == (IGraphController *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<Metasound::Frontend::IGraphController,1> *)(*pcVar4)();
        return pTVar11;
      }
      goto LAB_14ae2c1fa;
    }
  }
  if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IGraphController **)&pIVar14->field_0x8 = pIVar14;
    if (pTVar13 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pIVar14->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14ae2c1fa:
  __return_storage_ptr__->Object = pIVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return __return_storage_ptr__;
}

// FindClassInputWithName @ 14ae32220

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FGraphController::FindClassInputWithName
          (FGraphController *this,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *__return_storage_ptr__,FName *param_1)

{
  FGraphClassAccessPtr::GetInputWithName(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindClassOutputWithName @ 14ae32300

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FGraphController::FindClassOutputWithName
          (FGraphController *this,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *__return_storage_ptr__,FName *param_1)

{
  FGraphClassAccessPtr::GetOutputWithName(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindFrontendVariable @ 14ae32ff0

FMetasoundFrontendVariable * __thiscall
Metasound::Frontend::FGraphController::FindFrontendVariable(FGraphController *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar4;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar5;
  FMetasoundFrontendVariable *pFVar6;
  longlong *plVar7;
  FMetasoundFrontendVariable *pFVar8;
  undefined8 local_18;
  undefined8 local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar3 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return (FMetasoundFrontendVariable *)0x0;
  }
  pIVar4 = IDocumentBuilderRegistry::Get();
  if (pIVar4 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&this_00->_padding_,&local_18);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar5 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3307f;
    }
  }
  pFVar5 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae3307f:
  pFVar6 = (FMetasoundFrontendVariable *)(pFVar5->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (pFVar5->Variables).ArrayNum;
  if (pFVar6 != pFVar8) {
    do {
      if (((param_1->A == (pFVar6->ID).A && param_1->D == (pFVar6->ID).D) &&
          param_1->C == (pFVar6->ID).C) && param_1->B == (pFVar6->ID).B) {
        return pFVar6;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar8);
  }
  return (FMetasoundFrontendVariable *)0x0;
}

// FindFrontendVariable @ 14ae33110

FMetasoundFrontendVariable * __thiscall
Metasound::Frontend::FGraphController::FindFrontendVariable(FGraphController *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar4;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar5;
  FMetasoundFrontendVariable *pFVar6;
  longlong *plVar7;
  FMetasoundFrontendVariable *pFVar8;
  undefined8 local_18;
  undefined8 local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar3 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return (FMetasoundFrontendVariable *)0x0;
  }
  pIVar4 = IDocumentBuilderRegistry::Get();
  if (pIVar4 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&this_00->_padding_,&local_18);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar5 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3319f;
    }
  }
  pFVar5 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_00);
LAB_14ae3319f:
  pFVar6 = (FMetasoundFrontendVariable *)(pFVar5->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (pFVar5->Variables).ArrayNum;
  if (pFVar6 != pFVar8) {
    do {
      if (((param_1->A == (pFVar6->ID).A && param_1->D == (pFVar6->ID).D) &&
          param_1->C == (pFVar6->ID).C) && param_1->B == (pFVar6->ID).B) {
        return pFVar6;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar8);
  }
  return (FMetasoundFrontendVariable *)0x0;
}

// FindHeadNodeInVariableStack @ 14ae33280

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::FindHeadNodeInVariableStack
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FMetasoundFrontendVariable *pFVar2;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  pFVar2 = FindFrontendVariable(this,param_1);
  if (pFVar2 != (FMetasoundFrontendVariable *)0x0) {
    if (0 < (pFVar2->DeferredAccessorNodeIDs).ArrayNum) {
      pFVar1 = (pFVar2->DeferredAccessorNodeIDs).AllocatorInstance.Data;
      local_18 = *(uint *)pFVar1;
      uStack_14 = *(uint *)(pFVar1 + 4);
      uStack_10 = *(uint *)(pFVar1 + 8);
      uStack_c = *(uint *)(pFVar1 + 0xc);
      (**(code **)(this->_padding_ + 0x60))(this,__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
    if ((((pFVar2->MutatorNodeID).D != FrontendInvalidID.D ||
         (pFVar2->MutatorNodeID).C != FrontendInvalidID.C) ||
        (pFVar2->MutatorNodeID).B != FrontendInvalidID.B) ||
        (pFVar2->MutatorNodeID).A != FrontendInvalidID.A) {
      local_18 = (pFVar2->MutatorNodeID).A;
      uStack_14 = (pFVar2->MutatorNodeID).B;
      uStack_10 = (pFVar2->MutatorNodeID).C;
      uStack_c = (pFVar2->MutatorNodeID).D;
      (**(code **)(this->_padding_ + 0x60))(this,__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
    if (0 < (pFVar2->AccessorNodeIDs).ArrayNum) {
      pFVar1 = (pFVar2->AccessorNodeIDs).AllocatorInstance.Data;
      local_18 = *(uint *)pFVar1;
      uStack_14 = *(uint *)(pFVar1 + 4);
      uStack_10 = *(uint *)(pFVar1 + 8);
      uStack_c = *(uint *)(pFVar1 + 0xc);
      (**(code **)(this->_padding_ + 0x60))(this,__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindInputDescriptionWithName @ 14ae334a0

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithName
          (FGraphController *this,FName *param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar8;
  FGuid *pFVar9;
  longlong *plVar10;
  FMetasoundFrontendClassInput *pFVar11;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar7);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar11 = (FMetasoundFrontendClassInput *)(pFVar8->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (pFVar8->Inputs).ArrayNum;
    if (pFVar11 != pFVar1) {
      do {
        if ((FName)pFVar11->_padding_ == *param_1) {
          pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
          pFVar9 = FGuid::NewGuid(&local_18);
          uVar4 = pFVar9->B;
          uVar5 = pFVar9->C;
          uVar6 = pFVar9->D;
          (pFVar8->ChangeID).A = pFVar9->A;
          (pFVar8->ChangeID).B = uVar4;
          (pFVar8->ChangeID).C = uVar5;
          (pFVar8->ChangeID).D = uVar6;
          return pFVar11;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar1);
    }
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindInputDescriptionWithName @ 14ae33560

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithName
          (FGraphController *this,FName *param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  longlong *plVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar4);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar6 = (FMetasoundFrontendClassInput *)(pFVar5->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (pFVar5->Inputs).ArrayNum;
    if (pFVar6 != pFVar1) {
      do {
        if ((FName)pFVar6->_padding_ == *param_1) {
          return pFVar6;
        }
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 != pFVar1);
    }
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindInputDescriptionWithNodeID @ 14ae335f0

TAccessPtr<FMetasoundFrontendClassInput> * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithNodeID
          (FGraphController *this,TAccessPtr<FMetasoundFrontendClassInput> *__return_storage_ptr__,
          FGuid *param_1)

{
  FGraphClassAccessPtr::GetInputWithNodeID(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindInputDescriptionWithNodeID @ 14ae33620

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithNodeID
          (FGraphController *this,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *__return_storage_ptr__,FGuid *param_1)

{
  FGraphClassAccessPtr::GetInputWithNodeID(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindInputDescriptionWithVertexID @ 14ae33650

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithVertexID
          (FGraphController *this,FGuid *param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar8;
  FGuid *pFVar9;
  longlong *plVar10;
  FMetasoundFrontendClassInput *pFVar11;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar7);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar11 = (FMetasoundFrontendClassInput *)(pFVar8->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (pFVar8->Inputs).ArrayNum;
    if (pFVar11 != pFVar1) {
      do {
        if (((param_1->A == (uint)pFVar11->_padding_ &&
             param_1->D == *(uint *)((longlong)&pFVar11->_padding_ + 4)) &&
            param_1->C == (uint)pFVar11->_padding_) &&
            param_1->B == *(uint *)((longlong)&pFVar11->_padding_ + 4)) {
          pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
          pFVar9 = FGuid::NewGuid(&local_18);
          uVar4 = pFVar9->B;
          uVar5 = pFVar9->C;
          uVar6 = pFVar9->D;
          (pFVar8->ChangeID).A = pFVar9->A;
          (pFVar8->ChangeID).B = uVar4;
          (pFVar8->ChangeID).C = uVar5;
          (pFVar8->ChangeID).D = uVar6;
          return pFVar11;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar1);
    }
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindInputDescriptionWithVertexID @ 14ae33740

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FGraphController::FindInputDescriptionWithVertexID
          (FGraphController *this,FGuid *param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  longlong *plVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar4);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar6 = (FMetasoundFrontendClassInput *)(pFVar5->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (pFVar5->Inputs).ArrayNum;
    if (pFVar6 != pFVar1) {
      do {
        if (((param_1->A == (uint)pFVar6->_padding_ &&
             param_1->D == *(uint *)((longlong)&pFVar6->_padding_ + 4)) &&
            param_1->C == (uint)pFVar6->_padding_) &&
            param_1->B == *(uint *)((longlong)&pFVar6->_padding_ + 4)) {
          return pFVar6;
        }
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 != pFVar1);
    }
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindOrAddVariableMutatorNode @ 14ae34e50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::FindOrAddVariableMutatorNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  INodeController *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  char cVar8;
  bool bVar9;
  FMetasoundFrontendVariable *pFVar10;
  IDataTypeRegistry *pIVar11;
  FGuid *pFVar12;
  undefined8 *puVar13;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  INodeController *local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  longlong *local_198;
  TReferenceControllerBase<1> *local_190;
  longlong *local_188;
  TReferenceControllerBase<1> *local_180;
  undefined1 local_178 [8];
  TReferenceControllerBase<1> *local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined1 local_158 [8];
  TReferenceControllerBase<1> *local_150;
  longlong *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined **local_138;
  FGuid local_130;
  FMetasoundFrontendClassMetadata local_120;
  FMetasoundFrontendClassInput *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FString local_58;
  FGuid local_48;
  undefined1 local_38 [16];
  
  pFVar10 = FindFrontendVariable(this,param_1);
  if (pFVar10 == (FMetasoundFrontendVariable *)0x0) {
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_a8 = (pFVar10->MutatorNodeID).A;
  uStack_a4 = (pFVar10->MutatorNodeID).B;
  uStack_a0 = (pFVar10->MutatorNodeID).C;
  uStack_9c = (pFVar10->MutatorNodeID).D;
  (**(code **)(this->_padding_ + 0x60))(this,&local_1d8,&local_a8);
  cVar8 = (**(code **)(*(longlong *)local_1d8 + 0x18))();
  if (cVar8 == '\0') {
    local_130 = FrontendInvalidID;
    local_138 = &___7FMetasoundFrontendClass__6B_;
    FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_120);
    local_e8 = (FMetasoundFrontendClassInput *)0x0;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    pIVar11 = IDataTypeRegistry::Get();
    cVar8 = (**(code **)((longlong)*pIVar11 + 0xe8))(pIVar11,&pFVar10->TypeName,&local_138);
    if (cVar8 == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&pFVar10->TypeName,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pcVar3 = *(code **)(this->_padding_ + 0x1f0);
      pFVar12 = FGuid::NewGuid(&local_48);
      local_98 = pFVar12->A;
      uStack_94 = pFVar12->B;
      uStack_90 = pFVar12->C;
      uStack_8c = pFVar12->D;
      puVar13 = (undefined8 *)(*pcVar3)(this,local_88,&local_120,&local_98);
      pIVar6 = (INodeController *)*puVar13;
      pTVar7 = (TReferenceControllerBase<1> *)puVar13[1];
      *puVar13 = local_1d8;
      puVar13[1] = pTStack_1d0;
      local_1d8 = pIVar6;
      pTStack_1d0 = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      cVar8 = (**(code **)(*(longlong *)local_1d8 + 0x18))();
      pIVar6 = local_1d8;
      if (cVar8 != '\0') {
        pcVar3 = *(code **)(*(longlong *)local_1d8 + 0x68);
        FLazyName::Resolve(&VariableNames::InputDataName);
        (*pcVar3)(pIVar6,&local_188,local_res20);
        cVar8 = (**(code **)(*local_188 + 0x18))();
        if (cVar8 == '\0') {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8649931621518016039>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                             ,0x1d9,"InputHandle->IsValid()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar14;
          }
        }
        else {
          (**(code **)(*local_188 + 0x58))(local_188,&pFVar10->Literal);
        }
        puVar15 = (uint *)(**(code **)(*(longlong *)local_1d8 + 0x158))(local_1d8,local_38);
        iVar2 = (pFVar10->DeferredAccessorNodeIDs).ArrayNum;
        local_78 = (pFVar10->VariableNodeID).A;
        uStack_74 = (pFVar10->VariableNodeID).B;
        uStack_70 = (pFVar10->VariableNodeID).C;
        uStack_6c = (pFVar10->VariableNodeID).D;
        uVar16 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[3];
        (pFVar10->MutatorNodeID).A = *puVar15;
        (pFVar10->MutatorNodeID).B = uVar16;
        (pFVar10->MutatorNodeID).C = uVar4;
        (pFVar10->MutatorNodeID).D = uVar5;
        if (0 < iVar2) {
          uVar16 = 0;
          if ((int)(iVar2 - 1U) < iVar2) {
            uVar16 = ~(iVar2 - 1U) >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar14;
          }
          pFVar1 = (pFVar10->DeferredAccessorNodeIDs).AllocatorInstance.Data +
                   (longlong)(pFVar10->DeferredAccessorNodeIDs).ArrayNum * 0x10 + -0x10;
          local_78 = *(uint *)pFVar1;
          uStack_74 = *(uint *)(pFVar1 + 4);
          uStack_70 = *(uint *)(pFVar1 + 8);
          uStack_6c = *(uint *)(pFVar1 + 0xc);
        }
        (**(code **)(this->_padding_ + 0x60))(this,&local_198,&local_78);
        cVar8 = (**(code **)(*local_198 + 0x18))();
        pIVar6 = local_1d8;
        if (cVar8 == '\0') {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8649931621518016024>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                             ,0x1e8,"SourceVariableNode->IsValid()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar14;
          }
        }
        else {
          pcVar3 = *(code **)(*(longlong *)local_1d8 + 0x68);
          FLazyName::Resolve(&VariableNames::InputVariableName);
          (*pcVar3)(pIVar6,&local_168,local_1c8);
          pcVar3 = *(code **)(*local_198 + 0x88);
          FLazyName::Resolve(&VariableNames::OutputVariableName);
          (*pcVar3)(local_198,local_178,local_1c0);
          cVar8 = (**(code **)(*local_168 + 0xa8))();
          if ((cVar8 == '\0') &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_8649931621518016019>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                 ,0x1ed,"SetNodeInput->Connect(*SourceVariableNodeOutput)"), bVar9))
          {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
            return pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_170);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160);
        }
        if (0 < (pFVar10->AccessorNodeIDs).ArrayNum) {
          pFVar1 = (pFVar10->AccessorNodeIDs).AllocatorInstance.Data;
          local_68 = *(undefined4 *)pFVar1;
          uStack_64 = *(undefined4 *)(pFVar1 + 4);
          uStack_60 = *(undefined4 *)(pFVar1 + 8);
          uStack_5c = *(undefined4 *)(pFVar1 + 0xc);
          (**(code **)(this->_padding_ + 0x60))(this,&local_1a8,&local_68);
          cVar8 = (**(code **)(*local_1a8 + 0x18))();
          pIVar6 = local_1d8;
          if (cVar8 != '\0') {
            pcVar3 = *(code **)(*(longlong *)local_1d8 + 0x88);
            FLazyName::Resolve(&VariableNames::OutputVariableName);
            (*pcVar3)(pIVar6,&local_148,local_1b8);
            pcVar3 = *(code **)(*local_1a8 + 0x68);
            FLazyName::Resolve(&VariableNames::InputVariableName);
            (*pcVar3)(local_1a8,local_158,local_1b0);
            cVar8 = (**(code **)(*local_148 + 0x98))();
            if ((cVar8 == '\0') &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_8649931621518016007>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                                   ,0x1f9,"SetNodeOutput->Connect(*GetNodeInput)"), bVar9)) {
              pcVar3 = (code *)swi(3);
              pTVar14 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
              return pTVar14;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_150);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_140);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180);
      }
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    DestructItems<FMetasoundFrontendClassInput,int>(local_e8,(int)local_e0);
    if (local_e8 != (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  __return_storage_ptr__->Object = local_1d8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_1d0;
  if (pTStack_1d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_1d0->SharedReferenceCount = (atomic<int>)((int)pTStack_1d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d0);
  return __return_storage_ptr__;
}

// FindOutputDescriptionWithName @ 14ae354c0

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithName
          (FGraphController *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar8;
  FGuid *pFVar9;
  longlong *plVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  FMetasoundFrontendClassOutput *pFVar12;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar10 = plVar1;
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar7);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar12 = (FMetasoundFrontendClassOutput *)(pFVar8->Outputs).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (pFVar8->Outputs).ArrayNum;
    if (pFVar12 != pFVar11) {
      do {
        FVar3.ComparisonIndex.Value = *(uint *)&pFVar12->field_0x0;
        FVar3.Number = *(uint *)&pFVar12->field_0x4;
        if (FVar3 == *param_1) {
          pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
          pFVar9 = FGuid::NewGuid(&local_18);
          uVar4 = pFVar9->B;
          uVar5 = pFVar9->C;
          uVar6 = pFVar9->D;
          (pFVar8->ChangeID).A = pFVar9->A;
          (pFVar8->ChangeID).B = uVar4;
          (pFVar8->ChangeID).C = uVar5;
          (pFVar8->ChangeID).D = uVar6;
          return pFVar12;
        }
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar11);
    }
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindOutputDescriptionWithName @ 14ae35580

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithName
          (FGraphController *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  FMetasoundFrontendClassOutput *pFVar6;
  longlong *plVar7;
  FMetasoundFrontendClassOutput *pFVar8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar4);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar6 = (FMetasoundFrontendClassOutput *)(pFVar5->Outputs).AllocatorInstance.Data;
    pFVar8 = pFVar6 + (pFVar5->Outputs).ArrayNum;
    if (pFVar6 != pFVar8) {
      do {
        FVar3.ComparisonIndex.Value = *(uint *)&pFVar6->field_0x0;
        FVar3.Number = *(uint *)&pFVar6->field_0x4;
        if (FVar3 == *param_1) {
          return pFVar6;
        }
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 != pFVar8);
    }
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindOutputDescriptionWithNodeID @ 14ae35610

TAccessPtr<FMetasoundFrontendClassOutput> * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithNodeID
          (FGraphController *this,TAccessPtr<FMetasoundFrontendClassOutput> *__return_storage_ptr__,
          FGuid *param_1)

{
  FGraphClassAccessPtr::GetOutputWithNodeID(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOutputDescriptionWithNodeID @ 14ae35640

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithNodeID
          (FGraphController *this,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *__return_storage_ptr__,FGuid *param_1)

{
  FGraphClassAccessPtr::GetOutputWithNodeID(&this->GraphClassPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOutputDescriptionWithVertexID @ 14ae35670

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithVertexID
          (FGraphController *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar7;
  FGuid *pFVar8;
  longlong *plVar9;
  FMetasoundFrontendClassOutput *pFVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar9 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar9 = plVar1;
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar6);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar7 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar11 = (FMetasoundFrontendClassOutput *)(pFVar7->Outputs).AllocatorInstance.Data;
    pFVar10 = pFVar11 + (pFVar7->Outputs).ArrayNum;
    if (pFVar11 != pFVar10) {
      do {
        if (((param_1->A == *(uint *)&pFVar11->field_0x10 &&
             param_1->D == *(uint *)&pFVar11->field_0x1c) &&
            param_1->C == *(uint *)&pFVar11->field_0x18) &&
            param_1->B == *(uint *)&pFVar11->field_0x14) {
          pFVar7 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
          pFVar8 = FGuid::NewGuid(&local_18);
          uVar3 = pFVar8->B;
          uVar4 = pFVar8->C;
          uVar5 = pFVar8->D;
          (pFVar7->ChangeID).A = pFVar8->A;
          (pFVar7->ChangeID).B = uVar3;
          (pFVar7->ChangeID).C = uVar4;
          (pFVar7->ChangeID).D = uVar5;
          return pFVar11;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar10);
    }
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindOutputDescriptionWithVertexID @ 14ae35760

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FGraphController::FindOutputDescriptionWithVertexID
          (FGraphController *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  longlong *plVar6;
  FMetasoundFrontendClassOutput *pFVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar6 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar4 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar5 = (FMetasoundFrontendClassOutput *)(pFVar4->Outputs).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (pFVar4->Outputs).ArrayNum;
    if (pFVar5 != pFVar7) {
      do {
        if (((param_1->A == *(uint *)&pFVar5->field_0x10 &&
             param_1->D == *(uint *)&pFVar5->field_0x1c) &&
            param_1->C == *(uint *)&pFVar5->field_0x18) &&
            param_1->B == *(uint *)&pFVar5->field_0x14) {
          return pFVar5;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar7);
    }
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindTailNodeInVariableStack @ 14ae36ae0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::FindTailNodeInVariableStack
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVariable *pFVar5;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar5 = FindFrontendVariable(this,param_1);
  if (pFVar5 != (FMetasoundFrontendVariable *)0x0) {
    iVar2 = (pFVar5->AccessorNodeIDs).ArrayNum;
    if (0 < iVar2) {
      pcVar3 = *(code **)(this->_padding_ + 0x60);
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (pFVar5->AccessorNodeIDs).AllocatorInstance.Data +
               (longlong)(pFVar5->AccessorNodeIDs).ArrayNum * 0x10 + -0x10;
      local_38 = *(undefined4 *)pFVar1;
      uStack_34 = *(undefined4 *)(pFVar1 + 4);
      uStack_30 = *(undefined4 *)(pFVar1 + 8);
      uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
      (*pcVar3)(this,__return_storage_ptr__,&local_38);
      return __return_storage_ptr__;
    }
    if ((((pFVar5->MutatorNodeID).D != FrontendInvalidID.D ||
         (pFVar5->MutatorNodeID).C != FrontendInvalidID.C) ||
        (pFVar5->MutatorNodeID).B != FrontendInvalidID.B) ||
        (pFVar5->MutatorNodeID).A != FrontendInvalidID.A) {
      local_28 = (pFVar5->MutatorNodeID).A;
      uStack_24 = (pFVar5->MutatorNodeID).B;
      uStack_20 = (pFVar5->MutatorNodeID).C;
      uStack_1c = (pFVar5->MutatorNodeID).D;
      (**(code **)(this->_padding_ + 0x60))(this,__return_storage_ptr__,&local_28);
      return __return_storage_ptr__;
    }
    iVar2 = (pFVar5->DeferredAccessorNodeIDs).ArrayNum;
    if (0 < iVar2) {
      pcVar3 = *(code **)(this->_padding_ + 0x60);
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (pFVar5->DeferredAccessorNodeIDs).AllocatorInstance.Data +
               (longlong)(pFVar5->DeferredAccessorNodeIDs).ArrayNum * 0x10 + -0x10;
      local_18 = *(undefined4 *)pFVar1;
      uStack_14 = *(undefined4 *)(pFVar1 + 4);
      uStack_10 = *(undefined4 *)(pFVar1 + 8);
      uStack_c = *(undefined4 *)(pFVar1 + 0xc);
      (*pcVar3)(this,__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindVariable @ 14ae36cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FGraphController::FindVariable
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<Metasound::Frontend::IVariableController,1> *pTVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  IVariableController *pIVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [64];
  undefined1 local_78 [56];
  longlong *local_40;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FGraphClassAccessPtr::GetVariableWithID
            (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendVariable> *)local_b8,param_1);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_78._0_8_ = local_b8._0_8_;
  local_78._16_8_ = local_b8._16_8_;
  local_40 = (longlong *)0x0;
  if (local_b8._16_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x20);
    if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._56_8_;
    }
    (**(code **)*plVar7)(plVar7,local_78 + 0x20);
  }
  TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
            ((TSharedFromThis<Metasound::Frontend::IGraphController,1> *)&this->_padding_,&local_38)
  ;
  pTVar5 = ::operator_new(0x80);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pIVar9 = (IVariableController *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVariableController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FVariableController::FVariableController
              ((FVariableController *)(pTVar5 + 1),(FInitParams *)local_78);
    pIVar9 = (IVariableController *)(pTVar5 + 1);
    pTVar8 = pTVar5;
    if (pIVar9 == (IVariableController *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<Metasound::Frontend::IVariableController,1> *)(*pcVar3)();
        return pTVar6;
      }
      goto LAB_14ae36e12;
    }
  }
  if (((*(longlong *)&pIVar9->field_0x8 == 0) || (*(longlong *)&pIVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IVariableController **)&pIVar9->field_0x8 = pIVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pIVar9->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar7 = *(longlong **)&pIVar9->field_0x10;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar9->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ae36e12:
  __return_storage_ptr__->Object = pIVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_78._16_8_ != 0) {
    plVar7 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar7 = local_40;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_b8._16_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x20);
    if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._56_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindVariable @ 14ae36eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IVariableController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::FindVariable
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  TSharedRef<Metasound::Frontend::IGraphController_const_,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedRef<Metasound::Frontend::IVariableController_const_,1> *pTVar13;
  longlong *plVar14;
  IVariableController *pIVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  TSharedRef<Metasound::Frontend::IGraphController_const_,1> local_138;
  undefined1 local_128 [16];
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108 [3];
  longlong *plStack_f0;
  IGraphController *local_e8;
  FSharedReferencer<1> local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [3];
  longlong *plStack_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FGraphClassAccessPtr::GetVariableWithID
            (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendVariable_const_> *)local_78,param_1)
  ;
  local_128._0_8_ = (FMetasoundFrontendVariable *)0x0;
  local_118 = 0;
  plStack_f0 = (longlong *)0x0;
  local_d8 = local_78._16_8_;
  local_b0 = (longlong *)0x0;
  if (local_78._16_8_ != 0) {
    plVar14 = (longlong *)(local_78 + 0x20);
    if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_78._56_8_;
    }
    (**(code **)*plVar14)(plVar14,&local_c8);
  }
  pIVar15 = (IVariableController *)&DAT_00000010;
  local_a8 = (code *)0x0;
  plVar8 = FMemory::Malloc(0x40,0x10);
  plStack_80 = plStack_f0;
  uVar7 = local_108[1]._4_4_;
  uVar6 = (undefined4)local_108[1];
  uVar5 = local_108[0]._4_4_;
  uVar4 = (undefined4)local_108[0];
  uVar10 = uStack_110;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVariable_____TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVariable___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar14 = plVar8 + 2;
  *plVar14 = local_d8;
  plVar8[7] = (longlong)local_b0;
  local_b0 = (longlong *)0x0;
  plVar8[4] = local_c8;
  plVar8[5] = lStack_c0;
  plVar8[6] = local_b8;
  if (*plVar14 != 0) {
    local_d8 = 0;
  }
  pcVar9 = local_a8;
  if (plVar14 != (longlong *)0x0) {
    pcVar9 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,FMetasoundFrontendVariable_*>
             ::Call;
  }
  uStack_110 = uStack_a0;
  local_108[2]._0_4_ = (undefined4)local_98[2];
  local_108[2]._4_4_ = local_98[2]._4_4_;
  plStack_f0 = plVar8;
  local_108[0]._0_4_ = (undefined4)local_98[0];
  local_108[0]._4_4_ = local_98[0]._4_4_;
  local_108[1]._0_4_ = (undefined4)local_98[1];
  local_108[1]._4_4_ = local_98[1]._4_4_;
  local_a8 = (code *)local_118;
  uStack_a0 = uVar10;
  local_98[0]._0_4_ = uVar4;
  local_98[0]._4_4_ = uVar5;
  local_98[1]._0_4_ = uVar6;
  local_98[1]._4_4_ = uVar7;
  bVar17 = local_118 != 0;
  local_118 = (longlong)pcVar9;
  if (bVar17) {
    plVar14 = local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar14 = plStack_80;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_d8 != 0) {
    plVar14 = &local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar14 = local_b0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable((void *)local_118);
  lVar3 = local_118;
  plVar14 = local_108;
  if (plStack_f0 != (longlong *)0x0) {
    plVar14 = plStack_f0;
  }
  uVar10 = (**(code **)(*plVar14 + 8))();
  local_128._0_8_ = (*(code *)lVar3)(uVar10);
  pTVar11 = TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
                      ((TSharedFromThis<Metasound::Frontend::IGraphController,1> *)&this->_padding_,
                       &local_138);
  local_e8 = pTVar11->Object;
  local_e0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = ::operator_new(0x80);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVariableController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FVariableController::FVariableController
              ((FVariableController *)(pTVar12 + 1),(FInitParams *)local_128);
    pIVar15 = (IVariableController *)(pTVar12 + 1);
    pTVar16 = pTVar12;
    if (pIVar15 == (IVariableController *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar13 = (TSharedRef<Metasound::Frontend::IVariableController_const_,1> *)(*pcVar9)();
        return pTVar13;
      }
      goto LAB_14ae37134;
    }
  }
  if (((*(longlong *)&pIVar15->field_0x8 == 0) || (*(longlong *)&pIVar15->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar15->field_0x10 + 8) < 1)) {
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IVariableController **)&pIVar15->field_0x8 = pIVar15;
    if (pTVar16 != *(TReferenceControllerBase<1> **)&pIVar15->field_0x10) {
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar14 = *(longlong **)&pIVar15->field_0x10;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar15->field_0x10 = pTVar16;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
LAB_14ae37134:
  __return_storage_ptr__->Object = pIVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  if ((code *)local_118 != (code *)0x0) {
    plVar14 = local_108;
    if (plStack_f0 != (longlong *)0x0) {
      plVar14 = plStack_f0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (local_78._16_8_ != 0) {
    plVar14 = (longlong *)(local_78 + 0x20);
    if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_78._56_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindVariableContainingNode @ 14ae371d0

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FGraphController::FindVariableContainingNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  FGuid local_18;
  
  FindVariableIDOfVariableContainingNode(this,&local_18,param_1);
  if (((local_18.D != 0 || local_18.C != 0) || local_18.B != 0) || local_18.A != 0) {
    (**(code **)(this->_padding_ + 0xc0))(this,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  IVariableController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindVariableContainingNode @ 14ae37240

TSharedRef<Metasound::Frontend::IVariableController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::FindVariableContainingNode
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IVariableController,1> *pTVar2;
  FGuid local_28;
  TSharedRef<Metasound::Frontend::IVariableController,1> local_18;
  
  FindVariableIDOfVariableContainingNode(this,&local_28,param_1);
  if (((local_28.D != 0 || local_28.B != 0) || local_28.C != 0) || local_28.A != 0) {
    (**(code **)(this->_padding_ + 0xb8))(this,__return_storage_ptr__,&local_28);
    return __return_storage_ptr__;
  }
  pTVar2 = IVariableController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindVariableIDOfVariableContainingNode @ 14ae37340

FGuid * __thiscall
Metasound::Frontend::FGraphController::FindVariableIDOfVariableContainingNode
          (FGraphController *this,FGuid *__return_storage_ptr__,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  FMetasoundFrontendGraphClass *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  longlong *plVar10;
  FMetasoundFrontendVariable *pFVar11;
  FMetasoundFrontendVariable *pFVar12;
  FGuid *local_res18;
  
  if (((param_1->D != 0 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
    plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
    plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar10 = plVar1;
    }
    uVar7 = (**(code **)(*plVar10 + 8))();
    pFVar8 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar7);
    *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = pFVar8;
    if (pFVar8 != (FMetasoundFrontendGraphClass *)0x0) {
      pFVar9 = FindConstBuildGraphChecked(pFVar8);
      pFVar11 = (FMetasoundFrontendVariable *)(pFVar9->Variables).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (pFVar9->Variables).ArrayNum;
      local_res18 = param_1;
      for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 1) {
        bVar6 = `Metasound::Frontend::FGraphController::FindVariableIDOfVariableContainingNode'::
                __l8::<lambda_1>::operator()(&local_res18,pFVar11);
        if (bVar6) {
          if (pFVar11 != (FMetasoundFrontendVariable *)0x0) {
            uVar3 = (pFVar11->ID).B;
            uVar4 = (pFVar11->ID).C;
            uVar5 = (pFVar11->ID).D;
            __return_storage_ptr__->A = (pFVar11->ID).A;
            __return_storage_ptr__->B = uVar3;
            __return_storage_ptr__->C = uVar4;
            __return_storage_ptr__->D = uVar5;
            return __return_storage_ptr__;
          }
          break;
        }
      }
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetClassID @ 14ae37770

FGuid * __thiscall
Metasound::Frontend::FGraphController::GetClassID
          (FGraphController *this,FGuid *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->GraphClassPtr = lVar4;
  if (lVar4 == 0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 8);
    uVar7 = *(uint *)(lVar4 + 0xc);
    uVar8 = *(uint *)(lVar4 + 0x10);
    uVar9 = *(uint *)(lVar4 + 0x14);
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// GetConstInputNodes @ 14ae379b0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetConstInputNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetConstInputNodes'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  GetNodesByPredicate(this,__return_storage_ptr__,
                      (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                       *)&local_18);
  return __return_storage_ptr__;
}

// GetConstNodes @ 14ae379f0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetConstNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  local_38;
  FConstNodeAndClass *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::Frontend::FGraphController::FConstNodeAndClass_const_,int> local_18;
  
  pTVar3 = GetNodesAndClasses(this,&local_38);
  local_28 = (FConstNodeAndClass *)(pTVar3->AllocatorInstance).Data;
  iStack_20 = pTVar3->ArrayNum;
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  GetNodeHandles(this,__return_storage_ptr__,&local_18);
  DestructItems<Metasound::Frontend::FGraphController::FConstNodeAndClass,int>
            ((FConstNodeAndClass *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FConstNodeAndClass *)local_38.AllocatorInstance.Data != (FConstNodeAndClass *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConstOutputNodes @ 14ae37aa0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetConstOutputNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetConstOutputNodes'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  GetNodesByPredicate(this,__return_storage_ptr__,
                      (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                       *)&local_18);
  return __return_storage_ptr__;
}

// GetDefaultInput @ 14ae37b40

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FGraphController::GetDefaultInput
          (FGraphController *this,FMetasoundFrontendLiteral *__return_storage_ptr__,FGuid *param_1)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  IDocumentBuilderRegistry *pIVar4;
  undefined8 *puVar5;
  FMetasoundFrontendLiteral *pFVar6;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pIVar4 = IDocumentBuilderRegistry::Get();
  if (pIVar4 != (IDocumentBuilderRegistry *)0x0) {
    puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,local_18);
    iVar1 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    local_40 = CONCAT44(local_40._4_4_,iVar1);
    if ((iVar1 != 0) || (local_40._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,local_40._4_4_,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
      if (iVar1 != 0) {
        memcpy(local_48.Data,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  iVar1 = (int)local_40;
  pcVar2 = *(code **)(this->_padding_ + 0x1b8);
  local_38 = local_48.Data;
  if ((int)local_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar6;
    }
  }
  iStack_30 = iVar1;
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  iStack_20 = iVar1;
  uStack_1c = uStack_2c;
  (*pcVar2)(this,__return_storage_ptr__,param_1,&local_28);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultInput @ 14ae37c80

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FGraphController::GetDefaultInput
          (FGraphController *this,FMetasoundFrontendLiteral *__return_storage_ptr__,FGuid *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  FMetasoundFrontendClassInput *this_00;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar1;
  FMetasoundFrontendClassInputDefault *pFVar2;
  TArrayView<FGuid_const_,int> local_18;
  
  this_00 = (FMetasoundFrontendClassInput *)(**(code **)(this->_padding_ + 0x240))(this,param_1);
  if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
    pTVar1 = FMetasoundFrontendClassInput::GetDefaults(this_00);
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    pFVar2 = FindPreferredPage<FMetasoundFrontendClassInputDefault>(pTVar1,&local_18);
    if (pFVar2 != (FMetasoundFrontendClassInputDefault *)0x0) {
      FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,&pFVar2->Literal);
      return __return_storage_ptr__;
    }
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGraphMetadata @ 14ae385a0

FMetasoundFrontendClassMetadata * __thiscall
Metasound::Frontend::FGraphController::GetGraphMetadata(FGraphController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->GraphClassPtr = lVar4;
  if (lVar4 != 0) {
    return (FMetasoundFrontendClassMetadata *)(lVar4 + 0x18);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&::Invalid);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetGraphPresetOptions @ 14ae38660

FMetasoundFrontendGraphClassPresetOptions * __thiscall
Metasound::Frontend::FGraphController::GetGraphPresetOptions(FGraphController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->GraphClassPtr = lVar4;
  if (lVar4 != 0) {
    return (FMetasoundFrontendGraphClassPresetOptions *)(lVar4 + 0xa0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassPresetOptions'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInputNodeWithName @ 14ae387a0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::GetInputNodeWithName
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1)

{
  FName *local_res10 [3];
  code *local_18;
  FName **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetInputNodeWithName'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetInputNodeWithName @ 14ae387e0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetInputNodeWithName
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  FName *local_res10 [3];
  code *local_18;
  FName **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetInputNodeWithName'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetInputNodes @ 14ae38820

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetInputNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetInputNodes'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  GetNodesByPredicate(this,__return_storage_ptr__,
                      (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                       *)&local_18);
  return __return_storage_ptr__;
}

// GetInputVertexNames @ 14ae38860

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetInputVertexNames
          (FGraphController *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar3 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar4 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar11 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar4)(uVar8);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar9 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    iVar2 = (pFVar9->Inputs).ArrayNum;
    pFVar12 = (pFVar9->Inputs).AllocatorInstance.Data;
    pFVar1 = pFVar12 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((pFVar9->Inputs).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar1) break;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar12) &&
          (pFVar12 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      uVar8 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0x48;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           uVar8;
    }
  }
  return __return_storage_ptr__;
}

// GetInputsInheritingDefault @ 14ae389c0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
Metasound::Frontend::FGraphController::GetInputsInheritingDefault(FGraphController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->GraphClassPtr = lVar4;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xa0) != '\0')) {
    return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar4 + 0xa8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidNameSet'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetNodeByPredicate @ 14ae39360

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeByPredicate
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> local_28;
  TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
  local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  GetNodesAndClassesByPredicate(this,&local_28,&local_18);
  if (local_28.ArrayNum < 1) {
    INodeController::GetInvalidHandle(__return_storage_ptr__);
  }
  else {
    GetNodeHandle(this,__return_storage_ptr__,(FNodeAndClass *)local_28.AllocatorInstance.Data);
  }
  DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
            ((FNodeAndClass *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FNodeAndClass *)local_28.AllocatorInstance.Data != (FNodeAndClass *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNodeByPredicate @ 14ae393f0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeByPredicate
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar2;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  local_28;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  local_18.Object = *(INodeController **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  GetNodesAndClassesByPredicate
            (this,&local_28,
             (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
              *)&local_18);
  if (local_28.ArrayNum < 1) {
    pTVar2 = INodeController::GetInvalidHandle(&local_18);
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    GetNodeHandle(this,__return_storage_ptr__,(FConstNodeAndClass *)local_28.AllocatorInstance.Data)
    ;
  }
  DestructItems<Metasound::Frontend::FGraphController::FConstNodeAndClass,int>
            ((FConstNodeAndClass *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FConstNodeAndClass *)local_28.AllocatorInstance.Data != (FConstNodeAndClass *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNodeHandle @ 14ae39620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeHandle
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FNodeAndClass *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_788 [32];
  TSharedRef<Metasound::Frontend::IGraphController,1> local_768;
  undefined8 *local_758 [2];
  FGuid local_748;
  undefined1 local_738 [64];
  undefined1 local_6f8 [32];
  longlong local_6d8 [3];
  longlong *local_6c0;
  undefined1 local_6b8 [32];
  longlong local_698 [3];
  longlong *local_680;
  FInitParams local_678;
  FInitParams local_5a8;
  FInitParams local_4d8;
  FInitParams local_408;
  FInitParams local_338;
  FInitParams local_268;
  FInitParams local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_788;
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->Node).field_0x10);
  plVar10 = *(longlong **)&(param_1->Node).field_0x38;
  puVar11 = (undefined8 *)&(param_1->Node).field_0x20;
  pcVar1 = *(code **)&(param_1->Node).field_0x10;
  plVar9 = puVar11;
  if (plVar10 != (longlong *)0x0) {
    plVar9 = plVar10;
  }
  uVar5 = (**(code **)(*plVar9 + 8))();
  local_758[0] = (undefined8 *)(*pcVar1)(uVar5);
  *(undefined8 **)&param_1->Node = local_758[0];
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->Class).field_0x10);
  plVar10 = *(longlong **)&(param_1->Class).field_0x38;
  puVar12 = (undefined8 *)&(param_1->Class).field_0x20;
  pcVar1 = *(code **)&(param_1->Class).field_0x10;
  plVar9 = puVar12;
  if (plVar10 != (longlong *)0x0) {
    plVar9 = plVar10;
  }
  uVar5 = (**(code **)(*plVar9 + 8))();
  lVar6 = (*pcVar1)(uVar5);
  *(longlong *)&param_1->Class = lVar6;
  if ((local_758[0] == (undefined8 *)0x0) || (lVar6 == 0)) {
LAB_14ae3a053:
    INodeController::GetInvalidHandle(__return_storage_ptr__);
  }
  else {
    TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::IGraphController,1> *)&this->_padding_,
               &local_768);
    FGraphClassAccessPtr::GetGraph
              (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendGraph> *)local_738);
    EVar3 = FMetasoundFrontendClassMetadata::GetType
                      ((FMetasoundFrontendClassMetadata *)(lVar6 + 0x18));
    switch(EVar3) {
    case External:
    case Template:
      local_408.NodePtr._0_8_ = *(undefined8 *)&param_1->Node;
      local_408.NodePtr._16_8_ = *(undefined8 *)&(param_1->Node).field_0x10;
      local_408.NodePtr._56_8_ = 0;
      if (local_408.NodePtr._16_8_ != 0) {
        puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
        if (puVar2 != (undefined8 *)0x0) {
          puVar11 = puVar2;
        }
        (**(code **)*puVar11)(puVar11,&local_408.NodePtr.field_0x20);
      }
      local_408.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
      local_408.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
      local_408.ClassPtr._56_8_ = 0;
      if (local_408.ClassPtr._16_8_ != 0) {
        puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
        if (puVar11 != (undefined8 *)0x0) {
          puVar12 = puVar11;
        }
        (**(code **)*puVar12)(puVar12,&local_408.ClassPtr.field_0x20);
      }
      local_408.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
      local_408.GraphPtr.GetObject._0_8_ = local_738._16_8_;
      local_408.GraphPtr.GetObject._40_8_ = 0;
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)*plVar10)(plVar10,&local_408.GraphPtr.GetObject.field_0x10);
      }
      local_408.OwningGraph.Object = local_768.Object;
      local_408.OwningGraph.SharedReferenceCount.ReferenceController =
           local_768.SharedReferenceCount.ReferenceController;
      if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FNodeController::CreateNodeHandle(__return_storage_ptr__,&local_408);
      FNodeController::FInitParams::~FInitParams(&local_408);
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_768.SharedReferenceCount.ReferenceController);
      break;
    case Graph:
      local_338.NodePtr._0_8_ = *(undefined8 *)&param_1->Node;
      local_338.NodePtr._16_8_ = *(undefined8 *)&(param_1->Node).field_0x10;
      local_338.NodePtr._56_8_ = 0;
      if (local_338.NodePtr._16_8_ != 0) {
        puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
        if (puVar2 != (undefined8 *)0x0) {
          puVar11 = puVar2;
        }
        (**(code **)*puVar11)(puVar11,&local_338.NodePtr.field_0x20);
      }
      local_338.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
      local_338.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
      local_338.ClassPtr._56_8_ = 0;
      if (local_338.ClassPtr._16_8_ != 0) {
        puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
        if (puVar11 != (undefined8 *)0x0) {
          puVar12 = puVar11;
        }
        (**(code **)*puVar12)(puVar12,&local_338.ClassPtr.field_0x20);
      }
      local_338.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
      local_338.GraphPtr.GetObject._0_8_ = local_738._16_8_;
      local_338.GraphPtr.GetObject._40_8_ = 0;
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)*plVar10)(plVar10,&local_338.GraphPtr.GetObject.field_0x10);
      }
      local_338.OwningGraph.Object = local_768.Object;
      local_338.OwningGraph.SharedReferenceCount.ReferenceController =
           local_768.SharedReferenceCount.ReferenceController;
      if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSubgraphNodeController::CreateNodeHandle(__return_storage_ptr__,&local_338);
      FSubgraphNodeController::FInitParams::~FInitParams(&local_338);
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_768.SharedReferenceCount.ReferenceController);
      break;
    case Input:
      local_758[1] = (undefined8 *)local_758[0][1];
      local_758[0] = (undefined8 *)*local_758[0];
      FGraphClassAccessPtr::GetInputWithNodeID
                (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendClassInput> *)local_6f8,
                 (FGuid *)local_758);
      UE::Core::Private::Function::CheckCallable((void *)local_6f8._16_8_);
      uVar5 = local_6f8._16_8_;
      plVar10 = local_6d8;
      if (local_6c0 != (longlong *)0x0) {
        plVar10 = local_6c0;
      }
      uVar7 = (**(code **)(*plVar10 + 8))();
      local_6f8._0_8_ = (*(code *)uVar5)(uVar7);
      local_268.NodePtr._0_8_ = *(undefined8 *)&param_1->Node;
      local_268.NodePtr._16_8_ = *(undefined8 *)&(param_1->Node).field_0x10;
      if ((FMetasoundFrontendClassInput *)local_6f8._0_8_ == (FMetasoundFrontendClassInput *)0x0) {
        local_678.NodePtr._0_8_ = local_268.NodePtr._0_8_;
        local_678.NodePtr._16_8_ = local_268.NodePtr._16_8_;
        local_678.NodePtr._56_8_ = 0;
        if (local_268.NodePtr._16_8_ != 0) {
          puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
          if (puVar2 != (undefined8 *)0x0) {
            puVar11 = puVar2;
          }
          (**(code **)*puVar11)(puVar11,&local_678.NodePtr.field_0x20);
        }
        local_678.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
        local_678.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
        local_678.ClassPtr._56_8_ = 0;
        if (local_678.ClassPtr._16_8_ != 0) {
          puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
          if (puVar11 != (undefined8 *)0x0) {
            puVar12 = puVar11;
          }
          (**(code **)*puVar12)(puVar12,&local_678.ClassPtr.field_0x20);
        }
        local_678.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
        local_678.GraphPtr.GetObject._0_8_ = local_738._16_8_;
        local_678.GraphPtr.GetObject._40_8_ = 0;
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)*plVar10)(plVar10,&local_678.GraphPtr.GetObject.field_0x10);
        }
        local_678.OwningGraph.Object = local_768.Object;
        local_678.OwningGraph.SharedReferenceCount.ReferenceController =
             local_768.SharedReferenceCount.ReferenceController;
        if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FNodeController::CreateNodeHandle(__return_storage_ptr__,&local_678);
        FNodeController::FInitParams::~FInitParams(&local_678);
        if ((code *)local_6f8._16_8_ != (code *)0x0) {
          plVar10 = local_6d8;
          if (local_6c0 != (longlong *)0x0) {
            plVar10 = local_6c0;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_768.SharedReferenceCount.ReferenceController);
      }
      else {
        local_268.NodePtr._56_8_ = 0;
        if (local_268.NodePtr._16_8_ != 0) {
          puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
          if (puVar2 != (undefined8 *)0x0) {
            puVar11 = puVar2;
          }
          (**(code **)*puVar11)(puVar11,&local_268.NodePtr.field_0x20);
        }
        local_268.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
        local_268.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
        local_268.ClassPtr._56_8_ = 0;
        if (local_268.ClassPtr._16_8_ != 0) {
          puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
          if (puVar11 != (undefined8 *)0x0) {
            puVar12 = puVar11;
          }
          (**(code **)*puVar12)(puVar12,&local_268.ClassPtr.field_0x20);
        }
        TAccessPtr<FMetasoundFrontendClassInput_const_>::
        TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>
                  (&local_268.OwningGraphClassInputPtr,
                   (TAccessPtr<FMetasoundFrontendClassInput> *)local_6f8,Tag);
        local_268.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
        local_268.GraphPtr.GetObject._0_8_ = local_738._16_8_;
        local_268.GraphPtr.GetObject._40_8_ = 0;
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)*plVar10)(plVar10,&local_268.GraphPtr.GetObject.field_0x10);
        }
        local_268.OwningGraph.Object = local_768.Object;
        local_268.OwningGraph.SharedReferenceCount.ReferenceController =
             local_768.SharedReferenceCount.ReferenceController;
        if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FInputNodeController::CreateInputNodeHandle(__return_storage_ptr__,&local_268);
        FInputNodeController::FInitParams::~FInitParams(&local_268);
        if ((code *)local_6f8._16_8_ != (code *)0x0) {
          plVar10 = local_6d8;
          if (local_6c0 != (longlong *)0x0) {
            plVar10 = local_6c0;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_768.SharedReferenceCount.ReferenceController);
      }
      break;
    case Output:
      local_748._0_8_ = *local_758[0];
      local_748._8_8_ = local_758[0][1];
      FGraphClassAccessPtr::GetOutputWithNodeID
                (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendClassOutput> *)local_6b8,
                 &local_748);
      UE::Core::Private::Function::CheckCallable((void *)local_6b8._16_8_);
      uVar5 = local_6b8._16_8_;
      plVar10 = local_698;
      if (local_680 != (longlong *)0x0) {
        plVar10 = local_680;
      }
      uVar7 = (**(code **)(*plVar10 + 8))();
      local_6b8._0_8_ = (*(code *)uVar5)(uVar7);
      local_158.NodePtr._0_8_ = *(undefined8 *)&param_1->Node;
      local_158.NodePtr._16_8_ = *(undefined8 *)&(param_1->Node).field_0x10;
      if ((FMetasoundFrontendClassOutput *)local_6b8._0_8_ == (FMetasoundFrontendClassOutput *)0x0)
      {
        local_5a8.NodePtr._0_8_ = local_158.NodePtr._0_8_;
        local_5a8.NodePtr._16_8_ = local_158.NodePtr._16_8_;
        local_5a8.NodePtr._56_8_ = 0;
        if (local_158.NodePtr._16_8_ != 0) {
          puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
          if (puVar2 != (undefined8 *)0x0) {
            puVar11 = puVar2;
          }
          (**(code **)*puVar11)(puVar11,&local_5a8.NodePtr.field_0x20);
        }
        local_5a8.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
        local_5a8.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
        local_5a8.ClassPtr._56_8_ = 0;
        if (local_5a8.ClassPtr._16_8_ != 0) {
          puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
          if (puVar11 != (undefined8 *)0x0) {
            puVar12 = puVar11;
          }
          (**(code **)*puVar12)(puVar12,&local_5a8.ClassPtr.field_0x20);
        }
        local_5a8.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
        local_5a8.GraphPtr.GetObject._0_8_ = local_738._16_8_;
        local_5a8.GraphPtr.GetObject._40_8_ = 0;
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)*plVar10)(plVar10,&local_5a8.GraphPtr.GetObject.field_0x10);
        }
        local_5a8.OwningGraph.Object = local_768.Object;
        local_5a8.OwningGraph.SharedReferenceCount.ReferenceController =
             local_768.SharedReferenceCount.ReferenceController;
        if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FNodeController::CreateNodeHandle(__return_storage_ptr__,&local_5a8);
        FNodeController::FInitParams::~FInitParams(&local_5a8);
        if ((code *)local_6b8._16_8_ != (code *)0x0) {
          plVar10 = local_698;
          if (local_680 != (longlong *)0x0) {
            plVar10 = local_680;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_768.SharedReferenceCount.ReferenceController);
      }
      else {
        local_158.NodePtr._56_8_ = 0;
        if (local_158.NodePtr._16_8_ != 0) {
          puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
          if (puVar2 != (undefined8 *)0x0) {
            puVar11 = puVar2;
          }
          (**(code **)*puVar11)(puVar11,&local_158.NodePtr.field_0x20);
        }
        local_158.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
        local_158.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
        local_158.ClassPtr._56_8_ = 0;
        if (local_158.ClassPtr._16_8_ != 0) {
          puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
          if (puVar11 != (undefined8 *)0x0) {
            puVar12 = puVar11;
          }
          (**(code **)*puVar12)(puVar12,&local_158.ClassPtr.field_0x20);
        }
        TAccessPtr<FMetasoundFrontendClassOutput_const_>::
        TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>
                  (&local_158.OwningGraphClassOutputPtr,
                   (TAccessPtr<FMetasoundFrontendClassOutput> *)local_6b8,Tag);
        local_158.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
        local_158.GraphPtr.GetObject._0_8_ = local_738._16_8_;
        local_158.GraphPtr.GetObject._40_8_ = 0;
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)*plVar10)(plVar10,&local_158.GraphPtr.GetObject.field_0x10);
        }
        local_158.OwningGraph.Object = local_768.Object;
        local_158.OwningGraph.SharedReferenceCount.ReferenceController =
             local_768.SharedReferenceCount.ReferenceController;
        if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FOutputNodeController::CreateOutputNodeHandle(__return_storage_ptr__,&local_158);
        FOutputNodeController::FInitParams::~FInitParams(&local_158);
        if ((code *)local_6b8._16_8_ != (code *)0x0) {
          plVar10 = local_698;
          if (local_680 != (longlong *)0x0) {
            plVar10 = local_680;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_738._16_8_ != 0) {
          plVar10 = (longlong *)(local_738 + 0x20);
          if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_738._56_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_768.SharedReferenceCount.ReferenceController);
      }
      break;
    default:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                         ,0x8b2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
        return pTVar8;
      }
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_768.SharedReferenceCount.ReferenceController);
      goto LAB_14ae3a053;
    case Variable:
    case VariableDeferredAccessor:
    case VariableAccessor:
    case VariableMutator:
      local_4d8.NodePtr._0_8_ = *(undefined8 *)&param_1->Node;
      local_4d8.NodePtr._16_8_ = *(undefined8 *)&(param_1->Node).field_0x10;
      local_4d8.NodePtr._56_8_ = 0;
      if (local_4d8.NodePtr._16_8_ != 0) {
        puVar2 = *(undefined8 **)&(param_1->Node).field_0x38;
        if (puVar2 != (undefined8 *)0x0) {
          puVar11 = puVar2;
        }
        (**(code **)*puVar11)(puVar11,&local_4d8.NodePtr.field_0x20);
      }
      local_4d8.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
      local_4d8.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
      local_4d8.ClassPtr._56_8_ = 0;
      if (local_4d8.ClassPtr._16_8_ != 0) {
        puVar11 = *(undefined8 **)&(param_1->Class).field_0x38;
        if (puVar11 != (undefined8 *)0x0) {
          puVar12 = puVar11;
        }
        (**(code **)*puVar12)(puVar12,&local_4d8.ClassPtr.field_0x20);
      }
      local_4d8.GraphPtr.CachedObjectPtr = (FMetasoundFrontendGraph *)local_738._0_8_;
      local_4d8.GraphPtr.GetObject._0_8_ = local_738._16_8_;
      local_4d8.GraphPtr.GetObject._40_8_ = 0;
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)*plVar10)(plVar10,&local_4d8.GraphPtr.GetObject.field_0x10);
      }
      local_4d8.OwningGraph.Object = local_768.Object;
      local_4d8.OwningGraph.SharedReferenceCount.ReferenceController =
           local_768.SharedReferenceCount.ReferenceController;
      if (local_768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariableNodeController::CreateNodeHandle(__return_storage_ptr__,&local_4d8);
      FNodeController::FInitParams::~FInitParams(&local_4d8);
      if (local_738._16_8_ != 0) {
        plVar10 = (longlong *)(local_738 + 0x20);
        if ((longlong *)local_738._56_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_738._56_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_768.SharedReferenceCount.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// GetNodeHandle @ 14ae3a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeHandle
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FConstNodeAndClass *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  EMetasoundFrontendClassType EVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar14;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStack_738 [32];
  TSharedRef<Metasound::Frontend::IGraphController_const_,1> local_718;
  FGuid local_708;
  FGuid local_6f8;
  TSharedRef<Metasound::Frontend::INodeController,1> local_6e8;
  undefined1 local_6d8 [64];
  undefined1 local_698 [16];
  longlong local_688;
  undefined8 uStack_680;
  longlong local_678 [3];
  longlong *plStack_660;
  undefined1 local_658 [16];
  longlong local_648;
  undefined8 uStack_640;
  longlong local_638 [3];
  longlong *plStack_620;
  code *local_618;
  longlong local_608;
  longlong lStack_600;
  longlong local_5f8;
  longlong *local_5f0;
  code *local_5e8;
  longlong local_5d8;
  longlong lStack_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  undefined1 local_5b8 [32];
  longlong local_598 [3];
  longlong *local_580;
  undefined1 local_578 [32];
  longlong local_558 [3];
  longlong *local_540;
  code *local_538;
  undefined8 uStack_530;
  longlong local_528 [3];
  longlong *plStack_510;
  code *local_508;
  undefined8 uStack_500;
  longlong local_4f8 [3];
  longlong *plStack_4e0;
  FInitParams local_4d8;
  FInitParams local_408;
  FInitParams local_338;
  FInitParams local_268;
  FInitParams local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_738;
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->Node).field_0x10);
  plVar16 = *(longlong **)&(param_1->Node).field_0x38;
  pcVar1 = *(code **)&(param_1->Node).field_0x10;
  plVar13 = (longlong *)&(param_1->Node).field_0x20;
  if (plVar16 != (longlong *)0x0) {
    plVar13 = plVar16;
  }
  uVar9 = (**(code **)(*plVar13 + 8))();
  puVar10 = (undefined8 *)(*pcVar1)(uVar9);
  *(undefined8 **)&param_1->Node = puVar10;
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->Class).field_0x10);
  plVar16 = *(longlong **)&(param_1->Class).field_0x38;
  puVar17 = (undefined8 *)&(param_1->Class).field_0x20;
  pcVar1 = *(code **)&(param_1->Class).field_0x10;
  plVar13 = puVar17;
  if (plVar16 != (longlong *)0x0) {
    plVar13 = plVar16;
  }
  uVar9 = (**(code **)(*plVar13 + 8))();
  lVar11 = (*pcVar1)(uVar9);
  *(longlong *)&param_1->Class = lVar11;
  if ((puVar10 == (undefined8 *)0x0) || (lVar11 == 0)) goto LAB_14ae3a9e7;
  TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
            ((TSharedFromThis<Metasound::Frontend::IGraphController,1> *)&this->_padding_,&local_718
            );
  FGraphClassAccessPtr::GetGraph
            (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
  EVar7 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(lVar11 + 0x18));
  switch(EVar7) {
  case External:
  case Template:
    ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
              (&local_408.NodePtr,&param_1->Node);
    local_408.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
    local_408.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
    local_408.ClassPtr._56_8_ = 0;
    if (local_408.ClassPtr._16_8_ != 0) {
      puVar10 = *(undefined8 **)&(param_1->Class).field_0x38;
      if (puVar10 != (undefined8 *)0x0) {
        puVar17 = puVar10;
      }
      (**(code **)*puVar17)(puVar17,&local_408.ClassPtr.field_0x20);
    }
    ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
              (&local_408.GraphPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
    local_408.OwningGraph.Object = local_718.Object;
    local_408.OwningGraph.SharedReferenceCount.ReferenceController =
         local_718.SharedReferenceCount.ReferenceController;
    if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FNodeController::CreateConstNodeHandle(__return_storage_ptr__,&local_408);
    FNodeController::FInitParams::~FInitParams(&local_408);
    break;
  case Graph:
    ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
              (&local_338.NodePtr,&param_1->Node);
    local_338.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
    local_338.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
    local_338.ClassPtr._56_8_ = 0;
    if (local_338.ClassPtr._16_8_ != 0) {
      puVar10 = *(undefined8 **)&(param_1->Class).field_0x38;
      if (puVar10 != (undefined8 *)0x0) {
        puVar17 = puVar10;
      }
      (**(code **)*puVar17)(puVar17,&local_338.ClassPtr.field_0x20);
    }
    ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
              (&local_338.GraphPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
    local_338.OwningGraph.Object = local_718.Object;
    local_338.OwningGraph.SharedReferenceCount.ReferenceController =
         local_718.SharedReferenceCount.ReferenceController;
    if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSubgraphNodeController::CreateConstNodeHandle(__return_storage_ptr__,&local_338);
    FSubgraphNodeController::FInitParams::~FInitParams(&local_338);
    break;
  case Input:
    local_708._0_8_ = *puVar10;
    local_708._8_8_ = puVar10[1];
    FGraphClassAccessPtr::GetInputWithNodeID
              (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_5b8,
               &local_708);
    UE::Core::Private::Function::CheckCallable((void *)local_5b8._16_8_);
    uVar9 = local_5b8._16_8_;
    plVar16 = local_598;
    if (local_580 != (longlong *)0x0) {
      plVar16 = local_580;
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    local_5b8._0_8_ = (*(code *)uVar9)(uVar12);
    if ((FMetasoundFrontendClassInput *)local_5b8._0_8_ != (FMetasoundFrontendClassInput *)0x0) {
      ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
                (&local_268.NodePtr,&param_1->Node);
      local_268.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
      local_268.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
      local_268.ClassPtr._56_8_ = 0;
      if (local_268.ClassPtr._16_8_ != 0) {
        puVar10 = *(undefined8 **)&(param_1->Class).field_0x38;
        if (puVar10 != (undefined8 *)0x0) {
          puVar17 = puVar10;
        }
        (**(code **)*puVar17)(puVar17,&local_268.ClassPtr.field_0x20);
      }
      local_698._0_8_ = (FMetasoundFrontendClassInput *)0x0;
      local_688 = 0;
      plStack_660 = (longlong *)0x0;
      local_618 = (code *)local_5b8._16_8_;
      local_5f0 = (longlong *)0x0;
      if ((code *)local_5b8._16_8_ != (code *)0x0) {
        plVar16 = local_598;
        if (local_580 != (longlong *)0x0) {
          plVar16 = local_580;
        }
        (**(code **)*plVar16)(plVar16,&local_608);
      }
      local_538 = (code *)0x0;
      plVar13 = FMemory::Malloc(0x40,0x10);
      plStack_510 = plStack_660;
      uVar6 = local_678[1]._4_4_;
      uVar5 = (undefined4)local_678[1];
      uVar4 = local_678[0]._4_4_;
      uVar3 = (undefined4)local_678[0];
      uVar9 = uStack_680;
      lVar11 = local_688;
      *plVar13 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassInput_____TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
      ;
      plVar16 = plVar13 + 2;
      *plVar16 = (longlong)local_618;
      plVar13[7] = (longlong)local_5f0;
      local_5f0 = (longlong *)0x0;
      plVar13[4] = local_608;
      plVar13[5] = lStack_600;
      plVar13[6] = local_5f8;
      if (*plVar16 != 0) {
        local_618 = (code *)0x0;
      }
      if (plVar16 != (longlong *)0x0) {
        local_538 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_*>
                    ::Call;
      }
      local_688 = (longlong)local_538;
      uStack_680 = uStack_530;
      local_678[2]._0_4_ = (undefined4)local_528[2];
      local_678[2]._4_4_ = local_528[2]._4_4_;
      plStack_660 = plVar13;
      local_678[0]._0_4_ = (undefined4)local_528[0];
      local_678[0]._4_4_ = local_528[0]._4_4_;
      local_678[1]._0_4_ = (undefined4)local_528[1];
      local_678[1]._4_4_ = local_528[1]._4_4_;
      local_538 = (code *)lVar11;
      uStack_530 = uVar9;
      local_528[0]._0_4_ = uVar3;
      local_528[0]._4_4_ = uVar4;
      local_528[1]._0_4_ = uVar5;
      local_528[1]._4_4_ = uVar6;
      if (lVar11 != 0) {
        plVar16 = local_528;
        if (plStack_510 != (longlong *)0x0) {
          plVar16 = plStack_510;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_618 != (code *)0x0) {
        plVar16 = &local_608;
        if (local_5f0 != (longlong *)0x0) {
          plVar16 = local_5f0;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      UE::Core::Private::Function::CheckCallable((void *)local_688);
      lVar11 = local_688;
      plVar16 = local_678;
      if (plStack_660 != (longlong *)0x0) {
        plVar16 = plStack_660;
      }
      uVar9 = (**(code **)(*plVar16 + 8))();
      local_698._0_8_ = (*(code *)lVar11)(uVar9);
      TAccessPtr<FMetasoundFrontendClassInput_const_>::
      TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>
                (&local_268.OwningGraphClassInputPtr,
                 (TAccessPtr<FMetasoundFrontendClassInput> *)local_698,Tag);
      if ((code *)local_688 != (code *)0x0) {
        plVar16 = local_678;
        if (plStack_660 != (longlong *)0x0) {
          plVar16 = plStack_660;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
                (&local_268.GraphPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
      local_268.OwningGraph.Object = local_718.Object;
      local_268.OwningGraph.SharedReferenceCount.ReferenceController =
           local_718.SharedReferenceCount.ReferenceController;
      if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FInputNodeController::CreateConstInputNodeHandle(__return_storage_ptr__,&local_268);
      FInputNodeController::FInitParams::~FInitParams(&local_268);
      if ((code *)local_5b8._16_8_ != (code *)0x0) {
        plVar16 = local_598;
        if (local_580 != (longlong *)0x0) {
          plVar16 = local_580;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_6d8._16_8_ != 0) {
        plVar16 = (longlong *)(local_6d8 + 0x20);
        if ((longlong *)local_6d8._56_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_6d8._56_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      goto LAB_14ae3aa0d;
    }
    if ((code *)local_5b8._16_8_ != (code *)0x0) {
      plVar16 = local_598;
      if (local_580 != (longlong *)0x0) {
        plVar16 = local_580;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    goto LAB_14ae3a9c0;
  case Output:
    local_6f8._0_8_ = *puVar10;
    local_6f8._8_8_ = puVar10[1];
    FGraphClassAccessPtr::GetOutputWithNodeID
              (&this->GraphClassPtr,(TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_578,
               &local_6f8);
    UE::Core::Private::Function::CheckCallable((void *)local_578._16_8_);
    uVar9 = local_578._16_8_;
    plVar16 = local_558;
    if (local_540 != (longlong *)0x0) {
      plVar16 = local_540;
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    local_578._0_8_ = (*(code *)uVar9)(uVar12);
    if ((FMetasoundFrontendClassOutput *)local_578._0_8_ == (FMetasoundFrontendClassOutput *)0x0) {
      if ((code *)local_578._16_8_ != (code *)0x0) {
        plVar16 = local_558;
        if (local_540 != (longlong *)0x0) {
          plVar16 = local_540;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      goto LAB_14ae3a9c0;
    }
    ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
              (&local_158.NodePtr,&param_1->Node);
    local_158.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
    local_158.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
    local_158.ClassPtr._56_8_ = 0;
    if (local_158.ClassPtr._16_8_ != 0) {
      puVar10 = *(undefined8 **)&(param_1->Class).field_0x38;
      if (puVar10 != (undefined8 *)0x0) {
        puVar17 = puVar10;
      }
      (**(code **)*puVar17)(puVar17,&local_158.ClassPtr.field_0x20);
    }
    local_658._0_8_ = (FMetasoundFrontendClassOutput *)0x0;
    local_648 = 0;
    plStack_620 = (longlong *)0x0;
    local_5e8 = (code *)local_578._16_8_;
    local_5c0 = (longlong *)0x0;
    if ((code *)local_578._16_8_ != (code *)0x0) {
      plVar16 = local_558;
      if (local_540 != (longlong *)0x0) {
        plVar16 = local_540;
      }
      (**(code **)*plVar16)(plVar16,&local_5d8);
    }
    local_508 = (code *)0x0;
    plVar13 = FMemory::Malloc(0x40,0x10);
    plStack_4e0 = plStack_620;
    uVar6 = local_638[1]._4_4_;
    uVar5 = (undefined4)local_638[1];
    uVar4 = local_638[0]._4_4_;
    uVar3 = (undefined4)local_638[0];
    uVar9 = uStack_640;
    lVar11 = local_648;
    *plVar13 = (longlong)
               &
               ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassOutput_____TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
    ;
    plVar16 = plVar13 + 2;
    *plVar16 = (longlong)local_5e8;
    plVar13[7] = (longlong)local_5c0;
    local_5c0 = (longlong *)0x0;
    plVar13[4] = local_5d8;
    plVar13[5] = lStack_5d0;
    plVar13[6] = local_5c8;
    if (*plVar16 != 0) {
      local_5e8 = (code *)0x0;
    }
    if (plVar16 != (longlong *)0x0) {
      local_508 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_*>
                  ::Call;
    }
    local_648 = (longlong)local_508;
    uStack_640 = uStack_500;
    local_638[2]._0_4_ = (undefined4)local_4f8[2];
    local_638[2]._4_4_ = local_4f8[2]._4_4_;
    plStack_620 = plVar13;
    local_638[0]._0_4_ = (undefined4)local_4f8[0];
    local_638[0]._4_4_ = local_4f8[0]._4_4_;
    local_638[1]._0_4_ = (undefined4)local_4f8[1];
    local_638[1]._4_4_ = local_4f8[1]._4_4_;
    local_508 = (code *)lVar11;
    uStack_500 = uVar9;
    local_4f8[0]._0_4_ = uVar3;
    local_4f8[0]._4_4_ = uVar4;
    local_4f8[1]._0_4_ = uVar5;
    local_4f8[1]._4_4_ = uVar6;
    if (lVar11 != 0) {
      plVar16 = local_4f8;
      if (plStack_4e0 != (longlong *)0x0) {
        plVar16 = plStack_4e0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_5e8 != (code *)0x0) {
      plVar16 = &local_5d8;
      if (local_5c0 != (longlong *)0x0) {
        plVar16 = local_5c0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable((void *)local_648);
    lVar11 = local_648;
    plVar16 = local_638;
    if (plStack_620 != (longlong *)0x0) {
      plVar16 = plStack_620;
    }
    uVar9 = (**(code **)(*plVar16 + 8))();
    local_658._0_8_ = (*(code *)lVar11)(uVar9);
    TAccessPtr<FMetasoundFrontendClassOutput_const_>::
    TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>
              (&local_158.OwningGraphClassOutputPtr,
               (TAccessPtr<FMetasoundFrontendClassOutput> *)local_658,Tag);
    if ((code *)local_648 != (code *)0x0) {
      plVar16 = local_638;
      if (plStack_620 != (longlong *)0x0) {
        plVar16 = plStack_620;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
              (&local_158.GraphPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
    local_158.OwningGraph.Object = local_718.Object;
    local_158.OwningGraph.SharedReferenceCount.ReferenceController =
         local_718.SharedReferenceCount.ReferenceController;
    if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOutputNodeController::CreateConstOutputNodeHandle(__return_storage_ptr__,&local_158);
    FOutputNodeController::FInitParams::~FInitParams(&local_158);
    if ((code *)local_578._16_8_ != (code *)0x0) {
      plVar16 = local_558;
      if (local_540 != (longlong *)0x0) {
        plVar16 = local_540;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    break;
  default:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                       ,0x913,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pTVar14 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar1)();
      return pTVar14;
    }
LAB_14ae3a9c0:
    if (local_6d8._16_8_ != 0) {
      plVar16 = (longlong *)(local_6d8 + 0x20);
      if ((longlong *)local_6d8._56_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_6d8._56_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_718.SharedReferenceCount.ReferenceController);
LAB_14ae3a9e7:
    pTVar15 = INodeController::GetInvalidHandle(&local_6e8);
    __return_storage_ptr__->Object = pTVar15->Object;
    pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    local_718.SharedReferenceCount.ReferenceController =
         local_6e8.SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_14ae3aa0d;
  case Variable:
  case VariableDeferredAccessor:
  case VariableAccessor:
  case VariableMutator:
    ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
              (&local_4d8.NodePtr,&param_1->Node);
    local_4d8.ClassPtr._0_8_ = *(undefined8 *)&param_1->Class;
    local_4d8.ClassPtr._16_8_ = *(undefined8 *)&(param_1->Class).field_0x10;
    local_4d8.ClassPtr._56_8_ = 0;
    if (local_4d8.ClassPtr._16_8_ != 0) {
      puVar10 = *(undefined8 **)&(param_1->Class).field_0x38;
      if (puVar10 != (undefined8 *)0x0) {
        puVar17 = puVar10;
      }
      (**(code **)*puVar17)(puVar17,&local_4d8.ClassPtr.field_0x20);
    }
    ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
              (&local_4d8.GraphPtr,(TAccessPtr<FMetasoundFrontendGraph_const_> *)local_6d8);
    local_4d8.OwningGraph.Object = local_718.Object;
    local_4d8.OwningGraph.SharedReferenceCount.ReferenceController =
         local_718.SharedReferenceCount.ReferenceController;
    if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVariableNodeController::CreateConstNodeHandle(__return_storage_ptr__,&local_4d8);
    FNodeController::FInitParams::~FInitParams(&local_4d8);
  }
  if (local_6d8._16_8_ != 0) {
    plVar16 = (longlong *)(local_6d8 + 0x20);
    if ((longlong *)local_6d8._56_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_6d8._56_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_14ae3aa0d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_718.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetNodeHandles @ 14ae3aa70

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetNodeHandles
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArrayView<Metasound::Frontend::FGraphController::FNodeAndClass_const_,int> *param_1)

{
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FNodeAndClass *pFVar8;
  FNodeAndClass *pFVar9;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  pFVar9 = param_1->DataPtr;
  pFVar8 = pFVar9 + param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    if (pFVar9 == pFVar8) {
      return __return_storage_ptr__;
    }
    GetNodeHandle(this,&local_18,pFVar9);
    cVar3 = (**(code **)(*(longlong *)local_18.Object + 0x18))();
    if (cVar3 != '\0') {
      pTVar1 = (TSharedRef<Metasound::Frontend::INodeController,1> *)
               (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pTVar1 <= &local_18) && (&local_18 < pTVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(INodeController **)pFVar7 = local_18.Object;
      *(TReferenceControllerBase<1> **)(pFVar7 + 8) =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// GetNodeHandles @ 14ae3abd0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodeHandles
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArrayView<Metasound::Frontend::FGraphController::FConstNodeAndClass_const_,int> *param_1)

{
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  FConstNodeAndClass *pFVar8;
  FConstNodeAndClass *pFVar9;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_18;
  
  pFVar9 = param_1->DataPtr;
  pFVar8 = pFVar9 + param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    if (pFVar9 == pFVar8) {
      return __return_storage_ptr__;
    }
    GetNodeHandle(this,&local_18,pFVar9);
    cVar3 = (**(code **)(*(longlong *)local_18.Object + 0x18))();
    if (cVar3 != '\0') {
      pTVar1 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)
               (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pTVar1 <= &local_18) && (&local_18 < pTVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(INodeController **)pFVar7 = local_18.Object;
      *(TReferenceControllerBase<1> **)(pFVar7 + 8) =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// GetNodeWithID @ 14ae3ad50

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeWithID
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  FGuid *local_res10 [3];
  code *local_18;
  FGuid **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetNodeWithID'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetNodeWithID @ 14ae3ad90

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetNodeWithID
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  FGuid *local_res10 [3];
  code *local_18;
  FGuid **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetNodeWithID'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetNodes @ 14ae3add0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> local_38;
  FNodeAndClass *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::Frontend::FGraphController::FNodeAndClass_const_,int> local_18;
  
  pTVar3 = GetNodesAndClasses(this,&local_38);
  local_28 = (FNodeAndClass *)(pTVar3->AllocatorInstance).Data;
  iStack_20 = pTVar3->ArrayNum;
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  GetNodeHandles(this,__return_storage_ptr__,&local_18);
  DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
            ((FNodeAndClass *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FNodeAndClass *)local_38.AllocatorInstance.Data != (FNodeAndClass *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNodesAndClasses @ 14ae3ae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae3b1bd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae3b1c1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodesAndClasses
          (FGraphController *this,
          TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IDocumentController *pIVar3;
  FScriptContainerElement *pFVar4;
  FGuid *pFVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar9;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar10;
  undefined8 uVar11;
  longlong lVar12;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  FGraphClassAccessPtr *this_02;
  FGuid *this_03;
  FGuid *this_04;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  FString local_1a0;
  FString local_190;
  undefined8 local_180;
  undefined8 local_178;
  FGraphController *local_170;
  FGuid *local_168;
  FGraphClassAccessPtr *local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  longlong local_148 [2];
  code *local_138;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [32];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_02 = &this->GraphClassPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_170 = this;
  local_160 = this_02;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar16 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar14 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar16 != (longlong *)0x0) {
    plVar14 = plVar16;
  }
  uVar8 = (**(code **)(*plVar14 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar8);
  *(FMetasoundFrontendGraphClass **)this_02 = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar9 = IDocumentBuilderRegistry::Get();
  if (pIVar9 != (IDocumentBuilderRegistry *)0x0) {
    local_180 = 0;
    local_178 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar9 + 8))(pIVar9,&this_00->_padding_,&local_180);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar10 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3af48;
    }
  }
  pFVar10 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae3af48:
  local_1a4 = (pFVar10->Nodes).ArrayNum;
  uVar15 = (ulonglong)(int)local_1a4;
  this_04 = (FGuid *)(pFVar10->Nodes).AllocatorInstance.Data;
  this_03 = this_04 + 1;
  local_168 = (FGuid *)((longlong)this_04 + uVar15 * 0x88);
  while( true ) {
    pFVar5 = local_168;
    if ((pFVar10->Nodes).ArrayNum != (int)uVar15) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_04 == pFVar5) break;
    FGraphClassAccessPtr::GetNodeWithNodeID(this_02,(FNodeAccessPtr *)local_88,this_04);
    local_158 = this_03->A;
    uStack_154 = this_03->B;
    uStack_150 = this_03->C;
    uStack_14c = this_03->D;
    pIVar3 = (local_170->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar3 + 0x60))(pIVar3,local_c8);
    UE::Core::Private::Function::CheckCallable((void *)local_88._16_8_);
    uVar8 = local_88._16_8_;
    plVar16 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar16 = local_50;
    }
    uVar11 = (**(code **)(*plVar16 + 8))();
    lVar12 = (*(code *)uVar8)(uVar11);
    local_88._0_8_ = lVar12;
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar2 = local_b8;
    plVar16 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar16 = local_90;
    }
    uVar8 = (**(code **)(*plVar16 + 8))();
    local_c8[0] = (*pcVar2)(uVar8);
    if ((lVar12 == 0) || (local_c8[0] == 0)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_190,Digits);
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_04,&local_1a0,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_148[0] = local_88._0_8_;
      local_138 = (code *)local_88._16_8_;
      local_110 = (longlong *)0x0;
      if ((code *)local_88._16_8_ != (code *)0x0) {
        plVar16 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar16 = local_50;
        }
        (**(code **)*plVar16)(plVar16,&local_128);
      }
      local_108 = local_c8[0];
      local_f8 = local_b8;
      local_d0 = 0;
      if (local_b8 != (code *)0x0) {
        plVar16 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar16 = local_90;
        }
        (**(code **)*plVar16)(plVar16,&local_e8);
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_148) &&
         ((FScriptContainerElement *)local_148 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x80)) {
        local_1c0 = (longlong)__return_storage_ptr__->ArrayNum;
        local_1b8 = 0x80;
        local_1d8 = local_148;
        local_1d0 = pFVar4;
        local_1c8 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          pTVar13 = (TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_>
                     *)(*pcVar2)();
          return pTVar13;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1080,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      lVar12 = (longlong)iVar7 * 0x80;
      *(longlong *)(pFVar4 + lVar12) = local_148[0];
      *(code **)(pFVar4 + lVar12 + 0x10) = local_138;
      *(longlong **)(pFVar4 + lVar12 + 0x38) = local_110;
      local_110 = (longlong *)0x0;
      *(longlong *)(pFVar4 + lVar12 + 0x20) = local_128;
      *(undefined8 *)(pFVar4 + lVar12 + 0x20 + 8) = uStack_120;
      *(undefined8 *)(pFVar4 + lVar12 + 0x30) = local_118;
      if (*(longlong *)(pFVar4 + lVar12 + 0x10) != 0) {
        local_138 = (code *)0x0;
      }
      *(longlong *)(pFVar4 + lVar12 + 0x40) = local_108;
      *(code **)(pFVar4 + lVar12 + 0x50) = local_f8;
      *(undefined8 *)(pFVar4 + lVar12 + 0x78) = local_d0;
      local_d0 = 0;
      pFVar1 = pFVar4 + lVar12 + 0x60;
      *(undefined4 *)pFVar1 = local_e8;
      *(undefined4 *)(pFVar1 + 4) = uStack_e4;
      *(undefined4 *)(pFVar1 + 8) = uStack_e0;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_dc;
      *(undefined8 *)(pFVar4 + lVar12 + 0x70) = local_d8;
      if (*(longlong *)(pFVar4 + lVar12 + 0x50) == 0) {
        if (local_f8 != (code *)0x0) {
          (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
        }
      }
      else {
        local_f8 = (code *)0x0;
      }
      if (local_138 != (code *)0x0) {
        plVar16 = &local_128;
        if (local_110 != (longlong *)0x0) {
          plVar16 = local_110;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
    }
    if (local_b8 != (code *)0x0) {
      plVar16 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar16 = local_90;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((code *)local_88._16_8_ != (code *)0x0) {
      plVar16 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar16 = local_50;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    this_04 = (FGuid *)&this_04[8].C;
    uVar15 = (ulonglong)local_1a4;
    this_03 = (FGuid *)&this_03[8].C;
    this_02 = local_160;
  }
  return __return_storage_ptr__;
}

// GetNodesAndClasses @ 14ae3b320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae3b65d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae3b661 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodesAndClasses
          (FGraphController *this,
          TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IDocumentController *pIVar3;
  FScriptContainerElement *pFVar4;
  FGuid *pFVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar9;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar10;
  undefined8 uVar11;
  longlong lVar12;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  *pTVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  FGraphClassAccessPtr *this_02;
  FGuid *this_03;
  FGuid *this_04;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  FString local_1a0;
  FString local_190;
  undefined8 local_180;
  undefined8 local_178;
  FGraphController *local_170;
  FGuid *local_168;
  FGraphClassAccessPtr *local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  longlong local_148 [2];
  code *local_138;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [32];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_02 = &this->GraphClassPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_170 = this;
  local_160 = this_02;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar16 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar14 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar16 != (longlong *)0x0) {
    plVar14 = plVar16;
  }
  uVar8 = (**(code **)(*plVar14 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar8);
  *(FMetasoundFrontendGraphClass **)this_02 = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar9 = IDocumentBuilderRegistry::Get();
  if (pIVar9 != (IDocumentBuilderRegistry *)0x0) {
    local_180 = 0;
    local_178 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar9 + 8))(pIVar9,&this_00->_padding_,&local_180);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar10 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3b3e8;
    }
  }
  pFVar10 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_00);
LAB_14ae3b3e8:
  local_1a4 = (pFVar10->Nodes).ArrayNum;
  uVar15 = (ulonglong)(int)local_1a4;
  this_04 = (FGuid *)(pFVar10->Nodes).AllocatorInstance.Data;
  this_03 = this_04 + 1;
  local_168 = (FGuid *)((longlong)this_04 + uVar15 * 0x88);
  while( true ) {
    pFVar5 = local_168;
    if ((pFVar10->Nodes).ArrayNum != (int)uVar15) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_04 == pFVar5) break;
    FGraphClassAccessPtr::GetNodeWithNodeID(this_02,(FConstNodeAccessPtr *)local_88,this_04);
    local_158 = this_03->A;
    uStack_154 = this_03->B;
    uStack_150 = this_03->C;
    uStack_14c = this_03->D;
    pIVar3 = (local_170->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar3 + 0x60))(pIVar3,local_c8);
    UE::Core::Private::Function::CheckCallable((void *)local_88._16_8_);
    uVar8 = local_88._16_8_;
    plVar16 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar16 = local_50;
    }
    uVar11 = (**(code **)(*plVar16 + 8))();
    lVar12 = (*(code *)uVar8)(uVar11);
    local_88._0_8_ = lVar12;
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar2 = local_b8;
    plVar16 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar16 = local_90;
    }
    uVar8 = (**(code **)(*plVar16 + 8))();
    local_c8[0] = (*pcVar2)(uVar8);
    if ((lVar12 == 0) || (local_c8[0] == 0)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_190,Digits);
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_04,&local_1a0,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_148[0] = local_88._0_8_;
      local_138 = (code *)local_88._16_8_;
      local_110 = (longlong *)0x0;
      if ((code *)local_88._16_8_ != (code *)0x0) {
        plVar16 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar16 = local_50;
        }
        (**(code **)*plVar16)(plVar16,&local_128);
      }
      local_108 = local_c8[0];
      local_f8 = local_b8;
      local_d0 = 0;
      if (local_b8 != (code *)0x0) {
        plVar16 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar16 = local_90;
        }
        (**(code **)*plVar16)(plVar16,&local_e8);
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_148) &&
         ((FScriptContainerElement *)local_148 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x80)) {
        local_1c0 = (longlong)__return_storage_ptr__->ArrayNum;
        local_1b8 = 0x80;
        local_1d8 = local_148;
        local_1d0 = pFVar4;
        local_1c8 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          pTVar13 = (TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
                     *)(*pcVar2)();
          return pTVar13;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1080,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      lVar12 = (longlong)iVar7 * 0x80;
      *(longlong *)(pFVar4 + lVar12) = local_148[0];
      *(code **)(pFVar4 + lVar12 + 0x10) = local_138;
      *(longlong **)(pFVar4 + lVar12 + 0x38) = local_110;
      local_110 = (longlong *)0x0;
      *(longlong *)(pFVar4 + lVar12 + 0x20) = local_128;
      *(undefined8 *)(pFVar4 + lVar12 + 0x20 + 8) = uStack_120;
      *(undefined8 *)(pFVar4 + lVar12 + 0x30) = local_118;
      if (*(longlong *)(pFVar4 + lVar12 + 0x10) != 0) {
        local_138 = (code *)0x0;
      }
      *(longlong *)(pFVar4 + lVar12 + 0x40) = local_108;
      *(code **)(pFVar4 + lVar12 + 0x50) = local_f8;
      *(undefined8 *)(pFVar4 + lVar12 + 0x78) = local_d0;
      local_d0 = 0;
      pFVar1 = pFVar4 + lVar12 + 0x60;
      *(undefined4 *)pFVar1 = local_e8;
      *(undefined4 *)(pFVar1 + 4) = uStack_e4;
      *(undefined4 *)(pFVar1 + 8) = uStack_e0;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_dc;
      *(undefined8 *)(pFVar4 + lVar12 + 0x70) = local_d8;
      if (*(longlong *)(pFVar4 + lVar12 + 0x50) == 0) {
        if (local_f8 != (code *)0x0) {
          (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
        }
      }
      else {
        local_f8 = (code *)0x0;
      }
      if (local_138 != (code *)0x0) {
        plVar16 = &local_128;
        if (local_110 != (longlong *)0x0) {
          plVar16 = local_110;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
    }
    if (local_b8 != (code *)0x0) {
      plVar16 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar16 = local_90;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((code *)local_88._16_8_ != (code *)0x0) {
      plVar16 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar16 = local_50;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    this_04 = (FGuid *)&this_04[8].C;
    uVar15 = (ulonglong)local_1a4;
    this_03 = (FGuid *)&this_03[8].C;
    this_02 = local_160;
  }
  return __return_storage_ptr__;
}

// GetNodesAndClassesByPredicate @ 14ae3b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae3bacc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae3bad0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodesAndClassesByPredicate
          (FGraphController *this,
          TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  code *pcVar1;
  IDocumentController *pIVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar7;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar8;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FGuid *this_02;
  FGuid *pFVar14;
  FGuid *this_03;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  FString local_1a0;
  FString local_190;
  FGraphController *local_180;
  undefined8 local_178;
  undefined8 local_170;
  TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
  *local_168;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [56];
  longlong *local_110;
  longlong local_108;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_180 = this;
  local_168 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar12 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar1 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar12 != (longlong *)0x0) {
    plVar10 = plVar12;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar1)(uVar6);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar7 = IDocumentBuilderRegistry::Get();
  if (pIVar7 != (IDocumentBuilderRegistry *)0x0) {
    local_178 = 0;
    local_170 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&this_00->_padding_,&local_178);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar8 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3b887;
    }
  }
  pFVar8 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae3b887:
  local_1a4 = (pFVar8->Nodes).ArrayNum;
  uVar11 = (ulonglong)(int)local_1a4;
  this_02 = (FGuid *)(pFVar8->Nodes).AllocatorInstance.Data;
  this_03 = this_02 + 1;
  pFVar14 = (FGuid *)((longlong)this_02 + uVar11 * 0x88);
  while( true ) {
    if ((pFVar8->Nodes).ArrayNum != (int)uVar11) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_02 == pFVar14) break;
    local_158 = this_03->A;
    uStack_154 = this_03->B;
    uStack_150 = this_03->C;
    uStack_14c = this_03->D;
    pIVar2 = (local_180->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_c8);
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar1 = local_b8;
    plVar12 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar12 = local_90;
    }
    uVar6 = (**(code **)(*plVar12 + 8))();
    local_c8[0] = (*pcVar1)(uVar6);
    if (local_c8[0] == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_190,Digits);
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_02,&local_1a0,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      cVar3 = (**(code **)local_168)(*(undefined8 *)&local_168->field_0x8,local_c8[0],this_02);
      if (cVar3 != '\0') {
        FGraphClassAccessPtr::GetNodeWithNodeID
                  (&local_180->GraphClassPtr,(FNodeAccessPtr *)local_88,this_02);
        local_148._0_8_ = local_88._0_8_;
        local_148._16_8_ = local_88._16_8_;
        local_110 = (longlong *)0x0;
        if (local_88._16_8_ != 0) {
          plVar12 = (longlong *)(local_88 + 0x20);
          if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_88._56_8_;
          }
          (**(code **)*plVar12)(plVar12,local_148 + 0x20);
        }
        local_108 = local_c8[0];
        local_f8 = local_b8;
        local_d0 = 0;
        if (local_b8 != (code *)0x0) {
          plVar12 = local_a8;
          if (local_90 != (longlong *)0x0) {
            plVar12 = local_90;
          }
          (**(code **)*plVar12)(plVar12,&local_e8);
        }
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar13 <= (FScriptContainerElement *)local_148) &&
           ((FScriptContainerElement *)local_148 <
            pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x80)) {
          local_1c0 = (longlong)__return_storage_ptr__->ArrayNum;
          local_1b8 = 0x80;
          local_1d8 = local_148;
          local_1d0 = pFVar13;
          local_1c8 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pTVar9 = (TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_>
                      *)(*pcVar1)();
            return pTVar9;
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x80;
        *(undefined8 *)pFVar13 = local_148._0_8_;
        *(undefined8 *)(pFVar13 + 0x10) = local_148._16_8_;
        *(longlong **)(pFVar13 + 0x38) = local_110;
        local_110 = (longlong *)0x0;
        *(undefined8 *)(pFVar13 + 0x20) = local_148._32_8_;
        *(undefined8 *)(pFVar13 + 0x28) = local_148._40_8_;
        *(undefined8 *)(pFVar13 + 0x30) = local_148._48_8_;
        if (*(longlong *)(pFVar13 + 0x10) != 0) {
          local_148._16_8_ = 0;
        }
        *(longlong *)(pFVar13 + 0x40) = local_108;
        *(code **)(pFVar13 + 0x50) = local_f8;
        *(undefined8 *)(pFVar13 + 0x78) = local_d0;
        local_d0 = 0;
        *(undefined4 *)(pFVar13 + 0x60) = local_e8;
        *(undefined4 *)(pFVar13 + 100) = uStack_e4;
        *(undefined4 *)(pFVar13 + 0x68) = uStack_e0;
        *(undefined4 *)(pFVar13 + 0x6c) = uStack_dc;
        *(undefined8 *)(pFVar13 + 0x70) = local_d8;
        if (*(longlong *)(pFVar13 + 0x50) == 0) {
          if (local_f8 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
          }
        }
        else {
          local_f8 = (code *)0x0;
        }
        if (local_148._16_8_ != 0) {
          plVar12 = (longlong *)(local_148 + 0x20);
          if (local_110 != (longlong *)0x0) {
            plVar12 = local_110;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (local_88._16_8_ != 0) {
          plVar12 = (longlong *)(local_88 + 0x20);
          if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_88._56_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
    if (local_b8 != (code *)0x0) {
      plVar12 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar12 = local_90;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    uVar11 = (ulonglong)local_1a4;
    this_02 = (FGuid *)&this_02[8].C;
    this_03 = (FGuid *)&this_03[8].C;
  }
  return __return_storage_ptr__;
}

// GetNodesAndClassesByPredicate @ 14ae3bc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae3bf3c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae3bf40 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodesAndClassesByPredicate
          (FGraphController *this,
          TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  code *pcVar1;
  IDocumentController *pIVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar7;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar8;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  *pTVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FGuid *this_02;
  FGuid *pFVar14;
  FGuid *this_03;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  FString local_1a0;
  FString local_190;
  FGraphController *local_180;
  undefined8 local_178;
  undefined8 local_170;
  TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
  *local_168;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [56];
  longlong *local_110;
  longlong local_108;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_180 = this;
  local_168 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar12 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar1 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar12 != (longlong *)0x0) {
    plVar10 = plVar12;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar1)(uVar6);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar7 = IDocumentBuilderRegistry::Get();
  if (pIVar7 != (IDocumentBuilderRegistry *)0x0) {
    local_178 = 0;
    local_170 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&this_00->_padding_,&local_178);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar8 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3bcf7;
    }
  }
  pFVar8 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_00);
LAB_14ae3bcf7:
  local_1a4 = (pFVar8->Nodes).ArrayNum;
  uVar11 = (ulonglong)(int)local_1a4;
  this_02 = (FGuid *)(pFVar8->Nodes).AllocatorInstance.Data;
  this_03 = this_02 + 1;
  pFVar14 = (FGuid *)((longlong)this_02 + uVar11 * 0x88);
  while( true ) {
    if ((pFVar8->Nodes).ArrayNum != (int)uVar11) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_02 == pFVar14) break;
    local_158 = this_03->A;
    uStack_154 = this_03->B;
    uStack_150 = this_03->C;
    uStack_14c = this_03->D;
    pIVar2 = (local_180->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_c8);
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar1 = local_b8;
    plVar12 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar12 = local_90;
    }
    uVar6 = (**(code **)(*plVar12 + 8))();
    local_c8[0] = (*pcVar1)(uVar6);
    if (local_c8[0] == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_190,Digits);
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_02,&local_1a0,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      cVar3 = (**(code **)local_168)(*(undefined8 *)&local_168->field_0x8,local_c8[0],this_02);
      if (cVar3 != '\0') {
        FGraphClassAccessPtr::GetNodeWithNodeID
                  (&local_180->GraphClassPtr,(FConstNodeAccessPtr *)local_88,this_02);
        local_148._0_8_ = local_88._0_8_;
        local_148._16_8_ = local_88._16_8_;
        local_110 = (longlong *)0x0;
        if (local_88._16_8_ != 0) {
          plVar12 = (longlong *)(local_88 + 0x20);
          if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_88._56_8_;
          }
          (**(code **)*plVar12)(plVar12,local_148 + 0x20);
        }
        local_108 = local_c8[0];
        local_f8 = local_b8;
        local_d0 = 0;
        if (local_b8 != (code *)0x0) {
          plVar12 = local_a8;
          if (local_90 != (longlong *)0x0) {
            plVar12 = local_90;
          }
          (**(code **)*plVar12)(plVar12,&local_e8);
        }
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar13 <= (FScriptContainerElement *)local_148) &&
           ((FScriptContainerElement *)local_148 <
            pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x80)) {
          local_1c0 = (longlong)__return_storage_ptr__->ArrayNum;
          local_1b8 = 0x80;
          local_1d8 = local_148;
          local_1d0 = pFVar13;
          local_1c8 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pTVar9 = (TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
                      *)(*pcVar1)();
            return pTVar9;
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x80;
        *(undefined8 *)pFVar13 = local_148._0_8_;
        *(undefined8 *)(pFVar13 + 0x10) = local_148._16_8_;
        *(longlong **)(pFVar13 + 0x38) = local_110;
        local_110 = (longlong *)0x0;
        *(undefined8 *)(pFVar13 + 0x20) = local_148._32_8_;
        *(undefined8 *)(pFVar13 + 0x28) = local_148._40_8_;
        *(undefined8 *)(pFVar13 + 0x30) = local_148._48_8_;
        if (*(longlong *)(pFVar13 + 0x10) != 0) {
          local_148._16_8_ = 0;
        }
        *(longlong *)(pFVar13 + 0x40) = local_108;
        *(code **)(pFVar13 + 0x50) = local_f8;
        *(undefined8 *)(pFVar13 + 0x78) = local_d0;
        local_d0 = 0;
        *(undefined4 *)(pFVar13 + 0x60) = local_e8;
        *(undefined4 *)(pFVar13 + 100) = uStack_e4;
        *(undefined4 *)(pFVar13 + 0x68) = uStack_e0;
        *(undefined4 *)(pFVar13 + 0x6c) = uStack_dc;
        *(undefined8 *)(pFVar13 + 0x70) = local_d8;
        if (*(longlong *)(pFVar13 + 0x50) == 0) {
          if (local_f8 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
          }
        }
        else {
          local_f8 = (code *)0x0;
        }
        if (local_148._16_8_ != 0) {
          plVar12 = (longlong *)(local_148 + 0x20);
          if (local_110 != (longlong *)0x0) {
            plVar12 = local_110;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (local_88._16_8_ != 0) {
          plVar12 = (longlong *)(local_88 + 0x20);
          if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_88._56_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
    if (local_b8 != (code *)0x0) {
      plVar12 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar12 = local_90;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    uVar11 = (ulonglong)local_1a4;
    this_02 = (FGuid *)&this_02[8].C;
    this_03 = (FGuid *)&this_03[8].C;
  }
  return __return_storage_ptr__;
}

// GetNodesByPredicate @ 14ae3c0a0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetNodesByPredicate
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> local_48;
  TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
  local_38;
  FNodeAndClass *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::Frontend::FGraphController::FNodeAndClass_const_,int> local_18;
  
  local_38._0_8_ = *(undefined8 *)param_1;
  local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
  pTVar3 = GetNodesAndClassesByPredicate(this,&local_48,&local_38);
  local_28 = (FNodeAndClass *)(pTVar3->AllocatorInstance).Data;
  iStack_20 = pTVar3->ArrayNum;
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  GetNodeHandles(this,__return_storage_ptr__,&local_18);
  DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
            ((FNodeAndClass *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FNodeAndClass *)local_48.AllocatorInstance.Data != (FNodeAndClass *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNodesByPredicate @ 14ae3c160

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetNodesByPredicate
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<Metasound::Frontend::FGraphController::FConstNodeAndClass,TSizedDefaultAllocator<32>_>
  local_48;
  TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
  local_38;
  FConstNodeAndClass *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::Frontend::FGraphController::FConstNodeAndClass_const_,int> local_18;
  
  local_38._0_8_ = *(undefined8 *)param_1;
  local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
  pTVar3 = GetNodesAndClassesByPredicate(this,&local_48,&local_38);
  local_28 = (FConstNodeAndClass *)(pTVar3->AllocatorInstance).Data;
  iStack_20 = pTVar3->ArrayNum;
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  GetNodeHandles(this,__return_storage_ptr__,&local_18);
  DestructItems<Metasound::Frontend::FGraphController::FConstNodeAndClass,int>
            ((FConstNodeAndClass *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FConstNodeAndClass *)local_48.AllocatorInstance.Data != (FConstNodeAndClass *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOutputNodeWithName @ 14ae3c640

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FGraphController::GetOutputNodeWithName
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1)

{
  FName *local_res10 [3];
  code *local_18;
  FName **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetOutputNodeWithName'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetOutputNodeWithName @ 14ae3c680

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetOutputNodeWithName
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  FName *local_res10 [3];
  code *local_18;
  FName **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetOutputNodeWithName'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res10[0] = param_1;
  GetNodeByPredicate(this,__return_storage_ptr__,
                     (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_18);
  return __return_storage_ptr__;
}

// GetOutputNodes @ 14ae3c6c0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetOutputNodes
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::GetOutputNodes'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  GetNodesByPredicate(this,__return_storage_ptr__,
                      (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                       *)&local_18);
  return __return_storage_ptr__;
}

// GetOutputVertexNames @ 14ae3c700

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FGraphController::GetOutputVertexNames
          (FGraphController *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar10 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar3)(uVar7);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar8 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    iVar1 = (pFVar8->Outputs).ArrayNum;
    pFVar12 = (pFVar8->Outputs).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (longlong)iVar1 * 0x34;
    while( true ) {
      if ((pFVar8->Outputs).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar12) &&
          (pFVar12 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      uVar7 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0x34;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           uVar7;
    }
  }
  return __return_storage_ptr__;
}

// GetOwningDocument @ 14ae3c850

TSharedRef<Metasound::Frontend::IDocumentController,1> * __thiscall
Metasound::Frontend::FGraphController::GetOwningDocument
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningDocument).Object;
  pTVar1 = (this->OwningDocument).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningDocument @ 14ae3c880

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __thiscall
Metasound::Frontend::FGraphController::GetOwningDocument
          (FGraphController *this,
          TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningDocument).Object;
  pTVar1 = (this->OwningDocument).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPreferredLiteralTypeForInputVertex @ 14ae3cb00

ELiteralType __thiscall
Metasound::Frontend::FGraphController::GetPreferredLiteralTypeForInputVertex
          (FGraphController *this,FName *param_1)

{
  ELiteralType EVar1;
  longlong lVar2;
  IDataTypeRegistry *pIVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x238))();
  if (lVar2 != 0) {
    pIVar3 = IDataTypeRegistry::Get();
                    /* WARNING: Could not recover jumptable at 0x00014ae3cb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)((longlong)*pIVar3 + 0x48))
                      (pIVar3,lVar2 + 8,*(code **)((longlong)*pIVar3 + 0x48));
    return EVar1;
  }
  return Invalid;
}

// GetSupportedClassForInputVertex @ 14ae3d590

UClass * __thiscall
Metasound::Frontend::FGraphController::GetSupportedClassForInputVertex
          (FGraphController *this,FName *param_1)

{
  FMetasoundFrontendClassInput *pFVar1;
  IDataTypeRegistry *pIVar2;
  UClass *pUVar3;
  
  pFVar1 = FindInputDescriptionWithName(this,param_1);
  if (pFVar1 != (FMetasoundFrontendClassInput *)0x0) {
    pIVar2 = IDataTypeRegistry::Get();
                    /* WARNING: Could not recover jumptable at 0x00014ae3d5bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UClass *)
             (**(code **)((longlong)*pIVar2 + 0x70))
                       (pIVar2,&pFVar1->_padding_,*(code **)((longlong)*pIVar2 + 0x70));
    return pUVar3;
  }
  return (UClass *)0x0;
}

// GetVariables @ 14ae3d860

TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetVariables
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar8;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_>
  *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar12 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar12 = plVar2;
  }
  uVar7 = (**(code **)(*plVar12 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar3)(uVar7);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar8 = IDocumentBuilderRegistry::Get();
  if (pIVar8 != (IDocumentBuilderRegistry *)0x0) {
    local_48 = 0;
    local_40 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar8 + 8))(pIVar8,&this_00->_padding_,&local_48);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar9 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3d90b;
    }
  }
  pFVar9 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_00);
LAB_14ae3d90b:
  iVar1 = (pFVar9->Variables).ArrayNum;
  pFVar14 = (pFVar9->Variables).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if ((pFVar9->Variables).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVariable_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    pFVar10 = (FScriptContainerElement *)
              (**(code **)(this->_padding_ + 0xc0))(this,local_38,pFVar14 + 0x68);
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar13 <= pFVar10) &&
        (pFVar10 < pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar11;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar13 = *(undefined8 *)pFVar10;
    lVar4 = *(longlong *)(pFVar10 + 8);
    *(longlong *)(pFVar13 + 8) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    pFVar14 = pFVar14 + 0xb8;
  }
  return __return_storage_ptr__;
}

// GetVariables @ 14ae3da50

TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FGraphController::GetVariables
          (FGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar8;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar12 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar12 = plVar2;
  }
  uVar7 = (**(code **)(*plVar12 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar3)(uVar7);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return __return_storage_ptr__;
  }
  pIVar8 = IDocumentBuilderRegistry::Get();
  if (pIVar8 != (IDocumentBuilderRegistry *)0x0) {
    local_48 = 0;
    local_40 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar8 + 8))(pIVar8,&this_00->_padding_,&local_48);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar9 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae3dafb;
    }
  }
  pFVar9 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_00);
LAB_14ae3dafb:
  iVar1 = (pFVar9->Variables).ArrayNum;
  pFVar14 = (pFVar9->Variables).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if ((pFVar9->Variables).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVariable_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    pFVar10 = (FScriptContainerElement *)
              (**(code **)(this->_padding_ + 0xb8))(this,local_38,pFVar14 + 0x68);
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar13 <= pFVar10) &&
        (pFVar10 < pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar11;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar13 = *(undefined8 *)pFVar10;
    lVar4 = *(longlong *)(pFVar10 + 8);
    *(longlong *)(pFVar13 + 8) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    pFVar14 = pFVar14 + 0xb8;
  }
  return __return_storage_ptr__;
}

// GetVertexIDForInputVertex @ 14ae3de60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FGraphController::GetVertexIDForInputVertex
          (FGraphController *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x160))(this,local_68);
  UE::Core::Private::Function::CheckCallable((void *)plVar2[2]);
  pcVar1 = (code *)plVar2[2];
  plVar5 = plVar2 + 4;
  if ((longlong *)plVar2[7] != (longlong *)0x0) {
    plVar5 = (longlong *)plVar2[7];
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar1)(uVar3);
  *plVar2 = lVar4;
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (lVar4 == 0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 0x10);
    uVar7 = *(uint *)(lVar4 + 0x14);
    uVar8 = *(uint *)(lVar4 + 0x18);
    uVar9 = *(uint *)(lVar4 + 0x1c);
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// GetVertexIDForOutputVertex @ 14ae3df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FGraphController::GetVertexIDForOutputVertex
          (FGraphController *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x168))(this,local_68);
  UE::Core::Private::Function::CheckCallable((void *)plVar2[2]);
  pcVar1 = (code *)plVar2[2];
  plVar5 = plVar2 + 4;
  if ((longlong *)plVar2[7] != (longlong *)0x0) {
    plVar5 = (longlong *)plVar2[7];
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar1)(uVar3);
  *plVar2 = lVar4;
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (lVar4 == 0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 0x10);
    uVar7 = *(uint *)(lVar4 + 0x14);
    uVar8 = *(uint *)(lVar4 + 0x18);
    uVar9 = *(uint *)(lVar4 + 0x1c);
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// IsValid @ 14ae3f7c0

bool __thiscall Metasound::Frontend::FGraphController::IsValid(FGraphController *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar6 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar2)(uVar4);
  *(longlong *)&this->GraphClassPtr = lVar5;
  if (lVar5 != 0) {
    cVar3 = (**(code **)(*(longlong *)(this->OwningDocument).Object + 0x18))();
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// IterateConstNodes @ 14ae3f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FGraphController::IterateConstNodes
          (FGraphController *this,
          TFunctionRef<void___cdecl(TSharedRef<Metasound::Frontend::INodeController_const_,1>)>
          *param_1,EMetasoundFrontendClassType param_2)

{
  code *pcVar1;
  IDocumentController *pIVar2;
  FGraphController *this_00;
  EMetasoundFrontendClassType EVar3;
  FMetasoundFrontendGraphClass *this_01;
  IDocumentBuilderRegistry *pIVar4;
  FMetaSoundFrontendDocumentBuilder *this_02;
  FMetasoundFrontendGraph *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FGuid *this_03;
  FGuid *this_04;
  FGuid *pFVar10;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  FString local_1a0;
  uint local_190;
  FString local_188;
  FGraphController *local_178;
  INodeController *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_158;
  longlong local_148 [2];
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [56];
  longlong *local_90;
  longlong local_88;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_178 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar9 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar1 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar7 = plVar9;
  }
  (**(code **)(*plVar7 + 8))();
  this_01 = (FMetasoundFrontendGraphClass *)(*pcVar1)();
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_01;
  if (this_01 == (FMetasoundFrontendGraphClass *)0x0) {
    return;
  }
  pIVar4 = IDocumentBuilderRegistry::Get();
  if (pIVar4 != (IDocumentBuilderRegistry *)0x0) {
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    this_02 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&this_01->_padding_,&local_1a0);
    if (this_02 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar5 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_02);
      goto LAB_14ae3f9e9;
    }
  }
  pFVar5 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_01);
LAB_14ae3f9e9:
  local_190 = (pFVar5->Nodes).ArrayNum;
  uVar8 = (ulonglong)(int)local_190;
  this_04 = (FGuid *)(pFVar5->Nodes).AllocatorInstance.Data;
  this_03 = this_04 + 1;
  pFVar10 = (FGuid *)((longlong)this_04 + uVar8 * 0x88);
  while( true ) {
    if ((pFVar5->Nodes).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_04 == pFVar10) break;
    local_168 = *(INodeController **)this_03;
    pTStack_160 = *(TReferenceControllerBase<1> **)&this_03->C;
    pIVar2 = (local_178->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_148);
    UE::Core::Private::Function::CheckCallable(local_138);
    pcVar1 = local_138;
    plVar9 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar9 = local_110;
    }
    uVar6 = (**(code **)(*plVar9 + 8))();
    local_148[0] = (*pcVar1)(uVar6);
    if (local_148[0] == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_1a0,Digits);
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        FGuid::AppendString(this_04,&local_188,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((param_2 == Invalid) ||
            (EVar3 = FMetasoundFrontendClassMetadata::GetType
                               ((FMetasoundFrontendClassMetadata *)(local_148[0] + 0x18)),
            EVar3 == param_2)) {
      this_00 = local_178;
      FGraphClassAccessPtr::GetNodeWithNodeID
                (&local_178->GraphClassPtr,(FConstNodeAccessPtr *)local_108,this_04);
      local_c8._0_8_ = local_108._0_8_;
      local_c8._16_8_ = local_108._16_8_;
      local_90 = (longlong *)0x0;
      if (local_108._16_8_ != 0) {
        plVar9 = (longlong *)(local_108 + 0x20);
        if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_108._56_8_;
        }
        (**(code **)*plVar9)(plVar9,local_c8 + 0x20);
      }
      local_88 = local_148[0];
      local_78 = local_138;
      local_50 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        plVar9 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar9 = local_110;
        }
        (**(code **)*plVar9)(plVar9,local_68);
      }
      GetNodeHandle(this_00,&local_158,(FConstNodeAndClass *)local_c8);
      if (local_78 != (code *)0x0) {
        plVar9 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar9 = local_50;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if (local_90 != (longlong *)0x0) {
          plVar9 = local_90;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_168 = local_158.Object;
      pTStack_160 = local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_160);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      if (local_108._16_8_ != 0) {
        plVar9 = (longlong *)(local_108 + 0x20);
        if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_108._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    if (local_138 != (code *)0x0) {
      plVar9 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar9 = local_110;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar8 = (ulonglong)local_190;
    this_04 = (FGuid *)&this_04[8].C;
    this_03 = (FGuid *)&this_03[8].C;
  }
  return;
}

// IterateNodes @ 14ae3ff50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FGraphController::IterateNodes
          (FGraphController *this,
          TFunctionRef<void___cdecl(TSharedRef<Metasound::Frontend::INodeController,1>)> *param_1,
          EMetasoundFrontendClassType param_2)

{
  code *pcVar1;
  IDocumentController *pIVar2;
  FGraphController *this_00;
  EMetasoundFrontendClassType EVar3;
  FMetasoundFrontendGraphClass *this_01;
  IDocumentBuilderRegistry *pIVar4;
  FMetaSoundFrontendDocumentBuilder *this_02;
  FMetasoundFrontendGraph *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FGuid *this_03;
  FGuid *this_04;
  FGuid *pFVar10;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  FString local_1a0;
  uint local_190;
  FString local_188;
  FGraphController *local_178;
  INodeController *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  TSharedRef<Metasound::Frontend::INodeController,1> local_158;
  longlong local_148 [2];
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [56];
  longlong *local_90;
  longlong local_88;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_178 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar9 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar1 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar7 = plVar9;
  }
  (**(code **)(*plVar7 + 8))();
  this_01 = (FMetasoundFrontendGraphClass *)(*pcVar1)();
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_01;
  if (this_01 == (FMetasoundFrontendGraphClass *)0x0) {
    return;
  }
  pIVar4 = IDocumentBuilderRegistry::Get();
  if (pIVar4 != (IDocumentBuilderRegistry *)0x0) {
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    this_02 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&this_01->_padding_,&local_1a0);
    if (this_02 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar5 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_02);
      goto LAB_14ae40019;
    }
  }
  pFVar5 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_01);
LAB_14ae40019:
  local_190 = (pFVar5->Nodes).ArrayNum;
  uVar8 = (ulonglong)(int)local_190;
  this_04 = (FGuid *)(pFVar5->Nodes).AllocatorInstance.Data;
  this_03 = this_04 + 1;
  pFVar10 = (FGuid *)((longlong)this_04 + uVar8 * 0x88);
  while( true ) {
    if ((pFVar5->Nodes).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (this_04 == pFVar10) break;
    local_168 = *(INodeController **)this_03;
    pTStack_160 = *(TReferenceControllerBase<1> **)&this_03->C;
    pIVar2 = (local_178->OwningDocument).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_148);
    UE::Core::Private::Function::CheckCallable(local_138);
    pcVar1 = local_138;
    plVar9 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar9 = local_110;
    }
    uVar6 = (**(code **)(*plVar9 + 8))();
    local_148[0] = (*pcVar1)(uVar6);
    if (local_148[0] == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FGuid::AppendString(this_03,&local_1a0,Digits);
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        FGuid::AppendString(this_04,&local_188,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((param_2 == Invalid) ||
            (EVar3 = FMetasoundFrontendClassMetadata::GetType
                               ((FMetasoundFrontendClassMetadata *)(local_148[0] + 0x18)),
            EVar3 == param_2)) {
      this_00 = local_178;
      FGraphClassAccessPtr::GetNodeWithNodeID
                (&local_178->GraphClassPtr,(FNodeAccessPtr *)local_108,this_04);
      local_c8._0_8_ = local_108._0_8_;
      local_c8._16_8_ = local_108._16_8_;
      local_90 = (longlong *)0x0;
      if (local_108._16_8_ != 0) {
        plVar9 = (longlong *)(local_108 + 0x20);
        if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_108._56_8_;
        }
        (**(code **)*plVar9)(plVar9,local_c8 + 0x20);
      }
      local_88 = local_148[0];
      local_78 = local_138;
      local_50 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        plVar9 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar9 = local_110;
        }
        (**(code **)*plVar9)(plVar9,local_68);
      }
      GetNodeHandle(this_00,&local_158,(FNodeAndClass *)local_c8);
      if (local_78 != (code *)0x0) {
        plVar9 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar9 = local_50;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if (local_90 != (longlong *)0x0) {
          plVar9 = local_90;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_168 = local_158.Object;
      pTStack_160 = local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_160);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      if (local_108._16_8_ != 0) {
        plVar9 = (longlong *)(local_108 + 0x20);
        if ((longlong *)local_108._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_108._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    if (local_138 != (code *)0x0) {
      plVar9 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar9 = local_110;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar8 = (ulonglong)local_190;
    this_04 = (FGuid *)&this_04[8].C;
    this_03 = (FGuid *)&this_03[8].C;
  }
  return;
}

// RemoveInput @ 14ae42ae0

bool __thiscall
Metasound::Frontend::FGraphController::RemoveInput
          (FGraphController *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FGuid *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  FMetasoundFrontendClass *local_50 [3];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar11 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  local_50[0] = (FMetasoundFrontendClass *)(*pcVar3)(uVar8);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = local_50[0];
  if (local_50[0] != (FMetasoundFrontendClass *)0x0) {
    pFVar9 = FMetasoundFrontendClass::GetDefaultInterface(local_50[0]);
    iVar1 = (pFVar9->Inputs).ArrayNum;
    lVar17 = (longlong)iVar1;
    if (iVar1 != 0) {
      pFVar4 = (pFVar9->Inputs).AllocatorInstance.Data;
      iVar18 = 0;
      bVar19 = ((*(uint *)(pFVar4 + 0x2c) != (param_1->ID).D ||
                *(uint *)(pFVar4 + 0x28) != (param_1->ID).C) ||
               *(uint *)(pFVar4 + 0x24) != (param_1->ID).B) ||
               *(uint *)(pFVar4 + 0x20) != (param_1->ID).A;
      lVar13 = 0;
      iVar15 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar16 = iVar15 + 1;
        if (lVar13 < lVar17) {
          pFVar12 = pFVar4 + lVar13 * 0x48 + 0x28;
          do {
            if (bVar19 != ((((param_1->ID).A != *(uint *)(pFVar12 + -8) ||
                            (param_1->ID).B != *(uint *)(pFVar12 + -4)) ||
                           (param_1->ID).D != *(uint *)(pFVar12 + 4)) ||
                          (param_1->ID).C != *(uint *)pFVar12)) break;
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 1;
            pFVar12 = pFVar12 + 0x48;
          } while (lVar13 < lVar17);
        }
        iVar14 = iVar16 - iVar15;
        if (bVar19 == false) {
          DestructItems<FMetasoundFrontendClassInput,int>
                    ((FMetasoundFrontendClassInput *)(pFVar4 + (longlong)iVar15 * 0x48),iVar14);
        }
        else {
          if (iVar18 != iVar15) {
            memmove(pFVar4 + (longlong)iVar18 * 0x48,pFVar4 + (longlong)iVar15 * 0x48,
                    (longlong)iVar14 * 0x48);
          }
          iVar18 = iVar18 + iVar14;
        }
        bVar19 = (bool)(bVar19 ^ 1);
        iVar15 = iVar16;
      } while (lVar13 < lVar17);
      (pFVar9->Inputs).ArrayNum = iVar18;
      if (0 < iVar1 - iVar18) {
        pFVar9 = FMetasoundFrontendClass::GetDefaultInterface(local_50[0]);
        pFVar10 = FGuid::NewGuid((FGuid *)local_50);
        uVar5 = pFVar10->B;
        uVar6 = pFVar10->C;
        uVar7 = pFVar10->D;
        (pFVar9->ChangeID).A = pFVar10->A;
        (pFVar9->ChangeID).B = uVar5;
        (pFVar9->ChangeID).C = uVar6;
        (pFVar9->ChangeID).D = uVar7;
        RemoveNode(this,param_1);
        return true;
      }
    }
    bVar19 = RemoveNode(this,param_1);
    if (bVar19) {
      return true;
    }
  }
  return false;
}

// RemoveInputVertex @ 14ae42d30

bool __thiscall
Metasound::Frontend::FGraphController::RemoveInputVertex(FGraphController *this,FName *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendNode *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FName *local_res18 [2];
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FName **local_30;
  
  local_30 = local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::RemoveInputVertex'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res18[0] = param_1;
  GetNodesAndClassesByPredicate
            (this,&local_48,
             (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
              *)&local_38);
  iVar2 = local_48.ArrayNum;
  pFVar8 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x80;
  pFVar7 = local_48.AllocatorInstance.Data + 0x10;
  while( true ) {
    if (local_48.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Metasound::Frontend::FGraphController::FNodeAndClass_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 + -0x10 == pFVar8) {
      bVar3 = false;
      goto LAB_14ae42def;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar7);
    pcVar1 = *(code **)pFVar7;
    pFVar6 = pFVar7 + 0x10;
    if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x28);
    }
    uVar4 = (**(code **)(*(longlong *)pFVar6 + 8))();
    pFVar5 = (FMetasoundFrontendNode *)(*pcVar1)(uVar4);
    *(FMetasoundFrontendNode **)&pFVar7[-0x10].field_0x0 = pFVar5;
    if (pFVar5 != (FMetasoundFrontendNode *)0x0) break;
    pFVar7 = pFVar7 + 0x80;
  }
  bVar3 = RemoveInput(this,pFVar5);
LAB_14ae42def:
  DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
            ((FNodeAndClass *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FNodeAndClass *)local_48.AllocatorInstance.Data != (FNodeAndClass *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar3;
}

// RemoveNode @ 14ae42f10

bool __thiscall
Metasound::Frontend::FGraphController::RemoveNode
          (FGraphController *this,FMetasoundFrontendNode *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar5;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  <lambda_1> local_res18;
  int local_res20;
  FMetasoundFrontendGraph *local_60;
  undefined8 local_58;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar4);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return false;
  }
  pIVar5 = IDocumentBuilderRegistry::Get();
  uVar10 = 0;
  iVar15 = 0;
  if (pIVar5 != (IDocumentBuilderRegistry *)0x0) {
    local_60 = (FMetasoundFrontendGraph *)0x0;
    local_58 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&this_00->_padding_,&local_60);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar6 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae42fa7;
    }
  }
  pFVar6 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae42fa7:
  local_res18.InDesc = param_1;
  local_60 = pFVar6;
  local_res20 = TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
                RemoveAll<_Metasound::Frontend::FGraphController::RemoveNode_::__l5::<lambda_1>_>
                          (&pFVar6->Edges,&local_res18);
  iVar11 = (pFVar6->Nodes).ArrayNum;
  lVar8 = (longlong)iVar11;
  local_res18.InDesc._0_4_ = iVar11;
  if (iVar11 != 0) {
    pFVar3 = (pFVar6->Nodes).AllocatorInstance.Data;
    bVar16 = ((*(uint *)(pFVar3 + 0xc) != (param_1->ID).D ||
              *(uint *)(pFVar3 + 8) != (param_1->ID).C) || *(uint *)(pFVar3 + 4) != (param_1->ID).B)
             || *(uint *)pFVar3 != (param_1->ID).A;
    uVar12 = uVar10;
    uVar14 = uVar10;
    do {
      iVar15 = (int)uVar12;
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)(iVar15 + 1);
      if ((longlong)uVar10 < lVar8) {
        pFVar9 = pFVar3 + (uVar10 * 0x22 + 2) * 4;
        do {
          if (bVar16 != ((((param_1->ID).A != *(uint *)(pFVar9 + -8) ||
                          (param_1->ID).B != *(uint *)(pFVar9 + -4)) ||
                         (param_1->ID).D != *(uint *)(pFVar9 + 4)) ||
                        (param_1->ID).C != *(uint *)pFVar9)) break;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar10 = uVar10 + 1;
          pFVar9 = pFVar9 + 0x88;
        } while ((longlong)uVar10 < lVar8);
      }
      iVar11 = (int)uVar12 - iVar15;
      if (bVar16 == false) {
        DestructItems<FMetasoundFrontendNode,int>
                  ((FMetasoundFrontendNode *)(pFVar3 + (longlong)iVar15 * 0x88),iVar11);
      }
      else {
        iVar13 = (int)uVar14;
        if (iVar13 != iVar15) {
          memmove(pFVar3 + (longlong)iVar13 * 0x88,pFVar3 + (longlong)iVar15 * 0x88,
                  (longlong)iVar11 * 0x88);
        }
        uVar14 = (ulonglong)(uint)(iVar13 + iVar11);
      }
      bVar16 = (bool)(bVar16 ^ 1);
    } while ((longlong)uVar10 < lVar8);
    iVar15 = (int)local_res18.InDesc - (int)uVar14;
    (local_60->Nodes).ArrayNum = (int)uVar14;
  }
  (**(code **)(*(longlong *)(this->OwningDocument).Object + 200))();
  return 0 < local_res20 + iVar15;
}

// RemoveNode @ 14ae43170

bool __thiscall
Metasound::Frontend::FGraphController::RemoveNode(FGraphController *this,INodeController *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  EMetasoundFrontendClassType EVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FMetasoundFrontendClassMetadata *this_00;
  undefined8 uVar8;
  FMetasoundFrontendGraphClass *this_01;
  IDocumentBuilderRegistry *pIVar9;
  FMetaSoundFrontendDocumentBuilder *this_02;
  FMetasoundFrontendGraph *pFVar10;
  longlong *plVar11;
  FMetasoundFrontendNode *pFVar12;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar13;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar14;
  FMetasoundFrontendNode *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSharedRef<Metasound::Frontend::IInputController,1> *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  
  this_00 = (FMetasoundFrontendClassMetadata *)(**(code **)(*(longlong *)param_1 + 0x118))(param_1);
  EVar4 = FMetasoundFrontendClassMetadata::GetType(this_00);
  if ((byte)(EVar4 - Variable) < 4) {
    RemoveNodeIDFromAssociatedVariable(this,param_1);
    cVar5 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    if ((cVar5 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNode.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                           ,0x2f6,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x68);
    FLazyName::Resolve(&VariableNames::InputVariableName);
    (*pcVar2)(param_1,&local_48,local_res10);
    (**(code **)(*local_48 + 0x88))(local_48,&local_68);
    cVar5 = (**(code **)(*local_68 + 0x18))();
    if (cVar5 != '\0') {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x88);
      FLazyName::Resolve(&VariableNames::OutputVariableName);
      (*pcVar2)(param_1,&local_58,local_res18);
      (**(code **)(*local_58 + 0x70))(local_58,&local_98);
      iVar3 = local_90;
      pTVar14 = local_98 + local_90;
      pTVar13 = local_98;
      while( true ) {
        if (local_90 != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar13 == pTVar14) break;
        cVar5 = (**(code **)(*(longlong *)pTVar13->Object + 0xa8))();
        if ((cVar5 == '\0') &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8649931621518015742>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                               ,0x302,"InputToReroute->Connect(*OutputToReroute)"), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        pTVar13 = pTVar13 + 1;
      }
      DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_98,local_90);
      if (local_98 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
        FMemory::Free(local_98);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar11 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar11 = plVar1;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  this_01 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar8);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_01;
  if (this_01 == (FMetasoundFrontendGraphClass *)0x0) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,&local_78);
  pIVar9 = IDocumentBuilderRegistry::Get();
  if (pIVar9 != (IDocumentBuilderRegistry *)0x0) {
    local_88 = 0;
    local_80 = 0;
    this_02 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar9 + 8))(pIVar9,&this_01->_padding_,&local_88);
    if (this_02 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar10 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_02);
      goto LAB_14ae433d0;
    }
  }
  pFVar10 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(this_01);
LAB_14ae433d0:
  pFVar12 = (FMetasoundFrontendNode *)(pFVar10->Nodes).AllocatorInstance.Data;
  pFVar15 = pFVar12 + (pFVar10->Nodes).ArrayNum;
  if (pFVar12 != pFVar15) {
    while (((uStack_6c != (pFVar12->ID).D || local_70 != (pFVar12->ID).C) ||
           uStack_74 != (pFVar12->ID).B) || local_78 != (pFVar12->ID).A) {
      pFVar12 = pFVar12 + 1;
      if (pFVar12 == pFVar15) {
        return false;
      }
    }
    switch(EVar4) {
    case External:
    case Graph:
    case Literal:
    case Variable:
    case VariableDeferredAccessor:
    case VariableAccessor:
    case VariableMutator:
    case Template:
      bVar6 = RemoveNode(this,pFVar12);
      return bVar6;
    case Input:
      bVar6 = RemoveInput(this,pFVar12);
      return bVar6;
    case Output:
      bVar6 = RemoveOutput(this,pFVar12);
      return bVar6;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                       ,0x698,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  return false;
}

// RemoveNodeIDFromAssociatedVariable @ 14ae43510

void __thiscall
Metasound::Frontend::FGraphController::RemoveNodeIDFromAssociatedVariable
          (FGraphController *this,INodeController *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  FMetasoundFrontendGraphClass *this_00;
  IDocumentBuilderRegistry *pIVar6;
  FMetaSoundFrontendDocumentBuilder *this_01;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res8 [8];
  FGuid local_a8;
  uint local_98;
  uint *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FMetasoundFrontendGraph *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FScriptContainerElement *local_40;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  this_00 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar5);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = this_00;
  if (this_00 == (FMetasoundFrontendGraphClass *)0x0) {
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,&local_a8);
  pIVar6 = IDocumentBuilderRegistry::Get();
  if (pIVar6 != (IDocumentBuilderRegistry *)0x0) {
    local_70 = 0;
    local_68 = 0;
    this_01 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&this_00->_padding_,&local_70);
    if (this_01 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      local_78 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_01);
      goto LAB_14ae435d2;
    }
  }
  local_78 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_00);
LAB_14ae435d2:
  local_98 = (local_78->Variables).ArrayNum;
  uVar8 = (ulonglong)(int)local_98;
  pFVar11 = (local_78->Variables).AllocatorInstance.Data;
  pFVar22 = pFVar11 + 0xa0;
  pFVar14 = pFVar11 + uVar8 * 0xb8;
  local_40 = pFVar14;
  do {
    uVar10 = 0;
    local_88 = pFVar11;
    local_80 = pFVar22;
    if ((local_78->Variables).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar14) {
      return;
    }
    if (((local_a8.D == *(uint *)(pFVar22 + -0x1c) && local_a8.C == *(uint *)(pFVar22 + -0x20)) &&
        local_a8.B == *(uint *)(pFVar22 + -0x24)) && local_a8.A == *(uint *)(pFVar22 + -0x28)) {
      *(undefined8 *)(pFVar11 + 0x78) = 0;
      *(undefined8 *)(pFVar11 + 0x80) = 0;
      return;
    }
    if (((local_a8.D == *(uint *)(pFVar22 + -0xc) && local_a8.C == *(uint *)(pFVar22 + -0x10)) &&
        local_a8.B == *(uint *)(pFVar22 + -0x14)) && local_a8.A == *(uint *)(pFVar22 + -0x18)) {
      local_60 = 0;
      uStack_58 = 0;
      *(undefined8 *)(pFVar22 + -0x18) = 0;
      *(undefined8 *)(pFVar22 + -0x10) = 0;
    }
    if (((*(FGuid **)(pFVar22 + -8) <= &local_a8) &&
        (&local_a8 < *(FGuid **)(pFVar22 + -8) + *(int *)(pFVar22 + 4))) &&
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
    iVar4 = *(int *)pFVar22;
    lVar15 = (longlong)iVar4;
    if (iVar4 != 0) {
      local_90 = *(uint **)(pFVar22 + -8);
      bVar3 = ((local_a8.D != local_90[3] || local_a8.C != local_90[2]) || local_a8.B != local_90[1]
              ) || local_a8.A != *local_90;
      uVar8 = uVar10;
      uVar21 = uVar10;
      uVar16 = local_a8.D;
      uVar19 = local_a8.A;
      uVar17 = local_a8.C;
      uVar18 = local_a8.B;
      do {
        iVar13 = (int)uVar8;
        uVar10 = uVar10 + 1;
        uVar8 = (ulonglong)(iVar13 + 1);
        if ((longlong)uVar10 < lVar15) {
          puVar9 = local_90 + uVar10 * 4 + 2;
          do {
            if (bVar3 != (((uVar16 != puVar9[1] || uVar18 != puVar9[-1]) || uVar19 != puVar9[-2]) ||
                         uVar17 != *puVar9)) break;
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 4;
          } while ((longlong)uVar10 < lVar15);
        }
        iVar12 = (int)uVar8 - iVar13;
        if (bVar3 != false) {
          iVar20 = (int)uVar21;
          if (iVar20 != iVar13) {
            memmove(local_90 + (longlong)iVar20 * 4,local_90 + (longlong)iVar13 * 4,
                    (longlong)iVar12 << 4);
            uVar16 = local_a8.D;
            uVar19 = local_a8.A;
            uVar17 = local_a8.C;
            uVar18 = local_a8.B;
          }
          uVar21 = (ulonglong)(uint)(iVar20 + iVar12);
        }
        bVar3 = (bool)(bVar3 ^ 1);
      } while ((longlong)uVar10 < lVar15);
      *(int *)local_80 = (int)uVar21;
      pFVar11 = local_88;
      pFVar14 = local_40;
      pFVar22 = local_80;
      if (0 < iVar4 - (int)uVar21) {
        return;
      }
    }
    iVar4 = TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove
                      ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)(pFVar22 + 8),&local_a8);
    if (0 < iVar4) {
      return;
    }
    pFVar11 = pFVar11 + 0xb8;
    uVar8 = (ulonglong)local_98;
    pFVar22 = pFVar22 + 0xb8;
  } while( true );
}

// RemoveOutput @ 14ae438a0

bool __thiscall
Metasound::Frontend::FGraphController::RemoveOutput
          (FGraphController *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  FGuid *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FMetasoundFrontendClass *local_50 [3];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar12 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar12 = plVar2;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  local_50[0] = (FMetasoundFrontendClass *)(*pcVar3)(uVar9);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = local_50[0];
  if (local_50[0] != (FMetasoundFrontendClass *)0x0) {
    pFVar10 = FMetasoundFrontendClass::GetDefaultInterface(local_50[0]);
    iVar1 = (pFVar10->Outputs).ArrayNum;
    lVar13 = (longlong)iVar1;
    if (iVar1 == 0) {
      bVar8 = RemoveNode(this,param_1);
    }
    else {
      pFVar4 = (pFVar10->Outputs).AllocatorInstance.Data;
      iVar18 = 0;
      bVar8 = ((*(uint *)(pFVar4 + 0x2c) != (param_1->ID).D ||
               *(uint *)(pFVar4 + 0x28) != (param_1->ID).C) ||
              *(uint *)(pFVar4 + 0x24) != (param_1->ID).B) ||
              (param_1->ID).A != *(uint *)(pFVar4 + 0x20);
      lVar15 = 0;
      iVar16 = 0;
      do {
        lVar15 = lVar15 + 1;
        iVar17 = iVar16 + 1;
        if (lVar15 < lVar13) {
          pFVar14 = pFVar4 + lVar15 * 0x34 + 0x28;
          do {
            if (bVar8 != ((((param_1->ID).A != *(uint *)(pFVar14 + -8) ||
                           (param_1->ID).B != *(uint *)(pFVar14 + -4)) ||
                          (param_1->ID).D != *(uint *)(pFVar14 + 4)) ||
                         (param_1->ID).C != *(uint *)pFVar14)) break;
            iVar17 = iVar17 + 1;
            lVar15 = lVar15 + 1;
            pFVar14 = pFVar14 + 0x34;
          } while (lVar15 < lVar13);
        }
        if (bVar8 != false) {
          if (iVar18 != iVar16) {
            memmove(pFVar4 + (longlong)iVar18 * 0x34,pFVar4 + (longlong)iVar16 * 0x34,
                    (longlong)(iVar17 - iVar16) * 0x34);
          }
          iVar18 = iVar18 + (iVar17 - iVar16);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar16 = iVar17;
      } while (lVar15 < lVar13);
      (pFVar10->Outputs).ArrayNum = iVar18;
      if (iVar1 != iVar18) {
        pFVar10 = FMetasoundFrontendClass::GetDefaultInterface(local_50[0]);
        pFVar11 = FGuid::NewGuid((FGuid *)local_50);
        uVar5 = pFVar11->B;
        uVar6 = pFVar11->C;
        uVar7 = pFVar11->D;
        (pFVar10->ChangeID).A = pFVar11->A;
        (pFVar10->ChangeID).B = uVar5;
        (pFVar10->ChangeID).C = uVar6;
        (pFVar10->ChangeID).D = uVar7;
      }
      bVar8 = RemoveNode(this,param_1);
      if (0 < iVar1 - iVar18) {
        return true;
      }
    }
    if (bVar8 != false) {
      return true;
    }
  }
  return false;
}

// RemoveOutputVertex @ 14ae43ad0

bool __thiscall
Metasound::Frontend::FGraphController::RemoveOutputVertex(FGraphController *this,FName *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendNode *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FName *local_res18 [2];
  TArray<Metasound::Frontend::FGraphController::FNodeAndClass,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FName **local_30;
  
  local_30 = local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphController::RemoveOutputVertex'::__l2::<lambda_1>,bool,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  local_res18[0] = param_1;
  GetNodesAndClassesByPredicate
            (this,&local_48,
             (TFunctionRef<bool___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
              *)&local_38);
  iVar2 = local_48.ArrayNum;
  pFVar8 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x80;
  pFVar7 = local_48.AllocatorInstance.Data + 0x10;
  while( true ) {
    if (local_48.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Metasound::Frontend::FGraphController::FNodeAndClass_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 + -0x10 == pFVar8) {
      bVar3 = false;
      goto LAB_14ae43b8f;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar7);
    pcVar1 = *(code **)pFVar7;
    pFVar6 = pFVar7 + 0x10;
    if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x28);
    }
    uVar4 = (**(code **)(*(longlong *)pFVar6 + 8))();
    pFVar5 = (FMetasoundFrontendNode *)(*pcVar1)(uVar4);
    *(FMetasoundFrontendNode **)&pFVar7[-0x10].field_0x0 = pFVar5;
    if (pFVar5 != (FMetasoundFrontendNode *)0x0) break;
    pFVar7 = pFVar7 + 0x80;
  }
  bVar3 = RemoveOutput(this,pFVar5);
LAB_14ae43b8f:
  DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
            ((FNodeAndClass *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FNodeAndClass *)local_48.AllocatorInstance.Data != (FNodeAndClass *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar3;
}

// RemoveVariable @ 14ae44050

bool __thiscall
Metasound::Frontend::FGraphController::RemoveVariable(FGraphController *this,FGuid *param_1)

{
  TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FMetasoundFrontendGraphClass *this_01;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  FMetasoundFrontendVariable *pFVar9;
  undefined8 *puVar10;
  IDocumentBuilderRegistry *pIVar11;
  FMetaSoundFrontendDocumentBuilder *this_02;
  FMetasoundFrontendGraph *pFVar12;
  longlong *plVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FMetasoundFrontendGraphClass *local_res20;
  undefined8 local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar13 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar13 = plVar1;
  }
  uVar8 = (**(code **)(*plVar13 + 8))();
  local_res20 = (FMetasoundFrontendGraphClass *)(*pcVar2)(uVar8);
  *(FMetasoundFrontendGraphClass **)&this->GraphClassPtr = local_res20;
  if (local_res20 == (FMetasoundFrontendGraphClass *)0x0) {
    return false;
  }
  pFVar9 = FindFrontendVariable(this,param_1);
  if (pFVar9 == (FMetasoundFrontendVariable *)0x0) {
    return false;
  }
  local_a8 = (pFVar9->VariableNodeID).A;
  uStack_a4 = (pFVar9->VariableNodeID).B;
  uStack_a0 = (pFVar9->VariableNodeID).C;
  uStack_9c = (pFVar9->VariableNodeID).D;
  (**(code **)(this->_padding_ + 0x60))(this,&local_e8,&local_a8);
  (**(code **)(this->_padding_ + 0x218))(this,local_e8);
  local_98 = (pFVar9->MutatorNodeID).A;
  uStack_94 = (pFVar9->MutatorNodeID).B;
  uStack_90 = (pFVar9->MutatorNodeID).C;
  uStack_8c = (pFVar9->MutatorNodeID).D;
  puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_88,&local_98);
  uVar8 = *puVar10;
  pTVar3 = (TReferenceControllerBase<1> *)puVar10[1];
  *puVar10 = local_e8;
  puVar10[1] = pTStack_e0;
  local_e8 = uVar8;
  pTStack_e0 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  (**(code **)(this->_padding_ + 0x218))(this,local_e8);
  local_c0 = (pFVar9->AccessorNodeIDs).ArrayNum;
  lVar17 = (longlong)local_c0;
  pFVar19 = (pFVar9->AccessorNodeIDs).AllocatorInstance.Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_c0 == 0) {
    local_bc = 0;
    iVar18 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_c0,0,&local_c8,local_c0,&local_bc);
    memcpy(local_c8.Data,pFVar19,lVar17 << 4);
    iVar18 = local_c0;
  }
  pFVar19 = local_c8.Data + (longlong)iVar18 * 0x10;
  FVar15.Data = local_c8.Data;
  iVar16 = iVar18;
  while( true ) {
    if (iVar16 != iVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar15.Data == pFVar19) break;
    local_78 = *(undefined4 *)FVar15.Data;
    uStack_74 = *(undefined4 *)(FVar15.Data + 4);
    uStack_70 = *(undefined4 *)(FVar15.Data + 8);
    uStack_6c = *(undefined4 *)(FVar15.Data + 0xc);
    puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_68,&local_78);
    uVar8 = *puVar10;
    pTVar3 = (TReferenceControllerBase<1> *)puVar10[1];
    *puVar10 = local_e8;
    puVar10[1] = pTStack_e0;
    local_e8 = uVar8;
    pTStack_e0 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    (**(code **)(this->_padding_ + 0x218))(this,local_e8);
    FVar15.Data = FVar15.Data + 0x10;
    iVar16 = local_c0;
  }
  local_d0 = (pFVar9->DeferredAccessorNodeIDs).ArrayNum;
  lVar17 = (longlong)local_d0;
  pFVar19 = (pFVar9->DeferredAccessorNodeIDs).AllocatorInstance.Data;
  local_d8.Data = (FScriptContainerElement *)0x0;
  if (local_d0 == 0) {
    local_cc = 0;
    iVar18 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,pFVar19,lVar17 << 4);
    iVar18 = local_d0;
  }
  pFVar19 = local_d8.Data + (longlong)iVar18 * 0x10;
  FVar15.Data = local_d8.Data;
  iVar16 = iVar18;
  while( true ) {
    if (iVar16 != iVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar15.Data == pFVar19) break;
    local_58 = *(undefined4 *)FVar15.Data;
    uStack_54 = *(undefined4 *)(FVar15.Data + 4);
    uStack_50 = *(undefined4 *)(FVar15.Data + 8);
    uStack_4c = *(undefined4 *)(FVar15.Data + 0xc);
    puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_48,&local_58);
    uVar8 = *puVar10;
    pTVar3 = (TReferenceControllerBase<1> *)puVar10[1];
    *puVar10 = local_e8;
    puVar10[1] = pTStack_e0;
    local_e8 = uVar8;
    pTStack_e0 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    (**(code **)(this->_padding_ + 0x218))(this,local_e8);
    FVar15.Data = FVar15.Data + 0x10;
    iVar16 = local_d0;
  }
  pIVar11 = IDocumentBuilderRegistry::Get();
  this_01 = local_res20;
  if (pIVar11 != (IDocumentBuilderRegistry *)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    this_02 = (FMetaSoundFrontendDocumentBuilder *)
              (**(code **)((longlong)*pIVar11 + 8))(pIVar11,&local_res20->_padding_,&local_b8);
    if (this_02 != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar12 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this_02);
      goto LAB_14ae44344;
    }
  }
  pFVar12 = FMetasoundFrontendGraphClass::GetDefaultGraph(this_01);
LAB_14ae44344:
  iVar18 = (pFVar12->Variables).ArrayNum;
  this_00 = &pFVar12->Variables;
  bVar4 = false;
  uVar14 = 0;
  if (0 < iVar18) {
    lVar17 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < iVar18) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar19 = (this_00->AllocatorInstance).Data;
      if (((*(uint *)(pFVar19 + lVar17 + 0x74) == param_1->D &&
           *(uint *)(pFVar19 + lVar17 + 0x70) == param_1->C) &&
          *(uint *)(pFVar19 + lVar17 + 0x6c) == param_1->B) &&
          *(uint *)(pFVar19 + lVar17 + 0x68) == param_1->A) {
        bVar4 = true;
        uVar7 = 0;
        if ((int)uVar14 < (pFVar12->Variables).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar14);
      }
      else {
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0xb8;
      }
      iVar18 = (pFVar12->Variables).ArrayNum;
    } while ((int)uVar14 < iVar18);
    if (bVar4) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,&this_00->AllocatorInstance,iVar18,&(pFVar12->Variables).ArrayMax);
    }
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
  return true;
}

// SetDefaultInput @ 14ae44ad0

bool __thiscall
Metasound::Frontend::FGraphController::SetDefaultInput
          (FGraphController *this,FGuid *param_1,FMetasoundFrontendLiteral *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IDocumentBuilderRegistry *pIVar5;
  undefined8 *puVar6;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pIVar5 = IDocumentBuilderRegistry::Get();
  if (pIVar5 != (IDocumentBuilderRegistry *)0x0) {
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,local_18);
    iVar1 = *(int *)(puVar6 + 1);
    _Src = (void *)*puVar6;
    local_40 = CONCAT44(local_40._4_4_,iVar1);
    if ((iVar1 != 0) || (local_40._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,local_40._4_4_,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
      if (iVar1 != 0) {
        memcpy(local_48.Data,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  iVar1 = (int)local_40;
  pcVar2 = *(code **)(this->_padding_ + 0x1c8);
  local_38 = local_48.Data;
  if ((int)local_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iStack_30 = iVar1;
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  iStack_20 = iVar1;
  uStack_1c = uStack_2c;
  uVar4 = (*pcVar2)(this,param_1,param_2,&local_28);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (bool)uVar4;
}

// SetDefaultInput @ 14ae44c10

bool __thiscall
Metasound::Frontend::FGraphController::SetDefaultInput
          (FGraphController *this,FGuid *param_1,FMetasoundFrontendLiteral *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendClassInput *this_00;
  IDataTypeRegistry *pIVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetasoundFrontendClassInputDefault *pFVar7;
  FMetasoundFrontendLiteral *this_01;
  TArrayView<FGuid_const_,int> local_18;
  
  this_00 = FindInputDescriptionWithVertexID(this,param_1);
  if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
    pIVar5 = IDataTypeRegistry::Get();
    cVar2 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,&this_00->_padding_,param_2->Type);
    if (cVar2 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8649931621518015210>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                         ,0x516,
                         "IDataTypeRegistry::Get().IsLiteralTypeSupported(Desc->TypeName, InLiteral.GetType())"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (**(code **)(this->_padding_ + 0x1d8))(this,param_1);
    }
    else {
      pTVar6 = FMetasoundFrontendClassInput::GetDefaults(this_00);
      local_18.DataPtr = param_3->DataPtr;
      local_18.ArrayNum = param_3->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
      pFVar7 = FindPreferredPage<FMetasoundFrontendClassInputDefault>(pTVar6,&local_18);
      if (pFVar7 != (FMetasoundFrontendClassInputDefault *)0x0) {
        this_01 = FMetasoundFrontendClassInput::FindDefaultChecked(this_00,&pFVar7->PageID);
        FMetasoundFrontendLiteral::operator=(this_01,param_2);
        return true;
      }
    }
  }
  return false;
}

// SetDefaultInputToDefaultLiteralOfType @ 14ae44d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FGraphController::SetDefaultInputToDefaultLiteralOfType
          (FGraphController *this,FGuid *param_1)

{
  EMetasoundFrontendLiteralType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendClassInput *this_00;
  IDataTypeRegistry *pIVar5;
  FMetasoundFrontendLiteral *this_01;
  undefined1 auStack_48 [32];
  FLiteral local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = FindInputDescriptionWithVertexID(this,param_1);
  if (this_00 == (FMetasoundFrontendClassInput *)0x0) {
    return false;
  }
  pIVar5 = IDataTypeRegistry::Get();
  (**(code **)((longlong)*pIVar5 + 0x80))(pIVar5,&local_28,&this_00->_padding_);
  this_01 = FMetasoundFrontendClassInput::FindDefaultChecked(this_00,&DefaultPageID);
  FMetasoundFrontendLiteral::SetFromLiteral(this_01,&local_28);
  EVar1 = this_01->Type;
  if (0xc < local_28.Value.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Value.TypeIndex])(&local_28);
  return EVar1 != Invalid;
}

// SetGraphMetadata @ 14ae451d0

void __thiscall
Metasound::Frontend::FGraphController::SetGraphMetadata
          (FGraphController *this,FMetasoundFrontendClassMetadata *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  lVar6 = (*pcVar2)(uVar5);
  *(longlong *)&this->GraphClassPtr = lVar6;
  if (lVar6 != 0) {
    FVar3 = (param_1->ClassName).Name;
    *(FName *)(lVar6 + 0x18) = (param_1->ClassName).Namespace;
    *(FName *)(lVar6 + 0x20) = FVar3;
    FVar4 = param_1->Version;
    *(FName *)(lVar6 + 0x28) = (param_1->ClassName).Variant;
    *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30) = FVar4;
    uVar5 = *(undefined8 *)&(param_1->ChangeID).B;
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)&param_1->Type;
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(uint *)(lVar6 + 0x48) = (param_1->ChangeID).D;
  }
  return;
}

// SetGraphPresetOptions @ 14ae45250

void __thiscall
Metasound::Frontend::FGraphController::SetGraphPresetOptions
          (FGraphController *this,FMetasoundFrontendGraphClassPresetOptions *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar5 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->GraphClassPtr = lVar4;
  if (lVar4 != 0) {
    *(bool *)(lVar4 + 0xa0) = param_1->bIsPreset;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar4 + 0xa8),
               &param_1->InputsInheritingDefault);
  }
  return;
}

// SetInputInheritsDefault @ 14ae452d0

bool __thiscall
Metasound::Frontend::FGraphController::SetInputInheritsDefault
          (FGraphController *this,FName param_1,bool param_2)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  FName local_res10;
  FName local_res18 [2];
  
  plVar7 = (longlong *)&(this->GraphClassPtr).field_0x20;
  pvVar1 = *(void **)&(this->GraphClassPtr).field_0x10;
  local_res10 = param_1;
  if (param_2) {
    UE::Core::Private::Function::CheckCallable(pvVar1);
    plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    lVar6 = (*pcVar3)(uVar5);
    *(longlong *)&this->GraphClassPtr = lVar6;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0xa0) != '\0')) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar6 + 0xa8),
                 local_res18,(bool *)&local_res10);
      return local_res18[0].ComparisonIndex.Value != 0xffffffff;
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(pvVar1);
    plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    lVar6 = (*pcVar3)(uVar5);
    *(longlong *)&this->GraphClassPtr = lVar6;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0xa0) != '\0')) {
      iVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar6 + 0xa8)
                         ,param_1);
      return 0 < iVar4;
    }
  }
  return false;
}

// SetInputsInheritingDefault @ 14ae453c0

void __thiscall
Metasound::Frontend::FGraphController::SetInputsInheritingDefault
          (FGraphController *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  undefined1 *_Src;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar3 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar6 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->GraphClassPtr = lVar5;
  if (lVar5 != 0) {
    pTVar1 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar5 + 0xa8);
    *(undefined1 *)(lVar5 + 0xa0) = 1;
    if (pTVar1 != param_1) {
      if (*(void **)&pTVar1->Elements != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1->Elements);
      }
      _Src = &(param_1->Elements).field_0x10;
      *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&param_1->Elements;
      *(undefined8 *)&param_1->Elements = 0;
      *(undefined4 *)(lVar5 + 0xb0) = *(undefined4 *)&(param_1->Elements).field_0x8;
      *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)&(param_1->Elements).field_0xc;
      *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
      if ((undefined1 *)(lVar5 + 0xb8) != _Src) {
        if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
          memmove((undefined1 *)(lVar5 + 0xb8),_Src,0x10);
        }
        if (*(void **)(lVar5 + 200) != (void *)0x0) {
          FMemory::Free(*(void **)(lVar5 + 200));
        }
        *(undefined8 *)(lVar5 + 200) = *(undefined8 *)&(param_1->Elements).field_0x20;
        *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
        *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)&(param_1->Elements).field_0x28;
        *(undefined4 *)(lVar5 + 0xd4) = *(undefined4 *)&(param_1->Elements).field_0x2c;
        *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
      }
      *(undefined4 *)(lVar5 + 0xd8) = *(undefined4 *)&(param_1->Elements).field_0x30;
      *(undefined4 *)(lVar5 + 0xdc) = *(undefined4 *)&(param_1->Elements).field_0x34;
      *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
      if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
        *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(param_1->Hash).InlineData;
      }
      if (*(void **)(lVar5 + 0xe8) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar5 + 0xe8));
      }
      *(ForElementType<FSetElementId> *)(lVar5 + 0xe8) = (param_1->Hash).SecondaryData;
      (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      *(int *)(lVar5 + 0xf0) = param_1->HashSize;
      param_1->HashSize = 0;
    }
  }
  return;
}

// ShareAccess @ 14ae46190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FGraphController::ShareAccess
          (FGraphController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined8 uStack_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  *(undefined8 *)&__return_storage_ptr__->GraphClass = *(undefined8 *)&this->GraphClassPtr;
  local_58._0_8_ = *(undefined8 *)&(this->GraphClassPtr).field_0x10;
  uStack_30 = (longlong *)0x0;
  if (local_58._0_8_ != 0) {
    puVar1 = *(undefined8 **)&(this->GraphClassPtr).field_0x38;
    puVar10 = (undefined8 *)&(this->GraphClassPtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar10 = puVar1;
    }
    (**(code **)*puVar10)(puVar10,local_58 + 0x10);
  }
  lVar4 = *(longlong *)&(__return_storage_ptr__->GraphClass).field_0x10;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->GraphClass).field_0x18;
  lVar6 = *(longlong *)&(__return_storage_ptr__->GraphClass).field_0x20;
  lVar7 = *(longlong *)&(__return_storage_ptr__->GraphClass).field_0x28;
  uVar2 = *(undefined8 *)&(__return_storage_ptr__->GraphClass).field_0x30;
  plVar3 = *(longlong **)&(__return_storage_ptr__->GraphClass).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->GraphClass).field_0x10 = local_58._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->GraphClass).field_0x18 = local_58._8_8_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x20 = local_58._16_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x24 = local_58._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x28 = local_58._24_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x2c = local_58._28_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x30 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x34 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x38 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->GraphClass).field_0x3c = uStack_30._4_4_;
  local_58._16_8_ = lVar6;
  local_58._24_8_ = lVar7;
  local_58._32_8_ = uVar2;
  uStack_30 = plVar3;
  local_58._0_8_ = lVar4;
  local_58._8_8_ = uVar5;
  if (lVar4 != 0) {
    plVar11 = (longlong *)(local_58 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr<FMetasoundFrontendGraphClass>
            ((FConstGraphClassAccessPtr *)local_58,
             (TAccessPtr<FMetasoundFrontendGraphClass> *)&this->GraphClassPtr,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar6 = __return_storage_ptr__->_padding_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar8 = __return_storage_ptr__->_padding_;
  lVar9 = __return_storage_ptr__->_padding_;
  lVar4 = __return_storage_ptr__->_padding_;
  plVar3 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)uStack_30;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uStack_30._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = plStack_20._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = plStack_20._4_4_;
  local_58._16_8_ = lVar6;
  local_58._24_8_ = lVar7;
  local_58._32_8_ = lVar8;
  uStack_30 = (longlong *)lVar9;
  local_28 = lVar4;
  plStack_20 = plVar3;
  if (lVar6 != 0) {
    plVar11 = (longlong *)(local_58 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae46310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FGraphController::ShareAccess
          (FGraphController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr<FMetasoundFrontendGraphClass>
            ((FConstGraphClassAccessPtr *)local_58,
             (TAccessPtr<FMetasoundFrontendGraphClass> *)&this->GraphClassPtr,Tag);
  *(undefined8 *)&__return_storage_ptr__->ConstGraphClass = local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstGraphClass).field_0x10;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstGraphClass).field_0x18;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x20;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x24;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x28;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x2c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstGraphClass).field_0x30;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstGraphClass).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraphClass).field_0x10 = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraphClass).field_0x18 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x20 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x24 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x28 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x2c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x30 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x34 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x38 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraphClass).field_0x3c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = uVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

// SpliceVariableNodeFromVariableStack @ 14ae467a0

void __thiscall
Metasound::Frontend::FGraphController::SpliceVariableNodeFromVariableStack
          (FGraphController *this,INodeController *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar5;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSharedRef<Metasound::Frontend::IInputController,1> *local_58;
  int local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                       ,0x2f6,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x68);
  FLazyName::Resolve(&VariableNames::InputVariableName);
  (*pcVar1)(param_1,&local_28,local_res18);
  (**(code **)(*local_28 + 0x88))(local_28,&local_48);
  cVar3 = (**(code **)(*local_48 + 0x18))();
  if (cVar3 != '\0') {
    pcVar1 = *(code **)(*(longlong *)param_1 + 0x88);
    FLazyName::Resolve(&VariableNames::OutputVariableName);
    (*pcVar1)(param_1,&local_38,local_res20);
    (**(code **)(*local_38 + 0x70))(local_38,&local_58);
    iVar2 = local_50;
    pTVar6 = local_58 + local_50;
    pTVar5 = local_58;
    while( true ) {
      if (local_50 != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pTVar5 == pTVar6) break;
      cVar3 = (**(code **)(*(longlong *)pTVar5->Object + 0xa8))();
      if (cVar3 == '\0') {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8649931621518015742>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphController.cpp"
                           ,0x302,"InputToReroute->Connect(*OutputToReroute)");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar5 = pTVar5 + 1;
    }
    DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_58,local_50);
    if (local_58 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
      FMemory::Free(local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// UpdateInterfaceChangeID @ 14ae47fc0

void __thiscall
Metasound::Frontend::FGraphController::UpdateInterfaceChangeID(FGraphController *this)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar7;
  FGuid *pFVar8;
  longlong *plVar9;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClassPtr).field_0x10);
  plVar1 = *(longlong **)&(this->GraphClassPtr).field_0x38;
  pcVar2 = *(code **)&(this->GraphClassPtr).field_0x10;
  plVar9 = (longlong *)&(this->GraphClassPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar9 = plVar1;
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar6);
  *(FMetasoundFrontendClass **)&this->GraphClassPtr = this_00;
  if (this_00 != (FMetasoundFrontendClass *)0x0) {
    pFVar7 = FMetasoundFrontendClass::GetDefaultInterface(this_00);
    pFVar8 = FGuid::NewGuid(&local_18);
    uVar3 = pFVar8->B;
    uVar4 = pFVar8->C;
    uVar5 = pFVar8->D;
    (pFVar7->ChangeID).A = pFVar8->A;
    (pFVar7->ChangeID).B = uVar3;
    (pFVar7->ChangeID).C = uVar4;
    (pFVar7->ChangeID).D = uVar5;
  }
  return;
}

// operator() @ 15055e170

bool __thiscall
`Metasound::Frontend::FGraphController::AddNode'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8649931621518014942>);
  if (bVar2) {
    FMetasoundFrontendClassName::ToString(*(FMetasoundFrontendClassName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8649931621518014942>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055e1d7;
    }
  }
  bVar2 = false;
LAB_15055e1d7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

