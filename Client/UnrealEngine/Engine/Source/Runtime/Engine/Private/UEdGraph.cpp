// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// UEdGraph @ 147b3ae00

UEdGraph * __thiscall UEdGraph::UEdGraph(UEdGraph *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEdGraph__6B_;
  (this->Schema).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  *(undefined8 *)&this->OnGraphChanged = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x18 = 2;
  return this;
}

// UEdGraph @ 147b3ae50

UEdGraph * __thiscall UEdGraph::UEdGraph(UEdGraph *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEdGraph__6B_;
  this->bEditable = 1;
  this->bAllowDeletion = 1;
  (this->Schema).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  *(undefined8 *)&this->OnGraphChanged = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnGraphChanged).field_0x18 = 2;
  return this;
}

// ~UEdGraph @ 147b3d600

void __thiscall UEdGraph::~UEdGraph(UEdGraph *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UEdGraph__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGraphChanged).field_0x8,*(int *)&(this->OnGraphChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnGraphChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGraphChanged);
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddNode @ 147b43ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UEdGraph::AddNode(UEdGraph *this,UEdGraphNode *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_118 [32];
  UEdGraphNode *local_c8;
  UEdGraphNode *local_c0;
  UEdGraphNode *local_b8 [2];
  int local_a8;
  UEdGraph *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)(this->Nodes).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Nodes).AllocatorInstance,piVar1);
  }
  (this->Nodes).ArrayNum = iVar5 + 1;
  *(UEdGraphNode **)((this->Nodes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  if ((UEdGraph *)param_1->_padding_ != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeToAdd->GetOuter() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraph.cpp"
                       ,0xe8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_a8 = (uint)param_3 * 2 + 1;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_b8[0] = param_1;
  local_a0 = this;
  local_48 = param_2;
  TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator>::
  Emplace<UEdGraphNode_const_*_const_&>
            ((TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator>
              *)local_98,&local_c0,(bool *)local_b8);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar5 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// AddOnGraphChangedHandler @ 147b43d00

FDelegateHandle __thiscall
UEdGraph::AddOnGraphChangedHandler
          (UEdGraph *this,
          TDelegate<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnGraphChanged,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// CreateNode @ 147b4e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEdGraphNode * __thiscall
UEdGraph::CreateNode(UEdGraph *this,TSubclassOf<UEdGraphNode> param_1,bool param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UEdGraphNode *this_00;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if (lVar2 != 0) {
    pUVar6 = UEdGraphNode::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_147b4e884;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_147b4e884:
  FVar4 = local_c8;
  if (local_c8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = UEdGraphNode::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  FVar5 = local_c8;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_c8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_c8.Number = FVar4.Number;
  local_b8._16_4_ = local_c8.ComparisonIndex.Value;
  local_b8._20_4_ = local_c8.Number;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_c8 = FVar5;
  local_b8._8_8_ = this;
  this_00 = (UEdGraphNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((this->_padding_ & 0x40) != 0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
  }
  (**(code **)(this->_padding_ + 0x2b0))(this,this_00,param_2,param_3);
  return this_00;
}

// GetAllChildrenGraphs @ 147b63a90

void __thiscall
UEdGraph::GetAllChildrenGraphs
          (UEdGraph *this,TArray<UEdGraph_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetGoodPlaceForNewNode @ 147b65900

FDeprecateSlateVector2D __thiscall UEdGraph::GetGoodPlaceForNewNode(UEdGraph *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FDeprecateSlateVector2D FVar8;
  FDeprecateSlateVector2D in_RDX;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = (this->Nodes).ArrayNum;
  fVar12 = 0.0;
  fVar11 = 0.0;
  if ((0 < iVar1) && (lVar10 = *(longlong *)(this->Nodes).AllocatorInstance.Data, lVar10 != 0)) {
    uVar9 = 1;
    fVar12 = (float)*(int *)(lVar10 + 0x48);
    fVar11 = (float)*(int *)(lVar10 + 0x4c);
    if (1 < iVar1) {
      lVar10 = 8;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Nodes).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          FVar8 = (FDeprecateSlateVector2D)(*pcVar3)();
          return FVar8;
        }
        lVar2 = *(longlong *)((this->Nodes).AllocatorInstance.Data + lVar10);
        fVar5 = fVar11;
        if (lVar2 != 0) {
          fVar4 = (float)*(int *)(lVar2 + 0x48);
          if (fVar12 <= (float)*(int *)(lVar2 + 0x48)) {
            fVar4 = fVar12;
          }
          fVar5 = (float)*(int *)(lVar2 + 0x4c);
          fVar12 = fVar4;
          if ((float)*(int *)(lVar2 + 0x4c) <= fVar11) {
            fVar5 = fVar11;
          }
        }
        fVar11 = fVar5;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (this->Nodes).ArrayNum);
    }
  }
  *(ulonglong *)in_RDX = CONCAT44(fVar11 + __real_43800000,fVar12);
  return in_RDX;
}

// GetOuterGraph @ 147b6a080

UEdGraph * __cdecl UEdGraph::GetOuterGraph(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    while (param_1 = (UObject *)((UEdGraph *)param_1)->_padding_,
          (UEdGraph *)param_1 != (UEdGraph *)0x0) {
      pUVar2 = StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(((UEdGraph *)param_1)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UEdGraph *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        pUVar2 = StaticClass();
        iVar1 = (int)pUVar2->_padding_;
        if ((*(int *)(((UEdGraph *)param_1)->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(((UEdGraph *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar2->_padding_)) {
          param_1 = (UObject *)0x0;
        }
        return (UEdGraph *)param_1;
      }
    }
  }
  return (UEdGraph *)0x0;
}

// GetPrivateStaticClass @ 147b6bce0

UClass * __cdecl UEdGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraph",&Z_Registration_Info_UClass_UEdGraph.InnerSingleton,
               StaticRegisterNativesUEdGraph,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdGraph>,InternalVTableHelperCtorCaller<UEdGraph>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraph.InnerSingleton;
}

// GetSchema @ 147b6e8a0

UEdGraphSchema * __thiscall UEdGraph::GetSchema(UEdGraph *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UEdGraphSchema *pUVar7;
  UClass *pUVar8;
  
  pUVar8 = (this->Schema).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return (UEdGraphSchema *)0x0;
  }
  pUVar6 = UEdGraphSchema::StaticClass();
  if (pUVar6 == (UClass *)0x0) {
    return (UEdGraphSchema *)0x0;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return (UEdGraphSchema *)0x0;
  }
  pUVar8 = (this->Schema).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return (UEdGraphSchema *)0x0;
  }
  pUVar6 = UEdGraphSchema::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = (this->Schema).Class.field0_0x0.DebugPtr;
      goto LAB_147b6e933;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_147b6e933:
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = UEdGraphSchema::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(lVar3 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1469,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UEdGraphSchema *)(*pcVar4)();
    return pUVar7;
  }
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  return (UEdGraphSchema *)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
}

// MoveNodesToAnotherGraph @ 147b79090

void __thiscall
UEdGraph::MoveNodesToAnotherGraph(UEdGraph *this,UEdGraph *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UObject *local_28 [2];
  
  iVar7 = (param_1->Nodes).ArrayNum;
  uVar8 = (this->Nodes).ArrayNum + iVar7;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(param_1->Nodes).ArrayMax;
  if ((param_1->Nodes).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(param_1->Nodes).AllocatorInstance,iVar7,piVar1);
  }
  iVar7 = (this->Nodes).ArrayNum;
  while( true ) {
    if (iVar7 == 0) {
      (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147b792c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2c0))(this);
      return;
    }
    if (((this->Nodes).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pUVar4 = *(UObject **)
              ((this->Nodes).AllocatorInstance.Data + (longlong)(this->Nodes).ArrayNum * 8 + -8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    iVar7 = (this->Nodes).ArrayNum;
    uVar8 = iVar7 - 1;
    pFVar3 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
    iVar7 = ~uVar8 + iVar7;
    if (iVar7 != 0) {
      memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
    }
    piVar2 = &(this->Nodes).ArrayNum;
    *piVar2 = *piVar2 + -1;
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x170))(pUVar4,0,param_1,(uint)param_3 << 5 | 0x10);
      local_28[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar3 = (param_1->Nodes).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (param_1->Nodes).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_1->Nodes).AllocatorInstance,piVar1);
      }
      (param_1->Nodes).ArrayNum = iVar7 + 1;
      *(UObject **)((param_1->Nodes).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
    }
    iVar7 = (this->Nodes).ArrayNum;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// NotifyGraphChanged @ 147b7a320

void __thiscall UEdGraph::NotifyGraphChanged(UEdGraph *this,FEdGraphEditAction *param_1)

{
  TMulticastDelegate<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnGraphChanged,param_1);
  return;
}

// NotifyGraphChanged @ 147b7a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UEdGraph::NotifyGraphChanged(UEdGraph *this)

{
  ulonglong uVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  bool local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68.MaxBits = 0x80;
  local_88._0_4_ = GRAPHACTION_Default;
  local_88._8_8_ = (UEdGraph *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_28 = false;
  local_48 = 0xffffffff;
  TMulticastDelegate<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnGraphChanged,(FEdGraphEditAction *)local_88);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// NotifyNodeChanged @ 147b7ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UEdGraph::NotifyNodeChanged(UEdGraph *this,UEdGraphNode *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ForElementType<unsigned_int> *pFVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_128 [32];
  FSparseArrayAllocationInfo local_f8;
  undefined4 local_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  undefined4 local_a8;
  UEdGraph *local_a0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = 8;
  local_a0 = this;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                     &local_98.Data.ArrayMax);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_98.AllocationFlags,1);
  FVar13 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
  if (local_98.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FVar13 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
  }
  uVar8 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar8;
  puVar1 = (uint *)((longlong)FVar13 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar8 & 0x1f));
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_98,&local_f8,iVar4);
  if (local_f8.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    *(UEdGraphNode **)(local_f8.Pointer)->InlineData = param_1;
    pFVar3 = local_f8.Pointer;
    pFVar3->InlineData[8] = 0xff;
    pFVar3->InlineData[9] = 0xff;
    pFVar3->InlineData[10] = 0xff;
    pFVar3->InlineData[0xb] = 0xff;
    pTVar12 = local_f8.Pointer;
  }
  uVar10 = *(ulonglong *)(pTVar12->AllocatorInstance).InlineData;
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
     (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
    FVar7.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar7.Data = local_58.Data;
    }
    for (iVar4 = *(int *)(FVar7.Data + (ulonglong)(local_50 - 1 & uVar8) * 4); iVar4 != -1;
        iVar4 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar4 * 0x10 + 8)) {
      if (*(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar4 * 0x10) == uVar10) {
        if (iVar4 != -1) {
          *(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar4 * 0x10) = uVar10;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(&local_98,local_f8.Index,1);
          goto LAB_147b7af52;
        }
        break;
      }
    }
  }
  uVar10 = 0;
  uVar14 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
  uVar11 = 1;
  if (3 < uVar14) {
    uVar9 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar11 <= (int)local_50)) {
    uVar8 = local_50 - 1 & uVar8;
    *(uint *)((pTVar12->AllocatorInstance).InlineData + 0xc) = uVar8;
    FVar7.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar7.Data = local_58.Data;
    }
    uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
    *(undefined4 *)((pTVar12->AllocatorInstance).InlineData + 8) =
         *(undefined4 *)(FVar7.Data + uVar10 * 4);
    *(int *)(FVar7.Data + uVar10 * 4) = local_f8.Index;
    goto LAB_147b7af52;
  }
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar8 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_147b7ad54;
      }
    }
    else {
LAB_147b7ad54:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,4);
    }
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
      uVar9 = uVar10;
      do {
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar7.Data + uVar6 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_50 != 0) {
    local_f8.Pointer = &local_98.AllocationFlags;
    local_f8.Index = 0;
    local_f8._4_4_ = 1;
    uStack_e4 = 0;
    uStack_e0 = 0;
    if (local_98.AllocationFlags.NumBits != 0) {
      FVar13 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
      if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar8 = *(uint *)FVar13;
      uVar9 = uVar10;
      while (uVar8 == 0) {
        uStack_e0 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_e0;
        iVar4 = (int)uVar10;
        local_f8.Index = iVar4 + 1;
        uVar10 = (ulonglong)(uint)local_f8.Index;
        if ((int)((local_98.AllocationFlags.NumBits - 1U) +
                 ((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            local_f8.Index) goto LAB_147b7ae5e;
        uVar8 = *(uint *)((uchar *)((longlong)FVar13 + 4) + (longlong)iVar4 * 4);
      }
      local_f8._4_4_ = -uVar8 & uVar8;
      uVar10 = (ulonglong)(uint)local_f8._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_e4 = (int)lVar2 + -1 + (int)uVar9;
      uVar10 = (ulonglong)uStack_e4;
      if (local_98.AllocationFlags.NumBits < (int)uStack_e4) {
LAB_147b7ae5e:
        uVar10 = (ulonglong)(uint)local_98.AllocationFlags.NumBits;
        uStack_e4 = local_98.AllocationFlags.NumBits;
      }
    }
    local_e8 = 0xffffffff;
    local_d8 = &local_98;
    local_d0._padding_ = CONCAT44(local_f8._4_4_,local_f8.Index);
    local_d0.CurrentBitIndex = uStack_e4;
    local_d0.UnvisitedBitMask = 0xffffffff;
    local_d0._28_4_ = uStack_dc;
    local_d0.BaseBitIndex = uStack_e0;
    local_d0.Array = local_f8.Pointer;
    if ((int)uVar10 < local_98.AllocationFlags.NumBits) {
      do {
        pFVar16 = (local_d8->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)pFVar16 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar16 >> 4)
                ) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & local_50 - 1;
        *(uint *)(pFVar16 + 0xc) = uVar8;
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar9 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(pFVar16 + 8) = *(undefined4 *)(FVar7.Data + uVar9 * 4);
        *(int *)(FVar7.Data + uVar9 * 4) = (int)uVar10;
        local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
        uVar10 = (ulonglong)(uint)local_d0.CurrentBitIndex;
      } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
    }
  }
LAB_147b7af52:
  (**(code **)(this->_padding_ + 0x2b8))(this);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar4 = local_98.Data.ArrayMax;
  local_98.Data._8_8_ = local_98.Data._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_98,0,&local_98.Data.ArrayMax);
  }
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_98.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_98.AllocationFlags.MaxBits) {
    local_98.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98.AllocationFlags,0);
  }
  if (local_98.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_98.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveNode @ 147b84820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UEdGraph::RemoveNode(UEdGraph *this,UEdGraphNode *param_1,bool param_2,bool param_3)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UEdGraphNode *pUVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ulonglong *puVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong *puVar20;
  undefined1 auStackY_188 [32];
  int local_134;
  UEdGraphNode *local_130;
  uint local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  UEdGraph *local_108;
  UEdGraphNode *local_100;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FSparseArrayAllocationInfo local_d0;
  undefined4 local_b8;
  UEdGraph *local_b0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_130 = param_1;
  local_108 = this;
  local_100 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar19 = (this->Nodes).AllocatorInstance.Data;
  if (((pFVar19 <= (FScriptContainerElement *)&local_130) &&
      ((FScriptContainerElement *)&local_130 < pFVar19 + (longlong)(this->Nodes).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_134 = (this->Nodes).ArrayNum;
  puVar11 = (ulonglong *)0x0;
  if (local_134 == 0) {
    local_134 = 0;
  }
  else {
    pFVar19 = (this->Nodes).AllocatorInstance.Data;
    bVar4 = *(UEdGraphNode **)pFVar19 != local_130;
    pUVar8 = local_130;
    puVar13 = puVar11;
    puVar15 = puVar11;
    puVar20 = puVar11;
    do {
      uVar14 = (uint)puVar15;
      uVar12 = uVar14;
      do {
        puVar13 = (ulonglong *)((longlong)puVar13 + 1);
        uVar12 = uVar12 + 1;
        puVar15 = (ulonglong *)(ulonglong)uVar12;
        if ((longlong)local_134 <= (longlong)puVar13) break;
      } while (bVar4 == (*(UEdGraphNode **)(pFVar19 + (longlong)puVar13 * 8) != pUVar8));
      if (bVar4 != false) {
        uVar17 = (uint)puVar20;
        if (uVar17 != uVar14) {
          memmove(pFVar19 + (longlong)(int)uVar17 * 8,pFVar19 + (longlong)(int)uVar14 * 8,
                  (longlong)(int)(uVar12 - uVar14) << 3);
          pUVar8 = local_130;
        }
        puVar20 = (ulonglong *)(ulonglong)(uVar17 + (uVar12 - uVar14));
      }
      bVar4 = (bool)(bVar4 ^ 1);
    } while ((longlong)puVar13 < (longlong)local_134);
    local_134 = local_134 - (int)puVar20;
    (local_108->Nodes).ArrayNum = (int)puVar20;
    this = local_108;
    param_1 = local_100;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.AllocationFlags.NumBits = 0;
  local_a8.AllocationFlags.MaxBits = 0x80;
  local_a8.FirstFreeIndex = -1;
  local_a8.NumFreeIndices = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_b8 = 4;
  local_b0 = this;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                     &local_a8.Data.ArrayMax);
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_a8.AllocationFlags,1);
  FVar16 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
  if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FVar16 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
  }
  uVar12 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar12;
  puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar12 & 0x1f));
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_a8,&local_d0,iVar6);
  puVar13 = puVar11;
  if (local_d0.Pointer != (ulonglong *)0x0) {
    *(UEdGraphNode **)local_d0.Pointer = param_1;
    *(undefined4 *)((longlong)local_d0.Pointer + 8) = 0xffffffff;
    puVar13 = local_d0.Pointer;
  }
  uVar18 = *puVar13;
  uVar12 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  if ((local_a8.Data.ArrayNum - local_a8.NumFreeIndices != 1) &&
     (local_a8.Data.ArrayNum != local_a8.NumFreeIndices)) {
    FVar10.Data = local_70;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_68.Data;
    }
    for (iVar6 = *(int *)(FVar10.Data + (ulonglong)(local_60 - 1 & uVar12) * 4); iVar6 != -1;
        iVar6 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8)) {
      if (*(ulonglong *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x10) == uVar18) {
        if (iVar6 != -1) {
          *(ulonglong *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x10) = uVar18;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(&local_a8,local_d0.Index,1);
          goto LAB_147b84dd2;
        }
        break;
      }
    }
  }
  uVar17 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
  uVar14 = 1;
  if (3 < uVar17) {
    uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar14 <= (int)local_60)) {
    uVar12 = local_60 - 1 & uVar12;
    *(uint *)((longlong)puVar13 + 0xc) = uVar12;
    FVar10.Data = local_70;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_68.Data;
    }
    uVar18 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar12;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(FVar10.Data + uVar18 * 4);
    *(int *)(FVar10.Data + uVar18 * 4) = local_d0.Index;
    goto LAB_147b84dd2;
  }
  local_60 = uVar14;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar14 != 0) {
    uVar12 = uVar14;
    if (uVar14 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_147b84bce;
      }
    }
    else {
LAB_147b84bce:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      puVar13 = puVar11;
      do {
        FVar10.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_68.Data;
        }
        uVar9 = (ulonglong)puVar13 & (longlong)(int)uVar14 - 1U;
        puVar13 = (ulonglong *)((longlong)puVar13 + 1);
        *(undefined4 *)(FVar10.Data + uVar9 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_120 = &local_a8.AllocationFlags;
    local_128 = 0;
    uStack_124 = 1;
    uStack_114 = 0;
    uStack_110 = 0;
    if (local_a8.AllocationFlags.NumBits != 0) {
      FVar16 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar12 = *(uint *)FVar16;
      puVar13 = puVar11;
      while (uVar12 == 0) {
        uStack_110 = (int)puVar13 + 0x20;
        puVar13 = (ulonglong *)(ulonglong)uStack_110;
        iVar6 = (int)puVar11;
        local_128 = iVar6 + 1;
        puVar11 = (ulonglong *)(ulonglong)local_128;
        if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
                 ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_128) goto LAB_147b84cde;
        uVar12 = *(uint *)((uchar *)((longlong)FVar16 + 4) + (longlong)iVar6 * 4);
      }
      uStack_124 = -uVar12 & uVar12;
      uVar18 = (ulonglong)uStack_124 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_114 = (int)lVar2 + -1 + uStack_110;
      puVar11 = (ulonglong *)(ulonglong)uStack_114;
      if (local_a8.AllocationFlags.NumBits < (int)uStack_114) {
LAB_147b84cde:
        puVar11 = (ulonglong *)(ulonglong)(uint)local_a8.AllocationFlags.NumBits;
        uStack_114 = local_a8.AllocationFlags.NumBits;
      }
    }
    local_118 = 0xffffffff;
    local_f8 = &local_a8;
    local_f0._padding_ = CONCAT44(uStack_124,local_128);
    local_f0.CurrentBitIndex = uStack_114;
    local_f0.UnvisitedBitMask = 0xffffffff;
    local_f0._28_4_ = uStack_10c;
    local_f0.BaseBitIndex = uStack_110;
    local_f0.Array = pTStack_120;
    if ((int)puVar11 < local_a8.AllocationFlags.NumBits) {
      do {
        pFVar19 = (local_f8->Data).AllocatorInstance.Data + (longlong)(int)puVar11 * 0x10;
        uVar12 = ((uint)(*(ulonglong *)pFVar19 >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)pFVar19 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_60 - 1;
        *(uint *)(pFVar19 + 0xc) = uVar12;
        FVar10.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_68.Data;
        }
        uVar18 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(pFVar19 + 8) = *(undefined4 *)(FVar10.Data + uVar18 * 4);
        *(int *)(FVar10.Data + uVar18 * 4) = (int)puVar11;
        local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
        puVar11 = (ulonglong *)(ulonglong)(uint)local_f0.CurrentBitIndex;
      } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
    }
  }
LAB_147b84dd2:
  (**(code **)(local_108->_padding_ + 0x2b8))();
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  bVar4 = local_a8.Data.ArrayMax != 0;
  local_a8.Data._8_8_ = (ulonglong)(uint)local_a8.Data.ArrayMax << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_a8,0,&local_a8.Data.ArrayMax);
  }
  local_a8.NumFreeIndices = 0;
  local_a8.AllocationFlags.NumBits = 0;
  local_a8.FirstFreeIndex = -1;
  if (0x80 < (uint)local_a8.AllocationFlags.MaxBits) {
    local_a8.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8.AllocationFlags,0);
  }
  if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_a8.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return 0 < local_134;
}

// RemoveOnGraphChangedHandler @ 147b84ec0

void __thiscall UEdGraph::RemoveOnGraphChangedHandler(UEdGraph *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnGraphChanged,param_1);
    return;
  }
  return;
}

// SelectNodeSet @ 147b87f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UEdGraph::SelectNodeSet
          (UEdGraph *this,
          TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator>
          *param_1,bool param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *_Src;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [32];
  undefined1 *local_88;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_70;
  int local_60 [2];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_60[0] = 0;
  local_58 = 0;
  if ((TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator> *)
      local_a8 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_70,local_60,&param_1->Hash,param_1->HashSize);
    iVar1 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<UEdGraphNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<UEdGraphNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
               (int *)(local_a8 + 0xc));
    local_78 = *(undefined4 *)&(param_1->Elements).field_0x30;
    puVar4 = &(param_1->Elements).field_0x10;
    local_74 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (local_a8 + 0x10 != puVar4) {
      uVar3 = *(int *)&(param_1->Elements).field_0x28 + 0x1fU & 0xffffffe0;
      local_80 = 0;
      if (((int)local_7c < (int)uVar3) || (0x80 < (int)local_7c)) {
        local_7c = 0x80;
        if (0x80 < (int)uVar3) {
          local_7c = uVar3;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      local_80 = *(int *)&(param_1->Elements).field_0x28;
      if (local_80 != 0) {
        _Src = *(void **)&(param_1->Elements).field_0x20;
        if (_Src == (void *)0x0) {
          _Src = puVar4;
        }
        puVar4 = local_a8 + 0x10;
        if (local_88 != (undefined1 *)0x0) {
          puVar4 = local_88;
        }
        memcpy(puVar4,_Src,(ulonglong)(local_80 + 0x1fU >> 5) << 2);
      }
    }
    if (iVar1 != 0) {
      memcpy((void *)local_a8._0_8_,*(void **)&param_1->Elements,(longlong)iVar1 << 4);
    }
  }
  local_58 = param_2;
  (**(code **)(this->_padding_ + 0x2b8))(this);
  local_60[0] = 0;
  if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  iVar1 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  param_1->HashSize = 0;
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UEdGraphNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UEdGraphNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return;
}

// StaticRegisterNativesUEdGraph @ 147b8ebe0

void __cdecl UEdGraph::StaticRegisterNativesUEdGraph(void)

{
  return;
}

