// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 27

// Get @ 141f807e0

FOverridableManager * __cdecl FOverridableManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FOverridableManager *pFVar3;
  
  if ((OverridableManager == (FOverridableManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverridableManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                         ,0x43,L"Expected the overridable manager to be created."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOverridableManager *)(*pcVar1)();
    return pFVar3;
  }
  return OverridableManager;
}

// FOverridableManager @ 1420e9eb0

FOverridableManager * __thiscall FOverridableManager::FOverridableManager(FOverridableManager *this)

{
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x8 = 0;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x10 = 0;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x18 = 0;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x20 = 0;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x38 = 0;
  *(undefined4 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x40 = 0;
  *(undefined4 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x44 = 0x80;
  *(undefined4 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x4c = 0;
  *(undefined4 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x48 = 0xffffffff;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x58 = 0;
  *(undefined4 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x60 = 0;
  *(undefined2 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x70 = 0;
  *(undefined8 *)&(this->NeedsSubobjectTemplateInstantiation).field_0x68 = 0;
  *(undefined ***)&this->NeedsSubobjectTemplateInstantiation =
       &___7FUObjectAnnotationSparseBool__6B_;
  return this;
}

// ClearInstancedSubObjectOverrides @ 1420f3860

void __thiscall
FOverridableManager::ClearInstancedSubObjectOverrides
          (FOverridableManager *this,TNotNull<UObject_const_*> param_1,TNotNull<UObject_*> param_2)

{
  return;
}

// ClearOverriddenProperty @ 1420f3870

bool __thiscall
FOverridableManager::ClearOverriddenProperty
          (FOverridableManager *this,TNotNull<UObject_*> param_1,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_2)

{
  return false;
}

// ClearOverrides @ 1420f4600

void __thiscall
FOverridableManager::ClearOverrides(FOverridableManager *this,TNotNull<UObject_*> param_1)

{
  return;
}

// Create @ 1420f54a0

void __cdecl FOverridableManager::Create(void)

{
  if (OverridableManager == (FOverridableManager *)0x0) {
    OverridableManager = ::operator_new(0x78);
    if (OverridableManager != (FOverridableManager *)0x0) {
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x8 = 0;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x10 = 0;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x18 = 0;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x20 = 0;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x38 = 0;
      *(undefined4 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x40 = 0;
      *(undefined4 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x44 = 0x80;
      *(undefined4 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x4c = 0;
      *(undefined4 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x48 =
           0xffffffff;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x58 = 0;
      *(undefined4 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x60 = 0;
      *(undefined2 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x70 = 0;
      *(undefined8 *)&(OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x68 = 0;
      *(undefined ***)&OverridableManager->NeedsSubobjectTemplateInstantiation =
           &___7FUObjectAnnotationSparseBool__6B_;
      return;
    }
    OverridableManager = (FOverridableManager *)0x0;
  }
  return;
}

// Disable @ 1420f64c0

void __thiscall
FOverridableManager::Disable(FOverridableManager *this,TNotNull<UObject_*> param_1,bool param_2)

{
  return;
}

// DisableInstancedSubObject @ 1420f6590

void __thiscall
FOverridableManager::DisableInstancedSubObject
          (FOverridableManager *this,TNotNull<UObject_const_*> param_1,TNotNull<UObject_*> param_2)

{
  return;
}

// Enable @ 1420f6a60

void __thiscall FOverridableManager::Enable(FOverridableManager *this,TNotNull<UObject_*> param_1)

{
  return;
}

// GetOverriddenPropertiesInternal @ 1420fb220

FOverriddenPropertySet * __thiscall
FOverridableManager::GetOverriddenPropertiesInternal
          (FOverridableManager *this,TNotNull<UObject_*> param_1)

{
  return (FOverriddenPropertySet *)0x0;
}

// GetOverriddenPropertiesInternal @ 1420fb230

FOverriddenPropertySet * __thiscall
FOverridableManager::GetOverriddenPropertiesInternal
          (FOverridableManager *this,TNotNull<UObject_const_*> param_1)

{
  return (FOverriddenPropertySet *)0x0;
}

// GetOverriddenPropertyOperation @ 1420fb490

EOverriddenPropertyOperation __thiscall
FOverridableManager::GetOverriddenPropertyOperation
          (FOverridableManager *this,TNotNull<UObject_*> param_1,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_2,bool *param_3)

{
  return None;
}

// GetOverriddenState @ 1420fc680

EOverriddenState __thiscall
FOverridableManager::GetOverriddenState
          (FOverridableManager *this,TNotNull<UObject_*> param_1,
          TFunction<bool___cdecl(TNotNull<FProperty_const_*>)> *param_2,
          FPropertyVisitorPath *param_3,bool *param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return NoOverrides;
}

// HandleDeadObjectReferences @ 1420fde90

void __thiscall
FOverridableManager::HandleDeadObjectReferences
          (FOverridableManager *this,
          TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_3)

{
  return;
}

// HandleObjectsReInstantiated @ 1420fe170

void __thiscall
FOverridableManager::HandleObjectsReInstantiated
          (FOverridableManager *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  return;
}

// InheritEnabledFrom @ 1420fe880

void __thiscall
FOverridableManager::InheritEnabledFrom
          (FOverridableManager *this,TNotNull<UObject_*> param_1,UObject *param_2)

{
  return;
}

// IsEnabled @ 1420ff560

bool __thiscall
FOverridableManager::IsEnabled(FOverridableManager *this,TNotNull<UObject_const_*> param_1)

{
  return false;
}

// NeedSubObjectTemplateInstantiation @ 142102a00

bool __thiscall
FOverridableManager::NeedSubObjectTemplateInstantiation
          (FOverridableManager *this,TNotNull<UObject_const_*> param_1)

{
  FBoolAnnotation FVar1;
  undefined7 extraout_var;
  
  FVar1 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                    ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)this,
                     (UObjectBase *)&stack0x00000008);
  return (bool)*(undefined1 *)CONCAT71(extraout_var,FVar1.Mark);
}

// NotifyPropertyChange @ 142102cd0

void __thiscall
FOverridableManager::NotifyPropertyChange
          (FOverridableManager *this,EPropertyNotificationType param_1,TNotNull<UObject_*> param_2,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_3,uint param_4)

{
  return;
}

// OverrideAllObjectProperties @ 1421052a0

void __thiscall
FOverridableManager::OverrideAllObjectProperties
          (FOverridableManager *this,TNotNull<UObject_*> param_1)

{
  return;
}

// OverrideProperty @ 1421052b0

void __thiscall
FOverridableManager::OverrideProperty
          (FOverridableManager *this,TNotNull<UObject_*> param_1,FPropertyVisitorPath *param_2)

{
  return;
}

// PostOverrideProperty @ 1421063e0

void __thiscall
FOverridableManager::PostOverrideProperty
          (FOverridableManager *this,TNotNull<UObject_*> param_1,FPropertyVisitorPath *param_2,
          uint param_3)

{
  return;
}

// PreOverrideProperty @ 142106430

void __thiscall
FOverridableManager::PreOverrideProperty
          (FOverridableManager *this,TNotNull<UObject_*> param_1,FPropertyVisitorPath *param_2,
          uint param_3)

{
  return;
}

// PropagateClearOverridesToInstancedSubObjects @ 142107c90

void __thiscall
FOverridableManager::PropagateClearOverridesToInstancedSubObjects
          (FOverridableManager *this,TNotNull<UObject_*> param_1)

{
  return;
}

// RestoreOverrideOperation @ 14210c090

FOverriddenPropertySet * __thiscall
FOverridableManager::RestoreOverrideOperation
          (FOverridableManager *this,TNotNull<UObject_*> param_1,
          EOverriddenPropertyOperation param_2,bool param_3,bool param_4)

{
  FBoolAnnotation local_res18 [16];
  
  if (param_3) {
    local_res18[0].Mark = true;
    FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
              ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)this,(UObjectBase *)param_1.Val,
               local_res18);
    return (FOverriddenPropertySet *)0x0;
  }
  local_res18[0].Mark = (bool)param_2;
  FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAnnotation
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)this,(UObjectBase *)param_1.Val);
  return (FOverriddenPropertySet *)0x0;
}

// RestoreOverrideState @ 14210c0d0

void __thiscall
FOverridableManager::RestoreOverrideState
          (FOverridableManager *this,TNotNull<UObject_const_*> param_1,TNotNull<UObject_*> param_2)

{
  return;
}

// SerializeOverriddenProperties @ 14210ffa0

void __thiscall
FOverridableManager::SerializeOverriddenProperties
          (FOverridableManager *this,TNotNull<UObject_*> param_1,FStructuredArchiveRecord param_2)

{
  return;
}

