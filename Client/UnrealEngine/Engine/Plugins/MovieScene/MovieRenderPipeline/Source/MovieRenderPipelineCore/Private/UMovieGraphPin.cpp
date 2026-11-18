// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 40

// StaticClass @ 14dc9dfa0

UClass * __cdecl UMovieGraphPin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPin",
               &Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton,
               StaticRegisterNativesUMovieGraphPin,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphPin>,InternalVTableHelperCtorCaller<UMovieGraphPin>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton;
}

// UMovieGraphPin @ 14dcb0270

UMovieGraphPin * __thiscall
UMovieGraphPin::UMovieGraphPin(UMovieGraphPin *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphPin__6B_;
  (this->Node).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->Properties).Label.ComparisonIndex = 0;
  (this->Properties).Label.Number = 0;
  (this->Properties).TypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Properties).Type = Float;
  (this->Properties).bAllowMultipleConnections = true;
  (this->Properties).bIsBranch = false;
  (this->Properties).bIsWildcard = false;
  (this->Properties).bIsBuiltIn = true;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  this->bPropagateTypeRecursionGuard = false;
  return this;
}

// UMovieGraphPin @ 14dcb02c0

UMovieGraphPin * __thiscall
UMovieGraphPin::UMovieGraphPin(UMovieGraphPin *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphPin__6B_;
  (this->Node).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->Properties).Label.ComparisonIndex = 0;
  (this->Properties).Label.Number = 0;
  (this->Properties).TypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Properties).Type = Float;
  (this->Properties).bAllowMultipleConnections = true;
  (this->Properties).bIsBranch = false;
  (this->Properties).bIsWildcard = false;
  (this->Properties).bIsBuiltIn = true;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  this->bPropagateTypeRecursionGuard = false;
  return this;
}

// ~UMovieGraphPin @ 14dcb3010

void __thiscall UMovieGraphPin::~UMovieGraphPin(UMovieGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphPin__6B_;
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dcb64d0

bool __thiscall
`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>::operator()
          (void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UMovieGraphNode *local_res10 [3];
  
  local_res10[0] = param_1;
  pUVar7 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
      == &pUVar7->_padding_)) {
    return false;
  }
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UMovieGraphNode **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 14dcb69c0

bool __thiscall
`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>::operator()
          (void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UMovieGraphNode *local_res10 [3];
  
  local_res10[0] = param_1;
  pUVar7 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
      == &pUVar7->_padding_)) {
    return false;
  }
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UMovieGraphNode **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// AddEdgeTo @ 14dcb8f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UMovieGraphPin::AddEdgeTo(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  UMovieGraphPin *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  UObject *local_d0;
  UObject *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (UMovieGraphPin *)0x0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      return false;
    }
  }
  else {
    pFVar11 = (this->Edges).AllocatorInstance.Data;
    iVar7 = (this->Edges).ArrayNum;
    pFVar3 = pFVar11 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar7) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar11 == pFVar3) break;
      lVar2 = *(longlong *)pFVar11;
      if (*(UMovieGraphPin **)(lVar2 + 0x28) == (UMovieGraphPin *)0x0) {
        bVar13 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar13 = *(UMovieGraphPin **)(lVar2 + 0x28) == this;
      }
      if (!bVar13) {
        if (*(UMovieGraphPin **)(lVar2 + 0x30) == (UMovieGraphPin *)0x0) {
          bVar13 = this == (UMovieGraphPin *)0x0;
        }
        else {
          bVar13 = *(UMovieGraphPin **)(lVar2 + 0x30) == this;
        }
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFirstPin == InputPin || InFirstPin == OutputPin",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                                ,0x10,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
      }
      pUVar8 = *(UMovieGraphPin **)(lVar2 + 0x28);
      if (pUVar8 == (UMovieGraphPin *)0x0) {
        bVar13 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar13 = pUVar8 == this;
      }
      if (bVar13) {
        pUVar8 = *(UMovieGraphPin **)(lVar2 + 0x30);
      }
      if ((pUVar8 != (UMovieGraphPin *)0x0) && (pUVar8 == param_1)) {
        return false;
      }
      pFVar11 = pFVar11 + 8;
    }
    bVar13 = IsOutputPin(this);
    bVar6 = IsOutputPin(param_1);
    if (bVar13 != bVar6) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar9 = UMovieGraphEdge::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar9);
      local_b8._8_8_ = this;
      pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar12 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      local_d0 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      pFVar3 = (this->Edges).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar3 + (longlong)(this->Edges).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      iVar7 = (this->Edges).ArrayNum;
      piVar1 = &(this->Edges).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Edges).AllocatorInstance,piVar1);
      }
      (this->Edges).ArrayNum = iVar7 + 1;
      *(UObject **)((this->Edges).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_d0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d0);
      }
      local_c8[0] = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      pFVar3 = (param_1->Edges).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar3 + (longlong)(param_1->Edges).ArrayMax * 8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      iVar7 = (param_1->Edges).ArrayNum;
      piVar1 = &(param_1->Edges).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_1->Edges).AllocatorInstance,piVar1);
      }
      (param_1->Edges).ArrayNum = iVar7 + 1;
      *(UObject **)((param_1->Edges).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_c8[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c8[0]);
      }
      pUVar8 = param_1;
      if (bVar13) {
        pUVar8 = this;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMovieGraphPin *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      *(UMovieGraphPin **)(pUVar10 + 1) = pUVar8;
      pUVar8 = this;
      if (bVar13) {
        pUVar8 = param_1;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMovieGraphPin *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      *(UMovieGraphPin **)&pUVar10[1].field_0x8 = pUVar8;
      PropagatePinType(this,pUVar8,*(UMovieGraphPin **)(pUVar10 + 1));
      return true;
    }
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7967137099692376020>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                        ,0x2c,"bThisPinIsUpstream != bOtherPinIsUpstream");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
  }
  return false;
}

// AllowsMultipleConnections @ 14dcba740

bool __thiscall UMovieGraphPin::AllowsMultipleConnections(UMovieGraphPin *this)

{
  bool bVar1;
  
  bVar1 = IsOutputPin(this);
  if ((!bVar1) && ((this->Properties).bAllowMultipleConnections == false)) {
    return false;
  }
  return true;
}

// BreakAllEdges @ 14dcbc4a0

bool __thiscall UMovieGraphPin::BreakAllEdges(UMovieGraphPin *this)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  int iVar8;
  int iVar9;
  UMovieGraphPin *pUVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 local_res10 [16];
  uint local_res20;
  UObject *local_68;
  UMovieGraphPin *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  
  local_res20 = (this->Edges).ArrayNum;
  uVar5 = (ulonglong)(int)local_res20;
  bVar4 = false;
  pFVar6 = (this->Edges).AllocatorInstance.Data;
  pFVar11 = pFVar6 + uVar5 * 8;
  local_58 = pFVar11;
  do {
    local_50 = pFVar6;
    if ((this->Edges).ArrayNum != (int)uVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar11) {
      (this->Edges).ArrayNum = 0;
      if ((this->Edges).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->Edges).AllocatorInstance,0,&(this->Edges).ArrayMax);
      }
      return bVar4;
    }
    pUVar7 = *(UObject **)pFVar6;
    if (pUVar7 != (UObject *)0x0) {
      if (*(UMovieGraphPin **)(pUVar7 + 1) == (UMovieGraphPin *)0x0) {
        bVar14 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar14 = *(UMovieGraphPin **)(pUVar7 + 1) == this;
      }
      if (!bVar14) {
        if (*(UMovieGraphPin **)&pUVar7[1].field_0x8 == (UMovieGraphPin *)0x0) {
          bVar14 = this == (UMovieGraphPin *)0x0;
        }
        else {
          bVar14 = *(UMovieGraphPin **)&pUVar7[1].field_0x8 == this;
        }
        if ((!bVar14) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFirstPin == InputPin || InFirstPin == OutputPin",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                                ,0x10,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          uVar3 = (*pcVar2)();
          return (bool)uVar3;
        }
      }
      pUVar10 = *(UMovieGraphPin **)(pUVar7 + 1);
      if (pUVar10 == (UMovieGraphPin *)0x0) {
        bVar14 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar14 = pUVar10 == this;
      }
      if (bVar14) {
        pUVar10 = *(UMovieGraphPin **)&pUVar7[1].field_0x8;
      }
      pFVar11 = local_58;
      local_60 = pUVar10;
      if (pUVar10 != (UMovieGraphPin *)0x0) {
        local_68 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        pFVar11 = (pUVar10->Edges).AllocatorInstance.Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar11 + (longlong)(pUVar10->Edges).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar3 = (*pcVar2)();
          return (bool)uVar3;
        }
        iVar1 = (pUVar10->Edges).ArrayNum;
        if (iVar1 == 0) {
LAB_14dcbc6b5:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7967137099692375952>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                             ,0x70,"OtherPin->Edges.Remove(Edge)");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar3 = (*pcVar2)();
            return (bool)uVar3;
          }
        }
        else {
          pFVar11 = (pUVar10->Edges).AllocatorInstance.Data;
          iVar13 = 0;
          lVar12 = 0;
          bVar4 = *(UObject **)pFVar11 != local_68;
          pUVar7 = local_68;
          iVar8 = 0;
          do {
            iVar9 = iVar8;
            do {
              lVar12 = lVar12 + 1;
              iVar9 = iVar9 + 1;
              if (iVar1 <= lVar12) break;
            } while (bVar4 == (*(UObject **)(pFVar11 + lVar12 * 8) != pUVar7));
            if (bVar4 != false) {
              if (iVar13 != iVar8) {
                memmove(pFVar11 + (longlong)iVar13 * 8,pFVar11 + (longlong)iVar8 * 8,
                        (longlong)(iVar9 - iVar8) << 3);
                pUVar7 = local_68;
              }
              iVar13 = iVar13 + (iVar9 - iVar8);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar8 = iVar9;
          } while (lVar12 < iVar1);
          (local_60->Edges).ArrayNum = iVar13;
          pUVar10 = local_60;
          if (iVar1 == iVar13) goto LAB_14dcbc6b5;
        }
        bVar4 = true;
        MaybeRevertToWildcard(this,this);
        MaybeRevertToWildcard(this,pUVar10);
        pFVar11 = local_58;
      }
    }
    uVar5 = (ulonglong)local_res20;
    pFVar6 = local_50 + 8;
  } while( true );
}

// BreakEdgeTo @ 14dcbc770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieGraphPin::BreakEdgeTo(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  TObjectPtr<UMovieGraphEdge>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphEdge>_u_0 TVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  UMovieGraphPin *pUVar6;
  TObjectPtr<UMovieGraphEdge>_u_0 *pTVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  TObjectPtr<UMovieGraphEdge>_u_0 local_res18;
  TObjectPtr<UMovieGraphEdge>_u_0 local_res20;
  
  if (param_1 == (UMovieGraphPin *)0x0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    pTVar7 = (TObjectPtr<UMovieGraphEdge>_u_0 *)(this->Edges).AllocatorInstance.Data;
    iVar5 = (this->Edges).ArrayNum;
    pTVar1 = pTVar7 + iVar5;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pTVar7 == pTVar1) break;
      TVar2 = (TObjectPtr<UMovieGraphEdge>_u_0)pTVar7->DebugPtr;
      pUVar6 = ((TVar2.DebugPtr)->InputPin).field0_0x0.DebugPtr;
      if (pUVar6 == (UMovieGraphPin *)0x0) {
        bVar8 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar8 = pUVar6 == this;
      }
      if (!bVar8) {
        pUVar6 = ((TVar2.DebugPtr)->OutputPin).field0_0x0.DebugPtr;
        if (pUVar6 == (UMovieGraphPin *)0x0) {
          bVar8 = this == (UMovieGraphPin *)0x0;
        }
        else {
          bVar8 = pUVar6 == this;
        }
        if (!bVar8) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFirstPin == InputPin || InFirstPin == OutputPin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                             ,0x10,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
        }
      }
      pUVar6 = ((TVar2.DebugPtr)->InputPin).field0_0x0.DebugPtr;
      if (pUVar6 == (UMovieGraphPin *)0x0) {
        bVar8 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar8 = pUVar6 == this;
      }
      if (bVar8) {
        pUVar6 = ((TVar2.DebugPtr)->OutputPin).field0_0x0.DebugPtr;
      }
      if ((pUVar6 != (UMovieGraphPin *)0x0) && (pUVar6 == param_1)) {
        local_res18 = TVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        iVar5 = TArray<TObjectPtr<UMovieGraphEdge>,TSizedDefaultAllocator<32>_>::Remove
                          (&param_1->Edges,(TObjectPtr<UMovieGraphEdge> *)&local_res18.ObjectPtr);
        if (iVar5 == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7967137099692375985>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                             ,0x4f,"InOtherPin->Edges.Remove(Edge)");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
        }
        local_res20 = TVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        TArray<TObjectPtr<UMovieGraphEdge>,TSizedDefaultAllocator<32>_>::Remove
                  (&this->Edges,(TObjectPtr<UMovieGraphEdge> *)&local_res20.ObjectPtr);
        MaybeRevertToWildcard(this,this);
        MaybeRevertToWildcard(this,param_1);
        return true;
      }
      pTVar7 = pTVar7 + 1;
    }
  }
  return false;
}

// CanCreateConnection @ 14dcbe3d0

bool __thiscall UMovieGraphPin::CanCreateConnection(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  uchar uVar1;
  FPinConnectionResponse *pFVar2;
  FPinConnectionResponse local_28;
  
  pFVar2 = CanCreateConnection_PinConnectionResponse(this,&local_28,param_1);
  uVar1 = (pFVar2->Response).Value;
  if (local_28.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Message.TextData.Reference + 0x10))();
  }
  return uVar1 != '\x01';
}

// CanCreateConnection_PinConnectionResponse @ 14dcbe410

FPinConnectionResponse * __thiscall
UMovieGraphPin::CanCreateConnection_PinConnectionResponse
          (UMovieGraphPin *this,FPinConnectionResponse *__return_storage_ptr__,
          UMovieGraphPin *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FText *pFVar5;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ECanCreateConnectionResponse EVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res18 [16];
  FText local_38;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_28;
  
  if (param_1 == (UMovieGraphPin *)0x0) {
    pwVar9 = L"InOtherPin is invalid!";
    pwVar8 = L"InvalidPinError";
  }
  else if ((this->Node).field0_0x0.DebugPtr == (param_1->Node).field0_0x0.DebugPtr) {
    pwVar9 = L"No Circular Connections!";
    pwVar8 = L"CircularPinError";
  }
  else {
    bVar3 = (this->Properties).bIsBranch;
    if ((bVar3 == false) || ((param_1->Properties).bIsBranch == false)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((((this->Properties).bIsWildcard != false) || ((param_1->Properties).bIsWildcard != false))
        || (bVar2)) ||
       (((bVar3 == false && ((param_1->Properties).bIsBranch == false)) &&
        ((bVar3 = IsTypeCompatibleWith(this,param_1), bVar3 &&
         ((this->Properties).TypeObject.field0_0x0.DebugPtr ==
          (param_1->Properties).TypeObject.field0_0x0.DebugPtr)))))) {
      bVar3 = IsInputPin(this);
      bVar4 = IsInputPin(param_1);
      if (bVar3 == bVar4) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_28,L"MoviePipeline",L"PinDirectionMismatchError",
                            L"Directions are not compatible!");
        FPinConnectionResponse::FPinConnectionResponse
                  (__return_storage_ptr__,CONNECT_RESPONSE_DISALLOW,pFVar5);
        return __return_storage_ptr__;
      }
      FText::FText(&local_38);
      if ((!bVar2) || (bVar3 = IsConnectionToBranchAllowed(this,param_1,&local_38), bVar3)) {
        bVar3 = IsInputPin(this);
        if (bVar3) {
          param_1 = this;
        }
        pTVar6 = GetAllConnectedPins(param_1,&local_28);
        iVar1 = pTVar6->ArrayNum;
        if ((ITextData *)local_28.AllocatorInstance.Data != (ITextData *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        if (iVar1 < 1) {
          pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)
                   FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_28,L"MoviePipeline",L"PinConnect",L"Connect nodes");
          EVar7 = CONNECT_RESPONSE_MAKE;
        }
        else {
          bVar3 = IsInputPin(this);
          pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)
                   FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_28,L"MoviePipeline",L"PinInputReplaceExisting",
                              L"Replace existing input connections");
          EVar7 = (bVar3 ^ 1) + CONNECT_RESPONSE_BREAK_OTHERS_A;
        }
      }
      else {
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)local_38.TextData.Reference;
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 8))
                    (local_38.TextData.Reference,local_res18);
        }
        pTVar6 = &local_28;
        local_28.ArrayNum = local_38.Flags;
        EVar7 = CONNECT_RESPONSE_DISALLOW;
      }
      FPinConnectionResponse::FPinConnectionResponse(__return_storage_ptr__,EVar7,(FText *)pTVar6);
      goto LAB_14dcbe618;
    }
    pwVar9 = L"Pin types don\'t match!";
    pwVar8 = L"PinTypeMismatchError";
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText((FText *)&local_28,L"MoviePipeline",pwVar8,pwVar9);
  FText::FText(&__return_storage_ptr__->Message,pFVar5);
  (__return_storage_ptr__->Response).Value = '\x01';
  __return_storage_ptr__->bIsFatal = false;
  local_38.TextData.Reference = (pFVar5->TextData).Reference;
LAB_14dcbe618:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// EdgeCount @ 14dcc2d00

int __thiscall UMovieGraphPin::EdgeCount(UMovieGraphPin *this)

{
  return (this->Edges).ArrayNum;
}

// GetAllConnectedPins @ 14dcca5a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphPin::GetAllConnectedPins
          (UMovieGraphPin *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  UMovieGraphPin *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (this->Edges).AllocatorInstance.Data;
  iVar2 = (this->Edges).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      pFVar8 = pFVar8 + 8;
    }
    else {
      if (*(UMovieGraphPin **)(lVar3 + 0x28) == (UMovieGraphPin *)0x0) {
        bVar9 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar9 = *(UMovieGraphPin **)(lVar3 + 0x28) == this;
      }
      if (!bVar9) {
        if (*(UMovieGraphPin **)(lVar3 + 0x30) == (UMovieGraphPin *)0x0) {
          bVar9 = this == (UMovieGraphPin *)0x0;
        }
        else {
          bVar9 = *(UMovieGraphPin **)(lVar3 + 0x30) == this;
        }
        if (!bVar9) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFirstPin == InputPin || InFirstPin == OutputPin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                             ,0x10,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar7;
          }
        }
      }
      local_38[0] = *(UMovieGraphPin **)(lVar3 + 0x28);
      if (local_38[0] == (UMovieGraphPin *)0x0) {
        bVar9 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar9 = local_38[0] == this;
      }
      if (bVar9) {
        local_38[0] = *(UMovieGraphPin **)(lVar3 + 0x30);
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar8 = pFVar8 + 8;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UMovieGraphPin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_38[0];
    }
  }
  return __return_storage_ptr__;
}

// GetConnectedNodes @ 14dccbdf0

TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphPin::GetConnectedNodes
          (UMovieGraphPin *this,
          TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TObjectPtr<UMovieGraphNode> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMovieGraphNode *pUVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UMovieGraphPin *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  
  pFVar9 = (this->Edges).AllocatorInstance.Data;
  iVar3 = (this->Edges).ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    _Src.Data = local_38.Data;
    if (pFVar9 == pFVar2) break;
    lVar8 = *(longlong *)pFVar9;
    if (lVar8 != 0) {
      if (*(UMovieGraphPin **)(lVar8 + 0x28) == (UMovieGraphPin *)0x0) {
        bVar10 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar10 = *(UMovieGraphPin **)(lVar8 + 0x28) == this;
      }
      if (!bVar10) {
        if (*(UMovieGraphPin **)(lVar8 + 0x30) == (UMovieGraphPin *)0x0) {
          bVar10 = this == (UMovieGraphPin *)0x0;
        }
        else {
          bVar10 = *(UMovieGraphPin **)(lVar8 + 0x30) == this;
        }
        if (!bVar10) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InFirstPin == InputPin || InFirstPin == OutputPin",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                              ,0x10,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar6 = (TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar6;
          }
        }
      }
      pUVar7 = *(UMovieGraphPin **)(lVar8 + 0x28);
      if (pUVar7 == (UMovieGraphPin *)0x0) {
        bVar10 = this == (UMovieGraphPin *)0x0;
      }
      else {
        bVar10 = pUVar7 == this;
      }
      if (bVar10) {
        pUVar7 = *(UMovieGraphPin **)(lVar8 + 0x30);
      }
      if ((pUVar7 != (UMovieGraphPin *)0x0) &&
         (pTVar1 = &pUVar7->Node, (pUVar7->Node).field0_0x0.DebugPtr != (UMovieGraphNode *)0x0)) {
        if ((local_38.Data <= pTVar1) && (pTVar1 < local_38.Data + (longlong)iStack_2c * 8)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar6 = (TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar6;
          }
        }
        if (local_30 == iStack_2c) {
          local_30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_38,&iStack_2c);
        }
        lVar8 = (longlong)local_30;
        local_30 = local_30 + 1;
        pUVar4 = (pTVar1->field0_0x0).DebugPtr;
        *(UMovieGraphNode **)(local_38.Data + lVar8 * 8) = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMovieGraphNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  lVar8 = (longlong)local_30;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_30;
  if (local_30 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_30,0,&__return_storage_ptr__->AllocatorInstance,local_30,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar8 << 3);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// GetFirstConnectedPin @ 14dccd890

UMovieGraphPin * __thiscall UMovieGraphPin::GetFirstConnectedPin(UMovieGraphPin *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMovieGraphPin *pUVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Edges).ArrayNum;
  if (iVar1 == 0) {
    return (UMovieGraphPin *)0x0;
  }
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UMovieGraphPin *)(*pcVar2)();
    return pUVar4;
  }
  if (*(longlong *)(this->Edges).AllocatorInstance.Data == 0) {
    local_res8[0] = 0;
    bVar3 = `UMovieGraphPin::GetFirstConnectedPin'::__l6::<lambda_1>::operator()(local_res8);
    if (!bVar3) {
      return (UMovieGraphPin *)0x0;
    }
  }
  if (((this->Edges).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UMovieGraphPin *)(*pcVar2)();
    return pUVar4;
  }
  pUVar4 = UMovieGraphEdge::GetOtherPin
                     (*(UMovieGraphEdge **)(this->Edges).AllocatorInstance.Data,this,param_1);
  return pUVar4;
}

// GetPrivateStaticClass @ 14dcd2bc0

UClass * __cdecl UMovieGraphPin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPin",
               &Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton,
               StaticRegisterNativesUMovieGraphPin,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphPin>,InternalVTableHelperCtorCaller<UMovieGraphPin>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton;
}

// IsConnected @ 14dcd63f0

bool __thiscall UMovieGraphPin::IsConnected(UMovieGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Edges).AllocatorInstance.Data;
  iVar2 = (this->Edges).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) && (*(longlong *)(lVar3 + 0x30) != 0))
    {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// IsConnectionToBranchAllowed @ 14dcd6470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphPin::IsConnectionToBranchAllowed
          (UMovieGraphPin *this,UMovieGraphPin *param_1,FText *param_2)

{
  int iVar1;
  UMovieGraphNode *pUVar2;
  UMovieGraphNode *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  UClass *pUVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  byte bVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  UMovieGraphPin *pUVar25;
  UMovieGraphConfig *this_00;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  char local_res8;
  undefined3 uStackX_9;
  FName local_res10;
  FText *local_res18;
  FName local_res20;
  int local_274;
  ForAnyElementType local_268;
  undefined8 local_260;
  ForAnyElementType local_258;
  uint local_250;
  int local_24c;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  TArray<FString,TSizedDefaultAllocator<32>_> local_218;
  UMovieGraphNode *local_208;
  UMovieGraphNode *pUStack_200;
  FName local_1f8;
  FName local_1f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  
  local_res8 = '\0';
  uStackX_9 = 0;
  local_res18 = param_2;
  bVar7 = IsInputPin(this);
  pUVar25 = param_1;
  if (bVar7) {
    pUVar25 = this;
  }
  bVar7 = IsInputPin(this);
  if (!bVar7) {
    param_1 = this;
  }
  if ((pUVar25 == (UMovieGraphPin *)0x0) || (param_1 == (UMovieGraphPin *)0x0)) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"MovieGraph",L"PinDirectionMismatchError",
                         L"Directions are not compatible!");
    FText::operator=(param_2,pFVar14);
    local_e8.TextData.Reference = local_f8.TextData.Reference;
    goto LAB_14dcd7032;
  }
  pUVar2 = (pUVar25->Node).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->Node).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  if (((pUVar2 == (UMovieGraphNode *)0x0) || (pUVar3 == (UMovieGraphNode *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToNode && FromNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                         ,0x123,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  this_00 = (UMovieGraphConfig *)pUVar2->_padding_;
  if (this_00 == (UMovieGraphConfig *)0x0) {
LAB_14dcd6565:
    this_00 = (UMovieGraphConfig *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar13->_padding_)) goto LAB_14dcd6565;
  }
  pUVar13 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar1 = (int)pUVar13->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     (local_res8 = '\x01',
     (longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar13->_padding_)) {
    local_res8 = '\0';
  }
  pUVar13 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar1 = (int)pUVar13->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar13->_padding_)) {
    cVar11 = '\0';
  }
  else {
    cVar11 = '\x01';
  }
  local_res10.ComparisonIndex.Value._0_1_ = cVar11;
  cVar9 = (**(code **)(pUVar3->_padding_ + 800))(pUVar3);
  cVar10 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2);
  if (((cVar9 != cVar10) && (cVar9 != '\0')) && (cVar10 != '\0')) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_e8,L"MovieGraph",L"HighLevelPerNodeBranchRestrictionError",
                         L"Cannot connect a Globals-only Node to a RenderLayer-only Node!");
    FText::operator=(local_res18,pFVar14);
LAB_14dcd7032:
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    return false;
  }
  local_258.Data = (FScriptContainerElement *)0x0;
  local_250 = 2;
  local_208 = pUVar3;
  pUStack_200 = pUVar2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_258,2,&local_24c);
  *(UMovieGraphNode **)local_258.Data = local_208;
  *(UMovieGraphNode **)(local_258.Data + 8) = pUStack_200;
  if (cVar11 == '\0') {
    local_248 = (undefined1  [8])0x0;
    local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_240.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_138);
    local_120 = &local_240;
    puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_240);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`18'::<lambda_1>_>
                  ::_vftable_;
      puVar15[3] = &local_258;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    UMovieGraphConfig::VisitUpstreamNodes
              (this_00,pUVar3,
               (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                *)local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_188);
    if ((local_240.DelegateSize != 0) &&
       (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_240,0,0,0x10);
      local_240.DelegateSize = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_240.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_248);
  }
  if (local_res8 == '\0') {
    local_230 = (undefined1  [8])0x0;
    local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_228.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
               (FWriteAccessScope *)&local_158);
    local_140 = &local_228;
    puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_228);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`21'::<lambda_2>_>
                  ::_vftable_;
      puVar15[3] = &local_258;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    UMovieGraphConfig::VisitDownstreamNodes
              (this_00,pUVar2,
               (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                *)local_230);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
               (FWriteAccessScope *)&local_170);
    if ((local_228.DelegateSize != 0) &&
       (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_228,0,0,0x10);
      local_228.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_228.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_230);
  }
  local_1f8 = (pUVar25->Properties).Label;
  local_1f0 = (param_1->Properties).Label;
  local_res20.ComparisonIndex.Value._0_1_ = local_1f8 == UMovieGraphNode::GlobalsPinName;
  bVar7 = local_1f0 == UMovieGraphNode::GlobalsPinName;
  if (local_res8 == '\0') {
    pTVar17 = UMovieGraphConfig::GetDownstreamBranchNames(this_00,&local_1e8,pUVar2,pUVar25,true);
    FVar24.Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_274 = pTVar17->ArrayNum;
    pTVar17->ArrayNum = 0;
    pTVar17->ArrayMax = 0;
    local_208 = (UMovieGraphNode *)FVar24.Data;
    DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
    bVar22 = 0;
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
      local_208 = (UMovieGraphNode *)FVar24.Data;
      bVar22 = 0;
    }
  }
  else {
    ::FName::ToString(&local_1f8,&local_1c8);
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = CONCAT44(local_260._4_4_,1);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_268,1,(int *)((longlong)&local_260 + 4));
    ConstructItems<FString,FString,int>(local_268.Data,&local_1c8,1);
    FVar24.Data = local_268.Data;
    local_274 = (int)local_260;
    local_208 = (UMovieGraphNode *)local_268.Data;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
      local_208 = (UMovieGraphNode *)FVar24.Data;
    }
    bVar22 = 1;
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if (cVar11 == '\0') {
    bVar22 = bVar22 | 0x80;
    pTVar17 = UMovieGraphConfig::GetUpstreamBranchNames(this_00,&local_1d8,pUVar3,param_1,true);
  }
  else {
    ::FName::ToString(&local_1f0,&local_1b8);
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 1;
    bVar22 = bVar22 | 0x70;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_218.AllocatorInstance,1,&local_218.ArrayMax);
    ConstructItems<FString,FString,int>(local_218.AllocatorInstance.Data,&local_1b8,1);
    pTVar17 = &local_218;
  }
  pFVar21 = (pTVar17->AllocatorInstance).Data;
  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar17->ArrayNum;
  pTVar17->ArrayNum = 0;
  pTVar17->ArrayMax = 0;
  local_268.Data = pFVar21;
  if ((char)bVar22 < '\0') {
    bVar22 = bVar22 & 0x7f;
    DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
  }
  if ((bVar22 & 0x40) != 0) {
    bVar22 = bVar22 & 0xbf;
    DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  if (((bVar22 & 0x20) != 0) &&
     (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if ((char)local_res20.ComparisonIndex.Value == '\0') {
    for (pFVar23 = FVar24.Data; pFVar23 != FVar24.Data + (longlong)local_274 * 0x10;
        pFVar23 = pFVar23 + 0x10) {
      iVar12 = *(int *)(pFVar23 + 8);
      if (iVar12 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
        if (iVar12 < 2) goto LAB_14dcd6b3f;
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar23,
                            (wchar_t *)
                            UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar26 = iVar12 == 0;
      }
      else {
        bVar26 = iVar12 + UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 1;
      }
      if (bVar26) goto LAB_14dcd6b3f;
    }
    cVar11 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2);
    if (cVar11 == '\x01') goto LAB_14dcd6b3f;
    bVar26 = false;
  }
  else {
LAB_14dcd6b3f:
    bVar26 = true;
  }
  if (bVar7) {
LAB_14dcd6bb1:
    bVar27 = true;
  }
  else {
    pFVar23 = pFVar21 + (longlong)iVar1 * 0x10;
    for (; pFVar21 != pFVar23; pFVar21 = pFVar21 + 0x10) {
      iVar12 = *(int *)(pFVar21 + 8);
      if (iVar12 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
        if (iVar12 < 2) goto LAB_14dcd6bb1;
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar21,
                            (wchar_t *)
                            UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar27 = iVar12 == 0;
      }
      else {
        bVar27 = iVar12 + UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 1;
      }
      if (bVar27) goto LAB_14dcd6bb1;
    }
    cVar11 = (**(code **)(pUVar3->_padding_ + 800))(pUVar3);
    if (cVar11 == '\x01') goto LAB_14dcd6bb1;
    bVar27 = false;
  }
  if (local_274 == 0) {
LAB_14dcd6bf9:
    bVar28 = false;
  }
  else {
    if (local_274 == 1) {
      iVar12 = *(int *)(FVar24.Data + 8);
      if (iVar12 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
        if (iVar12 < 2) goto LAB_14dcd6bf9;
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar24.Data,
                            (wchar_t *)
                            UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar28 = iVar12 == 0;
      }
      else {
        bVar28 = iVar12 + UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 1;
      }
      if (bVar28) goto LAB_14dcd6bf9;
    }
    bVar28 = true;
  }
  if (iVar1 == 0) {
LAB_14dcd6c45:
    bVar29 = false;
  }
  else {
    if (iVar1 == 1) {
      iVar12 = *(int *)(local_268.Data + 8);
      if (iVar12 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
        if (iVar12 < 2) goto LAB_14dcd6c45;
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)local_268.Data,
                            (wchar_t *)
                            UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar29 = iVar12 == 0;
      }
      else {
        bVar29 = iVar12 + UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 1;
      }
      if (bVar29) goto LAB_14dcd6c45;
    }
    bVar29 = true;
  }
  uVar6 = local_250;
  if (local_res8 == '\0') {
    if ((char)local_res10.ComparisonIndex.Value == '\0') {
      if (((bVar26) && (bVar29)) || ((bVar27 && (bVar28)))) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"MovieGraph",L"GlobalsBranchMismatchError",
                             L"Globals branches and Globals-only nodes can only be connected to other Globals branches and Globals-only nodes."
                            );
        FText::operator=(local_res18,pFVar14);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          bVar7 = false;
          goto LAB_14dcd6fb0;
        }
      }
      else {
LAB_14dcd6dd1:
        uVar20 = (ulonglong)(int)local_250;
        pFVar21 = local_258.Data + uVar20 * 8;
        FVar24.Data = local_258.Data;
        while( true ) {
          if ((uint)uVar20 != uVar6) {
            `TCheckedPointerIterator<UMovieGraphNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (FVar24.Data == pFVar21) {
            bVar7 = true;
            goto LAB_14dcd6fb0;
          }
          plVar4 = *(longlong **)FVar24.Data;
          cVar11 = (**(code **)(*plVar4 + 800))(plVar4);
          if ((cVar11 == '\x01') && ((bVar28 || (bVar29)))) {
            local_res10 = (FName)plVar4[3];
            ::FName::ToString(&local_res10,&local_1a8);
            pFVar14 = FText::FromString(&local_88,&local_1a8);
            pFVar18 = FText::AsLocalizable_Advanced_LocText
                                (&local_a8,L"MovieGraph",L"GlobalsBranchRestrictionError",
                                 L"The node \'{0}\' can only be connected to the Globals branch.");
            pFVar19 = FTextFormat::FTextFormat(&local_78,pFVar18,Default);
            pFVar14 = FText::Format<FText>(&local_b8,pFVar19,pFVar14);
            FText::operator=(local_res18,pFVar14);
            if (local_b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
            }
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
            }
            goto LAB_14dcd6fa0;
          }
          cVar11 = (**(code **)(*plVar4 + 800))(plVar4);
          if ((cVar11 == '\x02') && ((bVar26 || (bVar27)))) break;
          uVar20 = (ulonglong)local_250;
          FVar24.Data = FVar24.Data + 8;
        }
        local_res20 = (FName)plVar4[3];
        ::FName::ToString(&local_res20,&local_198);
        pFVar14 = FText::FromString(&local_68,&local_198);
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_108,L"MovieGraph",L"RenderLayerBranchRestrictionError",
                             L"The node \'{0}\' can only be connected to a render layer branch.");
        pFVar19 = FTextFormat::FTextFormat(&local_58,pFVar18,Default);
        pFVar14 = FText::Format<FText>(&local_118,pFVar19,pFVar14);
        FText::operator=(local_res18,pFVar14);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        local_1a8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          local_1a8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        }
LAB_14dcd6fa0:
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
LAB_14dcd6d67:
      if ((!bVar7) || (!bVar28)) {
        if (local_res8 != '\0') goto LAB_14dcd6cf0;
        goto LAB_14dcd6cf9;
      }
LAB_14dcd6d77:
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_d8,L"MovieGraph",L"SubgraphGlobalsBranchMismatchError",
                           L"A subgraph Globals branch can only be connected to another Globals branch or Globals-only nodes."
                          );
      FText::operator=(local_res18,pFVar14);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        bVar7 = false;
        goto LAB_14dcd6fb0;
      }
    }
  }
  else {
    if (((char)local_res20.ComparisonIndex.Value != '\0') && (bVar29)) goto LAB_14dcd6d77;
    if ((char)local_res10.ComparisonIndex.Value != '\0') goto LAB_14dcd6d67;
LAB_14dcd6cf0:
    if (((char)local_res20.ComparisonIndex.Value != '\0') || (!bVar27)) {
LAB_14dcd6cf9:
      if (((char)local_res10.ComparisonIndex.Value == '\0') || ((bVar7 || (!bVar26))))
      goto LAB_14dcd6dd1;
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_c8,L"MovieGraph",L"SubgraphNonGlobalsBranchMismatchError",
                         L"A subgraph non-Globals branch cannot be connected to the Globals branch or Globals-only nodes."
                        );
    FText::operator=(local_res18,pFVar14);
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      bVar7 = false;
      goto LAB_14dcd6fb0;
    }
  }
  bVar7 = false;
LAB_14dcd6fb0:
  FVar24.Data = local_268.Data;
  DestructItems<FString,int>((FString *)local_268.Data,iVar1);
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar24.Data);
  }
  pUVar2 = local_208;
  DestructItems<FString,int>((FString *)local_208,local_274);
  if (pUVar2 != (UMovieGraphNode *)0x0) {
    FMemory::Free(pUVar2);
  }
  if (local_258.Data == (FScriptContainerElement *)0x0) {
    return bVar7;
  }
  FMemory::Free(local_258.Data);
  return bVar7;
}

// IsInputPin @ 14dcd7390

bool __thiscall UMovieGraphPin::IsInputPin(UMovieGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMovieGraphPin *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->Node).field0_0x0.DebugPtr == (UMovieGraphNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                       ,0xc4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = (this->Node).field0_0x0.DebugPtr;
  pFVar8 = (pUVar3->InputPins).AllocatorInstance.Data;
  iVar2 = (pUVar3->InputPins).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pUVar7 = *(UMovieGraphPin **)pFVar8;
    if ((pUVar7->Properties).Label == (this->Properties).Label) goto LAB_14dcd740b;
    pFVar8 = pFVar8 + 8;
  }
  pUVar7 = (UMovieGraphPin *)0x0;
LAB_14dcd740b:
  return pUVar7 == this;
}

// IsOutputPin @ 14dcd74b0

bool __thiscall UMovieGraphPin::IsOutputPin(UMovieGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMovieGraphPin *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->Node).field0_0x0.DebugPtr == (UMovieGraphNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                       ,0xca,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = (this->Node).field0_0x0.DebugPtr;
  pFVar8 = (pUVar3->OutputPins).AllocatorInstance.Data;
  iVar2 = (pUVar3->OutputPins).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->OutputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pUVar7 = *(UMovieGraphPin **)pFVar8;
    if ((pUVar7->Properties).Label == (this->Properties).Label) goto LAB_14dcd752b;
    pFVar8 = pFVar8 + 8;
  }
  pUVar7 = (UMovieGraphPin *)0x0;
LAB_14dcd752b:
  return pUVar7 == this;
}

// IsPinDirectionCompatibleWith @ 14dcd7550

bool __thiscall
UMovieGraphPin::IsPinDirectionCompatibleWith(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = IsInputPin(this);
  bVar2 = IsInputPin(param_1);
  return bVar2 != bVar1;
}

// IsTypeCompatibleWith @ 14dcd7710

bool __thiscall UMovieGraphPin::IsTypeCompatibleWith(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  EMovieGraphValueType EVar1;
  EMovieGraphValueType EVar2;
  bool bVar3;
  bool bVar4;
  
  EVar1 = (this->Properties).Type;
  if ((EVar1 == Float) || (EVar1 == Double)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  EVar2 = (param_1->Properties).Type;
  if ((EVar2 == Float) || (EVar2 == Double)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((EVar1 != EVar2) && ((!bVar3 || (!bVar4)))) {
    return false;
  }
  return true;
}

// MaybeRevertToWildcard @ 14dcd7ea0

void __thiscall UMovieGraphPin::MaybeRevertToWildcard(UMovieGraphPin *this,UMovieGraphPin *param_1)

{
  int iVar1;
  UMovieGraphNode *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UMovieGraphConfig *pUVar9;
  char local_res10 [8];
  undefined8 local_res18;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  undefined1 local_f0 [8];
  FDelegateAllocation local_e8;
  FMovieGraphPinProperties local_d8;
  FMovieGraphPinProperties local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if ((param_1 == (UMovieGraphPin *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPin.cpp"
                         ,0x24a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = (param_1->Node).field0_0x0.DebugPtr;
  if (pUVar2 == (UMovieGraphNode *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
  lVar3 = pUVar2->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    local_res10[0] = '\x01';
  }
  else {
    local_res10[0] = '\0';
  }
  pUVar9 = (UMovieGraphConfig *)((param_1->Node).field0_0x0.DebugPtr)->_padding_;
  if (pUVar9 == (UMovieGraphConfig *)0x0) {
LAB_14dcd7f62:
    pUVar9 = (UMovieGraphConfig *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14dcd7f62;
  }
  local_108 = (undefined1  [8])0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_100;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_100);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_res10;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  UMovieGraphConfig::VisitUpstreamNodes
            (pUVar9,(param_1->Node).field0_0x0.DebugPtr,
             (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
              *)local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_98);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  pUVar9 = (UMovieGraphConfig *)((param_1->Node).field0_0x0.DebugPtr)->_padding_;
  if (pUVar9 != (UMovieGraphConfig *)0x0) {
    pUVar6 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14dcd808a;
  }
  pUVar9 = (UMovieGraphConfig *)0x0;
LAB_14dcd808a:
  local_f0 = (undefined1  [8])0x0;
  local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_e8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_e8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = local_res10;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UMovieGraphConfig::VisitDownstreamNodes
            (pUVar9,(param_1->Node).field0_0x0.DebugPtr,
             (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
              *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_80);
  if ((local_e8.DelegateSize != 0) &&
     (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e8,0,0,0x10);
    local_e8.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  if (local_res10[0] == '\0') {
    local_res18 = 0;
    local_d8.Label.ComparisonIndex.Value = 0;
    local_d8.Label.Number = 0;
    local_d8.Type = None;
    local_d8.TypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
    local_d8.bAllowMultipleConnections = false;
    local_d8.bIsBranch = false;
    local_d8.bIsWildcard = true;
    local_d8.bIsBuiltIn = true;
    PropagatePinProperties(param_1,&local_d8,true);
    local_b8.Label.ComparisonIndex.Value = 0;
    local_b8.Label.Number = 0;
    local_b8.Type = None;
    local_b8.TypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
    local_b8.bAllowMultipleConnections = false;
    local_b8.bIsBranch = false;
    local_b8.bIsWildcard = true;
    local_b8.bIsBuiltIn = true;
    PropagatePinProperties(param_1,&local_b8,false);
  }
  return;
}

// PropagatePinProperties @ 14dcdc130

void __thiscall
UMovieGraphPin::PropagatePinProperties
          (UMovieGraphPin *this,FMovieGraphPinProperties *param_1,bool param_2)

{
  UMovieGraphNode *this_00;
  TObjectPtr<UMovieGraphNode> TVar1;
  UObject *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TObjectPtr<UMovieGraphNode>_u_0 TVar8;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  ulonglong uVar11;
  UMovieGraphPin *pUVar12;
  TObjectPtr<UMovieGraphNode>_u_0 TVar13;
  longlong lVar14;
  TObjectPtr<UMovieGraphNode>_u_0 *pTVar15;
  int iVar16;
  int iVar17;
  ForAnyElementType FVar18;
  undefined1 local_res20 [8];
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_118;
  bool local_108;
  UMovieGraphPin *local_100;
  TObjectPtr<UMovieGraphNode>_u_0 *local_f8;
  TObjectPtr<UMovieGraphNode>_u_0 local_f0;
  TObjectPtr<UMovieGraphNode>_u_0 local_e8;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_e0;
  uint local_d0;
  TObjectPtr<UMovieGraphNode>_u_0 *local_c8;
  UMovieGraphNode *local_c0;
  FMovieGraphPinProperties local_b8;
  FMovieGraphPinProperties local_98;
  FMovieGraphPinProperties local_78;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_58;
  
  local_108 = this->bPropagateTypeRecursionGuard;
  if (local_108 == false) {
    TVar8.DebugPtr = (UMovieGraphNode *)0x0;
    this->bPropagateTypeRecursionGuard = true;
    TVar13.DebugPtr = TVar8.DebugPtr;
    if ((this->Node).field0_0x0.DebugPtr != (UMovieGraphNode *)0x0) {
      pUVar7 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->Node,pUVar7);
      if (bVar5) {
        TVar13.DebugPtr = (this->Node).field0_0x0.DebugPtr;
      }
    }
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    bVar5 = IsInputPin(this);
    if (param_2) {
      if (bVar5) {
        TVar8.DebugPtr = (UMovieGraphNode *)GetFirstConnectedPin(this,false);
      }
      else if (TVar13.DebugPtr != (UMovieGraphNode *)0x0) {
        TVar8.DebugPtr =
             (UMovieGraphNode *)
             (**(code **)((TVar13.DebugPtr)->_padding_ + 0x380))(TVar13.DebugPtr,this);
      }
      local_f0 = TVar8;
      if (((local_118.AllocatorInstance.Data <= &local_f0) &&
          (&local_f0 <
           (TObjectPtr<UMovieGraphNode>_u_0 *)
           (local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8))) &&
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
      iVar6 = local_118.ArrayNum;
      if (local_118.ArrayNum == local_118.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
      }
      local_118.ArrayNum = iVar6 + 1;
      ((TObjectPtr<UMovieGraphNode>_u_0 *)(local_118.AllocatorInstance.Data + (longlong)iVar6 * 8))
      ->DebugPtr = (UMovieGraphNode *)local_f0;
    }
    else if (bVar5) {
      if (TVar13.DebugPtr != (UMovieGraphNode *)0x0) {
        local_e8.DebugPtr =
             (UMovieGraphNode *)
             (**(code **)((TVar13.DebugPtr)->_padding_ + 0x380))(TVar13.DebugPtr,this);
        if (((local_118.AllocatorInstance.Data <= &local_e8) &&
            (&local_e8 <
             (TObjectPtr<UMovieGraphNode>_u_0 *)
             (local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8))) &&
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
        iVar6 = local_118.ArrayNum;
        if (local_118.ArrayNum == local_118.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        local_118.ArrayNum = iVar6 + 1;
        ((TObjectPtr<UMovieGraphNode>_u_0 *)(local_118.AllocatorInstance.Data + (longlong)iVar6 * 8)
        )->DebugPtr = (UMovieGraphNode *)local_e8;
      }
    }
    else {
      pTVar9 = GetAllConnectedPins(this,&local_58);
      if ((&local_118 == pTVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = pTVar9->ArrayNum;
      if (iVar6 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar6,&local_118.AllocatorInstance,&local_118.ArrayNum,
                            &local_118.ArrayMax);
        memmove(local_118.AllocatorInstance.Data + (longlong)iVar17 * 8,
                (pTVar9->AllocatorInstance).Data,(longlong)iVar6 << 3);
        pTVar9->ArrayNum = 0;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    uVar11 = (ulonglong)local_118.ArrayNum;
    local_d0 = local_118.ArrayNum;
    pTVar15 = (TObjectPtr<UMovieGraphNode>_u_0 *)(local_118.AllocatorInstance.Data + uVar11 * 8);
    FVar18.Data = local_118.AllocatorInstance.Data;
    local_f8 = pTVar15;
    while( true ) {
      local_c8 = (TObjectPtr<UMovieGraphNode>_u_0 *)FVar18.Data;
      if (local_118.ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UMovieGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if ((TObjectPtr<UMovieGraphNode>_u_0 *)FVar18.Data == pTVar15) break;
      this_00 = *(UMovieGraphNode **)FVar18.Data;
      local_c0 = this_00;
      if ((this_00 != (UMovieGraphNode *)0x0) &&
         (TVar1.field0_0x0 =
               (TObjectPtr<UMovieGraphNode>_u_0)
               *(TObjectPtr<UMovieGraphNode>_u_0 *)&this_00->OnNodeChangedDelegate,
         pTVar15 = local_f8, TVar1.field0_0x0 != (UMovieGraphNode *)0x0)) {
        pUVar7 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
        lVar10 = *(longlong *)((longlong)TVar1.field0_0x0 + 0x10);
        iVar6 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar6) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pTVar15 = local_f8;
        if (bVar5) {
          if (*(TObjectPtr<UMovieGraphNode>_u_0 *)&this_00->OnNodeChangedDelegate ==
              (UMovieGraphNode *)0x0) {
LAB_14dcdc4b2:
            TVar13.DebugPtr = (UMovieGraphNode *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)&this_00->OnNodeChangedDelegate,pUVar7);
            if (!bVar5) goto LAB_14dcdc4b2;
            TVar13 = (TObjectPtr<UMovieGraphNode>_u_0)
                     *(TObjectPtr<UMovieGraphNode>_u_0 *)&this_00->OnNodeChangedDelegate;
          }
          UMovieGraphRerouteNode::GetPinProperties
                    ((UMovieGraphRerouteNode *)TVar13.DebugPtr,&local_78);
          local_78.Type = param_1->Type;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 = (param_1->TypeObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_78.TypeObject.field0_0x0 = (param_1->TypeObject).field0_0x0;
          local_78.bIsBranch = param_1->bIsBranch;
          local_78.bIsWildcard = param_1->bIsWildcard;
          UMovieGraphRerouteNode::SetPinProperties
                    ((UMovieGraphRerouteNode *)TVar13.DebugPtr,&local_78);
          UMovieGraphNode::UpdatePins(TVar13.DebugPtr);
          local_b8.Label = param_1->Label;
          local_b8.TypeObject.field0_0x0 =
               (TObjectPtr<UObject_const_>_u_0)(param_1->TypeObject).field0_0x0.DebugPtr;
          local_b8.Type = param_1->Type;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_b8.TypeObject.field0_0x0.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_b8.TypeObject.field0_0x0);
          }
          local_b8.bAllowMultipleConnections = param_1->bAllowMultipleConnections;
          local_b8.bIsBranch = param_1->bIsBranch;
          local_b8.bIsWildcard = param_1->bIsWildcard;
          local_b8.bIsBuiltIn = param_1->bIsBuiltIn;
          PropagatePinProperties((UMovieGraphPin *)this_00,&local_b8,param_2);
          pTVar15 = local_f8;
          if (param_2) {
            GetAllConnectedPins((UMovieGraphPin *)this_00,&local_e0);
            local_100 = this;
            if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 8)) &&
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
            FVar4.Data = local_e0.AllocatorInstance.Data;
            lVar10 = (longlong)local_e0.ArrayNum;
            if (local_e0.ArrayNum != 0) {
              iVar17 = 0;
              lVar14 = 0;
              bVar5 = *(UMovieGraphPin **)local_e0.AllocatorInstance.Data != local_100;
              pUVar12 = local_100;
              iVar6 = 0;
              do {
                iVar16 = iVar6;
                do {
                  lVar14 = lVar14 + 1;
                  iVar16 = iVar16 + 1;
                  if (lVar10 <= lVar14) break;
                } while (bVar5 == (*(UMovieGraphPin **)(FVar4.Data + lVar14 * 8) != pUVar12));
                if (bVar5 != false) {
                  if (iVar17 != iVar6) {
                    memmove(FVar4.Data + (longlong)iVar17 * 8,FVar4.Data + (longlong)iVar6 * 8,
                            (longlong)(iVar16 - iVar6) << 3);
                    pUVar12 = local_100;
                  }
                  iVar17 = iVar17 + (iVar16 - iVar6);
                }
                bVar5 = (bool)(bVar5 ^ 1);
                iVar6 = iVar16;
              } while (lVar14 < lVar10);
              FVar18.Data = (FScriptContainerElement *)local_c8;
              local_e0.ArrayNum = iVar17;
              if (iVar17 != 0) {
                local_98.Label = param_1->Label;
                local_98.TypeObject.field0_0x0 =
                     (TObjectPtr<UObject_const_>_u_0)(param_1->TypeObject).field0_0x0.DebugPtr;
                local_98.Type = param_1->Type;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_98.TypeObject.field0_0x0.DebugPtr != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_98.TypeObject.field0_0x0);
                }
                local_98.bAllowMultipleConnections = param_1->bAllowMultipleConnections;
                local_98.bIsBranch = param_1->bIsBranch;
                local_98.bIsWildcard = param_1->bIsWildcard;
                local_98.bIsBuiltIn = param_1->bIsBuiltIn;
                PropagatePinProperties((UMovieGraphPin *)local_c0,&local_98,false);
                FVar18.Data = (FScriptContainerElement *)local_c8;
              }
            }
            pTVar15 = local_f8;
            if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.AllocatorInstance.Data);
              pTVar15 = local_f8;
            }
          }
        }
      }
      uVar11 = (ulonglong)local_d0;
      FVar18.Data = FVar18.Data + 8;
    }
    if ((TObjectPtr<UMovieGraphNode>_u_0 *)local_118.AllocatorInstance.Data !=
        (TObjectPtr<UMovieGraphNode>_u_0 *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    this->bPropagateTypeRecursionGuard = local_108;
  }
  return;
}

// PropagatePinType @ 14dcdc760

void __thiscall
UMovieGraphPin::PropagatePinType
          (UMovieGraphPin *this,UMovieGraphPin *param_1,UMovieGraphPin *param_2)

{
  UMovieGraphConfig *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FMovieGraphPinProperties *pFVar4;
  UMovieGraphPin *local_res10;
  UMovieGraphPin *local_res20;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  undefined1 local_50 [16];
  TObjectPtr<UObject_const_>_u_0 local_40;
  FDelegateAllocation *local_38;
  
  if (((param_1 == (UMovieGraphPin *)0x0) ||
      ((param_1->Node).field0_0x0.DebugPtr != (UMovieGraphNode *)0x0)) &&
     ((param_2 == (UMovieGraphPin *)0x0 ||
      ((param_2->Node).field0_0x0.DebugPtr != (UMovieGraphNode *)0x0)))) {
    local_res10 = param_1;
    if ((param_1 != (UMovieGraphPin *)0x0) && ((param_1->Properties).bIsWildcard != false)) {
      local_res10 = (UMovieGraphPin *)0x0;
      pUVar1 = UMovieGraphNode::GetGraph((param_1->Node).field0_0x0.DebugPtr);
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)local_50);
      local_38 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`8'::<lambda_1>_>
                   ::_vftable_;
        puVar2[3] = &local_res10;
      }
      if ((bool)local_40._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
      }
      UMovieGraphConfig::VisitDownstreamNodes
                (pUVar1,(param_1->Node).field0_0x0.DebugPtr,
                 (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                  *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if ((bool)local_40._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    local_res20 = param_2;
    if ((param_2 != (UMovieGraphPin *)0x0) && ((param_2->Properties).bIsWildcard != false)) {
      local_res20 = (UMovieGraphPin *)0x0;
      pUVar1 = UMovieGraphNode::GetGraph((param_2->Node).field0_0x0.DebugPtr);
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)local_50);
      local_38 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`11'::<lambda_2>_>
                   ::_vftable_;
        puVar2[3] = &local_res20;
      }
      if ((bool)local_40._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
      }
      UMovieGraphConfig::VisitUpstreamNodes
                (pUVar1,(param_2->Node).field0_0x0.DebugPtr,
                 (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                  *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if ((bool)local_40._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    if (local_res10 != (UMovieGraphPin *)0x0) {
      pFVar4 = FMovieGraphPinProperties::FMovieGraphPinProperties
                         ((FMovieGraphPinProperties *)local_50,&local_res10->Properties);
      PropagatePinProperties(local_res10,pFVar4,true);
      return;
    }
    if (local_res20 != (UMovieGraphPin *)0x0) {
      pFVar4 = FMovieGraphPinProperties::FMovieGraphPinProperties
                         ((FMovieGraphPinProperties *)local_50,&local_res20->Properties);
      PropagatePinProperties(local_res20,pFVar4,false);
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphPin @ 14dce6650

void __cdecl UMovieGraphPin::StaticRegisterNativesUMovieGraphPin(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphPin_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllowsMultipleConnections @ 14dcef460

void __cdecl
UMovieGraphPin::execAllowsMultipleConnections(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsOutputPin((UMovieGraphPin *)param_1);
  if ((!bVar1) && (param_1[1].field_0x20 == '\0')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execCanCreateConnection @ 14dcef6a0

void __cdecl UMovieGraphPin::execCanCreateConnection(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  ITextData *pIVar3;
  bool bVar4;
  bool bVar5;
  FText *pFVar6;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  UMovieGraphPin *this;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  UMovieGraphPin *local_res18 [2];
  FText local_68;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  char local_38;
  byte local_37;
  
  local_res18[0] = (UMovieGraphPin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UMovieGraphPin *)0x0) {
    pwVar10 = L"InOtherPin is invalid!";
    pwVar9 = L"InvalidPinError";
  }
  else {
    if (*(UMovieGraphNode **)(param_1 + 1) != (local_res18[0]->Node).field0_0x0.DebugPtr) {
      if ((param_1[1].field_0x21 == '\0') || ((local_res18[0]->Properties).bIsBranch == false)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((((param_1[1].field_0x22 != '\0') || ((local_res18[0]->Properties).bIsWildcard != false))
          || (bVar11)) ||
         (((param_1[1].field_0x21 == '\0' && ((local_res18[0]->Properties).bIsBranch == false)) &&
          ((bVar4 = IsTypeCompatibleWith((UMovieGraphPin *)param_1,local_res18[0]), bVar4 &&
           (*(UObject **)&param_1[1].field_0x18 == (this->Properties).TypeObject.field0_0x0.DebugPtr
           )))))) {
        bVar4 = IsInputPin((UMovieGraphPin *)param_1);
        bVar5 = IsInputPin(this);
        if (bVar4 == bVar5) {
          pwVar10 = L"Directions are not compatible!";
          pwVar9 = L"PinDirectionMismatchError";
          goto LAB_14dcef7dd;
        }
        FText::FText(&local_68);
        if ((!bVar11) ||
           (bVar11 = IsConnectionToBranchAllowed((UMovieGraphPin *)param_1,this,&local_68), bVar11))
        {
          bVar11 = IsInputPin((UMovieGraphPin *)param_1);
          if (bVar11) {
            this = (UMovieGraphPin *)param_1;
          }
          pTVar7 = GetAllConnectedPins(this,&local_58);
          iVar1 = pTVar7->ArrayNum;
          if ((ITextData *)local_58.AllocatorInstance.Data != (ITextData *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
          if (iVar1 < 1) {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               ((FText *)&local_58,L"MoviePipeline",L"PinConnect",L"Connect nodes");
            FText::FText(&local_48,pFVar6);
            local_38 = '\0';
          }
          else {
            bVar11 = IsInputPin((UMovieGraphPin *)param_1);
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               ((FText *)&local_58,L"MoviePipeline",L"PinInputReplaceExisting",
                                L"Replace existing input connections");
            FText::FText(&local_48,pFVar6);
            local_38 = !bVar11 + '\x02';
          }
          FVar8.Data = (FScriptContainerElement *)(pFVar6->TextData).Reference;
        }
        else {
          local_58.AllocatorInstance.Data = (FScriptContainerElement *)local_68.TextData.Reference;
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 8))
                      (local_68.TextData.Reference,local_res10);
          }
          local_58.ArrayNum = local_68.Flags;
          FText::FText(&local_48,(FText *)&local_58);
          local_38 = '\x01';
          FVar8.Data = local_58.AllocatorInstance.Data;
        }
        local_37 = local_37 & 0xfe;
        if ((ITextData *)FVar8.Data != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)FVar8.Data + 0x10))();
        }
      }
      else {
        pwVar10 = L"Pin types don\'t match!";
        pwVar9 = L"PinTypeMismatchError";
LAB_14dcef7dd:
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_58,L"MoviePipeline",pwVar9,pwVar10);
        FText::FText(&local_48,pFVar6);
        local_37 = local_37 & 0xfe;
        local_38 = '\x01';
        local_68.TextData.Reference = (pFVar6->TextData).Reference;
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      goto LAB_14dcef95b;
    }
    pwVar10 = L"No Circular Connections!";
    pwVar9 = L"CircularPinError";
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText((FText *)&local_58,L"MoviePipeline",pwVar9,pwVar10)
  ;
  FText::FText(&local_48,pFVar6);
  local_37 = local_37 & 0xfe;
  local_38 = '\x01';
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
LAB_14dcef95b:
  bVar11 = local_38 != '\x01';
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  *(bool *)param_3 = bVar11;
  return;
}

// execEdgeCount @ 14dcefa70

void __cdecl UMovieGraphPin::execEdgeCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x8;
  return;
}

// execGetAllConnectedPins @ 14dcf0600

void __cdecl UMovieGraphPin::execGetAllConnectedPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAllConnectedPins((UMovieGraphPin *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetConnectedNodes @ 14dcf0990

void __cdecl UMovieGraphPin::execGetConnectedNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetConnectedNodes((UMovieGraphPin *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetFirstConnectedPin @ 14dcf0cf0

void __cdecl
UMovieGraphPin::execGetFirstConnectedPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphPin *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetFirstConnectedPin((UMovieGraphPin *)param_1,local_res10[0] != 0);
  *(UMovieGraphPin **)param_3 = pUVar2;
  return;
}

// execIsConnected @ 14dcf1ee0

void __cdecl UMovieGraphPin::execIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsConnected((UMovieGraphPin *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsConnectionToBranchAllowed @ 14dcf1f20

void __cdecl
UMovieGraphPin::execIsConnectionToBranchAllowed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  UMovieGraphPin *local_res10;
  FText local_18;
  
  local_res10 = (UMovieGraphPin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsConnectionToBranchAllowed((UMovieGraphPin *)param_1,local_res10,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execIsInputPin @ 14dcf2260

void __cdecl UMovieGraphPin::execIsInputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsInputPin((UMovieGraphPin *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsOutputPin @ 14dcf22a0

void __cdecl UMovieGraphPin::execIsOutputPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsOutputPin((UMovieGraphPin *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPinDirectionCompatibleWith @ 14dcf22e0

void __cdecl
UMovieGraphPin::execIsPinDirectionCompatibleWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphPin *this;
  bool bVar2;
  bool bVar3;
  UMovieGraphPin *local_res10;
  
  local_res10 = (UMovieGraphPin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsInputPin((UMovieGraphPin *)param_1);
  bVar3 = IsInputPin(this);
  *(bool *)param_3 = bVar3 != bVar2;
  return;
}

// execIsTypeCompatibleWith @ 14dcf2390

void __cdecl
UMovieGraphPin::execIsTypeCompatibleWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  char cVar2;
  FProperty *pFVar3;
  bool bVar4;
  bool bVar5;
  longlong local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = param_1[1].field_0x10;
  if ((cVar1 == '\x05') || (cVar1 == '\x06')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  cVar2 = *(char *)(local_res8 + 0x38);
  if ((cVar2 == '\x05') || (cVar2 == '\x06')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((cVar1 == cVar2) || ((bVar4 && (bVar5)))) {
    *(undefined1 *)param_3 = 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// operator() @ 15058ca30

bool __thiscall `UMovieGraphPin::GetFirstConnectedPin'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7967137099692375839>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7967137099692375839>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

