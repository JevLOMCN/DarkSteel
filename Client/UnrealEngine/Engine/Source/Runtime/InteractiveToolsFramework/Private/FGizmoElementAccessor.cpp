// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// GetSubElements @ 1496a7fa0

TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> * __cdecl
FGizmoElementAccessor::GetSubElements
          (TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> *__return_storage_ptr__,
          UGizmoElementBase *param_1)

{
  (**(code **)(param_1->_padding_ + 0x3b0))(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSubElementsRecursive @ 1496a8060

void __cdecl
FGizmoElementAccessor::GetSubElementsRecursive
          (UGizmoElementBase *param_1,
          TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puStack_28;
  int iStack_20;
  undefined1 auStack_18 [16];
  
  puVar5 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x3b0))(param_1,auStack_18);
  iVar1 = *(int *)(puVar5 + 1);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) goto LAB_1496a8127;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  ConstructItems<TObjectPtr<UGizmoElementBase>,TObjectPtr<UGizmoElementBase>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,
             (TObjectPtr<UGizmoElementBase> *)*puVar5,iVar1);
LAB_1496a8127:
  (**(code **)(param_1->_padding_ + 0x3b0))(param_1,&puStack_28);
  for (puVar5 = puStack_28; puVar5 != puStack_28 + iStack_20; puVar5 = puVar5 + 1) {
    if ((UGizmoElementBase *)*puVar5 != (UGizmoElementBase *)0x0) {
      UGizmoElementBase::GetSubElementsRecursive((UGizmoElementBase *)*puVar5,param_2);
    }
  }
  return;
}

// GetSubElementsRecursive @ 1496a8070

bool __cdecl
FGizmoElementAccessor::GetSubElementsRecursive
          (UGizmoElementBase *param_1,
          TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFStack_18;
  int iStack_10;
  
  (**(code **)(param_1->_padding_ + 0x3b0))(param_1,&pFStack_18);
  pFVar8 = pFStack_18;
  do {
    if (pFVar8 == pFStack_18 + (longlong)iStack_10 * 8) {
      return param_2->ArrayNum != 0;
    }
    if (*(longlong **)pFVar8 != (longlong *)0x0) {
      uVar6 = (**(code **)(**(longlong **)pFVar8 + 0x398))();
      if (uVar6 == param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= pFVar8) && (pFVar8 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        param_2->ArrayNum = iVar7 + 1;
        pUVar2 = *(UObject **)pFVar8;
        *(UObject **)(pFVar1 + (longlong)iVar7 * 8) = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      UGizmoElementBase::GetSubElementsRecursive(*(UGizmoElementBase **)pFVar8,param_2,param_3);
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// IsEnabledForInteractionState @ 1496ad390

bool __cdecl
FGizmoElementAccessor::IsEnabledForInteractionState
          (UGizmoElementBase *param_1,TOptional<EGizmoElementInteractionState> *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  EGizmoElementInteractionState EVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1->_padding_ + 0x650);
  EVar2 = (**(code **)(param_1->_padding_ + 0x3d0))();
  if (param_2->bIsSet != false) {
    EVar2 = param_2->TypedValue;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496ad3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,EVar2);
  return (bool)uVar1;
}

// IsPartial @ 1496ae120

bool __cdecl
FGizmoElementAccessor::IsPartial
          (UGizmoElementCircleBase *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,bool param_6)

{
  bool bVar1;
  
  bVar1 = UGizmoElementCircleBase::IsPartial(param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}

// UpdateRenderState @ 1496c4fc0

bool __thiscall
FGizmoElementAccessor::UpdateRenderState
          (FGizmoElementAccessor *this,UGizmoElementBase *param_1,IToolsContextRenderAPI *param_2,
          TVector<double> *param_3,FRenderTraversalState *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_res18 [16];
  undefined1 local_28 [32];
  
  if (param_2 != (IToolsContextRenderAPI *)0x0) {
    uVar3 = (**(code **)(param_1->_padding_ + 0x690))
                      (param_1,param_2,param_3,param_4,local_res18,local_28);
    return (bool)uVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1256698316888997944>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoUtil.cpp"
                     ,0x38,"InRenderAPI");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// UpdateRenderState @ 1496c5050

bool __thiscall
FGizmoElementAccessor::UpdateRenderState
          (FGizmoElementAccessor *this,UGizmoElementBase *param_1,IToolsContextRenderAPI *param_2,
          TVector<double> *param_3,FRenderTraversalState *param_4,bool *param_5,
          TQuat<double> *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_2 != (IToolsContextRenderAPI *)0x0) {
    uVar3 = (**(code **)(param_1->_padding_ + 0x690))
                      (param_1,param_2,param_3,param_4,param_5,param_6);
    return (bool)uVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1256698316888997944>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoUtil.cpp"
                     ,0x38,"InRenderAPI");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

