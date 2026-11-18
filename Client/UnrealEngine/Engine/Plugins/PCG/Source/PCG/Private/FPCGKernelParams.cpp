// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// GetValueEnum<enum_EPCGCopyPointsInheritanceMode> @ 1497310f0

EPCGCopyPointsInheritanceMode __thiscall
FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>
          (FPCGKernelParams *this,FName param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  EPCGCopyPointsInheritanceMode EVar4;
  TTuple<FProperty_const_*,void_const_*> *pTVar5;
  UObject *pUVar6;
  FProperty *this_00;
  void *pvVar7;
  
  pTVar5 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
           ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                   *)&this->OverriddenProperties,param_1);
  if (pTVar5 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar6 == (UObject *)0x0) goto LAB_149731139;
    this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar6->field_0x10,param_1);
    if ((this_00 == (FProperty *)0x0) ||
       ((*(ulonglong *)(this_00->_padding_ + 0x18) & 0x1000000000000) == 0)) goto LAB_149731139;
    pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar6,0);
  }
  else {
    this_00 = *(FProperty **)pTVar5;
    if ((this_00 == (FProperty *)0x0) ||
       ((*(ulonglong *)(this_00->_padding_ + 0x18) & 0x1000000000000) == 0)) {
      this_00 = (FProperty *)0x0;
    }
    pvVar7 = *(void **)&pTVar5->field_0x8;
    if (this_00 == (FProperty *)0x0) goto LAB_149731139;
  }
  plVar1 = (longlong *)this_00[1]._padding_;
  if ((plVar1 != (longlong *)0x0) && (pvVar7 != (void *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001497311e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar4 = (**(code **)(*plVar1 + 0x210))(plVar1,pvVar7,*(code **)(*plVar1 + 0x210));
    return EVar4;
  }
LAB_149731139:
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_10494529249476565>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGKernelParamsCache.h"
                     ,0x2b,"NumericProperty && ValuePtr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Relative;
}

// FPCGKernelParams @ 1497df9a0

FPCGKernelParams * __thiscall
FPCGKernelParams::FPCGKernelParams(FPCGKernelParams *this,FPCGKernelParams *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  
  (this->WeakSettings).WeakPtr = (param_1->WeakSettings).WeakPtr;
  pUVar1 = (param_1->OverriddenValues).Value.ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (param_1->OverriddenValues).Value.StructMemory;
  (this->OverriddenValues).Value.ScriptStruct.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OverriddenValues).Value.StructMemory = puVar2;
  (param_1->OverriddenValues).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->OverriddenValues).Value.StructMemory = (uchar *)0x0;
  *(undefined8 *)&(this->OverriddenProperties).field_0x0 = 0;
  *(undefined8 *)&(this->OverriddenProperties).field_0x8 = 0;
  *(undefined8 *)&(this->OverriddenProperties).field_0x20 = 0;
  *(undefined4 *)&(this->OverriddenProperties).field_0x28 = 0;
  *(undefined4 *)&(this->OverriddenProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->OverriddenProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverriddenProperties).field_0x34 = 0;
  *(undefined8 *)&(this->OverriddenProperties).field_0x40 = 0;
  *(undefined4 *)&(this->OverriddenProperties).field_0x48 = 0;
  TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
              *)&this->OverriddenProperties,
             (TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
              *)&param_1->OverriddenProperties);
  return this;
}

// GetValueBool @ 14981d260

bool __thiscall FPCGKernelParams::GetValueBool(FPCGKernelParams *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  UObject *pUVar5;
  FProperty *this_00;
  void *pvVar6;
  
  pTVar4 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
           ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                   *)&this->OverriddenProperties,param_1);
  if (pTVar4 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 == (UObject *)0x0) goto LAB_14981d29f;
    this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar5->field_0x10,param_1);
    if ((this_00 == (FProperty *)0x0) || ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0))
    goto LAB_14981d29f;
    pvVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
  }
  else {
    this_00 = *(FProperty **)pTVar4;
    if ((this_00 == (FProperty *)0x0) || ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0))
    {
      this_00 = (FProperty *)0x0;
    }
    pvVar6 = *(void **)&pTVar4->field_0x8;
    if (this_00 == (FProperty *)0x0) goto LAB_14981d29f;
  }
  if (pvVar6 != (void *)0x0) {
    if ((char)this_00[1]._padding_ == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa4b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (*(byte *)((longlong)&this_00[1]._padding_ + 3) &
           *(byte *)((ulonglong)*(byte *)((longlong)&this_00[1]._padding_ + 1) + (longlong)pvVar6))
           != 0;
  }
LAB_14981d29f:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<920666848813383825>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                     ,0x91,"Property && ValuePtr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetValueInt @ 14981d370

int __thiscall FPCGKernelParams::GetValueInt(FPCGKernelParams *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  UObject *pUVar5;
  FProperty *this_00;
  int *piVar6;
  longlong lVar7;
  
  pTVar4 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
           ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                   *)&this->OverriddenProperties,param_1);
  if (pTVar4 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 == (UObject *)0x0) goto LAB_14981d3ab;
    this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar5->field_0x10,param_1);
    if ((this_00 == (FProperty *)0x0) || ((*(byte *)(this_00->_padding_ + 0x18) & 0x80) == 0))
    goto LAB_14981d3ab;
    piVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
  }
  else {
    lVar7 = *(longlong *)pTVar4;
    if ((lVar7 == 0) || ((*(byte *)(*(longlong *)(lVar7 + 8) + 0x18) & 0x80) == 0)) {
      lVar7 = 0;
    }
    piVar6 = *(int **)&pTVar4->field_0x8;
    if (lVar7 == 0) goto LAB_14981d3ab;
  }
  if (piVar6 != (int *)0x0) {
    return *piVar6;
  }
LAB_14981d3ab:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<920666848813383844>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                     ,0xa4,"Property && ValuePtr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetValueName @ 14981d8f0

FName __thiscall FPCGKernelParams::GetValueName(FPCGKernelParams *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  FName FVar4;
  UObject *pUVar5;
  FProperty *this_00;
  undefined8 *puVar6;
  FName in_R8;
  longlong lVar7;
  
  pTVar3 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
           ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                   *)&this->OverriddenProperties,in_R8);
  if (pTVar3 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 == (UObject *)0x0) goto LAB_14981d93f;
    this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar5->field_0x10,in_R8);
    if ((this_00 == (FProperty *)0x0) || ((*(uint *)(this_00->_padding_ + 0x18) >> 0xd & 1) == 0))
    goto LAB_14981d93f;
    puVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
  }
  else {
    lVar7 = *(longlong *)pTVar3;
    if ((lVar7 == 0) || ((*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) >> 0xd & 1) == 0)) {
      lVar7 = 0;
    }
    puVar6 = *(undefined8 **)&pTVar3->field_0x8;
    if (lVar7 == 0) goto LAB_14981d93f;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)param_1 = *puVar6;
    return param_1;
  }
LAB_14981d93f:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<920666848813383863>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                     ,0xb7,"Property && ValuePtr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FName)(*pcVar1)();
    return FVar4;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

