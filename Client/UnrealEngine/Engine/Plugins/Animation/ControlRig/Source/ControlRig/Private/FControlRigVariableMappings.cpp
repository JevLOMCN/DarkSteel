// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 56

// ~FControlRigVariableMappings @ 14a225a70

void __thiscall
FControlRigVariableMappings::~FControlRigVariableMappings(FControlRigVariableMappings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->CurveInputToControlIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveInputToControlIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveInputToControlIndex);
  pFVar2 = (this->OutputCurveMappings).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputCurveMappings).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DestPropertyNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourcePropertiesMemory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Variables).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->CustomUpdateFunctions).AllocatorInstance.Data,
             (this->CustomUpdateFunctions).ArrayNum);
  pFVar2 = (this->CustomUpdateFunctions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>
            ((TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
             (this->UpdateFunctions).AllocatorInstance.Data,(this->UpdateFunctions).ArrayNum);
  pFVar2 = (this->UpdateFunctions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DestProperties).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourceProperties).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14a2292e0

FControlRigVariableMappings * __thiscall
FControlRigVariableMappings::operator=
          (FControlRigVariableMappings *this,FControlRigVariableMappings *param_1)

{
  TArray<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_char_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *pTVar7;
  TFunction<void___cdecl(void)> *pTVar8;
  FScriptContainerElement *pFVar9;
  
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->SourceProperties,&param_1->SourceProperties);
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestProperties,&param_1->DestProperties);
  pTVar1 = &this->UpdateFunctions;
  if (pTVar1 != &param_1->UpdateFunctions) {
    DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>
              ((TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
               (pTVar1->AllocatorInstance).Data,(this->UpdateFunctions).ArrayNum);
    iVar6 = (param_1->UpdateFunctions).ArrayNum;
    piVar2 = &(this->UpdateFunctions).ArrayMax;
    pTVar7 = (TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
             (param_1->UpdateFunctions).AllocatorInstance.Data;
    (this->UpdateFunctions).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      ConstructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>
                ((pTVar1->AllocatorInstance).Data,pTVar7,iVar6);
    }
  }
  pTVar3 = &this->CustomUpdateFunctions;
  if (pTVar3 != &param_1->CustomUpdateFunctions) {
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)(pTVar3->AllocatorInstance).Data,
               (this->CustomUpdateFunctions).ArrayNum);
    iVar6 = (param_1->CustomUpdateFunctions).ArrayNum;
    piVar2 = &(this->CustomUpdateFunctions).ArrayMax;
    pTVar8 = (TFunction<void___cdecl(void)> *)
             (param_1->CustomUpdateFunctions).AllocatorInstance.Data;
    (this->CustomUpdateFunctions).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      ConstructItems<TFunction<void___cdecl(void)>,TFunction<void___cdecl(void)>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar8,iVar6);
    }
  }
  pTVar4 = &this->Variables;
  if (pTVar4 != &param_1->Variables) {
    iVar6 = (param_1->Variables).ArrayNum;
    piVar2 = &(this->Variables).ArrayMax;
    pFVar9 = (param_1->Variables).AllocatorInstance.Data;
    (this->Variables).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar6 * 0x30);
      }
    }
  }
  pTVar5 = &this->SourcePropertiesMemory;
  if (pTVar5 != &param_1->SourcePropertiesMemory) {
    iVar6 = (param_1->SourcePropertiesMemory).ArrayNum;
    piVar2 = &(this->SourcePropertiesMemory).ArrayMax;
    pFVar9 = (param_1->SourcePropertiesMemory).AllocatorInstance.Data;
    (this->SourcePropertiesMemory).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar6 << 3);
      }
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestPropertyNames,&param_1->DestPropertyNames);
  UE::Anim::
  TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
  ::operator=(&this->InputCurveMappings,&param_1->InputCurveMappings);
  UE::Anim::
  TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
  ::operator=(&this->OutputCurveMappings,&param_1->OutputCurveMappings);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->CurveInputToControlIndex,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->CurveInputToControlIndex);
  return this;
}

// operator() @ 14a3bf4c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Src;
  
  _Src = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = *(void **)(*(longlong *)(lVar2 + 0x40) + 0x28 + (longlong)(int)uVar1 * 0x30);
  if (_Dst != _Src) {
    if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
    }
    else {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
    }
  }
  return;
}

// operator() @ 14a3bf5b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Src;
  
  _Src = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = *(void **)(*(longlong *)(lVar2 + 0x40) + 0x28 + (longlong)(int)uVar1 * 0x30);
  if (_Dst != _Src) {
    if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
    }
    else {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
    }
  }
  return;
}

// operator() @ 14a3bf6a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Src;
  
  _Src = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = *(void **)(*(longlong *)(lVar2 + 0x40) + 0x28 + (longlong)(int)uVar1 * 0x30);
  if (_Dst != _Src) {
    if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
    }
    else {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
    }
  }
  return;
}

// operator() @ 14a3bf790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Src;
  
  _Src = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = *(void **)(*(longlong *)(lVar2 + 0x40) + 0x28 + (longlong)(int)uVar1 * 0x30);
  if (_Dst != _Src) {
    if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
    }
    else {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
    }
  }
  return;
}

// operator() @ 14a3c00e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool *pbVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  pbVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<bool>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),pbVar6);
  return;
}

// operator() @ 14a3c0570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  byte *pbVar3;
  FRigControlValue local_98;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pbVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_98.FloatStorage.Float02 = 0.0;
    local_98.FloatStorage.Float03 = 0.0;
    local_98.FloatStorage._1_7_ = 0;
    local_98.FloatStorage.Float00._0_1_ = *pbVar3;
    local_98.FloatStorage.Float10 = 0.0;
    local_98.FloatStorage.Float11 = 0.0;
    local_98.FloatStorage.Float12 = 0.0;
    local_98.FloatStorage.Float13 = 0.0;
    local_98.FloatStorage.bValid = true;
    local_98.FloatStorage._129_3_ = 0;
    local_98.FloatStorage.Float20 = 0.0;
    local_98.FloatStorage.Float21 = 0.0;
    local_98.FloatStorage.Float22 = 0.0;
    local_98.FloatStorage.Float23 = 0.0;
    local_98.FloatStorage.Float30 = 0.0;
    local_98.FloatStorage.Float31 = 0.0;
    local_98.FloatStorage.Float32 = 0.0;
    local_98.FloatStorage.Float33 = 0.0;
    local_98.FloatStorage.Float00_2 = 0.0;
    local_98.FloatStorage.Float01_2 = 0.0;
    local_98.FloatStorage.Float02_2 = 0.0;
    local_98.FloatStorage.Float03_2 = 0.0;
    local_98.FloatStorage.Float10_2 = 0.0;
    local_98.FloatStorage.Float11_2 = 0.0;
    local_98.FloatStorage.Float12_2 = 0.0;
    local_98.FloatStorage.Float13_2 = 0.0;
    local_98.FloatStorage.Float20_2 = 0.0;
    local_98.FloatStorage.Float21_2 = 0.0;
    local_98.FloatStorage.Float22_2 = 0.0;
    local_98.FloatStorage.Float23_2 = 0.0;
    local_98.FloatStorage.Float30_2 = 0.0;
    local_98.FloatStorage.Float31_2 = 0.0;
    local_98.FloatStorage.Float32_2 = 0.0;
    local_98.FloatStorage.Float33_2 = 0.0;
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_98,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c0680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>::operator()(void *this)

{
  FRigControlValue local_98;
  
  local_98.FloatStorage.Float02 = 0.0;
  local_98.FloatStorage.Float03 = 0.0;
  local_98.FloatStorage.Float10 = 0.0;
  local_98.FloatStorage.Float11 = 0.0;
  local_98.FloatStorage.Float12 = 0.0;
  local_98.FloatStorage.Float13 = 0.0;
  local_98.FloatStorage.Float20 = 0.0;
  local_98.FloatStorage.Float21 = 0.0;
  local_98.FloatStorage.Float22 = 0.0;
  local_98.FloatStorage.Float23 = 0.0;
  local_98.FloatStorage.Float30 = 0.0;
  local_98.FloatStorage.Float31 = 0.0;
  local_98.FloatStorage.Float32 = 0.0;
  local_98.FloatStorage.Float33 = 0.0;
  local_98.FloatStorage.Float00_2 = 0.0;
  local_98.FloatStorage.Float01_2 = 0.0;
  local_98.FloatStorage.Float02_2 = 0.0;
  local_98.FloatStorage.Float03_2 = 0.0;
  local_98.FloatStorage.bValid = true;
  local_98.FloatStorage._129_3_ = 0;
  local_98.FloatStorage.Float10_2 = 0.0;
  local_98.FloatStorage.Float11_2 = 0.0;
  local_98.FloatStorage.Float12_2 = 0.0;
  local_98.FloatStorage.Float13_2 = 0.0;
  local_98.FloatStorage.Float20_2 = 0.0;
  local_98.FloatStorage.Float21_2 = 0.0;
  local_98.FloatStorage.Float22_2 = 0.0;
  local_98.FloatStorage.Float23_2 = 0.0;
  local_98.FloatStorage.Float30_2 = 0.0;
  local_98.FloatStorage.Float31_2 = 0.0;
  local_98.FloatStorage.Float32_2 = 0.0;
  local_98.FloatStorage.Float33_2 = 0.0;
  local_98.FloatStorage._1_7_ = 0;
  local_98.FloatStorage.Float00._0_1_ = **(byte **)this;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_98,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c0a90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>::operator()(void *this)

{
  FRigControlValue local_98;
  
  local_98.FloatStorage.Float02 = 0.0;
  local_98.FloatStorage.Float03 = 0.0;
  local_98.FloatStorage.Float10 = 0.0;
  local_98.FloatStorage.Float11 = 0.0;
  local_98.FloatStorage.Float12 = 0.0;
  local_98.FloatStorage.Float13 = 0.0;
  local_98.FloatStorage.Float20 = 0.0;
  local_98.FloatStorage.Float21 = 0.0;
  local_98.FloatStorage.Float22 = 0.0;
  local_98.FloatStorage.Float23 = 0.0;
  local_98.FloatStorage.Float30 = 0.0;
  local_98.FloatStorage.Float31 = 0.0;
  local_98.FloatStorage.Float32 = 0.0;
  local_98.FloatStorage.Float33 = 0.0;
  local_98.FloatStorage.Float00_2 = 0.0;
  local_98.FloatStorage.Float01_2 = 0.0;
  local_98.FloatStorage.Float02_2 = 0.0;
  local_98.FloatStorage.Float03_2 = 0.0;
  local_98.FloatStorage.bValid = true;
  local_98.FloatStorage._129_3_ = 0;
  local_98.FloatStorage.Float10_2 = 0.0;
  local_98.FloatStorage.Float11_2 = 0.0;
  local_98.FloatStorage.Float12_2 = 0.0;
  local_98.FloatStorage.Float13_2 = 0.0;
  local_98.FloatStorage.Float20_2 = 0.0;
  local_98.FloatStorage.Float21_2 = 0.0;
  local_98.FloatStorage.Float22_2 = 0.0;
  local_98.FloatStorage.Float23_2 = 0.0;
  local_98.FloatStorage.Float30_2 = 0.0;
  local_98.FloatStorage.Float31_2 = 0.0;
  local_98.FloatStorage.Float32_2 = 0.0;
  local_98.FloatStorage.Float33_2 = 0.0;
  local_98.FloatStorage.Float01 = 0.0;
  local_98.FloatStorage.Float00 = (float)**(uint **)this;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_98,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c0b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  uint *puVar3;
  FRigControlValue local_98;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    puVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_98.FloatStorage.Float02 = 0.0;
    local_98.FloatStorage.Float03 = 0.0;
    local_98.FloatStorage.Float01 = 0.0;
    local_98.FloatStorage.Float00 = (float)*puVar3;
    local_98.FloatStorage.Float10 = 0.0;
    local_98.FloatStorage.Float11 = 0.0;
    local_98.FloatStorage.Float12 = 0.0;
    local_98.FloatStorage.Float13 = 0.0;
    local_98.FloatStorage.bValid = true;
    local_98.FloatStorage._129_3_ = 0;
    local_98.FloatStorage.Float20 = 0.0;
    local_98.FloatStorage.Float21 = 0.0;
    local_98.FloatStorage.Float22 = 0.0;
    local_98.FloatStorage.Float23 = 0.0;
    local_98.FloatStorage.Float30 = 0.0;
    local_98.FloatStorage.Float31 = 0.0;
    local_98.FloatStorage.Float32 = 0.0;
    local_98.FloatStorage.Float33 = 0.0;
    local_98.FloatStorage.Float00_2 = 0.0;
    local_98.FloatStorage.Float01_2 = 0.0;
    local_98.FloatStorage.Float02_2 = 0.0;
    local_98.FloatStorage.Float03_2 = 0.0;
    local_98.FloatStorage.Float10_2 = 0.0;
    local_98.FloatStorage.Float11_2 = 0.0;
    local_98.FloatStorage.Float12_2 = 0.0;
    local_98.FloatStorage.Float13_2 = 0.0;
    local_98.FloatStorage.Float20_2 = 0.0;
    local_98.FloatStorage.Float21_2 = 0.0;
    local_98.FloatStorage.Float22_2 = 0.0;
    local_98.FloatStorage.Float23_2 = 0.0;
    local_98.FloatStorage.Float30_2 = 0.0;
    local_98.FloatStorage.Float31_2 = 0.0;
    local_98.FloatStorage.Float32_2 = 0.0;
    local_98.FloatStorage.Float33_2 = 0.0;
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_98,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c0c30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  pfVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<float>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),pfVar6);
  return;
}

// operator() @ 14a3c0ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>::operator()(void *this)

{
  FRigControlValue local_98;
  
  local_98.FloatStorage.Float02 = 0.0;
  local_98.FloatStorage.Float03 = 0.0;
  local_98.FloatStorage.Float10 = 0.0;
  local_98.FloatStorage.Float11 = 0.0;
  local_98.FloatStorage.Float12 = 0.0;
  local_98.FloatStorage.Float13 = 0.0;
  local_98.FloatStorage.Float20 = 0.0;
  local_98.FloatStorage.Float21 = 0.0;
  local_98.FloatStorage.Float22 = 0.0;
  local_98.FloatStorage.Float23 = 0.0;
  local_98.FloatStorage.Float30 = 0.0;
  local_98.FloatStorage.Float31 = 0.0;
  local_98.FloatStorage.Float32 = 0.0;
  local_98.FloatStorage.Float33 = 0.0;
  local_98.FloatStorage.Float00_2 = 0.0;
  local_98.FloatStorage.Float01_2 = 0.0;
  local_98.FloatStorage.Float02_2 = 0.0;
  local_98.FloatStorage.Float03_2 = 0.0;
  local_98.FloatStorage.bValid = true;
  local_98.FloatStorage._129_3_ = 0;
  local_98.FloatStorage.Float10_2 = 0.0;
  local_98.FloatStorage.Float11_2 = 0.0;
  local_98.FloatStorage.Float12_2 = 0.0;
  local_98.FloatStorage.Float13_2 = 0.0;
  local_98.FloatStorage.Float20_2 = 0.0;
  local_98.FloatStorage.Float21_2 = 0.0;
  local_98.FloatStorage.Float22_2 = 0.0;
  local_98.FloatStorage.Float23_2 = 0.0;
  local_98.FloatStorage.Float30_2 = 0.0;
  local_98.FloatStorage.Float31_2 = 0.0;
  local_98.FloatStorage.Float32_2 = 0.0;
  local_98.FloatStorage.Float33_2 = 0.0;
  local_98.FloatStorage.Float01 = 0.0;
  local_98.FloatStorage.Float00 = (float)**(uint **)this;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_98,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c0d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  uint *puVar3;
  FRigControlValue local_98;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    puVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_98.FloatStorage.Float02 = 0.0;
    local_98.FloatStorage.Float03 = 0.0;
    local_98.FloatStorage.Float01 = 0.0;
    local_98.FloatStorage.Float00 = (float)*puVar3;
    local_98.FloatStorage.Float10 = 0.0;
    local_98.FloatStorage.Float11 = 0.0;
    local_98.FloatStorage.Float12 = 0.0;
    local_98.FloatStorage.Float13 = 0.0;
    local_98.FloatStorage.bValid = true;
    local_98.FloatStorage._129_3_ = 0;
    local_98.FloatStorage.Float20 = 0.0;
    local_98.FloatStorage.Float21 = 0.0;
    local_98.FloatStorage.Float22 = 0.0;
    local_98.FloatStorage.Float23 = 0.0;
    local_98.FloatStorage.Float30 = 0.0;
    local_98.FloatStorage.Float31 = 0.0;
    local_98.FloatStorage.Float32 = 0.0;
    local_98.FloatStorage.Float33 = 0.0;
    local_98.FloatStorage.Float00_2 = 0.0;
    local_98.FloatStorage.Float01_2 = 0.0;
    local_98.FloatStorage.Float02_2 = 0.0;
    local_98.FloatStorage.Float03_2 = 0.0;
    local_98.FloatStorage.Float10_2 = 0.0;
    local_98.FloatStorage.Float11_2 = 0.0;
    local_98.FloatStorage.Float12_2 = 0.0;
    local_98.FloatStorage.Float13_2 = 0.0;
    local_98.FloatStorage.Float20_2 = 0.0;
    local_98.FloatStorage.Float21_2 = 0.0;
    local_98.FloatStorage.Float22_2 = 0.0;
    local_98.FloatStorage.Float23_2 = 0.0;
    local_98.FloatStorage.Float30_2 = 0.0;
    local_98.FloatStorage.Float31_2 = 0.0;
    local_98.FloatStorage.Float32_2 = 0.0;
    local_98.FloatStorage.Float33_2 = 0.0;
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_98,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c0e80

void __thiscall
`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>::operator()(void *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  fVar1 = **(float **)this;
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)this + 8));
  if (((((!bVar3) || (*(longlong *)((longlong)this + 8) == 0)) ||
       (bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)this + 0x18)), !bVar3)) ||
      (((*(longlong *)((longlong)this + 0x18) == 0 || (*(longlong *)((longlong)this + 0x30) == 0))
       || (*(char *)((longlong)this + 0x28) != '\0')))) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                         ,0x1bd,"IsValid() && !bIsArray"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  **(double **)((longlong)this + 0x30) = (double)fVar1;
  return;
}

// operator() @ 14a3c0f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  FProperty *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)((longlong)this + 0x10);
  lVar3 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x48)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x40);
  lVar9 = (longlong)(int)uVar2 * 0x30;
  pfVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  fVar1 = *pfVar7;
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(lVar9 + lVar3));
  if ((((bVar5) && (*(longlong *)(lVar9 + lVar3) != 0)) &&
      (bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(lVar9 + 0x10 + lVar3)), bVar5)) &&
     (*(longlong *)(lVar9 + 0x10 + lVar3) != 0)) {
    plVar8 = (longlong *)(lVar3 + 0x28 + lVar9);
    if ((*plVar8 != 0) && (*(char *)(lVar9 + 0x20 + lVar3) == '\0')) goto LAB_14a3c1036;
  }
  else {
    plVar8 = (longlong *)(lVar3 + 0x28 + lVar9);
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2446534962325749315>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                     ,0x1bd,"IsValid() && !bIsArray");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a3c1036:
  *(double *)*plVar8 = (double)fVar1;
  return;
}

// operator() @ 14a3c1300

void __thiscall
`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>::operator()(void *this)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  
  dVar1 = **(double **)this;
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)this + 8));
  if (((((!bVar3) || (*(longlong *)((longlong)this + 8) == 0)) ||
       (bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)this + 0x18)), !bVar3)) ||
      (((*(longlong *)((longlong)this + 0x18) == 0 || (*(longlong *)((longlong)this + 0x30) == 0))
       || (*(char *)((longlong)this + 0x28) != '\0')))) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                         ,0x1bd,"IsValid() && !bIsArray"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  **(float **)((longlong)this + 0x30) = (float)dVar1;
  return;
}

// operator() @ 14a3c13b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  FProperty *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)((longlong)this + 0x10);
  lVar3 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x48)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x40);
  lVar9 = (longlong)(int)uVar2 * 0x30;
  pdVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  dVar1 = *pdVar7;
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(lVar9 + lVar3));
  if ((((bVar5) && (*(longlong *)(lVar9 + lVar3) != 0)) &&
      (bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(lVar9 + 0x10 + lVar3)), bVar5)) &&
     (*(longlong *)(lVar9 + 0x10 + lVar3) != 0)) {
    plVar8 = (longlong *)(lVar3 + 0x28 + lVar9);
    if ((*plVar8 != 0) && (*(char *)(lVar9 + 0x20 + lVar3) == '\0')) goto LAB_14a3c14b7;
  }
  else {
    plVar8 = (longlong *)(lVar3 + 0x28 + lVar9);
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2446534962325749315>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                     ,0x1bd,"IsValid() && !bIsArray");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a3c14b7:
  *(float *)*plVar8 = (float)dVar1;
  return;
}

// operator() @ 14a3c14f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  double *pdVar3;
  FRigControlValue local_98;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pdVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_98.FloatStorage.Float10 = 0.0;
    local_98.FloatStorage.Float11 = 0.0;
    local_98.FloatStorage.Float12 = 0.0;
    local_98.FloatStorage.Float13 = 0.0;
    local_98.FloatStorage.Float20 = 0.0;
    local_98.FloatStorage.Float21 = 0.0;
    local_98.FloatStorage.Float22 = 0.0;
    local_98.FloatStorage.Float23 = 0.0;
    local_98.FloatStorage.Float30 = 0.0;
    local_98.FloatStorage.Float31 = 0.0;
    local_98.FloatStorage.Float32 = 0.0;
    local_98.FloatStorage.Float33 = 0.0;
    local_98.FloatStorage.Float00_2 = 0.0;
    local_98.FloatStorage.Float01_2 = 0.0;
    local_98.FloatStorage.Float02_2 = 0.0;
    local_98.FloatStorage.Float03_2 = 0.0;
    local_98.FloatStorage.bValid = true;
    local_98.FloatStorage._129_3_ = 0;
    local_98.FloatStorage.Float10_2 = 0.0;
    local_98.FloatStorage.Float11_2 = 0.0;
    local_98.FloatStorage.Float12_2 = 0.0;
    local_98.FloatStorage.Float13_2 = 0.0;
    local_98.FloatStorage.Float02 = 0.0;
    local_98.FloatStorage.Float03 = 0.0;
    local_98.FloatStorage.Float20_2 = 0.0;
    local_98.FloatStorage.Float21_2 = 0.0;
    local_98.FloatStorage.Float22_2 = 0.0;
    local_98.FloatStorage.Float23_2 = 0.0;
    local_98.FloatStorage.Float30_2 = 0.0;
    local_98.FloatStorage.Float31_2 = 0.0;
    local_98.FloatStorage.Float32_2 = 0.0;
    local_98.FloatStorage.Float33_2 = 0.0;
    local_98.FloatStorage.Float01 = (float)pdVar3[1];
    local_98.FloatStorage.Float00 = (float)*pdVar3;
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_98,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c1620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>::operator()(void *this)

{
  FRigControlValue local_98;
  
  local_98.FloatStorage.Float10 = 0.0;
  local_98.FloatStorage.Float11 = 0.0;
  local_98.FloatStorage.Float12 = 0.0;
  local_98.FloatStorage.Float13 = 0.0;
  local_98.FloatStorage.Float20 = 0.0;
  local_98.FloatStorage.Float21 = 0.0;
  local_98.FloatStorage.Float22 = 0.0;
  local_98.FloatStorage.Float23 = 0.0;
  local_98.FloatStorage.Float30 = 0.0;
  local_98.FloatStorage.Float31 = 0.0;
  local_98.FloatStorage.Float32 = 0.0;
  local_98.FloatStorage.Float33 = 0.0;
  local_98.FloatStorage.Float00_2 = 0.0;
  local_98.FloatStorage.Float01_2 = 0.0;
  local_98.FloatStorage.Float02_2 = 0.0;
  local_98.FloatStorage.Float03_2 = 0.0;
  local_98.FloatStorage.bValid = true;
  local_98.FloatStorage._129_3_ = 0;
  local_98.FloatStorage.Float10_2 = 0.0;
  local_98.FloatStorage.Float11_2 = 0.0;
  local_98.FloatStorage.Float12_2 = 0.0;
  local_98.FloatStorage.Float13_2 = 0.0;
  local_98.FloatStorage.Float20_2 = 0.0;
  local_98.FloatStorage.Float21_2 = 0.0;
  local_98.FloatStorage.Float22_2 = 0.0;
  local_98.FloatStorage.Float23_2 = 0.0;
  local_98.FloatStorage.Float30_2 = 0.0;
  local_98.FloatStorage.Float31_2 = 0.0;
  local_98.FloatStorage.Float32_2 = 0.0;
  local_98.FloatStorage.Float33_2 = 0.0;
  local_98.FloatStorage.Float02 = 0.0;
  local_98.FloatStorage.Float03 = 0.0;
  local_98.FloatStorage.Float01 = (float)(*(double **)this)[1];
  local_98.FloatStorage.Float00 = (float)**(double **)this;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_98,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c16c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  pdVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<double>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),pdVar6);
  return;
}

// operator() @ 14a3c1770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  double *pdVar3;
  FRigControlValue local_b8;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pdVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_b8.FloatStorage.Float10 = 0.0;
    local_b8.FloatStorage.Float11 = 0.0;
    local_b8.FloatStorage.Float12 = 0.0;
    local_b8.FloatStorage.Float13 = 0.0;
    local_b8.FloatStorage.Float20 = 0.0;
    local_b8.FloatStorage.Float21 = 0.0;
    local_b8.FloatStorage.Float22 = 0.0;
    local_b8.FloatStorage.Float23 = 0.0;
    local_b8.FloatStorage.Float30 = 0.0;
    local_b8.FloatStorage.Float31 = 0.0;
    local_b8.FloatStorage.Float32 = 0.0;
    local_b8.FloatStorage.Float33 = 0.0;
    local_b8.FloatStorage.Float00_2 = 0.0;
    local_b8.FloatStorage.Float01_2 = 0.0;
    local_b8.FloatStorage.Float02_2 = 0.0;
    local_b8.FloatStorage.Float03_2 = 0.0;
    local_b8.FloatStorage.bValid = true;
    local_b8.FloatStorage._129_3_ = 0;
    local_b8.FloatStorage.Float10_2 = 0.0;
    local_b8.FloatStorage.Float11_2 = 0.0;
    local_b8.FloatStorage.Float12_2 = 0.0;
    local_b8.FloatStorage.Float13_2 = 0.0;
    local_b8.FloatStorage.Float20_2 = 0.0;
    local_b8.FloatStorage.Float21_2 = 0.0;
    local_b8.FloatStorage.Float22_2 = 0.0;
    local_b8.FloatStorage.Float23_2 = 0.0;
    local_b8.FloatStorage.Float30_2 = 0.0;
    local_b8.FloatStorage.Float31_2 = 0.0;
    local_b8.FloatStorage.Float32_2 = 0.0;
    local_b8.FloatStorage.Float33_2 = 0.0;
    local_b8.FloatStorage.Float01 = (float)pdVar3[1];
    local_b8.FloatStorage.Float00 = (float)*pdVar3;
    local_b8.FloatStorage.Float03 = 0.0;
    local_b8.FloatStorage.Float02 = (float)pdVar3[2];
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_b8,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c18a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>::operator()(void *this)

{
  double *pdVar1;
  FRigControlValue local_b8;
  
  pdVar1 = *(double **)this;
  local_b8.FloatStorage.Float10 = 0.0;
  local_b8.FloatStorage.Float11 = 0.0;
  local_b8.FloatStorage.Float12 = 0.0;
  local_b8.FloatStorage.Float13 = 0.0;
  local_b8.FloatStorage.Float20 = 0.0;
  local_b8.FloatStorage.Float21 = 0.0;
  local_b8.FloatStorage.Float22 = 0.0;
  local_b8.FloatStorage.Float23 = 0.0;
  local_b8.FloatStorage.Float30 = 0.0;
  local_b8.FloatStorage.Float31 = 0.0;
  local_b8.FloatStorage.Float32 = 0.0;
  local_b8.FloatStorage.Float33 = 0.0;
  local_b8.FloatStorage.Float00_2 = 0.0;
  local_b8.FloatStorage.Float01_2 = 0.0;
  local_b8.FloatStorage.Float02_2 = 0.0;
  local_b8.FloatStorage.Float03_2 = 0.0;
  local_b8.FloatStorage.bValid = true;
  local_b8.FloatStorage._129_3_ = 0;
  local_b8.FloatStorage.Float10_2 = 0.0;
  local_b8.FloatStorage.Float11_2 = 0.0;
  local_b8.FloatStorage.Float12_2 = 0.0;
  local_b8.FloatStorage.Float13_2 = 0.0;
  local_b8.FloatStorage.Float20_2 = 0.0;
  local_b8.FloatStorage.Float21_2 = 0.0;
  local_b8.FloatStorage.Float22_2 = 0.0;
  local_b8.FloatStorage.Float23_2 = 0.0;
  local_b8.FloatStorage.Float30_2 = 0.0;
  local_b8.FloatStorage.Float31_2 = 0.0;
  local_b8.FloatStorage.Float32_2 = 0.0;
  local_b8.FloatStorage.Float33_2 = 0.0;
  local_b8.FloatStorage.Float01 = (float)pdVar1[1];
  local_b8.FloatStorage.Float00 = (float)*pdVar1;
  local_b8.FloatStorage.Float03 = 0.0;
  local_b8.FloatStorage.Float02 = (float)pdVar1[2];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_b8,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c1950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  piVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<int>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),piVar6);
  return;
}

// operator() @ 14a3c1a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  double *pdVar3;
  TVector<double> *pTVar4;
  TRotator<double> local_d8;
  FRigControlValue local_b8;
  TVector<double> local_28;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pdVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_d8.Pitch = *pdVar3;
    local_d8.Yaw = pdVar3[1];
    local_d8.Roll = pdVar3[2];
    pTVar4 = UE::Math::TRotator<double>::Euler(&local_d8,&local_28);
    local_b8.FloatStorage.bValid = true;
    local_b8.FloatStorage._129_3_ = 0;
    local_b8.FloatStorage.Float01 = (float)(pTVar4->field0_0x0)._s_0.Y;
    local_b8.FloatStorage.Float00 = (float)(pTVar4->field0_0x0)._s_0.X;
    local_b8.FloatStorage.Float03 = 0.0;
    local_b8.FloatStorage.Float02 = (float)(pTVar4->field0_0x0)._s_0.Z;
    local_b8.FloatStorage.Float10 = 0.0;
    local_b8.FloatStorage.Float11 = 0.0;
    local_b8.FloatStorage.Float12 = 0.0;
    local_b8.FloatStorage.Float13 = 0.0;
    local_b8.FloatStorage.Float20 = 0.0;
    local_b8.FloatStorage.Float21 = 0.0;
    local_b8.FloatStorage.Float22 = 0.0;
    local_b8.FloatStorage.Float23 = 0.0;
    local_b8.FloatStorage.Float30 = 0.0;
    local_b8.FloatStorage.Float31 = 0.0;
    local_b8.FloatStorage.Float32 = 0.0;
    local_b8.FloatStorage.Float33 = 0.0;
    local_b8.FloatStorage.Float00_2 = 0.0;
    local_b8.FloatStorage.Float01_2 = 0.0;
    local_b8.FloatStorage.Float02_2 = 0.0;
    local_b8.FloatStorage.Float03_2 = 0.0;
    local_b8.FloatStorage.Float10_2 = 0.0;
    local_b8.FloatStorage.Float11_2 = 0.0;
    local_b8.FloatStorage.Float12_2 = 0.0;
    local_b8.FloatStorage.Float13_2 = 0.0;
    local_b8.FloatStorage.Float20_2 = 0.0;
    local_b8.FloatStorage.Float21_2 = 0.0;
    local_b8.FloatStorage.Float22_2 = 0.0;
    local_b8.FloatStorage.Float23_2 = 0.0;
    local_b8.FloatStorage.Float30_2 = 0.0;
    local_b8.FloatStorage.Float31_2 = 0.0;
    local_b8.FloatStorage.Float32_2 = 0.0;
    local_b8.FloatStorage.Float33_2 = 0.0;
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_b8,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c1b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>::operator()(void *this)

{
  double *pdVar1;
  URigHierarchy *this_00;
  FRigControlElement *pFVar2;
  TVector<double> *pTVar3;
  TRotator<double> local_d8;
  FRigControlValue local_b8;
  TVector<double> local_28;
  
  pdVar1 = *(double **)this;
  this_00 = *(URigHierarchy **)((longlong)this + 8);
  pFVar2 = *(FRigControlElement **)((longlong)this + 0x10);
  local_d8.Pitch = *pdVar1;
  local_d8.Yaw = pdVar1[1];
  local_d8.Roll = pdVar1[2];
  pTVar3 = UE::Math::TRotator<double>::Euler(&local_d8,&local_28);
  local_b8.FloatStorage.bValid = true;
  local_b8.FloatStorage._129_3_ = 0;
  local_b8.FloatStorage.Float01 = (float)(pTVar3->field0_0x0)._s_0.Y;
  local_b8.FloatStorage.Float00 = (float)(pTVar3->field0_0x0)._s_0.X;
  local_b8.FloatStorage.Float03 = 0.0;
  local_b8.FloatStorage.Float02 = (float)(pTVar3->field0_0x0)._s_0.Z;
  local_b8.FloatStorage.Float10 = 0.0;
  local_b8.FloatStorage.Float11 = 0.0;
  local_b8.FloatStorage.Float12 = 0.0;
  local_b8.FloatStorage.Float13 = 0.0;
  local_b8.FloatStorage.Float20 = 0.0;
  local_b8.FloatStorage.Float21 = 0.0;
  local_b8.FloatStorage.Float22 = 0.0;
  local_b8.FloatStorage.Float23 = 0.0;
  local_b8.FloatStorage.Float30 = 0.0;
  local_b8.FloatStorage.Float31 = 0.0;
  local_b8.FloatStorage.Float32 = 0.0;
  local_b8.FloatStorage.Float33 = 0.0;
  local_b8.FloatStorage.Float00_2 = 0.0;
  local_b8.FloatStorage.Float01_2 = 0.0;
  local_b8.FloatStorage.Float02_2 = 0.0;
  local_b8.FloatStorage.Float03_2 = 0.0;
  local_b8.FloatStorage.Float10_2 = 0.0;
  local_b8.FloatStorage.Float11_2 = 0.0;
  local_b8.FloatStorage.Float12_2 = 0.0;
  local_b8.FloatStorage.Float13_2 = 0.0;
  local_b8.FloatStorage.Float20_2 = 0.0;
  local_b8.FloatStorage.Float21_2 = 0.0;
  local_b8.FloatStorage.Float22_2 = 0.0;
  local_b8.FloatStorage.Float23_2 = 0.0;
  local_b8.FloatStorage.Float30_2 = 0.0;
  local_b8.FloatStorage.Float31_2 = 0.0;
  local_b8.FloatStorage.Float32_2 = 0.0;
  local_b8.FloatStorage.Float33_2 = 0.0;
  URigHierarchy::SetControlValue(this_00,pFVar2,&local_b8,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c1c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  pFVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<FName>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),pFVar6);
  return;
}

// operator() @ 14a3c1d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  double *pdVar3;
  FRigControlValue local_a8;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pdVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_a8.FloatStorage.Float30 = 0.0;
    local_a8.FloatStorage.Float31 = 0.0;
    local_a8.FloatStorage.Float32 = 0.0;
    local_a8.FloatStorage.Float33 = 0.0;
    local_a8.FloatStorage.Float00_2 = 0.0;
    local_a8.FloatStorage.Float01_2 = 0.0;
    local_a8.FloatStorage.Float02_2 = 0.0;
    local_a8.FloatStorage.Float03_2 = 0.0;
    local_a8.FloatStorage.bValid = true;
    local_a8.FloatStorage._129_3_ = 0;
    local_a8.FloatStorage.Float10_2 = 0.0;
    local_a8.FloatStorage.Float11_2 = 0.0;
    local_a8.FloatStorage.Float12_2 = 0.0;
    local_a8.FloatStorage.Float13_2 = 0.0;
    local_a8.FloatStorage.Float20_2 = 0.0;
    local_a8.FloatStorage.Float21_2 = 0.0;
    local_a8.FloatStorage.Float22_2 = 0.0;
    local_a8.FloatStorage.Float23_2 = 0.0;
    local_a8.FloatStorage.Float30_2 = 0.0;
    local_a8.FloatStorage.Float31_2 = 0.0;
    local_a8.FloatStorage.Float32_2 = 0.0;
    local_a8.FloatStorage.Float33_2 = 0.0;
    local_a8.FloatStorage.Float01 = (float)pdVar3[1];
    local_a8.FloatStorage.Float00 = (float)*pdVar3;
    local_a8.FloatStorage.Float03 = (float)pdVar3[3];
    local_a8.FloatStorage.Float02 = (float)pdVar3[2];
    local_a8.FloatStorage.Float11 = (float)pdVar3[5];
    local_a8.FloatStorage.Float10 = (float)pdVar3[4];
    local_a8.FloatStorage.Float13 = 0.0;
    local_a8.FloatStorage.Float12 = (float)pdVar3[6];
    local_a8.FloatStorage.Float21 = (float)pdVar3[9];
    local_a8.FloatStorage.Float20 = (float)pdVar3[8];
    local_a8.FloatStorage.Float23 = 0.0;
    local_a8.FloatStorage.Float22 = (float)pdVar3[10];
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_a8,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c1ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>::operator()(void *this)

{
  double *pdVar1;
  FRigControlValue local_a8;
  
  pdVar1 = *(double **)this;
  local_a8.FloatStorage.Float30 = 0.0;
  local_a8.FloatStorage.Float31 = 0.0;
  local_a8.FloatStorage.Float32 = 0.0;
  local_a8.FloatStorage.Float33 = 0.0;
  local_a8.FloatStorage.Float00_2 = 0.0;
  local_a8.FloatStorage.Float01_2 = 0.0;
  local_a8.FloatStorage.Float02_2 = 0.0;
  local_a8.FloatStorage.Float03_2 = 0.0;
  local_a8.FloatStorage.Float10_2 = 0.0;
  local_a8.FloatStorage.Float11_2 = 0.0;
  local_a8.FloatStorage.Float12_2 = 0.0;
  local_a8.FloatStorage.Float13_2 = 0.0;
  local_a8.FloatStorage.Float20_2 = 0.0;
  local_a8.FloatStorage.Float21_2 = 0.0;
  local_a8.FloatStorage.Float22_2 = 0.0;
  local_a8.FloatStorage.Float23_2 = 0.0;
  local_a8.FloatStorage.Float30_2 = 0.0;
  local_a8.FloatStorage.Float31_2 = 0.0;
  local_a8.FloatStorage.Float32_2 = 0.0;
  local_a8.FloatStorage.Float33_2 = 0.0;
  local_a8.FloatStorage.bValid = true;
  local_a8.FloatStorage._129_3_ = 0;
  local_a8.FloatStorage.Float01 = (float)pdVar1[1];
  local_a8.FloatStorage.Float00 = (float)*pdVar1;
  local_a8.FloatStorage.Float03 = (float)pdVar1[3];
  local_a8.FloatStorage.Float02 = (float)pdVar1[2];
  local_a8.FloatStorage.Float11 = (float)pdVar1[5];
  local_a8.FloatStorage.Float10 = (float)pdVar1[4];
  local_a8.FloatStorage.Float13 = 0.0;
  local_a8.FloatStorage.Float12 = (float)pdVar1[6];
  local_a8.FloatStorage.Float21 = (float)pdVar1[9];
  local_a8.FloatStorage.Float20 = (float)pdVar1[8];
  local_a8.FloatStorage.Float23 = 0.0;
  local_a8.FloatStorage.Float22 = (float)pdVar1[10];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_a8,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c1ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FProperty **)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  pFVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
  FRigVMExternalVariable::SetValue<FString>
            ((FRigVMExternalVariable *)((longlong)(int)uVar1 * 0x30 + lVar2),pFVar6);
  return;
}

// operator() @ 14a3c20a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FProperty *this_00;
  FRigBaseElement *pFVar1;
  FRigControlElement *pFVar2;
  double *pdVar3;
  FRigControlValue local_d8;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    this_00 = *(FProperty **)this;
    pFVar2 = CastChecked<FRigControlElement>(pFVar1);
    pdVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
    local_d8.FloatStorage.Float20 = 0.0;
    local_d8.FloatStorage.Float21 = 0.0;
    local_d8.FloatStorage.Float22 = 0.0;
    local_d8.FloatStorage.Float23 = 0.0;
    local_d8.FloatStorage.Float30 = 0.0;
    local_d8.FloatStorage.Float31 = 0.0;
    local_d8.FloatStorage.Float32 = 0.0;
    local_d8.FloatStorage.Float33 = 0.0;
    local_d8.FloatStorage.Float00_2 = 0.0;
    local_d8.FloatStorage.Float01_2 = 0.0;
    local_d8.FloatStorage.Float02_2 = 0.0;
    local_d8.FloatStorage.Float03_2 = 0.0;
    local_d8.FloatStorage.bValid = true;
    local_d8.FloatStorage._129_3_ = 0;
    local_d8.FloatStorage.Float10_2 = 0.0;
    local_d8.FloatStorage.Float11_2 = 0.0;
    local_d8.FloatStorage.Float12_2 = 0.0;
    local_d8.FloatStorage.Float13_2 = 0.0;
    local_d8.FloatStorage.Float20_2 = 0.0;
    local_d8.FloatStorage.Float21_2 = 0.0;
    local_d8.FloatStorage.Float22_2 = 0.0;
    local_d8.FloatStorage.Float23_2 = 0.0;
    local_d8.FloatStorage.Float30_2 = 0.0;
    local_d8.FloatStorage.Float31_2 = 0.0;
    local_d8.FloatStorage.Float32_2 = 0.0;
    local_d8.FloatStorage.Float33_2 = 0.0;
    local_d8.FloatStorage.Float01 = (float)pdVar3[1];
    local_d8.FloatStorage.Float00 = (float)*pdVar3;
    local_d8.FloatStorage.Float03 = (float)pdVar3[3];
    local_d8.FloatStorage.Float02 = (float)pdVar3[2];
    local_d8.FloatStorage.Float11 = (float)pdVar3[5];
    local_d8.FloatStorage.Float10 = (float)pdVar3[4];
    local_d8.FloatStorage.Float13 = 0.0;
    local_d8.FloatStorage.Float12 = (float)pdVar3[6];
    URigHierarchy::SetControlValue(param_1,pFVar2,&local_d8,Current,false,false,false,false);
  }
  return;
}

// operator() @ 14a3c2220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>::operator()(void *this)

{
  double *pdVar1;
  FRigControlValue local_d8;
  
  pdVar1 = *(double **)this;
  local_d8.FloatStorage.Float20 = 0.0;
  local_d8.FloatStorage.Float21 = 0.0;
  local_d8.FloatStorage.Float22 = 0.0;
  local_d8.FloatStorage.Float23 = 0.0;
  local_d8.FloatStorage.Float30 = 0.0;
  local_d8.FloatStorage.Float31 = 0.0;
  local_d8.FloatStorage.Float32 = 0.0;
  local_d8.FloatStorage.Float33 = 0.0;
  local_d8.FloatStorage.Float00_2 = 0.0;
  local_d8.FloatStorage.Float01_2 = 0.0;
  local_d8.FloatStorage.Float02_2 = 0.0;
  local_d8.FloatStorage.Float03_2 = 0.0;
  local_d8.FloatStorage.Float10_2 = 0.0;
  local_d8.FloatStorage.Float11_2 = 0.0;
  local_d8.FloatStorage.Float12_2 = 0.0;
  local_d8.FloatStorage.Float13_2 = 0.0;
  local_d8.FloatStorage.Float20_2 = 0.0;
  local_d8.FloatStorage.Float21_2 = 0.0;
  local_d8.FloatStorage.Float22_2 = 0.0;
  local_d8.FloatStorage.Float23_2 = 0.0;
  local_d8.FloatStorage.bValid = true;
  local_d8.FloatStorage._129_3_ = 0;
  local_d8.FloatStorage.Float30_2 = 0.0;
  local_d8.FloatStorage.Float31_2 = 0.0;
  local_d8.FloatStorage.Float32_2 = 0.0;
  local_d8.FloatStorage.Float33_2 = 0.0;
  local_d8.FloatStorage.Float01 = (float)pdVar1[1];
  local_d8.FloatStorage.Float00 = (float)*pdVar1;
  local_d8.FloatStorage.Float03 = (float)pdVar1[3];
  local_d8.FloatStorage.Float02 = (float)pdVar1[2];
  local_d8.FloatStorage.Float11 = (float)pdVar1[5];
  local_d8.FloatStorage.Float10 = (float)pdVar1[4];
  local_d8.FloatStorage.Float13 = 0.0;
  local_d8.FloatStorage.Float12 = (float)pdVar1[6];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_d8,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c2320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>::operator()(void *this)

{
  double *pdVar1;
  FRigControlValue local_108;
  double local_78;
  double dStack_70;
  double local_68;
  TRotator<double> local_60 [2];
  TQuat<double> local_28;
  
  pdVar1 = *(double **)this;
  local_78 = pdVar1[4];
  dStack_70 = pdVar1[5];
  local_68 = pdVar1[6];
  local_28.Z = pdVar1[2];
  local_28.W = pdVar1[3];
  local_28.X = *pdVar1;
  local_28.Y = pdVar1[1];
  UE::Math::TQuat<double>::Rotator(&local_28,local_60);
  local_108.FloatStorage.Float21 = 0.0;
  local_108.FloatStorage.Float22 = 0.0;
  local_108.FloatStorage.Float23 = 0.0;
  local_108.FloatStorage.Float30 = 0.0;
  local_108.FloatStorage.Float31 = 0.0;
  local_108.FloatStorage.Float32 = 0.0;
  local_108.FloatStorage.Float33 = 0.0;
  local_108.FloatStorage.Float00_2 = 0.0;
  local_108.FloatStorage.Float01_2 = 0.0;
  local_108.FloatStorage.Float02_2 = 0.0;
  local_108.FloatStorage.Float03_2 = 0.0;
  local_108.FloatStorage.Float10_2 = 0.0;
  local_108.FloatStorage.Float11_2 = 0.0;
  local_108.FloatStorage.Float12_2 = 0.0;
  local_108.FloatStorage.Float13_2 = 0.0;
  local_108.FloatStorage.Float20_2 = 0.0;
  local_108.FloatStorage.Float31_2 = 0.0;
  local_108.FloatStorage.Float32_2 = 0.0;
  local_108.FloatStorage.Float21_2 = 0.0;
  local_108.FloatStorage.Float22_2 = 0.0;
  local_108.FloatStorage.Float23_2 = 0.0;
  local_108.FloatStorage.Float30_2 = 0.0;
  local_108.FloatStorage.Float33_2 = 0.0;
  local_108.FloatStorage.Float00 = (float)local_60[0].Pitch;
  local_108.FloatStorage._129_2_ = 0;
  local_108.FloatStorage._131_1_ = 0;
  local_108.FloatStorage.bValid = true;
  local_108.FloatStorage.Float01 = (float)local_60[0].Yaw;
  local_108.FloatStorage.Float02 = (float)local_60[0].Roll;
  local_108.FloatStorage.Float10 = (float)dStack_70;
  local_108.FloatStorage.Float03 = (float)local_78;
  local_108.FloatStorage.Float12 = (float)pdVar1[8];
  local_108.FloatStorage.Float13 = (float)pdVar1[9];
  local_108.FloatStorage.Float11 = (float)local_68;
  local_108.FloatStorage.Float20 = (float)pdVar1[10];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)this + 8),*(FRigControlElement **)((longlong)this + 0x10)
             ,&local_108,Current,false,false,false,false);
  return;
}

// operator() @ 14a3c2470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  uint uVar1;
  longlong lVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar1 = *(uint *)((longlong)this + 0x10);
  this_00 = *(UScriptStruct **)(*(longlong *)this + 0x70);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UScriptStruct::CopyScriptStruct
            (this_00,*(void **)(*(longlong *)(lVar2 + 0x40) + 0x28 + (longlong)(int)uVar1 * 0x30),
             pvVar6,1);
  return;
}

// operator() @ 14a3c2530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>::operator()
          (void *this,URigHierarchy *param_1,UObject *param_2)

{
  FRigBaseElement *pFVar1;
  double *pdVar2;
  FRigControlElement *pFVar3;
  FRigControlValue local_108;
  double local_78;
  double dStack_70;
  double local_68;
  TRotator<double> local_60 [2];
  TQuat<double> local_28;
  
  pFVar1 = URigHierarchy::Get(param_1,*(int *)((longlong)this + 0x14));
  if (((pFVar1 != (FRigBaseElement *)0x0) &&
      ((pFVar1->Key).Name == *(FName *)((longlong)this + 0xc))) &&
     ((pFVar1->Key).Type == *(ERigElementType *)((longlong)this + 8))) {
    pdVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal(*(FProperty **)this,param_2,0);
    local_78 = pdVar2[4];
    dStack_70 = pdVar2[5];
    local_68 = pdVar2[6];
    local_28.Z = pdVar2[2];
    local_28.W = pdVar2[3];
    local_28.X = *pdVar2;
    local_28.Y = pdVar2[1];
    UE::Math::TQuat<double>::Rotator(&local_28,local_60);
    local_108.FloatStorage.Float21 = 0.0;
    local_108.FloatStorage.Float22 = 0.0;
    local_108.FloatStorage.Float23 = 0.0;
    local_108.FloatStorage.Float30 = 0.0;
    local_108.FloatStorage.Float31_2 = 0.0;
    local_108.FloatStorage.Float32_2 = 0.0;
    local_108.FloatStorage.Float31 = 0.0;
    local_108.FloatStorage.Float32 = 0.0;
    local_108.FloatStorage.Float33 = 0.0;
    local_108.FloatStorage.Float00_2 = 0.0;
    local_108.FloatStorage.Float33_2 = 0.0;
    local_108.FloatStorage.Float01_2 = 0.0;
    local_108.FloatStorage.Float02_2 = 0.0;
    local_108.FloatStorage.Float03_2 = 0.0;
    local_108.FloatStorage.Float10_2 = 0.0;
    local_108.FloatStorage._129_2_ = 0;
    local_108.FloatStorage.Float11_2 = 0.0;
    local_108.FloatStorage.Float12_2 = 0.0;
    local_108.FloatStorage.Float13_2 = 0.0;
    local_108.FloatStorage.Float20_2 = 0.0;
    local_108.FloatStorage._131_1_ = 0;
    local_108.FloatStorage.Float21_2 = 0.0;
    local_108.FloatStorage.Float22_2 = 0.0;
    local_108.FloatStorage.Float23_2 = 0.0;
    local_108.FloatStorage.Float30_2 = 0.0;
    local_108.FloatStorage.bValid = true;
    local_108.FloatStorage.Float00 = (float)local_60[0].Pitch;
    local_108.FloatStorage.Float01 = (float)local_60[0].Yaw;
    local_108.FloatStorage.Float02 = (float)local_60[0].Roll;
    local_108.FloatStorage.Float10 = (float)dStack_70;
    local_108.FloatStorage.Float03 = (float)local_78;
    local_108.FloatStorage.Float12 = (float)pdVar2[8];
    local_108.FloatStorage.Float13 = (float)pdVar2[9];
    local_108.FloatStorage.Float11 = (float)local_68;
    local_108.FloatStorage.Float20 = (float)pdVar2[10];
    pFVar3 = CastChecked<FRigControlElement>(pFVar1);
    URigHierarchy::SetControlValue(param_1,pFVar3,&local_108,Current,false,false,false,false);
  }
  return;
}

// AddControlFunction @ 14a3dae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::AddControlFunction
          (FControlRigVariableMappings *this,FRigControlElement *param_1,FProperty *param_2,
          URigHierarchy *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  code **ppcVar5;
  undefined1 auStackY_2d8 [32];
  code *local_1c8 [2];
  code *local_1b8 [3];
  code **local_1a0;
  code *local_198 [2];
  code *local_188 [3];
  code **local_170;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  code *local_138 [2];
  code *local_128 [3];
  code **local_110;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  switch((param_1->Settings).ControlType) {
  case Bool:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x11 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433530>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x1fa,"CastField<FBoolProperty>(InSourceProperty)");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      uVar1 = *(undefined8 *)&param_1->field_0x10;
      pcVar2 = *(code **)&param_1->field_0x18;
      local_1c8[0] = (code *)0x0;
      local_1a0 = FMemory::Malloc(0x20,8);
      *local_1a0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`8'::<lambda_1>,0,1>
                            ::_vftable_;
      local_1a0[1] = (code *)param_2;
      *(int *)(local_1a0 + 2) = (int)uVar1;
      *(int *)((longlong)local_1a0 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
      local_1a0[3] = pcVar2;
      if (local_1a0 + 1 != (code **)0x0) {
        local_1c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>,void,URigHierarchy_*,UObject_const_*>
                       ::Call;
      }
      AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_1c8);
      if (local_1c8[0] != (code *)0x0) {
        ppcVar5 = local_1c8 + 2;
        if (local_1a0 != (code **)0x0) {
          ppcVar5 = local_1a0;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    break;
  case Float:
  case ScaleFloat:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 8 & 1) == 0)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433548>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x20c,"CastField<FFloatProperty>(InSourceProperty)");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      uVar1 = *(undefined8 *)&param_1->field_0x10;
      pcVar2 = *(code **)&param_1->field_0x18;
      local_198[0] = (code *)0x0;
      local_170 = FMemory::Malloc(0x20,8);
      *local_170 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`12'::<lambda_2>,0,1>
                            ::_vftable_;
      local_170[1] = (code *)param_2;
      *(int *)(local_170 + 2) = (int)uVar1;
      *(int *)((longlong)local_170 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
      local_170[3] = pcVar2;
      if (local_170 + 1 != (code **)0x0) {
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>,void,URigHierarchy_*,UObject_const_*>
                       ::Call;
      }
      AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_198);
      if (local_198[0] != (code *)0x0) {
        ppcVar5 = local_198 + 2;
        if (local_170 != (code **)0x0) {
          ppcVar5 = local_170;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    break;
  case Integer:
    if ((param_2 == (FProperty *)0x0) || ((*(byte *)(param_2->_padding_ + 0x18) & 0x80) == 0)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433565>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x21d,"CastField<FIntProperty>(InSourceProperty)");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      uVar1 = *(undefined8 *)&param_1->field_0x10;
      pcVar2 = *(code **)&param_1->field_0x18;
      local_168[0] = (code *)0x0;
      local_140 = FMemory::Malloc(0x20,8);
      *local_140 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`16'::<lambda_3>,0,1>
                            ::_vftable_;
      local_140[1] = (code *)param_2;
      *(int *)(local_140 + 2) = (int)uVar1;
      *(int *)((longlong)local_140 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
      local_140[3] = pcVar2;
      if (local_140 + 1 != (code **)0x0) {
        local_168[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>,void,URigHierarchy_*,UObject_const_*>
                       ::Call;
      }
      AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_168);
      if (local_168[0] != (code *)0x0) {
        ppcVar5 = local_168 + 2;
        if (local_140 != (code **)0x0) {
          ppcVar5 = local_140;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    break;
  case Vector2D:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433583>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x22f,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_138[0] = (code *)0x0;
        local_110 = FMemory::Malloc(0x20,8);
        *local_110 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`23'::<lambda_4>,0,1>
                              ::_vftable_;
        local_110[1] = (code *)param_2;
        *(int *)(local_110 + 2) = (int)uVar1;
        *(int *)((longlong)local_110 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_110[3] = pcVar2;
        if (local_110 + 1 != (code **)0x0) {
          local_138[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>,void,URigHierarchy_*,UObject_const_*>
                         ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_138
                         );
        if (local_138[0] != (code *)0x0) {
          ppcVar5 = local_138 + 2;
          if (local_110 != (code **)0x0) {
            ppcVar5 = local_110;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433585>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x231,"StructProperty->Struct == TBaseStructure<FVector2D>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  case Position:
  case Scale:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433605>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x245,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_108[0] = (code *)0x0;
        local_e0 = FMemory::Malloc(0x20,8);
        *local_e0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`30'::<lambda_5>,0,1>
                             ::_vftable_;
        local_e0[1] = (code *)param_2;
        *(int *)(local_e0 + 2) = (int)uVar1;
        *(int *)((longlong)local_e0 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_e0[3] = pcVar2;
        if (local_e0 + 1 != (code **)0x0) {
          local_108[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>,void,URigHierarchy_*,UObject_const_*>
                         ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_108
                         );
        if (local_108[0] != (code *)0x0) {
          ppcVar5 = local_108 + 2;
          if (local_e0 != (code **)0x0) {
            ppcVar5 = local_e0;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433607>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x247,"StructProperty->Struct == TBaseStructure<FVector>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  case Rotator:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433626>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x25a,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_d8[0] = (code *)0x0;
        local_b0 = FMemory::Malloc(0x20,8);
        *local_b0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`37'::<lambda_6>,0,1>
                             ::_vftable_;
        local_b0[1] = (code *)param_2;
        *(int *)(local_b0 + 2) = (int)uVar1;
        *(int *)((longlong)local_b0 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_b0[3] = pcVar2;
        if (local_b0 + 1 != (code **)0x0) {
          local_d8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>,void,URigHierarchy_*,UObject_const_*>
                        ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_d8)
        ;
        if (local_d8[0] != (code *)0x0) {
          ppcVar5 = local_d8 + 2;
          if (local_b0 != (code **)0x0) {
            ppcVar5 = local_b0;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433628>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x25c,"StructProperty->Struct == TBaseStructure<FRotator>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  case Transform:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433647>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x26f,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_a8[0] = (code *)0x0;
        local_80 = FMemory::Malloc(0x20,8);
        *local_80 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`44'::<lambda_7>,0,1>
                             ::_vftable_;
        local_80[1] = (code *)param_2;
        *(int *)(local_80 + 2) = (int)uVar1;
        *(int *)((longlong)local_80 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_80[3] = pcVar2;
        if (local_80 + 1 != (code **)0x0) {
          local_a8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>,void,URigHierarchy_*,UObject_const_*>
                        ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_a8)
        ;
        if (local_a8[0] != (code *)0x0) {
          ppcVar5 = local_a8 + 2;
          if (local_80 != (code **)0x0) {
            ppcVar5 = local_80;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433649>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x271,"StructProperty->Struct == TBaseStructure<FTransform>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  case TransformNoScale:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433668>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x284,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_78[0] = (code *)0x0;
        local_50 = FMemory::Malloc(0x20,8);
        *local_50 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`51'::<lambda_8>,0,1>
                             ::_vftable_;
        local_50[1] = (code *)param_2;
        *(int *)(local_50 + 2) = (int)uVar1;
        *(int *)((longlong)local_50 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_50[3] = pcVar2;
        if (local_50 + 1 != (code **)0x0) {
          local_78[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>,void,URigHierarchy_*,UObject_const_*>
                        ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_78)
        ;
        if (local_78[0] != (code *)0x0) {
          ppcVar5 = local_78 + 2;
          if (local_50 != (code **)0x0) {
            ppcVar5 = local_50;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433670>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x286,"StructProperty->Struct == TBaseStructure<FTransform>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  case EulerTransform:
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4803226398594433689>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x299,"StructProperty");
      if (bVar3) goto code_r0x00014a3db99a;
    }
    else {
      pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
        bVar3 = pUVar4 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = (UScriptStruct *)param_2[1]._padding_ == pUVar4;
      }
      if (bVar3) {
        uVar1 = *(undefined8 *)&param_1->field_0x10;
        pcVar2 = *(code **)&param_1->field_0x18;
        local_48[0] = (code *)0x0;
        local_20 = FMemory::Malloc(0x20,8);
        *local_20 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`58'::<lambda_9>,0,1>
                             ::_vftable_;
        local_20[1] = (code *)param_2;
        *(int *)(local_20 + 2) = (int)uVar1;
        *(int *)((longlong)local_20 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        local_20[3] = pcVar2;
        if (local_20 + 1 != (code **)0x0) {
          local_48[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>,void,URigHierarchy_*,UObject_const_*>
                        ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_48)
        ;
        if (local_48[0] != (code *)0x0) {
          ppcVar5 = local_48 + 2;
          if (local_20 != (code **)0x0) {
            ppcVar5 = local_20;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4803226398594433691>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                           ,0x29b,"StructProperty->Struct == TBaseStructure<FTransform>::Get()");
        if (bVar3) goto code_r0x00014a3db99a;
      }
    }
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                       ,0x2af,L"");
    if (bVar3) {
code_r0x00014a3db99a:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AddCustomControlFunction @ 14a3dc660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::AddCustomControlFunction
          (FControlRigVariableMappings *this,FRigControlElement *param_1,ERigControlType param_2,
          uchar *param_3,URigHierarchy *param_4)

{
  ERigControlType EVar1;
  code *pcVar2;
  bool bVar3;
  code **ppcVar4;
  undefined1 auStackY_1f8 [32];
  code *local_1c8 [2];
  code *local_1b8 [3];
  code **local_1a0;
  code *local_198 [2];
  code *local_188 [3];
  code **local_170;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  code *local_138 [2];
  code *local_128 [3];
  code **local_110;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  EVar1 = (param_1->Settings).ControlType;
  if (param_2 == EVar1) {
    switch(EVar1) {
    case Bool:
      local_1c8[0] = (code *)0x0;
      local_1a0 = FMemory::Malloc(0x20,8);
      *local_1a0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`8'::<lambda_1>,0,1>
                            ::_vftable_;
      local_1a0[1] = (code *)param_3;
      local_1a0[2] = (code *)param_4;
      local_1a0[3] = (code *)param_1;
      if (local_1a0 + 1 != (code **)0x0) {
        local_1c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_1c8);
      if (local_1c8[0] != (code *)0x0) {
        ppcVar4 = local_1c8 + 2;
        if (local_1a0 != (code **)0x0) {
          ppcVar4 = local_1a0;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Float:
    case ScaleFloat:
      local_198[0] = (code *)0x0;
      local_170 = FMemory::Malloc(0x20,8);
      *local_170 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`9'::<lambda_2>,0,1>
                            ::_vftable_;
      local_170[1] = (code *)param_3;
      local_170[2] = (code *)param_4;
      local_170[3] = (code *)param_1;
      if (local_170 + 1 != (code **)0x0) {
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_198);
      if (local_198[0] != (code *)0x0) {
        ppcVar4 = local_198 + 2;
        if (local_170 != (code **)0x0) {
          ppcVar4 = local_170;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Integer:
      local_168[0] = (code *)0x0;
      local_140 = FMemory::Malloc(0x20,8);
      *local_140 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`10'::<lambda_3>,0,1>
                            ::_vftable_;
      local_140[1] = (code *)param_3;
      local_140[2] = (code *)param_4;
      local_140[3] = (code *)param_1;
      if (local_140 + 1 != (code **)0x0) {
        local_168[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_168);
      if (local_168[0] != (code *)0x0) {
        ppcVar4 = local_168 + 2;
        if (local_140 != (code **)0x0) {
          ppcVar4 = local_140;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Vector2D:
      local_138[0] = (code *)0x0;
      local_110 = FMemory::Malloc(0x20,8);
      *local_110 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`11'::<lambda_4>,0,1>
                            ::_vftable_;
      local_110[1] = (code *)param_3;
      local_110[2] = (code *)param_4;
      local_110[3] = (code *)param_1;
      if (local_110 + 1 != (code **)0x0) {
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_138);
      if (local_138[0] != (code *)0x0) {
        ppcVar4 = local_138 + 2;
        if (local_110 != (code **)0x0) {
          ppcVar4 = local_110;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Position:
    case Scale:
      local_108[0] = (code *)0x0;
      local_e0 = FMemory::Malloc(0x20,8);
      *local_e0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`12'::<lambda_5>,0,1>
                           ::_vftable_;
      local_e0[1] = (code *)param_3;
      local_e0[2] = (code *)param_4;
      local_e0[3] = (code *)param_1;
      if (local_e0 + 1 != (code **)0x0) {
        local_108[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_108);
      if (local_108[0] != (code *)0x0) {
        ppcVar4 = local_108 + 2;
        if (local_e0 != (code **)0x0) {
          ppcVar4 = local_e0;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Rotator:
      local_d8[0] = (code *)0x0;
      local_b0 = FMemory::Malloc(0x20,8);
      *local_b0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`13'::<lambda_6>,0,1>
                           ::_vftable_;
      local_b0[1] = (code *)param_3;
      local_b0[2] = (code *)param_4;
      local_b0[3] = (code *)param_1;
      if (local_b0 + 1 != (code **)0x0) {
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>,void>
                      ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_d8);
      if (local_d8[0] != (code *)0x0) {
        ppcVar4 = local_d8 + 2;
        if (local_b0 != (code **)0x0) {
          ppcVar4 = local_b0;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case Transform:
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x20,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`14'::<lambda_7>,0,1>
                           ::_vftable_;
      local_80[1] = (code *)param_3;
      local_80[2] = (code *)param_4;
      local_80[3] = (code *)param_1;
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>,void>
                      ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_a8);
      if (local_a8[0] != (code *)0x0) {
        ppcVar4 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar4 = local_80;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case TransformNoScale:
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x20,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`15'::<lambda_8>,0,1>
                           ::_vftable_;
      local_50[1] = (code *)param_3;
      local_50[2] = (code *)param_4;
      local_50[3] = (code *)param_1;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>,void>
                      ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar4 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar4 = local_50;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    case EulerTransform:
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *local_20 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`16'::<lambda_9>,0,1>
                           ::_vftable_;
      local_20[1] = (code *)param_3;
      local_20[2] = (code *)param_4;
      local_20[3] = (code *)param_1;
      if (local_20 + 1 != (code **)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>,void>
                      ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        ppcVar4 = local_48 + 2;
        if (local_20 != (code **)0x0) {
          ppcVar4 = local_20;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      break;
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x390,L"");
      if (bVar3) goto code_r0x00014a3dcbe2;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4803226398594433856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                       ,0x340,"InControlType == InControlElement->Settings.ControlType");
    if (bVar3) {
code_r0x00014a3dcbe2:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AddCustomUpdateFunction @ 14a3dcc40

void __thiscall
FControlRigVariableMappings::AddCustomUpdateFunction
          (FControlRigVariableMappings *this,TFunction<void___cdecl(void)> *param_1)

{
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TFunction<void___cdecl(void)> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->CustomUpdateFunctions;
  pTVar3 = (TFunction<void___cdecl(void)> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->CustomUpdateFunctions).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->CustomUpdateFunctions).ArrayNum;
  piVar2 = &(this->CustomUpdateFunctions).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->CustomUpdateFunctions).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(longlong *)pFVar8 = *(longlong *)param_1;
  *(longlong *)(pFVar8 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar5 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar8 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar8 + 0x18) = lVar5;
  *(longlong *)(pFVar8 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar8 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// AddCustomVariableFunction @ 14a3dcd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FControlRigVariableMappings::AddCustomVariableFunction
          (FControlRigVariableMappings *this,FRigVMExternalVariable *param_1,FProperty *param_2,
          uchar *param_3)

{
  code *pcVar1;
  FProperty *pFVar2;
  char cVar3;
  bool bVar4;
  code **ppcVar5;
  undefined1 auStackY_658 [32];
  FProperty **local_628;
  code *pcStack_620;
  FProperty *local_618;
  code *local_610;
  code *pcStack_608;
  code *local_600;
  code *pcStack_5f8;
  longlong local_5f0;
  longlong local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  code *local_5b0;
  code *pcStack_5a8;
  code *pcStack_5a0;
  code *pcStack_598;
  code *pcStack_590;
  FProperty **local_588;
  code *pcStack_580;
  code *local_578;
  code *pcStack_570;
  code *pcStack_568;
  code *pcStack_560;
  code *pcStack_558;
  FProperty **local_550;
  code *pcStack_548;
  code *local_540;
  code *pcStack_538;
  code *pcStack_530;
  code *pcStack_528;
  code *pcStack_520;
  FProperty **local_518;
  code *pcStack_510;
  code *local_508;
  code *pcStack_500;
  code *pcStack_4f8;
  code *pcStack_4f0;
  code *pcStack_4e8;
  FProperty **local_4e0;
  code *pcStack_4d8;
  code *local_4d0;
  code *pcStack_4c8;
  code *pcStack_4c0;
  code *pcStack_4b8;
  code *pcStack_4b0;
  FProperty **local_4a8;
  code *pcStack_4a0;
  code *local_498;
  code *pcStack_490;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  FProperty **local_470;
  code *pcStack_468;
  code *local_460;
  code *pcStack_458;
  code *pcStack_450;
  code *pcStack_448;
  code *pcStack_440;
  FProperty **local_438;
  code *pcStack_430;
  code *local_428;
  code *pcStack_420;
  code *pcStack_418;
  code *pcStack_410;
  code *pcStack_408;
  FProperty **local_400;
  code *pcStack_3f8;
  FProperty *local_3f0;
  code *pcStack_3e8;
  FProperty *local_3b0;
  code *pcStack_3a8;
  FProperty *local_370;
  code *pcStack_368;
  FProperty *local_330;
  code *pcStack_328;
  FProperty *local_2f0;
  code *pcStack_2e8;
  code *local_2a8 [2];
  code *local_298 [3];
  code **local_280;
  code *local_278 [2];
  code *local_268 [3];
  code **local_250;
  code *local_248 [2];
  code *local_238 [3];
  code **local_220;
  code *local_218 [2];
  code *local_208 [3];
  code **local_1f0;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  code *local_1b8 [2];
  code *local_1a8 [3];
  code **local_190;
  code *local_188 [2];
  code *local_178 [3];
  code **local_160;
  code *local_158 [2];
  code *local_148 [3];
  code **local_130;
  code *local_128 [2];
  code *local_118 [3];
  code **local_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_658;
  local_618 = param_2;
  if (((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x11 & 1) != 0))
     && (FLazyName::Resolve(&RigVMTypeUtils::BoolTypeName), param_1->_padding_ == local_5f0)) {
    pcStack_458 = (code *)param_1->_padding_;
    pcStack_450 = (code *)param_1->_padding_;
    pcStack_448 = (code *)param_1->_padding_;
    pcStack_440 = (code *)param_1->_padding_;
    local_188[0] = (code *)0x0;
    local_628 = (FProperty **)param_1->_padding_;
    pcStack_620 = (code *)param_1->Memory;
    local_460 = (code *)param_3;
    local_438 = local_628;
    pcStack_430 = pcStack_620;
    local_160 = FMemory::Malloc(0x40,8);
    *local_160 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`5'::<lambda_1>,0,1>
                          ::_vftable_;
    local_160[1] = local_460;
    local_160[2] = pcStack_458;
    local_160[3] = pcStack_450;
    local_160[4] = pcStack_448;
    local_160[5] = pcStack_440;
    local_160[6] = (code *)local_438;
    local_160[7] = pcStack_620;
    if (local_160 + 1 != (code **)0x0) {
      local_188[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l5::<lambda_1>,void>
                     ::Call;
    }
    AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_188);
    if (local_188[0] == (code *)0x0) {
      return;
    }
    ppcVar5 = local_188 + 2;
    if (local_160 != (code **)0x0) {
      ppcVar5 = local_160;
    }
    (**(code **)(*ppcVar5 + 0x10))();
    return;
  }
  if (local_618 != (FProperty *)0x0) {
    if (((*(uint *)(local_618->_padding_ + 0x18) >> 8 & 1) != 0) &&
       ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName), param_1->_padding_ == local_5e8 ||
        (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName), param_1->_padding_ == local_5e0)))) {
      FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
      pcStack_4c8 = (code *)param_1->_padding_;
      pcStack_4c0 = (code *)param_1->_padding_;
      pcStack_4b8 = (code *)param_1->_padding_;
      pcStack_4b0 = (code *)param_1->_padding_;
      if (param_1->_padding_ != local_5d8) {
        local_628 = (FProperty **)param_1->_padding_;
        pcStack_620 = (code *)param_1->Memory;
        local_1e8[0] = (code *)0x0;
        local_4d0 = (code *)param_3;
        local_4a8 = local_628;
        pcStack_4a0 = pcStack_620;
        local_1c0 = FMemory::Malloc(0x40,8);
        *local_1c0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`14'::<lambda_3>,0,1>
                              ::_vftable_;
        local_1c0[1] = local_4d0;
        local_1c0[2] = pcStack_4c8;
        local_1c0[3] = pcStack_4c0;
        local_1c0[4] = pcStack_4b8;
        local_1c0[5] = pcStack_4b0;
        local_1c0[6] = (code *)local_4a8;
        local_1c0[7] = pcStack_620;
        if (local_1c0 + 1 != (code **)0x0) {
          local_1e8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>,void>
                         ::Call;
        }
        AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_1e8);
        if (local_1e8[0] == (code *)0x0) {
          return;
        }
        ppcVar5 = local_1e8 + 2;
        if (local_1c0 != (code **)0x0) {
          ppcVar5 = local_1c0;
        }
        (**(code **)(*ppcVar5 + 0x10))();
        return;
      }
      local_628 = (FProperty **)param_1->_padding_;
      pcStack_620 = (code *)param_1->Memory;
      local_1b8[0] = (code *)0x0;
      local_498 = (code *)param_3;
      pcStack_490 = pcStack_4c8;
      pcStack_488 = pcStack_4c0;
      pcStack_480 = pcStack_4b8;
      pcStack_478 = pcStack_4b0;
      local_470 = local_628;
      pcStack_468 = pcStack_620;
      local_190 = FMemory::Malloc(0x40,8);
      *local_190 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`12'::<lambda_2>,0,1>
                            ::_vftable_;
      local_190[1] = local_498;
      local_190[2] = pcStack_490;
      local_190[3] = pcStack_488;
      local_190[4] = pcStack_480;
      local_190[5] = pcStack_478;
      local_190[6] = (code *)local_470;
      local_190[7] = pcStack_620;
      if (local_190 + 1 != (code **)0x0) {
        local_1b8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l12::<lambda_2>,void>
                       ::Call;
      }
      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_1b8);
      if (local_1b8[0] == (code *)0x0) {
        return;
      }
      ppcVar5 = local_1b8 + 2;
      if (local_190 != (code **)0x0) {
        ppcVar5 = local_190;
      }
      (**(code **)(*ppcVar5 + 0x10))();
      return;
    }
    if (local_618 != (FProperty *)0x0) {
      if (((*(ulonglong *)(local_618->_padding_ + 0x18) & 0x100000000) != 0) &&
         ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName), param_1->_padding_ == local_5d0 ||
          (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName), param_1->_padding_ == local_5c8))))
      {
        FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
        pcStack_538 = (code *)param_1->_padding_;
        pcStack_530 = (code *)param_1->_padding_;
        pcStack_528 = (code *)param_1->_padding_;
        pcStack_520 = (code *)param_1->_padding_;
        if (param_1->_padding_ != local_5c0) {
          local_628 = (FProperty **)param_1->_padding_;
          pcStack_620 = (code *)param_1->Memory;
          local_248[0] = (code *)0x0;
          local_540 = (code *)param_3;
          local_518 = local_628;
          pcStack_510 = pcStack_620;
          local_220 = FMemory::Malloc(0x40,8);
          *local_220 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`23'::<lambda_5>,0,1>
                                ::_vftable_;
          local_220[1] = local_540;
          local_220[2] = pcStack_538;
          local_220[3] = pcStack_530;
          local_220[4] = pcStack_528;
          local_220[5] = pcStack_520;
          local_220[6] = (code *)local_518;
          local_220[7] = pcStack_620;
          if (local_220 + 1 != (code **)0x0) {
            local_248[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l23::<lambda_5>,void>
                           ::Call;
          }
          AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_248);
          if (local_248[0] == (code *)0x0) {
            return;
          }
          ppcVar5 = local_248 + 2;
          if (local_220 != (code **)0x0) {
            ppcVar5 = local_220;
          }
          (**(code **)(*ppcVar5 + 0x10))();
          return;
        }
        local_628 = (FProperty **)param_1->_padding_;
        pcStack_620 = (code *)param_1->Memory;
        local_218[0] = (code *)0x0;
        local_508 = (code *)param_3;
        pcStack_500 = pcStack_538;
        pcStack_4f8 = pcStack_530;
        pcStack_4f0 = pcStack_528;
        pcStack_4e8 = pcStack_520;
        local_4e0 = local_628;
        pcStack_4d8 = pcStack_620;
        local_1f0 = FMemory::Malloc(0x40,8);
        *local_1f0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`21'::<lambda_4>,0,1>
                              ::_vftable_;
        local_1f0[1] = local_508;
        local_1f0[2] = pcStack_500;
        local_1f0[3] = pcStack_4f8;
        local_1f0[4] = pcStack_4f0;
        local_1f0[5] = pcStack_4e8;
        local_1f0[6] = (code *)local_4e0;
        local_1f0[7] = pcStack_620;
        if (local_1f0 + 1 != (code **)0x0) {
          local_218[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>,void>
                         ::Call;
        }
        AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_218);
        if (local_218[0] == (code *)0x0) {
          return;
        }
        ppcVar5 = local_218 + 2;
        if (local_1f0 != (code **)0x0) {
          ppcVar5 = local_1f0;
        }
        (**(code **)(*ppcVar5 + 0x10))();
        return;
      }
      if (local_618 != (FProperty *)0x0) {
        if (((*(byte *)(local_618->_padding_ + 0x18) & 0x80) != 0) &&
           (FLazyName::Resolve(&RigVMTypeUtils::Int32TypeName), param_1->_padding_ == local_5b8)) {
          pcStack_570 = (code *)param_1->_padding_;
          pcStack_568 = (code *)param_1->_padding_;
          pcStack_560 = (code *)param_1->_padding_;
          pcStack_558 = (code *)param_1->_padding_;
          local_278[0] = (code *)0x0;
          local_628 = (FProperty **)param_1->_padding_;
          pcStack_620 = (code *)param_1->Memory;
          local_578 = (code *)param_3;
          local_550 = local_628;
          pcStack_548 = pcStack_620;
          local_250 = FMemory::Malloc(0x40,8);
          *local_250 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`27'::<lambda_6>,0,1>
                                ::_vftable_;
          local_250[1] = local_578;
          local_250[2] = pcStack_570;
          local_250[3] = pcStack_568;
          local_250[4] = pcStack_560;
          local_250[5] = pcStack_558;
          local_250[6] = (code *)local_550;
          local_250[7] = pcStack_620;
          if (local_250 + 1 != (code **)0x0) {
            local_278[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l27::<lambda_6>,void>
                           ::Call;
          }
          AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_278);
          if (local_278[0] == (code *)0x0) {
            return;
          }
          ppcVar5 = local_278 + 2;
          if (local_250 != (code **)0x0) {
            ppcVar5 = local_250;
          }
          (**(code **)(*ppcVar5 + 0x10))();
          return;
        }
        if (local_618 != (FProperty *)0x0) {
          if (((*(uint *)(local_618->_padding_ + 0x18) >> 0xd & 1) != 0) &&
             (FLazyName::Resolve(&RigVMTypeUtils::FNameTypeName),
             (code *)param_1->_padding_ == local_610)) {
            pcStack_5a8 = (code *)param_1->_padding_;
            pcStack_5a0 = (code *)param_1->_padding_;
            pcStack_598 = (code *)param_1->_padding_;
            pcStack_590 = (code *)param_1->_padding_;
            local_2a8[0] = (code *)0x0;
            local_628 = (FProperty **)param_1->_padding_;
            pcStack_620 = (code *)param_1->Memory;
            local_5b0 = (code *)param_3;
            local_588 = local_628;
            pcStack_580 = pcStack_620;
            local_280 = FMemory::Malloc(0x40,8);
            *local_280 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`31'::<lambda_7>,0,1>
                                  ::_vftable_;
            local_280[1] = local_5b0;
            local_280[2] = pcStack_5a8;
            local_280[3] = pcStack_5a0;
            local_280[4] = pcStack_598;
            local_280[5] = pcStack_590;
            local_280[6] = (code *)local_588;
            local_280[7] = pcStack_620;
            if (local_280 + 1 != (code **)0x0) {
              local_2a8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l31::<lambda_7>,void>
                             ::Call;
            }
            AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_2a8);
            if (local_2a8[0] == (code *)0x0) {
              return;
            }
            ppcVar5 = local_2a8 + 2;
            if (local_280 != (code **)0x0) {
              ppcVar5 = local_280;
            }
            (**(code **)(*ppcVar5 + 0x10))();
            return;
          }
          if (local_618 != (FProperty *)0x0) {
            if (((*(uint *)(local_618->_padding_ + 0x18) >> 0xd & 1) != 0) &&
               (FLazyName::Resolve(&RigVMTypeUtils::FStringTypeName),
               (code *)param_1->_padding_ == local_600)) {
              pcStack_420 = (code *)param_1->_padding_;
              pcStack_418 = (code *)param_1->_padding_;
              pcStack_410 = (code *)param_1->_padding_;
              pcStack_408 = (code *)param_1->_padding_;
              local_68[0] = (code *)0x0;
              local_628 = (FProperty **)param_1->_padding_;
              pcStack_620 = (code *)param_1->Memory;
              local_428 = (code *)param_3;
              local_400 = local_628;
              pcStack_3f8 = pcStack_620;
              local_40 = FMemory::Malloc(0x40,8);
              *local_40 = (code *)&UE::Core::Private::Function::
                                   TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`35'::<lambda_8>,0,1>
                                   ::_vftable_;
              local_40[1] = local_428;
              local_40[2] = pcStack_420;
              local_40[3] = pcStack_418;
              local_40[4] = pcStack_410;
              local_40[5] = pcStack_408;
              local_40[6] = (code *)local_400;
              local_40[7] = pcStack_620;
              if (local_40 + 1 != (code **)0x0) {
                local_68[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l35::<lambda_8>,void>
                              ::Call;
              }
              AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_68);
              if (local_68[0] == (code *)0x0) {
                return;
              }
              ppcVar5 = local_68 + 2;
              if (local_40 != (code **)0x0) {
                ppcVar5 = local_40;
              }
              (**(code **)(*ppcVar5 + 0x10))();
              return;
            }
            pFVar2 = local_618;
            if (local_618 != (FProperty *)0x0) {
              if ((*(uint *)(local_618->_padding_ + 0x18) >> 0x14 & 1) != 0) {
                local_628 = (FProperty **)param_1->_padding_;
                pcStack_620 = (code *)param_1->_padding_;
                local_158[0] = (code *)0x0;
                local_600 = (code *)param_1->_padding_;
                pcStack_5f8 = (code *)param_1->_padding_;
                local_610 = (code *)param_1->_padding_;
                pcStack_608 = (code *)param_1->Memory;
                local_3b0 = local_618;
                pcStack_3a8 = (code *)param_3;
                local_130 = FMemory::Malloc(0x48,8);
                *local_130 = (code *)&UE::Core::Private::Function::
                                      TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`39'::<lambda_9>,0,1>
                                      ::_vftable_;
                local_130[1] = (code *)local_3b0;
                local_130[2] = pcStack_3a8;
                local_130[3] = (code *)local_628;
                local_130[4] = pcStack_620;
                local_130[5] = local_600;
                local_130[6] = pcStack_5f8;
                local_130[7] = local_610;
                local_130[8] = pcStack_608;
                if (local_130 + 1 != (code **)0x0) {
                  local_158[0] = UE::Core::Private::Function::
                                 TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l39::<lambda_9>,void>
                                 ::Call;
                }
                AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_158);
                if (local_158[0] == (code *)0x0) {
                  return;
                }
                ppcVar5 = local_158 + 2;
                if (local_130 != (code **)0x0) {
                  ppcVar5 = local_130;
                }
                (**(code **)(*ppcVar5 + 0x10))();
                return;
              }
              if (local_618 != (FProperty *)0x0) {
                if ((*(uint *)(local_618->_padding_ + 0x18) >> 0x15 & 1) == 0) {
                  if (local_618 == (FProperty *)0x0) goto LAB_14a3ddb97;
                  if ((*(uint *)(local_618->_padding_ + 0x18) >> 0x10 & 1) == 0) {
                    if (local_618 == (FProperty *)0x0) goto LAB_14a3ddb97;
                    if ((*(ulonglong *)(local_618->_padding_ + 0x18) & 0x1000000000000) == 0) {
                      if ((local_618 == (FProperty *)0x0) ||
                         ((*(byte *)(local_618->_padding_ + 0x18) & 0x40) == 0)) goto LAB_14a3ddb97;
                      cVar3 = (**(code **)(local_618->_padding_ + 0x1a0))(local_618);
                      if (cVar3 != '\0') {
                        local_628 = (FProperty **)param_1->_padding_;
                        pcStack_620 = (code *)param_1->_padding_;
                        local_98[0] = (code *)0x0;
                        local_600 = (code *)param_1->_padding_;
                        pcStack_5f8 = (code *)param_1->_padding_;
                        local_610 = (code *)param_1->_padding_;
                        pcStack_608 = (code *)param_1->Memory;
                        local_3f0 = pFVar2;
                        pcStack_3e8 = (code *)param_3;
                        local_70 = FMemory::Malloc(0x48,8);
                        *local_70 = (code *)&UE::Core::Private::Function::
                                             TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`67'::<lambda_13>,0,1>
                                             ::_vftable_;
                        local_70[1] = (code *)local_3f0;
                        local_70[2] = pcStack_3e8;
                        local_70[3] = (code *)local_628;
                        local_70[4] = pcStack_620;
                        local_70[5] = local_600;
                        local_70[6] = pcStack_5f8;
                        local_70[7] = local_610;
                        local_70[8] = pcStack_608;
                        if (local_70 + 1 != (code **)0x0) {
                          local_98[0] = UE::Core::Private::Function::
                                        TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l67::<lambda_13>,void>
                                        ::Call;
                        }
                        AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_98);
                        if (local_98[0] == (code *)0x0) {
                          return;
                        }
                        ppcVar5 = local_98 + 2;
                        if (local_70 != (code **)0x0) {
                          ppcVar5 = local_70;
                        }
                        (**(code **)(*ppcVar5 + 0x10))();
                        return;
                      }
                      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<4803226398594434046>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                         ,0x3fe,"ByteProperty->SameType(InVariable.Property)");
                      if (!bVar4) {
                        return;
                      }
                    }
                    else {
                      cVar3 = (**(code **)(local_618->_padding_ + 0x1a0))(local_618);
                      if (cVar3 != '\0') {
                        local_628 = (FProperty **)param_1->_padding_;
                        pcStack_620 = (code *)param_1->_padding_;
                        local_c8[0] = (code *)0x0;
                        local_600 = (code *)param_1->_padding_;
                        pcStack_5f8 = (code *)param_1->_padding_;
                        local_610 = (code *)param_1->_padding_;
                        pcStack_608 = (code *)param_1->Memory;
                        local_2f0 = pFVar2;
                        pcStack_2e8 = (code *)param_3;
                        local_a0 = FMemory::Malloc(0x48,8);
                        *local_a0 = (code *)&UE::Core::Private::Function::
                                             TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`60'::<lambda_12>,0,1>
                                             ::_vftable_;
                        local_a0[1] = (code *)local_2f0;
                        local_a0[2] = pcStack_2e8;
                        local_a0[3] = (code *)local_628;
                        local_a0[4] = pcStack_620;
                        local_a0[5] = local_600;
                        local_a0[6] = pcStack_5f8;
                        local_a0[7] = local_610;
                        local_a0[8] = pcStack_608;
                        if (local_a0 + 1 != (code **)0x0) {
                          local_c8[0] = UE::Core::Private::Function::
                                        TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l60::<lambda_12>,void>
                                        ::Call;
                        }
                        AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_c8);
                        if (local_c8[0] == (code *)0x0) {
                          return;
                        }
                        ppcVar5 = local_c8 + 2;
                        if (local_a0 != (code **)0x0) {
                          ppcVar5 = local_a0;
                        }
                        (**(code **)(*ppcVar5 + 0x10))();
                        return;
                      }
                      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<4803226398594434036>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                         ,0x3f4,"EnumProperty->SameType(InVariable.Property)");
                      if (!bVar4) {
                        return;
                      }
                    }
                  }
                  else {
                    cVar3 = (**(code **)(local_618->_padding_ + 0x1a0))(local_618);
                    if (cVar3 != '\0') {
                      local_628 = (FProperty **)param_1->_padding_;
                      pcStack_620 = (code *)param_1->_padding_;
                      local_f8[0] = (code *)0x0;
                      local_600 = (code *)param_1->_padding_;
                      pcStack_5f8 = (code *)param_1->_padding_;
                      local_610 = (code *)param_1->_padding_;
                      pcStack_608 = (code *)param_1->Memory;
                      local_330 = pFVar2;
                      pcStack_328 = (code *)param_3;
                      local_d0 = FMemory::Malloc(0x48,8);
                      *local_d0 = (code *)&UE::Core::Private::Function::
                                           TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`53'::<lambda_11>,0,1>
                                           ::_vftable_;
                      local_d0[1] = (code *)local_330;
                      local_d0[2] = pcStack_328;
                      local_d0[3] = (code *)local_628;
                      local_d0[4] = pcStack_620;
                      local_d0[5] = local_600;
                      local_d0[6] = pcStack_5f8;
                      local_d0[7] = local_610;
                      local_d0[8] = pcStack_608;
                      if (local_d0 + 1 != (code **)0x0) {
                        local_f8[0] = UE::Core::Private::Function::
                                      TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l53::<lambda_11>,void>
                                      ::Call;
                      }
                      AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_f8);
                      if (local_f8[0] == (code *)0x0) {
                        return;
                      }
                      ppcVar5 = local_f8 + 2;
                      if (local_d0 != (code **)0x0) {
                        ppcVar5 = local_d0;
                      }
                      (**(code **)(*ppcVar5 + 0x10))();
                      return;
                    }
                    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<4803226398594434026>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                       ,0x3ea,"ObjectProperty->SameType(InVariable.Property)");
                    if (!bVar4) {
                      return;
                    }
                  }
                }
                else {
                  cVar3 = (**(code **)(local_618->_padding_ + 0x1a0))(local_618);
                  if (cVar3 != '\0') {
                    local_628 = (FProperty **)param_1->_padding_;
                    pcStack_620 = (code *)param_1->_padding_;
                    local_128[0] = (code *)0x0;
                    local_600 = (code *)param_1->_padding_;
                    pcStack_5f8 = (code *)param_1->_padding_;
                    local_610 = (code *)param_1->_padding_;
                    pcStack_608 = (code *)param_1->Memory;
                    local_370 = pFVar2;
                    pcStack_368 = (code *)param_3;
                    local_100 = FMemory::Malloc(0x48,8);
                    *local_100 = (code *)&UE::Core::Private::Function::
                                          TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`46'::<lambda_10>,0,1>
                                          ::_vftable_;
                    local_100[1] = (code *)local_370;
                    local_100[2] = pcStack_368;
                    local_100[3] = (code *)local_628;
                    local_100[4] = pcStack_620;
                    local_100[5] = local_600;
                    local_100[6] = pcStack_5f8;
                    local_100[7] = local_610;
                    local_100[8] = pcStack_608;
                    if (local_100 + 1 != (code **)0x0) {
                      local_128[0] = UE::Core::Private::Function::
                                     TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l46::<lambda_10>,void>
                                     ::Call;
                    }
                    AddCustomUpdateFunction(this,(TFunction<void___cdecl(void)> *)local_128);
                    if (local_128[0] == (code *)0x0) {
                      return;
                    }
                    ppcVar5 = local_128 + 2;
                    if (local_100 != (code **)0x0) {
                      ppcVar5 = local_100;
                    }
                    (**(code **)(*ppcVar5 + 0x10))();
                    return;
                  }
                  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<4803226398594434016>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                     ,0x3e0,"ArrayProperty->SameType(InVariable.Property)");
                  if (!bVar4) {
                    return;
                  }
                }
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_14a3ddb97:
  local_628 = &local_618;
  `FControlRigVariableMappings::AddCustomVariableFunction'::__l69::<lambda_14>::operator()
            (&local_628);
  return;
}

// AddUpdateFunction @ 14a3e74f0

void __thiscall
FControlRigVariableMappings::AddUpdateFunction
          (FControlRigVariableMappings *this,
          TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *param_1)

{
  TArray<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->UpdateFunctions;
  pTVar3 = (TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
           (pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->UpdateFunctions).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->UpdateFunctions).ArrayNum;
  piVar2 = &(this->UpdateFunctions).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->UpdateFunctions).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(longlong *)pFVar8 = *(longlong *)param_1;
  *(longlong *)(pFVar8 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar5 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar8 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar8 + 0x18) = lVar5;
  *(longlong *)(pFVar8 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar8 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// AddVariableFunction @ 14a3e75d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::AddVariableFunction
          (FControlRigVariableMappings *this,FRigVMExternalVariable *param_1,FProperty *param_2)

{
  int *piVar1;
  FRigVMExternalVariable *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  uchar *puVar6;
  FProperty *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  code **ppcVar12;
  undefined1 auStackY_498 [32];
  FProperty *local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  FProperty **local_3f0;
  FProperty *local_3e8;
  FControlRigVariableMappings *pFStack_3e0;
  int local_3d8;
  undefined4 uStack_3d4;
  FProperty *local_3d0;
  FControlRigVariableMappings *pFStack_3c8;
  int local_3c0;
  undefined4 uStack_3bc;
  FProperty *local_3b8;
  FControlRigVariableMappings *pFStack_3b0;
  int local_3a8;
  undefined4 uStack_3a4;
  FProperty *local_3a0;
  FControlRigVariableMappings *pFStack_398;
  int local_390;
  undefined4 uStack_38c;
  FProperty *local_388;
  FControlRigVariableMappings *pFStack_380;
  int local_378;
  undefined4 uStack_374;
  FProperty *local_370;
  FControlRigVariableMappings *pFStack_368;
  int local_360;
  undefined4 uStack_35c;
  FProperty *local_358;
  FControlRigVariableMappings *pFStack_350;
  int local_348;
  undefined4 uStack_344;
  FProperty *local_340;
  FControlRigVariableMappings *pFStack_338;
  int local_330;
  undefined4 uStack_32c;
  FProperty *local_328;
  FControlRigVariableMappings *pFStack_320;
  int local_318;
  undefined4 uStack_314;
  FProperty *local_310;
  FControlRigVariableMappings *pFStack_308;
  int local_300;
  undefined4 uStack_2fc;
  FProperty *local_2f8;
  FControlRigVariableMappings *pFStack_2f0;
  int local_2e8;
  undefined4 uStack_2e4;
  FProperty *local_2e0;
  FControlRigVariableMappings *pFStack_2d8;
  int local_2d0;
  undefined4 uStack_2cc;
  FProperty *local_2c8;
  FControlRigVariableMappings *pFStack_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  code *local_2a8 [2];
  code *local_298 [3];
  code **local_280;
  code *local_278 [2];
  code *local_268 [3];
  code **local_250;
  code *local_248 [2];
  code *local_238 [3];
  code **local_220;
  code *local_218 [2];
  code *local_208 [3];
  code **local_1f0;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  code *local_1b8 [2];
  code *local_1a8 [3];
  code **local_190;
  code *local_188 [2];
  code *local_178 [3];
  code **local_160;
  code *local_158 [2];
  code *local_148 [3];
  code **local_130;
  code *local_128 [2];
  code *local_118 [3];
  code **local_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pFVar2 = (FRigVMExternalVariable *)(this->Variables).AllocatorInstance.Data;
  local_448 = param_2;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Variables).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = (this->Variables).ArrayNum;
  piVar1 = &(this->Variables).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(this->Variables).AllocatorInstance,piVar1);
  }
  (this->Variables).ArrayNum = iVar10 + 1;
  lVar5 = param_1->_padding_;
  lVar11 = (longlong)iVar10;
  pFVar3 = (this->Variables).AllocatorInstance.Data;
  *(longlong *)(pFVar3 + lVar11 * 0x30) = param_1->_padding_;
  *(longlong *)(pFVar3 + lVar11 * 0x30 + 8) = lVar5;
  lVar5 = param_1->_padding_;
  *(longlong *)(pFVar3 + lVar11 * 0x30 + 0x10) = param_1->_padding_;
  *(longlong *)(pFVar3 + lVar11 * 0x30 + 0x10 + 8) = lVar5;
  puVar6 = param_1->Memory;
  *(longlong *)(pFVar3 + lVar11 * 0x30 + 0x20) = param_1->_padding_;
  *(uchar **)(pFVar3 + lVar11 * 0x30 + 0x20 + 8) = puVar6;
  if (local_448 != (FProperty *)0x0) {
    if (((*(uint *)(local_448->_padding_ + 0x18) >> 0x11 & 1) != 0) &&
       (FLazyName::Resolve(&RigVMTypeUtils::BoolTypeName), param_1->_padding_ == local_440)) {
      local_3e8 = local_448;
      local_2a8[0] = (code *)0x0;
      pFStack_3e0 = this;
      local_3d8 = iVar10;
      local_280 = FMemory::Malloc(0x20,8);
      *local_280 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`5'::<lambda_1>,0,1>
                            ::_vftable_;
      local_280[1] = (code *)local_3e8;
      local_280[2] = (code *)pFStack_3e0;
      local_280[3] = (code *)CONCAT44(uStack_3d4,local_3d8);
      if (local_280 + 1 != (code **)0x0) {
        local_2a8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>,void,URigHierarchy_*,UObject_const_*>
                       ::Call;
      }
      AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_2a8);
      if (local_2a8[0] == (code *)0x0) {
        return;
      }
      ppcVar12 = local_2a8 + 2;
      if (local_280 != (code **)0x0) {
        ppcVar12 = local_280;
      }
      (**(code **)(*ppcVar12 + 0x10))();
      return;
    }
    if (local_448 != (FProperty *)0x0) {
      if (((*(uint *)(local_448->_padding_ + 0x18) >> 8 & 1) != 0) &&
         ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName), param_1->_padding_ == local_438 ||
          (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName), param_1->_padding_ == local_430))))
      {
        FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
        if (param_1->_padding_ != local_428) {
          local_3b8 = local_448;
          local_248[0] = (code *)0x0;
          pFStack_3b0 = this;
          local_3a8 = iVar10;
          local_220 = FMemory::Malloc(0x20,8);
          *local_220 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`14'::<lambda_3>,0,1>
                                ::_vftable_;
          local_220[1] = (code *)local_3b8;
          local_220[2] = (code *)pFStack_3b0;
          local_220[3] = (code *)CONCAT44(uStack_3a4,local_3a8);
          if (local_220 + 1 != (code **)0x0) {
            local_248[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>,void,URigHierarchy_*,UObject_const_*>
                           ::Call;
          }
          AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                 local_248);
          if (local_248[0] == (code *)0x0) {
            return;
          }
          ppcVar12 = local_248 + 2;
          if (local_220 != (code **)0x0) {
            ppcVar12 = local_220;
          }
          (**(code **)(*ppcVar12 + 0x10))();
          return;
        }
        local_3d0 = local_448;
        local_278[0] = (code *)0x0;
        pFStack_3c8 = this;
        local_3c0 = iVar10;
        local_250 = FMemory::Malloc(0x20,8);
        *local_250 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`12'::<lambda_2>,0,1>
                              ::_vftable_;
        local_250[1] = (code *)local_3d0;
        local_250[2] = (code *)pFStack_3c8;
        local_250[3] = (code *)CONCAT44(uStack_3bc,local_3c0);
        if (local_250 + 1 != (code **)0x0) {
          local_278[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>,void,URigHierarchy_*,UObject_const_*>
                         ::Call;
        }
        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)local_278
                         );
        if (local_278[0] == (code *)0x0) {
          return;
        }
        ppcVar12 = local_278 + 2;
        if (local_250 != (code **)0x0) {
          ppcVar12 = local_250;
        }
        (**(code **)(*ppcVar12 + 0x10))();
        return;
      }
      if (local_448 != (FProperty *)0x0) {
        if (((*(ulonglong *)(local_448->_padding_ + 0x18) & 0x100000000) != 0) &&
           ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName), param_1->_padding_ == local_420 ||
            (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName), param_1->_padding_ == local_418)))
           ) {
          FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
          if (param_1->_padding_ == local_410) {
            local_3a0 = local_448;
            local_218[0] = (code *)0x0;
            pFStack_398 = this;
            local_390 = iVar10;
            local_1f0 = FMemory::Malloc(0x20,8);
            *local_1f0 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`21'::<lambda_4>,0,1>
                                  ::_vftable_;
            local_1f0[1] = (code *)local_3a0;
            local_1f0[2] = (code *)pFStack_398;
            local_1f0[3] = (code *)CONCAT44(uStack_38c,local_390);
            if (local_1f0 + 1 != (code **)0x0) {
              local_218[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>,void,URigHierarchy_*,UObject_const_*>
                             ::Call;
            }
            AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                   local_218);
            if (local_218[0] == (code *)0x0) {
              return;
            }
            ppcVar12 = local_218 + 2;
            if (local_1f0 != (code **)0x0) {
              ppcVar12 = local_1f0;
            }
            (**(code **)(*ppcVar12 + 0x10))();
            return;
          }
          local_388 = local_448;
          local_1e8[0] = (code *)0x0;
          pFStack_380 = this;
          local_378 = iVar10;
          local_1c0 = FMemory::Malloc(0x20,8);
          *local_1c0 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`23'::<lambda_5>,0,1>
                                ::_vftable_;
          local_1c0[1] = (code *)local_388;
          local_1c0[2] = (code *)pFStack_380;
          local_1c0[3] = (code *)CONCAT44(uStack_374,local_378);
          if (local_1c0 + 1 != (code **)0x0) {
            local_1e8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>,void,URigHierarchy_*,UObject_const_*>
                           ::Call;
          }
          AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                 local_1e8);
          if (local_1e8[0] == (code *)0x0) {
            return;
          }
          ppcVar12 = local_1e8 + 2;
          if (local_1c0 != (code **)0x0) {
            ppcVar12 = local_1c0;
          }
          (**(code **)(*ppcVar12 + 0x10))();
          return;
        }
        if (local_448 != (FProperty *)0x0) {
          if (((*(byte *)(local_448->_padding_ + 0x18) & 0x80) != 0) &&
             (FLazyName::Resolve(&RigVMTypeUtils::Int32TypeName), param_1->_padding_ == local_408))
          {
            local_370 = local_448;
            local_1b8[0] = (code *)0x0;
            pFStack_368 = this;
            local_360 = iVar10;
            local_190 = FMemory::Malloc(0x20,8);
            *local_190 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`27'::<lambda_6>,0,1>
                                  ::_vftable_;
            local_190[1] = (code *)local_370;
            local_190[2] = (code *)pFStack_368;
            local_190[3] = (code *)CONCAT44(uStack_35c,local_360);
            if (local_190 + 1 != (code **)0x0) {
              local_1b8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>,void,URigHierarchy_*,UObject_const_*>
                             ::Call;
            }
            AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                   local_1b8);
            if (local_1b8[0] == (code *)0x0) {
              return;
            }
            ppcVar12 = local_1b8 + 2;
            if (local_190 != (code **)0x0) {
              ppcVar12 = local_190;
            }
            (**(code **)(*ppcVar12 + 0x10))();
            return;
          }
          if (local_448 != (FProperty *)0x0) {
            if (((*(uint *)(local_448->_padding_ + 0x18) >> 0xd & 1) != 0) &&
               (FLazyName::Resolve(&RigVMTypeUtils::FNameTypeName), param_1->_padding_ == local_400)
               ) {
              local_358 = local_448;
              local_188[0] = (code *)0x0;
              pFStack_350 = this;
              local_348 = iVar10;
              local_160 = FMemory::Malloc(0x20,8);
              *local_160 = (code *)&UE::Core::Private::Function::
                                    TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`31'::<lambda_7>,0,1>
                                    ::_vftable_;
              local_160[1] = (code *)local_358;
              local_160[2] = (code *)pFStack_350;
              local_160[3] = (code *)CONCAT44(uStack_344,local_348);
              if (local_160 + 1 != (code **)0x0) {
                local_188[0] = UE::Core::Private::Function::
                               TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>,void,URigHierarchy_*,UObject_const_*>
                               ::Call;
              }
              AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                     local_188);
              if (local_188[0] == (code *)0x0) {
                return;
              }
              ppcVar12 = local_188 + 2;
              if (local_160 != (code **)0x0) {
                ppcVar12 = local_160;
              }
              (**(code **)(*ppcVar12 + 0x10))();
              return;
            }
            if (local_448 != (FProperty *)0x0) {
              if (((*(uint *)(local_448->_padding_ + 0x18) >> 0xd & 1) != 0) &&
                 (FLazyName::Resolve(&RigVMTypeUtils::FStringTypeName),
                 param_1->_padding_ == local_3f8)) {
                local_340 = local_448;
                local_158[0] = (code *)0x0;
                pFStack_338 = this;
                local_330 = iVar10;
                local_130 = FMemory::Malloc(0x20,8);
                *local_130 = (code *)&UE::Core::Private::Function::
                                      TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`35'::<lambda_8>,0,1>
                                      ::_vftable_;
                local_130[1] = (code *)local_340;
                local_130[2] = (code *)pFStack_338;
                local_130[3] = (code *)CONCAT44(uStack_32c,local_330);
                if (local_130 + 1 != (code **)0x0) {
                  local_158[0] = UE::Core::Private::Function::
                                 TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>,void,URigHierarchy_*,UObject_const_*>
                                 ::Call;
                }
                AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
                                       local_158);
                if (local_158[0] == (code *)0x0) {
                  return;
                }
                ppcVar12 = local_158 + 2;
                if (local_130 != (code **)0x0) {
                  ppcVar12 = local_130;
                }
                (**(code **)(*ppcVar12 + 0x10))();
                return;
              }
              pFVar7 = local_448;
              if (local_448 != (FProperty *)0x0) {
                if ((*(uint *)(local_448->_padding_ + 0x18) >> 0x14 & 1) != 0) {
                  local_128[0] = (code *)0x0;
                  local_328 = local_448;
                  pFStack_320 = this;
                  local_318 = iVar10;
                  local_100 = FMemory::Malloc(0x20,8);
                  *local_100 = (code *)&UE::Core::Private::Function::
                                        TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`39'::<lambda_9>,0,1>
                                        ::_vftable_;
                  local_100[1] = (code *)local_328;
                  local_100[2] = (code *)pFStack_320;
                  local_100[3] = (code *)CONCAT44(uStack_314,local_318);
                  if (local_100 + 1 != (code **)0x0) {
                    local_128[0] = UE::Core::Private::Function::
                                   TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>,void,URigHierarchy_*,UObject_const_*>
                                   ::Call;
                  }
                  AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *
                                         )local_128);
                  if (local_128[0] == (code *)0x0) {
                    return;
                  }
                  ppcVar12 = local_128 + 2;
                  if (local_100 != (code **)0x0) {
                    ppcVar12 = local_100;
                  }
                  (**(code **)(*ppcVar12 + 0x10))();
                  return;
                }
                if (local_448 != (FProperty *)0x0) {
                  if ((*(uint *)(local_448->_padding_ + 0x18) >> 0x15 & 1) == 0) {
                    if (local_448 == (FProperty *)0x0) goto LAB_14a3e82f8;
                    if ((*(uint *)(local_448->_padding_ + 0x18) >> 0x10 & 1) == 0) {
                      if (local_448 == (FProperty *)0x0) goto LAB_14a3e82f8;
                      if ((*(ulonglong *)(local_448->_padding_ + 0x18) & 0x1000000000000) == 0) {
                        if ((local_448 == (FProperty *)0x0) ||
                           ((*(byte *)(local_448->_padding_ + 0x18) & 0x40) == 0))
                        goto LAB_14a3e82f8;
                        cVar9 = (**(code **)(local_448->_padding_ + 0x1a0))(local_448);
                        if (cVar9 != '\0') {
                          local_68[0] = (code *)0x0;
                          local_2c8 = pFVar7;
                          pFStack_2c0 = this;
                          local_2b8 = iVar10;
                          local_40 = FMemory::Malloc(0x20,8);
                          *local_40 = (code *)&UE::Core::Private::Function::
                                               TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`67'::<lambda_13>,0,1>
                                               ::_vftable_;
                          local_40[1] = (code *)local_2c8;
                          local_40[2] = (code *)pFStack_2c0;
                          local_40[3] = (code *)CONCAT44(uStack_2b4,local_2b8);
                          if (local_40 + 1 != (code **)0x0) {
                            local_68[0] = UE::Core::Private::Function::
                                          TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>,void,URigHierarchy_*,UObject_const_*>
                                          ::Call;
                          }
                          AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>
                                                  *)local_68);
                          if (local_68[0] == (code *)0x0) {
                            return;
                          }
                          ppcVar12 = local_68 + 2;
                          if (local_40 != (code **)0x0) {
                            ppcVar12 = local_40;
                          }
                          (**(code **)(*ppcVar12 + 0x10))();
                          return;
                        }
                        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<4803226398594433837>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                           ,0x32d,"ByteProperty->SameType(InVariable.Property)");
                        if (!bVar8) {
                          return;
                        }
                      }
                      else {
                        cVar9 = (**(code **)(local_448->_padding_ + 0x1a0))(local_448);
                        if (cVar9 != '\0') {
                          local_98[0] = (code *)0x0;
                          local_2e0 = pFVar7;
                          pFStack_2d8 = this;
                          local_2d0 = iVar10;
                          local_70 = FMemory::Malloc(0x20,8);
                          *local_70 = (code *)&UE::Core::Private::Function::
                                               TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`60'::<lambda_12>,0,1>
                                               ::_vftable_;
                          local_70[1] = (code *)local_2e0;
                          local_70[2] = (code *)pFStack_2d8;
                          local_70[3] = (code *)CONCAT44(uStack_2cc,local_2d0);
                          if (local_70 + 1 != (code **)0x0) {
                            local_98[0] = UE::Core::Private::Function::
                                          TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>,void,URigHierarchy_*,UObject_const_*>
                                          ::Call;
                          }
                          AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>
                                                  *)local_98);
                          if (local_98[0] == (code *)0x0) {
                            return;
                          }
                          ppcVar12 = local_98 + 2;
                          if (local_70 != (code **)0x0) {
                            ppcVar12 = local_70;
                          }
                          (**(code **)(*ppcVar12 + 0x10))();
                          return;
                        }
                        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<4803226398594433826>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                           ,0x322,"EnumProperty->SameType(InVariable.Property)");
                        if (!bVar8) {
                          return;
                        }
                      }
                    }
                    else {
                      cVar9 = (**(code **)(local_448->_padding_ + 0x1a0))(local_448);
                      if (cVar9 != '\0') {
                        local_c8[0] = (code *)0x0;
                        local_2f8 = pFVar7;
                        pFStack_2f0 = this;
                        local_2e8 = iVar10;
                        local_a0 = FMemory::Malloc(0x20,8);
                        *local_a0 = (code *)&UE::Core::Private::Function::
                                             TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`53'::<lambda_11>,0,1>
                                             ::_vftable_;
                        local_a0[1] = (code *)local_2f8;
                        local_a0[2] = (code *)pFStack_2f0;
                        local_a0[3] = (code *)CONCAT44(uStack_2e4,local_2e8);
                        if (local_a0 + 1 != (code **)0x0) {
                          local_c8[0] = UE::Core::Private::Function::
                                        TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>,void,URigHierarchy_*,UObject_const_*>
                                        ::Call;
                        }
                        AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>
                                                *)local_c8);
                        if (local_c8[0] == (code *)0x0) {
                          return;
                        }
                        ppcVar12 = local_c8 + 2;
                        if (local_a0 != (code **)0x0) {
                          ppcVar12 = local_a0;
                        }
                        (**(code **)(*ppcVar12 + 0x10))();
                        return;
                      }
                      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<4803226398594433815>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                         ,0x317,"ObjectProperty->SameType(InVariable.Property)");
                      if (!bVar8) {
                        return;
                      }
                    }
                  }
                  else {
                    cVar9 = (**(code **)(local_448->_padding_ + 0x1a0))(local_448);
                    if (cVar9 != '\0') {
                      local_f8[0] = (code *)0x0;
                      local_310 = pFVar7;
                      pFStack_308 = this;
                      local_300 = iVar10;
                      local_d0 = FMemory::Malloc(0x20,8);
                      *local_d0 = (code *)&UE::Core::Private::Function::
                                           TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`46'::<lambda_10>,0,1>
                                           ::_vftable_;
                      local_d0[1] = (code *)local_310;
                      local_d0[2] = (code *)pFStack_308;
                      local_d0[3] = (code *)CONCAT44(uStack_2fc,local_300);
                      if (local_d0 + 1 != (code **)0x0) {
                        local_f8[0] = UE::Core::Private::Function::
                                      TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>,void,URigHierarchy_*,UObject_const_*>
                                      ::Call;
                      }
                      AddUpdateFunction(this,(TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>
                                              *)local_f8);
                      if (local_f8[0] == (code *)0x0) {
                        return;
                      }
                      ppcVar12 = local_f8 + 2;
                      if (local_d0 != (code **)0x0) {
                        ppcVar12 = local_d0;
                      }
                      (**(code **)(*ppcVar12 + 0x10))();
                      return;
                    }
                    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<4803226398594433804>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                       ,0x30c,"ArrayProperty->SameType(InVariable.Property)");
                    if (!bVar8) {
                      return;
                    }
                  }
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14a3e82f8:
  local_3f0 = &local_448;
  `FControlRigVariableMappings::AddVariableFunction'::__l69::<lambda_14>::operator()(&local_3f0);
  return;
}

// CacheCurveMappings @ 14a3ee160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::CacheCurveMappings
          (FControlRigVariableMappings *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1,TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
                   *param_2,URigHierarchy *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FRigBaseElement *pFVar8;
  UScriptStruct *pUVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_res10 [2];
  undefined1 local_a8 [8];
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined1 local_70 [12];
  longlong local_64;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar7 = *(int *)&param_1->field_0x28;
  local_90 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar7 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)local_90;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar11;
      local_80 = local_80 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_84 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14a3ee20b;
      uVar3 = puVar12[lVar10 + 1];
    }
    uVar6 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar10;
    if (iVar7 < iStack_84) {
      iStack_84 = iVar7;
    }
  }
LAB_14a3ee20b:
  uStack_98 = (int *)CONCAT44(uVar6,iVar11);
  uStack_88 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = (longlong)uStack_98;
  TStack_50._28_4_ = iStack_84;
  TStack_50.BaseBitIndex = local_80;
  local_a0 = param_1;
  iStack_7c = iStack_84;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_90;
  TStack_50.CurrentBitIndex = iStack_84;
  if (iStack_84 < iVar7) {
    do {
      lVar10 = *(longlong *)(*(longlong *)local_58 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      local_a8 = *(undefined1 (*) [8])
                  (*(longlong *)local_58 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      if ((lVar10 != 0) && (local_a8 != (undefined1  [8])0x0)) {
        iVar7 = (param_2->Elements).ArrayNum;
        piVar1 = &(param_2->Elements).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)param_2,piVar1);
        }
        (param_2->Elements).ArrayNum = iVar7 + 1;
        pFVar4 = (param_2->Elements).AllocatorInstance.Data;
        *(undefined1 (*) [8])(pFVar4 + (longlong)iVar7 * 0x10) = local_a8;
        *(longlong *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = lVar10;
        param_2->bSorted = false;
        if (param_3 != (URigHierarchy *)0x0) {
          local_64 = (longlong)local_a8;
          local_70[8] = 4;
          iVar7 = URigHierarchy::GetIndex(param_3,(FRigElementKey *)(local_70 + 8),true);
          pFVar8 = URigHierarchy::Get(param_3,iVar7);
          if (pFVar8 != (FRigBaseElement *)0x0) {
            lVar10 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
            pUVar9 = FRigControlElement::StaticStruct();
            if (pUVar9 != (UScriptStruct *)0x0) {
              iVar7 = (int)pUVar9->_padding_;
              if ((*(int *)(lVar10 + 0x38) < iVar7) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar9->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                local_res10[0] = pFVar8->Index;
                local_a0 = (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                            *)local_a8;
                uStack_98 = local_res10;
                TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,int_&&>_>
                          ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&this->CurveInputToControlIndex,
                           (TPairInitializer<FName_const_&,int_&&> *)local_70,(bool *)&local_a0);
              }
            }
          }
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// CacheCurveMappings @ 14a3ee3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::CacheCurveMappings
          (FControlRigVariableMappings *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1,TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   *param_2,URigHierarchy *param_3)

{
  CacheCurveMappings(this,param_1,&this->InputCurveMappings,param_3);
  CacheCurveMappings(this,param_2,&this->OutputCurveMappings,param_3);
  return;
}

// InitializeCustomProperties @ 14a422480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::InitializeCustomProperties
          (FControlRigVariableMappings *this,UControlRig *param_1,FCustomPropertyMappings *param_2)

{
  int *piVar1;
  FName *pFVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  TFunction<void___cdecl(void)> *pTVar6;
  URigHierarchy *pUVar7;
  bool bVar8;
  FRigControlElement *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FNameEntryId local_58;
  undefined4 uStack_54;
  FNameEntryId local_48;
  undefined4 uStack_44;
  char local_36;
  uchar *local_30;
  
  uVar4 = (param_2->Mappings).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  iVar5 = (this->CustomUpdateFunctions).ArrayNum;
  piVar1 = &(this->CustomUpdateFunctions).ArrayMax;
  pTVar6 = (TFunction<void___cdecl(void)> *)(this->CustomUpdateFunctions).AllocatorInstance.Data;
  if (*piVar1 < (int)uVar4) {
    DestructItems<TFunction<void___cdecl(void)>,int>(pTVar6,iVar5);
    (this->CustomUpdateFunctions).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar4,&(this->CustomUpdateFunctions).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(void)>,int>(pTVar6,iVar5);
    (this->CustomUpdateFunctions).ArrayNum = 0;
  }
  if (param_1 != (UControlRig *)0x0) {
    iVar5 = (param_2->Mappings).ArrayNum;
    pFVar10 = (FName *)(param_2->Mappings).AllocatorInstance.Data;
    pUVar7 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
    pFVar2 = pFVar10 + (longlong)iVar5 * 5;
    while( true ) {
      if ((param_2->Mappings).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FControlRigVariableMappings::FCustomPropertyData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      cVar3 = (char)pFVar10[4].ComparisonIndex.Value;
      if (cVar3 == '\0') {
        URigVMHost::GetPublicVariableByName
                  ((URigVMHost *)param_1,(FRigVMExternalVariable *)&local_58,pFVar10);
        bVar8 = ::FName::IsWithinBounds(local_58);
        if ((((bVar8) && (CONCAT44(uStack_54,local_58.Value) != 0)) &&
            (bVar8 = ::FName::IsWithinBounds(local_48), bVar8)) &&
           (((CONCAT44(uStack_44,local_48.Value) != 0 && (local_30 != (uchar *)0x0)) &&
            (local_36 == '\0')))) {
          AddCustomVariableFunction
                    (this,(FRigVMExternalVariable *)&local_58,(FProperty *)pFVar10[2],
                     (uchar *)pFVar10[3]);
        }
LAB_14a4225e5:
        pFVar10 = pFVar10 + 5;
      }
      else if (cVar3 == '\x01') {
        pFVar9 = (FRigControlElement *)(**(code **)(param_1->_padding_ + 0x3c8))(param_1,pFVar10);
        if (pFVar9 == (FRigControlElement *)0x0) goto LAB_14a4225e5;
        AddCustomControlFunction
                  (this,pFVar9,*(ERigControlType *)((longlong)&pFVar10[4].ComparisonIndex.Value + 1)
                   ,(uchar *)pFVar10[3],pUVar7);
        pFVar10 = pFVar10 + 5;
      }
      else {
        `FControlRigVariableMappings::InitializeCustomProperties'::__l20::<lambda_1>::operator()
                  (local_res8);
        pFVar10 = pFVar10 + 5;
      }
    }
  }
  return;
}

// InitializeProperties @ 14a423610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::InitializeProperties
          (FControlRigVariableMappings *this,UClass *param_1,UObject *param_2,UClass *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FName *pFVar2;
  TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  URigHierarchy *pUVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  FRigControlElement *pFVar13;
  FProperty *pFVar14;
  uint uVar15;
  FProperty *local_a8;
  undefined8 local_a0;
  longlong local_98;
  TFieldIterator<FProperty> local_90;
  URigHierarchy *local_78;
  longlong local_70;
  FNameEntryId local_68;
  undefined4 uStack_64;
  FNameEntryId local_58;
  undefined4 uStack_54;
  char local_46;
  uchar *local_40;
  
  bVar7 = AnimNodeLocals::bUseFunctions;
  uVar15 = param_4->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  (this->SourceProperties).ArrayNum = 0;
  if ((this->SourceProperties).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,(ForAnyElementType *)this,0,&(this->SourceProperties).ArrayMax);
  }
  uVar15 = param_4->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  (this->DestProperties).ArrayNum = 0;
  if ((this->DestProperties).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&(this->DestProperties).AllocatorInstance,0,
               &(this->DestProperties).ArrayMax);
  }
  uVar15 = param_4->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  pTVar3 = (TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *)
           (this->UpdateFunctions).AllocatorInstance.Data;
  iVar11 = (this->UpdateFunctions).ArrayNum;
  piVar1 = &(this->UpdateFunctions).ArrayMax;
  if ((this->UpdateFunctions).ArrayMax < (int)uVar15) {
    DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>(pTVar3,iVar11);
    (this->UpdateFunctions).ArrayNum = 0;
    if (*piVar1 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar15,&(this->UpdateFunctions).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>(pTVar3,iVar11);
    (this->UpdateFunctions).ArrayNum = 0;
  }
  (this->Variables).ArrayNum = 0;
  if ((this->Variables).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->Variables).AllocatorInstance,0,&(this->Variables).ArrayMax);
  }
  if ((param_4->ArrayNum != param_5->ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePropertyNames.Num() == InDestPropertyNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x43,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_2 != (UObject *)0x0) {
    pUVar12 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar12->_padding_)) {
      local_78 = *(URigHierarchy **)&param_2[0x14].field_0x18;
      goto LAB_14a4237c0;
    }
  }
  param_2 = (UObject *)0x0;
  local_78 = (URigHierarchy *)0x0;
LAB_14a4237c0:
  uVar15 = 0;
  iVar11 = param_4->ArrayNum;
  if (0 < iVar11) {
    local_70 = 0;
    do {
      lVar4 = local_70;
      uVar10 = 0;
      if ((int)uVar15 < iVar11) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (FProperty *)0x0;
      lVar4 = *(longlong *)((param_4->AllocatorInstance).Data + lVar4);
      if (lVar4 != 0) {
        if (param_1 == (UClass *)0x0) {
          local_90.Field = (FField *)0x0;
        }
        else {
          local_90.Field = (FField *)param_1->_padding_;
        }
        local_90.InterfaceIndex = -1;
        local_90.bIncludeSuper = true;
        local_90.bIncludeDeprecated = true;
        local_90.bIncludeInterface = false;
        local_90.Struct = (UStruct *)param_1;
        TFieldIterator<FProperty>::IterateToNext(&local_90);
        pFVar14 = (FProperty *)local_90.Field;
        while (local_90.Field = (FField *)pFVar14, pFVar14 != (FProperty *)0x0) {
          bVar9 = IsThisNotNull(pFVar14,"FField::GetFName");
          if (bVar9) {
            local_98 = pFVar14->_padding_;
          }
          else {
            local_98 = 0;
          }
          if (local_98 == lVar4) goto LAB_14a4238c6;
          local_90.Field = (FField *)pFVar14->_padding_;
          TFieldIterator<FProperty>::IterateToNext(&local_90);
          pFVar14 = (FProperty *)local_90.Field;
        }
        pFVar14 = (FProperty *)0x0;
      }
LAB_14a4238c6:
      pFVar5 = (this->SourceProperties).AllocatorInstance.Data;
      local_a8 = pFVar14;
      if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar5 + (longlong)(this->SourceProperties).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->SourceProperties).ArrayNum;
      if (iVar11 == (this->SourceProperties).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,&(this->SourceProperties).ArrayMax);
      }
      (this->SourceProperties).ArrayNum = iVar11 + 1;
      local_a0 = 0;
      *(FProperty **)((this->SourceProperties).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_a8;
      pFVar5 = (this->DestProperties).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 <
           pFVar5 + (longlong)(this->DestProperties).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->DestProperties).ArrayNum;
      if (iVar11 == (this->DestProperties).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->DestProperties).AllocatorInstance,
                            &(this->DestProperties).ArrayMax);
      }
      pUVar8 = local_78;
      (this->DestProperties).ArrayNum = iVar11 + 1;
      *(undefined8 *)((this->DestProperties).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_a0;
      if (((bVar7) && ((URigVMHost *)param_2 != (URigVMHost *)0x0)) &&
         ((local_78 != (URigHierarchy *)0x0 && (local_a8 != (FProperty *)0x0)))) {
        uVar10 = 0;
        if ((int)uVar15 < param_5->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = (FName *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
        pFVar13 = (FRigControlElement *)
                  (**(code **)(((URigVMHost *)param_2)->_padding_ + 0x3c8))(param_2,pFVar2);
        if (pFVar13 == (FRigControlElement *)0x0) {
          URigVMHost::GetPublicVariableByName
                    ((URigVMHost *)param_2,(FRigVMExternalVariable *)&local_68,pFVar2);
          bVar9 = ::FName::IsWithinBounds(local_68);
          if (((((bVar9) && (CONCAT44(uStack_64,local_68.Value) != 0)) &&
               (bVar9 = ::FName::IsWithinBounds(local_58), bVar9)) &&
              ((CONCAT44(uStack_54,local_58.Value) != 0 && (local_40 != (uchar *)0x0)))) &&
             (local_46 == '\0')) {
            AddVariableFunction(this,(FRigVMExternalVariable *)&local_68,local_a8);
          }
        }
        else {
          AddControlFunction(this,pFVar13,local_a8,pUVar8);
        }
      }
      uVar15 = uVar15 + 1;
      local_70 = local_70 + 8;
      iVar11 = param_4->ArrayNum;
    } while ((int)uVar15 < iVar11);
  }
  return;
}

// PropagateCustomInputProperties @ 14a4361b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::PropagateCustomInputProperties
          (FControlRigVariableMappings *this,UControlRig *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if ((param_1 != (UControlRig *)0x0) &&
     ((param_1->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0)) {
    iVar1 = (this->CustomUpdateFunctions).ArrayNum;
    if (iVar1 != 0) {
      pFVar5 = (this->CustomUpdateFunctions).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
      while( true ) {
        if ((this->CustomUpdateFunctions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar5 == pFVar6) break;
        UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
        pcVar2 = *(code **)pFVar5;
        pFVar4 = pFVar5 + 0x10;
        if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
        }
        uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
        (*pcVar2)(uVar3);
        pFVar5 = pFVar5 + 0x30;
      }
    }
  }
  return;
}

// PropagateInputProperties @ 14a436270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::PropagateInputProperties
          (FControlRigVariableMappings *this,UObject *param_1,UControlRig *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<URigHierarchy>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FControlRigVariableMappings::PropagateInputProperties(UObject_const_*,UControlRig_*,TArray<FName,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_FControlRigVariableMappings_PropagateInputProperties>
  FVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar11;
  LARGE_INTEGER LVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  LARGE_INTEGER local_res10 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_68 [4];
  uint local_64;
  LARGE_INTEGER local_60;
  TObjectPtr<URigHierarchy>_u_0 local_58;
  uint local_50;
  uint local_4c;
  LARGE_INTEGER local_48;
  
  local_res10[0] = (LARGE_INTEGER)param_1;
  local_res20 = param_3;
  FStatsHierarchical::BeginMeasurement("FControlRigVariableMappings::PropagateInputProperties");
  local_64 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FControlRigVariableMappings_PropagateInputProperties ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FControlRigVariableMappings::PropagateInputProperties(UObject_const_*,UControlRig_*,TArray<FName,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_FControlRigVariableMappings_PropagateInputProperties>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_58.ObjectPtr,
                              "FControlRigVariableMappings_PropagateInputProperties");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_FControlRigVariableMappings_PropagateInputProperties,*pFVar8,
                 L"FControlRigVariableMappings_PropagateInputProperties","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_FControlRigVariableMappings_PropagateInputProperties;
  if (StatPtr_FControlRigVariableMappings_PropagateInputProperties ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FControlRigVariableMappings::PropagateInputProperties(UObject_const_*,UControlRig_*,TArray<FName,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_FControlRigVariableMappings_PropagateInputProperties>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_58.ObjectPtr,
                            "FControlRigVariableMappings_PropagateInputProperties");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FControlRigVariableMappings::PropagateInputProperties(UObject_const_*,UControlRig_*,TArray<FName,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_FControlRigVariableMappings_PropagateInputProperties>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_FControlRigVariableMappings_PropagateInputProperties,*pFVar8,
                         L"FControlRigVariableMappings_PropagateInputProperties","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart == 0) && (LVar12.s.HighPart == 0)) {
LAB_14a436405:
    bVar6 = false;
    LVar12 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_60.QuadPart = local_60.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_60.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_60.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                   ,0x9f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a436405;
    local_60 = LVar12;
    local_48 = LVar12;
    FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
    bVar6 = true;
    local_64 = local_48._0_4_;
  }
  if ((((FName)local_res10[0].QuadPart != (FName)0x0) && (param_2 != (UControlRig *)0x0)) &&
     (TVar3 = (TObjectPtr<URigHierarchy>_u_0)(param_2->DynamicHierarchy).field0_0x0.DebugPtr,
     TVar3.DebugPtr != (URigHierarchy *)0x0)) {
    if (AnimNodeLocals::bUseFunctions != false) {
      iVar2 = (this->UpdateFunctions).ArrayNum;
      if (iVar2 != 0) {
        pFVar14 = (this->UpdateFunctions).AllocatorInstance.Data;
        pFVar13 = pFVar14 + (longlong)iVar2 * 0x30;
        while( true ) {
          if ((this->UpdateFunctions).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_68);
          }
          if (pFVar14 == pFVar13) break;
          local_60 = local_res10[0];
          local_58 = TVar3;
          UE::Core::Private::Function::CheckCallable(*(void **)pFVar14);
          pcVar4 = *(code **)pFVar14;
          pFVar11 = pFVar14 + 0x10;
          if (*(FScriptContainerElement **)(pFVar14 + 0x28) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar14 + 0x28);
          }
          uVar10 = (**(code **)(*(longlong *)pFVar11 + 8))();
          (*pcVar4)(uVar10,&local_58);
          pFVar14 = pFVar14 + 0x30;
        }
        goto LAB_14a4364fa;
      }
    }
    PropagateInputPropertiesNoCache
              (this,(UObject *)local_res10[0],param_2,TVar3.DebugPtr,local_res20);
  }
LAB_14a4364fa:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50 = local_64;
      local_4c = LVar12.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(local_res10);
      local_58.DebugPtr = (URigHierarchy *)(local_res10[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_58.ObjectPtr);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        FStatsHierarchical::EndMeasurement();
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// PropagateInputPropertiesNoCache @ 14a4366b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::PropagateInputPropertiesNoCache
          (FControlRigVariableMappings *this,UObject *param_1,UControlRig *param_2,
          URigHierarchy *param_3,TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FProperty *pFVar7;
  ForAnyElementType _Src;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FRigControlElement *pFVar11;
  undefined1 (*pauVar12) [16];
  TVector<double> *pTVar13;
  UScriptStruct *pUVar14;
  ForAnyElementType *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FProperty *local_res8;
  UObject *local_res10;
  FNameEntryId local_818;
  undefined4 uStack_814;
  FNameEntryId local_808;
  undefined4 uStack_804;
  UScriptStruct *local_800;
  char local_7f8;
  char local_7f6;
  ForAnyElementType *local_7f0;
  undefined1 local_7e8 [8];
  float fStack_7e0;
  float fStack_7dc;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  ulonglong uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined4 local_768;
  ForAnyElementType local_758;
  int local_750;
  int local_74c;
  longlong local_748;
  longlong local_740;
  longlong local_738;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  longlong local_6f8;
  FProperty **local_6f0;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float fStack_6c8;
  undefined8 local_6c4;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 local_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 local_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 local_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined8 local_684;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 local_674;
  undefined4 uStack_670;
  undefined4 local_66c;
  undefined4 local_668;
  float local_664;
  float fStack_660;
  float fStack_65c;
  float fStack_658;
  float local_654;
  float fStack_650;
  ulonglong uStack_64c;
  float local_644;
  float fStack_640;
  ulonglong uStack_63c;
  undefined8 local_634;
  undefined8 uStack_62c;
  undefined8 local_624;
  undefined8 uStack_61c;
  undefined8 local_614;
  undefined8 uStack_60c;
  undefined8 local_604;
  undefined8 uStack_5fc;
  undefined8 local_5f4;
  undefined8 uStack_5ec;
  undefined4 local_5e4;
  double local_5e0;
  double dStack_5d8;
  double local_5d0;
  TRotator<double> local_5c8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  ulonglong uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  TRotator<double> local_508;
  float local_4e8;
  float fStack_4e4;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined1 local_464 [16];
  undefined8 local_454;
  undefined8 uStack_44c;
  undefined8 local_444;
  undefined8 uStack_43c;
  undefined8 local_434;
  undefined8 uStack_42c;
  undefined8 local_424;
  undefined8 uStack_41c;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined4 local_3e4;
  undefined1 local_3e0 [16];
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_32c;
  undefined8 uStack_324;
  undefined8 local_31c;
  undefined8 uStack_314;
  undefined8 local_30c;
  undefined8 uStack_304;
  undefined8 local_2fc;
  undefined8 uStack_2f4;
  undefined8 local_2ec;
  undefined8 uStack_2e4;
  undefined4 local_2dc;
  ulonglong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  TQuat<double> local_248;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_b8;
  TVector<double> local_a8 [4];
  
  local_res10 = param_1;
  if (((this->SourceProperties).ArrayNum != (this->DestProperties).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceProperties.Num() == DestProperties.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                         ,0x105,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar16 = (this->SourceProperties).ArrayNum;
  uVar19 = 0;
  if (0 < iVar16) {
    local_748 = 0;
    do {
      lVar18 = local_748;
      uVar17 = ~uVar19 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar19 < iVar16) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res8 = *(FProperty **)((this->SourceProperties).AllocatorInstance.Data + lVar18);
      pcVar6 = *(code **)(param_2->_padding_ + 0x3c8);
      uVar10 = 0;
      if ((int)uVar19 < param_4->ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (FRigControlElement *)
                (*pcVar6)(param_2,(param_4->AllocatorInstance).Data + (longlong)(int)uVar19 * 8);
      if (pFVar11 == (FRigControlElement *)0x0) {
        uVar10 = 0;
        if ((int)uVar19 < param_4->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        URigVMHost::GetPublicVariableByName
                  ((URigVMHost *)param_2,(FRigVMExternalVariable *)&local_818,
                   (FName *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar19 * 8));
        bVar8 = ::FName::IsWithinBounds(local_818);
        if (((((bVar8) && (CONCAT44(uStack_814,local_818.Value) != 0)) &&
             (bVar8 = ::FName::IsWithinBounds(local_808), bVar8)) &&
            ((CONCAT44(uStack_804,local_808.Value) != 0 && (local_7f0 != (ForAnyElementType *)0x0)))
            ) && (local_7f6 == '\0')) {
          pFVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal(local_res8,local_res10,0);
          if (local_res8 == (FProperty *)0x0) {
LAB_14a437f18:
            local_6f0 = &local_res8;
            `FControlRigVariableMappings::PropagateInputPropertiesNoCache'::__l157::<lambda_1>::
            operator()(&local_6f0);
          }
          else if (((*(uint *)(local_res8->_padding_ + 0x18) >> 0x11 & 1) == 0) ||
                  (FLazyName::Resolve(&RigVMTypeUtils::BoolTypeName),
                  CONCAT44(uStack_804,local_808.Value) != local_740)) {
            if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
            if (((*(uint *)(local_res8->_padding_ + 0x18) >> 8 & 1) == 0) ||
               ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName),
                CONCAT44(uStack_804,local_808.Value) != local_738 &&
                (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName),
                CONCAT44(uStack_804,local_808.Value) != local_730)))) {
              if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
              if (((*(ulonglong *)(local_res8->_padding_ + 0x18) & 0x100000000) == 0) ||
                 ((FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName),
                  CONCAT44(uStack_804,local_808.Value) != local_720 &&
                  (FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName),
                  CONCAT44(uStack_804,local_808.Value) != local_718)))) {
                if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                if (((*(byte *)(local_res8->_padding_ + 0x18) & 0x80) == 0) ||
                   (FLazyName::Resolve(&RigVMTypeUtils::Int32TypeName),
                   CONCAT44(uStack_804,local_808.Value) != local_708)) {
                  if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                  if (((*(uint *)(local_res8->_padding_ + 0x18) >> 0xd & 1) == 0) ||
                     (FLazyName::Resolve(&RigVMTypeUtils::FNameTypeName),
                     CONCAT44(uStack_804,local_808.Value) != local_700)) {
                    if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                    if (((*(uint *)(local_res8->_padding_ + 0x18) >> 0xd & 1) == 0) ||
                       (FLazyName::Resolve(&RigVMTypeUtils::FStringTypeName),
                       CONCAT44(uStack_804,local_808.Value) != local_6f8)) {
                      pFVar7 = local_res8;
                      if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                      if ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0) {
                        if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                        if ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x15 & 1) == 0) {
                          if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                          if ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x10 & 1) == 0) {
                            if (local_res8 == (FProperty *)0x0) goto LAB_14a437f18;
                            if ((*(ulonglong *)(local_res8->_padding_ + 0x18) & 0x1000000000000) ==
                                0) {
                              if ((local_res8 == (FProperty *)0x0) ||
                                 ((*(byte *)(local_res8->_padding_ + 0x18) & 0x40) == 0))
                              goto LAB_14a437f18;
                              cVar9 = (**(code **)(local_res8->_padding_ + 0x1a0))(local_res8);
                              if (cVar9 != '\0') goto LAB_14a437dae;
                              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                                (&bGEnsureHasExecuted<4803226398594433509>,false,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                                 ,0x1e5,"ByteProperty->SameType(Variable.Property)")
                              ;
                              if (bVar8) goto code_r0x00014a437efd;
                            }
                            else {
                              cVar9 = (**(code **)(local_res8->_padding_ + 0x1a0))(local_res8);
                              if (cVar9 == '\0') {
                                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                                  (&bGEnsureHasExecuted<4803226398594433502>,false,
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                                  ,0x1de,"EnumProperty->SameType(Variable.Property)"
                                                  );
                                if (bVar8) goto code_r0x00014a437efd;
                              }
                              else {
LAB_14a437dae:
                                if (local_7f0 != pFVar15) {
                                  if (((uint)(int)pFVar7->PropertyFlags >> 0x1e & 1) == 0) {
                                    (**(code **)(pFVar7->_padding_ + 0xf0))(pFVar7,local_7f0);
                                  }
                                  else {
                                    memcpy(local_7f0,pFVar15,
                                           (longlong)pFVar7->ElementSize *
                                           (longlong)pFVar7->ArrayDim);
                                  }
                                }
                              }
                            }
                          }
                          else {
                            cVar9 = (**(code **)(local_res8->_padding_ + 0x1a0))(local_res8);
                            if (cVar9 != '\0') goto LAB_14a437dae;
                            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                              (&bGEnsureHasExecuted<4803226398594433495>,false,
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                               ,0x1d7,"ObjectProperty->SameType(Variable.Property)")
                            ;
                            if (bVar8) goto code_r0x00014a437efd;
                          }
                        }
                        else {
                          cVar9 = (**(code **)(local_res8->_padding_ + 0x1a0))(local_res8);
                          if (cVar9 != '\0') goto LAB_14a437dae;
                          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<4803226398594433488>,false,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                                             ,0x1d0,"ArrayProperty->SameType(Variable.Property)");
                          if (bVar8) goto code_r0x00014a437efd;
                        }
                      }
                      else {
                        pUVar14 = (UScriptStruct *)local_res8[1]._padding_;
                        if (pUVar14 == (UScriptStruct *)0x0) {
                          bVar8 = local_800 == (UScriptStruct *)0x0;
                        }
                        else {
                          bVar8 = pUVar14 == local_800;
                        }
                        if (bVar8) {
                          UScriptStruct::CopyScriptStruct(pUVar14,local_7f0,pFVar15,1);
                        }
                      }
                    }
                    else {
                      local_750 = *(int *)&pFVar15[1].Data;
                      lVar18 = (longlong)local_750;
                      pFVar5 = pFVar15->Data;
                      local_758.Data = (FScriptContainerElement *)0x0;
                      if (local_750 == 0) {
                        local_74c = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,local_750,0,&local_758,local_750,&local_74c);
                        memcpy(local_758.Data,pFVar5,lVar18 * 2);
                      }
                      bVar8 = ::FName::IsWithinBounds(local_818);
                      if (((((!bVar8) || (CONCAT44(uStack_814,local_818.Value) == 0)) ||
                           (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                          (((CONCAT44(uStack_804,local_808.Value) == 0 ||
                            (local_7f0 == (ForAnyElementType *)0x0)) || (local_7f8 != '\0')))) &&
                         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                             ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar16 = local_750;
                      _Src.Data = local_758.Data;
                      pFVar15 = local_7f0;
                      if (local_7f0 != &local_758) {
                        lVar18 = (longlong)local_750;
                        piVar1 = (int *)((longlong)&local_7f0[1].Data + 4);
                        iVar4 = *piVar1;
                        *(int *)&local_7f0[1].Data = local_750;
                        if ((local_750 == 0) && (iVar4 == 0)) {
                          *(undefined4 *)((longlong)&local_7f0[1].Data + 4) = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,local_750,iVar4,local_7f0,local_750,piVar1);
                          if (iVar16 != 0) {
                            memcpy(pFVar15->Data,_Src.Data,lVar18 * 2);
                          }
                        }
                      }
                      if (local_758.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_758.Data);
                      }
                    }
                  }
                  else {
                    pFVar5 = pFVar15->Data;
                    bVar8 = ::FName::IsWithinBounds(local_818);
                    if (((!bVar8) ||
                        ((((CONCAT44(uStack_814,local_818.Value) == 0 ||
                           (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                          (CONCAT44(uStack_804,local_808.Value) == 0)) ||
                         ((local_7f0 == (ForAnyElementType *)0x0 || (local_7f8 != '\0')))))) &&
                       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                           ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    local_7f0->Data = pFVar5;
                  }
                }
                else {
                  uVar3 = *(undefined4 *)&pFVar15->Data;
                  bVar8 = ::FName::IsWithinBounds(local_818);
                  if ((((!bVar8) ||
                       (((CONCAT44(uStack_814,local_818.Value) == 0 ||
                         (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                        (CONCAT44(uStack_804,local_808.Value) == 0)))) ||
                      ((local_7f0 == (ForAnyElementType *)0x0 || (local_7f8 != '\0')))) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                         ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(undefined4 *)&local_7f0->Data = uVar3;
                }
              }
              else {
                pFVar5 = pFVar15->Data;
                FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
                if (CONCAT44(uStack_804,local_808.Value) == local_710) {
                  bVar8 = ::FName::IsWithinBounds(local_818);
                  if ((((!bVar8) || (CONCAT44(uStack_814,local_818.Value) == 0)) ||
                      ((bVar8 = ::FName::IsWithinBounds(local_808), !bVar8 ||
                       (((CONCAT44(uStack_804,local_808.Value) == 0 ||
                         (local_7f0 == (ForAnyElementType *)0x0)) || (local_7f8 != '\0')))))) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                         ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(float *)&local_7f0->Data = (float)(double)pFVar5;
                }
                else {
                  bVar8 = ::FName::IsWithinBounds(local_818);
                  if (((((!bVar8) || (CONCAT44(uStack_814,local_818.Value) == 0)) ||
                       (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                      (((CONCAT44(uStack_804,local_808.Value) == 0 ||
                        (local_7f0 == (ForAnyElementType *)0x0)) || (local_7f8 != '\0')))) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                         ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_7f0->Data = pFVar5;
                }
              }
            }
            else {
              fVar20 = *(float *)&pFVar15->Data;
              FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
              if (CONCAT44(uStack_804,local_808.Value) == local_728) {
                bVar8 = ::FName::IsWithinBounds(local_818);
                if ((((((!bVar8) || (CONCAT44(uStack_814,local_818.Value) == 0)) ||
                      (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                     ((CONCAT44(uStack_804,local_808.Value) == 0 ||
                      (local_7f0 == (ForAnyElementType *)0x0)))) || (local_7f8 != '\0')) &&
                   (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                       ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(float *)&local_7f0->Data = fVar20;
              }
              else {
                bVar8 = ::FName::IsWithinBounds(local_818);
                if ((((!bVar8) || (CONCAT44(uStack_814,local_818.Value) == 0)) ||
                    (((bVar8 = ::FName::IsWithinBounds(local_808), !bVar8 ||
                      ((CONCAT44(uStack_804,local_808.Value) == 0 ||
                       (local_7f0 == (ForAnyElementType *)0x0)))) || (local_7f8 != '\0')))) &&
                   (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                       ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_7f0->Data = (FScriptContainerElement *)(double)fVar20;
              }
            }
          }
          else {
            uVar2 = *(undefined1 *)&pFVar15->Data;
            bVar8 = ::FName::IsWithinBounds(local_818);
            if ((((!bVar8) ||
                 (((CONCAT44(uStack_814,local_818.Value) == 0 ||
                   (bVar8 = ::FName::IsWithinBounds(local_808), !bVar8)) ||
                  (CONCAT44(uStack_804,local_808.Value) == 0)))) ||
                ((local_7f0 == (ForAnyElementType *)0x0 || (local_7f8 != '\0')))) &&
               (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                   ,0x1bd,"IsValid() && !bIsArray"), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined1 *)&local_7f0->Data = uVar2;
          }
        }
      }
      else {
        pauVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal(local_res8,local_res10,0);
        pFVar7 = local_res8;
        local_768._0_1_ = false;
        local_768._1_3_ = 0;
        _local_7e8 = ZEXT816(0);
        local_7d8._0_4_ = 0.0;
        local_7d8._4_4_ = 0.0;
        uStack_7d0 = 0;
        local_7c8 = 0;
        uStack_7c0 = 0;
        local_7b8._0_4_ = 0.0;
        local_7b8._4_4_ = 0.0;
        uStack_7b0._0_4_ = 0.0;
        uStack_7b0._4_4_ = 0.0;
        local_7a8._0_4_ = 0.0;
        local_7a8._4_4_ = 0.0;
        uStack_7a0._0_4_ = 0.0;
        uStack_7a0._4_4_ = 0.0;
        local_798._0_4_ = 0.0;
        local_798._4_4_ = 0.0;
        uStack_790._0_4_ = 0.0;
        uStack_790._4_4_ = 0.0;
        local_788._0_4_ = 0.0;
        local_788._4_4_ = 0.0;
        uStack_780._0_4_ = 0.0;
        uStack_780._4_4_ = 0.0;
        local_778._0_4_ = 0.0;
        local_778._4_4_ = 0.0;
        uStack_770._0_4_ = 0.0;
        uStack_770._4_4_ = 0.0;
        switch((pFVar11->Settings).ControlType) {
        case Bool:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433301>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x115,"CastField<FBoolProperty>(CallerProperty)");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            uStack_354 = 0;
            local_35c = CONCAT71(0,(*pauVar12)[0]);
            local_2dc = 1;
            _fStack_7e0 = 0;
            local_7e8 = (undefined1  [8])local_35c;
            local_34c = 0;
            uStack_344 = 0;
            local_33c = 0;
            uStack_334 = 0;
            local_32c = 0;
            uStack_324 = 0;
            local_31c = 0;
            uStack_314 = 0;
            local_30c = 0;
            uStack_304 = 0;
            local_2fc = 0;
            uStack_2f4 = 0;
            local_2ec = 0;
            uStack_2e4 = 0;
            local_7d8._0_4_ = 0.0;
            local_7d8._4_4_ = 0.0;
            uStack_7d0 = 0;
            local_7c8 = 0;
LAB_14a437569:
            uStack_7c0 = 0;
LAB_14a43756d:
            local_768._0_1_ = true;
            local_768._1_3_ = 0;
            uStack_770._0_4_ = 0.0;
            uStack_770._4_4_ = 0.0;
            local_778._0_4_ = 0.0;
            local_778._4_4_ = 0.0;
            uStack_780._0_4_ = 0.0;
            uStack_780._4_4_ = 0.0;
            local_788._0_4_ = 0.0;
            local_788._4_4_ = 0.0;
            uStack_790._0_4_ = 0.0;
            uStack_790._4_4_ = 0.0;
            local_798._0_4_ = 0.0;
            local_798._4_4_ = 0.0;
            uStack_7a0._0_4_ = 0.0;
            uStack_7a0._4_4_ = 0.0;
            local_7a8._0_4_ = 0.0;
            local_7a8._4_4_ = 0.0;
            uStack_7b0._0_4_ = 0.0;
            uStack_7b0._4_4_ = 0.0;
            local_7b8._0_4_ = 0.0;
            local_7b8._4_4_ = 0.0;
            URigHierarchy::SetControlValue
                      (param_3,pFVar11,(FRigControlValue *)local_7e8,Current,false,false,false,false
                      );
          }
          break;
        case Float:
        case ScaleFloat:
          if ((local_res8 != (FProperty *)0x0) &&
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 8 & 1) != 0)) {
            _local_7e8 = ZEXT416(*(uint *)*pauVar12);
            local_1a8 = 1;
            local_218 = 0;
            uStack_210 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_228 = ZEXT416(*(uint *)*pauVar12);
            local_7d8._0_4_ = 0.0;
            local_7d8._4_4_ = 0.0;
            uStack_7d0 = 0;
            local_7c8 = 0;
            uStack_7c0 = 0;
            goto LAB_14a43756d;
          }
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4803226398594433311>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                             ,0x11f,"CastField<FFloatProperty>(CallerProperty)");
          if (bVar8) goto code_r0x00014a437efd;
          break;
        case Integer:
          if ((local_res8 != (FProperty *)0x0) &&
             ((*(byte *)(local_res8->_padding_ + 0x18) & 0x80) != 0)) {
            uStack_2d0 = 0;
            local_2d8 = CONCAT44(0,*(uint *)*pauVar12);
            local_258 = 1;
            _fStack_7e0 = 0;
            local_7e8 = (undefined1  [8])local_2d8;
            local_2c8 = 0;
            uStack_2c0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_298 = 0;
            uStack_290 = 0;
            local_288 = 0;
            uStack_280 = 0;
            local_278 = 0;
            uStack_270 = 0;
            local_268 = 0;
            uStack_260 = 0;
            local_7d8._0_4_ = 0.0;
            local_7d8._4_4_ = 0.0;
            uStack_7d0 = 0;
            local_7c8 = 0;
            goto LAB_14a437569;
          }
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4803226398594433320>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                             ,0x128,"CastField<FIntProperty>(CallerProperty)");
          if (bVar8) goto code_r0x00014a437efd;
          break;
        case Vector2D:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433330>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x132,"StructProperty");
            if (bVar8) {
code_r0x00014a437efd:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_468 = 1;
              local_7e8._0_4_ = (undefined4)SUB168(*pauVar12,0);
              local_7d8._0_4_ = 0.0;
              local_7d8._4_4_ = 0.0;
              uStack_7d0 = 0;
              local_7e8._4_4_ = (undefined4)SUB168(*pauVar12,8);
              local_4d8 = 0;
              uStack_4d0 = 0;
              local_7c8 = 0;
              uStack_7c0 = 0;
              _local_4e8 = CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
              uStack_4e0 = 0;
              _fStack_7e0 = 0;
              local_4c8 = 0;
              uStack_4c0 = 0;
              local_4b8 = 0;
              uStack_4b0 = 0;
              local_4a8 = 0;
              uStack_4a0 = 0;
              local_498 = 0;
              uStack_490 = 0;
              local_488 = 0;
              uStack_480 = 0;
              local_478 = 0;
              uStack_470 = 0;
              goto LAB_14a43756d;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433332>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x134,"StructProperty->Struct == TBaseStructure<FVector2D>::Get()");
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        case Position:
        case Scale:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433345>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x141,"StructProperty");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TVector<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_b8 = *(double *)pauVar12[1];
              fVar20 = (float)SUB168(*pauVar12,0);
              local_3e4 = 1;
              fVar21 = (float)SUB168(*pauVar12,8);
              local_7d8._0_4_ = 0.0;
              local_7d8._4_4_ = 0.0;
              uStack_7d0 = 0;
              local_454 = 0;
              uStack_44c = 0;
              local_7c8 = 0;
              uStack_7c0 = 0;
              local_464._4_4_ = fVar21;
              local_464._0_4_ = fVar20;
              local_464._8_4_ = (float)local_b8;
              local_464._12_4_ = 0;
              local_7e8._4_4_ = fVar21;
              local_7e8._0_4_ = fVar20;
              fStack_7e0 = (float)local_b8;
              fStack_7dc = 0.0;
              local_444 = 0;
              uStack_43c = 0;
              local_434 = 0;
              uStack_42c = 0;
              local_424 = 0;
              uStack_41c = 0;
              local_414 = 0;
              uStack_40c = 0;
              local_404 = 0;
              uStack_3fc = 0;
              local_3f4 = 0;
              uStack_3ec = 0;
              goto LAB_14a43756d;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433347>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x143,"StructProperty->Struct == TBaseStructure<FVector>::Get()");
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        case Rotator:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433359>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x14f,"StructProperty");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_508.Pitch = *(double *)*pauVar12;
              local_508.Yaw = *(double *)(*pauVar12 + 8);
              local_508.Roll = *(double *)pauVar12[1];
              pTVar13 = UE::Math::TRotator<double>::Euler(&local_508,local_a8);
              local_360 = 1;
              fVar22 = (float)(pTVar13->field0_0x0)._s_0.X;
              fVar20 = (float)(pTVar13->field0_0x0)._s_0.Y;
              local_7d8._0_4_ = 0.0;
              local_7d8._4_4_ = 0.0;
              uStack_7d0 = 0;
              fVar21 = (float)(pTVar13->field0_0x0)._s_0.Z;
              local_3d0 = 0;
              uStack_3c8 = 0;
              local_7c8 = 0;
              uStack_7c0 = 0;
              local_3e0._4_4_ = fVar20;
              local_3e0._0_4_ = fVar22;
              local_3e0._8_4_ = fVar21;
              local_3e0._12_4_ = 0;
              local_7e8._4_4_ = fVar20;
              local_7e8._0_4_ = fVar22;
              fStack_7e0 = fVar21;
              fStack_7dc = 0.0;
              local_3c0 = 0;
              uStack_3b8 = 0;
              local_3b0 = 0;
              uStack_3a8 = 0;
              local_3a0 = 0;
              uStack_398 = 0;
              local_390 = 0;
              uStack_388 = 0;
              local_380 = 0;
              uStack_378 = 0;
              local_370 = 0;
              uStack_368 = 0;
              goto LAB_14a43756d;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433361>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x151,"StructProperty->Struct == TBaseStructure<FRotator>::Get()");
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        case Transform:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433373>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x15d,"StructProperty");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_158 = pauVar12[2];
              local_1a0 = pauVar12[4];
              local_148 = *(double *)pauVar12[3];
              local_190 = *(double *)pauVar12[5];
              local_664 = (float)*(double *)*pauVar12;
              local_5e4 = 1;
              fStack_65c = (float)SUB168(pauVar12[1],0);
              fStack_660 = (float)*(double *)(*pauVar12 + 8);
              fStack_658 = (float)SUB168(pauVar12[1],8);
              _local_644 = CONCAT44((float)local_1a0._8_8_,(float)local_1a0._0_8_);
              uStack_63c = (ulonglong)(uint)(float)local_190;
              local_7c8 = CONCAT44((float)local_1a0._8_8_,(float)local_1a0._0_8_);
              uStack_7c0 = (ulonglong)(uint)(float)local_190;
              local_634 = 0;
              uStack_62c = 0;
              local_624 = 0;
              uStack_61c = 0;
              local_614 = 0;
              uStack_60c = 0;
              local_604 = 0;
              uStack_5fc = 0;
              local_5f4 = 0;
              uStack_5ec = 0;
              local_7e8._4_4_ = fStack_660;
              local_7e8._0_4_ = local_664;
              fStack_7e0 = fStack_65c;
              fStack_7dc = fStack_658;
              _local_654 = CONCAT44((float)local_158._8_8_,(float)local_158._0_8_);
              uStack_64c = (ulonglong)(uint)(float)local_148;
              local_7d8._4_4_ = (float)local_158._8_8_;
              local_7d8._0_4_ = (float)local_158._0_8_;
              uStack_7d0 = (ulonglong)(uint)(float)local_148;
              local_188 = local_1a0;
              local_178 = local_190;
              local_170 = local_1a0;
              local_160 = local_190;
              local_140 = local_158;
              local_130 = local_148;
              local_128 = local_158;
              local_118 = local_148;
              goto LAB_14a43756d;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433375>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x15f,"StructProperty->Struct == TBaseStructure<FTransform>::Get()")
            ;
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        case TransformNoScale:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433387>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x16b,"StructProperty");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_e8 = *(double *)*pauVar12;
              dStack_e0 = *(double *)(*pauVar12 + 8);
              local_108 = pauVar12[2];
              local_d8 = pauVar12[1];
              local_f8 = *(double *)pauVar12[3];
              local_598 = (float)local_e8;
              local_518 = 1;
              fStack_594 = (float)dStack_e0;
              fStack_590 = (float)local_d8._0_8_;
              fStack_58c = (float)local_d8._8_8_;
              local_7c8 = 0;
              uStack_7c0 = 0;
              _local_588 = CONCAT44((float)local_108._8_8_,(float)local_108._0_8_);
              uStack_580 = (ulonglong)(uint)(float)local_f8;
              local_7d8._4_4_ = (float)local_108._8_8_;
              local_7d8._0_4_ = (float)local_108._0_8_;
              uStack_7d0 = (ulonglong)(uint)(float)local_f8;
              local_578 = 0;
              uStack_570 = 0;
              local_568 = 0;
              uStack_560 = 0;
              local_558 = 0;
              uStack_550 = 0;
              local_548 = 0;
              uStack_540 = 0;
              local_538 = 0;
              uStack_530 = 0;
              local_528 = 0;
              uStack_520 = 0;
              local_7e8._4_4_ = fStack_594;
              local_7e8._0_4_ = local_598;
              fStack_7e0 = fStack_590;
              fStack_7dc = fStack_58c;
              goto LAB_14a43756d;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433389>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x16d,"StructProperty->Struct == TBaseStructure<FTransform>::Get()")
            ;
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        case EulerTransform:
          if ((local_res8 == (FProperty *)0x0) ||
             ((*(uint *)(local_res8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433401>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x179,"StructProperty");
            if (bVar8) goto code_r0x00014a437efd;
          }
          else {
            pUVar14 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
            if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
              bVar8 = pUVar14 == (UScriptStruct *)0x0;
            }
            else {
              bVar8 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar14;
            }
            if (bVar8) {
              local_5e0 = *(double *)pauVar12[2];
              dStack_5d8 = *(double *)(pauVar12[2] + 8);
              local_5d0 = *(double *)pauVar12[3];
              local_248.Z = *(double *)pauVar12[1];
              local_248.W = *(double *)(pauVar12[1] + 8);
              local_248.X = *(double *)*pauVar12;
              local_248.Y = *(double *)(*pauVar12 + 8);
              UE::Math::TQuat<double>::Rotator(&local_248,&local_5c8);
              local_5b0 = *(double *)pauVar12[4];
              dStack_5a8 = *(double *)(pauVar12[4] + 8);
              uStack_6bc = 0;
              uStack_6b8 = 0;
              local_674 = 0;
              uStack_670 = 0;
              local_6b4 = 0;
              uStack_6b0 = 0;
              uStack_6ac = 0;
              uStack_6a8 = 0;
              local_66c = 0;
              local_6a4 = 0;
              uStack_6a0 = 0;
              uStack_69c = 0;
              uStack_698 = 0;
              local_694 = 0;
              uStack_690 = 0;
              uStack_68c = 0;
              uStack_688 = 0;
              local_684 = 0;
              uStack_67c = 0;
              uStack_678 = 0;
              local_668 = 1;
              local_6e8 = (float)local_5c8.Pitch;
              local_6d8 = (float)dStack_5d8;
              fStack_6e4 = (float)local_5c8.Yaw;
              fStack_6e0 = (float)local_5c8.Roll;
              fStack_6d0 = (float)local_5b0;
              local_5a0 = SUB168(pauVar12[5],0);
              fStack_6c8 = (float)local_5a0;
              fStack_6d4 = (float)local_5d0;
              local_7c8 = (ulonglong)(uint)fStack_6c8;
              local_6c4 = 0;
              fStack_6dc = (float)local_5e0;
              fStack_6cc = (float)dStack_5a8;
              local_7e8._4_4_ = fStack_6e4;
              local_7e8._0_4_ = local_6e8;
              fStack_7e0 = fStack_6e0;
              fStack_7dc = fStack_6dc;
              local_7d8._4_4_ = fStack_6d4;
              local_7d8._0_4_ = local_6d8;
              uStack_7d0 = CONCAT44(fStack_6cc,fStack_6d0);
              goto LAB_14a437569;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4803226398594433403>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                               ,0x17b,"StructProperty->Struct == TBaseStructure<FTransform>::Get()")
            ;
            if (bVar8) goto code_r0x00014a437efd;
          }
          break;
        default:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigVariableMappings.cpp"
                             ,0x186,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      uVar19 = uVar19 + 1;
      iVar16 = (this->SourceProperties).ArrayNum;
      local_748 = local_748 + 8;
    } while ((int)uVar19 < iVar16);
  }
  return;
}

// RequiresInitAfterConstruction @ 14a44e2c0

bool __thiscall
FControlRigVariableMappings::RequiresInitAfterConstruction(FControlRigVariableMappings *this)

{
  if ((AnimNodeLocals::bUseFunctions) && (0 < (this->UpdateFunctions).ArrayNum)) {
    return true;
  }
  return false;
}

// ResetCustomProperties @ 14a4504b0

void __thiscall
FControlRigVariableMappings::ResetCustomProperties(FControlRigVariableMappings *this,int param_1)

{
  int *piVar1;
  int iVar2;
  TFunction<void___cdecl(void)> *pTVar3;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  pTVar3 = (TFunction<void___cdecl(void)> *)(this->CustomUpdateFunctions).AllocatorInstance.Data;
  iVar2 = (this->CustomUpdateFunctions).ArrayNum;
  piVar1 = &(this->CustomUpdateFunctions).ArrayMax;
  if (param_1 <= (this->CustomUpdateFunctions).ArrayMax) {
    DestructItems<TFunction<void___cdecl(void)>,int>(pTVar3,iVar2);
    (this->CustomUpdateFunctions).ArrayNum = 0;
    return;
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(pTVar3,iVar2);
  (this->CustomUpdateFunctions).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,param_1,&(this->CustomUpdateFunctions).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateCurveInputs @ 14a45f8d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::UpdateCurveInputs
          (FControlRigVariableMappings *this,UControlRig *param_1,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_2,FBlendedCurve *param_3)

{
  UControlRig *local_res10;
  UControlRig **local_res18;
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FControlRigVariableMappings::UpdateCurveInputs");
  if ((0 < *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34) &&
     (local_res10 != (UControlRig *)0x0)) {
    local_res18 = &local_res10;
    UE::Anim::FNamedValueArrayUtils::
    Intersection<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping,_UE::Anim::FCurveUtils::BulkGet<FBlendedCurve,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>,_FControlRigVariableMappings::UpdateCurveInputs_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               &this->InputCurveMappings,(<lambda_1> *)&local_res18);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateCurveOutputs @ 14a45f950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigVariableMappings::UpdateCurveOutputs
          (FControlRigVariableMappings *this,UControlRig *param_1,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_2,FBlendedCurve *param_3)

{
  UControlRig *local_res10;
  UControlRig **local_res18;
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FControlRigVariableMappings::UpdateCurveOutputs");
  if ((0 < *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34) &&
     (local_res10 != (UControlRig *)0x0)) {
    local_res18 = &local_res10;
    UE::Anim::FNamedValueArrayUtils::
    Union<_UE::Anim::FCurveUtils::BulkSet<FBlendedCurve,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>,_FControlRigVariableMappings::UpdateCurveOutputs_::__l5::<lambda_1>_>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               &this->OutputCurveMappings,(<lambda_1> *)&local_res18);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// operator() @ 15054d9f0

bool __thiscall
`FControlRigVariableMappings::AddCustomVariableFunction'::__l69::<lambda_14>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4803226398594434056>);
  if (bVar4) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x68))
              ((longlong *)**(undefined8 **)this,local_18,0,0);
    pvVar1 = (void *)**(undefined8 **)this;
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4803226398594434056>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15054dac6;
    }
  }
  bVar4 = false;
LAB_15054dac6:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15054db20

bool __thiscall
`FControlRigVariableMappings::AddVariableFunction'::__l69::<lambda_14>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4803226398594433848>);
  if (bVar4) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x68))
              ((longlong *)**(undefined8 **)this,local_18,0,0);
    pvVar1 = (void *)**(undefined8 **)this;
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4803226398594433848>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15054dbf6;
    }
  }
  bVar4 = false;
LAB_15054dbf6:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15054ef50

bool __thiscall
`FControlRigVariableMappings::InitializeCustomProperties'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4803226398594433167>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4803226398594433167>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054ef90

bool __thiscall
`FControlRigVariableMappings::PropagateInputPropertiesNoCache'::__l157::<lambda_1>::operator()
          (void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4803226398594433516>);
  if (bVar4) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x68))
              ((longlong *)**(undefined8 **)this,local_18,0,0);
    pvVar1 = (void *)**(undefined8 **)this;
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4803226398594433516>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15054f066;
    }
  }
  bVar4 = false;
LAB_15054f066:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

