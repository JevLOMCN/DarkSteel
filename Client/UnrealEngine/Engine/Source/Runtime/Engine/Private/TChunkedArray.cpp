// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_> @ 147b37bf0

TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_> *
__thiscall
TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x198) / 0x199;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x199;
        lVar9 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar9 + -4) = 0;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined ***)(lVar9 + -0xc) =
               &___7__TTypedElementInternalData_UFActorElementData____6B_;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          *(undefined8 *)(lVar9 + 0x14) = 0;
          lVar9 = lVar9 + 0x28;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_> @ 147b37d90

TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_> *
__thiscall
TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 local_res8;
  void *local_38 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x198) / 0x199;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    uVar12 = (ulonglong)uVar4;
    do {
      pvVar7 = ::operator_new(0x3fe8);
      pvVar10 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar11 = 0x199;
        lVar9 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar9 + -4) = 0;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined ***)(lVar9 + -0xc) =
               &___7__TTypedElementInternalData_UFComponentElementData____6B_;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          ((FWeakObjectPtr *)(lVar9 + 0x14))->ObjectIndex = 0;
          *(undefined4 *)(lVar9 + 0x18) = 0;
          local_res8 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar9 + 0x14),(FObjectPtr)&local_res8);
          lVar9 = lVar9 + 0x28;
          lVar11 = lVar11 + -1;
          pvVar10 = pvVar7;
        } while (lVar11 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      local_38[0] = pvVar10;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return this;
}

// TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_> @ 147b37f70

TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_> *
__thiscall
TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x198) / 0x199;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x199;
        lVar9 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar9 + -4) = 0;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined ***)(lVar9 + -0xc) =
               &___7__TTypedElementInternalData_UFSMInstanceElementData____6B_;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          *(undefined8 *)(lVar9 + 0x14) = 0;
          lVar9 = lVar9 + 0x28;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator[] @ 147b3e410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementInternalData<FActorElementData> * __thiscall
TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::
operator[](TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TTypedElementInternalData<FActorElementData> *pTVar5;
  
  uVar2 = param_1 / 0x199;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTypedElementInternalData<FActorElementData> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTypedElementInternalData<FActorElementData> *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 0x199) * 0x28);
}

// operator[] @ 147b3e4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementInternalData<FComponentElementData> * __thiscall
TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::
operator[](TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TTypedElementInternalData<FComponentElementData> *pTVar5;
  
  uVar2 = param_1 / 0x199;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTypedElementInternalData<FComponentElementData> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTypedElementInternalData<FComponentElementData> *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 0x199) * 0x28);
}

// operator[] @ 147b3e570

TTypedElementInternalData<FObjectElementData> * __thiscall
TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>::
operator[](TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTypedElementInternalData<FObjectElementData> *pTVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x1ff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 9;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTypedElementInternalData<FObjectElementData> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTypedElementInternalData<FObjectElementData> *)
         ((ulonglong)((uVar3 & 0x1ff) - uVar6) * 0x20 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// operator[] @ 147b3e610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTypedElementInternalData<FSMInstanceElementData> * __thiscall
TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::
operator[](TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TTypedElementInternalData<FSMInstanceElementData> *pTVar5;
  
  uVar2 = param_1 / 0x199;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTypedElementInternalData<FSMInstanceElementData> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTypedElementInternalData<FSMInstanceElementData> *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 0x199) * 0x28);
}

// Add @ 147b416f0

int __thiscall
TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_28 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x198) / 0x199;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_28[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x199;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined ***)(lVar8 + -0xc) =
               &___7__TTypedElementInternalData_UFActorElementData____6B_;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 0x14) = 0;
          lVar8 = lVar8 + 0x28;
          lVar9 = lVar9 + -1;
          local_28[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_28[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// Add @ 147b418a0

int __thiscall
TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::
Add(TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
    *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 local_res8;
  void *local_38 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x198) / 0x199;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar12 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe8);
      pvVar9 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x199;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined ***)(lVar8 + -0xc) =
               &___7__TTypedElementInternalData_UFComponentElementData____6B_;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          ((FWeakObjectPtr *)(lVar8 + 0x14))->ObjectIndex = 0;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          local_res8 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar8 + 0x14),(FObjectPtr)&local_res8);
          lVar8 = lVar8 + 0x28;
          lVar10 = lVar10 + -1;
          pvVar9 = pvVar7;
        } while (lVar10 != 0);
      }
      piVar11 = &(this->Chunks).Array.ArrayMax;
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      local_38[0] = pvVar9;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar11 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar11) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar11);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_38[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return iVar1;
}

// Add @ 147b41a80

int __thiscall
TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::
Add(TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
    *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_28 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x198) / 0x199;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_28[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x199;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined ***)(lVar8 + -0xc) =
               &___7__TTypedElementInternalData_UFSMInstanceElementData____6B_;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 0x14) = 0;
          lVar8 = lVar8 + 0x28;
          lVar9 = lVar9 + -1;
          local_28[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_28[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> @ 1484b98c0

TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *
__thiscall
TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          (TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this,int param_1)

{
  int *piVar1;
  void **ppvVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  void *local_28 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (void **)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x48) / 0x49;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_>
                (8,8,uVar4,(ForElementType<void_*> *)this,0,piVar1), 0 < (int)uVar4)) {
    uVar13 = (ulonglong)uVar4;
    do {
      pvVar7 = ::operator_new(0x3fe0);
      pvVar11 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar12 = 0x49;
        puVar10 = (undefined8 *)((longlong)pvVar7 + 0xb0);
        do {
          puVar10[-3] = 0;
          *(undefined4 *)(puVar10 + -2) = 0;
          *(undefined4 *)((longlong)puVar10 + -0xc) = 1;
          puVar10[-1] = 0;
          *puVar10 = 0;
          *(uint *)((longlong)puVar10 + 0x24) =
               *(uint *)((longlong)puVar10 + 0x24) & 0xf081803c | 0x81803c;
          puVar10[1] = 0;
          puVar10[2] = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = 0xffffffff;
          *(undefined2 *)(puVar10 + 4) = 0;
          *(undefined1 *)((longlong)puVar10 + 0x22) = 0xff;
          *(undefined2 *)(puVar10 + 5) = 0xffff;
          *(undefined4 *)(puVar10 + -2) = 1;
          puVar9 = (undefined8 *)puVar10[-3];
          if ((undefined8 *)puVar10[-3] == (undefined8 *)0x0) {
            puVar9 = puVar10 + -0x16;
          }
          DefaultConstructItems<FMeshBatchElement,int>(puVar9,1);
          puVar10 = puVar10 + 0x1c;
          lVar12 = lVar12 + -1;
          pvVar11 = pvVar7;
        } while (lVar12 != 0);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      local_28[0] = pvVar11;
      if (((ppvVar2 <= local_28) && (local_28 < ppvVar2 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_>
                          (0x808,(ForElementType<void_*> *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      (this->Chunks).Array.AllocatorInstance.Data[iVar6] = local_28[0];
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return this;
}

// operator[] @ 1487816b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FElement * __thiscall
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FElement *pFVar5;
  
  uVar2 = param_1 / 0x199;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FElement *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FElement *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (longlong)(param_1 % 0x199) * 0x28);
}

// TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> @ 1488043e0

TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x198) / 0x199;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x199;
        puVar9 = (undefined4 *)((longlong)pvVar7 + 0x10);
        do {
          *(undefined8 *)(puVar9 + -4) = 0;
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0xffffffff;
          puVar9[1] = 0;
          *(undefined8 *)(puVar9 + 3) = 0xffffffffffffffff;
          puVar9[5] = 0xffffffff;
          puVar9 = puVar9 + 10;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator= @ 14880d680

TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator=
          (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this
          ,TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *_Dst;
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  void *local_58;
  FScriptContainerElement *local_50;
  int *piStack_48;
  undefined8 local_40;
  FScriptContainerElement *local_38;
  int *piStack_30;
  int local_28;
  undefined4 uStack_24;
  
  if (param_1 != this) {
    piVar1 = &(param_1->Chunks).Array.ArrayNum;
    TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&this->Chunks,(param_1->Chunks).Array.ArrayNum);
    pFVar8 = (param_1->Chunks).Array.AllocatorInstance.Data;
    local_28 = *piVar1;
    pFVar2 = pFVar8 + (longlong)local_28 * 8;
    local_40 = CONCAT44(uStack_24,local_28);
    piStack_48 = piVar1;
    local_38 = pFVar8;
    piStack_30 = piVar1;
    while( true ) {
      local_50 = pFVar8;
      if (*piStack_48 != (int)local_40) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar2) break;
      _Src = *(void **)pFVar8;
      _Dst = ::operator_new(0x3fe8);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        memcpy(_Dst,_Src,0x3fe8);
      }
      pFVar3 = (this->Chunks).Array.AllocatorInstance.Data;
      local_58 = _Dst;
      if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar3 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      piVar1 = &(this->Chunks).Array.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      pFVar8 = pFVar8 + 8;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58;
    }
  }
  this->NumElements = param_1->NumElements;
  return this;
}

// operator[] @ 14880e340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FElement * __thiscall
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FElement *pFVar5;
  
  uVar2 = param_1 / 0x199;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FElement *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FElement *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 0x199) * 0x28);
}

// Add @ 148816940

int __thiscall
TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x198) / 0x199;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe8);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x199;
        puVar8 = (undefined4 *)((longlong)pvVar7 + 0x10);
        do {
          *(undefined8 *)(puVar8 + -4) = 0;
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0xffffffff;
          puVar8[1] = 0;
          *(undefined8 *)(puVar8 + 3) = 0xffffffffffffffff;
          puVar8[5] = 0xffffffff;
          puVar8 = puVar8 + 10;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

