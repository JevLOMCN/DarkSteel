// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 31

// FBaseInputController @ 14ae1a7e0

FBaseInputController * __thiscall
Metasound::Frontend::FBaseInputController::FBaseInputController
          (FBaseInputController *this,FInitParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseInputController_Frontend_Metasound__6B_;
  uVar4 = (param_1->ID).B;
  uVar5 = (param_1->ID).C;
  uVar6 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar4;
  (this->ID).C = uVar5;
  (this->ID).D = uVar6;
  (this->NodeVertexPtr).CachedObjectPtr = (param_1->NodeVertexPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->NodeVertexPtr).GetObject;
  *(undefined8 *)&(this->NodeVertexPtr).GetObject.field_0x28 = 0;
  *(longlong *)&(this->NodeVertexPtr).GetObject = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->NodeVertexPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->NodeVertexPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->ClassInputPtr).CachedObjectPtr = (param_1->ClassInputPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->ClassInputPtr).GetObject;
  *(longlong *)&(this->ClassInputPtr).GetObject = lVar1;
  *(undefined8 *)&(this->ClassInputPtr).GetObject.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->ClassInputPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->ClassInputPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->GraphPtr).CachedObjectPtr = (param_1->GraphPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->GraphPtr).GetObject;
  *(longlong *)&(this->GraphPtr).GetObject = lVar1;
  *(undefined8 *)&(this->GraphPtr).GetObject.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->GraphPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->GraphPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->OwningNode).Object = (param_1->OwningNode).Object;
  pTVar3 = (param_1->OwningNode).SharedReferenceCount.ReferenceController;
  (this->OwningNode).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FBaseInputController @ 14ae1d360

void __thiscall
Metasound::Frontend::FBaseInputController::~FBaseInputController(FBaseInputController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningNode).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ClassInputPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->ClassInputPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->ClassInputPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->NodeVertexPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
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
                    /* WARNING: Could not recover jumptable at 0x00014ae1d3fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14ae1e560

void __thiscall
`Metasound::Frontend::FBaseInputController::GetVertexAccessType'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<Metasound::Frontend::IInputController_const_,1> *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  FMetasoundFrontendClassInput *pFVar5;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  **(undefined1 **)((longlong)this + 8) = 1;
  if ((**(int **)((longlong)this + 0x10) != 1) &&
     (cVar1 = (**(code **)(*(longlong *)param_1->Object + 0x18))(), cVar1 != '\0')) {
    piVar3 = (int *)(**(code **)(**(longlong **)this + 0x20))(*(longlong **)this,local_28);
    piVar4 = (int *)(**(code **)(*(longlong *)param_1->Object + 0x20))(param_1->Object,local_18);
    if (((piVar4[3] == piVar3[3] && piVar4[2] == piVar3[2]) && piVar4[1] == piVar3[1]) &&
        *piVar4 == *piVar3) {
      piVar3 = (int *)(**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,local_18);
      piVar4 = (int *)(**(code **)(*(longlong *)param_1->Object + 0x68))(param_1->Object,local_28);
      if (((piVar4[3] == piVar3[3] && piVar4[2] == piVar3[2]) && piVar4[1] == piVar3[1]) &&
          *piVar4 == *piVar3) {
        pFVar5 = Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::Get
                           ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)
                            (*(longlong *)this + 0x70));
        if (pFVar5 == (FMetasoundFrontendClassInput *)0x0) {
          **(undefined4 **)((longlong)this + 0x10) = 2;
          return;
        }
        **(undefined4 **)((longlong)this + 0x10) = (int)pFVar5->_padding_;
        return;
      }
    }
    iVar2 = (**(code **)(*(longlong *)param_1->Object + 0x40))();
    if (iVar2 == 1) {
      **(undefined4 **)((longlong)this + 0x10) = 1;
    }
  }
  return;
}

// operator() @ 14ae1ea30

bool __thiscall
`Metasound::Frontend::FBaseInputController::Disconnect'::__l5::<lambda_1>::operator()
          (void *this,FMetasoundFrontendEdge *param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)this;
  if ((((((puVar1[3] == (param_1->FromNodeID).D && puVar1[2] == (param_1->FromNodeID).C) &&
         puVar1[1] == (param_1->FromNodeID).B) && *puVar1 == (param_1->FromNodeID).A) &&
       (puVar1 = *(uint **)((longlong)this + 8),
       (((param_1->FromVertexID).D == puVar1[3] && (param_1->FromVertexID).C == puVar1[2]) &&
       (param_1->FromVertexID).B == puVar1[1]) && (param_1->FromVertexID).A == *puVar1)) &&
      (puVar1 = *(uint **)((longlong)this + 0x10),
      (((param_1->ToNodeID).D == puVar1[3] && (param_1->ToNodeID).C == puVar1[2]) &&
      (param_1->ToNodeID).B == puVar1[1]) && (param_1->ToNodeID).A == *puVar1)) &&
     (puVar1 = *(uint **)((longlong)this + 0x18),
     (((param_1->ToVertexID).D == puVar1[3] && (param_1->ToVertexID).C == puVar1[2]) &&
     (param_1->ToVertexID).B == puVar1[1]) && (param_1->ToVertexID).A == *puVar1)) {
    return true;
  }
  return false;
}

// CanConnectTo @ 14ae25e90

FConnectability * __thiscall
Metasound::Frontend::FBaseInputController::CanConnectTo
          (FBaseInputController *this,FConnectability *__return_storage_ptr__,
          IOutputController *param_1)

{
  TArray<Metasound::Frontend::FConverterNodeClassInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  EMetasoundFrontendVertexAccessType EVar5;
  EMetasoundFrontendVertexAccessType EVar6;
  FName *pFVar7;
  FName *pFVar8;
  INodeClassRegistry *pIVar9;
  undefined8 *puVar10;
  char local_res8 [8];
  INodeController *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 *local_88;
  char *local_80;
  code *local_78;
  undefined1 **local_70;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  pTVar1 = &__return_storage_ptr__->PossibleConverterNodeClasses;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayNum = 0;
  (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayMax = 0;
  __return_storage_ptr__->Connectable = No;
  __return_storage_ptr__->Reason = None;
  pFVar7 = (FName *)(**(code **)(this->_padding_ + 0x30))();
  pFVar8 = (FName *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (*pFVar7 == ::Invalid) {
    __return_storage_ptr__->Connectable = No;
    __return_storage_ptr__->Reason = IncompatibleDataTypes;
  }
  else {
    EVar5 = (**(code **)(this->_padding_ + 0x40))(this);
    EVar6 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    bVar4 = FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes(EVar6,EVar5);
    if (bVar4) {
      bVar4 = IsCastable(*pFVar8,*pFVar7);
      if (bVar4) {
        __return_storage_ptr__->Connectable = Yes;
        __return_storage_ptr__->Reason = None;
      }
      else {
        pIVar9 = INodeClassRegistry::Get();
        puVar10 = (undefined8 *)
                  (**(code **)((longlong)*pIVar9 + 0xd0))(pIVar9,&local_68,pFVar8,pFVar7);
        if (pTVar1 != (TArray<Metasound::Frontend::FConverterNodeClassInfo,TSizedDefaultAllocator<32>_>
                       *)puVar10) {
          pFVar2 = (pTVar1->AllocatorInstance).Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar10;
          *puVar10 = 0;
          (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayNum = *(int *)(puVar10 + 1);
          (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayMax =
               *(int *)((longlong)puVar10 + 0xc);
          puVar10[1] = 0;
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
        if (0 < (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayNum) {
          __return_storage_ptr__->Connectable = YesWithConverterNode;
        }
      }
    }
    else {
      __return_storage_ptr__->Connectable = No;
      __return_storage_ptr__->Reason = IncompatibleAccessTypes;
    }
  }
  if (__return_storage_ptr__->Connectable != No) {
    local_res8[0] = '\0';
    (**(code **)(*(longlong *)param_1 + 0x48))(param_1,&local_68);
    (**(code **)(this->_padding_ + 0x70))(this,&local_98);
    (**(code **)(*(longlong *)local_98 + 0x158))(local_98,local_48);
    (**(code **)(*local_68 + 0x158))(local_68,local_58);
    (**(code **)(this->_padding_ + 0x20))(this,local_38);
    local_88 = local_58;
    local_80 = local_res8;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::FGraphLinter::DoesConnectionCauseLoop'::__l2::<lambda_1>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,Metasound::Frontend::INodeController_const_&>
               ::Call;
    FGraphLinter::DepthFirstTraversal
              (local_98,(TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
                         *)&local_78);
    cVar3 = local_res8[0];
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    if (cVar3 != '\0') {
      __return_storage_ptr__->Connectable = No;
      __return_storage_ptr__->Reason = CausesLoop;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ClearConnectedObjectLiterals @ 14ae26290

void __thiscall
Metasound::Frontend::FBaseInputController::ClearConnectedObjectLiterals(FBaseInputController *this)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  undefined8 uVar4;
  undefined8 local_58;
  FText local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_1c;
  
  local_58 = 0;
  FText::FText(&local_50);
  local_40 = 0xc;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x28))(this);
  if (cVar2 != '\0') {
    pIVar3 = IDataTypeRegistry::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x20);
    uVar4 = (**(code **)(this->_padding_ + 0x30))(this);
    cVar2 = (*pcVar1)(pIVar3,uVar4,&local_58);
    if ((cVar2 != '\0') && ((local_40._7_1_ != '\0' || (local_38._6_1_ != '\0')))) {
      (**(code **)(this->_padding_ + 0x48))(this);
    }
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return;
}

// ClearLiteral @ 14ae26630

bool __thiscall Metasound::Frontend::FBaseInputController::ClearLiteral(FBaseInputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  INodeController *pIVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertex *pFVar5;
  longlong *plVar6;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar6 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar4);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendVertex *)0x0) {
    local_18 = (pFVar5->VertexID).A;
    uStack_14 = (pFVar5->VertexID).B;
    uStack_10 = (pFVar5->VertexID).C;
    uStack_c = (pFVar5->VertexID).D;
    pIVar3 = (this->OwningNode).Object;
    (**(code **)(*(longlong *)pIVar3 + 0x110))(pIVar3,&local_18);
  }
  return false;
}

// Connect @ 14ae26e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FBaseInputController::Connect
          (FBaseInputController *this,IOutputController *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  EMetasoundFrontendVertexAccessType EVar9;
  EMetasoundFrontendVertexAccessType EVar10;
  int iVar11;
  FName *this_00;
  FName *this_01;
  undefined8 uVar12;
  FMetasoundFrontendGraph *pFVar13;
  FMetasoundFrontendEdge *pFVar14;
  uint *puVar15;
  longlong *plVar16;
  FString local_38;
  FString local_28;
  
  this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))();
  this_01 = (FName *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (*this_00 != ::Invalid) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
    pcVar2 = *(code **)&(this->GraphPtr).GetObject;
    plVar3 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar16 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar16 = plVar3;
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    pFVar13 = (FMetasoundFrontendGraph *)(*pcVar2)(uVar12);
    (this->GraphPtr).CachedObjectPtr = pFVar13;
    if (pFVar13 != (FMetasoundFrontendGraph *)0x0) {
      bVar8 = IsCastable(*this_01,*this_00);
      if (bVar8) {
        EVar9 = (**(code **)(this->_padding_ + 0x40))(this);
        EVar10 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
        bVar8 = FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes(EVar10,EVar9);
        if (bVar8) {
          pFVar14 = FindEdge(this);
          if (pFVar14 == (FMetasoundFrontendEdge *)0x0) {
            iVar11 = (pFVar13->Edges).ArrayNum;
            piVar1 = &(pFVar13->Edges).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x440,&(pFVar13->Edges).AllocatorInstance,piVar1);
            }
            pFVar4 = (pFVar13->Edges).AllocatorInstance.Data;
            (pFVar13->Edges).ArrayNum = iVar11 + 1;
            pFVar14 = (FMetasoundFrontendEdge *)(pFVar4 + (longlong)iVar11 * 0x40);
            DefaultConstructItems<FMetasoundFrontendEdge,int>(pFVar14,1);
            puVar15 = (uint *)(**(code **)(this->_padding_ + 0x68))(this,&local_28);
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            (pFVar14->ToNodeID).A = *puVar15;
            (pFVar14->ToNodeID).B = uVar5;
            (pFVar14->ToNodeID).C = uVar6;
            (pFVar14->ToNodeID).D = uVar7;
            puVar15 = (uint *)(**(code **)(this->_padding_ + 0x20))(this,&local_28);
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            (pFVar14->ToVertexID).A = *puVar15;
            (pFVar14->ToVertexID).B = uVar5;
            (pFVar14->ToVertexID).C = uVar6;
            (pFVar14->ToVertexID).D = uVar7;
          }
          puVar15 = (uint *)(**(code **)(*(longlong *)param_1 + 0x40))(param_1,&local_28);
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          (pFVar14->FromNodeID).A = *puVar15;
          (pFVar14->FromNodeID).B = uVar5;
          (pFVar14->FromNodeID).C = uVar6;
          (pFVar14->FromNodeID).D = uVar7;
          puVar15 = (uint *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1,&local_28);
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          (pFVar14->FromVertexID).A = *puVar15;
          (pFVar14->FromVertexID).B = uVar5;
          (pFVar14->FromVertexID).C = uVar6;
          (pFVar14->FromVertexID).D = uVar7;
          (**(code **)(this->_padding_ + 200))(this);
          return true;
        }
        if (1 < (byte)LogMetaSound._0_1_) {
          EVar9 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
          ::LexToString(EVar9);
          EVar9 = (**(code **)(this->_padding_ + 0x40))(this);
          ::LexToString(EVar9);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
      }
      else if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this_01,&local_28);
        ::FName::ToString(this_00,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// ConnectWithConverterNode @ 14ae27090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FBaseInputController::ConnectWithConverterNode
          (FBaseInputController *this,IOutputController *param_1,FConverterNodeClassInfo *param_2)

{
  INodeController *pIVar1;
  code *pcVar2;
  char cVar3;
  FGuid *pFVar4;
  FName *pFVar5;
  bool bVar6;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  ForAnyElementType local_28;
  
  pIVar1 = (this->OwningNode).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x178))(pIVar1,&local_48);
  pcVar2 = *(code **)(*local_48 + 0x1f8);
  pFVar4 = FGuid::NewGuid((FGuid *)&local_28);
  local_38.Data.AllocatorInstance.Data._0_4_ = pFVar4->A;
  local_38.Data.AllocatorInstance.Data._4_4_ = pFVar4->B;
  local_38.Data.ArrayNum = pFVar4->C;
  local_38.Data.ArrayMax = pFVar4->D;
  (*pcVar2)(local_48,&local_78,&param_2->NodeKey,&local_38);
  (**(code **)(*local_78 + 0x68))(local_78,&local_58,param_2);
  (**(code **)(*local_78 + 0x88))(local_78,&local_68,&param_2->PreferredConverterOutputPin);
  cVar3 = (**(code **)(*local_58 + 0x18))();
  if (cVar3 == '\0') {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_2->PreferredConverterInputPin,(FString *)&local_28);
      pFVar5 = (FName *)(**(code **)(*local_78 + 0x140))();
      ::FName::ToString(pFVar5,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_38.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_38.Data.AllocatorInstance.Data));
      }
LAB_14ae2723c:
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
  }
  else {
    cVar3 = (**(code **)(*local_68 + 0x18))();
    if (cVar3 == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&param_2->PreferredConverterOutputPin,&local_38);
        pFVar5 = (FName *)(**(code **)(*local_78 + 0x140))();
        ::FName::ToString(pFVar5,(FString *)&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
        local_28.Data =
             (FScriptContainerElement *)
             CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                      (uint)local_38.Data.AllocatorInstance.Data);
        goto LAB_14ae2723c;
      }
    }
    else {
      cVar3 = (**(code **)(*local_58 + 0xa8))(local_58,param_1);
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(this->_padding_ + 0xa8))(this,local_68), cVar3 != '\0')) {
        bVar6 = true;
        goto LAB_14ae27248;
      }
    }
  }
  bVar6 = false;
LAB_14ae27248:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar6;
}

// Disconnect @ 14ae307f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FBaseInputController::Disconnect
          (FBaseInputController *this,IOutputController *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  FGuid local_68;
  FGuid local_58;
  FGuid local_48;
  FGuid local_38;
  <lambda_1> local_28;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
  pcVar1 = *(code **)&(this->GraphPtr).GetObject;
  plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
  plVar7 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  pFVar6 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar5);
  (this->GraphPtr).CachedObjectPtr = pFVar6;
  bVar3 = false;
  if (pFVar6 != (FMetasoundFrontendGraph *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x40))(param_1,&local_68);
    (**(code **)(*(longlong *)param_1 + 0x20))(param_1,&local_58);
    (**(code **)(this->_padding_ + 0x68))(this,&local_48);
    (**(code **)(this->_padding_ + 0x20))(this,&local_38);
    local_28.FromNodeID = &local_68;
    local_28.FromVertexID = &local_58;
    local_28.ToNodeID = &local_48;
    local_28.ToVertexID = &local_38;
    iVar4 = TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
            RemoveAllSwap<_Metasound::Frontend::FBaseInputController::Disconnect_::__l5::<lambda_1>_>
                      (&pFVar6->Edges,&local_28,Default);
    bVar3 = 0 < iVar4;
  }
  return bVar3;
}

// Disconnect @ 14ae308e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall Metasound::Frontend::FBaseInputController::Disconnect(FBaseInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  FMetasoundFrontendGraph *pFVar5;
  longlong *plVar6;
  <lambda_1>_conflict local_38;
  FGuid local_28;
  FGuid local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
  pcVar1 = *(code **)&(this->GraphPtr).GetObject;
  plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
  plVar6 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar4);
  (this->GraphPtr).CachedObjectPtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendGraph *)0x0) {
    (**(code **)(this->_padding_ + 0x68))(this,&local_28);
    (**(code **)(this->_padding_ + 0x20))(this,&local_18);
    local_38.NodeID = &local_28;
    local_38.VertexID = &local_18;
    iVar3 = TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
            RemoveAllSwap<_Metasound::Frontend::FBaseInputController::Disconnect_::__l5::<lambda_1>_>
                      (&pFVar5->Edges,&local_38,Default);
    return 0 < iVar3;
  }
  return false;
}

// FindEdge @ 14ae32800

FMetasoundFrontendEdge * __thiscall
Metasound::Frontend::FBaseInputController::FindEdge(FBaseInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FMetasoundFrontendGraph *pFVar4;
  FMetasoundFrontendEdge *pFVar5;
  longlong *plVar6;
  FMetasoundFrontendEdge *pFVar7;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint local_10;
  uint uStack_c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
  pcVar1 = *(code **)&(this->GraphPtr).GetObject;
  plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
  plVar6 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar3);
  (this->GraphPtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendGraph *)0x0) {
    (**(code **)(this->_padding_ + 0x68))(this,&local_28);
    (**(code **)(this->_padding_ + 0x20))(this,&local_18);
    pFVar5 = (FMetasoundFrontendEdge *)(pFVar4->Edges).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (pFVar4->Edges).ArrayNum;
    while( true ) {
      if (pFVar5 == pFVar7) {
        return (FMetasoundFrontendEdge *)0x0;
      }
      if ((((local_28 == (pFVar5->ToNodeID).A && uStack_1c == (pFVar5->ToNodeID).D) &&
           local_20 == (pFVar5->ToNodeID).C) && uStack_24 == (pFVar5->ToNodeID).B) &&
         (((local_18 == (pFVar5->ToVertexID).A && uStack_14 == (pFVar5->ToVertexID).B) &&
          local_10 == (pFVar5->ToVertexID).C) && uStack_c == (pFVar5->ToVertexID).D)) break;
      pFVar5 = pFVar5 + 1;
    }
    return pFVar5;
  }
  return (FMetasoundFrontendEdge *)0x0;
}

// FindEdge @ 14ae32940

FMetasoundFrontendEdge * __thiscall
Metasound::Frontend::FBaseInputController::FindEdge(FBaseInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FMetasoundFrontendGraph *pFVar4;
  FMetasoundFrontendEdge *pFVar5;
  longlong *plVar6;
  FMetasoundFrontendEdge *pFVar7;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint local_10;
  uint uStack_c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
  pcVar1 = *(code **)&(this->GraphPtr).GetObject;
  plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
  plVar6 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar3);
  (this->GraphPtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendGraph *)0x0) {
    (**(code **)(this->_padding_ + 0x68))(this,&local_28);
    (**(code **)(this->_padding_ + 0x20))(this,&local_18);
    pFVar5 = (FMetasoundFrontendEdge *)(pFVar4->Edges).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (pFVar4->Edges).ArrayNum;
    while( true ) {
      if (pFVar5 == pFVar7) {
        return (FMetasoundFrontendEdge *)0x0;
      }
      if ((((local_28 == (pFVar5->ToNodeID).A && uStack_1c == (pFVar5->ToNodeID).D) &&
           local_20 == (pFVar5->ToNodeID).C) && uStack_24 == (pFVar5->ToNodeID).B) &&
         (((uStack_14 == (pFVar5->ToVertexID).B && local_10 == (pFVar5->ToVertexID).C) &&
          uStack_c == (pFVar5->ToVertexID).D) && local_18 == (pFVar5->ToVertexID).A)) break;
      pFVar5 = pFVar5 + 1;
    }
    return pFVar5;
  }
  return (FMetasoundFrontendEdge *)0x0;
}

// GetClassDefaultLiteral @ 14ae37700

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FBaseInputController::GetClassDefaultLiteral(FBaseInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FMetasoundFrontendClassInput *this_00;
  FMetasoundFrontendLiteral *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassInputPtr).GetObject);
  pcVar1 = *(code **)&(this->ClassInputPtr).GetObject;
  plVar2 = *(longlong **)&(this->ClassInputPtr).GetObject.field_0x28;
  plVar5 = (longlong *)&(this->ClassInputPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  this_00 = (FMetasoundFrontendClassInput *)(*pcVar1)(uVar3);
  (this->ClassInputPtr).CachedObjectPtr = this_00;
  if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
    pFVar4 = FMetasoundFrontendClassInput::FindConstDefault(this_00,&DefaultPageID);
    return pFVar4;
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetConnectedOutput @ 14ae377e0

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FBaseInputController::GetConnectedOutput
          (FBaseInputController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__)

{
  INodeController *pIVar1;
  FMetasoundFrontendEdge *pFVar2;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  pFVar2 = FindEdge(this);
  if (pFVar2 != (FMetasoundFrontendEdge *)0x0) {
    pIVar1 = (this->OwningNode).Object;
    (**(code **)(*(longlong *)pIVar1 + 0x178))(pIVar1,&local_28);
    local_18 = (pFVar2->FromNodeID).A;
    uStack_14 = (pFVar2->FromNodeID).B;
    uStack_10 = (pFVar2->FromNodeID).C;
    uStack_c = (pFVar2->FromNodeID).D;
    (**(code **)(*local_28 + 0x60))(local_28,&local_38,&local_18);
    local_18 = (pFVar2->FromVertexID).A;
    uStack_14 = (pFVar2->FromVertexID).B;
    uStack_10 = (pFVar2->FromVertexID).C;
    uStack_c = (pFVar2->FromVertexID).D;
    (**(code **)(*local_38 + 200))(local_38,__return_storage_ptr__,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    return __return_storage_ptr__;
  }
  IOutputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConnectedOutput @ 14ae378a0

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FBaseInputController::GetConnectedOutput
          (FBaseInputController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__)

{
  INodeController *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FMetasoundFrontendEdge *pFVar4;
  undefined8 *puVar5;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar6;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_18;
  
  pFVar4 = FindEdge(this);
  if (pFVar4 != (FMetasoundFrontendEdge *)0x0) {
    pIVar1 = (this->OwningNode).Object;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)pIVar1 + 0x178))(pIVar1,&local_18);
    pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
    plVar3 = (longlong *)*puVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_18.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_18.SharedReferenceCount.ReferenceController));
    local_18.Object._0_4_ = (pFVar4->FromNodeID).A;
    local_18.Object._4_4_ = (pFVar4->FromNodeID).B;
    local_18.SharedReferenceCount.ReferenceController._0_4_ = (pFVar4->FromNodeID).C;
    local_18.SharedReferenceCount.ReferenceController._4_4_ = (pFVar4->FromNodeID).D;
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_28,&local_18);
    local_18.Object._0_4_ = (pFVar4->FromVertexID).A;
    local_18.Object._4_4_ = (pFVar4->FromVertexID).B;
    local_18.SharedReferenceCount.ReferenceController._0_4_ = (pFVar4->FromVertexID).C;
    local_18.SharedReferenceCount.ReferenceController._4_4_ = (pFVar4->FromVertexID).D;
    (**(code **)(*local_28 + 0xc0))(local_28,__return_storage_ptr__,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  pTVar6 = IOutputController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_18.SharedReferenceCount.ReferenceController._4_4_,
                      (uint)local_18.SharedReferenceCount.ReferenceController));
  return __return_storage_ptr__;
}

// GetDataType @ 14ae37ae0

FName * __thiscall
Metasound::Frontend::FBaseInputController::GetDataType(FBaseInputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVertex *pFVar4;
  FName *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar6 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar3);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar4;
  pFVar5 = &::Invalid;
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    pFVar5 = &pFVar4->TypeName;
  }
  return pFVar5;
}

// GetID @ 14ae38780

FGuid * __thiscall
Metasound::Frontend::FBaseInputController::GetID
          (FBaseInputController *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->ID).B;
  uVar2 = (this->ID).C;
  uVar3 = (this->ID).D;
  __return_storage_ptr__->A = (this->ID).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetLiteral @ 14ae391b0

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FBaseInputController::GetLiteral(FBaseInputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  INodeController *pIVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendLiteral *pFVar6;
  longlong *plVar7;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar7 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  pFVar5 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar4);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendVertex *)0x0) {
    pIVar3 = (this->OwningNode).Object;
                    /* WARNING: Could not recover jumptable at 0x00014ae39205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar6 = (FMetasoundFrontendLiteral *)
             (**(code **)(*(longlong *)pIVar3 + 0x100))(pIVar3,&pFVar5->VertexID);
    return pFVar6;
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetName @ 14ae39300

FName * __thiscall Metasound::Frontend::FBaseInputController::GetName(FBaseInputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVertex *pFVar4;
  FMetasoundFrontendVertex *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar6 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar3);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar4;
  pFVar5 = (FMetasoundFrontendVertex *)&::Invalid;
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    pFVar5 = pFVar4;
  }
  return &pFVar5->Name;
}

// GetOwningNode @ 14ae3c990

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FBaseInputController::GetOwningNode
          (FBaseInputController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningNode).Object;
  pTVar1 = (this->OwningNode).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae3c9c0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FBaseInputController::GetOwningNode
          (FBaseInputController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningNode).Object;
  pTVar1 = (this->OwningNode).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningNodeID @ 14ae3cad0

FGuid * __thiscall
Metasound::Frontend::FBaseInputController::GetOwningNodeID
          (FBaseInputController *this,FGuid *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->OwningNode).Object + 0x158))();
  return __return_storage_ptr__;
}

// GetVertexAccessType @ 14ae3dc40

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FBaseInputController::GetVertexAccessType(FBaseInputController *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  EMetasoundFrontendVertexAccessType EVar4;
  IInputController *pIVar5;
  IInputController *pIVar6;
  IInputController *pIVar7;
  IInputController *pIVar8;
  bool bVar9;
  char local_res8 [8];
  EMetasoundFrontendVertexAccessType local_res10 [2];
  TSharedRef<Metasound::Frontend::IInputController_const_,1> local_48;
  code *local_38;
  FBaseInputController **local_30;
  FBaseInputController *local_28;
  char *local_20;
  EMetasoundFrontendVertexAccessType *local_18;
  
  pIVar5 = (IInputController *)this->_padding_;
  local_20 = local_res8;
  local_18 = local_res10;
  local_res10[0] = Unset;
  pIVar7 = (IInputController *)0x0;
  local_res8[0] = '\0';
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FBaseInputController::GetVertexAccessType'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::IInputController_const_,1>_>
             ::Call;
  pIVar6 = pIVar5;
  pIVar8 = pIVar7;
  if (pIVar5 != (IInputController *)0x0) {
    iVar2 = *(int *)&pIVar5->field_0x8;
    do {
      pIVar6 = pIVar7;
      pIVar8 = (IInputController *)0x0;
      if (iVar2 == 0) goto LAB_14ae3dcb1;
      LOCK();
      iVar3 = *(int *)&pIVar5->field_0x8;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&pIVar5->field_0x8 = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar5;
    pIVar8 = (IInputController *)this->_padding_;
  }
LAB_14ae3dcb1:
  pIVar5 = (IInputController *)&pIVar8->field_0x8;
  if (pIVar8 == (IInputController *)0x0) {
    pIVar5 = pIVar7;
  }
  local_28 = this;
  if ((pIVar5 != (IInputController *)&this->_padding_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  if ((pIVar8 == (IInputController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  local_48.Object = pIVar8;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar8 == (IInputController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  IterateReroutedInputs
            (&local_48,
             (TFunctionRef<void___cdecl(TSharedRef<Metasound::Frontend::IInputController_const_,1>)>
              *)&local_38);
  EVar4 = Reference;
  if (local_res8[0] != '\0') {
    EVar4 = local_res10[0];
  }
  return EVar4;
}

// IsConnected @ 14ae3f0a0

bool __thiscall Metasound::Frontend::FBaseInputController::IsConnected(FBaseInputController *this)

{
  FMetasoundFrontendEdge *pFVar1;
  
  pFVar1 = FindEdge(this);
  return pFVar1 != (FMetasoundFrontendEdge *)0x0;
}

// IsConnectionUserModifiable @ 14ae3f0c0

bool __thiscall
Metasound::Frontend::FBaseInputController::IsConnectionUserModifiable(FBaseInputController *this)

{
  code *pcVar1;
  EMetasoundFrontendClassType EVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendClassMetadata *pFVar5;
  undefined8 *puVar6;
  INodeTemplateRegistry *pIVar7;
  longlong *plVar8;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  FNodeClassRegistryKey local_38;
  
  (**(code **)(this->_padding_ + 0x70))(this,&local_58);
  pFVar5 = (FMetasoundFrontendClassMetadata *)(**(code **)(*local_58 + 0x118))();
  EVar2 = FMetasoundFrontendClassMetadata::GetType(pFVar5);
  if (EVar2 == Template) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x70))(this,local_48);
    pFVar5 = (FMetasoundFrontendClassMetadata *)(**(code **)(*(longlong *)*puVar6 + 0x118))();
    FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    pIVar7 = INodeTemplateRegistry::Get();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
    if (plVar8 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar8 + 0x58))(plVar8);
      goto LAB_14ae3f170;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5730644145723146014>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendInputController.cpp"
                       ,0xe2,"Template");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  uVar4 = 1;
LAB_14ae3f170:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return (bool)uVar4;
}

// IsValid @ 14ae3f6c0

bool __thiscall Metasound::Frontend::FBaseInputController::IsValid(FBaseInputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  
  cVar3 = (**(code **)(*(longlong *)(this->OwningNode).Object + 0x18))();
  if (cVar3 != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
    plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
    pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
    plVar7 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar7 = plVar1;
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar4);
    (this->NodeVertexPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendVertex *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
      pcVar2 = *(code **)&(this->GraphPtr).GetObject;
      plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
      plVar7 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar7 = plVar1;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      pFVar6 = (FMetasoundFrontendGraph *)(*pcVar2)(uVar4);
      (this->GraphPtr).CachedObjectPtr = pFVar6;
      if (pFVar6 != (FMetasoundFrontendGraph *)0x0) {
        return true;
      }
    }
  }
  return false;
}

// SetLiteral @ 14ae45500

void __thiscall
Metasound::Frontend::FBaseInputController::SetLiteral
          (FBaseInputController *this,FMetasoundFrontendLiteral *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  INodeController *pIVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertex *pFVar5;
  longlong *plVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  FMetasoundFrontendLiteral local_68;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar6 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar4);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendVertex *)0x0) {
    pIVar3 = (this->OwningNode).Object;
    local_78._0_4_ = (pFVar5->VertexID).A;
    local_78._4_4_ = (pFVar5->VertexID).B;
    uStack_70._0_4_ = (pFVar5->VertexID).C;
    uStack_70._4_4_ = (pFVar5->VertexID).D;
    pcVar2 = *(code **)(*(longlong *)pIVar3 + 0x108);
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,param_1);
    (*pcVar2)(pIVar3,&local_78);
    FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_68);
  }
  return;
}

// SetName @ 14ae45610

void __thiscall
Metasound::Frontend::FBaseInputController::SetName(FBaseInputController *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendInputController.h"
                     ,0x33,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ShareAccess @ 14ae45c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FBaseInputController::ShareAccess
          (FBaseInputController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  FMetasoundFrontendGraph *pFVar5;
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
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)__return_storage_ptr__,
             &this->NodeVertexPtr);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)&__return_storage_ptr__->_padding_,
             &this->ClassInputPtr);
  (__return_storage_ptr__->Graph).CachedObjectPtr = (this->GraphPtr).CachedObjectPtr;
  local_58._0_8_ = *(undefined8 *)&(this->GraphPtr).GetObject;
  uStack_30 = (longlong *)0x0;
  if ((FMetasoundFrontendGraph *)local_58._0_8_ != (FMetasoundFrontendGraph *)0x0) {
    puVar1 = *(undefined8 **)&(this->GraphPtr).GetObject.field_0x28;
    puVar10 = (undefined8 *)&(this->GraphPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar10 = puVar1;
    }
    (**(code **)*puVar10)(puVar10,local_58 + 0x10);
  }
  pFVar5 = *(FMetasoundFrontendGraph **)&(__return_storage_ptr__->Graph).GetObject;
  lVar4 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x8;
  lVar6 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x10;
  lVar7 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x18;
  uVar2 = *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject.field_0x20;
  plVar3 = *(longlong **)&(__return_storage_ptr__->Graph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject = local_58._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject.field_0x8 = local_58._8_8_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x10 = local_58._16_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x14 = local_58._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x18 = local_58._24_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x1c = local_58._28_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x20 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x24 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x2c = uStack_30._4_4_;
  local_58._16_8_ = lVar6;
  local_58._24_8_ = lVar7;
  local_58._32_8_ = uVar2;
  uStack_30 = plVar3;
  local_58._0_8_ = pFVar5;
  local_58._8_8_ = lVar4;
  if (pFVar5 != (FMetasoundFrontendGraph *)0x0) {
    plVar11 = (longlong *)(local_58 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
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

// ShareAccess @ 14ae45e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FBaseInputController::ShareAccess
          (FBaseInputController *this,FConstDocumentAccess *__return_storage_ptr__)

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
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            (&__return_storage_ptr__->ConstVertex,&this->NodeVertexPtr);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            (&__return_storage_ptr__->ConstClassInput,&this->ClassInputPtr);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
  (__return_storage_ptr__->ConstGraph).CachedObjectPtr = (FMetasoundFrontendGraph *)local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstGraph).GetObject;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x24 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x2c = local_58._60_4_;
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

