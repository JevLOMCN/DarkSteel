// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FVolatileProperty @ 1462998b0

FVolatileProperty * __thiscall
UE::MovieScene::FVolatileProperty::FVolatileProperty
          (FVolatileProperty *this,FVolatileProperty *param_1)

{
  FFieldClass *pFVar1;
  
  this->RootContainer = param_1->RootContainer;
  (this->PropertyPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPath).Data.AllocatorInstance.Data =
       (param_1->PropertyPath).Data.AllocatorInstance.Data;
  (param_1->PropertyPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPath).Data.ArrayNum = (param_1->PropertyPath).Data.ArrayNum;
  (this->PropertyPath).Data.ArrayMax = (param_1->PropertyPath).Data.ArrayMax;
  (param_1->PropertyPath).Data.ArrayNum = 0;
  (param_1->PropertyPath).Data.ArrayMax = 0;
  (this->PropertySteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySteps).AllocatorInstance.Data = (param_1->PropertySteps).AllocatorInstance.Data;
  (param_1->PropertySteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySteps).ArrayNum = (param_1->PropertySteps).ArrayNum;
  (this->PropertySteps).ArrayMax = (param_1->PropertySteps).ArrayMax;
  (param_1->PropertySteps).ArrayNum = 0;
  (param_1->PropertySteps).ArrayMax = 0;
  (this->LeafProperty).Owner.WeakPtr = (param_1->LeafProperty).Owner.WeakPtr;
  *(undefined8 *)&(this->LeafProperty).Field = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x8 = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x10 = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x18 = 0;
  pFVar1 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&(param_1->LeafProperty).Field,pFVar1,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)&(this->LeafProperty).Field,(FFieldPath *)&(param_1->LeafProperty).Field)
  ;
  this->LeafContainerStepIndex = param_1->LeafContainerStepIndex;
  return this;
}

// FVolatileProperty @ 146299980

FVolatileProperty * __thiscall
UE::MovieScene::FVolatileProperty::FVolatileProperty
          (FVolatileProperty *this,FVolatileProperty *param_1)

{
  TArray<UE::MovieScene::FVolatilePropertyStep,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FFieldClass *pFVar5;
  
  this->RootContainer = param_1->RootContainer;
  ::FString::FString(&this->PropertyPath,&param_1->PropertyPath);
  pTVar1 = &this->PropertySteps;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PropertySteps).ArrayMax;
  iVar3 = (param_1->PropertySteps).ArrayNum;
  pFVar4 = (param_1->PropertySteps).AllocatorInstance.Data;
  (this->PropertySteps).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::MovieScene::FVolatilePropertyStep,UE::MovieScene::FVolatilePropertyStep,int>
              ((pTVar1->AllocatorInstance).Data,(FVolatilePropertyStep *)pFVar4,iVar3);
  }
  (this->LeafProperty).Owner.WeakPtr = (param_1->LeafProperty).Owner.WeakPtr;
  *(undefined8 *)&(this->LeafProperty).Field = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x8 = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x10 = 0;
  *(undefined8 *)&(this->LeafProperty).Field.field_0x18 = 0;
  pFVar5 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&(param_1->LeafProperty).Field,pFVar5,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)&(this->LeafProperty).Field,(FFieldPath *)&(param_1->LeafProperty).Field)
  ;
  this->LeafContainerStepIndex = param_1->LeafContainerStepIndex;
  return this;
}

// ResolvePropertySteps @ 1462b9fa0

void * __thiscall
UE::MovieScene::FVolatileProperty::ResolvePropertySteps(FVolatileProperty *this,bool param_1)

{
  FString *this_00;
  TArray<UE::MovieScene::FVolatilePropertyStep,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FFieldClass *pFVar7;
  bool local_res18 [8];
  FPropertyResolutionState local_d8;
  undefined1 local_b8 [80];
  int local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_res18[0] = false;
  pvVar6 = ResolvePropertyStepsImpl(this,param_1,local_res18);
  if (local_res18[0] == false) {
    return pvVar6;
  }
  if (this->RootContainer == (UObject *)0x0) {
    return pvVar6;
  }
  iStack_50 = (this->PropertyPath).Data.ArrayNum;
  if (iStack_50 < 2) {
    return pvVar6;
  }
  local_58 = (this->PropertyPath).Data.AllocatorInstance.Data;
  iStack_50 = iStack_50 + -1;
  this_00 = &this->PropertyPath;
  local_38._12_4_ = uStack_4c;
  local_38.Size = iStack_50;
  local_d8.PropertySteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.PropertySteps.ArrayNum = 0;
  local_d8.PropertySteps.ArrayMax = 0;
  local_d8.bIsVolatile = false;
  local_d8.bIsValid = true;
  local_38.DataPtr = (wchar_t *)local_58;
  ResolveProperty(this->RootContainer,&local_38,&local_d8);
  if (local_d8.bIsValid == false) {
    ::FString::Reset(this_00,0);
    goto LAB_1462ba21f;
  }
  local_48 = (this_00->Data).AllocatorInstance.Data;
  iVar5 = (this->PropertyPath).Data.ArrayNum;
  iStack_40 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_40 = 0;
  }
  local_28._12_4_ = uStack_3c;
  local_28.Size = iStack_40;
  local_28.DataPtr = (wchar_t *)local_48;
  BuildVolatileProperty((FVolatileProperty *)local_b8,this->RootContainer,&local_28,&local_d8);
  if (((UObject *)local_b8._0_8_ != this->RootContainer) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7738840367931326855>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                         ,0x187,"NewVolatileProperty.RootContainer == RootContainer"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  iVar5 = (this->PropertyPath).Data.ArrayNum;
  if (local_b8._16_4_ == iVar5) {
    if (1 < (int)local_b8._16_4_) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_b8._8_8_,(wchar_t *)(this_00->Data).AllocatorInstance.Data
                        );
      bVar4 = iVar5 == 0;
      goto LAB_1462ba0cf;
    }
  }
  else {
    bVar4 = iVar5 + local_b8._16_4_ == 1;
LAB_1462ba0cf:
    if ((!bVar4) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7738840367931326856>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                           ,0x188,"NewVolatileProperty.PropertyPath == PropertyPath"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  this->RootContainer = (UObject *)local_b8._0_8_;
  if (this_00 != (FString *)(local_b8 + 8)) {
    pFVar2 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_b8._8_8_;
    (this->PropertyPath).Data.ArrayNum = local_b8._16_4_;
    (this->PropertyPath).Data.ArrayMax = local_b8._20_4_;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._8_8_ = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->PropertySteps;
  if (pTVar1 != (TArray<UE::MovieScene::FVolatilePropertyStep,TSizedDefaultAllocator<32>_> *)
                (local_b8 + 0x18)) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)local_b8._24_8_;
    (this->PropertySteps).ArrayNum = local_b8._32_4_;
    (this->PropertySteps).ArrayMax = local_b8._36_4_;
    local_b8._32_4_ = 0;
    local_b8._36_4_ = 0;
    local_b8._24_8_ = (FScriptContainerElement *)0x0;
  }
  (this->LeafProperty).Owner.WeakPtr = (FWeakObjectPtr)local_b8._40_8_;
  pFVar7 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)(local_b8 + 0x30),pFVar7,(UStruct *)0x0);
  FFieldPath::operator=((FFieldPath *)&(this->LeafProperty).Field,(FFieldPath *)(local_b8 + 0x30));
  this->LeafContainerStepIndex = local_68;
  local_res18[0] = false;
  pvVar6 = ResolvePropertyStepsImpl(this,param_1,local_res18);
  if ((local_res18[0] != false) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7738840367931326862>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                         ,0x18e,"!bNeedsRecaching"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  if ((void *)local_b8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._64_8_);
  }
  if ((FScriptContainerElement *)local_b8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._24_8_);
  }
  if ((FScriptContainerElement *)local_b8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
LAB_1462ba21f:
  if (local_d8.PropertySteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.PropertySteps.AllocatorInstance.Data);
  }
  return pvVar6;
}

// ResolvePropertyStepsImpl @ 1462ba260

/* WARNING: Removing unreachable block (ram,0x0001462ba387) */
/* WARNING: Removing unreachable block (ram,0x0001462ba3ac) */
/* WARNING: Removing unreachable block (ram,0x0001462ba3c9) */
/* WARNING: Removing unreachable block (ram,0x0001462ba3ee) */
/* WARNING: Removing unreachable block (ram,0x0001462ba337) */
/* WARNING: Removing unreachable block (ram,0x0001462ba35c) */

void * __thiscall
UE::MovieScene::FVolatileProperty::ResolvePropertyStepsImpl
          (FVolatileProperty *this,bool param_1,bool *param_2)

{
  char cVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  uint uVar10;
  FWeakObjectPtr *this_00;
  longlong lVar11;
  longlong lVar12;
  
  pUVar9 = this->RootContainer;
  if (pUVar9 == (UObject *)0x0) {
    return (void *)0x0;
  }
  if (param_1) {
    iVar5 = this->LeafContainerStepIndex + 1;
  }
  else {
    iVar5 = (this->PropertySteps).ArrayNum;
  }
  uVar10 = 0;
  if (0 < iVar5) {
    lVar12 = 0;
    lVar11 = 0;
    while( true ) {
      uVar6 = 0;
      if ((int)uVar10 < (this->PropertySteps).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar3)();
        return pvVar7;
      }
      this_00 = (FWeakObjectPtr *)((this->PropertySteps).AllocatorInstance.Data + lVar11);
      cVar1 = (char)this_00[1].ObjectIndex;
      if (cVar1 != '\0') break;
      pUVar9 = (UObject *)((longlong)&pUVar9->field_0x0 + (ulonglong)(uint)this_00->ObjectIndex);
LAB_1462ba3f4:
      if (pUVar9 == (UObject *)0x0) {
        return (void *)0x0;
      }
      if (*param_2 != false) {
        return pUVar9;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0xc;
      if (iVar5 <= lVar12) {
        return pUVar9;
      }
    }
    if (cVar1 == '\x01') {
      if ((-1 < this_00->ObjectIndex) && (this_00->ObjectIndex < *(int *)&pUVar9->field_0x8)) {
        pUVar9 = *(UObject **)pUVar9;
        goto LAB_1462ba3f4;
      }
    }
    else if (cVar1 == '\x02') {
      pUVar2 = *(UObject **)pUVar9;
      pUVar8 = FWeakObjectPtr::Get(this_00);
      if (pUVar8 == (UObject *)0x0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7738840367931326826>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                           ,0x16a,"CheckStructType");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar7 = (void *)(*pcVar3)();
          return pvVar7;
        }
      }
      else if (pUVar8 == pUVar2) {
        pUVar9 = *(UObject **)&pUVar9->field_0x8;
        goto LAB_1462ba3f4;
      }
      *param_2 = true;
    }
    pUVar9 = (UObject *)0x0;
  }
  return pUVar9;
}

