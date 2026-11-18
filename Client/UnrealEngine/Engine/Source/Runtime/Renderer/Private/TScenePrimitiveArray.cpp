// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// Get @ 14487ad30

FPrimitiveBounds * __thiscall
TScenePrimitiveArray<FPrimitiveBounds>::Get
          (TScenePrimitiveArray<FPrimitiveBounds> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrimitiveBounds *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x3ff) - uVar6;
  uVar4 = (int)uVar4 >> 10;
  uVar7 = 0;
  if ((int)uVar4 < (this->Chunks).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrimitiveBounds *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = *(longlong **)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrimitiveBounds *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPrimitiveBounds *)(*plVar1 + (longlong)(int)uVar6 * 0x48);
}

// Get @ 145061950

FPrimitiveBounds * __thiscall
TScenePrimitiveArray<FPrimitiveBounds>::Get
          (TScenePrimitiveArray<FPrimitiveBounds> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrimitiveBounds *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x3ff) - uVar6;
  uVar4 = (int)uVar4 >> 10;
  uVar7 = 0;
  if ((int)uVar4 < (this->Chunks).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrimitiveBounds *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = *(longlong **)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrimitiveBounds *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPrimitiveBounds *)(*plVar1 + (longlong)(int)uVar6 * 0x48);
}

// Get @ 1452c3cd0

TBoxSphereBounds<double,double> * __thiscall
TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
          (TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x3ff) - uVar6;
  uVar4 = (int)uVar4 >> 10;
  uVar7 = 0;
  if ((int)uVar4 < (this->Chunks).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  plVar1 = *(longlong **)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TBoxSphereBounds<double,double> *)((longlong)(int)uVar6 * 0x38 + *plVar1);
}

// Get @ 1452c3dc0

TMatrix<double> * __thiscall
TScenePrimitiveArray<UE::Math::TMatrix<double>_>::Get
          (TScenePrimitiveArray<UE::Math::TMatrix<double>_> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMatrix<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x3ff) - uVar6;
  uVar4 = (int)uVar4 >> 10;
  uVar7 = 0;
  if ((int)uVar4 < (this->Chunks).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  plVar1 = *(longlong **)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TMatrix<double> *)((longlong)(int)uVar6 * 0x80 + *plVar1);
}

// AddUninitialized @ 14541c110

TBoxSphereBounds<double,double> * __thiscall
TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::AddUninitialized
          (TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_> *this)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  TBoxSphereBounds<double,double> *pTVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  
  pFVar10 = (ForAnyElementType *)0x0;
  if ((this->NumElements & 0x3ff) == 0) {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (ForAnyElementType *)0x0) {
      pFVar7->Data = (FScriptContainerElement *)0x0;
      pFVar7[1].Data = (FScriptContainerElement *)0x0;
      pFVar10 = pFVar7;
    }
    if (*(int *)((longlong)&pFVar10[1].Data + 4) < 0x400) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0x400,pFVar10,*(int *)&pFVar10[1].Data,
                 (int *)((longlong)&pFVar10[1].Data + 4));
    }
    iVar5 = (this->Chunks).ArrayNum;
    piVar1 = &(this->Chunks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->Chunks).ArrayNum = iVar5 + 1;
    *(ForAnyElementType **)((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar10;
  }
  this->NumElements = this->NumElements + 1;
  iVar5 = (this->Chunks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar5) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
    return pTVar8;
  }
  pFVar10 = *(ForAnyElementType **)
             ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
  puVar2 = (uint *)((longlong)&pFVar10[1].Data + 4);
  uVar6 = *(uint *)&pFVar10[1].Data;
  if (uVar6 == *puVar2) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar10,(int *)puVar2);
  }
  *(uint *)&pFVar10[1].Data = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
    return pTVar8;
  }
  return (TBoxSphereBounds<double,double> *)
         (pFVar10->Data + (longlong)(*(int *)&pFVar10[1].Data + -1) * 0x38);
}

// AddUninitialized @ 14541c290

TMatrix<double> * __thiscall
TScenePrimitiveArray<UE::Math::TMatrix<double>_>::AddUninitialized
          (TScenePrimitiveArray<UE::Math::TMatrix<double>_> *this)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  TMatrix<double> *pTVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  
  pFVar10 = (ForAnyElementType *)0x0;
  if ((this->NumElements & 0x3ff) == 0) {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (ForAnyElementType *)0x0) {
      pFVar7->Data = (FScriptContainerElement *)0x0;
      pFVar7[1].Data = (FScriptContainerElement *)0x0;
      pFVar10 = pFVar7;
    }
    if (*(int *)((longlong)&pFVar10[1].Data + 4) < 0x400) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0x400,pFVar10,*(int *)&pFVar10[1].Data,
                 (int *)((longlong)&pFVar10[1].Data + 4));
    }
    iVar5 = (this->Chunks).ArrayNum;
    piVar1 = &(this->Chunks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->Chunks).ArrayNum = iVar5 + 1;
    *(ForAnyElementType **)((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar10;
  }
  this->NumElements = this->NumElements + 1;
  iVar5 = (this->Chunks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar5) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TMatrix<double> *)(*pcVar3)();
    return pTVar8;
  }
  pFVar10 = *(ForAnyElementType **)
             ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
  puVar2 = (uint *)((longlong)&pFVar10[1].Data + 4);
  uVar6 = *(uint *)&pFVar10[1].Data;
  if (uVar6 == *puVar2) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,pFVar10,(int *)puVar2);
  }
  *(uint *)&pFVar10[1].Data = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TMatrix<double> *)(*pcVar3)();
    return pTVar8;
  }
  return (TMatrix<double> *)(pFVar10->Data + (longlong)(*(int *)&pFVar10[1].Data + -1) * 0x80);
}

// AddUninitialized @ 14541c410

FPrimitiveBounds * __thiscall
TScenePrimitiveArray<FPrimitiveBounds>::AddUninitialized
          (TScenePrimitiveArray<FPrimitiveBounds> *this)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  FPrimitiveBounds *pFVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  
  pFVar10 = (ForAnyElementType *)0x0;
  if ((this->NumElements & 0x3ff) == 0) {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (ForAnyElementType *)0x0) {
      pFVar7->Data = (FScriptContainerElement *)0x0;
      pFVar7[1].Data = (FScriptContainerElement *)0x0;
      pFVar10 = pFVar7;
    }
    if (*(int *)((longlong)&pFVar10[1].Data + 4) < 0x400) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0x400,pFVar10,*(int *)&pFVar10[1].Data,
                 (int *)((longlong)&pFVar10[1].Data + 4));
    }
    iVar5 = (this->Chunks).ArrayNum;
    piVar1 = &(this->Chunks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->Chunks).ArrayNum = iVar5 + 1;
    *(ForAnyElementType **)((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar10;
  }
  this->NumElements = this->NumElements + 1;
  iVar5 = (this->Chunks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar5) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPrimitiveBounds *)(*pcVar3)();
    return pFVar8;
  }
  pFVar10 = *(ForAnyElementType **)
             ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
  puVar2 = (uint *)((longlong)&pFVar10[1].Data + 4);
  uVar6 = *(uint *)&pFVar10[1].Data;
  if (uVar6 == *puVar2) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,pFVar10,(int *)puVar2);
  }
  *(uint *)&pFVar10[1].Data = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPrimitiveBounds *)(*pcVar3)();
    return pFVar8;
  }
  return (FPrimitiveBounds *)(pFVar10->Data + (longlong)(*(int *)&pFVar10[1].Data + -1) * 0x48);
}

// Remove @ 145448b00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Remove
          (TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_> *this,uint param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((this->NumElements < param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count <= NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivateBase.h"
                         ,0x52,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = this->NumElements;
  uVar12 = uVar8 - param_1;
  while( true ) {
    if (uVar8 == uVar12) {
      return;
    }
    this->NumElements = uVar8 - 1;
    iVar9 = (this->Chunks).ArrayNum;
    uVar11 = iVar9 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar9) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    plVar2 = *(longlong **)
              ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
    if (((int)plVar2[1] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = (int)plVar2[1] - 1;
    iVar9 = ~uVar8 + (int)plVar2[1];
    _Dst = (void *)((longlong)(int)uVar8 * 0x38 + *plVar2);
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)iVar9 * 0x38);
    }
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      if (((this->Chunks).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      lVar10 = (longlong)(this->Chunks).ArrayNum;
      puVar4 = *(undefined8 **)(pFVar3 + lVar10 * 8 + -8);
      *(undefined8 *)(pFVar3 + lVar10 * 8 + -8) = 0;
      iVar9 = (this->Chunks).ArrayNum;
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      puVar5 = *(undefined8 **)(pFVar3 + (longlong)iVar9 * 8 + -8);
      pFVar3 = pFVar3 + (longlong)iVar9 * 8;
      if (puVar5 != (undefined8 *)0x0) {
        if ((void *)*puVar5 != (void *)0x0) {
          FMemory::Free((void *)*puVar5);
        }
        ::operator_delete(puVar5,0x10);
      }
      iVar9 = (this->Chunks).ArrayNum - iVar9;
      if (iVar9 != 0) {
        memmove(pFVar3 + -8,pFVar3,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->Chunks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (puVar4 != (undefined8 *)0x0) {
        if ((void *)*puVar4 != (void *)0x0) {
          FMemory::Free((void *)*puVar4);
        }
        ::operator_delete(puVar4,0x10);
      }
    }
    uVar8 = this->NumElements;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Remove @ 145448d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TScenePrimitiveArray<UE::Math::TMatrix<double>_>::Remove
          (TScenePrimitiveArray<UE::Math::TMatrix<double>_> *this,uint param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((this->NumElements < param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count <= NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivateBase.h"
                         ,0x52,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = this->NumElements;
  uVar12 = uVar8 - param_1;
  while( true ) {
    if (uVar8 == uVar12) {
      return;
    }
    this->NumElements = uVar8 - 1;
    iVar9 = (this->Chunks).ArrayNum;
    uVar11 = iVar9 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar9) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    plVar2 = *(longlong **)
              ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
    if (((int)plVar2[1] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = (int)plVar2[1] - 1;
    _Dst = (void *)((longlong)(int)uVar8 * 0x80 + *plVar2);
    iVar9 = ~uVar8 + (int)plVar2[1];
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x80),(longlong)iVar9 << 7);
    }
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      if (((this->Chunks).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      lVar10 = (longlong)(this->Chunks).ArrayNum;
      puVar4 = *(undefined8 **)(pFVar3 + lVar10 * 8 + -8);
      *(undefined8 *)(pFVar3 + lVar10 * 8 + -8) = 0;
      iVar9 = (this->Chunks).ArrayNum;
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      puVar5 = *(undefined8 **)(pFVar3 + (longlong)iVar9 * 8 + -8);
      pFVar3 = pFVar3 + (longlong)iVar9 * 8;
      if (puVar5 != (undefined8 *)0x0) {
        if ((void *)*puVar5 != (void *)0x0) {
          FMemory::Free((void *)*puVar5);
        }
        ::operator_delete(puVar5,0x10);
      }
      iVar9 = (this->Chunks).ArrayNum - iVar9;
      if (iVar9 != 0) {
        memmove(pFVar3 + -8,pFVar3,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->Chunks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (puVar4 != (undefined8 *)0x0) {
        if ((void *)*puVar4 != (void *)0x0) {
          FMemory::Free((void *)*puVar4);
        }
        ::operator_delete(puVar4,0x10);
      }
    }
    uVar8 = this->NumElements;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Remove @ 145448f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TScenePrimitiveArray<FPrimitiveBounds>::Remove
          (TScenePrimitiveArray<FPrimitiveBounds> *this,uint param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((this->NumElements < param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count <= NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivateBase.h"
                         ,0x52,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = this->NumElements;
  uVar12 = uVar8 - param_1;
  while( true ) {
    if (uVar8 == uVar12) {
      return;
    }
    this->NumElements = uVar8 - 1;
    iVar9 = (this->Chunks).ArrayNum;
    uVar11 = iVar9 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar9) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    plVar2 = *(longlong **)
              ((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 8 + -8);
    if (((int)plVar2[1] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = (int)plVar2[1] - 1;
    _Dst = (void *)(*plVar2 + (longlong)(int)uVar8 * 0x48);
    iVar9 = ~uVar8 + (int)plVar2[1];
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)iVar9 * 0x48);
    }
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      if (((this->Chunks).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      lVar10 = (longlong)(this->Chunks).ArrayNum;
      puVar4 = *(undefined8 **)(pFVar3 + lVar10 * 8 + -8);
      *(undefined8 *)(pFVar3 + lVar10 * 8 + -8) = 0;
      iVar9 = (this->Chunks).ArrayNum;
      pFVar3 = (this->Chunks).AllocatorInstance.Data;
      puVar5 = *(undefined8 **)(pFVar3 + (longlong)iVar9 * 8 + -8);
      pFVar3 = pFVar3 + (longlong)iVar9 * 8;
      if (puVar5 != (undefined8 *)0x0) {
        if ((void *)*puVar5 != (void *)0x0) {
          FMemory::Free((void *)*puVar5);
        }
        ::operator_delete(puVar5,0x10);
      }
      iVar9 = (this->Chunks).ArrayNum - iVar9;
      if (iVar9 != 0) {
        memmove(pFVar3 + -8,pFVar3,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->Chunks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (puVar4 != (undefined8 *)0x0) {
        if ((void *)*puVar4 != (void *)0x0) {
          FMemory::Free((void *)*puVar4);
        }
        ::operator_delete(puVar4,0x10);
      }
    }
    uVar8 = this->NumElements;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Get @ 1455435b0

TBoxSphereBounds<double,double> * __thiscall
TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
          (TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x3ff) - uVar6;
  uVar4 = (int)uVar4 >> 10;
  uVar7 = 0;
  if ((int)uVar4 < (this->Chunks).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  plVar1 = *(longlong **)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TBoxSphereBounds<double,double> *)((longlong)(int)uVar6 * 0x38 + *plVar1);
}

