// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 28

// StaticClass @ 149f1a990

UClass * __cdecl UPCGPin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPin",&Z_Registration_Info_UClass_UPCGPin.InnerSingleton,
               StaticRegisterNativesUPCGPin,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGPin>,InternalVTableHelperCtorCaller<UPCGPin>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPin.InnerSingleton;
}

// UPCGPin @ 149f33040

UPCGPin * __thiscall UPCGPin::UPCGPin(UPCGPin *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPin__6B_;
  (this->Node).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->Label_DEPRECATED).ComparisonIndex = 0;
  (this->Label_DEPRECATED).Number = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  FPCGPinProperties::FPCGPinProperties(&this->Properties);
  this->bPropertiesHaveChangedOnDeprecation = false;
  return this;
}

// UPCGPin @ 149f33090

UPCGPin * __thiscall UPCGPin::UPCGPin(UPCGPin *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPin__6B_;
  (this->Node).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->Label_DEPRECATED).ComparisonIndex = 0;
  (this->Label_DEPRECATED).Number = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  FPCGPinProperties::FPCGPinProperties(&this->Properties);
  this->bPropertiesHaveChangedOnDeprecation = false;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  return this;
}

// ~UPCGPin @ 149f34bb0

void __thiscall UPCGPin::~UPCGPin(UPCGPin *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGPin__6B_;
  pFVar1 = (this->Properties).AllowedTypes.Ids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddEdgeTo @ 149f3b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UPCGPin::AddEdgeTo(UPCGPin *this,UPCGPin *param_1,
                  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_2)

{
  TObjectPtr<UPCGNode> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UPCGPin *pUVar9;
  UPCGPin *pUVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [8];
  UObject *local_f0;
  UObject *local_e8;
  undefined1 local_e0 [8];
  TObjectPtr<UPCGNode>_u_0 local_d8;
  TObjectPtr<UPCGNode>_u_0 local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (param_1 != (UPCGPin *)0x0) {
    pFVar12 = (this->Edges).AllocatorInstance.Data;
    iVar8 = (this->Edges).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar8) {
        local_f8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pFVar12 == pFVar3) break;
      pUVar9 = UPCGEdge::GetOtherPin(*(UPCGEdge **)pFVar12,this);
      if (pUVar9 == param_1) {
        return false;
      }
      pFVar12 = pFVar12 + 8;
    }
    pTVar1 = &this->Node;
    if (((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                           ,0x157,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pUVar9 = UPCGNode::GetOutputPin((pTVar1->field0_0x0).DebugPtr,&(this->Properties).Label);
    if (((param_1->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                           ,0x157,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pUVar10 = UPCGNode::GetOutputPin
                        ((param_1->Node).field0_0x0.DebugPtr,&(param_1->Properties).Label);
    if ((pUVar9 == this) != (pUVar10 == param_1)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = Z_Construct_UClass_UPCGEdge_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar11);
      local_c8._8_8_ = this;
      local_f0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar13 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_f0);
      }
      pFVar3 = (this->Edges).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 < pFVar3 + (longlong)(this->Edges).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (this->Edges).ArrayNum;
      piVar2 = &(this->Edges).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Edges).AllocatorInstance,piVar2);
      }
      (this->Edges).ArrayNum = iVar8 + 1;
      pFVar3 = (this->Edges).AllocatorInstance.Data + (longlong)iVar8 * 8;
      *(UObject **)pFVar3 = local_f0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_f0);
      }
      pUVar4 = *(UObject **)pFVar3;
      local_e8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar3 = (param_1->Edges).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)(param_1->Edges).ArrayMax * 8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (param_1->Edges).ArrayNum;
      piVar2 = &(param_1->Edges).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_1->Edges).AllocatorInstance,piVar2);
      }
      (param_1->Edges).ArrayNum = iVar8 + 1;
      *(UObject **)((param_1->Edges).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_e8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_e8);
      }
      pUVar10 = param_1;
      if (pUVar9 == this) {
        pUVar10 = this;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UPCGPin *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      *(UPCGPin **)&pUVar4[1].field_0x20 = pUVar10;
      if (pUVar9 == this) {
        this = param_1;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPCGPin *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UPCGPin **)(pUVar4 + 2) = this;
      if (param_2 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0) {
        local_d8.DebugPtr = *(UPCGNode **)&pTVar1->field0_0x0;
        TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                  (param_2,(UPCGNode **)local_e0,(bool *)&local_d8);
        local_d0 = (param_1->Node).field0_0x0;
        TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                  (param_2,(UPCGNode **)(local_e0 + 4),(bool *)&local_d0);
      }
      return true;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4359765141177237322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                       ,0xb6,"bThisPinIsUpstream != bOtherPinIsUpstream");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  return false;
}

// AllowsMultipleConnections @ 149f3c4c0

bool __thiscall UPCGPin::AllowsMultipleConnections(UPCGPin *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGPin *pUVar4;
  
  if ((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                       ,0x157,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = UPCGNode::GetOutputPin((this->Node).field0_0x0.DebugPtr,&(this->Properties).Label);
  if ((pUVar4 != this) &&
     (((this->Properties).bAllowMultipleData == false ||
      ((this->Properties).bAllowMultipleConnections == false)))) {
    return false;
  }
  return true;
}

// AllowsMultipleData @ 149f3c530

bool __thiscall UPCGPin::AllowsMultipleData(UPCGPin *this)

{
  return (this->Properties).bAllowMultipleData;
}

// BreakAllEdges @ 149f3ca40

bool __thiscall
UPCGPin::BreakAllEdges
          (UPCGPin *this,
          TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGPin *pUVar5;
  UPCGEdge *pUVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res18 [16];
  UPCGEdge *local_98;
  uint local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *local_78;
  undefined1 local_70 [8];
  TObjectPtr<UPCGNode>_u_0 local_68;
  UPCGEdge *local_60;
  TObjectPtr<UPCGNode>_u_0 local_58 [3];
  
  bVar3 = false;
  if (((this->Edges).ArrayNum != 0) &&
     (param_1 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0)) {
    local_68 = (this->Node).field0_0x0;
    TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
              (param_1,(UPCGNode **)local_70,(bool *)&local_68);
  }
  local_90 = (this->Edges).ArrayNum;
  uVar8 = (ulonglong)(int)local_90;
  local_78 = &this->Edges;
  pFVar13 = (local_78->AllocatorInstance).Data;
  pFVar10 = pFVar13 + uVar8 * 8;
  local_88 = pFVar10;
  do {
    local_80 = pFVar13;
    if (local_78->ArrayNum != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar10) {
      local_78->ArrayNum = 0;
      if (local_78->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_78->AllocatorInstance,0,&local_78->ArrayMax);
      }
      return bVar3;
    }
    pUVar6 = *(UPCGEdge **)pFVar13;
    local_60 = pUVar6;
    pUVar5 = UPCGEdge::GetOtherPin(pUVar6,this);
    if (pUVar5 != (UPCGPin *)0x0) {
      local_98 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPCGEdge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pFVar10 = (pUVar5->Edges).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar10 + (longlong)(pUVar5->Edges).ArrayMax * 8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar1 = (pUVar5->Edges).ArrayNum;
      if (iVar1 == 0) {
LAB_149f3cc2a:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4359765141177237245>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                           ,0x103,"OtherPin->Edges.Remove(Edge)");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      else {
        pFVar10 = (pUVar5->Edges).AllocatorInstance.Data;
        iVar14 = 0;
        lVar9 = 0;
        bVar3 = *(UPCGEdge **)pFVar10 != local_98;
        pUVar6 = local_98;
        iVar11 = 0;
        do {
          iVar12 = iVar11;
          do {
            lVar9 = lVar9 + 1;
            iVar12 = iVar12 + 1;
            if (iVar1 <= lVar9) break;
          } while (bVar3 == (*(UPCGEdge **)(pFVar10 + lVar9 * 8) != pUVar6));
          if (bVar3 != false) {
            if (iVar14 != iVar11) {
              memmove(pFVar10 + (longlong)iVar14 * 8,pFVar10 + (longlong)iVar11 * 8,
                      (longlong)(iVar12 - iVar11) << 3);
              pUVar6 = local_98;
            }
            iVar14 = iVar14 + (iVar12 - iVar11);
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar11 = iVar12;
        } while (lVar9 < iVar1);
        (pUVar5->Edges).ArrayNum = iVar14;
        if (iVar1 == iVar14) goto LAB_149f3cc2a;
      }
      pUVar6 = local_60;
      FLinkerLoad::InvalidateExport((UObject *)local_60,true);
      pcVar2 = *(code **)(pUVar6->_padding_ + 0x170);
      pUVar7 = GetTransientPackage();
      (*pcVar2)(pUVar6,0,pUVar7,0x10);
      bVar3 = true;
      pFVar10 = local_88;
      if (param_1 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0) {
        local_58[0] = (pUVar5->Node).field0_0x0;
        TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                  (param_1,(UPCGNode **)(local_70 + 4),(bool *)local_58);
        pFVar10 = local_88;
      }
    }
    pFVar13 = local_80 + 8;
    uVar8 = (ulonglong)local_90;
  } while( true );
}

// BreakAllIncompatibleEdges @ 149f3cd60

bool __thiscall
UPCGPin::BreakAllIncompatibleEdges
          (UPCGPin *this,
          TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  EPCGDataTypeCompatibilityResult EVar8;
  int iVar9;
  UPCGPin *pUVar10;
  UPCGPin *pUVar11;
  uint uVar12;
  UPCGEdge *pUVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *pTVar19;
  UPCGEdge *local_98 [2];
  longlong local_88;
  TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *local_80;
  longlong local_78;
  undefined1 local_70 [8];
  TObjectPtr<UPCGNode>_u_0 local_68;
  UPCGPin *local_60;
  TObjectPtr<UPCGNode>_u_0 local_58 [3];
  
  bVar6 = false;
  uVar12 = (this->Edges).ArrayNum - 1;
  bVar3 = false;
  if (-1 < (int)uVar12) {
    local_88 = (longlong)(int)uVar12;
    pTVar19 = &this->Edges;
    lVar17 = local_88 * 8;
    local_80 = pTVar19;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < pTVar19->ArrayNum) {
        uVar7 = uVar14;
      }
      local_78 = lVar17;
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pUVar13 = *(UPCGEdge **)((pTVar19->AllocatorInstance).Data + lVar17);
      pUVar10 = UPCGEdge::GetOtherPin(pUVar13,this);
      local_60 = pUVar10;
      if (((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                             ,0x157,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pUVar11 = UPCGNode::GetOutputPin((this->Node).field0_0x0.DebugPtr,&(this->Properties).Label);
      if ((pUVar11 == this) ||
         ((((this->Properties).bAllowMultipleData != false &&
           ((this->Properties).bAllowMultipleConnections != false)) || (!bVar3)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      EVar8 = GetCompatibilityWithOtherPin(this,pUVar10,(FText *)0x0);
      lVar17 = local_88;
      if (((EVar8 & ~UnknownType) == NotCompatible) || (bVar4)) {
        uVar7 = 0;
        if ((int)uVar12 < pTVar19->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar1 = (pTVar19->AllocatorInstance).Data;
        iVar9 = pTVar19->ArrayNum + ~uVar12;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + lVar17 * 8,pFVar1 + (longlong)(pTVar19->ArrayNum - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        pTVar19->ArrayNum = pTVar19->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar19->AllocatorInstance,pTVar19->ArrayNum,&pTVar19->ArrayMax);
        if (param_1 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0) {
          local_68 = (this->Node).field0_0x0;
          TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                    (param_1,(UPCGNode **)local_70,(bool *)&local_68);
        }
        if (pUVar10 != (UPCGPin *)0x0) {
          local_98[0] = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPCGEdge *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          pFVar1 = (pUVar10->Edges).AllocatorInstance.Data;
          if (((pFVar1 <= (FScriptContainerElement *)local_98) &&
              ((FScriptContainerElement *)local_98 <
               pFVar1 + (longlong)(pUVar10->Edges).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar9 = (pUVar10->Edges).ArrayNum;
          if (iVar9 == 0) {
LAB_149f3d0c7:
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4359765141177237194>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                               ,0x136,"OtherPin->Edges.Remove(Edge)");
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          else {
            pFVar1 = (pUVar10->Edges).AllocatorInstance.Data;
            iVar18 = 0;
            lVar17 = 0;
            bVar6 = *(UPCGEdge **)pFVar1 != local_98[0];
            pUVar13 = local_98[0];
            iVar15 = 0;
            do {
              iVar16 = iVar15;
              do {
                lVar17 = lVar17 + 1;
                iVar16 = iVar16 + 1;
                if (iVar9 <= lVar17) break;
              } while (bVar6 == (*(UPCGEdge **)(pFVar1 + lVar17 * 8) != pUVar13));
              if (bVar6 != false) {
                if (iVar18 != iVar15) {
                  memmove(pFVar1 + (longlong)iVar18 * 8,pFVar1 + (longlong)iVar15 * 8,
                          (longlong)(iVar16 - iVar15) << 3);
                  pUVar13 = local_98[0];
                }
                iVar18 = iVar18 + (iVar16 - iVar15);
              }
              bVar6 = (bool)(bVar6 ^ 1);
              iVar15 = iVar16;
            } while (lVar17 < iVar9);
            (local_60->Edges).ArrayNum = iVar18;
            pUVar10 = local_60;
            if (iVar9 == iVar18) goto LAB_149f3d0c7;
          }
          bVar6 = true;
          pTVar19 = local_80;
          if (param_1 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0)
          {
            local_58[0] = (pUVar10->Node).field0_0x0;
            TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                      (param_1,(UPCGNode **)(local_70 + 4),(bool *)local_58);
            pTVar19 = local_80;
          }
        }
      }
      else {
        bVar3 = true;
      }
      uVar12 = uVar12 - 1;
      local_88 = local_88 + -1;
      lVar17 = local_78 + -8;
    } while (-1 < (int)uVar12);
  }
  return bVar6;
}

// BreakEdgeTo @ 149f3d1b0

bool __thiscall
UPCGPin::BreakEdgeTo
          (UPCGPin *this,UPCGPin *param_1,
          TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_2)

{
  TObjectPtr<UPCGEdge>_u_0 *pTVar1;
  TObjectPtr<UPCGEdge>_u_0 this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGPin *pUVar6;
  UPackage *pUVar7;
  TObjectPtr<UPCGEdge>_u_0 *pTVar8;
  undefined1 local_res10 [16];
  UPCGNode *local_res20;
  UPCGNode *local_68;
  TObjectPtr<UPCGEdge>_u_0 local_60;
  TObjectPtr<UPCGEdge>_u_0 local_58;
  TObjectPtr<UPCGNode>_u_0 local_50;
  TObjectPtr<UPCGNode>_u_0 local_48 [2];
  
  if (param_1 == (UPCGPin *)0x0) {
LAB_149f3d313:
    bVar3 = false;
  }
  else {
    pTVar8 = (TObjectPtr<UPCGEdge>_u_0 *)(this->Edges).AllocatorInstance.Data;
    iVar5 = (this->Edges).ArrayNum;
    pTVar1 = pTVar8 + iVar5;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pTVar8 == pTVar1) goto LAB_149f3d313;
      this_00 = (TObjectPtr<UPCGEdge>_u_0)pTVar8->DebugPtr;
      pUVar6 = UPCGEdge::GetOtherPin(this_00.DebugPtr,this);
      if (pUVar6 == param_1) break;
      pTVar8 = pTVar8 + 1;
    }
    local_60 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UPCGEdge *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    iVar5 = TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::Remove
                      (&param_1->Edges,(TObjectPtr<UPCGEdge> *)&local_60.ObjectPtr);
    if (iVar5 == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4359765141177237284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                         ,0xdc,"OtherPin->Edges.Remove(Edge)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_58 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UPCGEdge *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::Remove
              (&this->Edges,(TObjectPtr<UPCGEdge> *)&local_58.ObjectPtr);
    FLinkerLoad::InvalidateExport((UObject *)this_00.DebugPtr,true);
    pcVar2 = *(code **)((this_00.DebugPtr)->_padding_ + 0x170);
    pUVar7 = GetTransientPackage();
    (*pcVar2)(this_00.DebugPtr,0,pUVar7,0x10);
    if (param_2 != (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0) {
      local_50 = (this->Node).field0_0x0;
      TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                (param_2,&local_res20,(bool *)&local_50);
      local_48[0] = (param_1->Node).field0_0x0;
      TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
                (param_2,&local_68,(bool *)local_48);
    }
    bVar3 = true;
  }
  return bVar3;
}

// CanConnect @ 149f3dea0

bool __thiscall UPCGPin::CanConnect(UPCGPin *this,UPCGPin *param_1)

{
  bool bVar1;
  
  if (param_1 == (UPCGPin *)0x0) {
    return false;
  }
  if (((this->Edges).ArrayNum != 0) && (bVar1 = AllowsMultipleConnections(this), !bVar1)) {
    return false;
  }
  return true;
}

// EdgeCount @ 149f41fe0

int __thiscall UPCGPin::EdgeCount(UPCGPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Edges).AllocatorInstance.Data;
  iVar2 = (this->Edges).ArrayNum;
  iVar6 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = UPCGEdge::IsValid(*(UPCGEdge **)pFVar5);
    iVar3 = iVar6 + 1;
    if (!bVar4) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    pFVar5 = pFVar5 + 8;
  }
  return iVar6;
}

// GetCompatibilityWithOtherPin @ 149f48c50

EPCGDataTypeCompatibilityResult __thiscall
UPCGPin::GetCompatibilityWithOtherPin(UPCGPin *this,UPCGPin *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPCGDataTypeCompatibilityResult EVar3;
  UPCGPin *pUVar4;
  UPCGPin *pUVar5;
  FPCGDataTypeRegistry *this_00;
  FPCGDataTypeIdentifier *pFVar6;
  FPCGDataTypeIdentifier local_28;
  
  if (((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                         ,0x157,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  pUVar4 = UPCGNode::GetOutputPin((this->Node).field0_0x0.DebugPtr,&(this->Properties).Label);
  if (param_1 != (UPCGPin *)0x0) {
    if (((param_1->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                           ,0x157,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    pUVar5 = UPCGNode::GetOutputPin
                       ((param_1->Node).field0_0x0.DebugPtr,&(param_1->Properties).Label);
    if ((pUVar4 == this) != (pUVar5 == param_1)) {
      this_00 = FPCGModule::GetConstDataTypeRegistry();
      pUVar5 = param_1;
      if (pUVar4 == this) {
        pUVar5 = this;
      }
      pFVar6 = GetCurrentTypesID(pUVar5,&local_28);
      if (pUVar4 == this) {
        this = param_1;
      }
      EVar3 = FPCGDataTypeRegistry::IsCompatible
                        (this_00,pFVar6,&(this->Properties).AllowedTypes,param_2);
      if (local_28.Ids.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar3;
      }
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
      return EVar3;
    }
  }
  return NotCompatible;
}

// GetCurrentTypes @ 149f494b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGPin::GetCurrentTypes(UPCGPin *this)

{
  EPCGDataType EVar1;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  this_00 = GetCurrentTypesID(this,&local_28);
  EVar1 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(this_00);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return EVar1;
}

// GetCurrentTypesID @ 149f494f0

FPCGDataTypeIdentifier * __thiscall
UPCGPin::GetCurrentTypesID(UPCGPin *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  int iVar1;
  UPCGSettingsInterface *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPCGDataTypeIdentifier *pFVar6;
  longlong *plVar7;
  FPCGDataTypeIdentifier local_38;
  FScriptContainerElement *local_20 [3];
  
  if ((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                       ,0x172,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGDataTypeIdentifier *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar2 = (((this->Node).field0_0x0.DebugPtr)->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar2 != (UPCGSettingsInterface *)0x0) {
    plVar7 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x388))();
    if (plVar7 != (longlong *)0x0) {
      pFVar6 = (FPCGDataTypeIdentifier *)(**(code **)(*plVar7 + 0x440))(plVar7,local_20,this);
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar6);
      goto LAB_149f49606;
    }
  }
  pFVar3 = (this->Properties).AllowedTypes.Ids.AllocatorInstance.Data;
  iVar1 = (this->Properties).AllowedTypes.Ids.ArrayNum;
  local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Ids.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_38.Ids.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Ids.ArrayMax);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              (local_38.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar3,iVar1);
  }
  local_38.CustomSubtype = (this->Properties).AllowedTypes.CustomSubtype;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_38);
  local_20[0] = local_38.Ids.AllocatorInstance.Data;
LAB_149f49606:
  if (local_20[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20[0]);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4dc60

UClass * __cdecl UPCGPin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPin",&Z_Registration_Info_UClass_UPCGPin.InnerSingleton,
               StaticRegisterNativesUPCGPin,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGPin>,InternalVTableHelperCtorCaller<UPCGPin>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPin.InnerSingleton;
}

// GetTooltip @ 149f4f560

FText * __thiscall UPCGPin::GetTooltip(UPCGPin *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// IsCompatible @ 149f51f90

bool __thiscall UPCGPin::IsCompatible(UPCGPin *this,UPCGPin *param_1)

{
  EPCGDataTypeCompatibilityResult EVar1;
  
  EVar1 = GetCompatibilityWithOtherPin(this,param_1,(FText *)0x0);
  if (((EVar1 & ~TypeCompatibleSubtypeNotCompatible) == NotCompatible) && (EVar1 != Compatible)) {
    return false;
  }
  return true;
}

// IsConnected @ 149f51fc0

bool __thiscall UPCGPin::IsConnected(UPCGPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Edges).AllocatorInstance.Data;
  iVar2 = (this->Edges).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = UPCGEdge::IsValid(*(UPCGEdge **)pFVar4);
    if (bVar3) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// IsDownstreamPinTypeCompatible @ 149f52030

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall UPCGPin::IsDownstreamPinTypeCompatible(UPCGPin *this,EPCGDataType param_1)

{
  EPCGDataTypeCompatibilityResult EVar1;
  FPCGDataTypeRegistry *this_00;
  FPCGDataTypeIdentifier *pFVar2;
  FPCGDataTypeIdentifier local_28;
  
  this_00 = FPCGModule::GetConstDataTypeRegistry();
  pFVar2 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,param_1);
  EVar1 = FPCGDataTypeRegistry::IsCompatible
                    (this_00,pFVar2,&(this->Properties).AllowedTypes,(FText *)0x0);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (((EVar1 & ~TypeCompatibleSubtypeNotCompatible) == NotCompatible) && (EVar1 != Compatible)) {
    return false;
  }
  return true;
}

// IsOutputPin @ 149f527c0

bool __thiscall UPCGPin::IsOutputPin(UPCGPin *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGPin *pUVar4;
  
  if ((this->Node).field0_0x0.DebugPtr == (UPCGNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                       ,0x157,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = UPCGNode::GetOutputPin((this->Node).field0_0x0.DebugPtr,&(this->Properties).Label);
  return pUVar4 == this;
}

// PostLoad @ 149f57fb0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall UPCGPin::PostLoad(UPCGPin *this)

{
  FPCGDataTypeIdentifier *pFVar1;
  FPCGDataTypeIdentifier local_58;
  FPCGPinProperties local_40;
  
  UObject::PostLoad((UObject *)this);
  if (this->Label_DEPRECATED != (FName)0x0) {
    FText::GetEmpty();
    pFVar1 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_58,Any);
    local_40.Label = this->Label_DEPRECATED;
    local_40.Usage = Normal;
    local_40.AllowedTypes.Ids.AllocatorInstance.Data = (pFVar1->Ids).AllocatorInstance.Data;
    (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.AllowedTypes.Ids.ArrayNum = (pFVar1->Ids).ArrayNum;
    local_40.AllowedTypes.Ids.ArrayMax = (pFVar1->Ids).ArrayMax;
    (pFVar1->Ids).ArrayNum = 0;
    (pFVar1->Ids).ArrayMax = 0;
    local_40.AllowedTypes.CustomSubtype = pFVar1->CustomSubtype;
    local_40.PinStatus = Normal;
    local_40.bInvisiblePin = false;
    local_40.bAllowMultipleConnections = true;
    local_40.bAllowMultipleData = true;
    FPCGPinProperties::operator=(&this->Properties,&local_40);
    if (local_40.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllowedTypes.Ids.AllocatorInstance.Data);
    }
    (this->Label_DEPRECATED).ComparisonIndex = 0;
    (this->Label_DEPRECATED).Number = 0;
  }
  return;
}

// SetTooltip @ 149f62ea0

void __thiscall UPCGPin::SetTooltip(UPCGPin *this,FText *param_1)

{
  return;
}

// StaticRegisterNativesUPCGPin @ 149f63b30

void __cdecl UPCGPin::StaticRegisterNativesUPCGPin(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGPin_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTooltip @ 149f71790

void __cdecl UPCGPin::execGetTooltip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execIsConnected @ 149f719f0

void __cdecl UPCGPin::execIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsConnected((UPCGPin *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsOutputPin @ 149f71ca0

void __cdecl UPCGPin::execIsOutputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UPCGPin *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGPin.cpp"
                       ,0x157,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = UPCGNode::GetOutputPin(*(UPCGNode **)(param_1 + 1),(FName *)&param_1[1].field_0x20);
  *(bool *)param_3 = pUVar3 == (UPCGPin *)param_1;
  return;
}

// execSetTooltip @ 149f72a80

void __cdecl UPCGPin::execSetTooltip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText local_18;
  
  FText::FText(&local_18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

