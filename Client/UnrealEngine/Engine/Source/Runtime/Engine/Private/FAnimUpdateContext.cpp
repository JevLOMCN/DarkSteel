// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14741fd80

UScriptStruct * __cdecl FAnimUpdateContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimUpdateContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimUpdateContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimUpdateContext,(UObject *)pUVar1,
                         L"AnimUpdateContext");
  }
  return Z_Registration_Info_UScriptStruct_FAnimUpdateContext.OuterSingleton;
}

// GetContext @ 147454820

FAnimationUpdateContext * __thiscall FAnimUpdateContext::GetContext(FAnimUpdateContext *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FAnimationUpdateContext *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_147454851;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    puVar2 = *(undefined8 **)this;
    pTVar6 = pTVar1;
    if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 1) == 3)) {
      pFVar3 = (FAnimationUpdateContext *)*puVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return pFVar3;
    }
  }
LAB_147454851:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (FAnimationUpdateContext *)0x0;
}

// FAnimUpdateContext @ 1474b26e0

FAnimUpdateContext * __thiscall
FAnimUpdateContext::FAnimUpdateContext
          (FAnimUpdateContext *this,TWeakPtr<FAnimExecutionContext::FData,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FData *pFVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  FAnimUpdateContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  
  pFVar3 = param_1->Object;
  pTVar10 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    *(FData **)this = pFVar3;
    *(undefined8 *)&this->field_0x8 = 0;
  }
  else {
    LOCK();
    pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
    UNLOCK();
    *(FData **)this = pFVar3;
    *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar10;
    LOCK();
    pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((((param_1->Object == (FData *)0x0) ||
       (pTVar10 = (param_1->WeakReferenceCount).ReferenceController,
       pTVar10 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar10->SharedReferenceCount < 1))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("InData.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimExecutionContext.h"
                            ,0xa9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FAnimUpdateContext *)(*pcVar4)();
    return pFVar7;
  }
  pTVar10 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1474b27a5;
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar5 = aVar2 == aVar6;
      if (bVar5) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar5);
    pTVar8 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar9 = pTVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_1474b27cb;
  }
LAB_1474b27a5:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar10 = pTVar9;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FAnimUpdateContext *)(*pcVar4)();
    return pFVar7;
  }
LAB_1474b27cb:
  aVar2 = pTVar8->SharedReferenceCount;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((aVar2 != (atomic<int>)0x3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Pin()->ContextType == InternalContextTypeId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimExecutionContext.h"
                         ,0xaa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FAnimUpdateContext *)(*pcVar4)();
    return pFVar7;
  }
  pTVar10 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  return this;
}

