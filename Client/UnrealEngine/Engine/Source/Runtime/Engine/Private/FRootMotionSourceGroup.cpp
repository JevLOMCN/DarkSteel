// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// FRootMotionSourceGroup @ 1476e7f70

FRootMotionSourceGroup * __thiscall
FRootMotionSourceGroup::FRootMotionSourceGroup
          (FRootMotionSourceGroup *this,FRootMotionSourceGroup *param_1)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FRootMotionSource,1> *pTVar4;
  undefined8 uVar5;
  byte bVar6;
  
  pTVar1 = &this->RootMotionSources;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  iVar3 = (param_1->RootMotionSources).ArrayNum;
  piVar2 = &(this->RootMotionSources).ArrayMax;
  pTVar4 = (TSharedPtr<FRootMotionSource,1> *)(param_1->RootMotionSources).AllocatorInstance.Data;
  (this->RootMotionSources).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FRootMotionSource,1>,TSharedPtr<FRootMotionSource,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  pTVar1 = &this->PendingAddRootMotionSources;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PendingAddRootMotionSources).ArrayMax;
  iVar3 = (param_1->PendingAddRootMotionSources).ArrayNum;
  pTVar4 = (TSharedPtr<FRootMotionSource,1> *)
           (param_1->PendingAddRootMotionSources).AllocatorInstance.Data;
  (this->PendingAddRootMotionSources).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FRootMotionSource,1>,TSharedPtr<FRootMotionSource,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  bVar6 = (this->bHasAdditiveSources ^ param_1->bHasAdditiveSources) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x28) & 2 ^ bVar6;
  this->field_0x28 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x28) & 4 ^ bVar6;
  this->field_0x28 = bVar6;
  this->field_0x28 = (bVar6 ^ param_1->field_0x28) & 8 ^ bVar6;
  (this->LastAccumulatedSettings).Flags = (param_1->LastAccumulatedSettings).Flags;
  uVar5 = *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x8;
  *(undefined8 *)&this->LastPreAdditiveVelocity = *(undefined8 *)&param_1->LastPreAdditiveVelocity;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x8 = uVar5;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x10 =
       *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x10;
  return this;
}

// ~FRootMotionSourceGroup @ 1476e9050

void __thiscall FRootMotionSourceGroup::~FRootMotionSourceGroup(FRootMotionSourceGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->PendingAddRootMotionSources).AllocatorInstance.Data,
             (this->PendingAddRootMotionSources).ArrayNum);
  pFVar1 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(this->RootMotionSources).AllocatorInstance.Data,
             (this->RootMotionSources).ArrayNum);
  pFVar1 = (this->RootMotionSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 147b9e330

UScriptStruct * __cdecl FRootMotionSourceGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSourceGroup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSourceGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceGroup,(UObject *)pUVar1,
                         L"RootMotionSourceGroup");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSourceGroup.OuterSingleton;
}

// FRootMotionSourceGroup @ 147bb97a0

FRootMotionSourceGroup * __thiscall
FRootMotionSourceGroup::FRootMotionSourceGroup(FRootMotionSourceGroup *this)

{
  undefined1 *puVar1;
  
  this->bHasAdditiveSources = '\0';
  this->bIsAdditiveVelocityApplied = '\0';
  this->bHasOverrideSourcesWithIgnoreZAccumulate = '\0';
  this->bHasOverrideSources = '\0';
  this->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  (this->RootMotionSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootMotionSources).ArrayNum = 0;
  (this->RootMotionSources).ArrayMax = 0;
  (this->PendingAddRootMotionSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAddRootMotionSources).ArrayNum = 0;
  (this->PendingAddRootMotionSources).ArrayMax = 0;
  (this->LastAccumulatedSettings).Flags = '\0';
  *(undefined8 *)&this->LastPreAdditiveVelocity = 0;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x10 = 0;
  return this;
}

// operator= @ 147bbfe20

/* WARNING: Enum "Type": Some values do not have unique names */

FRootMotionSourceGroup * __thiscall
FRootMotionSourceGroup::operator=(FRootMotionSourceGroup *this,FRootMotionSourceGroup *param_1)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FRootMotionSourceGroup *pFVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  
  if (this != param_1) {
    uVar5 = (param_1->RootMotionSources).ArrayNum;
    pTVar1 = &this->RootMotionSources;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    DestructItems<TSharedPtr<FRootMotionSource,1>,int>
              ((TSharedPtr<FRootMotionSource,1> *)(pTVar1->AllocatorInstance).Data,
               (this->RootMotionSources).ArrayNum);
    puVar14 = (undefined8 *)0x0;
    piVar2 = &(this->RootMotionSources).ArrayMax;
    (this->RootMotionSources).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar5,&pTVar1->AllocatorInstance,0,piVar2);
    }
    uVar5 = 0;
    puVar10 = puVar14;
    puVar15 = puVar14;
    if (0 < (param_1->RootMotionSources).ArrayNum) {
      do {
        uVar13 = (uint)puVar10;
        uVar6 = 0;
        if ((int)uVar13 < (param_1->RootMotionSources).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
          return pFVar8;
        }
        if (*(longlong *)
             ((longlong)puVar15 + (longlong)(param_1->RootMotionSources).AllocatorInstance.Data) ==
            0) {
          if (2 < (byte)LogRootMotion._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
          }
        }
        else {
          uVar6 = uVar5;
          if ((int)uVar13 < (param_1->RootMotionSources).ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          pFVar12 = (param_1->RootMotionSources).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar12 + (longlong)puVar15) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          uVar9 = (**(code **)(**(longlong **)(pFVar12 + (longlong)puVar15) + 0x10))();
          local_48 = uVar9;
          puVar10 = ::operator_new(0x18);
          local_40 = puVar14;
          if (puVar10 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar10 + 1) = 1;
            *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
            *puVar10 = &
                       ___7__TReferenceControllerWithDeleter_UFRootMotionSource__U__DefaultDeleter_UFRootMotionSource___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            puVar10[2] = uVar9;
            local_40 = puVar10;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar12 + (longlong)*piVar2 * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          iVar7 = (this->RootMotionSources).ArrayNum;
          if (iVar7 == *piVar2) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->RootMotionSources).ArrayNum = iVar7 + 1;
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar12 = local_48;
          *(undefined8 **)(pFVar12 + 8) = local_40;
          local_40 = (undefined8 *)0x0;
          local_48 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        puVar10 = (undefined8 *)(ulonglong)(uVar13 + 1);
        puVar15 = puVar15 + 2;
      } while ((int)(uVar13 + 1) < (param_1->RootMotionSources).ArrayNum);
    }
    uVar6 = (param_1->PendingAddRootMotionSources).ArrayNum;
    pTVar1 = &this->PendingAddRootMotionSources;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    DestructItems<TSharedPtr<FRootMotionSource,1>,int>
              ((TSharedPtr<FRootMotionSource,1> *)(pTVar1->AllocatorInstance).Data,
               (this->PendingAddRootMotionSources).ArrayNum);
    piVar2 = &(this->PendingAddRootMotionSources).ArrayMax;
    (this->PendingAddRootMotionSources).ArrayNum = 0;
    if (*piVar2 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar6,&pTVar1->AllocatorInstance,0,piVar2);
    }
    puVar10 = puVar14;
    puVar15 = puVar14;
    if (0 < (param_1->PendingAddRootMotionSources).ArrayNum) {
      do {
        uVar13 = (uint)puVar10;
        uVar6 = uVar5;
        if ((int)uVar13 < (param_1->PendingAddRootMotionSources).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
          return pFVar8;
        }
        if (*(longlong *)
             ((longlong)puVar15 +
             (longlong)(param_1->PendingAddRootMotionSources).AllocatorInstance.Data) == 0) {
          if (2 < (byte)LogRootMotion._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
          }
        }
        else {
          uVar6 = uVar5;
          if ((int)uVar13 < (param_1->PendingAddRootMotionSources).ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          pFVar12 = (param_1->PendingAddRootMotionSources).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar12 + (longlong)puVar15) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          uVar9 = (**(code **)(**(longlong **)(pFVar12 + (longlong)puVar15) + 0x10))();
          local_38 = uVar9;
          puVar10 = ::operator_new(0x18);
          local_30 = puVar14;
          if (puVar10 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar10 + 1) = 1;
            *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
            *puVar10 = &
                       ___7__TReferenceControllerWithDeleter_UFRootMotionSource__U__DefaultDeleter_UFRootMotionSource___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            puVar10[2] = uVar9;
            local_30 = puVar10;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar12 + (longlong)*piVar2 * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRootMotionSourceGroup *)(*pcVar3)();
            return pFVar8;
          }
          iVar7 = (this->PendingAddRootMotionSources).ArrayNum;
          if (iVar7 == *piVar2) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->PendingAddRootMotionSources).ArrayNum = iVar7 + 1;
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar12 = local_38;
          *(undefined8 **)(pFVar12 + 8) = local_30;
          local_30 = (undefined8 *)0x0;
          local_38 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        puVar10 = (undefined8 *)(ulonglong)(uVar13 + 1);
        puVar15 = puVar15 + 2;
      } while ((int)(uVar13 + 1) < (param_1->PendingAddRootMotionSources).ArrayNum);
    }
    bVar11 = (this->bHasAdditiveSources ^ param_1->bHasAdditiveSources) & 1 ^ this->field_0x28;
    this->field_0x28 = bVar11;
    bVar11 = (bVar11 ^ param_1->field_0x28) & 2 ^ bVar11;
    this->field_0x28 = bVar11;
    bVar11 = (bVar11 ^ param_1->field_0x28) & 4 ^ bVar11;
    this->field_0x28 = bVar11;
    uVar9 = *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x8;
    *(undefined8 *)&this->LastPreAdditiveVelocity = *(undefined8 *)&param_1->LastPreAdditiveVelocity
    ;
    *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x8 = uVar9;
    *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x10 =
         *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x10;
    this->field_0x28 = (bVar11 ^ param_1->field_0x28) & 8 ^ bVar11;
    (this->LastAccumulatedSettings).Flags = (param_1->LastAccumulatedSettings).Flags;
  }
  return this;
}

// operator== @ 147bc0dc0

bool __thiscall
FRootMotionSourceGroup::operator==(FRootMotionSourceGroup *this,FRootMotionSourceGroup *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  double dVar15;
  
  uVar8 = param_1->field_0x28;
  uVar1 = this->field_0x28;
  if ((((((((this->bHasAdditiveSources ^ param_1->bHasAdditiveSources) & 1) != 0) ||
         (((uVar8 ^ uVar1) & 2) != 0)) || (((uVar8 ^ uVar1) & 4) != 0)) ||
       ((((uVar8 ^ uVar1) & 8) != 0 ||
        (dVar15 = *(double *)&this->LastPreAdditiveVelocity -
                  *(double *)&param_1->LastPreAdditiveVelocity,
        __real_3ff0000000000000 <
        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) ||
      ((dVar15 = *(double *)&(this->LastPreAdditiveVelocity).field_0x8 -
                 *(double *)&(param_1->LastPreAdditiveVelocity).field_0x8,
       __real_3ff0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       ((dVar15 = *(double *)&(this->LastPreAdditiveVelocity).field_0x10 -
                  *(double *)&(param_1->LastPreAdditiveVelocity).field_0x10,
        __real_3ff0000000000000 <
        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
        (iVar2 = (this->RootMotionSources).ArrayNum, iVar2 != (param_1->RootMotionSources).ArrayNum)
        ))))) ||
     ((this->PendingAddRootMotionSources).ArrayNum !=
      (param_1->PendingAddRootMotionSources).ArrayNum)) {
LAB_147bc12ac:
    bVar7 = false;
  }
  else {
    uVar11 = 0;
    if (0 < iVar2) {
      lVar14 = 0;
      do {
        uVar12 = ~uVar11 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar11 < (param_1->RootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        lVar3 = *(longlong *)((param_1->RootMotionSources).AllocatorInstance.Data + lVar14);
        uVar10 = 0;
        if ((int)uVar11 < (this->RootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if ((*(longlong *)((this->RootMotionSources).AllocatorInstance.Data + lVar14) != 0) !=
            (lVar3 != 0)) goto LAB_147bc12ac;
        uVar10 = 0;
        if ((int)uVar11 < (this->RootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (*(longlong *)((this->RootMotionSources).AllocatorInstance.Data + lVar14) != 0) {
          uVar10 = 0;
          if ((int)uVar11 < (this->RootMotionSources).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar4 = (this->RootMotionSources).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar4 + lVar14) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          plVar5 = *(longlong **)(pFVar4 + lVar14);
          pcVar6 = *(code **)(*plVar5 + 0x20);
          uVar10 = 0;
          if ((int)uVar11 < (param_1->RootMotionSources).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          cVar9 = (*pcVar6)(plVar5,*(undefined8 *)
                                    ((param_1->RootMotionSources).AllocatorInstance.Data + lVar14));
          if (cVar9 == '\0') goto LAB_147bc12ac;
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((int)uVar11 < (this->RootMotionSources).ArrayNum);
    }
    piVar13 = &(this->PendingAddRootMotionSources).ArrayNum;
    uVar11 = 0;
    if (0 < *piVar13) {
      lVar14 = 0;
      do {
        uVar12 = ~uVar11 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar11 < (param_1->PendingAddRootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        lVar3 = *(longlong *)
                 ((param_1->PendingAddRootMotionSources).AllocatorInstance.Data + lVar14);
        uVar10 = 0;
        if ((int)uVar11 < (this->PendingAddRootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if ((*(longlong *)((this->PendingAddRootMotionSources).AllocatorInstance.Data + lVar14) != 0
            ) != (lVar3 != 0)) goto LAB_147bc12ac;
        uVar10 = 0;
        if ((int)uVar11 < (this->PendingAddRootMotionSources).ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (*(longlong *)((this->PendingAddRootMotionSources).AllocatorInstance.Data + lVar14) != 0)
        {
          uVar10 = 0;
          if ((int)uVar11 < (this->PendingAddRootMotionSources).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar4 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar4 + lVar14) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          plVar5 = *(longlong **)(pFVar4 + lVar14);
          pcVar6 = *(code **)(*plVar5 + 0x20);
          uVar10 = 0;
          if ((int)uVar11 < (param_1->PendingAddRootMotionSources).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          cVar9 = (*pcVar6)(plVar5,*(undefined8 *)
                                    ((param_1->PendingAddRootMotionSources).AllocatorInstance.Data +
                                    lVar14));
          if (cVar9 == '\0') goto LAB_147bc12ac;
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((int)uVar11 < *piVar13);
    }
    bVar7 = true;
  }
  return bVar7;
}

// operator!= @ 147bc1350

bool __thiscall
FRootMotionSourceGroup::operator!=(FRootMotionSourceGroup *this,FRootMotionSourceGroup *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// operator() @ 147bc33e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FRootMotionSource,1> *param_1)

{
  float fVar1;
  double dVar2;
  FRootMotionSourceGroup *this_00;
  ACharacter *pAVar3;
  UCharacterMovementComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  FRootMotionSource *pFVar10;
  longlong lVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  void *local_a8 [2];
  void *local_98 [2];
  TVector<double>_u_0 local_88;
  TVector<double> local_70;
  TVector<double> local_58 [2];
  
  pFVar10 = param_1->Object;
  if (pFVar10 != (FRootMotionSource *)0x0) {
    if ((((pFVar10->Status).Flags & 4) == 0) && (((pFVar10->Status).Flags & 2) == 0)) {
      return false;
    }
    lVar13 = 4;
    if ((pFVar10->AccumulateMode == Additive) &&
       (this_00 = *(FRootMotionSourceGroup **)this, this_00->bIsAdditiveVelocityApplied != '\0')) {
      local_88._s_0.X = (double)*(undefined8 *)&this_00->LastPreAdditiveVelocity;
      local_88._s_0.Y = (double)*(undefined8 *)&(this_00->LastPreAdditiveVelocity).field_0x8;
      pAVar3 = *(ACharacter **)((longlong)this + 0x10);
      local_88._s_0.Z = (double)*(undefined8 *)&(this_00->LastPreAdditiveVelocity).field_0x10;
      pUVar4 = *(UCharacterMovementComponent **)((longlong)this + 0x18);
      fVar1 = *(float *)((longlong)this + 8);
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator*<FRootMotionSource>(param_1);
      FRootMotionSourceGroup::AccumulateRootMotionVelocityFromSource
                (this_00,pFVar10,fVar1,pAVar3,pUVar4,
                 (TVector<double> *)&this_00->LastPreAdditiveVelocity);
      pTVar7 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
      bVar8 = IsInParallelGameThread();
      if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
        lVar11 = 0;
      }
      else {
        lVar11 = 4;
      }
      if (*(int *)((longlong)pTVar7->ShadowedValue + lVar11) == 1) {
        UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_88._s_0,&local_b8);
        UE::Math::TVector<double>::ToCompactString
                  ((TVector<double> *)(*(longlong *)this + 0x30),&local_c8);
        ::FString::PrintfImpl
                  (&local_e8,
                   L"PrepareRootMotion RemovingAdditiveSource LastPreAdditiveVelocity(%s) Old(%s)");
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        RootMotionSourceDebug::PrintOnScreen(*(ACharacter **)((longlong)this + 0x10),&local_e8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((param_1->Object == (FRootMotionSource *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if ((param_1->Object->FinishVelocityParams).Mode == ClampVelocity) {
      lVar11 = *(longlong *)((longlong)this + 0x18);
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      pTVar12 = UE::Math::TVector<double>::GetClampedToMaxSize2D
                          ((TVector<double> *)(lVar11 + 0xd8),&local_70,
                           (double)(pFVar10->FinishVelocityParams).ClampVelocity);
      dVar6 = (pTVar12->field0_0x0)._s_0.Y;
      dVar2 = (pTVar12->field0_0x0)._s_0.Z;
      lVar11 = *(longlong *)((longlong)this + 0x18);
      *(double *)(lVar11 + 0xd8) = (pTVar12->field0_0x0)._s_0.X;
      *(double *)(lVar11 + 0xe0) = dVar6;
      *(double *)(lVar11 + 0xe8) = dVar2;
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      dVar6 = (double)(pFVar10->FinishVelocityParams).ClampVelocity;
      dVar2 = *(double *)(*(longlong *)((longlong)this + 0x18) + 0xe8);
      if (dVar2 <= dVar6) {
        dVar6 = dVar2;
      }
      *(double *)(*(longlong *)((longlong)this + 0x18) + 0xe8) = dVar6;
      lVar11 = *(longlong *)this;
      if ((*(byte *)(lVar11 + 0x28) & 8) != 0) {
        pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
        pTVar12 = UE::Math::TVector<double>::GetClampedToMaxSize2D
                            ((TVector<double> *)(lVar11 + 0x30),local_58,
                             (double)(pFVar10->FinishVelocityParams).ClampVelocity);
        dVar6 = (pTVar12->field0_0x0)._s_0.Y;
        dVar2 = (pTVar12->field0_0x0)._s_0.Z;
        lVar11 = *(longlong *)this;
        *(double *)(lVar11 + 0x30) = (pTVar12->field0_0x0)._s_0.X;
        *(double *)(lVar11 + 0x38) = dVar6;
        *(double *)(lVar11 + 0x40) = dVar2;
        pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
        dVar6 = (double)(pFVar10->FinishVelocityParams).ClampVelocity;
        dVar2 = *(double *)(*(longlong *)this + 0x40);
        if (dVar2 <= dVar6) {
          dVar6 = dVar2;
        }
        *(double *)(*(longlong *)this + 0x40) = dVar6;
      }
    }
    else {
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      if ((pFVar10->FinishVelocityParams).Mode == SetVelocity) {
        pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
        dVar6 = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y;
        dVar2 = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z;
        lVar11 = *(longlong *)((longlong)this + 0x18);
        *(double *)(lVar11 + 0xd8) = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X;
        *(double *)(lVar11 + 0xe0) = dVar6;
        *(double *)(lVar11 + 0xe8) = dVar2;
        if ((*(byte *)(*(longlong *)this + 0x28) & 8) != 0) {
          pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
          dVar6 = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y;
          dVar2 = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z;
          lVar11 = *(longlong *)this;
          *(double *)(lVar11 + 0x30) = (pFVar10->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X
          ;
          *(double *)(lVar11 + 0x38) = dVar6;
          *(double *)(lVar11 + 0x40) = dVar2;
        }
      }
    }
    if (6 < (byte)LogRootMotion._0_1_) {
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      (**(code **)(pFVar10->_padding_ + 0x60))(pFVar10,local_a8);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
      if (local_a8[0] != (void *)0x0) {
        FMemory::Free(local_a8[0]);
      }
    }
    pTVar7 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
      lVar13 = 0;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar13) == 1) {
      pFVar10 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      (**(code **)(pFVar10->_padding_ + 0x60))(pFVar10,local_98);
      ::FString::PrintfImpl(&local_d8,L"PrepareRootMotion Removing RootMotionSource(%s)");
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
      }
      RootMotionSourceDebug::PrintOnScreen(*(ACharacter **)((longlong)this + 0x10),&local_d8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// operator() @ 147bc3f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FRootMotionSourceGroup::UpdateStateFrom'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FRootMotionSource,1> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRootMotionSource *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  void *local_38 [2];
  
  if ((param_1->Object != (FRootMotionSource *)0x0) && (param_1->Object->LocalID != 0)) {
    lVar1 = *(longlong *)((longlong)this + 8);
    iVar6 = *(int *)(lVar1 + 0x10);
    plVar9 = *(longlong **)(lVar1 + 8);
    plVar10 = plVar9 + (longlong)iVar6 * 2;
    while( true ) {
      if (*(int *)(lVar1 + 0x10) != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar9 == plVar10) break;
      if (*plVar9 != 0) {
        if ((param_1->Object == (FRootMotionSource *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar7 = param_1->Object;
        if ((*plVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (pFVar7->LocalID == *(ushort *)(*plVar9 + 10)) {
          if (6 < (byte)LogRootMotion._0_1_) {
            pFVar7 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
            (**(code **)(pFVar7->_padding_ + 0x60))(pFVar7,local_38);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
            if (local_38[0] != (void *)0x0) {
              FMemory::Free(local_38[0]);
            }
          }
          lVar1 = *(longlong *)this;
          if (((*(TSharedPtr<FRootMotionSource,1> **)(lVar1 + 8) <= param_1) &&
              (param_1 < *(TSharedPtr<FRootMotionSource,1> **)(lVar1 + 8) + *(int *)(lVar1 + 0x14)))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = *(int *)(lVar1 + 0x10);
          if (iVar6 == *(int *)(lVar1 + 0x14)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)(lVar1 + 8),(int *)(lVar1 + 0x14));
          }
          *(int *)(lVar1 + 0x10) = iVar6 + 1;
          puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 8));
          *puVar8 = param_1->Object;
          pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
          puVar8[1] = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          return true;
        }
      }
      plVar9 = plVar9 + 2;
    }
  }
  return false;
}

// operator() @ 147bc4510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_2>::operator()
          (void *this,TSharedPtr<FRootMotionSource,1> *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  FRootMotionSource *pFVar3;
  longlong lVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar3 = param_1->Object;
  if (pFVar3 != (FRootMotionSource *)0x0) {
    if ((((pFVar3->Status).Flags & 4) == 0) && (((pFVar3->Status).Flags & 2) == 0)) {
      return false;
    }
    if (6 < (byte)LogRootMotion._0_1_) {
      pFVar3 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,&local_28);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pTVar1 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1) {
      pFVar3 = TSharedPtr<FRootMotionSource,1>::operator->(param_1);
      (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,local_18);
      ::FString::PrintfImpl(&local_28,L"PrepareRootMotion Removing PendingAddRootMotionSource(%s)");
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
      RootMotionSourceDebug::PrintOnScreen(*(ACharacter **)this,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// AccumulateAdditiveRootMotionVelocity @ 147bc7010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::AccumulateAdditiveRootMotionVelocity
          (FRootMotionSourceGroup *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3,TVector<double> *param_4)

{
  AccumulateRootMotionVelocity(this,Additive,param_1,param_2,param_3,param_4);
  return;
}

// AccumulateOverrideRootMotionVelocity @ 147bc7040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::AccumulateOverrideRootMotionVelocity
          (FRootMotionSourceGroup *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3,TVector<double> *param_4)

{
  AccumulateRootMotionVelocity(this,Override,param_1,param_2,param_3,param_4);
  return;
}

// AccumulateRootMotionVelocity @ 147bc7070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::AccumulateRootMotionVelocity
          (FRootMotionSourceGroup *this,ERootMotionAccumulateMode param_1,float param_2,
          ACharacter *param_3,UCharacterMovementComponent *param_4,TVector<double> *param_5)

{
  int iVar1;
  FRootMotionSource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if ((Additive < param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootMotionType == ERootMotionAccumulateMode::Additive || RootMotionType == ERootMotionAccumulateMode::Override"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                         ,0x694,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar5 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = *(FRootMotionSource **)pFVar5;
    if ((pFVar2 != (FRootMotionSource *)0x0) && (pFVar2->AccumulateMode == param_1)) {
      AccumulateRootMotionVelocityFromSource(this,pFVar2,param_2,param_3,param_4,param_5);
      if ((*(longlong *)pFVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)(*(longlong *)pFVar5 + 0x26) == '\0') {
        return;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// AccumulateRootMotionVelocityFromSource @ 147bc71a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::AccumulateRootMotionVelocityFromSource
          (FRootMotionSourceGroup *this,FRootMotionSource *param_1,float param_2,ACharacter *param_3
          ,UCharacterMovementComponent *param_4,TVector<double> *param_5)

{
  double dVar1;
  longlong lVar2;
  double adVar3 [2];
  double adVar4 [2];
  undefined1 auStack_1d8 [80];
  TTransform<double> local_188;
  undefined1 local_128;
  float local_124;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_124 = (param_1->RootMotionParams).BlendWeight;
  local_188.Translation.XY.m128d_f64[0]._0_4_ =
       *(undefined4 *)(param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64;
  local_188.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)
        ((longlong)(param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 + 4);
  local_188.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 + 1)
  ;
  local_188.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)
        ((longlong)(param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 + 0xc);
  local_128 = (param_1->RootMotionParams).bHasRootMotion;
  local_188.Translation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)(param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64;
  local_188.Translation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)
        ((longlong)(param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 + 4);
  local_118.Translation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 + 1)
  ;
  local_118.Translation.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)
        ((longlong)(param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 + 0xc);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Rotation.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  local_118.Rotation.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  if ((param_1->bInLocalSpace != false) && (lVar2 = *(longlong *)&param_4->field_0xc0, lVar2 != 0))
  {
    local_b8.Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x1f0);
    local_b8.Rotation.XY.m128d_f64[1] = *(double *)(lVar2 + 0x1f8);
    local_b8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x200);
    local_b8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x208);
    local_b8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_b8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_b8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_b8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_b8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
    adVar3[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    adVar3[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    adVar3[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    adVar4[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    adVar4[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    adVar4[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_118.Translation.XY.m128d_f64[0]._0_4_ = local_188.Translation.XY.m128d_f64[0]._0_4_;
    local_118.Translation.XY.m128d_f64[1]._4_4_ = local_188.Translation.XY.m128d_f64[1]._4_4_;
    local_118.Translation.XY.m128d_f64[0]._4_4_ = local_188.Translation.XY.m128d_f64[0]._4_4_;
    local_118.Translation.XY.m128d_f64[1]._0_4_ = local_188.Translation.XY.m128d_f64[1]._0_4_;
    local_188.Translation.XY.m128d_f64 = adVar3;
    local_118.Translation.ZW.m128d_f64[0]._0_4_ = local_188.Translation.ZW.m128d_f64[0]._0_4_;
    local_118.Translation.ZW.m128d_f64[0]._4_4_ = local_188.Translation.ZW.m128d_f64[0]._4_4_;
    local_188.Translation.ZW.m128d_f64 = adVar4;
    UE::Math::TTransform<double>::Multiply(&local_188,&local_118,&local_b8);
  }
  dVar1 = (param_5->field0_0x0)._s_0.Z;
  if (param_1->AccumulateMode == Override) {
    *(undefined4 *)&param_5->field0_0x0 = local_188.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 4) =
         local_188.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 8) =
         local_188.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc) =
         local_188.Translation.XY.m128d_f64[1]._4_4_;
    (param_5->field0_0x0)._s_0.Z =
         (double)CONCAT44(local_188.Translation.ZW.m128d_f64[0]._4_4_,
                          local_188.Translation.ZW.m128d_f64[0]._0_4_);
  }
  else if (param_1->AccumulateMode == Additive) {
    (param_5->field0_0x0)._s_0.X =
         (double)CONCAT44(local_188.Translation.XY.m128d_f64[0]._4_4_,
                          local_188.Translation.XY.m128d_f64[0]._0_4_) +
         (param_5->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y =
         (double)CONCAT44(local_188.Translation.XY.m128d_f64[1]._4_4_,
                          local_188.Translation.XY.m128d_f64[1]._0_4_) +
         (param_5->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.Z =
         (double)CONCAT44(local_188.Translation.ZW.m128d_f64[0]._4_4_,
                          local_188.Translation.ZW.m128d_f64[0]._0_4_) +
         (param_5->field0_0x0)._s_0.Z;
  }
  if (((param_1->Settings).Flags & 4) != 0) {
    (param_5->field0_0x0)._s_0.Z = dVar1;
  }
  return;
}

// AddStructReferencedObjects @ 147bc8ef0

void __thiscall
FRootMotionSourceGroup::AddStructReferencedObjects
          (FRootMotionSourceGroup *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar3 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
  pFVar3 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// ApplyRootMotionSource @ 147bc9d30

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall
FRootMotionSourceGroup::ApplyRootMotionSource
          (FRootMotionSourceGroup *this,TSharedPtr<FRootMotionSource,1> *param_1)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FRootMotionSource,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  void *local_18 [2];
  
  if (param_1->Object == (FRootMotionSource *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4320237689568757523>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                       ,0x713,"SourcePtr.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return 0;
  }
  LocalIDGenerator = LocalIDGenerator + 1;
  if (LocalIDGenerator == 0) {
    LocalIDGenerator = 1;
  }
  uVar7 = LocalIDGenerator;
  pTVar1 = &this->PendingAddRootMotionSources;
  param_1->Object->LocalID = LocalIDGenerator;
  pTVar3 = (TSharedPtr<FRootMotionSource,1> *)(pTVar1->AllocatorInstance).Data;
  if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->PendingAddRootMotionSources).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
  iVar8 = (this->PendingAddRootMotionSources).ArrayNum;
  piVar2 = &(this->PendingAddRootMotionSources).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PendingAddRootMotionSources).ArrayNum = iVar8 + 1;
  pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(FRootMotionSource **)pFVar9 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (6 < (byte)LogRootMotion._0_1_) {
    if ((param_1->Object == (FRootMotionSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    (**(code **)(param_1->Object->_padding_ + 0x60))(param_1->Object,local_18);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return uVar7;
}

// ApplyTimeStampReset @ 147bc9ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::ApplyTimeStampReset(FRootMotionSourceGroup *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void *local_78 [2];
  void *local_68 [10];
  
  if ((__real_7f7fc99e <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("-DeltaTime > RootMotionSource_InvalidStartTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                         ,0x6fa,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_ff7fc99e;
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar6 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) {
      iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
      pFVar6 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
      do {
        if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar7) {
          return;
        }
        lVar2 = *(longlong *)pFVar6;
        if (((lVar2 != 0) && (fVar4 != *(float *)(lVar2 + 0x14))) &&
           (*(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) - param_1,
           6 < (byte)LogRootMotion._0_1_)) {
          if ((*(longlong *)pFVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(longlong *)pFVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)pFVar6 + 0x60))(*(longlong **)pFVar6,local_68);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
        }
        pFVar6 = pFVar6 + 0x10;
      } while( true );
    }
    lVar2 = *(longlong *)pFVar6;
    if (((lVar2 != 0) && (fVar4 != *(float *)(lVar2 + 0x14))) &&
       (*(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) - param_1, 6 < (byte)LogRootMotion._0_1_
       )) {
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)pFVar6 + 0x60))(*(longlong **)pFVar6,local_78);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
      if (local_78[0] != (void *)0x0) {
        FMemory::Free(local_78[0]);
      }
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// CleanUpInvalidRootMotion @ 147bcbef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::CleanUpInvalidRootMotion
          (FRootMotionSourceGroup *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3)

{
  int iVar1;
  TSharedPtr<FRootMotionSource,1> *pTVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ACharacter *local_res8;
  FRootMotionSourceGroup *local_58;
  float local_50;
  ACharacter *local_48;
  UCharacterMovementComponent *local_40;
  
  iVar1 = (this->RootMotionSources).ArrayNum;
  iVar9 = 0;
  local_58 = this;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  if (iVar1 != 0) {
    pTVar2 = (TSharedPtr<FRootMotionSource,1> *)(this->RootMotionSources).AllocatorInstance.Data;
    iVar8 = 0;
    local_res8 = (ACharacter *)this;
    bVar3 = `FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_1>::operator()
                      (&local_58,pTVar2);
    bVar3 = !bVar3;
    iVar5 = 0;
    do {
      iVar7 = iVar5;
      do {
        iVar7 = iVar7 + 1;
        if (iVar1 <= iVar7) break;
        bVar4 = `FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_1>::operator()
                          (&local_58,pTVar2 + iVar7);
      } while (bVar3 == !bVar4);
      iVar6 = iVar7 - iVar5;
      if (bVar3 == false) {
        DestructItems<TSharedPtr<FRootMotionSource,1>,int>(pTVar2 + iVar5,iVar6);
      }
      else {
        if (iVar8 != iVar5) {
          memmove(pTVar2 + iVar8,pTVar2 + iVar5,(longlong)iVar6 << 4);
        }
        iVar8 = iVar8 + iVar6;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar5 = iVar7;
    } while (iVar7 < iVar1);
    ((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)&local_res8->field_0x8)
    ->ArrayNum = iVar8;
    this = (FRootMotionSourceGroup *)local_res8;
  }
  iVar1 = ((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)
          &((ACharacter *)this)->field_0x18)->ArrayNum;
  if (iVar1 != 0) {
    pTVar2 = (TSharedPtr<FRootMotionSource,1> *)
             (((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)
              &((ACharacter *)this)->field_0x18)->AllocatorInstance).Data;
    local_res8 = param_2;
    bVar3 = `FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_2>::operator()
                      (&local_res8,pTVar2);
    bVar3 = !bVar3;
    iVar5 = 0;
    do {
      iVar8 = iVar5;
      do {
        iVar8 = iVar8 + 1;
        if (iVar1 <= iVar8) break;
        bVar4 = `FRootMotionSourceGroup::CleanUpInvalidRootMotion'::__l2::<lambda_2>::operator()
                          (&local_res8,pTVar2 + iVar8);
      } while (bVar3 == !bVar4);
      iVar7 = iVar8 - iVar5;
      if (bVar3 == false) {
        DestructItems<TSharedPtr<FRootMotionSource,1>,int>(pTVar2 + iVar5,iVar7);
      }
      else {
        if (iVar9 != iVar5) {
          memmove(pTVar2 + iVar9,pTVar2 + iVar5,(longlong)iVar7 << 4);
        }
        iVar9 = iVar9 + iVar7;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar5 = iVar8;
    } while (iVar8 < iVar1);
    ((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)
    &((ACharacter *)this)->field_0x18)->ArrayNum = iVar9;
  }
  return;
}

// Clear @ 147bcc1a0

void __thiscall FRootMotionSourceGroup::Clear(FRootMotionSourceGroup *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(this->RootMotionSources).AllocatorInstance.Data,
             (this->RootMotionSources).ArrayNum);
  piVar1 = &(this->RootMotionSources).ArrayMax;
  (this->RootMotionSources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RootMotionSources).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->PendingAddRootMotionSources).AllocatorInstance.Data,
             (this->PendingAddRootMotionSources).ArrayNum);
  piVar1 = &(this->PendingAddRootMotionSources).ArrayMax;
  (this->PendingAddRootMotionSources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PendingAddRootMotionSources).AllocatorInstance,0,piVar1);
  }
  this->bHasAdditiveSources = '\0';
  this->bIsAdditiveVelocityApplied = '\0';
  this->bHasOverrideSourcesWithIgnoreZAccumulate = '\0';
  this->bHasOverrideSources = '\0';
  (this->LastAccumulatedSettings).Flags = '\0';
  return;
}

// CullInvalidSources @ 147bd4650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRootMotionSourceGroup::CullInvalidSources(FRootMotionSourceGroup *this)

{
  TSharedPtr<FRootMotionSource,1> *this_00;
  byte bVar1;
  FRootMotionSource *pFVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TSharedPtr<FRootMotionSource,1> *pTVar8;
  byte bVar9;
  int iVar10;
  int local_res10;
  void *local_48 [2];
  
  iVar10 = (this->RootMotionSources).ArrayNum;
  lVar3 = (longlong)iVar10;
  if (iVar10 == 0) {
    return;
  }
  this_00 = (TSharedPtr<FRootMotionSource,1> *)(this->RootMotionSources).AllocatorInstance.Data;
  iVar10 = 0;
  local_res10 = 0;
  if (this_00->Object != (FRootMotionSource *)0x0) {
    if (this_00->Object->LocalID != 0) {
      bVar9 = 1;
      goto LAB_147bd46fe;
    }
    if (6 < (byte)LogRootMotion._0_1_) {
      pFVar2 = TSharedPtr<FRootMotionSource,1>::operator->(this_00);
      (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,local_48);
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_RootMotionSourc_1518a0918,
                 (FLogCategoryBase *)&LogRootMotion);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
  }
  bVar9 = 0;
LAB_147bd46fe:
  lVar4 = 0;
  iVar5 = 0;
  do {
    lVar4 = lVar4 + 1;
    iVar6 = iVar5 + 1;
    if (lVar4 < lVar3) {
      pTVar8 = this_00 + lVar4;
      do {
        if (pTVar8->Object == (FRootMotionSource *)0x0) {
LAB_147bd47a4:
          bVar1 = 0;
        }
        else {
          if (pTVar8->Object->LocalID == 0) {
            if (6 < (byte)LogRootMotion._0_1_) {
              pFVar2 = TSharedPtr<FRootMotionSource,1>::operator->(this_00 + iVar6);
              (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,local_48);
              UE::Logging::Private::BasicLog<7>
                        ((FStaticBasicLogRecord *)&PTR_u_RootMotionSourc_1518a0918,
                         (FLogCategoryBase *)&LogRootMotion);
              if (local_48[0] != (void *)0x0) {
                FMemory::Free(local_48[0]);
              }
            }
            goto LAB_147bd47a4;
          }
          bVar1 = 1;
        }
        iVar10 = local_res10;
        if (bVar9 != bVar1) break;
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        pTVar8 = pTVar8 + 1;
      } while (lVar4 < lVar3);
    }
    iVar7 = iVar6 - iVar5;
    if (bVar9 == 0) {
      DestructItems<TSharedPtr<FRootMotionSource,1>,int>(this_00 + iVar5,iVar7);
    }
    else {
      if (iVar10 != iVar5) {
        memmove(this_00 + iVar10,this_00 + iVar5,(longlong)iVar7 << 4);
      }
      iVar10 = iVar10 + iVar7;
      local_res10 = iVar10;
    }
    bVar9 = bVar9 ^ 1;
    iVar5 = iVar6;
    if (lVar3 <= lVar4) {
      (this->RootMotionSources).ArrayNum = iVar10;
      return;
    }
  } while( true );
}

// GetOverrideRootMotionRotation @ 147be3ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRootMotionSourceGroup::GetOverrideRootMotionRotation
          (FRootMotionSourceGroup *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3,TQuat<double> *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FRootMotionSourceGroup *this_00;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  
  iVar10 = (this->RootMotionSources).ArrayNum;
  pFVar12 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar10 * 0x10;
  this_00 = this;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar10) {
      this_00 = (FRootMotionSourceGroup *)&stack0x00000008;
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(this_00);
    }
    if (pFVar12 == pFVar13) break;
    lVar14 = *(longlong *)pFVar12;
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x26) == '\0')) {
      dVar5 = *(double *)(lVar14 + 0x40);
      dVar6 = *(double *)(lVar14 + 0x48);
      dVar7 = *(double *)(lVar14 + 0x50);
      dVar8 = *(double *)(lVar14 + 0x58);
      param_4->X = dVar5;
      param_4->Y = dVar6;
      param_4->Z = dVar7;
      param_4->W = dVar8;
      lVar14 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)(dVar8 - UE::Math::TQuat<double>::Identity.W) >>
                                       0x20) & _UNK_15061cc8c,
                                 SUB84(dVar8 - UE::Math::TQuat<double>::Identity.W,0) &
                                 _UNK_15061cc88));
      auVar1._8_4_ = (int)lVar14;
      auVar1._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (dVar7 - UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                                       & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar7 - UE::Math::TQuat<double>::Identity.Z,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar1._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar10 = movmskpd((int)this_00,auVar1);
      lVar14 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)(dVar6 - UE::Math::TQuat<double>::Identity.Y) >>
                                       0x20) & _UNK_15061cc8c,
                                 SUB84(dVar6 - UE::Math::TQuat<double>::Identity.Y,0) &
                                 _UNK_15061cc88));
      auVar2._8_4_ = (int)lVar14;
      auVar2._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (dVar5 - UE::Math::TQuat<double>::Identity.X) >> 0x20)
                                       & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar5 - UE::Math::TQuat<double>::Identity.X,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar9 = movmskpd((int)param_4,auVar2);
      uVar11 = iVar10 << 2 | uVar9;
      if (uVar11 != 0) {
        lVar14 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.W + dVar8)
                                         >> 0x20) & _UNK_15061cc8c,
                                   SUB84(UE::Math::TQuat<double>::Identity.W + dVar8,0) &
                                   _UNK_15061cc88));
        auVar3._8_4_ = (int)lVar14;
        auVar3._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)
                                                (UE::Math::TQuat<double>::Identity.Z + dVar7) >>
                                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(UE::Math::TQuat<double>::Identity.Z + dVar7,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar11 = movmskpd(uVar11,auVar3);
        lVar14 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dVar6 + UE::Math::TQuat<double>::Identity.Y)
                                         >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar6 + UE::Math::TQuat<double>::Identity.Y,0) &
                                   _UNK_15061cc88));
        auVar4._8_4_ = (int)lVar14;
        auVar4._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)
                                                (dVar5 + UE::Math::TQuat<double>::Identity.X) >>
                                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar5 + UE::Math::TQuat<double>::Identity.X,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        iVar10 = movmskpd(uVar9,auVar4);
        if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
          return true;
        }
      }
      return false;
    }
    pFVar12 = pFVar12 + 0x10;
  }
  return false;
}

// GetRootMotionSource @ 147be6e80

TSharedPtr<FRootMotionSource,1> * __thiscall
FRootMotionSourceGroup::GetRootMotionSource
          (FRootMotionSourceGroup *this,TSharedPtr<FRootMotionSource,1> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRootMotionSource *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar5 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar3 = *(FRootMotionSource **)pFVar5;
    if ((pFVar3 != (FRootMotionSource *)0x0) && (pFVar3->InstanceName == param_1))
    goto LAB_147be6f19;
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
  pFVar5 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) {
      __return_storage_ptr__->Object = (FRootMotionSource *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pFVar3 = *(FRootMotionSource **)pFVar5;
    if ((pFVar3 != (FRootMotionSource *)0x0) && (pFVar3->InstanceName == param_1)) break;
    pFVar5 = pFVar5 + 0x10;
  }
LAB_147be6f19:
  __return_storage_ptr__->Object = pFVar3;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetRootMotionSourceByID @ 147be6f60

TSharedPtr<FRootMotionSource,1> * __thiscall
FRootMotionSourceGroup::GetRootMotionSourceByID
          (FRootMotionSourceGroup *this,TSharedPtr<FRootMotionSource,1> *__return_storage_ptr__,
          ushort param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRootMotionSource *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar4 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar3 = *(FRootMotionSource **)pFVar4;
    if ((pFVar3 != (FRootMotionSource *)0x0) && (pFVar3->LocalID == param_1)) goto LAB_147be6ffa;
    pFVar4 = pFVar4 + 0x10;
  }
  iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
  pFVar4 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      __return_storage_ptr__->Object = (FRootMotionSource *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pFVar3 = *(FRootMotionSource **)pFVar4;
    if ((pFVar3 != (FRootMotionSource *)0x0) && (pFVar3->LocalID == param_1)) break;
    pFVar4 = pFVar4 + 0x10;
  }
LAB_147be6ffa:
  __return_storage_ptr__->Object = pFVar3;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HasActiveRootMotionSources @ 147bee310

bool __thiscall FRootMotionSourceGroup::HasActiveRootMotionSources(FRootMotionSourceGroup *this)

{
  if (((this->RootMotionSources).ArrayNum < 1) && ((this->PendingAddRootMotionSources).ArrayNum < 1)
     ) {
    return false;
  }
  return true;
}

// HasAdditiveVelocity @ 147bee330

bool __thiscall FRootMotionSourceGroup::HasAdditiveVelocity(FRootMotionSourceGroup *this)

{
  return this->bHasAdditiveSources;
}

// HasOverrideVelocity @ 147bee3d0

bool __thiscall FRootMotionSourceGroup::HasOverrideVelocity(FRootMotionSourceGroup *this)

{
  return this->bHasOverrideSources;
}

// HasOverrideVelocityWithIgnoreZAccumulate @ 147bee3e0

bool __thiscall
FRootMotionSourceGroup::HasOverrideVelocityWithIgnoreZAccumulate(FRootMotionSourceGroup *this)

{
  return this->bHasOverrideSourcesWithIgnoreZAccumulate;
}

// HasRootMotionToApply @ 147bee3f0

bool __thiscall FRootMotionSourceGroup::HasRootMotionToApply(FRootMotionSourceGroup *this)

{
  if (((this->RootMotionSources).ArrayNum < 1) && ((this->PendingAddRootMotionSources).ArrayNum < 1)
     ) {
    return false;
  }
  return true;
}

// HasVelocity @ 147bee7c0

bool __thiscall FRootMotionSourceGroup::HasVelocity(FRootMotionSourceGroup *this)

{
  return this->bHasAdditiveSources != '\0' || this->bHasOverrideSources != '\0';
}

// NeedsSimulatedSmoothing @ 147bf2cd0

bool __thiscall FRootMotionSourceGroup::NeedsSimulatedSmoothing(FRootMotionSourceGroup *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RootMotionSources).ArrayNum;
  pFVar2 = (this->RootMotionSources).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootMotionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((*(longlong *)pFVar2 != 0) && (*(char *)(*(longlong *)pFVar2 + 0x29) != '\0')) {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

// NetSerialize @ 147bf37b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRootMotionSourceGroup::NetSerialize
          (FRootMotionSourceGroup *this,FArchive *param_1,UPackageMap *param_2,bool *param_3,
          uchar param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  ulonglong *puVar5;
  uchar *puVar6;
  code *pcVar7;
  uchar uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  uint local_res10 [2];
  uint local_68;
  uint local_64;
  uint local_60 [6];
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *local_48;
  
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar19 = this->bHasAdditiveSources;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = (uint)bVar19;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar10 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_147bf3842;
  }
  else {
    uVar10 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_147bf3842:
    bVar19 = uVar10 != 0;
  }
  bVar13 = this->field_0x28;
  if (this->bHasAdditiveSources != bVar19) {
    bVar13 = bVar13 & 0xfe | bVar19;
    this->field_0x28 = bVar13;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar19 = (bool)(bVar13 >> 1 & 1);
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_68 = 0;
    if ((*puVar1 & 1) == 0) {
      local_68 = (uint)bVar19;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
    if (1 < local_68) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar10 = local_68;
    if ((*puVar1 & 1) != 0) goto LAB_147bf38bc;
  }
  else {
    uVar10 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_147bf38bc:
    bVar19 = uVar10 != 0;
  }
  bVar13 = this->field_0x28;
  if (this->bHasOverrideSources != bVar19) {
    bVar13 = bVar13 & 0xfd | bVar19 * '\x02';
    this->field_0x28 = bVar13;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar19 = (bool)(bVar13 >> 2 & 1);
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_64 = 0;
    if ((*puVar1 & 1) == 0) {
      local_64 = (uint)bVar19;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
    if (1 < local_64) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar10 = local_64;
    if ((*puVar1 & 1) != 0) goto LAB_147bf393e;
  }
  else {
    uVar10 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_147bf393e:
    bVar19 = uVar10 != 0;
  }
  if (this->bHasOverrideSourcesWithIgnoreZAccumulate != bVar19) {
    this->field_0x28 = this->field_0x28 & 0xfb | bVar19 << 2;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar10 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if ((uVar10 < 0x17) ||
     (iVar11 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar11 == 0x1a)) {
    if (((*puVar1 & 1) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.IsLoading()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                            ,0x113,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_60[1] = 0;
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_60 + 1,0x18);
    iVar14 = 1 << ((char)local_60[1] + 1U & 0x1f);
    iVar11 = 1 << ((char)local_60[1] + 2U & 0x1f);
    local_60[4] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_60 + 4,iVar11);
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_60 + 2,iVar11);
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_60 + 3,iVar11);
    fVar20 = (float)(int)(local_60[2] - iVar14) * __real_3dcccccd;
    fVar21 = (float)(int)(local_60[3] - iVar14) * __real_3dcccccd;
    bVar19 = true;
    *(double *)&this->LastPreAdditiveVelocity =
         (double)((float)(int)(local_60[4] - iVar14) * __real_3dcccccd);
    *(double *)&(this->LastPreAdditiveVelocity).field_0x8 = (double)fVar20;
    *(double *)&(this->LastPreAdditiveVelocity).field_0x10 = (double)fVar21;
  }
  else if ((*puVar1 & 1) == 0) {
    bVar19 = UE::Net::WriteQuantizedVector
                       (10,(TVector<double> *)&this->LastPreAdditiveVelocity,param_1);
  }
  else {
    bVar19 = UE::Net::ReadQuantizedVector
                       (10,(TVector<double> *)&this->LastPreAdditiveVelocity,param_1);
  }
  *param_3 = bVar19;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar19 = this->bIsAdditiveVelocityApplied;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_60[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_60[0] = (uint)bVar19;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_60,4);
    if (1 < local_60[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar10 = local_60[0];
    if ((*puVar1 & 1) == 0) goto LAB_147bf3b1b;
  }
  else {
    uVar10 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  bVar19 = uVar10 != 0;
LAB_147bf3b1b:
  if (this->bIsAdditiveVelocityApplied != bVar19) {
    this->field_0x28 = this->field_0x28 & 0xf7 | bVar19 << 3;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->LastAccumulatedSettings,1);
  }
  else {
    (this->LastAccumulatedSettings).Flags = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  iVar11 = (this->RootMotionSources).ArrayNum;
  pTVar3 = &this->RootMotionSources;
  bVar13 = param_4;
  if (iVar11 < (int)(uint)param_4) {
    bVar13 = (byte)iVar11;
  }
  NetSerializeRMSArray(param_1,param_2,param_3,pTVar3,bVar13);
  pTVar16 = &this->PendingAddRootMotionSources;
  uVar8 = param_4 - bVar13;
  if (param_4 <= bVar13) {
    uVar8 = '\0';
  }
  local_48 = pTVar16;
  NetSerializeRMSArray(param_1,param_2,param_3,pTVar16,uVar8);
  if ((param_1->field_0x29 & 2) == 0) {
    *param_3 = true;
    bVar19 = true;
  }
  else {
    uVar10 = (this->RootMotionSources).ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar15 = (longlong)(int)uVar10 << 4;
      do {
        uVar17 = ~uVar10 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar10 < (this->RootMotionSources).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (*(longlong *)((pTVar3->AllocatorInstance).Data + lVar15) == 0) {
          uVar12 = 0;
          if ((int)uVar10 < (this->RootMotionSources).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          pFVar18 = (pTVar3->AllocatorInstance).Data + lVar15;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar18 + 8));
          iVar11 = (this->RootMotionSources).ArrayNum + ~uVar10;
          if (iVar11 != 0) {
            memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar11 << 4);
          }
          piVar4 = &(this->RootMotionSources).ArrayNum;
          *piVar4 = *piVar4 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar3->AllocatorInstance,(this->RootMotionSources).ArrayNum,
                     &(this->RootMotionSources).ArrayMax);
        }
        lVar15 = lVar15 + -0x10;
        uVar10 = uVar10 - 1;
        pTVar16 = local_48;
      } while (-1 < (int)uVar10);
    }
    uVar10 = (this->PendingAddRootMotionSources).ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar15 = (longlong)(int)uVar10 << 4;
      do {
        uVar17 = ~uVar10 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar10 < pTVar16->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (*(longlong *)((pTVar16->AllocatorInstance).Data + lVar15) == 0) {
          uVar12 = 0;
          if ((int)uVar10 < pTVar16->ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          pFVar18 = (pTVar16->AllocatorInstance).Data + lVar15;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar18 + 8));
          iVar11 = pTVar16->ArrayNum + ~uVar10;
          if (iVar11 != 0) {
            memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar11 << 4);
          }
          pTVar16->ArrayNum = pTVar16->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar16->AllocatorInstance,pTVar16->ArrayNum,&pTVar16->ArrayMax);
        }
        lVar15 = lVar15 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    bVar19 = false;
    *param_3 = false;
  }
  return bVar19;
}

// NetSerializeRMSArray @ 147bf4220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRootMotionSourceGroup::NetSerializeRMSArray
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,
          TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *param_4,uchar param_5
          )

{
  longlong *plVar1;
  UScriptStruct *pUVar2;
  FStructOpsFakeVTable *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  UScriptStruct *pUVar9;
  UClass *pUVar10;
  UPackage *pUVar11;
  UScriptStruct *pUVar12;
  ICppStructOps *pIVar13;
  void *pvVar14;
  EStructOpsFakeVTableFlags EVar15;
  FStaticBasicLogRecord *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  byte local_res8 [8];
  UPackageMap *local_res10;
  UScriptStruct *local_68;
  UScriptStruct *local_60;
  char local_58;
  void *local_50;
  FSharedReferencer<1> local_48 [2];
  
  local_res10 = param_2;
  if ((param_1->field_0x28 & 4) != 0) {
    if ((2 < (byte)LogRootMotion._0_1_) && ((int)(uint)param_5 < param_4->ArrayNum)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
    }
    local_res8[0] = param_5;
    if (param_4->ArrayNum < (int)(uint)param_5) {
      local_res8[0] = (byte)param_4->ArrayNum;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  bVar6 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    iVar19 = param_4->ArrayNum;
    if (iVar19 < (int)(uint)local_res8[0]) {
      iVar19 = (uint)local_res8[0] - iVar19;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar19,&param_4->AllocatorInstance,&param_4->ArrayNum,
                         &param_4->ArrayMax);
      memset((param_4->AllocatorInstance).Data + (longlong)iVar8 * 0x10,0,(longlong)iVar19 << 4);
    }
    else if ((int)(uint)local_res8[0] < iVar19) {
      iVar19 = iVar19 - (uint)local_res8[0];
      if (iVar19 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (iVar19 == 0) goto LAB_147bf4388;
      TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_4,(uint)bVar6,iVar19);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
    }
  }
LAB_147bf4388:
  uVar20 = 0;
  if (local_res8[0] != 0) {
    lVar21 = 0;
    do {
      if ((param_1->field_0x29 & 2) != 0) {
        return;
      }
      uVar18 = 0;
      if ((int)uVar20 < param_4->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((param_4->AllocatorInstance).Data + lVar21) == 0) {
        pUVar9 = (UScriptStruct *)0x0;
      }
      else {
        uVar18 = 0;
        if ((int)uVar20 < param_4->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar17 = (param_4->AllocatorInstance).Data;
        if ((*(longlong *)(pFVar17 + lVar21) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar9 = (UScriptStruct *)(**(code **)(**(longlong **)(pFVar17 + lVar21) + 0x58))();
      }
      local_58 = '\0';
      local_60 = pUVar9;
      if ((param_1->field_0x28 & 4) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_60);
        pUVar2 = local_60;
        if ((param_1->field_0x28 & 1) == 0) goto LAB_147bf4539;
        if (local_60 != (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar19 = (int)pUVar10->_padding_;
          if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar19) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
              &pUVar10->_padding_)) {
            local_58 = '\x01';
            local_60 = (UScriptStruct *)0x0;
            goto LAB_147bf4860;
          }
          goto LAB_147bf4539;
        }
LAB_147bf483a:
        if (local_58 != '\0') {
LAB_147bf4860:
          if (1 < (byte)LogRootMotion._0_1_) {
            pFVar16 = &::LOG_Static;
LAB_147bf4870:
            UE::Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogRootMotion);
          }
LAB_147bf487c:
          FArchiveState::SetError((FArchiveState *)param_1);
          return;
        }
      }
      else {
        local_68 = (UScriptStruct *)0x0;
        if (pUVar9 != (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar19 = (int)pUVar10->_padding_;
          if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar19) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
              &pUVar10->_padding_)) {
            local_58 = '\x01';
          }
          else {
            local_68 = local_60;
          }
        }
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_68);
LAB_147bf4539:
        if (local_60 == (UScriptStruct *)0x0) goto LAB_147bf483a;
        pUVar2 = (UScriptStruct *)local_60->_padding_;
        pUVar12 = Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton;
        while( true ) {
          if (pUVar2 == (UScriptStruct *)0x0) {
            if ((byte)LogRootMotion._0_1_ < 2) goto LAB_147bf487c;
            pFVar16 = &::LOG_Static;
            goto LAB_147bf4870;
          }
          if (pUVar12 == (UScriptStruct *)0x0) {
            pUVar11 = Z_Construct_UPackage__Script_Engine();
            pUVar12 = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource,(UObject *)pUVar11
                                      ,L"RootMotionSource");
            Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton = pUVar12;
          }
          if (pUVar2 == pUVar12) break;
          pUVar2 = (UScriptStruct *)pUVar2->_padding_;
        }
        if ((param_1->field_0x28 & 1) != 0) {
          uVar18 = 0;
          if ((int)uVar20 < param_4->ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(longlong *)((param_4->AllocatorInstance).Data + lVar21) == 0) ||
             (pUVar9 != local_60)) {
            pIVar13 = UScriptStruct::GetCppStructOps(local_60);
            pvVar14 = FMemory::Malloc((longlong)pIVar13->Size,0);
            (**(code **)(local_60->_padding_ + 0x2f8))(local_60,pvVar14,1);
            local_50 = pvVar14;
            local_48[0].ReferenceController = ::operator_new(0x18);
            if (local_48[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              (local_48[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
              (local_48[0].ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFRootMotionSource__UFRootMotionSourceDeleter___00_SharedPointerInternals__6B_
              ;
              (local_48[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
              local_48[0].ReferenceController[1]._padding_ = (longlong)pvVar14;
            }
            uVar18 = 0;
            if ((int)uVar20 < param_4->ArrayNum) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar17 = (param_4->AllocatorInstance).Data + lVar21;
            if (pFVar17 != (FScriptContainerElement *)&local_50) {
              *(void **)pFVar17 = pvVar14;
              local_50 = (void *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar17 + 8),local_48);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48[0].ReferenceController);
          }
        }
        uVar18 = 0;
        if ((int)uVar20 < param_4->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_60->StructFlags & STRUCT_NetSerializeNative) == STRUCT_NoFlags) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                             ,0x82f,
                             L"Serializing RootMotionSource without NetSerializeNative - not supported!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          pIVar13 = UScriptStruct::GetCppStructOps(local_60);
          uVar18 = 0;
          if ((int)uVar20 < param_4->ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = pIVar13->FakeVPtr;
          uVar4 = *(undefined8 *)((param_4->AllocatorInstance).Data + lVar21);
          if ((pFVar3->Capabilities).HasNetSerializer) {
            if (((~(byte)(pFVar3->Flags >> 6) & 1) != 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = 0;
            for (EVar15 = pFVar3->Flags &
                          (PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|
                          Construct); EVar15 != None; EVar15 = EVar15 & EVar15 - Construct) {
              uVar18 = uVar18 + 1;
            }
            (**(code **)(&pFVar3[1].Flags + (ulonglong)uVar18 * 2))
                      (param_1,local_res10,param_3,uVar4);
          }
        }
      }
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x10;
    } while ((int)uVar20 < (int)(uint)local_res8[0]);
  }
  return;
}

// PrepareRootMotion @ 147bf74a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::PrepareRootMotion
          (FRootMotionSourceGroup *this,float param_1,ACharacter *param_2,
          UCharacterMovementComponent *param_3,bool param_4)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  void *pvVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  float fVar20;
  FIdentityFunctor local_res8 [8];
  undefined1 local_158 [8];
  FString local_150;
  FString local_140;
  void *local_130 [2];
  void *local_120 [2];
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [2];
  void *local_e0 [23];
  
  pTVar1 = &this->RootMotionSources;
  pTVar2 = &this->PendingAddRootMotionSources;
  if ((pTVar1 == pTVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar5 = (this->PendingAddRootMotionSources).ArrayNum;
  if (iVar5 != 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar5,&pTVar1->AllocatorInstance,&(this->RootMotionSources).ArrayNum,
                        &(this->RootMotionSources).ArrayMax);
    ConstructItems<TSharedPtr<FRootMotionSource,1>,TSharedPtr<FRootMotionSource,1>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 0x10,
               (TSharedPtr<FRootMotionSource,1> *)(pTVar2->AllocatorInstance).Data,iVar5);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(pTVar2->AllocatorInstance).Data,
             (this->PendingAddRootMotionSources).ArrayNum);
  piVar3 = &(this->PendingAddRootMotionSources).ArrayMax;
  (this->PendingAddRootMotionSources).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  iVar5 = (this->RootMotionSources).ArrayNum;
  if (1 < iVar5) {
    AlgoImpl::
    StableSortInternal<TSharedPtr<FRootMotionSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRootMotionSource,1>,_FRootMotionSourceGroup::PrepareRootMotion_::__l6::<lambda_1>_>_>
              ((TSharedPtr<FRootMotionSource,1> *)(pTVar1->AllocatorInstance).Data,iVar5,
               local_res8[0],(<lambda_1> *)local_158);
  }
  this->bHasAdditiveSources = '\0';
  fVar10 = __real_ff7fc99e;
  fVar9 = __real_bf800000;
  fVar8 = __real_3f000000;
  fVar7 = __real_38d1b717;
  this->bHasOverrideSourcesWithIgnoreZAccumulate = '\0';
  this->bHasOverrideSources = '\0';
  (this->LastAccumulatedSettings).Flags = '\0';
  iVar5 = (this->RootMotionSources).ArrayNum;
  pFVar17 = (pTVar1->AllocatorInstance).Data;
  pFVar18 = pFVar17 + (longlong)iVar5 * 0x10;
  do {
    while( true ) {
      if ((this->RootMotionSources).ArrayNum != iVar5) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      pTVar11 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
      if (pFVar17 == pFVar18) {
        return;
      }
      lVar15 = *(longlong *)pFVar17;
      if (lVar15 != 0) break;
LAB_147bf7f88:
      pFVar17 = pFVar17 + 0x10;
    }
    if (((*(byte *)(lVar15 + 0x24) & 1) == 0) || (param_4)) {
      fVar20 = param_1;
      if (*(char *)(lVar15 + 0x28) != '\0') {
        if ((lVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar15 = *(longlong *)pFVar17;
        if ((lVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar19 = *(float *)(lVar15 + 0x1c) - *(float *)(*(longlong *)pFVar17 + 0x18);
        if (0.0 < fVar19) {
          fVar19 = fVar19 * fVar8;
          if (fVar8 <= fVar19) {
            fVar19 = fVar8;
          }
          fVar20 = fVar19 + param_1;
          if (6 < (byte)LogRootMotion._0_1_) {
            if ((*(longlong *)pFVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_120);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
            if (local_120[0] != (void *)0x0) {
              FMemory::Free(local_120[0]);
            }
          }
        }
      }
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar19 = *(float *)(*(longlong *)pFVar17 + 0x18);
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((fVar19 == 0.0) && (fVar10 != *(float *)(*(longlong *)pFVar17 + 0x14))) {
        fVar19 = fVar9;
        if (param_2->field_0x168 == '\x02') {
          cVar13 = (**(code **)(*(longlong *)&param_3->field_0x198 + 0x38))(&param_3->field_0x198);
          if (((cVar13 != '\0') &&
              (lVar15 = (**(code **)(*(longlong *)&param_3->field_0x198 + 0x28))
                                  (&param_3->field_0x198), lVar15 != 0)) &&
             (param_2->bClientUpdating == '\0')) {
            fVar19 = *(float *)(lVar15 + 0xc);
          }
        }
        else if (((param_2->field_0x168 == '\x03') &&
                 (cVar13 = (**(code **)(*(longlong *)&param_3->field_0x198 + 0x40))
                                     (&param_3->field_0x198), cVar13 != '\0')) &&
                (lVar15 = (**(code **)(*(longlong *)&param_3->field_0x198 + 0x30))
                                    (&param_3->field_0x198), lVar15 != 0)) {
          fVar19 = *(float *)(lVar15 + 0x98) - param_1;
        }
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((0.0 <= fVar19) && (fVar19 < *(float *)(*(longlong *)pFVar17 + 0x14))) {
          fVar19 = fVar19 + fVar20;
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = *(longlong *)pFVar17;
          if (*(float *)(lVar15 + 0x14) <= fVar19 && fVar19 != *(float *)(lVar15 + 0x14)) {
            if ((lVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar20 = fVar19 - *(float *)(*(longlong *)pFVar17 + 0x14);
            if (6 < (byte)LogRootMotion._0_1_) {
              if ((*(longlong *)pFVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_100);
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              pvVar16 = local_100[0];
              goto LAB_147bf7b38;
            }
          }
          else {
            fVar20 = 0.0;
            if (6 < (byte)LogRootMotion._0_1_) {
              if ((lVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_110);
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              pvVar16 = local_110[0];
LAB_147bf7b38:
              if (pvVar16 != (void *)0x0) {
                FMemory::Free(pvVar16);
              }
            }
          }
        }
      }
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      cVar13 = (**(code **)(**(longlong **)pFVar17 + 8))();
      if (cVar13 != '\0') {
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(byte *)(*(longlong *)pFVar17 + 0x25) & 2) == 0) {
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar19 = *(float *)(*(longlong *)pFVar17 + 0x20);
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (fVar19 <= fVar20 + *(float *)(*(longlong *)pFVar17 + 0x18)) {
            if ((*(longlong *)pFVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar20 = (fVar19 - *(float *)(*(longlong *)pFVar17 + 0x18)) + fVar7;
            if (6 < (byte)LogRootMotion._0_1_) {
              if ((*(longlong *)pFVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_f0);
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              if (local_f0[0] != (void *)0x0) {
                FMemory::Free(local_f0[0]);
              }
            }
          }
        }
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(*(longlong *)pFVar17 + 0x29) = 0;
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(**(longlong **)pFVar17 + 0x48))
                (*(longlong **)pFVar17,fVar20,param_1,param_2,param_3);
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->LastAccumulatedSettings).Flags =
           (this->LastAccumulatedSettings).Flags | *(byte *)(*(longlong *)pFVar17 + 0x25);
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(byte *)(*(longlong *)pFVar17 + 0x24) = *(byte *)(*(longlong *)pFVar17 + 0x24) | 1;
      pTVar11 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
      bVar12 = IsInParallelGameThread();
      if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
        lVar15 = 0;
      }
      else {
        lVar15 = 4;
      }
      if (*(int *)((longlong)pTVar11->ShadowedValue + lVar15) == 1) {
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_e0);
        ::FString::PrintfImpl(&local_140,L"PrepareRootMotion Prepared RootMotionSource(%s)");
        if (local_e0[0] != (void *)0x0) {
          FMemory::Free(local_e0[0]);
        }
        RootMotionSourceDebug::PrintOnScreen(param_2,&local_140);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(*(longlong *)pFVar17 + 0x28) = 0;
    }
    else {
      bVar12 = IsInParallelGameThread();
      if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
        lVar15 = 0;
      }
      else {
        lVar15 = 4;
      }
      if (*(int *)((longlong)pTVar11->ShadowedValue + lVar15) == 1) {
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(**(longlong **)pFVar17 + 0x60))(*(longlong **)pFVar17,local_130);
        ::FString::PrintfImpl(&local_150,L"PrepareRootMotion AlreadyPrepared RootMotionSource(%s)");
        if (local_130[0] != (void *)0x0) {
          FMemory::Free(local_130[0]);
        }
        RootMotionSourceDebug::PrintOnScreen(param_2,&local_150);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)(*(longlong *)pFVar17 + 0x26) != '\x01') {
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)(*(longlong *)pFVar17 + 0x26) == '\0') {
        this->bHasOverrideSources = '\x01';
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(byte *)(*(longlong *)pFVar17 + 0x25) & 4) != 0) {
          this->bHasOverrideSourcesWithIgnoreZAccumulate = '\x01';
        }
      }
      goto LAB_147bf7f88;
    }
    this->bHasAdditiveSources = '\x01';
    pFVar17 = pFVar17 + 0x10;
  } while( true );
}

// RemoveRootMotionSource @ 147bfd5c0

void __thiscall
FRootMotionSourceGroup::RemoveRootMotionSource(FRootMotionSourceGroup *this,FName param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (FName)0x0) {
    pFVar4 = (this->RootMotionSources).AllocatorInstance.Data;
    iVar1 = (this->RootMotionSources).ArrayNum;
    pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->RootMotionSources).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar3) break;
      lVar2 = *(longlong *)pFVar4;
      if ((lVar2 != 0) && (*(FName *)(lVar2 + 0xc) == param_1)) {
        *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 4;
      }
      pFVar4 = pFVar4 + 0x10;
    }
    iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
    pFVar4 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar3) break;
      lVar2 = *(longlong *)pFVar4;
      if ((lVar2 != 0) && (*(FName *)(lVar2 + 0xc) == param_1)) {
        *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 4;
      }
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return;
}

// RemoveRootMotionSourceByID @ 147bfd690

void __thiscall
FRootMotionSourceGroup::RemoveRootMotionSourceByID(FRootMotionSourceGroup *this,ushort param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != 0) {
    pFVar3 = (this->RootMotionSources).AllocatorInstance.Data;
    iVar1 = (this->RootMotionSources).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->RootMotionSources).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar4) break;
      lVar2 = *(longlong *)pFVar3;
      if ((lVar2 != 0) && (*(ushort *)(lVar2 + 10) == param_1)) {
        *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 4;
      }
      pFVar3 = pFVar3 + 0x10;
    }
    iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
    pFVar3 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->PendingAddRootMotionSources).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar4) break;
      lVar2 = *(longlong *)pFVar3;
      if ((lVar2 != 0) && (*(ushort *)(lVar2 + 10) == param_1)) {
        *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 4;
      }
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// SetPendingRootMotionSourceMinStartTimes @ 147c01570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::SetPendingRootMotionSourceMinStartTimes
          (FRootMotionSourceGroup *this,float param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res8 [8];
  void *local_48 [8];
  
  iVar2 = (this->PendingAddRootMotionSources).ArrayNum;
  pFVar6 = (this->PendingAddRootMotionSources).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  do {
    if ((this->PendingAddRootMotionSources).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    lVar3 = *(longlong *)pFVar6;
    if (lVar3 != 0) {
      fVar1 = *(float *)(lVar3 + 0x14);
      fVar8 = fVar1;
      if (fVar1 <= param_1) {
        fVar8 = param_1;
      }
      *(float *)(lVar3 + 0x14) = fVar8;
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((fVar1 != *(float *)(*(longlong *)pFVar6 + 0x14)) && (6 < (byte)LogRootMotion._0_1_)) {
        if ((*(longlong *)pFVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)pFVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(**(longlong **)pFVar6 + 0x60))(*(longlong **)pFVar6,local_48);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// UpdateStateFrom @ 147c0b390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRootMotionSourceGroup::UpdateStateFrom
          (FRootMotionSourceGroup *this,FRootMotionSourceGroup *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TSharedPtr<FRootMotionSource,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res8 [8];
  FRootMotionSourceGroup *local_res10;
  undefined1 local_res18;
  undefined1 local_res20 [8];
  FRootMotionSourceGroup *local_c0;
  FRootMotionSourceGroup *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  void *local_a0 [2];
  void *local_90 [2];
  void *local_80 [2];
  void *local_70 [2];
  void *local_60 [4];
  
  this->field_0x28 = this->field_0x28 ^ (this->field_0x28 ^ param_1->field_0x28) & 8;
  uVar8 = *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x8;
  *(undefined8 *)&this->LastPreAdditiveVelocity = *(undefined8 *)&param_1->LastPreAdditiveVelocity;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x8 = uVar8;
  *(undefined8 *)&(this->LastPreAdditiveVelocity).field_0x10 =
       *(undefined8 *)&(param_1->LastPreAdditiveVelocity).field_0x10;
  iVar1 = (this->PendingAddRootMotionSources).ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  local_c0 = this;
  local_b8 = param_1;
  if (iVar1 != 0) {
    pTVar4 = (TSharedPtr<FRootMotionSource,1> *)
             (this->PendingAddRootMotionSources).AllocatorInstance.Data;
    iVar20 = 0;
    bVar10 = `FRootMotionSourceGroup::UpdateStateFrom'::__l2::<lambda_1>::operator()
                       (&local_c0,pTVar4);
    bVar10 = !bVar10;
    iVar15 = 0;
    do {
      iVar9 = iVar15;
      do {
        iVar9 = iVar9 + 1;
        if (iVar1 <= iVar9) break;
        bVar11 = `FRootMotionSourceGroup::UpdateStateFrom'::__l2::<lambda_1>::operator()
                           (&local_c0,pTVar4 + iVar9);
      } while (bVar10 == !bVar11);
      iVar22 = iVar9 - iVar15;
      if (bVar10 == false) {
        DestructItems<TSharedPtr<FRootMotionSource,1>,int>(pTVar4 + iVar15,iVar22);
      }
      else {
        if (iVar20 != iVar15) {
          memmove(pTVar4 + iVar20,pTVar4 + iVar15,(longlong)iVar22 << 4);
        }
        iVar20 = iVar20 + iVar22;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar15 = iVar9;
    } while (iVar9 < iVar1);
    (this->PendingAddRootMotionSources).ArrayNum = iVar20;
  }
  uVar2 = (local_res10->RootMotionSources).ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  pFVar24 = (local_res10->RootMotionSources).AllocatorInstance.Data;
  pFVar17 = pFVar24 + uVar14 * 0x10;
  uVar19 = local_res18;
  do {
    if ((local_res10->RootMotionSources).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar24 == pFVar17) {
      return;
    }
    if ((*(longlong *)pFVar24 != 0) && (*(short *)(*(longlong *)pFVar24 + 10) != 0)) {
      uVar3 = (this->RootMotionSources).ArrayNum;
      uVar14 = (ulonglong)(int)uVar3;
      pFVar21 = (this->RootMotionSources).AllocatorInstance.Data;
      pFVar18 = pFVar21 + uVar14 * 0x10;
      while( true ) {
        if ((this->RootMotionSources).ArrayNum != (int)uVar14) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FRootMotionSource,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar21 == pFVar18) break;
        lVar23 = *(longlong *)pFVar21;
        if (lVar23 == 0) {
LAB_147c0baae:
          pFVar21 = pFVar21 + 0x10;
          uVar14 = (ulonglong)uVar3;
          uVar19 = local_res18;
        }
        else {
          if ((*(longlong *)pFVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(short *)(lVar23 + 10) != *(short *)(*(longlong *)pFVar24 + 10)) goto LAB_147c0baae;
          if ((*(longlong *)pFVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          cVar12 = (**(code **)(**(longlong **)pFVar21 + 0x18))
                             (*(longlong **)pFVar21,*(longlong *)pFVar24);
          if (cVar12 == '\0') {
            local_b0 = pFVar21;
            local_a8 = pFVar24;
            `FRootMotionSourceGroup::UpdateStateFrom'::__l19::<lambda_2>::operator()(&local_b0);
            if (2 < (byte)LogRootMotion._0_1_) {
              if ((*(longlong *)pFVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (**(code **)(**(longlong **)pFVar24 + 0x60))(*(longlong **)pFVar24,local_a0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              if (local_a0[0] != (void *)0x0) {
                FMemory::Free(local_a0[0]);
              }
            }
            uVar16 = 0;
            if (0 < (this->RootMotionSources).ArrayNum) {
              lVar23 = 0;
              do {
                uVar13 = 0;
                if ((int)uVar16 < (this->RootMotionSources).ArrayNum) {
                  uVar13 = ~uVar16 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (this->RootMotionSources).AllocatorInstance.Data;
                plVar6 = *(longlong **)(pFVar5 + lVar23);
                if ((plVar6 != (longlong *)0x0) && (2 < (byte)LogRootMotion._0_1_)) {
                  (**(code **)(*plVar6 + 0x18))(plVar6,*(longlong *)pFVar24);
                  if ((*(longlong *)(pFVar5 + lVar23) == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  (**(code **)(**(longlong **)(pFVar5 + lVar23) + 0x60))
                            (*(longlong **)(pFVar5 + lVar23),local_90);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
                  if (local_90[0] != (void *)0x0) {
                    FMemory::Free(local_90[0]);
                  }
                }
                uVar16 = uVar16 + 1;
                lVar23 = lVar23 + 0x10;
              } while ((int)uVar16 < (this->RootMotionSources).ArrayNum);
            }
            if (2 < (byte)LogRootMotion._0_1_) {
              if ((*(longlong *)pFVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (**(code **)(**(longlong **)pFVar24 + 0x60))(*(longlong **)pFVar24,local_80);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              if (local_80[0] != (void *)0x0) {
                FMemory::Free(local_80[0]);
              }
            }
            uVar16 = 0;
            if ((this->RootMotionSources).ArrayNum < 1) goto LAB_147c0baae;
            lVar23 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar16 < (this->RootMotionSources).ArrayNum) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar5 = (this->RootMotionSources).AllocatorInstance.Data;
              if ((*(longlong *)(pFVar5 + lVar23) != 0) && (2 < (byte)LogRootMotion._0_1_)) {
                if ((*(longlong *)pFVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((*(longlong *)(pFVar5 + lVar23) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                (**(code **)(**(longlong **)(pFVar5 + lVar23) + 0x60))
                          (*(longlong **)(pFVar5 + lVar23),local_70);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
                if (local_70[0] != (void *)0x0) {
                  FMemory::Free(local_70[0]);
                }
              }
              uVar16 = uVar16 + 1;
              lVar23 = lVar23 + 0x10;
            } while ((int)uVar16 < (this->RootMotionSources).ArrayNum);
            pFVar21 = pFVar21 + 0x10;
            uVar14 = (ulonglong)uVar3;
            uVar19 = local_res18;
          }
          else {
            if ((*(longlong *)pFVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            cVar12 = (**(code **)(**(longlong **)pFVar21 + 0x28))
                               (*(longlong **)pFVar21,*(longlong *)pFVar24,uVar19);
            if (cVar12 == '\0') {
              if ((*(longlong *)pFVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(byte *)(*(longlong *)pFVar21 + 0x24) = *(byte *)(*(longlong *)pFVar21 + 0x24) | 4;
              if (2 < (byte)LogRootMotion._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
              }
              goto LAB_147c0baae;
            }
            if ((*(longlong *)pFVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(byte *)(*(longlong *)pFVar21 + 0x24) = *(byte *)(*(longlong *)pFVar21 + 0x24) & 0xfe;
            if ((byte)LogRootMotion._0_1_ < 7) goto LAB_147c0baae;
            if ((*(longlong *)pFVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (**(code **)(**(longlong **)pFVar21 + 0x60))(*(longlong **)pFVar21,local_60);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
            if (local_60[0] == (void *)0x0) goto LAB_147c0baae;
            FMemory::Free(local_60[0]);
            uVar14 = (ulonglong)uVar3;
            pFVar21 = pFVar21 + 0x10;
            uVar19 = local_res18;
          }
        }
      }
    }
    pFVar24 = pFVar24 + 0x10;
    uVar14 = (ulonglong)uVar2;
  } while( true );
}

// operator() @ 15051a380

bool __thiscall `FRootMotionSourceGroup::UpdateStateFrom'::__l19::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  void *local_38 [2];
  void *local_28 [2];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4320237689568757678>);
  if (bVar4) {
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((*plVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 0x60))(plVar1,local_28);
    if ((**(longlong **)this == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 0x60))(plVar1,local_38);
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4320237689568757678>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051a4bf;
    }
  }
  bVar4 = false;
LAB_15051a4bf:
  if ((bVar5) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  if ((bVar3) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

