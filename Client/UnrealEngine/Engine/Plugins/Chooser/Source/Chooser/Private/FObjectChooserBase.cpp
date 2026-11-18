// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 10

// StaticStruct @ 14a8730a0

UScriptStruct * __cdecl FObjectChooserBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar1,
                         L"ObjectChooserBase");
  }
  return Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton;
}

// Compile @ 14a8730e0

void __thiscall
FObjectChooserBase::Compile(FObjectChooserBase *this,IHasContextClass *param_1,bool param_2)

{
  return;
}

// HasCompileErrors @ 14a8730f0

bool __thiscall FObjectChooserBase::HasCompileErrors(FObjectChooserBase *this,FText *param_1)

{
  return false;
}

// ChooseObject @ 14a873100

void __thiscall
FObjectChooserBase::ChooseObject
          (FObjectChooserBase *this,FChooserEvaluationContext *param_1,
          TSoftObjectPtr<UObject> *param_2)

{
  UObject *pUVar1;
  UObject *local_res8;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  pUVar1 = (UObject *)(**(code **)((longlong)*this + 0x18))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_38.WeakPtr.ObjectIndex = 0;
  local_38.WeakPtr.ObjectSerialNumber = 0;
  local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.AssetName.Number = 0;
  local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)&local_res8);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)param_2,&local_38);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ChooseMulti @ 14a8731b0

EIteratorStatus __thiscall
FObjectChooserBase::ChooseMulti
          (FObjectChooserBase *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  longlong lVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  lVar2 = (**(code **)((longlong)*this + 0x18))();
  if (lVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if (*(int *)&param_2->field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&param_2->field_0x8;
    }
    EVar1 = (**(code **)(*plVar3 + 0x60))(plVar3,lVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    return EVar1;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return Continue;
}

// ChooseMulti @ 14a873230

EIteratorStatus __thiscall
FObjectChooserBase::ChooseMulti
          (FObjectChooserBase *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  longlong *plVar2;
  FReadAccessScope local_48;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  FUtf8String local_18;
  
  plVar2 = (longlong *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUtf8String::Reset(&local_18,0);
  (**(code **)((longlong)*this + 0x20))(this,param_1,&local_30);
  if (local_28 == 0) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    EVar1 = Continue;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar2 = *(longlong **)&param_2->field_0x8;
    }
    EVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  }
  return EVar1;
}

// GetDebugName @ 14a873310

void __thiscall FObjectChooserBase::GetDebugName(FObjectChooserBase *this,FString *param_1)

{
  return;
}

// ~FObjectChooserBase @ 14a87e4a0

void __thiscall FObjectChooserBase::~FObjectChooserBase(FObjectChooserBase *this)

{
  *this = (FObjectChooserBase)&___7FObjectChooserBase__6B_;
  return;
}

// ChooseObject @ 14a881da0

UObject * __thiscall
FObjectChooserBase::ChooseObject(FObjectChooserBase *this,FChooserEvaluationContext *param_1)

{
  return (UObject *)0x0;
}

// IterateObjects @ 14a88c700

EIteratorStatus __thiscall
FObjectChooserBase::IterateObjects
          (FObjectChooserBase *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return Continue;
}

