// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14773d700

UClass * __cdecl UComponentDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentDelegateBinding",
               &Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton,
               StaticRegisterNativesUComponentDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComponentDelegateBinding>,
               InternalVTableHelperCtorCaller<UComponentDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton;
}

// UComponentDelegateBinding @ 1477f0ae0

UComponentDelegateBinding * __thiscall
UComponentDelegateBinding::UComponentDelegateBinding
          (UComponentDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UComponentDelegateBinding__6B_;
  (this->ComponentDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentDelegateBindings).ArrayNum = 0;
  (this->ComponentDelegateBindings).ArrayMax = 0;
  return this;
}

// UComponentDelegateBinding @ 1477f0b20

UComponentDelegateBinding * __thiscall
UComponentDelegateBinding::UComponentDelegateBinding
          (UComponentDelegateBinding *this,FObjectInitializer *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UComponentDelegateBinding__6B_;
  (this->ComponentDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentDelegateBindings).ArrayNum = 0;
  (this->ComponentDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UComponentDelegateBinding @ 1477f4900

void __thiscall
UComponentDelegateBinding::~UComponentDelegateBinding(UComponentDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComponentDelegateBinding__6B_;
  pFVar1 = (this->ComponentDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindDynamicDelegates @ 14780c8a0

void __thiscall
UComponentDelegateBinding::BindDynamicDelegates(UComponentDelegateBinding *this,UObject *param_1)

{
  UStruct *pUVar1;
  FName FVar2;
  code *pcVar3;
  FField *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  UFunction *pUVar8;
  uint uVar9;
  FName *pFVar10;
  FName local_res8;
  FName local_res18;
  longlong local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FWeakObjectPtr local_d0;
  FName local_c8;
  TFieldIterator<FObjectProperty> local_c0;
  TFieldIterator<FMulticastDelegateProperty> local_a8;
  UObject *local_90;
  FDestructionSentinel local_88;
  undefined8 local_70;
  FWeakObjectPtr local_68;
  FName local_60;
  FReadAccessScope local_58;
  
  uVar9 = 0;
  if ((this->ComponentDelegateBindings).ArrayNum < 1) {
    return;
  }
  local_res20 = 0;
LAB_14780c8e0:
  uVar6 = 0;
  if ((int)uVar9 < (this->ComponentDelegateBindings).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar1 = *(UStruct **)&param_1->field_0x10;
  pFVar10 = (FName *)((this->ComponentDelegateBindings).AllocatorInstance.Data + local_res20);
  FVar2 = *pFVar10;
  if (FVar2 != (FName)0x0) {
    if (pUVar1 == (UStruct *)0x0) {
      local_c0.Field = (FField *)0x0;
    }
    else {
      local_c0.Field = pUVar1->ChildProperties;
    }
    local_c0.InterfaceIndex = -1;
    local_c0.bIncludeSuper = true;
    local_c0.bIncludeDeprecated = true;
    local_c0.bIncludeInterface = false;
    local_c0.Struct = pUVar1;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_c0);
    pFVar4 = local_c0.Field;
    while (local_c0.Field = pFVar4, pFVar4 != (FField *)0x0) {
      bVar5 = IsThisNotNull(pFVar4,"FField::GetFName");
      if (bVar5) {
        local_res8 = pFVar4->NamePrivate;
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
      if (local_res8 == FVar2) {
        if ((pFVar4 != (FField *)0x0) &&
           (lVar7 = (**(code **)(pFVar4->_padding_ + 0x208))(pFVar4,param_1,0), lVar7 != 0)) {
          FVar2 = pFVar10[1];
          pUVar1 = *(UStruct **)(lVar7 + 0x10);
          if (FVar2 != (FName)0x0) {
            if (pUVar1 == (UStruct *)0x0) {
              local_a8.Field = (FField *)0x0;
            }
            else {
              local_a8.Field = pUVar1->ChildProperties;
            }
            local_a8.InterfaceIndex = -1;
            local_a8.bIncludeSuper = true;
            local_a8.bIncludeDeprecated = true;
            local_a8.bIncludeInterface = false;
            local_a8.Struct = pUVar1;
            TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_a8);
            if (local_a8.Field != (FField *)0x0) goto LAB_14780ca60;
          }
        }
        break;
      }
      local_c0.Field = pFVar4->Next;
      TFieldIterator<FObjectProperty>::IterateToNext(&local_c0);
      pFVar4 = local_c0.Field;
    }
  }
  goto LAB_14780cb76;
  while( true ) {
    local_a8.Field = pFVar4->Next;
    TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_a8);
    if (local_a8.Field == (FField *)0x0) break;
LAB_14780ca60:
    pFVar4 = local_a8.Field;
    bVar5 = IsThisNotNull(local_a8.Field,"FField::GetFName");
    if (bVar5) {
      local_res18 = pFVar4->NamePrivate;
    }
    else {
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
    }
    if (local_res18 == FVar2) {
      if ((pFVar4 != (FField *)0x0) &&
         (pUVar8 = UClass::FindFunctionByName
                             (*(UClass **)&param_1->field_0x10,pFVar10[2],IncludeSuper),
         pUVar8 != (UFunction *)0x0)) {
        local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_d0.ObjectIndex = 0;
        local_d0.ObjectSerialNumber = 0;
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_88);
        local_90 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_90);
        local_c8 = pFVar10[2];
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
        local_70 = 0;
        pcVar3 = *(code **)(pFVar4->_padding_ + 0x1e0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_d8,&local_58);
        local_68 = local_d0;
        local_60 = local_c8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        (*pcVar3)(pFVar4,&local_70,lVar7,0);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
      }
      break;
    }
  }
LAB_14780cb76:
  uVar9 = uVar9 + 1;
  local_res20 = local_res20 + 0x18;
  if ((this->ComponentDelegateBindings).ArrayNum <= (int)uVar9) {
    return;
  }
  goto LAB_14780c8e0;
}

// GetPrivateStaticClass @ 14783c610

UClass * __cdecl UComponentDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentDelegateBinding",
               &Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton,
               StaticRegisterNativesUComponentDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComponentDelegateBinding>,
               InternalVTableHelperCtorCaller<UComponentDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUComponentDelegateBinding @ 147875ac0

void __cdecl UComponentDelegateBinding::StaticRegisterNativesUComponentDelegateBinding(void)

{
  return;
}

// UnbindDynamicDelegates @ 14787b4b0

void __thiscall
UComponentDelegateBinding::UnbindDynamicDelegates(UComponentDelegateBinding *this,UObject *param_1)

{
  UStruct *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FField *pFVar7;
  uint uVar8;
  FName *pFVar9;
  FName local_res8;
  FName local_res18;
  longlong local_res20;
  TFieldIterator<FObjectProperty> local_a8;
  TFieldIterator<FMulticastDelegateProperty> local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FWeakObjectPtr local_70;
  FName local_68;
  UObject *local_60;
  FDestructionSentinel local_58;
  
  uVar8 = 0;
  if ((this->ComponentDelegateBindings).ArrayNum < 1) {
    return;
  }
  local_res20 = 0;
LAB_14787b4f0:
  uVar5 = 0;
  if ((int)uVar8 < (this->ComponentDelegateBindings).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar1 = *(UStruct **)&param_1->field_0x10;
  pFVar9 = (FName *)((this->ComponentDelegateBindings).AllocatorInstance.Data + local_res20);
  FVar2 = *pFVar9;
  if (FVar2 != (FName)0x0) {
    if (pUVar1 == (UStruct *)0x0) {
      local_a8.Field = (FField *)0x0;
    }
    else {
      local_a8.Field = pUVar1->ChildProperties;
    }
    local_a8.InterfaceIndex = -1;
    local_a8.bIncludeSuper = true;
    local_a8.bIncludeDeprecated = true;
    local_a8.bIncludeInterface = false;
    local_a8.Struct = pUVar1;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_a8);
    pFVar7 = local_a8.Field;
    while (local_a8.Field = pFVar7, pFVar7 != (FField *)0x0) {
      bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
      if (bVar4) {
        local_res8 = pFVar7->NamePrivate;
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
      if (local_res8 == FVar2) {
        if ((pFVar7 != (FField *)0x0) &&
           (lVar6 = (**(code **)(pFVar7->_padding_ + 0x208))(pFVar7,param_1,0), lVar6 != 0)) {
          FVar2 = pFVar9[1];
          pUVar1 = *(UStruct **)(lVar6 + 0x10);
          if (FVar2 == (FName)0x0) goto LAB_14787b6a5;
          if (pUVar1 == (UStruct *)0x0) {
            local_90.Field = (FField *)0x0;
          }
          else {
            local_90.Field = pUVar1->ChildProperties;
          }
          local_90.InterfaceIndex = -1;
          local_90.bIncludeSuper = true;
          local_90.bIncludeDeprecated = true;
          local_90.bIncludeInterface = false;
          local_90.Struct = pUVar1;
          TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_90);
          pFVar7 = local_90.Field;
          goto joined_r0x00014787b652;
        }
        break;
      }
      local_a8.Field = pFVar7->Next;
      TFieldIterator<FObjectProperty>::IterateToNext(&local_a8);
      pFVar7 = local_a8.Field;
    }
  }
  goto LAB_14787b727;
joined_r0x00014787b652:
  local_90.Field = pFVar7;
  if (pFVar7 == (FField *)0x0) goto LAB_14787b6a5;
  bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
  if (bVar4) {
    local_res18 = pFVar7->NamePrivate;
  }
  else {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
  }
  if (local_res18 == FVar2) goto LAB_14787b6a9;
  local_90.Field = pFVar7->Next;
  TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_90);
  pFVar7 = local_90.Field;
  goto joined_r0x00014787b652;
LAB_14787b6a5:
  pFVar7 = (FField *)0x0;
LAB_14787b6a9:
  if (pFVar7 != (FField *)0x0) {
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_58);
    local_60 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_60);
    local_68 = pFVar9[2];
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    (**(code **)(pFVar7->_padding_ + 0x1e8))(pFVar7,&local_78,lVar6,0);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  }
LAB_14787b727:
  uVar8 = uVar8 + 1;
  local_res20 = local_res20 + 0x18;
  if ((this->ComponentDelegateBindings).ArrayNum <= (int)uVar8) {
    return;
  }
  goto LAB_14787b4f0;
}

// UnbindDynamicDelegatesForProperty @ 14787b770

void __thiscall
UComponentDelegateBinding::UnbindDynamicDelegatesForProperty
          (UComponentDelegateBinding *this,UObject *param_1,FObjectProperty *param_2)

{
  longlong lVar1;
  UStruct *pUVar2;
  FName FVar3;
  code *pcVar4;
  FField *pFVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FName FVar9;
  uint uVar10;
  FObjectProperty *pFVar11;
  FField *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong local_res20;
  TFieldIterator<FObjectProperty> local_a0;
  TFieldIterator<FMulticastDelegateProperty> local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  FWeakObjectPtr local_68;
  longlong local_60;
  UObject *local_58;
  FDestructionSentinel local_50;
  
  uVar10 = 0;
  if ((this->ComponentDelegateBindings).ArrayNum < 1) {
    return;
  }
  lVar14 = 0;
  do {
    uVar7 = 0;
    if ((int)uVar10 < (this->ComponentDelegateBindings).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar13 = (this->ComponentDelegateBindings).AllocatorInstance.Data + lVar14;
    bVar6 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar6) {
      lVar8 = *(longlong *)&param_2->field_0x20;
    }
    else {
      lVar8 = 0;
    }
    lVar1 = *(longlong *)pFVar13;
    if (lVar8 == lVar1) {
      pUVar2 = *(UStruct **)&param_1->field_0x10;
      if (lVar1 != 0) {
        if (pUVar2 == (UStruct *)0x0) {
          local_a0.Field = (FField *)0x0;
        }
        else {
          local_a0.Field = pUVar2->ChildProperties;
        }
        local_a0.InterfaceIndex = -1;
        local_a0.bIncludeSuper = true;
        local_a0.bIncludeDeprecated = true;
        local_a0.bIncludeInterface = false;
        local_a0.Struct = pUVar2;
        TFieldIterator<FObjectProperty>::IterateToNext(&local_a0);
        pFVar11 = (FObjectProperty *)local_a0.Field;
        while (local_a0.Field = (FField *)pFVar11, pFVar11 != (FObjectProperty *)0x0) {
          bVar6 = IsThisNotNull(pFVar11,"FField::GetFName");
          if (bVar6) {
            local_res20 = *(longlong *)&pFVar11->field_0x20;
          }
          else {
            local_res20 = 0;
          }
          if (local_res20 == lVar1) goto LAB_14787b8cb;
          local_a0.Field = *(FField **)&pFVar11->field_0x18;
          TFieldIterator<FObjectProperty>::IterateToNext(&local_a0);
          pFVar11 = (FObjectProperty *)local_a0.Field;
        }
      }
      pFVar11 = (FObjectProperty *)0x0;
LAB_14787b8cb:
      if (pFVar11 == param_2) {
        lVar14 = (**(code **)(*(longlong *)pFVar11 + 0x208))(pFVar11,param_1,0);
        if (lVar14 == 0) {
          return;
        }
        FVar3 = *(FName *)(pFVar13 + 8);
        pUVar2 = *(UStruct **)(lVar14 + 0x10);
        pFVar12 = (FField *)0x0;
        if (FVar3 == (FName)0x0) goto LAB_14787b9ab;
        if (pUVar2 == (UStruct *)0x0) {
          local_88.Field = (FField *)0x0;
        }
        else {
          local_88.Field = pUVar2->ChildProperties;
        }
        local_88.InterfaceIndex = -1;
        local_88.bIncludeSuper = true;
        local_88.bIncludeDeprecated = true;
        local_88.bIncludeInterface = false;
        local_88.Struct = pUVar2;
        TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_88);
        pFVar5 = local_88.Field;
        break;
      }
    }
    uVar10 = uVar10 + 1;
    lVar14 = lVar14 + 0x18;
    if ((this->ComponentDelegateBindings).ArrayNum <= (int)uVar10) {
      return;
    }
  } while( true );
joined_r0x00014787b958:
  pFVar12 = (FField *)0x0;
  local_88.Field = pFVar5;
  if (pFVar5 == (FField *)0x0) {
LAB_14787b9ab:
    if (pFVar12 != (FField *)0x0) {
      local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_60 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_70,(FWriteAccessScope *)&local_50);
      local_58 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
      local_60 = *(longlong *)(pFVar13 + 0x10);
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      (**(code **)(pFVar12->_padding_ + 0x1e8))(pFVar12,&local_70,lVar14,0);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
    }
    return;
  }
  bVar6 = IsThisNotNull(pFVar5,"FField::GetFName");
  if (bVar6) {
    FVar9 = pFVar5->NamePrivate;
  }
  else {
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
  }
  pFVar12 = pFVar5;
  if (FVar9 == FVar3) goto LAB_14787b9ab;
  local_88.Field = pFVar5->Next;
  TFieldIterator<FMulticastDelegateProperty>::IterateToNext(&local_88);
  pFVar5 = local_88.Field;
  goto joined_r0x00014787b958;
}

