// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 10

// FPropertyPath @ 14d835f00

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::FPropertyPath(FPropertyPath *this,FPropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FProperty_const_*> _Dst;
  ForElementType<FProperty_const_*> _Src;
  
  (this->TopLevelContainer_Object).WeakPtr = (param_1->TopLevelContainer_Object).WeakPtr;
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (param_1->TopLevelContainer_ScriptStruct).WeakPtr
  ;
  this->TopLevelContainer_ScriptStructData = param_1->TopLevelContainer_ScriptStructData;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  _Src = (param_1->Properties).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Properties).ArrayNum;
  (this->Properties).ArrayNum = iVar2;
  if (_Src == (ForElementType<FProperty_const_*>)0x0) {
    _Src = (ForElementType<FProperty_const_*>)&param_1->Properties;
  }
  piVar1 = &(this->Properties).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
              (8,8,iVar2,0,&(this->Properties).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Properties).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FProperty_const_*>)0x0) {
      _Dst = (ForElementType<FProperty_const_*>)&this->Properties;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// FPropertyPath @ 14d835fc0

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::FPropertyPath
          (FPropertyPath *this,UObject *param_1,FProperty *param_2)

{
  TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPropertyPath *pFVar5;
  ForElementType<FProperty_const_*> FVar6;
  UObject *local_res8;
  undefined8 local_res10;
  FProperty *local_res18;
  
  local_res18 = param_2;
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  (this->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  local_res10 = 0;
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=
            (&(this->TopLevelContainer_ScriptStruct).WeakPtr,(FObjectPtr)&local_res10);
  pTVar1 = &this->Properties;
  this->TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 1;
  if ((pTVar1 <= &local_res18) &&
     (&local_res18 < &(this->Properties).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyPath *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Properties).ArrayNum;
  if (iVar4 == (this->Properties).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Properties).ArrayMax);
  }
  (this->Properties).ArrayNum = iVar4 + 1;
  FVar6 = (this->Properties).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FProperty_const_*>)0x0) {
    FVar6 = (ForElementType<FProperty_const_*>)pTVar1;
  }
  *(FProperty **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_res18;
  return this;
}

// FPropertyPath @ 14d836110

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::FPropertyPath
          (FPropertyPath *this,UObject *param_1,
          TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  ForElementType<FProperty_const_*> FVar1;
  UObject *local_28 [2];
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  (this->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_28[0] = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)local_28);
  local_28[0] = (UObject *)0x0;
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TopLevelContainer_ScriptStruct).WeakPtr,(FObjectPtr)local_28);
  this->TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  if ((param_2->AllocatorInstance).SecondaryData == (ForElementType<FProperty_const_*>)0x0) {
    *(undefined8 *)(this->Properties).AllocatorInstance.InlineData =
         *(undefined8 *)(param_2->AllocatorInstance).InlineData;
  }
  (this->Properties).AllocatorInstance.SecondaryData = (param_2->AllocatorInstance).SecondaryData;
  (param_2->AllocatorInstance).SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->Properties).ArrayNum = param_2->ArrayNum;
  (this->Properties).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 1;
  FVar1 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return this;
}

// FPropertyPath @ 14d8361e0

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::FPropertyPath
          (FPropertyPath *this,UScriptStruct *param_1,void *param_2,FProperty *param_3)

{
  TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPropertyPath *pFVar5;
  ForElementType<FProperty_const_*> FVar6;
  undefined8 local_res8;
  UScriptStruct *local_res10 [2];
  FProperty *local_res20;
  
  (this->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  local_res20 = param_3;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10[0] = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TopLevelContainer_ScriptStruct).WeakPtr,(FObjectPtr)local_res10)
  ;
  pTVar1 = &this->Properties;
  this->TopLevelContainer_ScriptStructData = param_2;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 1;
  if ((pTVar1 <= &local_res20) &&
     (&local_res20 < &(this->Properties).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyPath *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Properties).ArrayNum;
  if (iVar4 == (this->Properties).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Properties).ArrayMax);
  }
  (this->Properties).ArrayNum = iVar4 + 1;
  FVar6 = (this->Properties).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FProperty_const_*>)0x0) {
    FVar6 = (ForElementType<FProperty_const_*>)pTVar1;
  }
  *(FProperty **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_res20;
  return this;
}

// FPropertyPath @ 14d836330

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::FPropertyPath
          (FPropertyPath *this,UScriptStruct *param_1,void *param_2,
          TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  ForElementType<FProperty_const_*> FVar1;
  UScriptStruct *local_38 [2];
  
  (this->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_38[0] = (UScriptStruct *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)local_38);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  local_38[0] = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TopLevelContainer_ScriptStruct).WeakPtr,(FObjectPtr)local_38);
  this->TopLevelContainer_ScriptStructData = param_2;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  if ((param_3->AllocatorInstance).SecondaryData == (ForElementType<FProperty_const_*>)0x0) {
    *(undefined8 *)(this->Properties).AllocatorInstance.InlineData =
         *(undefined8 *)(param_3->AllocatorInstance).InlineData;
  }
  (this->Properties).AllocatorInstance.SecondaryData = (param_3->AllocatorInstance).SecondaryData;
  (param_3->AllocatorInstance).SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->Properties).ArrayNum = param_3->ArrayNum;
  (this->Properties).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 1;
  FVar1 = (param_3->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return this;
}

// FPropertyPath @ 14d836410

FPropertyPath * __thiscall UE::PropertyViewer::FPropertyPath::FPropertyPath(FPropertyPath *this)

{
  undefined8 local_res8;
  
  (this->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TopLevelContainer_ScriptStruct).WeakPtr,(FObjectPtr)&local_res8)
  ;
  this->TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 1;
  return this;
}

// operator= @ 14d83cbf0

FPropertyPath * __thiscall
UE::PropertyViewer::FPropertyPath::operator=(FPropertyPath *this,FPropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<FProperty_const_*> _Dst;
  ForElementType<FProperty_const_*> _Src;
  
  (this->TopLevelContainer_Object).WeakPtr = (param_1->TopLevelContainer_Object).WeakPtr;
  (this->TopLevelContainer_ScriptStruct).WeakPtr = (param_1->TopLevelContainer_ScriptStruct).WeakPtr
  ;
  this->TopLevelContainer_ScriptStructData = param_1->TopLevelContainer_ScriptStructData;
  if (this != param_1) {
    iVar2 = (this->Properties).ArrayMax;
    piVar1 = &(this->Properties).ArrayMax;
    _Src = (param_1->Properties).AllocatorInstance.SecondaryData;
    iVar3 = (param_1->Properties).ArrayNum;
    if (_Src == (ForElementType<FProperty_const_*>)0x0) {
      _Src = (ForElementType<FProperty_const_*>)&param_1->Properties;
    }
    (this->Properties).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
                (8,8,iVar3,iVar2,&(this->Properties).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->Properties).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<FProperty_const_*>)0x0) {
          _Dst = (ForElementType<FProperty_const_*>)&this->Properties;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 3);
      }
    }
  }
  return this;
}

// GetContainerPtr @ 14d866950

void * __thiscall UE::PropertyViewer::FPropertyPath::GetContainerPtr(FPropertyPath *this)

{
  ForElementType<FProperty_const_*> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  void *pvVar7;
  ForElementType<FProperty_const_*> FVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar10 = (UObject *)0x0;
  pUVar11 = (UObject *)0x0;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar6 == (UObject *)0x0) {
    pUVar6 = FWeakObjectPtr::Get(&(this->TopLevelContainer_ScriptStruct).WeakPtr);
    if ((pUVar6 != (UObject *)0x0) && ((*(uint *)&pUVar6[4].field_0x10 & 0x800000) == 0)) {
      pUVar11 = this->TopLevelContainer_ScriptStructData;
    }
  }
  else {
    pUVar11 = pUVar10;
    if (-1 < *(int *)(*(longlong *)&pUVar6->field_0x10 + 0xd4)) {
      pUVar11 = pUVar6;
    }
  }
  pUVar6 = pUVar10;
  if (0 < (this->Properties).ArrayNum + -1) {
    do {
      if (pUVar11 == (UObject *)0x0) {
        return (void *)0x0;
      }
      uVar9 = (uint)pUVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->Properties).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar3)();
        return pvVar7;
      }
      FVar1 = (this->Properties).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FProperty_const_*>)&this->Properties;
      if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
        FVar8 = FVar1;
      }
      plVar2 = *(longlong **)(&pUVar6->field_0x0 + (longlong)FVar8);
      if (plVar2 == (longlong *)0x0) {
        return (void *)0x0;
      }
      if ((*(uint *)(plVar2[1] + 0x18) >> 0x1a & 1) == 0) {
        if (((int)plVar2[6] < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pvVar7 = (void *)(*pcVar3)();
          return pvVar7;
        }
        pUVar11 = (UObject *)(&pUVar11->field_0x0 + *(int *)((longlong)plVar2 + 0x44));
      }
      else {
        pUVar11 = (UObject *)(**(code **)(*plVar2 + 0x208))(plVar2,pUVar11,0);
      }
      pUVar10 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar6 = (UObject *)&pUVar6->field_0x8;
    } while ((int)(uVar9 + 1) < (this->Properties).ArrayNum + -1);
  }
  return pUVar11;
}

// GetContainerPtr @ 14d866ad0

void * __thiscall UE::PropertyViewer::FPropertyPath::GetContainerPtr(FPropertyPath *this)

{
  ForElementType<FProperty_const_*> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  void *pvVar7;
  ForElementType<FProperty_const_*> FVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar10 = (UObject *)0x0;
  pUVar11 = (UObject *)0x0;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar6 == (UObject *)0x0) {
    pUVar6 = FWeakObjectPtr::Get(&(this->TopLevelContainer_ScriptStruct).WeakPtr);
    if ((pUVar6 != (UObject *)0x0) && ((*(uint *)&pUVar6[4].field_0x10 & 0x800000) == 0)) {
      pUVar11 = this->TopLevelContainer_ScriptStructData;
    }
  }
  else {
    pUVar11 = pUVar10;
    if (-1 < *(int *)(*(longlong *)&pUVar6->field_0x10 + 0xd4)) {
      pUVar11 = pUVar6;
    }
  }
  pUVar6 = pUVar10;
  if (0 < (this->Properties).ArrayNum + -1) {
    do {
      if (pUVar11 == (UObject *)0x0) {
        return (void *)0x0;
      }
      uVar9 = (uint)pUVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->Properties).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar3)();
        return pvVar7;
      }
      FVar1 = (this->Properties).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FProperty_const_*>)&this->Properties;
      if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
        FVar8 = FVar1;
      }
      plVar2 = *(longlong **)(&pUVar6->field_0x0 + (longlong)FVar8);
      if (plVar2 == (longlong *)0x0) {
        return (void *)0x0;
      }
      if ((*(uint *)(plVar2[1] + 0x18) >> 0x1a & 1) == 0) {
        if (((int)plVar2[6] < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pvVar7 = (void *)(*pcVar3)();
          return pvVar7;
        }
        pUVar11 = (UObject *)(&pUVar11->field_0x0 + *(int *)((longlong)plVar2 + 0x44));
      }
      else {
        pUVar11 = (UObject *)(**(code **)(*plVar2 + 0x208))(plVar2,pUVar11,0);
      }
      pUVar10 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar6 = (UObject *)&pUVar6->field_0x8;
    } while ((int)(uVar9 + 1) < (this->Properties).ArrayNum + -1);
  }
  return pUVar11;
}

// GetLastProperty @ 14d868f30

FProperty * __thiscall UE::PropertyViewer::FPropertyPath::GetLastProperty(FPropertyPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  uint uVar5;
  ForElementType<FProperty_const_*> FVar6;
  
  iVar1 = (this->Properties).ArrayNum;
  if (iVar1 == 0) {
    return (FProperty *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FProperty *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar6 = (this->Properties).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FProperty_const_*>)0x0) {
    FVar6 = (ForElementType<FProperty_const_*>)&this->Properties;
  }
  return ((void **)((longlong)FVar6 + -8))[(this->Properties).ArrayNum];
}

