// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 37

// StaticStruct @ 1420e24d0

UScriptStruct * __cdecl FOverriddenPropertySet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertySet,(UObject *)pUVar1,
                         L"OverriddenPropertySet");
  }
  return Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 1420e2650

UObject * __cdecl
`FOverriddenPropertySet::TryGetInstancedSubObjectValue'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1)

{
  return param_1;
}

// operator() @ 1420eeb60

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_10>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  FOverriddenPropertyNode *this_00;
  undefined1 *puVar6;
  undefined4 local_res8 [2];
  FOverriddenPropertyNodeID local_38;
  
  local_res8[0] = **(undefined4 **)((longlong)this + 8);
  bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (*(FScriptMapHelper **)this,(<lambda_1> *)local_res8);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreEditMapHelper.IsValidIndex(InternalPreEditMapIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0x57b,L"ArrayRemove change type expected to have an valid index"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (**(longlong **)((longlong)this + 0x10) == 0) {
    return;
  }
  puVar5 = FScriptMapHelper::GetKeyPtr(*(FScriptMapHelper **)this,**(int **)((longlong)this + 8));
  FOverriddenPropertyNodeID::FromMapKey
            (&local_38,*(FProperty **)(**(longlong **)((longlong)this + 0x18) + 0x70),puVar5);
  puVar6 = *(undefined1 **)((longlong)this + 0x20);
  lVar1 = **(longlong **)((longlong)this + 0x10);
  this_00 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
            FindByKey<FOverriddenPropertyNodeID>
                      ((TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x28)
                       ,&local_38);
  if (this_00 == (FOverriddenPropertyNode *)0x0) {
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 1;
    }
    if (*(char *)(lVar1 + 0x20) == '\0') {
      *(undefined1 *)(lVar1 + 0x20) = 1;
    }
    iVar4 = *(int *)(lVar1 + 0x30);
    if (iVar4 == *(int *)(lVar1 + 0x34)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
    }
    *(int *)(lVar1 + 0x30) = iVar4 + 1;
    this_00 = (FOverriddenPropertyNode *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar1 + 0x28));
    FOverriddenPropertyPath::FOverriddenPropertyPath
              ((FOverriddenPropertyPath *)this_00,&local_38.Path);
    (this_00->NodeID).Object.WeakPtr = local_38.Object.WeakPtr;
    (this_00->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SubPropertyNodes).ArrayNum = 0;
    (this_00->SubPropertyNodes).ArrayMax = 0;
    this_00->Operation = None;
  }
  if (this_00->Operation == Add) {
    bVar3 = FOverriddenPropertyNode::RemoveSubPropertyNode
                      ((FOverriddenPropertyNode *)**(undefined8 **)((longlong)this + 0x10),&local_38
                       ,*(bool **)((longlong)this + 0x20));
    if (!bVar3) goto LAB_1420eecc0;
    puVar6 = *(undefined1 **)((longlong)this + 0x28);
  }
  else {
    puVar6 = *(undefined1 **)((longlong)this + 0x20);
    if ((this_00->Operation == Remove) || (this_00->Operation = Remove, puVar6 == (undefined1 *)0x0)
       ) goto LAB_1420eecc0;
  }
  *puVar6 = 1;
LAB_1420eecc0:
  if (local_38.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Path.Path.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1420ef1c0

void __thiscall
`FOverriddenPropertySet::ClearOverriddenProperty'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FOverriddenPropertyNode *this_00;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FOverriddenPropertyNode *pFVar6;
  int iVar7;
  
  pFVar6 = (FOverriddenPropertyNode *)0x0;
  do {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if (*(int *)&pFVar2[1].Data == 0) {
      return;
    }
    if ((*(int *)&pFVar2[1].Data < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(FOverriddenPropertyNode **)
               (pFVar2->Data + (longlong)*(int *)&pFVar2[1].Data * 8 + -8);
    iVar7 = *(int *)&pFVar2[1].Data + -1;
    *(int *)&pFVar2[1].Data = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,pFVar2,iVar7,(int *)((longlong)&pFVar2[1].Data + 4));
    if (this_00 == (FOverriddenPropertyNode *)0x0) {
      return;
    }
    if (pFVar6 != (FOverriddenPropertyNode *)0x0) {
      iVar7 = (this_00->SubPropertyNodes).ArrayNum;
      if (iVar7 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (1 < iVar7) {
        bVar5 = FOverriddenPropertyNode::RemoveSubPropertyNode
                          (this_00,&pFVar6->NodeID,*(bool **)((longlong)this + 0x10));
        if (bVar5) {
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentNode->RemoveSubPropertyNode(LastCleanedNode->GetNodeID(), &bWasModified)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                           ,0x3a3,L"Expecting the node to always be removed");
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar3 = *(undefined1 **)((longlong)this + 0x10);
    if ((this_00->Operation != None) && (this_00->Operation = None, puVar3 != (undefined1 *)0x0)) {
      *puVar3 = 1;
    }
    iVar7 = (this_00->SubPropertyNodes).ArrayNum;
    pFVar6 = this_00;
    if (iVar7 != 0) {
      DestructItems<FOverriddenPropertyNode,int>
                ((FOverriddenPropertyNode *)(this_00->SubPropertyNodes).AllocatorInstance.Data,iVar7
                );
      piVar1 = &(this_00->SubPropertyNodes).ArrayMax;
      (this_00->SubPropertyNodes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this_00->SubPropertyNodes).AllocatorInstance,0,piVar1);
      }
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 1;
      }
    }
  } while( true );
}

// operator() @ 1420ef600

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  void *pvVar6;
  
  lVar1 = **(longlong **)this;
  if (((lVar1 != 0) &&
      (puVar2 = *(undefined1 **)((longlong)this + 8), *(char *)(lVar1 + 0x20) != '\x02')) &&
     (*(undefined1 *)(lVar1 + 0x20) = 2, puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 1;
  }
  iVar5 = 0;
  while( true ) {
    lVar1 = *(longlong *)((longlong)this + 0x10);
    puVar3 = *(ulonglong **)(lVar1 + 8);
    if ((int)puVar3[1] <= iVar5) break;
    if ((int)puVar3[1] == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      uVar4 = *puVar3;
      if (((*(byte *)(lVar1 + 0x18) & 1) != 0) && ((uVar4 & 1) != 0)) {
        uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)puVar3;
      }
      pvVar6 = (void *)((longlong)*(int *)(lVar1 + 0x10) * (longlong)iVar5 + uVar4);
    }
    FOverriddenPropertySet::TryGetInstancedSubObjectValue
              (*(FOverriddenPropertySet **)((longlong)this + 0x18),
               (FObjectPropertyBase *)**(undefined8 **)((longlong)this + 0x20),pvVar6);
    iVar5 = iVar5 + 1;
  }
  return;
}

// operator() @ 1420ef690

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_5>::operator()(void *this)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TNotNull<UObject_const_*> TVar7;
  FOverriddenPropertyNode *this_00;
  ulonglong uVar8;
  void *pvVar9;
  FOverriddenPropertyNodeID local_38;
  
  if (((**(int **)((longlong)this + 8) < 0) ||
      (*(int *)(*(longlong *)(*(longlong *)this + 8) + 8) <= **(int **)((longlong)this + 8))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayHelper.IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0x477,L"ArrayAdd change type expected to have an valid index"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)this;
  puVar2 = *(ulonglong **)(lVar1 + 8);
  if ((int)puVar2[1] == 0) {
    pvVar9 = (void *)0x0;
  }
  else {
    uVar8 = *puVar2;
    if (((*(byte *)(lVar1 + 0x18) & 1) != 0) && ((uVar8 & 1) != 0)) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
    }
    pvVar9 = (void *)((longlong)*(int *)(lVar1 + 0x10) * (longlong)**(int **)((longlong)this + 8) +
                     uVar8);
  }
  TVar7.Val = FOverriddenPropertySet::TryGetInstancedSubObjectValue
                        (*(FOverriddenPropertySet **)((longlong)this + 0x10),
                         (FObjectPropertyBase *)**(undefined8 **)((longlong)this + 0x18),pvVar9);
  if ((TVar7.Val != (UObject *)0x0) && (**(longlong **)((longlong)this + 0x20) != 0)) {
    FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_38,TVar7);
    puVar3 = *(undefined1 **)((longlong)this + 0x28);
    lVar1 = **(longlong **)((longlong)this + 0x20);
    this_00 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
              FindByKey<FOverriddenPropertyNodeID>
                        ((TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)
                         (lVar1 + 0x28),&local_38);
    if (this_00 == (FOverriddenPropertyNode *)0x0) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 1;
      }
      if (*(char *)(lVar1 + 0x20) == '\0') {
        *(undefined1 *)(lVar1 + 0x20) = 1;
      }
      iVar6 = *(int *)(lVar1 + 0x30);
      if (iVar6 == *(int *)(lVar1 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
      }
      *(int *)(lVar1 + 0x30) = iVar6 + 1;
      this_00 = (FOverriddenPropertyNode *)((longlong)iVar6 * 0x38 + *(longlong *)(lVar1 + 0x28));
      FOverriddenPropertyPath::FOverriddenPropertyPath
                ((FOverriddenPropertyPath *)this_00,&local_38.Path);
      (this_00->NodeID).Object.WeakPtr = local_38.Object.WeakPtr;
      this_00->Operation = None;
      (this_00->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->SubPropertyNodes).ArrayNum = 0;
      (this_00->SubPropertyNodes).ArrayMax = 0;
    }
    puVar3 = *(undefined1 **)((longlong)this + 0x28);
    if ((this_00->Operation != Add) && (this_00->Operation = Add, puVar3 != (undefined1 *)0x0)) {
      *puVar3 = 1;
    }
    if (local_38.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Path.Path.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1420ef840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_6>::operator()(void *this)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  TNotNull<UObject_const_*> this_00;
  TNotNull<UObject_const_*> TVar6;
  FOverriddenPropertyNode *pFVar7;
  ulonglong uVar8;
  void *pvVar9;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  TArrayView<FOverriddenPropertyNode,int> local_68;
  FOverriddenPropertyNodeID local_58;
  FOverriddenPropertyNodeID local_38;
  
  if (((**(int **)((longlong)this + 8) < 0) ||
      (*(int *)(*(longlong *)(*(longlong *)this + 8) + 8) <= **(int **)((longlong)this + 8))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreEditArrayHelper.IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0x48b,L"ArrayRemove change type expected to have an valid index"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)this;
  puVar2 = *(ulonglong **)(lVar1 + 8);
  if ((int)puVar2[1] == 0) {
    pvVar9 = (void *)0x0;
  }
  else {
    uVar8 = *puVar2;
    if (((*(byte *)(lVar1 + 0x18) & 1) != 0) && ((uVar8 & 1) != 0)) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
    }
    pvVar9 = (void *)((longlong)*(int *)(lVar1 + 0x10) * (longlong)**(int **)((longlong)this + 8) +
                     uVar8);
  }
  this_00.Val = FOverriddenPropertySet::TryGetInstancedSubObjectValue
                          (*(FOverriddenPropertySet **)((longlong)this + 0x10),
                           (FObjectPropertyBase *)**(undefined8 **)((longlong)this + 0x18),pvVar9);
  if ((this_00.Val != (UObject *)0x0) && (**(longlong **)((longlong)this + 0x20) != 0)) {
    TVar6.Val = UObject::GetArchetype(this_00.Val);
    if ((TVar6.Val == (UObject *)0x0) || ((*(uint *)&(TVar6.Val)->field_0x8 & 0x10) != 0)) {
      FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_38,this_00);
      local_68.DataPtr =
           *(FOverriddenPropertyNode **)(**(longlong **)((longlong)this + 0x20) + 0x28);
      local_68.ArrayNum = *(int *)(**(longlong **)((longlong)this + 0x20) + 0x30);
      if ((local_68.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = TArrayView<FOverriddenPropertyNode,int>::FindByKey<FOverriddenPropertyNodeID>
                         (&local_68,&local_38);
      if (pFVar7 == (FOverriddenPropertyNode *)0x0) {
        local_58.Path.Path.AllocatorInstance.Data = local_38.Path.Path.AllocatorInstance.Data;
        if (4 < (byte)LogOverridableObject._0_1_) {
          local_res10.ComparisonIndex.Value = *(uint *)&(this_00.Val)->field_0x18;
          local_res10.Number = *(uint *)&(this_00.Val)->field_0x1c;
          ::FName::ToString(&local_res10,&local_78);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject)
          ;
          local_58.Path.Path.AllocatorInstance.Data = local_38.Path.Path.AllocatorInstance.Data;
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
            local_58.Path.Path.AllocatorInstance.Data = local_38.Path.Path.AllocatorInstance.Data;
          }
        }
      }
      else {
        if ((pFVar7->Operation != Add) && (2 < (byte)LogOverridableObject._0_1_)) {
          local_res8.ComparisonIndex.Value = *(uint *)&(this_00.Val)->field_0x18;
          local_res8.Number = *(uint *)&(this_00.Val)->field_0x1c;
          ::FName::ToString(&local_res8,&local_88);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject)
          ;
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = FOverriddenPropertyNode::RemoveSubPropertyNode
                          ((FOverriddenPropertyNode *)**(undefined8 **)((longlong)this + 0x20),
                           &local_38,*(bool **)((longlong)this + 0x28));
        local_58.Path.Path.AllocatorInstance.Data = local_38.Path.Path.AllocatorInstance.Data;
        if (bVar5) {
          **(undefined1 **)((longlong)this + 0x30) = 1;
        }
      }
    }
    else {
      FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_58,TVar6);
      pFVar7 = FOverriddenPropertyNode::FindOrAddNode
                         ((FOverriddenPropertyNode *)**(undefined8 **)((longlong)this + 0x20),
                          &local_58,*(bool **)((longlong)this + 0x28));
      if (pFVar7->Operation == Add) {
        bVar5 = FOverriddenPropertyNode::RemoveSubPropertyNode
                          ((FOverriddenPropertyNode *)**(undefined8 **)((longlong)this + 0x20),
                           &local_58,*(bool **)((longlong)this + 0x28));
        if (bVar5) {
          **(undefined1 **)((longlong)this + 0x30) = 1;
        }
      }
      else {
        puVar3 = *(undefined1 **)((longlong)this + 0x28);
        if ((pFVar7->Operation != Remove) &&
           (pFVar7->Operation = Remove, puVar3 != (undefined1 *)0x0)) {
          *puVar3 = 1;
        }
      }
    }
    if (local_58.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Path.Path.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1420efb10

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_8>::operator()(void *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  FScriptMapHelper *this_00;
  FScriptMapHelper *this_01;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar3;
  FOverriddenPropertySet *this_02;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FOverriddenPropertyNode *this_03;
  uchar *puVar7;
  ulonglong uVar8;
  uint uVar9;
  void *pvVar11;
  uint local_res8 [2];
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_88 [2];
  undefined1 local_80 [16];
  FOverriddenPropertyNodeID local_70;
  void *pvVar10;
  
  lVar1 = **(longlong **)this;
  if (((lVar1 != 0) &&
      (puVar2 = *(undefined1 **)((longlong)this + 8), *(char *)(lVar1 + 0x20) != '\x02')) &&
     (*(undefined1 *)(lVar1 + 0x20) = 2, puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 1;
  }
  this_00 = *(FScriptMapHelper **)((longlong)this + 0x10);
  pvVar11 = (void *)0x0;
  iVar6 = (((this_00->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
  pvVar10 = pvVar11;
  if (0 < iVar6) {
    do {
      local_res10[0] = (int)pvVar10;
      bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this_00,(<lambda_1> *)local_res10);
      if (bVar5) break;
      uVar9 = (int)pvVar10 + 1;
      pvVar10 = (void *)(ulonglong)uVar9;
    } while ((int)uVar9 < iVar6);
  }
  local_res8[0] = (uint)pvVar10;
  bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1> *)local_res8);
  if (bVar5) {
    do {
      uVar9 = (uint)pvVar10;
      if (**(longlong **)this != 0) {
        this_01 = *(FScriptMapHelper **)((longlong)this + 0x10);
        pTVar3 = (this_01->field2_0x10).FreezableMap;
        iVar6 = (pTVar3->Pairs).Elements.Data.ArrayNum;
        if ((this_01->MapFlags & UsesMemoryImageAllocator) == None) {
          if (iVar6 == *(int *)&(pTVar3->Pairs).field_0x34) goto LAB_1420efc3a;
          local_res20[0] = uVar9;
          bVar5 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (this_01,(<lambda_1> *)local_res20);
          if ((!bVar5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(InternalIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x12dd,
                                 L"Invalid internal index. Use IsValidIndex before calling this method."
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar10 = (void *)((longlong)
                             (int)(uVar9 * (this_01->MapLayout).SetLayout.SparseArrayLayout.Size) +
                            (pTVar3->Pairs).Elements.Data._padding_);
        }
        else if (iVar6 == (pTVar3->Pairs).Elements.NumFreeIndices) {
LAB_1420efc3a:
          pvVar10 = pvVar11;
          if ((uVar9 != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InternalIndex == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x12d9,
                                 L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          local_res18[0] = uVar9;
          bVar5 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (this_01,(<lambda_1> *)local_res18);
          if ((!bVar5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(InternalIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x12dd,
                                 L"Invalid internal index. Use IsValidIndex before calling this method."
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar8 = (pTVar3->Pairs).Elements.Data._padding_;
          if ((uVar8 & 1) != 0) {
            uVar8 = (longlong)&(pTVar3->Pairs).Elements.Data._padding_ + ((longlong)uVar8 >> 0x18);
          }
          pvVar10 = (void *)((longlong)
                             (int)(uVar9 * (this_01->MapLayout).SetLayout.SparseArrayLayout.Size) +
                            uVar8);
        }
        FOverriddenPropertyNodeID::FromMapKey
                  (&local_70,*(FProperty **)(**(longlong **)((longlong)this + 0x18) + 0x70),pvVar10)
        ;
        puVar2 = *(undefined1 **)((longlong)this + 8);
        lVar1 = **(longlong **)this;
        this_03 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                  FindByKey<FOverriddenPropertyNodeID>
                            ((TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)
                             (lVar1 + 0x28),&local_70);
        if (this_03 == (FOverriddenPropertyNode *)0x0) {
          if (puVar2 != (undefined1 *)0x0) {
            *puVar2 = 1;
          }
          if (*(char *)(lVar1 + 0x20) == '\0') {
            *(undefined1 *)(lVar1 + 0x20) = 1;
          }
          iVar6 = *(int *)(lVar1 + 0x30);
          if (iVar6 == *(int *)(lVar1 + 0x34)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
          }
          *(int *)(lVar1 + 0x30) = iVar6 + 1;
          this_03 = (FOverriddenPropertyNode *)
                    ((longlong)iVar6 * 0x38 + *(longlong *)(lVar1 + 0x28));
          FOverriddenPropertyPath::FOverriddenPropertyPath
                    ((FOverriddenPropertyPath *)this_03,&local_70.Path);
          (this_03->NodeID).Object.WeakPtr = local_70.Object.WeakPtr;
          this_03->Operation = None;
          (this_03->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_03->SubPropertyNodes).ArrayNum = 0;
          (this_03->SubPropertyNodes).ArrayMax = 0;
        }
        puVar2 = *(undefined1 **)((longlong)this + 8);
        if ((this_03->Operation != Replace) &&
           (this_03->Operation = Replace, puVar2 != (undefined1 *)0x0)) {
          *puVar2 = 1;
        }
        if (local_70.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Path.Path.AllocatorInstance.Data);
        }
      }
      local_80._0_8_ = *(undefined8 *)((longlong)this + 0x10);
      this_02 = *(FOverriddenPropertySet **)((longlong)this + 0x20);
      local_80._8_4_ = uVar9;
      puVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                         ((FScriptMapHelper *)local_80._0_8_,(<lambda_1> *)local_80);
      FOverriddenPropertySet::TryGetInstancedSubObjectValue
                (this_02,(FObjectPropertyBase *)**(undefined8 **)((longlong)this + 0x28),puVar7);
      iVar6 = (((this_00->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
      do {
        uVar9 = uVar9 + 1;
        pvVar10 = (void *)(ulonglong)uVar9;
        if (iVar6 <= (int)uVar9) break;
        local_88[0] = uVar9;
        bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (this_00,(<lambda_1> *)local_88);
      } while (!bVar5);
      local_res8[0] = uVar9;
      bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this_00,(<lambda_1> *)local_res8);
    } while (bVar5);
  }
  return;
}

// operator() @ 1420efe10

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_9>::operator()(void *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  FOverriddenPropertyNode *this_00;
  undefined4 local_res8 [2];
  FOverriddenPropertyNodeID local_38;
  
  local_res8[0] = **(undefined4 **)((longlong)this + 8);
  bVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (*(FScriptMapHelper **)this,(<lambda_1> *)local_res8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MapHelper.IsValidIndex(InternalMapIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                       ,0x56f,L"ArrayAdd change type expected to have an valid index");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (**(longlong **)((longlong)this + 0x10) != 0) {
    puVar6 = FScriptMapHelper::GetKeyPtr(*(FScriptMapHelper **)this,**(int **)((longlong)this + 8));
    FOverriddenPropertyNodeID::FromMapKey
              (&local_38,*(FProperty **)(**(longlong **)((longlong)this + 0x18) + 0x70),puVar6);
    puVar1 = *(undefined1 **)((longlong)this + 0x20);
    lVar2 = **(longlong **)((longlong)this + 0x10);
    this_00 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
              FindByKey<FOverriddenPropertyNodeID>
                        ((TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)
                         (lVar2 + 0x28),&local_38);
    if (this_00 == (FOverriddenPropertyNode *)0x0) {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 1;
      }
      if (*(char *)(lVar2 + 0x20) == '\0') {
        *(undefined1 *)(lVar2 + 0x20) = 1;
      }
      iVar5 = *(int *)(lVar2 + 0x30);
      if (iVar5 == *(int *)(lVar2 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
      }
      *(int *)(lVar2 + 0x30) = iVar5 + 1;
      this_00 = (FOverriddenPropertyNode *)((longlong)iVar5 * 0x38 + *(longlong *)(lVar2 + 0x28));
      FOverriddenPropertyPath::FOverriddenPropertyPath
                ((FOverriddenPropertyPath *)this_00,&local_38.Path);
      (this_00->NodeID).Object.WeakPtr = local_38.Object.WeakPtr;
      (this_00->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->SubPropertyNodes).ArrayNum = 0;
      (this_00->SubPropertyNodes).ArrayMax = 0;
      this_00->Operation = None;
    }
    puVar1 = *(undefined1 **)((longlong)this + 0x20);
    if ((this_00->Operation != Add) && (this_00->Operation = Add, puVar1 != (undefined1 *)0x0)) {
      *puVar1 = 1;
    }
    if (local_38.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Path.Path.AllocatorInstance.Data);
    }
  }
  return;
}

// ClearOverriddenProperty @ 1420f3880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOverriddenPropertySet::ClearOverriddenProperty
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_2,void *param_3)

{
  int iVar1;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TNotNull<FProperty_const_*> TVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  FOverriddenPropertySet *pFVar7;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FOverriddenPropertyNode *pFVar15;
  UObject *pUVar16;
  TNotNull<UObject_const_*> TVar17;
  uchar *puVar18;
  ulonglong uVar19;
  uint uVar20;
  void *pvVar21;
  TNotNull<FProperty_const_*> TVar22;
  FObjectPropertyBase *pFVar23;
  undefined1 auStack_228 [32];
  FOverriddenPropertyNode **local_208;
  FScriptContainerElement *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  int local_1d8;
  bool local_1d4 [4];
  FOverriddenPropertySet *local_1d0;
  FOverriddenPropertyNode *local_1c8;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  *local_1c0;
  ulonglong *local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  int local_1a0 [2];
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_198;
  undefined8 uStack_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_178;
  undefined8 uStack_170;
  FOverriddenPropertySet *local_168;
  ForAnyElementType *local_160;
  bool *local_158;
  TArrayView<FOverriddenPropertyNode,int> local_150;
  FScriptMapHelper *local_140;
  int local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  <lambda_1> local_110;
  FOverriddenPropertyNodeID local_f8;
  FOverriddenPropertyNodeID local_d8;
  FOverriddenPropertyNodeID local_b8;
  FScriptMapHelper local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1d4[0] = false;
  local_1d0 = this;
  local_1c0 = param_2;
  if ((FOverridableManager::OverridableManager == (FOverridableManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverridableManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                         ,0x43,L"Expected the overridable manager to be created."), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  iVar13 = param_2->Index;
  if ((iVar13 < 0) || (param_2->Container->ArrayNum <= iVar13)) {
    if ((this->Owner).field0_0x0.DebugPtr == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    bVar9 = true;
  }
  else {
    bVar9 = false;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar12 + 1);
    *(FOverriddenPropertyNode **)(local_1b0.Data + (longlong)iVar12 * 8) = param_1;
    iVar12 = -1;
    while (-1 < iVar13) {
      pTVar2 = param_2->Container;
      iVar1 = pTVar2->ArrayNum;
      param_2 = local_1c0;
      if ((iVar1 <= iVar13) ||
         ((param_1 != (FOverriddenPropertyNode *)0x0 && (param_1->Operation == Replace)))) break;
      iVar12 = -1;
      if (iVar13 < 0) {
        local_208 = (FOverriddenPropertyNode **)(longlong)iVar13;
        local_200 = (FScriptContainerElement *)(longlong)iVar1;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      TVar3.Val = *(FProperty **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x18);
      if ((TVar3.Val)->ArrayDim < 1) {
        local_200 = (FScriptContainerElement *)CONCAT44(local_200._4_4_,(TVar3.Val)->ArrayDim);
        local_208 = (FOverriddenPropertyNode **)((ulonglong)local_208 & 0xffffffff00000000);
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      if ((param_3 == (ulonglong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      param_3 = (void *)((longlong)param_3 + (longlong)(TVar3.Val)->Offset_Internal);
      local_1c8 = (FOverriddenPropertyNode *)0x0;
      local_1b8 = param_3;
      if (param_1 != (FOverriddenPropertyNode *)0x0) {
        FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_b8,TVar3);
        local_150.DataPtr =
             (FOverriddenPropertyNode *)(param_1->SubPropertyNodes).AllocatorInstance.Data;
        iVar13 = (param_1->SubPropertyNodes).ArrayNum;
        if ((iVar13 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        local_150.ArrayNum = iVar13;
        pFVar15 = TArrayView<FOverriddenPropertyNode,int>::FindByKey<FOverriddenPropertyNodeID>
                            (&local_150,&local_b8);
        if (pFVar15 != (FOverriddenPropertyNode *)0x0) {
          local_1c8 = pFVar15;
          if (local_1b0.Data <= (FScriptContainerElement *)&local_1c8) {
            if ((FScriptContainerElement *)&local_1c8 <
                local_1b0.Data + (longlong)local_1a8._4_4_ * 8) {
              local_1f0 = (longlong)(int)local_1a8;
              local_1e8 = 8;
              local_208 = &local_1c8;
              local_200 = local_1b0.Data;
              local_1f8 = (longlong)local_1a8._4_4_;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
            }
          }
          iVar13 = (int)local_1a8;
          if ((int)local_1a8 == local_1a8._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          }
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar13 + 1);
          *(FOverriddenPropertyNode **)(local_1b0.Data + (longlong)iVar13 * 8) = local_1c8;
        }
        if (local_b8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Path.Path.AllocatorInstance.Data);
        }
      }
      pTVar2 = local_1c0->Container;
      iVar13 = local_1c0->Index;
      uVar19 = *(ulonglong *)((TVar3.Val)->_padding_ + 0x18);
      uVar20 = iVar13 + 1;
      uStack_190 = CONCAT44((int)((ulonglong)*(undefined8 *)&local_1c0->Index >> 0x20),uVar20);
      uStack_170 = uStack_190;
      local_198 = pTVar2;
      local_178 = pTVar2;
      if ((uVar19 >> 0x1a & 1) == 0) {
        if ((uVar19 >> 0x15 & 1) == 0) {
          TVar22.Val = (FProperty *)(FMapProperty *)0x0;
          if ((uVar19 >> 0x2e & 1) != 0) {
            TVar22.Val = TVar3.Val;
          }
          if ((FMapProperty *)TVar22.Val != (FMapProperty *)0x0) {
            if ((int)uVar20 < 0) {
LAB_1420f4002:
              iVar13 = (int)uStack_170;
            }
            else {
              iVar12 = pTVar2->ArrayNum;
              if (iVar12 <= (int)uVar20) goto LAB_1420f4002;
              uVar14 = 0;
              if ((int)uVar20 < iVar12) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if (uVar14 == 0) {
                local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20;
                local_200 = (FScriptContainerElement *)(longlong)iVar12;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  uVar10 = (*pcVar5)();
                  return (bool)uVar10;
                }
              }
              lVar4 = (longlong)(int)uVar20 * 0x18;
              if (*(FProperty **)((pTVar2->AllocatorInstance).Data + lVar4) !=
                  ((FMapProperty *)TVar22.Val)->KeyProp) {
                uVar14 = 0;
                if ((int)uVar20 < pTVar2->ArrayNum) {
                  uVar14 = ~uVar20 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
                   local_200 = (FScriptContainerElement *)(longlong)pTVar2->ArrayNum,
                   bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  uVar10 = (*pcVar5)();
                  return (bool)uVar10;
                }
                if (*(FProperty **)((pTVar2->AllocatorInstance).Data + lVar4) !=
                    ((FMapProperty *)TVar22.Val)->ValueProp) goto LAB_1420f4002;
              }
              local_1c0->Index = local_1c0->Index + 1;
              iVar13 = iVar13 + 2;
            }
            pTVar8 = local_1c0;
            uVar20 = local_1c0->Index;
            pTVar2 = local_1c0->Container;
            iVar12 = pTVar2->ArrayNum;
            uVar14 = 0;
            if ((int)uVar20 < iVar12) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
               local_200 = (FScriptContainerElement *)(longlong)iVar12,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            iVar12 = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x18 + 0x10
                             );
            local_1d8 = iVar12;
            if (iVar12 != -1) {
              uVar20 = pTVar8->Index;
              pTVar2 = pTVar8->Container;
              iVar1 = pTVar2->ArrayNum;
              uVar14 = 0;
              if ((int)uVar20 < iVar1) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
                 local_200 = (FScriptContainerElement *)(longlong)iVar1,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
              if ((pTVar2->AllocatorInstance).Data[(longlong)(int)uVar20 * 0x18 + 0x14] !=
                  (FScriptContainerElement)0x2) {
                uVar20 = pTVar8->Index;
                pTVar2 = pTVar8->Container;
                iVar1 = pTVar2->ArrayNum;
                uVar14 = 0;
                if ((int)uVar20 < iVar1) {
                  uVar14 = ~uVar20 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
                   local_200 = (FScriptContainerElement *)(longlong)iVar1,
                   bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  uVar10 = (*pcVar5)();
                  return (bool)uVar10;
                }
                if ((pTVar2->AllocatorInstance).Data[(longlong)(int)uVar20 * 0x18 + 0x14] !=
                    (FScriptContainerElement)0x3) {
                  uVar20 = pTVar8->Index;
                  pTVar2 = pTVar8->Container;
                  iVar1 = pTVar2->ArrayNum;
                  uVar14 = 0;
                  if ((int)uVar20 < iVar1) {
                    uVar14 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
                     local_200 = (FScriptContainerElement *)(longlong)iVar1,
                     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return (bool)uVar10;
                  }
                  if (((pTVar2->AllocatorInstance).Data[(longlong)(int)uVar20 * 0x18 + 0x14] !=
                       (FScriptContainerElement)0x4) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapKey || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapValue"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                          ,0x359,L"Expecting a container type"), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return (bool)uVar10;
                  }
                }
              }
            }
            FScriptMapHelper::FScriptMapHelper(&local_98,(FMapProperty *)TVar22.Val,local_1b8);
            if (iVar12 == -1) {
              iVar12 = -1;
            }
            else {
              local_140 = &local_98;
              local_138 = iVar12;
              iVar12 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                                 (&local_98,(<lambda_1> *)&local_140);
            }
            pFVar23 = (FObjectPropertyBase *)((FMapProperty *)TVar22.Val)->ValueProp;
            if ((pFVar23 == (FObjectPropertyBase *)0x0) ||
               ((*(uint *)(pFVar23->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
              pFVar23 = (FObjectPropertyBase *)0x0;
            }
            if ((iVar13 < 0) || (local_178->ArrayNum <= iVar13)) {
              if (iVar12 == -1) {
                if (pFVar23 != (FObjectPropertyBase *)0x0) {
                  iVar12 = 0;
                  iVar13 = ((local_98.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                  if (0 < iVar13) {
                    do {
                      local_188 = iVar12;
                      bVar9 = FScriptMapHelper::
                              WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                        (&local_98,(<lambda_1> *)&local_188);
                      if (bVar9) break;
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < iVar13);
                  }
                  local_1a0[0] = iVar12;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_98,(<lambda_1> *)local_1a0);
                  this = local_1d0;
                  if (bVar9) {
                    do {
                      local_130._0_8_ = &local_98;
                      local_130._8_4_ = iVar12;
                      puVar18 = FScriptMapHelper::
                                WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                          (&local_98,(<lambda_1> *)local_130);
                      pUVar16 = TryGetInstancedSubObjectValue(this,pFVar23,puVar18);
                      if ((pUVar16 != (UObject *)0x0) &&
                         ((this->Owner).field0_0x0.DebugPtr == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      iVar13 = ((local_98.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                      do {
                        iVar12 = iVar12 + 1;
                        if (iVar13 <= iVar12) break;
                        local_184 = iVar12;
                        bVar9 = FScriptMapHelper::
                                WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                          (&local_98,(<lambda_1> *)&local_184);
                      } while (!bVar9);
                      local_1a0[0] = iVar12;
                      bVar9 = FScriptMapHelper::
                              WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                        (&local_98,(<lambda_1> *)local_1a0);
                    } while (bVar9);
                    bVar9 = true;
                    param_3 = local_1b8;
                    goto LAB_1420f43e4;
                  }
                }
                bVar9 = true;
                param_3 = local_1b8;
                this = local_1d0;
                goto LAB_1420f43e4;
              }
              local_180 = iVar12;
              bVar11 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_98,(<lambda_1> *)&local_180);
              param_3 = local_1b8;
              this = local_1d0;
              if ((!bVar11) || (local_1c8 == (FOverriddenPropertyNode *)0x0)) goto LAB_1420f43e4;
              if ((((FMapProperty *)TVar22.Val)->KeyProp == (FProperty *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MapProperty->KeyProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                      ,0x382,L"Expecting a key type for Maps"), bVar11)) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
              puVar18 = FScriptMapHelper::GetKeyPtr(&local_98,iVar12);
              FOverriddenPropertyNodeID::FromMapKey
                        (&local_d8,((FMapProperty *)TVar22.Val)->KeyProp,puVar18);
              bVar11 = FOverriddenPropertyNode::RemoveSubPropertyNode(local_1c8,&local_d8,local_1d4)
              ;
              if (!bVar11) {
                param_3 = local_1b8;
                this = local_1d0;
                if (local_d8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Path.Path.AllocatorInstance.Data);
                  param_3 = local_1b8;
                  this = local_1d0;
                }
                goto LAB_1420f43e4;
              }
              local_110.__this = &local_98;
              local_110.Iterator.Container._0_4_ = iVar12;
              puVar18 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                  (&local_98,&local_110);
              pFVar7 = local_1d0;
              pUVar16 = TryGetInstancedSubObjectValue(local_1d0,pFVar23,puVar18);
              if ((pUVar16 != (UObject *)0x0) &&
                 ((pFVar7->Owner).field0_0x0.DebugPtr == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
LAB_1420f44ed:
              if (local_d8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Path.Path.AllocatorInstance.Data);
              }
              bVar9 = true;
            }
            else {
              local_17c = iVar12;
              bVar9 = FScriptMapHelper::
                      WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                (&local_98,(<lambda_1> *)&local_17c);
              if (!bVar9) goto LAB_1420f452e;
              if ((((FMapProperty *)TVar22.Val)->ValueProp == (FProperty *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("MapProperty->ValueProp",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                     ,0x366,L"Expecting a value type for Maps"), bVar9)) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
              local_120._0_8_ = &local_98;
              local_120._8_4_ = iVar12;
              puVar18 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                  (&local_98,(<lambda_1> *)local_120);
              TryGetInstancedSubObjectValue(local_1d0,pFVar23,puVar18);
              bVar9 = false;
            }
            goto LAB_1420f454f;
          }
          local_1c0->Index = local_1c0->Index + 1;
          iVar13 = local_1c0->Index;
          param_2 = local_1c0;
          param_1 = local_1c8;
          param_3 = local_1b8;
        }
        else {
          if (((int)uVar20 < 0) || (pTVar2->ArrayNum <= (int)uVar20)) {
LAB_1420f3c5c:
            iVar13 = (int)uStack_170;
          }
          else {
            if ((int)uVar20 < 0) {
              local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20;
              local_200 = (FScriptContainerElement *)(longlong)pTVar2->ArrayNum;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
            }
            if (*(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x18) !=
                TVar3.Val[1]._padding_) goto LAB_1420f3c5c;
            local_1c0->Index = local_1c0->Index + 1;
            iVar13 = iVar13 + 2;
          }
          uVar20 = local_1c0->Index;
          pTVar2 = local_1c0->Container;
          iVar12 = pTVar2->ArrayNum;
          uVar14 = 0;
          if ((int)uVar20 < iVar12) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
             local_200 = (FScriptContainerElement *)(longlong)iVar12,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          local_1d8 = *(int *)((pTVar2->AllocatorInstance).Data +
                              (longlong)(int)uVar20 * 0x18 + 0x10);
          if (local_1d8 != -1) {
            uVar20 = local_1c0->Index;
            pTVar2 = local_1c0->Container;
            iVar12 = pTVar2->ArrayNum;
            uVar14 = 0;
            if ((int)uVar20 < iVar12) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_208 = (FOverriddenPropertyNode **)(longlong)(int)uVar20,
               local_200 = (FScriptContainerElement *)(longlong)iVar12,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            if (((pTVar2->AllocatorInstance).Data[(longlong)(int)uVar20 * 0x18 + 0x14] !=
                 (FScriptContainerElement)0x2) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                    ,0x321,L"Expecting a container index"), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
          }
          pFVar23 = (FObjectPropertyBase *)TVar3.Val[1]._padding_;
          this = local_1d0;
          if ((pFVar23 != (FObjectPropertyBase *)0x0) &&
             ((*(uint *)(pFVar23->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
            lVar6 = TVar3.Val[1]._padding_;
            (**(code **)(pFVar23->_padding_ + 0x168))(pFVar23);
            lVar4 = TVar3.Val[1]._padding_;
            iVar12 = *(int *)(lVar4 + 0x34);
            if ((iVar12 < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ElementSize > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1177,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            if ((lVar4 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InnerProperty",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1178,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            this = local_1d0;
            if (local_1d8 == -1) {
              for (iVar13 = 0; iVar13 < (int)*(ulonglong *)((longlong)param_3 + 8);
                  iVar13 = iVar13 + 1) {
                if ((int)*(ulonglong *)((longlong)param_3 + 8) == 0) {
                  pvVar21 = (void *)0x0;
                }
                else {
                  uVar19 = *(ulonglong *)param_3;
                  if (((lVar6 & 1) != 0) && ((uVar19 & 1) != 0)) {
                    uVar19 = ((longlong)uVar19 >> 0x18) + (longlong)param_3;
                  }
                  pvVar21 = (void *)((longlong)iVar12 * (longlong)iVar13 + uVar19);
                }
                pUVar16 = TryGetInstancedSubObjectValue(this,pFVar23,pvVar21);
                if ((pUVar16 != (UObject *)0x0) &&
                   ((this->Owner).field0_0x0.DebugPtr == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
              }
              bVar9 = true;
            }
            else if ((-1 < local_1d8) && (local_1d8 < (int)*(ulonglong *)((longlong)param_3 + 8))) {
              if ((int)*(ulonglong *)((longlong)param_3 + 8) == 0) {
                pvVar21 = (void *)0x0;
              }
              else {
                uVar19 = *(ulonglong *)param_3;
                if (((lVar6 & 1) != 0) && ((uVar19 & 1) != 0)) {
                  uVar19 = ((longlong)uVar19 >> 0x18) + (longlong)param_3;
                }
                pvVar21 = (void *)((longlong)iVar12 * (longlong)local_1d8 + uVar19);
              }
              TVar17.Val = TryGetInstancedSubObjectValue(local_1d0,pFVar23,pvVar21);
              if ((-1 < iVar13) && (iVar13 < local_178->ArrayNum)) goto LAB_1420f452e;
              if ((local_1c8 != (FOverriddenPropertyNode *)0x0) && (TVar17.Val != (UObject *)0x0)) {
                FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_f8,TVar17);
                bVar11 = FOverriddenPropertyNode::RemoveSubPropertyNode
                                   (local_1c8,&local_f8,local_1d4);
                if (bVar11) {
                  local_d8.Path.Path.AllocatorInstance.Data =
                       local_f8.Path.Path.AllocatorInstance.Data;
                  if ((this->Owner).field0_0x0.DebugPtr == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  goto LAB_1420f44ed;
                }
                if (local_f8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Path.Path.AllocatorInstance.Data);
                }
              }
            }
          }
LAB_1420f43e4:
          local_1c0->Index = local_1c0->Index + 1;
          iVar13 = local_1c0->Index;
          param_2 = local_1c0;
          param_1 = local_1c8;
          iVar12 = local_1d8;
        }
      }
      else {
        TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)TVar3.Val,param_3);
        if ((-1 < (int)uVar20) && ((int)uVar20 < pTVar2->ArrayNum)) goto LAB_1420f452e;
        bVar9 = local_1c8 != (FOverriddenPropertyNode *)0x0;
        local_1c0->Index = local_1c0->Index + 1;
        iVar13 = local_1c0->Index;
        param_2 = local_1c0;
        param_1 = local_1c8;
      }
    }
    local_160 = &local_1b0;
    local_158 = local_1d4;
    local_168 = this;
    if (((iVar13 < 0) || (param_2->Container->ArrayNum <= iVar13)) &&
       (param_1 != (FOverriddenPropertyNode *)0x0)) {
      if (iVar12 == -1) {
        `FOverriddenPropertySet::ClearOverriddenProperty'::__l2::<lambda_2>::operator()(&local_168);
        bVar9 = true;
      }
      else {
LAB_1420f452e:
        bVar9 = false;
      }
    }
    else if (bVar9 != false) {
      `FOverriddenPropertySet::ClearOverriddenProperty'::__l2::<lambda_2>::operator()(&local_168);
    }
LAB_1420f454f:
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
  }
  return bVar9;
}

// ClearOverriddenProperty @ 1420f45d0

bool __thiscall
FOverriddenPropertySet::ClearOverriddenProperty
          (FOverriddenPropertySet *this,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_1)

{
  bool bVar1;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_18;
  
  local_18.Container = param_1->Container;
  local_18.Index = param_1->Index;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = ClearOverriddenProperty(this,&this->RootNode,&local_18,(this->Owner).field0_0x0.DebugPtr);
  return bVar1;
}

// ConditionallyRestoreOverriddenPropertyOperation @ 1420f5430

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::ConditionallyRestoreOverriddenPropertyOperation
          (FOverriddenPropertySet *this,EOverriddenPropertyOperation param_1,
          FArchiveSerializedPropertyChain *param_2,FProperty *param_3)

{
  FOverriddenPropertyNode *pFVar1;
  
  if ((((param_1 & ~SubObjectsShadowing) != None) || (param_1 == Remove)) &&
     ((param_3 == (FProperty *)0x0 ||
      ((param_1 != Replace ||
       ((param_3->PropertyFlags & CPF_ExperimentalAlwaysOverriden) == CPF_None)))))) {
    pFVar1 = RestoreOverriddenPropertyOperation(this,param_1,&this->RootNode,param_2,param_3);
    return pFVar1;
  }
  return (FOverriddenPropertyNode *)0x0;
}

// Find @ 1420f6bd0

uchar * __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>::Find
          (void *this,TNotNull<UObject_const_*> param_1,TNotNull<FProperty_const_*> param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  plVar1 = plVar3 + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<TTuple<`FOverriddenPropertySet::NotifyPropertyChange'::__l2::FContainerInfo,unsigned_char_*>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar3 == plVar1) break;
    if ((param_1.Val == (UObject *)*plVar3) && (param_2.Val == (FProperty *)plVar3[1])) {
      return (uchar *)plVar3[2];
    }
    plVar3 = plVar3 + 3;
  }
  return (uchar *)0x0;
}

// FindOrAdd @ 1420f73c0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>::
FindOrAdd(void *this,TNotNull<UObject_const_*> param_1,TNotNull<FProperty_const_*> param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  FName local_res20;
  FString local_68;
  FString local_58;
  UObject *local_48;
  FProperty *pFStack_40;
  void *local_38;
  
  puVar8 = Find(this,param_1,param_2);
  if (puVar8 != (uchar *)0x0) {
    if (2 < (byte)LogOverridableObject._0_1_) {
      bVar5 = IsThisNotNull(param_2.Val,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&(param_2.Val)->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      if (param_1.Val == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res20.ComparisonIndex.Value = *(uint *)&(param_1.Val)->field_0x18;
        local_res20.Number = *(uint *)&(param_1.Val)->field_0x1c;
        ::FName::ToString(&local_res20,&local_68);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    return puVar8;
  }
  uVar6 = (**(code **)((param_2.Val)->_padding_ + 0x168))(param_2.Val);
  local_38 = FMemory::Malloc((longlong)((param_2.Val)->ArrayDim * (param_2.Val)->ElementSize),uVar6)
  ;
  local_48 = param_1.Val;
  pFStack_40 = param_2.Val;
  if (((*(UObject ***)this <= &local_48) &&
      (&local_48 < *(UObject ***)this + (longlong)*(int *)((longlong)this + 0xc) * 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar4)();
    return puVar8;
  }
  uVar6 = *(uint *)((longlong)this + 8);
  if (uVar6 == *(uint *)((longlong)this + 0xc)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,this,(int *)((longlong)this + 0xc));
  }
  *(uint *)((longlong)this + 8) = uVar6 + 1;
  lVar2 = (longlong)(int)uVar6 * 0x18;
  lVar3 = *(longlong *)this;
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  *puVar1 = local_48;
  puVar1[1] = pFStack_40;
  *(void **)(lVar2 + 0x10 + lVar3) = local_38;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 8)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar4)();
    return puVar8;
  }
  _Dst = *(void **)(lVar2 + 0x10 + *(longlong *)this);
  if (((uint)(int)(param_2.Val)->PropertyFlags >> 9 & 1) == 0) {
    (**(code **)((param_2.Val)->_padding_ + 0x150))(param_2.Val,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(param_2.Val)->ElementSize * (longlong)(param_2.Val)->ArrayDim);
  }
  uVar7 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 8)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar4)();
    return puVar8;
  }
  return *(uchar **)(lVar2 + 0x10 + *(longlong *)this);
}

// Free @ 1420f7cb0

void __thiscall
`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>::Free
          (void *this,TNotNull<UObject_const_*> param_1,TNotNull<FProperty_const_*> param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)((longlong)this + 8);
  uVar4 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1.Val == *(UObject **)(lVar6 + *(longlong *)this)) {
        uVar3 = 0;
        if ((int)uVar4 < *(int *)((longlong)this + 8)) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_2.Val == *(FProperty **)(lVar6 + 8 + *(longlong *)this)) {
          uVar3 = 0;
          if ((int)uVar4 < *(int *)((longlong)this + 8)) {
            uVar3 = ~uVar4 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (((param_2.Val)->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            (**(code **)((param_2.Val)->_padding_ + 0x138))
                      (param_2.Val,
                       *(undefined8 *)(*(longlong *)this + 0x10 + (longlong)(int)uVar4 * 0x18));
          }
          uVar3 = 0;
          if ((int)uVar4 < *(int *)((longlong)this + 8)) {
            uVar3 = ~uVar4 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FMemory::Free(*(void **)((longlong)(int)uVar4 * 0x18 + 0x10 + *(longlong *)this));
          uVar3 = 0;
          if ((int)uVar4 < *(int *)((longlong)this + 8)) {
            uVar3 = ~uVar4 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = ~uVar4 + *(int *)((longlong)this + 8);
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove((void *)((longlong)(int)uVar4 * 0x18 + *(longlong *)this),
                    (void *)(*(longlong *)this +
                            (longlong)(*(int *)((longlong)this + 8) - iVar5) * 0x18),
                    (longlong)iVar5 * 0x18);
          }
          iVar5 = *(int *)((longlong)this + 8) + -1;
          *(int *)((longlong)this + 8) = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,this,iVar5,(int *)((longlong)this + 0xc));
          return;
        }
      }
      iVar5 = *(int *)((longlong)this + 8);
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// GetOverriddenPropertyNode @ 1420fb270

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::GetOverriddenPropertyNode
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          FArchiveSerializedPropertyChain *param_2)

{
  ForElementType<FProperty_*> FVar1;
  TNotNull<FProperty_const_*> TVar2;
  code *pcVar3;
  bool bVar4;
  FOverriddenPropertyNode *pFVar5;
  ForElementType<FProperty_*> FVar6;
  int iVar7;
  FOverriddenPropertyNodeID local_28;
  
  if (param_2 == (FArchiveSerializedPropertyChain *)0x0) {
    return param_1;
  }
  iVar7 = 0;
  while( true ) {
    if (iVar7 < 0) {
      return param_1;
    }
    if ((param_2->SerializedPropertyChain).ArrayNum <= iVar7) {
      return param_1;
    }
    if (param_1 == (FOverriddenPropertyNode *)0x0) {
      return (FOverriddenPropertyNode *)0x0;
    }
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    FVar1 = (param_2->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<FProperty_*>)param_2;
    if (FVar1 != (ForElementType<FProperty_*>)0x0) {
      FVar6 = FVar1;
    }
    TVar2.Val = *(FProperty **)((longlong)FVar6 + (longlong)iVar7 * 8);
    if (TVar2.Val == (FProperty *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_28,TVar2);
    param_1 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
              FindByKey<FOverriddenPropertyNodeID>(&param_1->SubPropertyNodes,&local_28);
    if (param_1 == (FOverriddenPropertyNode *)0x0) {
      if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
      }
      return (FOverriddenPropertyNode *)0x0;
    }
    iVar7 = iVar7 + 1;
    if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FOverriddenPropertyNode *)(*pcVar3)();
  return pFVar5;
}

// GetOverriddenPropertyNode @ 1420fb380

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::GetOverriddenPropertyNode
          (FOverriddenPropertySet *this,FOverriddenPropertyNodeID *param_1)

{
  FOverriddenPropertyNode *pFVar1;
  
  pFVar1 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
           FindByKey<FOverriddenPropertyNodeID>(&(this->RootNode).SubPropertyNodes,param_1);
  return pFVar1;
}

// GetOverriddenPropertyNode @ 1420fb390

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::GetOverriddenPropertyNode
          (FOverriddenPropertySet *this,FArchiveSerializedPropertyChain *param_1)

{
  ForElementType<FProperty_*> FVar1;
  TNotNull<FProperty_const_*> TVar2;
  code *pcVar3;
  bool bVar4;
  FOverriddenPropertyNode *pFVar5;
  ForElementType<FProperty_*> FVar6;
  int iVar7;
  FOverriddenPropertyNodeID local_28;
  
  pFVar5 = &this->RootNode;
  if (param_1 != (FArchiveSerializedPropertyChain *)0x0) {
    iVar7 = 0;
    while( true ) {
      if (iVar7 < 0) {
        return pFVar5;
      }
      if ((param_1->SerializedPropertyChain).ArrayNum <= iVar7) {
        return pFVar5;
      }
      if (pFVar5 == (FOverriddenPropertyNode *)0x0) {
        return (FOverriddenPropertyNode *)0x0;
      }
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FOverriddenPropertyNode *)(*pcVar3)();
        return pFVar5;
      }
      FVar1 = (param_1->SerializedPropertyChain).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FProperty_*>)param_1;
      if (FVar1 != (ForElementType<FProperty_*>)0x0) {
        FVar6 = FVar1;
      }
      TVar2.Val = *(FProperty **)((longlong)FVar6 + (longlong)iVar7 * 8);
      if (TVar2.Val == (FProperty *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_28,TVar2);
      pFVar5 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
               FindByKey<FOverriddenPropertyNodeID>(&pFVar5->SubPropertyNodes,&local_28);
      if (pFVar5 == (FOverriddenPropertyNode *)0x0) break;
      iVar7 = iVar7 + 1;
      if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
      }
    }
    pFVar5 = (FOverriddenPropertyNode *)0x0;
    if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
    }
  }
  return pFVar5;
}

// GetOverriddenPropertyOperation @ 1420fb750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EOverriddenPropertyOperation __thiscall
FOverriddenPropertySet::GetOverriddenPropertyOperation
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          FArchiveSerializedPropertyChain *param_2,FProperty *param_3)

{
  TNotNull<FProperty_const_*> TVar1;
  code *pcVar2;
  void *pvVar3;
  EOverriddenPropertyOperation EVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FProperty_*> FVar7;
  ForElementType<FProperty_*> _Dst;
  uint uVar8;
  ForElementType<FProperty_*> _Src;
  bool bVar9;
  undefined1 auStackY_1c8 [32];
  FProperty *local_178;
  undefined4 local_170;
  FOverriddenPropertyNodeID local_168;
  undefined1 local_148 [64];
  void *local_108;
  undefined4 local_100;
  undefined8 local_fc;
  ForElementType<FProperty_*> local_f0;
  int local_a8;
  int local_a4;
  int local_a0;
  FArchiveSerializedPropertyChain local_98;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = 0;
  if ((param_1 == (FOverriddenPropertyNode *)0x0) || (param_1->Operation != Replace)) {
    bVar9 = param_2 == (FArchiveSerializedPropertyChain *)0x0;
    if (bVar9) {
      local_108 = (void *)0x0;
      local_100 = 0;
      FVar7 = (ForElementType<FProperty_*>)local_148;
      local_fc = 8;
    }
    else {
      FVar7 = (ForElementType<FProperty_*>)
              FArchiveSerializedPropertyChain::FArchiveSerializedPropertyChain(&local_98,param_2);
    }
    pvVar3 = local_108;
    local_f0.SecondaryData = (ForElementType<FProperty_*>)0x0;
    iVar5 = *(int *)((longlong)FVar7 + 0x48);
    local_a8 = iVar5;
    _Src = *(ForElementType<FProperty_*> *)((longlong)FVar7 + 0x40);
    if (*(ForElementType<FProperty_*> *)((longlong)FVar7 + 0x40) == (ForElementType<FProperty_*>)0x0
       ) {
      _Src = FVar7;
    }
    if (iVar5 == 0) {
      local_a4 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                (8,8,iVar5,0,&local_f0,iVar5,&local_a4);
      _Dst = (ForElementType<FProperty_*>)&local_f0;
      if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        _Dst = local_f0.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar5 << 3);
    }
    local_a0 = *(int *)((longlong)FVar7 + 0x50);
    if ((bVar9) && (pvVar3 != (void *)0x0)) {
      FMemory::Free(pvVar3);
    }
    if ((!bVar9) &&
       (local_98.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
        (ForElementType<FProperty_*>)0x0)) {
      FMemory::Free((void *)local_98.SerializedPropertyChain.AllocatorInstance.SecondaryData);
    }
    if (param_3 != (FProperty *)0x0) {
      FVar7 = (ForElementType<FProperty_*>)&local_f0;
      if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f0.SecondaryData;
      }
      local_178 = param_3;
      if ((ulonglong)FVar7 <= &local_178) {
        FVar7 = (ForElementType<FProperty_*>)&local_f0;
        if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
          FVar7 = local_f0.SecondaryData;
        }
        if ((&local_178 < (FProperty **)((longlong)FVar7 + (longlong)local_a4 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      iVar5 = local_a8;
      if (local_a8 == local_a4) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                          (0x808,&local_f0,&local_a4);
      }
      local_a8 = iVar5 + 1;
      FVar7 = (ForElementType<FProperty_*>)&local_f0;
      if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f0.SecondaryData;
      }
      *(FProperty **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_178;
      do {
        iVar5 = local_a0 + 1;
        local_a0 = 0;
      } while (iVar5 == 0);
      local_a0 = iVar5;
    }
    uVar8 = 0;
    while (((-1 < (int)uVar8 && ((int)uVar8 < local_a8)) &&
           ((param_1 == (FOverriddenPropertyNode *)0x0 || (param_1->Operation != Replace))))) {
      uVar6 = 0;
      if ((int)uVar8 < local_a8) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FVar7 = (ForElementType<FProperty_*>)&local_f0;
      if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f0.SecondaryData;
      }
      TVar1.Val = *(FProperty **)((longlong)FVar7 + (longlong)(int)uVar8 * 8);
      if (param_1 != (FOverriddenPropertyNode *)0x0) {
        if (TVar1.Val == (FProperty *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_168,TVar1);
        param_1 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                  FindByKey<FOverriddenPropertyNodeID>(&param_1->SubPropertyNodes,&local_168);
        if (local_168.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Path.Path.AllocatorInstance.Data);
        }
      }
      if (((TVar1.Val)->PropertyFlags & CPF_ExperimentalAlwaysOverriden) != CPF_None) {
        EVar4 = Replace;
        goto LAB_1420fba5c;
      }
      uVar8 = uVar8 + 1;
    }
    if (param_1 == (FOverriddenPropertyNode *)0x0) {
      EVar4 = None;
    }
    else {
      EVar4 = param_1->Operation;
    }
LAB_1420fba5c:
    if (local_f0.SecondaryData != (ForElementType<FProperty_*>)0x0) {
      FMemory::Free((void *)local_f0.SecondaryData);
    }
  }
  else {
    EVar4 = Replace;
  }
  return EVar4;
}

// GetOverriddenPropertyOperation @ 1420fbac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EOverriddenPropertyOperation __thiscall
FOverriddenPropertySet::GetOverriddenPropertyOperation
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_2,bool *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TNotNull<FProperty_const_*> TVar5;
  FObjectPropertyBase *pFVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  EOverriddenPropertyOperation EVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FOverriddenPropertyNode *pFVar15;
  TNotNull<UObject_const_*> TVar16;
  uchar *puVar17;
  ulonglong uVar18;
  uint uVar19;
  void *pvVar20;
  ulonglong uVar21;
  FScriptMapHelper_u_16 FVar22;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  longlong local_170;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_168;
  FOverriddenPropertyNode *local_158;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  *local_150;
  bool *local_148;
  FOverriddenPropertySet *local_140;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_138;
  undefined8 uStack_130;
  int local_128 [2];
  FScriptMapHelper_u_16 local_120;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_118;
  undefined8 uStack_110;
  FScriptMapHelper *local_108;
  uint local_100;
  undefined1 local_f8 [16];
  FOverriddenPropertyNodeID local_e8;
  FOverriddenPropertyNodeID local_c8;
  FOverriddenPropertyNodeID local_a8;
  FScriptMapHelper local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_150 = param_2;
  local_148 = param_3;
  local_140 = this;
  if ((FOverridableManager::OverridableManager == (FOverridableManager *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OverridableManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                          ,0x43,L"Expected the overridable manager to be created."), bVar10)) {
    pcVar8 = (code *)swi(3);
    EVar11 = (*pcVar8)();
    return EVar11;
  }
  uVar21 = 0xffffffff;
  while( true ) {
    iVar1 = param_2->Index;
    if (iVar1 < 0) break;
    pTVar4 = param_2->Container;
    iVar2 = pTVar4->ArrayNum;
    if ((iVar2 <= iVar1) ||
       ((param_1 != (FOverriddenPropertyNode *)0x0 && (param_1->Operation == Replace)))) break;
    uVar21 = 0xffffffff;
    if ((iVar1 < 0) &&
       (local_178 = (longlong)iVar1, local_170 = (longlong)iVar2,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    TVar5.Val = *(FProperty **)((pTVar4->AllocatorInstance).Data + (longlong)iVar1 * 0x18);
    if ((TVar5.Val)->ArrayDim < 1) {
      local_170 = CONCAT44(local_170._4_4_,(TVar5.Val)->ArrayDim);
      local_178 = local_178 & 0xffffffff00000000;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
    }
    if ((param_4 == (FScriptMap *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    FVar22.HeapMap =
         (FScriptMap *)
         ((longlong)&((FScriptMap *)param_4)->field_0x0 + (longlong)(TVar5.Val)->Offset_Internal);
    local_158 = (FOverriddenPropertyNode *)0x0;
    local_120.HeapMap = FVar22.HeapMap;
    if (param_1 != (FOverriddenPropertyNode *)0x0) {
      FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_a8,TVar5);
      pFVar15 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                FindByKey<FOverriddenPropertyNodeID>(&param_1->SubPropertyNodes,&local_a8);
      local_158 = (FOverriddenPropertyNode *)0x0;
      if (pFVar15 != (FOverriddenPropertyNode *)0x0) {
        local_158 = pFVar15;
      }
      if (local_a8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Path.Path.AllocatorInstance.Data);
      }
    }
    pTVar4 = param_2->Container;
    iVar1 = param_2->Index;
    uVar19 = iVar1 + 1;
    uStack_130 = CONCAT44((int)((ulonglong)*(undefined8 *)&param_2->Index >> 0x20),uVar19);
    uVar18 = *(ulonglong *)((TVar5.Val)->_padding_ + 0x18);
    uStack_110 = uStack_130;
    param_1 = local_158;
    local_168 = pTVar4;
    local_138 = pTVar4;
    local_118 = pTVar4;
    if ((uVar18 >> 0x1a & 1) == 0) {
      if ((uVar18 >> 0x15 & 1) == 0) {
        if ((uVar18 >> 0x2e & 1) == 0) goto LAB_1420fc3ee;
        if ((int)uVar19 < 0) {
LAB_1420fc08d:
          uVar19 = (uint)uStack_110;
        }
        else {
          if (pTVar4->ArrayNum <= (int)uVar19) goto LAB_1420fc08d;
          if ((int)uVar19 < 0) {
            local_178 = (ulonglong)(int)uVar19;
            local_170 = (longlong)pTVar4->ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
          }
          lVar7 = (longlong)(int)uVar19 * 0x18;
          if (*(longlong *)((pTVar4->AllocatorInstance).Data + lVar7) != TVar5.Val[1]._padding_) {
            uVar13 = 0;
            if ((int)uVar19 < pTVar4->ArrayNum) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (local_178 = (longlong)(int)uVar19, local_170 = (longlong)pTVar4->ArrayNum,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            param_2 = local_150;
            if (*(longlong *)((pTVar4->AllocatorInstance).Data + lVar7) != TVar5.Val[1]._padding_)
            goto LAB_1420fc08d;
          }
          local_150->Index = local_150->Index + 1;
          param_2 = local_150;
          uVar19 = iVar1 + 2;
        }
        uVar13 = param_2->Index;
        pTVar4 = param_2->Container;
        iVar1 = pTVar4->ArrayNum;
        uVar12 = 0;
        if ((int)uVar13 < iVar1) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_178 = (longlong)(int)uVar13, local_170 = (longlong)iVar1,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        uVar13 = *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x18 + 0x10);
        uVar21 = (ulonglong)uVar13;
        if (uVar13 != 0xffffffff) {
          uVar12 = param_2->Index;
          pTVar4 = param_2->Container;
          iVar1 = pTVar4->ArrayNum;
          uVar14 = 0;
          if ((int)uVar12 < iVar1) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_178 = (longlong)(int)uVar12, local_170 = (longlong)iVar1,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          if ((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar12 * 0x18 + 0x14] !=
              (FScriptContainerElement)0x2) {
            uVar12 = param_2->Index;
            pTVar4 = param_2->Container;
            iVar1 = pTVar4->ArrayNum;
            uVar14 = 0;
            if ((int)uVar12 < iVar1) {
              uVar14 = ~uVar12 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_178 = (longlong)(int)uVar12, local_170 = (longlong)iVar1,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            if ((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar12 * 0x18 + 0x14] !=
                (FScriptContainerElement)0x3) {
              uVar12 = param_2->Index;
              pTVar4 = param_2->Container;
              iVar1 = pTVar4->ArrayNum;
              uVar14 = 0;
              if ((int)uVar12 < iVar1) {
                uVar14 = ~uVar12 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (local_178 = (longlong)(int)uVar12, local_170 = (longlong)iVar1,
                 bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar10)) {
                pcVar8 = (code *)swi(3);
                EVar11 = (*pcVar8)();
                return EVar11;
              }
              if (((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar12 * 0x18 + 0x14] !=
                   (FScriptContainerElement)0x4) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapKey || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapValue"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                      ,0x29e,L"Expecting a container type"), bVar10)) {
                pcVar8 = (code *)swi(3);
                EVar11 = (*pcVar8)();
                return EVar11;
              }
            }
          }
        }
        if ((TVar5.Val[1]._padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("MapProperty->ValueProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                ,0x2a0,L"Expecting a value type for Maps"), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        local_88.KeyProp = (FProperty *)TVar5.Val[1]._padding_;
        local_88.ValueProp = (FProperty *)TVar5.Val[1]._padding_;
        local_88.MapLayout.SetLayout.SparseArrayLayout =
             (FScriptSparseArrayLayout)TVar5.Val[1]._padding_;
        local_88.MapFlags = (EMapPropertyFlags)TVar5.Val[1]._padding_;
        local_88.MapLayout._0_8_ = TVar5.Val[1]._padding_;
        local_88.MapLayout.SetLayout._4_8_ = TVar5.Val[1]._padding_;
        if (((local_88.KeyProp == (FProperty *)0x0) || (local_88.ValueProp == (FProperty *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InKeyProp && InValueProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1558,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        local_88.field2_0x10 = local_120;
        if (((local_88.KeyProp == (FProperty *)0x0) || (local_88.ValueProp == (FProperty *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("KeyProp && ValueProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1564,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        if (uVar13 == 0xffffffff) {
          local_f8._8_4_ = -1;
        }
        else {
          local_108 = &local_88;
          local_100 = uVar13;
          local_f8._8_4_ =
               FScriptMapHelper::
               WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                         (&local_88,(<lambda_1> *)&local_108);
        }
        local_128[0] = local_f8._8_4_;
        bVar10 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_88,(<lambda_1> *)local_128);
        param_1 = local_158;
        if (bVar10) {
          if ((-1 < (int)uVar19) && ((int)uVar19 < local_168->ArrayNum)) {
            pFVar6 = (FObjectPropertyBase *)TVar5.Val[1]._padding_;
            if (pFVar6 == (FObjectPropertyBase *)0x0) {
              return None;
            }
            if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x1a & 1) == 0) {
              return None;
            }
            local_f8._0_8_ = &local_88;
            puVar17 = FScriptMapHelper::
                      WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                (&local_88,(<lambda_1> *)local_f8);
            TryGetInstancedSubObjectValue(local_140,pFVar6,puVar17);
            return None;
          }
          if (local_158 != (FOverriddenPropertyNode *)0x0) {
            if ((TVar5.Val[1]._padding_ == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MapProperty->KeyProp",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                    ,0x2b7,L"Expecting a key type for Maps"), bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            puVar17 = FScriptMapHelper::GetKeyPtr(&local_88,local_f8._8_4_);
            FOverriddenPropertyNodeID::FromMapKey
                      (&local_c8,(FProperty *)TVar5.Val[1]._padding_,puVar17);
            pFVar15 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                      FindByKey<FOverriddenPropertyNodeID>(&param_1->SubPropertyNodes,&local_c8);
            if (pFVar15 != (FOverriddenPropertyNode *)0x0) {
              local_e8.Path.Path.AllocatorInstance.Data = local_c8.Path.Path.AllocatorInstance.Data;
              if (local_148 != (bool *)0x0) {
                *local_148 = false;
              }
              goto LAB_1420fc43b;
            }
            if (local_c8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Path.Path.AllocatorInstance.Data);
            }
          }
        }
      }
      else {
        if (((int)uVar19 < 0) || (pTVar4->ArrayNum <= (int)uVar19)) {
LAB_1420fbd48:
          uVar19 = (uint)uStack_110;
        }
        else {
          if ((int)uVar19 < 0) {
            local_178 = (ulonglong)(int)uVar19;
            local_170 = (longlong)pTVar4->ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
          }
          if (*(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18) !=
              TVar5.Val[1]._padding_) goto LAB_1420fbd48;
          param_2->Index = param_2->Index + 1;
          uVar19 = iVar1 + 2;
        }
        uVar13 = param_2->Index;
        pTVar4 = param_2->Container;
        iVar1 = pTVar4->ArrayNum;
        uVar12 = 0;
        if ((int)uVar13 < iVar1) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_178 = (longlong)(int)uVar13, local_170 = (longlong)iVar1,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        iVar1 = *(int *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x18 + 0x10);
        uVar21 = (ulonglong)iVar1;
        if (iVar1 != -1) {
          uVar13 = param_2->Index;
          pTVar4 = param_2->Container;
          iVar2 = pTVar4->ArrayNum;
          uVar12 = 0;
          if ((int)uVar13 < iVar2) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (local_178 = (longlong)(int)uVar13, local_170 = (longlong)iVar2,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          if (((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar13 * 0x18 + 0x14] !=
               (FScriptContainerElement)0x2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                  ,0x26d,L"Expecting a container index"), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
        }
        if ((TVar5.Val[1]._padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayProperty->Inner",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                ,0x270,L"Expecting an inner type for Arrays"), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        pFVar6 = (FObjectPropertyBase *)TVar5.Val[1]._padding_;
        param_1 = local_158;
        if ((pFVar6 != (FObjectPropertyBase *)0x0) &&
           ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
          lVar9 = TVar5.Val[1]._padding_;
          (**(code **)(pFVar6->_padding_ + 0x168))(pFVar6);
          lVar7 = TVar5.Val[1]._padding_;
          iVar2 = *(int *)(lVar7 + 0x34);
          if ((iVar2 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1177,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          if ((lVar7 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InnerProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1178,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          param_1 = local_158;
          param_2 = local_150;
          if ((-1 < iVar1) &&
             (iVar3 = ((local_120.FreezableMap)->Pairs).Elements.Data.ArrayNum, iVar1 < iVar3)) {
            if (iVar3 == 0) {
              pvVar20 = (void *)0x0;
            }
            else {
              uVar18 = ((local_120.FreezableMap)->Pairs).Elements.Data._padding_;
              if (((lVar9 & 1) != 0) && ((uVar18 & 1) != 0)) {
                uVar18 = (longlong)&(local_120.HeapMap)->field_0x0 + ((longlong)uVar18 >> 0x18);
              }
              pvVar20 = (void *)((longlong)iVar2 * uVar21 + uVar18);
            }
            TVar16.Val = TryGetInstancedSubObjectValue(local_140,pFVar6,pvVar20);
            param_1 = local_158;
            if ((-1 < (int)uVar19) && ((int)uVar19 < local_168->ArrayNum)) {
              return None;
            }
            param_2 = local_150;
            if ((local_158 != (FOverriddenPropertyNode *)0x0) && (TVar16.Val != (UObject *)0x0)) {
              FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_e8,TVar16);
              pFVar15 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                        FindByKey<FOverriddenPropertyNodeID>(&param_1->SubPropertyNodes,&local_e8);
              if (pFVar15 != (FOverriddenPropertyNode *)0x0) {
                if (local_148 != (bool *)0x0) {
                  *local_148 = false;
                }
LAB_1420fc43b:
                EVar11 = pFVar15->Operation;
                if (local_e8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Path.Path.AllocatorInstance.Data);
                  return EVar11;
                }
                return EVar11;
              }
              param_2 = local_150;
              if (local_e8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Path.Path.AllocatorInstance.Data);
                param_2 = local_150;
              }
            }
          }
        }
      }
    }
    else if ((-1 < (int)uVar19) && ((int)uVar19 < pTVar4->ArrayNum)) {
      TryGetInstancedSubObjectValue(local_140,(FObjectPropertyBase *)TVar5.Val,FVar22.HeapMap);
      return None;
    }
LAB_1420fc3ee:
    if (((TVar5.Val)->PropertyFlags & CPF_ExperimentalAlwaysOverriden) != CPF_None) {
      if (local_148 != (bool *)0x0) {
        if ((-1 < (int)uVar19) && ((int)uVar19 < local_168->ArrayNum)) {
          *local_148 = true;
          return Replace;
        }
        *local_148 = false;
      }
      return Replace;
    }
    param_2->Index = param_2->Index + 1;
    param_4 = (void *)local_120;
  }
  if (local_148 != (bool *)0x0) {
    if (((iVar1 < 0) || (param_2->Container->ArrayNum <= iVar1)) && ((int)uVar21 == -1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    *local_148 = bVar10;
  }
  if (param_1 == (FOverriddenPropertyNode *)0x0) {
    EVar11 = None;
  }
  else {
    EVar11 = param_1->Operation;
  }
  return EVar11;
}

// GetOverriddenPropertyOperation @ 1420fc540

EOverriddenPropertyOperation __thiscall
FOverriddenPropertySet::GetOverriddenPropertyOperation
          (FOverriddenPropertySet *this,FArchiveSerializedPropertyChain *param_1,FProperty *param_2)

{
  EOverriddenPropertyOperation EVar1;
  
  EVar1 = GetOverriddenPropertyOperation(this,&this->RootNode,param_1,param_2);
  return EVar1;
}

// GetOverriddenPropertyOperation @ 1420fc560

EOverriddenPropertyOperation __thiscall
FOverriddenPropertySet::GetOverriddenPropertyOperation
          (FOverriddenPropertySet *this,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_1,bool *param_2)

{
  EOverriddenPropertyOperation EVar1;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_18;
  
  local_18.Container = param_1->Container;
  local_18.Index = param_1->Index;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  EVar1 = GetOverriddenPropertyOperation
                    (this,&this->RootNode,&local_18,param_2,(this->Owner).field0_0x0.DebugPtr);
  return EVar1;
}

// GetSubPropertyOperation @ 1420fd7d0

EOverriddenPropertyOperation __thiscall
FOverriddenPropertySet::GetSubPropertyOperation
          (FOverriddenPropertySet *this,FOverriddenPropertyNodeID *param_1)

{
  FOverriddenPropertyNode *pFVar1;
  
  pFVar1 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
           FindByKey<FOverriddenPropertyNodeID>(&(this->RootNode).SubPropertyNodes,param_1);
  if (pFVar1 != (FOverriddenPropertyNode *)0x0) {
    return pFVar1->Operation;
  }
  return None;
}

// HandleDeadObjectReferences @ 1420fdfd0

void __thiscall
FOverriddenPropertySet::HandleDeadObjectReferences
          (FOverriddenPropertySet *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  FOverriddenPropertyNode::HandleDeadObjectReferences(&this->RootNode,param_1,param_2);
  return;
}

// HandleObjectsReInstantiated @ 1420fe2a0

void __thiscall
FOverriddenPropertySet::HandleObjectsReInstantiated
          (FOverriddenPropertySet *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  FOverriddenPropertyNode::HandleObjectsReInstantiated(&this->RootNode,param_1);
  return;
}

// IsCDOOwningProperty @ 1420ff4e0

bool __thiscall
FOverriddenPropertySet::IsCDOOwningProperty(FOverriddenPropertySet *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  
  if ((this->Owner).field0_0x0.DebugPtr == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                       ,0x742,L"Expecting a valid overridable owner");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((*(uint *)&((this->Owner).field0_0x0.DebugPtr)->field_0x8 & 0x10) == 0) {
    return false;
  }
  pUVar4 = FField::GetOwnerClass((FField *)param_1);
  return pUVar4 == *(UClass **)&((this->Owner).field0_0x0.DebugPtr)->field_0x10;
}

// NotifyAllPropertyChange @ 142102ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOverriddenPropertySet::NotifyAllPropertyChange
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          EPropertyNotificationType param_2,uint param_3,TNotNull<UStruct_const_*> param_4,
          void *param_5)

{
  FField *pFVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStackY_158 [32];
  bool local_118 [8];
  TFieldIterator<FProperty> local_110;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_f8;
  undefined4 local_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> local_c8;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110.Struct = param_4.Val;
  if (param_4.Val == (UStruct *)0x0) {
    local_110.Field = (FField *)0x0;
  }
  else {
    local_110.Field = (param_4.Val)->ChildProperties;
  }
  local_110.InterfaceIndex = -1;
  local_110.bIncludeSuper = true;
  local_110.bIncludeDeprecated = true;
  local_110.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_110);
  pFVar1 = local_110.Field;
  while (pFVar1 != (FField *)0x0) {
    if (((ulonglong)pFVar1[1].ClassPrivate & 0x400000000000000) == 0) {
      local_118[0] = false;
      local_f8._8_8_ = 0;
      local_e8 = 0xffffffff;
      uStack_e4 = 0;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      local_b8 = (code *)0x0;
      local_90 = (longlong *)0x0;
      local_88 = 0;
      local_60 = (longlong *)0x0;
      local_110.Field = pFVar1;
      local_f8.Container = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)pFVar1;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      local_c8.ArrayNum = iVar3 + 1;
      *(TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> **)
       (local_c8.AllocatorInstance.Data + (longlong)iVar3 * 0x18) = local_f8.Container;
      *(undefined8 *)(local_c8.AllocatorInstance.Data + (longlong)iVar3 * 0x18 + 8) = local_f8._8_8_
      ;
      *(ulonglong *)(local_c8.AllocatorInstance.Data + (longlong)iVar3 * 0x18 + 0x10) =
           CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
      if (local_b8 != (code *)0x0) {
        UE::Core::Private::Function::CheckCallable(local_b8);
        pcVar2 = local_b8;
        plVar5 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar5 = local_90;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar2)(uVar4,&local_f8);
      }
      local_f8.Container = &local_c8;
      uStack_d0 = 0;
      local_f8._8_8_ = (ulonglong)uStack_cc << 0x20;
      local_d8 = local_f8.Container;
      NotifyPropertyChange(this,param_1,param_2,&local_f8,param_3,param_5,local_118);
      if (local_88 != 0) {
        plVar5 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar5 = local_60;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_b8 != (code *)0x0) {
        plVar5 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar5 = local_90;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    local_110.Field = pFVar1->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_110);
    pFVar1 = local_110.Field;
  }
  return;
}

// NotifyPropertyChange @ 142102ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOverriddenPropertySet::NotifyPropertyChange
          (FOverriddenPropertySet *this,FOverriddenPropertyNode *param_1,
          EPropertyNotificationType param_2,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_3,uint param_4,void *param_5,bool *param_6)

{
  int *piVar1;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TNotNull<UObject_const_*> TVar4;
  TNotNull<UStruct_const_*> TVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  TNotNull<FProperty_const_*> TVar10;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  FOverriddenPropertyNodeID *pFVar12;
  FOverriddenPropertyNode *pFVar13;
  bool bVar14;
  char cVar15;
  FScriptContainerElement FVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FMapProperty *pFVar22;
  UObject *pUVar23;
  uchar *puVar24;
  uchar *puVar25;
  undefined1 *puVar26;
  FMapProperty *pFVar27;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  *pTVar28;
  void *pvVar29;
  uint uVar30;
  undefined1 auStackY_688 [32];
  EPropertyNotificationType local_648 [8];
  undefined1 local_640 [4];
  int local_63c;
  FMapProperty *local_638;
  TNotNull<FProperty_const_*> local_630;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_628;
  TNotNull<FProperty_const_*> local_620;
  TNotNull<FProperty_const_*> local_618 [2];
  FOverriddenPropertyNodeID *local_608;
  uint local_5f8;
  int local_5f4;
  uint local_5f0;
  uint local_5ec;
  FMapProperty *local_5e8;
  bool *local_5e0;
  FOverriddenPropertyNode *local_5d8;
  FScriptContainerElement *local_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  uint uStack_5c0;
  undefined4 uStack_5bc;
  int local_5b8;
  int local_5b4;
  int local_5b0;
  uint local_5ac;
  uint local_5a8 [2];
  FMapProperty *local_5a0;
  TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *local_598;
  uint uStack_590;
  FScriptArrayHelper local_588;
  FOverridableManager *local_568;
  EPropertyNotificationType *local_560;
  FOverriddenPropertySet *local_558;
  TNotNull<FProperty_const_*> *local_550;
  EPropertyNotificationType *local_548;
  FOverriddenPropertySet *local_540;
  TNotNull<FProperty_const_*> *local_538;
  FProperty *local_530;
  FProperty *local_528;
  FProperty *local_520;
  FProperty *local_518;
  FProperty *local_510;
  FProperty *local_508;
  FProperty *local_500;
  FProperty *local_4f8;
  UObject *local_4f0;
  undefined1 local_4e8 [16];
  FProperty *local_4d8;
  uchar *local_4d0;
  FProperty *local_4c8;
  uchar *local_4c0;
  code *local_4b8;
  code **local_4b0;
  code *local_4a8;
  code **local_4a0;
  code *local_498;
  FProperty **local_490;
  code *local_488;
  FProperty **local_480;
  FProperty *local_478;
  uchar *local_470;
  FProperty *local_468;
  uchar *local_460;
  code *local_458;
  code **local_450;
  code *local_448;
  code **local_440;
  code *local_438;
  FProperty **local_430;
  code *local_428;
  FProperty **local_420;
  FScriptMapHelper *local_418;
  uint local_410;
  undefined1 local_408 [16];
  <lambda_1> local_3f8;
  FScriptArrayHelper local_3e8;
  FScriptMapHelper *local_3c8;
  uint *local_3c0;
  FMapProperty **local_3b8;
  TNotNull<FProperty_const_*> *local_3b0;
  undefined1 *local_3a8;
  bool *local_3a0;
  FScriptArrayHelper *local_398;
  int *local_390;
  FOverriddenPropertySet *local_388;
  FMapProperty **local_380;
  FMapProperty **local_378;
  undefined1 *local_370;
  bool *local_368;
  FScriptMapHelper *local_360;
  int *local_358;
  FMapProperty **local_350;
  TNotNull<FProperty_const_*> *local_348;
  undefined1 *local_340;
  FScriptArrayHelper *local_338;
  int *local_330;
  FOverriddenPropertySet *local_328;
  FMapProperty **local_320;
  FMapProperty **local_318;
  undefined1 *local_310;
  FOverridableManager *local_308;
  FScriptArrayHelper local_300;
  FMapProperty **local_2e0;
  undefined1 *local_2d8;
  FScriptArrayHelper *local_2d0;
  FOverriddenPropertySet *local_2c8;
  FMapProperty **local_2c0;
  FOverridableManager *local_2b8;
  FOverriddenPropertyNode **local_2b0;
  EPropertyNotificationType *local_2a8;
  FMapProperty **local_2a0;
  bool *local_298;
  TNotNull<FProperty_const_*> *local_290;
  undefined1 *local_288;
  FMapProperty **local_280;
  undefined1 *local_278;
  FScriptMapHelper *local_270;
  TNotNull<FProperty_const_*> *local_268;
  FOverriddenPropertySet *local_260;
  FMapProperty **local_258;
  FOverridableManager *local_250;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_248;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_238;
  FString local_228;
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_218;
  FOverriddenPropertyNodeID local_208;
  FScriptMapHelper local_1e8;
  FScriptMapHelper local_1b0;
  FScriptMapHelper local_178;
  code *local_140;
  FProperty **local_138;
  code *local_130;
  FProperty **local_128;
  FScriptMapLayout local_120;
  code *local_108;
  FProperty **local_100;
  code *local_f8;
  FProperty **local_f0;
  FScriptMapLayout local_e8;
  code *local_d0;
  FProperty **local_c8;
  code *local_c0;
  FProperty **local_b8;
  FScriptMapLayout local_b0;
  code *local_98;
  FProperty **local_90;
  code *local_88;
  FProperty **local_80;
  FScriptMapLayout local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_5e0 = param_6;
  pUVar23 = (this->Owner).field0_0x0.DebugPtr;
  local_5d0 = param_5;
  local_640[0] = 0;
  local_648[0] = param_2;
  local_628 = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)param_3;
  local_5d8 = param_1;
  if (((pUVar23 == (UObject *)0x0) || ((*(uint *)&pUVar23->field_0x8 >> 0x1e & 1) != 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Owner)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                          ,0x3cc,L"Expecting a valid overridable owner"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_4 >> 10 & 1) != 0) {
    if (local_5d8 == (FOverriddenPropertyNode *)0x0) {
      return;
    }
    if (local_648[0] != PostEdit) {
      return;
    }
    local_218.Container = param_3->Container;
    local_218.Index = param_3->Index;
    local_218._12_4_ = *(undefined4 *)&param_3->field_0xc;
    ClearOverriddenProperty(this,local_5d8,&local_218,param_5);
    return;
  }
  if ((FOverridableManager::OverridableManager == (FOverridableManager *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OverridableManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                          ,0x43,L"Expected the overridable manager to be created."), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar17 = param_3->Index;
  pTVar2 = param_3->Container;
  local_568 = FOverridableManager::OverridableManager;
  if ((iVar17 < 0) || (pTVar2->ArrayNum <= iVar17)) {
    if ((local_5d8 != &this->RootNode) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentPropertyNode == &RootNode",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                            ,0x3da,L"Only expecting the root node in this code path"), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar23 = (this->Owner).field0_0x0.DebugPtr;
    TVar5.Val = *(UStruct **)&pUVar23->field_0x10;
    if (TVar5.Val != (UStruct *)0x0) {
      NotifyAllPropertyChange(this,local_5d8,local_648[0],param_4,TVar5,pUVar23);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  if ((iVar17 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_630.Val = *(FProperty **)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x18);
  if ((local_630.Val == (FProperty *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Property",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                          ,0x3e1,L"Expecting a valid property"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TVar10.Val = local_630.Val;
  pFVar27 = (FMapProperty *)0x0;
  if (((local_630.Val)->ArrayDim < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar14)
     ) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_5 == (void *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar29 = (void *)((longlong)(TVar10.Val)->Offset_Internal + (longlong)param_5);
  local_638 = (FMapProperty *)0x0;
  if (local_5d8 != (FOverriddenPropertyNode *)0x0) {
    if (local_630.Val == (FProperty *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_608 = FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_208,local_630);
    pFVar13 = local_5d8;
    pFVar22 = (FMapProperty *)
              TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
              FindByKey<FOverriddenPropertyNodeID>(&local_5d8->SubPropertyNodes,local_608);
    if (pFVar22 == (FMapProperty *)0x0) {
      local_640[0] = 1;
      if (pFVar13->Operation == None) {
        pFVar13->Operation = Modified;
      }
      iVar17 = (pFVar13->SubPropertyNodes).ArrayNum;
      piVar1 = &(pFVar13->SubPropertyNodes).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(pFVar13->SubPropertyNodes).AllocatorInstance,piVar1);
      }
      pFVar12 = local_608;
      pFVar3 = (pFVar13->SubPropertyNodes).AllocatorInstance.Data;
      (pFVar13->SubPropertyNodes).ArrayNum = iVar17 + 1;
      pFVar22 = (FMapProperty *)(pFVar3 + (longlong)iVar17 * 0x38);
      FOverriddenPropertyPath::FOverriddenPropertyPath
                ((FOverriddenPropertyPath *)pFVar22,&local_608->Path);
      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&pFVar22->_padding_)->WeakPtr =
           (pFVar12->Object).WeakPtr;
      *(EOverriddenPropertyOperation *)&pFVar22->_padding_ = None;
      (((TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar22->_padding_ = 0;
    }
    if (local_208.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Path.Path.AllocatorInstance.Data);
    }
    local_638 = pFVar27;
    if (*(EOverriddenPropertyOperation *)&pFVar22->_padding_ != Replace) {
      local_638 = pFVar22;
    }
  }
  local_2b0 = &local_5d8;
  local_2a8 = local_648;
  local_2a0 = &local_638;
  local_290 = &local_630;
  local_288 = local_640;
  local_298 = local_5e0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FOverriddenPropertySet::NotifyPropertyChange'::__l2::
           _dynamic_atexit_destructor_for__SavedPreEditContainers__);
    _Init_thread_footer(&::_TSS0);
  }
  TVar10.Val = local_630.Val;
  local_5c8 = *(undefined4 *)&param_3->Container;
  uStack_5c4 = *(undefined4 *)((longlong)&param_3->Container + 4);
  pTVar2 = param_3->Container;
  uStack_5bc = *(undefined4 *)&param_3->field_0xc;
  iVar17 = param_3->Index;
  uVar30 = iVar17 + 1;
  uVar8._4_4_ = uStack_5bc;
  uVar8._0_4_ = uVar30;
  uVar20 = 0;
  local_608 = (FOverriddenPropertyNodeID *)pTVar2;
  uStack_5c0 = uVar30;
  local_598 = pTVar2;
  _uStack_590 = uVar8;
  if ((local_630.Val == (FProperty *)0x0) ||
     ((*(uint *)((local_630.Val)->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    local_618[0].Val = (FProperty *)0x0;
    if ((local_630.Val == (FProperty *)0x0) ||
       (local_620.Val = local_630.Val,
       (*(ulonglong *)((local_630.Val)->_padding_ + 0x18) & 0x400000000000) == 0))
    goto LAB_1421037e8;
LAB_1421037eb:
    if ((FMapProperty *)local_620.Val != (FMapProperty *)0x0) {
      if ((((FMapProperty *)local_620.Val)->KeyProp == (FProperty *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("MapProperty->KeyProp",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                              ,0x518,L"Expecting a key type for Maps"), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_5d0 = (((FOverriddenPropertyNodeID *)&local_620.Val[1]._padding_)->Path).Path.
                  AllocatorInstance.Data;
      if ((local_5d0 == (FScriptContainerElement *)0x0) ||
         ((*(uint *)(*(longlong *)(local_5d0 + 8) + 0x18) >> 0x1a & 1) == 0)) {
        local_5d0 = (FScriptContainerElement *)0x0;
      }
      if ((local_620.Val[1]._padding_ == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("MapProperty->ValueProp",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                              ,0x51c,L"Expecting a value type for Maps"), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_5a0 = (FMapProperty *)local_620.Val[1]._padding_;
      if ((local_5a0 == (FMapProperty *)0x0) ||
         ((*(uint *)(local_5a0->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
        local_5a0 = pFVar27;
      }
      FScriptMapHelper::FScriptMapHelper(&local_1b0,(FMapProperty *)local_620.Val,pvVar29);
      if ((int)uVar30 < 0) {
LAB_1421039bd:
        uVar30 = uStack_590;
      }
      else {
        plVar7 = (longlong *)CONCAT44(uStack_5c4,local_5c8);
        local_628 = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)(plVar7 + 1);
        if ((int)plVar7[1] <= (int)uVar30) goto LAB_1421039bd;
        uVar18 = uVar20;
        if ((int)uVar30 < (int)plVar7[1]) {
          uVar18 = ~uVar30 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar2 = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)(int)uVar30 * 0x18);
        if (*(FProperty **)((longlong)&(pTVar2->AllocatorInstance).Data + *plVar7) !=
            (FProperty *)local_620.Val[1]._padding_) {
          uVar18 = uVar20;
          if ((int)uVar30 < *(int *)&(local_628->AllocatorInstance).Data) {
            uVar18 = ~uVar30 >> 0x1f;
          }
          local_628 = pTVar2;
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar2 = local_628;
          if (*(FProperty **)((longlong)&(local_628->AllocatorInstance).Data + *plVar7) !=
              (FProperty *)local_620.Val[1]._padding_) goto LAB_1421039bd;
        }
        local_628 = pTVar2;
        param_3->Index = param_3->Index + 1;
        uVar30 = iVar17 + 2;
      }
      uVar18 = param_3->Index;
      pTVar2 = param_3->Container;
      uVar19 = uVar20;
      if ((int)uVar18 < pTVar2->ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar18 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x18 + 0x10);
      if (uVar18 == 0xffffffff) {
        local_5f4 = -1;
      }
      else {
        local_628 = param_3->Container;
        uVar19 = param_3->Index;
        uVar21 = uVar20;
        if ((int)uVar19 < local_628->ArrayNum) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)((longlong)(local_628->AllocatorInstance).Data +
                     (longlong)(int)uVar19 * 0x18 + 0x14) != '\x02') {
          local_628 = param_3->Container;
          uVar19 = param_3->Index;
          uVar21 = uVar20;
          if ((int)uVar19 < local_628->ArrayNum) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(char *)((longlong)(local_628->AllocatorInstance).Data +
                       (longlong)(int)uVar19 * 0x18 + 0x14) != '\x03') {
            local_628 = param_3->Container;
            uVar19 = param_3->Index;
            if ((int)uVar19 < local_628->ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(char *)((longlong)(local_628->AllocatorInstance).Data +
                          (longlong)(int)uVar19 * 0x18 + 0x14) != '\x04') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("LogicalMapIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapKey || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::MapValue"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                    ,0x52f,L"Expecting a container type"), bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        local_418 = &local_1b0;
        local_410 = uVar18;
        local_5f4 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                              (&local_1b0,(<lambda_1> *)&local_418);
      }
      if (((int)uVar30 < 0) || (*(int *)((longlong)local_608 + 8) <= (int)uVar30)) {
        if (local_648[0] == PreEdit) {
          if ((local_620.Val == (FProperty *)0x0) ||
             (TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
             TVar4.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                    <unnamed-type-SavedPreEditContainers>::FindOrAdd
                              (&SavedPreEditContainers,TVar4,local_620);
          FScriptMapHelper::FScriptMapHelper(&local_1e8,(FMapProperty *)local_620.Val,puVar24);
          if ((local_1e8.MapFlags & UsesMemoryImageAllocator) == None) {
            iVar17 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(local_1e8.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
          }
          else {
            iVar17 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                 *)&(local_1e8.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                              AllocatorInstance.SecondaryData.field_0x4;
          }
          iVar17 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                      *)&(local_1e8.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar17;
          if (iVar17 != 0) {
            FScriptMapHelper::DestructItems(&local_1e8,0,iVar17);
            local_3f8.__this = &local_1e8;
            local_3f8.Slack = 0;
            FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                      (&local_1e8,&local_3f8);
          }
          iVar17 = ((local_1b0.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          if (0 < iVar17) {
            do {
              local_5b4 = (int)pFVar27;
              bVar14 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_1b0,(<lambda_1> *)&local_5b4);
              if (bVar14) break;
              uVar30 = (int)pFVar27 + 1;
              pFVar27 = (FMapProperty *)(ulonglong)uVar30;
            } while ((int)uVar30 < iVar17);
          }
          local_5f8 = (uint)pFVar27;
          bVar14 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_1b0,(<lambda_1> *)&local_5f8);
          if (bVar14) {
            do {
              local_4e8._0_8_ = &local_1b0;
              uVar30 = (uint)pFVar27;
              local_4e8._8_4_ = uVar30;
              puVar24 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                  (&local_1b0,(<lambda_1> *)local_4e8);
              puVar25 = FScriptMapHelper::GetKeyPtr(&local_1b0,uVar30);
              if ((local_1e8.MapFlags & UsesMemoryImageAllocator) == None) {
                local_508 = local_1e8.ValueProp;
                local_468 = local_1e8.ValueProp;
                local_d0 = UE::Core::Private::Function::
                           TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
                           ::Call;
                local_c8 = &local_510;
                local_c0 = UE::Core::Private::Function::
                           TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
                           ::Call;
                local_b8 = &local_508;
                local_450 = &local_d0;
                local_458 = UE::Core::Private::Function::
                            TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
                            ::Call;
                local_98 = UE::Core::Private::Function::
                           TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
                           ::Call;
                local_90 = &local_478;
                local_88 = UE::Core::Private::Function::
                           TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
                           ::Call;
                local_80 = &local_468;
                local_440 = &local_98;
                local_448 = UE::Core::Private::Function::
                            TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
                            ::Call;
                local_438 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                            ::Call;
                local_430 = &local_500;
                local_428 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                            ::Call;
                local_420 = &local_4f8;
                local_510 = local_1e8.KeyProp;
                local_478 = local_1e8.KeyProp;
                local_500 = local_1e8.KeyProp;
                local_4f8 = local_1e8.KeyProp;
                local_b0.ValueOffset = local_1e8.MapLayout.ValueOffset;
                local_b0.SetLayout.HashNextIdOffset = local_1e8.MapLayout.SetLayout.HashNextIdOffset
                ;
                local_b0.SetLayout.HashIndexOffset = local_1e8.MapLayout.SetLayout.HashIndexOffset;
                local_b0.SetLayout.Size = local_1e8.MapLayout.SetLayout.Size;
                local_b0.SetLayout.SparseArrayLayout =
                     local_1e8.MapLayout.SetLayout.SparseArrayLayout;
                local_78.ValueOffset = local_1e8.MapLayout.ValueOffset;
                local_78.SetLayout.HashNextIdOffset = local_1e8.MapLayout.SetLayout.HashNextIdOffset
                ;
                local_78.SetLayout.HashIndexOffset = local_1e8.MapLayout.SetLayout.HashIndexOffset;
                local_78.SetLayout.Size = local_1e8.MapLayout.SetLayout.Size;
                local_78.SetLayout.SparseArrayLayout =
                     local_1e8.MapLayout.SetLayout.SparseArrayLayout;
                local_470 = puVar25;
                local_460 = puVar24;
                TScriptSparseSet<FDefaultSetAllocator>::Add
                          ((TScriptSparseSet<FDefaultSetAllocator> *)local_1e8.field2_0x10.HeapMap,
                           puVar25,&local_1e8.MapLayout.SetLayout,
                           (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_428,
                           (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_438,
                           (TFunctionRef<void___cdecl(void_*)> *)&local_448,
                           (TFunctionRef<void___cdecl(void_*)> *)&local_458);
              }
              else {
                local_138 = &local_530;
                local_128 = &local_528;
                local_4b0 = &local_140;
                local_100 = &local_4d8;
                local_f0 = &local_4c8;
                local_4a0 = &local_108;
                local_4a8 = UE::Core::Private::Function::
                            TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
                            ::Call;
                local_498 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                            ::Call;
                local_490 = &local_520;
                local_488 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                            ::Call;
                local_480 = &local_518;
                local_528 = local_1e8.ValueProp;
                local_530 = local_1e8.KeyProp;
                local_4c8 = local_1e8.ValueProp;
                local_4d8 = local_1e8.KeyProp;
                local_520 = local_1e8.KeyProp;
                local_518 = local_1e8.KeyProp;
                local_140 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
                            ::Call;
                local_130 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
                            ::Call;
                local_120.ValueOffset = local_1e8.MapLayout.ValueOffset;
                local_120.SetLayout.HashNextIdOffset =
                     local_1e8.MapLayout.SetLayout.HashNextIdOffset;
                local_120.SetLayout.HashIndexOffset = local_1e8.MapLayout.SetLayout.HashIndexOffset;
                local_120.SetLayout.Size = local_1e8.MapLayout.SetLayout.Size;
                local_4b8 = UE::Core::Private::Function::
                            TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
                            ::Call;
                local_120.SetLayout.SparseArrayLayout =
                     local_1e8.MapLayout.SetLayout.SparseArrayLayout;
                local_108 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
                            ::Call;
                local_f8 = UE::Core::Private::Function::
                           TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
                           ::Call;
                local_e8.ValueOffset = local_1e8.MapLayout.ValueOffset;
                local_e8.SetLayout.HashNextIdOffset = local_1e8.MapLayout.SetLayout.HashNextIdOffset
                ;
                local_e8.SetLayout.HashIndexOffset = local_1e8.MapLayout.SetLayout.HashIndexOffset;
                local_e8.SetLayout.Size = local_1e8.MapLayout.SetLayout.Size;
                local_e8.SetLayout.SparseArrayLayout =
                     local_1e8.MapLayout.SetLayout.SparseArrayLayout;
                local_4d0 = puVar25;
                local_4c0 = puVar24;
                TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                ::Add((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                       *)local_1e8.field2_0x10.HeapMap,puVar25,&local_1e8.MapLayout.SetLayout,
                      (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_488,
                      (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_498,
                      (TFunctionRef<void___cdecl(void_*)> *)&local_4a8,
                      (TFunctionRef<void___cdecl(void_*)> *)&local_4b8);
              }
              iVar17 = ((local_1b0.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
              do {
                uVar30 = uVar30 + 1;
                pFVar27 = (FMapProperty *)(ulonglong)uVar30;
                if (iVar17 <= (int)uVar30) break;
                local_5a8[0] = uVar30;
                bVar14 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   (&local_1b0,(<lambda_1> *)local_5a8);
              } while (!bVar14);
              local_5f8 = uVar30;
              bVar14 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_1b0,(<lambda_1> *)&local_5f8);
            } while (bVar14);
          }
          goto LAB_14210479f;
        }
        if ((local_620.Val == (FProperty *)0x0) ||
           (TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
           TVar4.Val == (UObject *)0x0)) goto LAB_14210489e;
        puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                  <unnamed-type-SavedPreEditContainers>::Find
                            (&SavedPreEditContainers,TVar4,local_620);
        if ((puVar24 == (uchar *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("SavedPreEditMap",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                ,0x540,L"Expecting the same property as the pre edit flow"), bVar14)
           ) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FScriptMapHelper::FScriptMapHelper(&local_178,(FMapProperty *)local_620.Val,puVar24);
        local_548 = local_648;
        local_538 = &local_620;
        local_280 = &local_638;
        local_278 = local_640;
        local_270 = &local_1b0;
        local_268 = &local_620;
        local_258 = &local_5a0;
        local_250 = local_568;
        local_360 = &local_1b0;
        local_358 = &local_5f4;
        local_350 = &local_638;
        local_348 = &local_620;
        local_340 = local_640;
        local_3c8 = &local_178;
        local_3c0 = &local_5f0;
        local_3b8 = &local_638;
        local_3b0 = &local_620;
        local_3a8 = local_640;
        local_3a0 = local_5e0;
        local_5f0 = uVar18;
        local_540 = this;
        local_260 = this;
        if (((local_620.Val)->PropertyFlags & CPF_ExperimentalOverridableLogic) == CPF_None) {
          if ((param_4 == 1) && (local_5f4 == -1)) {
LAB_142104328:
            `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_8>::operator()
                      (&local_280);
          }
          else if ((local_638 != (FMapProperty *)0x0) &&
                  (*(EOverriddenPropertyOperation *)&local_638->_padding_ != Replace)) {
            *(EOverriddenPropertyOperation *)&local_638->_padding_ = Replace;
            local_640[0] = 1;
          }
        }
        else {
          if (((local_5d0 != (FScriptContainerElement *)0x0) &&
              ((*(ulonglong *)(local_5d0 + 0x38) & 0x2000000000000) != 0)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!KeyObjectProperty || !KeyObjectProperty->HasAllPropertyFlags(CPF_PersistentInstance)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                  ,0x5a1,L"Keys as an instanced subobject is not supported yet"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((local_5a0 != (FMapProperty *)0x0) &&
              ((local_5a0->_padding_ & CPF_PersistentInstance) == CPF_None)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ValueObjectProperty || ValueObjectProperty->HasAllPropertyFlags(CPF_PersistentInstance)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                  ,0x5a3,L"Values must be instanced to support map overrides"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((((param_4 & 0x10) != 0) && (uVar18 == 0xffffffff)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LogicalMapIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                  ,0x5a7,L"ValueSet change type should have associated indexes"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((param_4 & 0x11) == 0) {
            if ((param_4 & 2) == 0) {
              if ((param_4 & 4) == 0) {
                if ((param_4 & 8) == 0) {
                  if ((param_4 >> 8 & 1) == 0) {
                    if (5 < (byte)LogOverridableObject._0_1_) {
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                    }
                    ScopeExitSupport::
                    TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_7>_>
                    ::
                    ~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l218::<lambda_7>_>
                              (&local_548);
                    goto LAB_142104726;
                  }
                  if (4 < (byte)LogOverridableObject._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                  }
                }
                else {
                  if ((local_5f0 != 0xffffffff) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InternalPreEditMapIndex == INDEX_NONE",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                          ,0x5c7,
                                          L"ArrayClear change type should not have associated indexes"
                                         ), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar17 = ((local_178.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                  if (0 < iVar17) {
                    do {
                      local_5b0 = (int)pFVar27;
                      bVar14 = FScriptMapHelper::
                               WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                         (&local_178,(<lambda_1> *)&local_5b0);
                      if (bVar14) break;
                      uVar30 = (int)pFVar27 + 1;
                      pFVar27 = (FMapProperty *)(ulonglong)uVar30;
                    } while ((int)uVar30 < iVar17);
                  }
                  local_5ec = (uint)pFVar27;
                  bVar14 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_178,(<lambda_1> *)&local_5ec);
                  if (bVar14) {
                    do {
                      uVar30 = (uint)pFVar27;
                      local_5f0 = uVar30;
                      `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_10>::
                      operator()(&local_3c8);
                      iVar17 = ((local_178.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                      do {
                        uVar30 = uVar30 + 1;
                        pFVar27 = (FMapProperty *)(ulonglong)uVar30;
                        if (iVar17 <= (int)uVar30) break;
                        local_5ac = uVar30;
                        bVar14 = FScriptMapHelper::
                                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                           (&local_178,(<lambda_1> *)&local_5ac);
                      } while (!bVar14);
                      local_5ec = uVar30;
                      bVar14 = FScriptMapHelper::
                               WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                         (&local_178,(<lambda_1> *)&local_5ec);
                    } while (bVar14);
                  }
                }
              }
              else {
                `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_10>::operator()
                          (&local_3c8);
              }
            }
            else {
              `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_9>::operator()
                        (&local_360);
            }
          }
          else {
            if (uVar18 == 0xffffffff) goto LAB_142104328;
            `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_10>::operator()
                      (&local_3c8);
            `FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_9>::operator()
                      (&local_360);
          }
        }
        if (*local_548 == PostEdit) {
          if ((local_538->Val == (FProperty *)0x0) ||
             (TVar4.Val = (local_540->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
             TVar4.Val == (UObject *)0x0)) {
LAB_14210489e:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
          <unnamed-type-SavedPreEditContainers>::Free(&SavedPreEditContainers,TVar4,local_538->Val);
        }
        goto LAB_14210479f;
      }
      local_5b8 = local_5f4;
      bVar14 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_1b0,(<lambda_1> *)&local_5b8);
      if (bVar14) {
        local_408._0_8_ = &local_1b0;
        local_408._8_4_ = local_5f4;
        puVar24 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                            (&local_1b0,(<lambda_1> *)local_408);
        pUVar23 = TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)local_5a0,puVar24);
        goto joined_r0x000142103c15;
      }
      goto LAB_142104726;
    }
    if (local_630.Val == (FProperty *)0x0) goto LAB_142104726;
    if ((*(uint *)((local_630.Val)->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      if (local_630.Val != (FProperty *)0x0) {
        if ((*(uint *)((local_630.Val)->_padding_ + 0x18) >> 0x1a & 1) == 0) {
          if ((local_630.Val != (FProperty *)0x0) &&
             ((*(ulonglong *)((local_630.Val)->_padding_ + 0x18) & 0x100000000000000) != 0)) {
            if ((-1 < (int)uVar30) && ((int)uVar30 < pTVar2->ArrayNum)) {
              cVar15 = (**(code **)(*(longlong *)local_630.Val[1]._padding_ + 0x1a8))();
              if (cVar15 == '\0') {
                iVar17 = FOptionalPropertyLayout::CalcIsSetOffset
                                   ((FOptionalPropertyLayout *)(TVar10.Val + 1));
                FVar16 = local_5d0[iVar17];
              }
              else {
                FVar16 = (FScriptContainerElement)
                         (**(code **)(*(longlong *)TVar10.Val[1]._padding_ + 0x1b8))
                                   ((longlong *)TVar10.Val[1]._padding_,local_5d0);
              }
              if (FVar16 == (FScriptContainerElement)0x0) goto LAB_14210479f;
              pTVar28 = &local_238;
              local_238.Container = pTVar2;
              local_238._8_8_ = uVar8;
              goto LAB_142104703;
            }
            goto LAB_14210477f;
          }
        }
        else if (local_630.Val != (FProperty *)0x0) {
          pUVar23 = TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)local_630.Val,pvVar29)
          ;
          if (local_648[0] == PreEdit) {
            TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle;
            if (TVar4.Val == (UObject *)0x0) goto LAB_1421048aa;
            puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                      <unnamed-type-SavedPreEditContainers>::FindOrAdd
                                (&SavedPreEditContainers,TVar4,TVar10);
            local_4f0 = pUVar23;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar23);
            }
            FObjectPropertyBase::SetObjectPtrPropertyValue
                      ((FObjectPropertyBase *)TVar10.Val,puVar24,(TObjectPtr<UObject>)&local_4f0);
          }
          if (((int)uVar30 < 0) || (pTVar2->ArrayNum <= (int)uVar30)) {
            if (local_648[0] != PostEdit) goto LAB_14210479f;
            if ((local_638 != (FMapProperty *)0x0) &&
               (*(EOverriddenPropertyOperation *)&local_638->_padding_ != Replace)) {
              *(EOverriddenPropertyOperation *)&local_638->_padding_ = Replace;
              local_640[0] = 1;
            }
            TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle;
            if (TVar4.Val == (UObject *)0x0) goto LAB_1421048aa;
            puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                      <unnamed-type-SavedPreEditContainers>::Find
                                (&SavedPreEditContainers,TVar4,TVar10);
            if (puVar24 != (uchar *)0x0) {
              TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)TVar10.Val,puVar24);
            }
          }
          if (local_648[0] == PostEdit) {
            TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle;
            if (TVar4.Val == (UObject *)0x0) {
LAB_1421048aa:
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
            <unnamed-type-SavedPreEditContainers>::Free(&SavedPreEditContainers,TVar4,TVar10);
          }
          goto LAB_14210479f;
        }
      }
      goto LAB_142104726;
    }
    TVar5.Val = (UStruct *)local_630.Val[1]._padding_;
    if ((TVar5.Val[1]._padding_ & 0x800) == 0) {
      if (((int)uVar30 < 0) || (pTVar2->ArrayNum <= (int)uVar30)) {
        if (TVar5.Val == (UStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        NotifyAllPropertyChange
                  (this,(FOverriddenPropertyNode *)local_638,local_648[0],param_4,TVar5,pvVar29);
        goto LAB_14210479f;
      }
      pTVar28 = &local_248;
      local_248.Container = pTVar2;
      local_248._8_8_ = uVar8;
LAB_142104703:
      NotifyPropertyChange
                (this,(FOverriddenPropertyNode *)local_638,local_648[0],pTVar28,param_4,pvVar29,
                 local_5e0);
      goto LAB_14210479f;
    }
  }
  else {
    local_618[0].Val = local_630.Val;
    if (local_630.Val == (FProperty *)0x0) {
LAB_1421037e8:
      local_620.Val = (FProperty *)pFVar27;
      goto LAB_1421037eb;
    }
    local_5e8 = (FMapProperty *)local_630.Val[1]._padding_;
    if ((local_5e8 == (FMapProperty *)0x0) ||
       ((*(uint *)(local_5e8->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
      local_5e8 = pFVar27;
    }
    if (local_5e8 == (FMapProperty *)0x0) goto LAB_142104726;
    lVar9 = local_630.Val[1]._padding_;
    uVar18 = (**(code **)(*(longlong *)local_630.Val[1]._padding_ + 0x168))();
    FScriptArrayHelper::FScriptArrayHelper
              (&local_588,Internal,(FProperty *)TVar10.Val[1]._padding_,pvVar29,
               ((FProperty *)TVar10.Val[1]._padding_)->ElementSize,uVar18,(EArrayPropertyFlags)lVar9
              );
    if (((int)uVar30 < 0) || (pTVar2->ArrayNum <= (int)uVar30)) {
LAB_142103196:
      uVar30 = uStack_590;
    }
    else {
      uVar18 = 0;
      if ((int)uVar30 < pTVar2->ArrayNum) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x18) !=
          local_618[0].Val[1]._padding_) goto LAB_142103196;
      local_628->ArrayNum = local_628->ArrayNum + 1;
      uVar30 = iVar17 + 2;
    }
    pTVar11 = local_628;
    uVar18 = local_628->ArrayNum;
    pTVar2 = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)
             (local_628->AllocatorInstance).Data;
    uVar19 = uVar20;
    if ((int)uVar18 < pTVar2->ArrayNum) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_63c = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x18 + 0x10);
    if (local_63c != -1) {
      pTVar2 = (TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_> *)
               (pTVar11->AllocatorInstance).Data;
      uVar18 = pTVar11->ArrayNum;
      if ((int)uVar18 < pTVar2->ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((pTVar2->AllocatorInstance).Data[(longlong)(int)uVar18 * 0x18 + 0x14] !=
           (FScriptContainerElement)0x2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayIndex == INDEX_NONE || PropertyIterator->PropertyInfo == EPropertyVisitorInfoType::ContainerIndex"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                              ,0x447,L"Expecting a container index"), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (((int)uVar30 < 0) || (*(int *)((longlong)local_608 + 8) <= (int)uVar30)) {
      if ((local_618[0].Val[1]._padding_ == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                              ,1099,L"Expecting an inner type for Arrays"), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_648[0] == PreEdit) {
        if ((local_618[0].Val == (FProperty *)0x0) ||
           (TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
           TVar4.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                  <unnamed-type-SavedPreEditContainers>::FindOrAdd
                            (&SavedPreEditContainers,TVar4,local_618[0]);
        TVar10.Val = local_618[0].Val;
        lVar9 = local_618[0].Val[1]._padding_;
        uVar30 = (**(code **)(*(longlong *)local_618[0].Val[1]._padding_ + 0x168))();
        FScriptArrayHelper::FScriptArrayHelper
                  (&local_3e8,Internal,(FProperty *)TVar10.Val[1]._padding_,puVar24,
                   ((FProperty *)TVar10.Val[1]._padding_)->ElementSize,uVar30,
                   (EArrayPropertyFlags)lVar9);
        FScriptArrayHelper::EmptyAndAddValues
                  (&local_3e8,(local_588.field1_0x8.FreezableArray)->ArrayNum);
        pFVar22 = pFVar27;
        while( true ) {
          iVar17 = (int)pFVar22;
          if ((local_588.field1_0x8.FreezableArray)->ArrayNum <= iVar17) break;
          pFVar22 = pFVar27;
          if ((local_588.field1_0x8.FreezableArray)->ArrayNum != 0) {
            puVar26 = (undefined1 *)(local_588.field1_0x8.FreezableArray)->_padding_;
            if (((local_588.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)puVar26 & 1) != 0)) {
              puVar26 = &(local_588.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar26 >> 0x18);
            }
            pFVar22 = (FMapProperty *)(puVar26 + (longlong)local_588.ElementSize * (longlong)iVar17)
            ;
          }
          pUVar23 = TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)local_5e8,pFVar22);
          if ((local_3e8.field1_0x8.FreezableArray)->ArrayNum == 0) {
            FObjectPropertyBase::SetObjectPropertyValue
                      ((FObjectPropertyBase *)local_5e8,(void *)0x0,pUVar23);
            pFVar22 = (FMapProperty *)(ulonglong)(iVar17 + 1);
          }
          else {
            puVar26 = (undefined1 *)(local_3e8.field1_0x8.FreezableArray)->_padding_;
            if (((local_3e8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)puVar26 & 1) != 0)) {
              puVar26 = &(local_3e8.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar26 >> 0x18);
            }
            FObjectPropertyBase::SetObjectPropertyValue
                      ((FObjectPropertyBase *)local_5e8,
                       puVar26 + (longlong)local_3e8.ElementSize * (longlong)iVar17,pUVar23);
            pFVar22 = (FMapProperty *)(ulonglong)(iVar17 + 1);
          }
        }
        goto LAB_14210479f;
      }
      local_560 = local_648;
      local_550 = local_618;
      local_558 = this;
      if ((local_618[0].Val == (FProperty *)0x0) ||
         (TVar4.Val = (this->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
         TVar4.Val == (UObject *)0x0)) goto LAB_142104892;
      puVar24 = `FOverriddenPropertySet::NotifyPropertyChange'::__l2::
                <unnamed-type-SavedPreEditContainers>::Find
                          (&SavedPreEditContainers,TVar4,local_618[0]);
      TVar10.Val = local_618[0].Val;
      lVar9 = local_618[0].Val[1]._padding_;
      uVar20 = (**(code **)(*(longlong *)local_618[0].Val[1]._padding_ + 0x168))();
      FScriptArrayHelper::FScriptArrayHelper
                (&local_300,Internal,(FProperty *)TVar10.Val[1]._padding_,puVar24,
                 ((FProperty *)TVar10.Val[1]._padding_)->ElementSize,uVar20,
                 (EArrayPropertyFlags)lVar9);
      local_2e0 = &local_638;
      local_2d8 = local_640;
      local_330 = &local_63c;
      local_320 = &local_5e8;
      local_2c0 = &local_5e8;
      local_318 = &local_638;
      local_2b8 = local_568;
      local_308 = local_568;
      local_398 = &local_300;
      local_390 = &local_63c;
      local_380 = &local_5e8;
      local_378 = &local_638;
      local_370 = local_640;
      local_310 = local_640;
      local_368 = local_5e0;
      local_388 = this;
      local_338 = &local_588;
      local_328 = this;
      local_2d0 = &local_588;
      local_2c8 = this;
      if (((local_618[0].Val)->PropertyFlags & CPF_ExperimentalOverridableLogic) == CPF_None) {
        if ((param_4 == 1) && (local_63c == -1)) {
LAB_14210369c:
          `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_4>::operator()(&local_2e0);
        }
        else if ((local_638 != (FMapProperty *)0x0) &&
                (*(EOverriddenPropertyOperation *)&local_638->_padding_ != Replace)) {
          *(EOverriddenPropertyOperation *)&local_638->_padding_ = Replace;
          local_640[0] = 1;
        }
      }
      else {
        if (((local_5e8->_padding_ & CPF_PersistentInstance) == CPF_None) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerObjectProperty->HasAllPropertyFlags(CPF_PersistentInstance)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                ,0x4ce,
                                L"Only instanced array properties support experimental overridable logic"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((param_4 & 0x10) != 0) && (local_63c == -1)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                ,0x4d2,L"ValueSet change type should have associated indexes"),
           bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((param_4 & 0x11) == 0) {
          if ((param_4 & 2) == 0) {
            if ((param_4 & 4) == 0) {
              if ((param_4 & 8) == 0) {
                if ((param_4 >> 8 & 1) == 0) {
                  if (5 < (byte)LogOverridableObject._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                  }
                  ScopeExitSupport::
                  TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_3>_>::
                  ~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l62::<lambda_3>_>
                            (&local_560);
                  goto LAB_142104726;
                }
                if (4 < (byte)LogOverridableObject._0_1_) {
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u_ArrayMove_chang_1508581e0,
                             (FLogCategoryBase *)&LogOverridableObject);
                }
              }
              else {
                if ((local_63c != -1) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayIndex == INDEX_NONE",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                                        ,0x4f2,
                                        L"ArrayClear change type should not have associated indexes"
                                       ), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                while (iVar17 = (int)pFVar27,
                      iVar17 < (local_300.field1_0x8.FreezableArray)->ArrayNum) {
                  local_63c = iVar17;
                  `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_6>::operator()
                            (&local_398);
                  pFVar27 = (FMapProperty *)(ulonglong)(iVar17 + 1);
                }
              }
            }
            else {
              `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_6>::operator()
                        (&local_398);
            }
          }
          else {
            `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_5>::operator()
                      (&local_338);
          }
        }
        else {
          if (local_63c == -1) goto LAB_14210369c;
          `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_6>::operator()(&local_398);
          `FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_5>::operator()(&local_338);
        }
      }
      if (*local_560 == PostEdit) {
        if ((local_550->Val == (FProperty *)0x0) ||
           (TVar4.Val = (local_558->Owner).field0_0x0.ObjectPtr.field0_0x0.Handle,
           TVar4.Val == (UObject *)0x0)) {
LAB_142104892:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        `FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>
        ::Free(&SavedPreEditContainers,TVar4,local_550->Val);
      }
      goto LAB_14210479f;
    }
    if (local_63c < 0) goto LAB_142104726;
    if ((local_588.field1_0x8.FreezableArray)->ArrayNum <= local_63c) goto LAB_142104726;
    if ((local_588.field1_0x8.FreezableArray)->ArrayNum != 0) {
      puVar26 = (undefined1 *)(local_588.field1_0x8.FreezableArray)->_padding_;
      if (((local_588.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar26 & 1) != 0)) {
        puVar26 = &(local_588.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar26 >> 0x18);
      }
      pFVar27 = (FMapProperty *)(puVar26 + (longlong)local_588.ElementSize * (longlong)local_63c);
    }
    pUVar23 = TryGetInstancedSubObjectValue(this,(FObjectPropertyBase *)local_5e8,pFVar27);
joined_r0x000142103c15:
    if (pUVar23 != (UObject *)0x0) goto LAB_14210479f;
LAB_142104726:
    if (((5 < (byte)LogOverridableObject._0_1_) && (-1 < (int)uVar30)) &&
       ((int)uVar30 < *(int *)((longlong)local_608 + 8))) {
      FField::GetName((FField *)local_630.Val,&local_228);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14210477f:
  if (((local_648[0] == PostEdit) && (local_638 != (FMapProperty *)0x0)) &&
     (*(EOverriddenPropertyOperation *)&local_638->_padding_ != Replace)) {
    *(EOverriddenPropertyOperation *)&local_638->_padding_ = Replace;
    local_640[0] = 1;
  }
LAB_14210479f:
  ScopeExitSupport::TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<lambda_2>_>::
  ~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l2::<lambda_2>_>(&local_2b0);
  return;
}

// NotifyPropertyChange @ 1421048c0

void __thiscall
FOverriddenPropertySet::NotifyPropertyChange
          (FOverriddenPropertySet *this,EPropertyNotificationType param_1,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_2,uint param_3,void *param_4)

{
  bool local_res8 [32];
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_18;
  
  local_18.Container = param_2->Container;
  local_18.Index = param_2->Index;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res8[0] = false;
  NotifyPropertyChange(this,&this->RootNode,param_1,&local_18,param_3,param_4,local_res8);
  return;
}

// OverrideProperty @ 1421052c0

void __thiscall
FOverriddenPropertySet::OverrideProperty
          (FOverriddenPropertySet *this,
          TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
          *param_1,void *param_2)

{
  bool local_res8 [8];
  TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
  local_18;
  
  local_18.Container = param_1->Container;
  local_18.Index = param_1->Index;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = false;
  NotifyPropertyChange(this,&this->RootNode,PreEdit,&local_18,1,param_2,local_res8);
  local_18.Container = param_1->Container;
  local_18.Index = param_1->Index;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  NotifyPropertyChange(this,&this->RootNode,PostEdit,&local_18,1,param_2,local_res8);
  return;
}

// Reset @ 14210a4b0

void __thiscall FOverriddenPropertySet::Reset(FOverriddenPropertySet *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((this->RootNode).Operation != None) {
    (this->RootNode).Operation = None;
  }
  iVar2 = (this->RootNode).SubPropertyNodes.ArrayNum;
  if (iVar2 != 0) {
    DestructItems<FOverriddenPropertyNode,int>
              ((FOverriddenPropertyNode *)(this->RootNode).SubPropertyNodes.AllocatorInstance.Data,
               iVar2);
    piVar1 = &(this->RootNode).SubPropertyNodes.ArrayMax;
    (this->RootNode).SubPropertyNodes.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->RootNode).SubPropertyNodes.AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// RestoreOverriddenPropertyOperation @ 14210bc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::RestoreOverriddenPropertyOperation
          (FOverriddenPropertySet *this,EOverriddenPropertyOperation param_1,
          FOverriddenPropertyNode *param_2,FArchiveSerializedPropertyChain *param_3,
          FProperty *param_4)

{
  TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  TNotNull<FProperty_const_*> TVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FProperty_*> FVar7;
  FOverriddenPropertyNode *pFVar8;
  FOverriddenPropertyNodeID *pFVar9;
  FOverriddenPropertyNode *pFVar10;
  ForElementType<FProperty_*> _Dst;
  uint uVar11;
  bool bVar12;
  undefined1 auStackY_1d8 [32];
  FProperty *local_180;
  ForElementType<FProperty_*> local_178;
  undefined1 local_170 [64];
  void *local_130;
  undefined4 local_128;
  undefined8 local_124;
  FOverriddenPropertyNodeID local_118;
  ForElementType<FProperty_*> local_f8;
  int local_b0;
  int local_ac;
  int local_a8;
  FArchiveSerializedPropertyChain local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar8 = (FOverriddenPropertyNode *)0x0;
  local_178 = (ForElementType<FProperty_*>)((ulonglong)local_178 & 0xffffffff00000000);
  if ((param_2->Operation == Replace) && (param_4 != (FProperty *)0x0)) {
    pFVar8 = (FOverriddenPropertyNode *)0x0;
  }
  else {
    bVar12 = param_3 == (FArchiveSerializedPropertyChain *)0x0;
    if (bVar12) {
      local_130 = (void *)0x0;
      local_128 = 0;
      FVar7 = (ForElementType<FProperty_*>)local_170;
      local_124 = 8;
    }
    else {
      FVar7 = (ForElementType<FProperty_*>)
              FArchiveSerializedPropertyChain::FArchiveSerializedPropertyChain(&local_a0,param_3);
    }
    pvVar4 = local_130;
    local_f8.SecondaryData = (ForElementType<FProperty_*>)0x0;
    iVar5 = *(int *)((longlong)FVar7 + 0x48);
    local_b0 = iVar5;
    local_178 = *(ForElementType<FProperty_*> *)((longlong)FVar7 + 0x40);
    if (*(ForElementType<FProperty_*> *)((longlong)FVar7 + 0x40) == (ForElementType<FProperty_*>)0x0
       ) {
      local_178 = FVar7;
    }
    if (iVar5 == 0) {
      local_ac = 8;
      iVar5 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                (8,8,iVar5,0,&local_f8,iVar5,&local_ac);
      _Dst = (ForElementType<FProperty_*>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        _Dst = local_f8.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)local_178,(longlong)iVar5 << 3);
      iVar5 = local_b0;
    }
    local_a8 = *(int *)((longlong)FVar7 + 0x50);
    if ((bVar12) && (pvVar4 != (void *)0x0)) {
      FMemory::Free(pvVar4);
      iVar5 = local_b0;
    }
    if ((!bVar12) &&
       (local_a0.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
        (ForElementType<FProperty_*>)0x0)) {
      FMemory::Free((void *)local_a0.SerializedPropertyChain.AllocatorInstance.SecondaryData);
      iVar5 = local_b0;
    }
    pFVar10 = pFVar8;
    if (param_4 != (FProperty *)0x0) {
      local_180 = param_4;
      FVar7 = (ForElementType<FProperty_*>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f8.SecondaryData;
      }
      if ((ulonglong)FVar7 <= &local_180) {
        FVar7 = (ForElementType<FProperty_*>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
          FVar7 = local_f8.SecondaryData;
        }
        if ((&local_180 < (FProperty **)((longlong)FVar7 + (longlong)local_ac * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), iVar5 = local_b0, bVar12)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FOverriddenPropertyNode *)(*pcVar3)();
          return pFVar8;
        }
      }
      if (iVar5 == local_ac) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                          (0x808,&local_f8,&local_ac);
      }
      local_b0 = iVar5 + 1;
      FVar7 = (ForElementType<FProperty_*>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f8.SecondaryData;
      }
      *(FProperty **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_180;
      do {
        iVar5 = local_a8 + 1;
        local_a8 = 0;
      } while (iVar5 == 0);
      local_a8 = iVar5;
      iVar5 = local_b0;
    }
    while (((uVar11 = (uint)pFVar10, -1 < (int)uVar11 && ((int)uVar11 < iVar5)) &&
           (param_2->Operation != Replace))) {
      uVar6 = 0;
      if ((int)uVar11 < iVar5) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FOverriddenPropertyNode *)(*pcVar3)();
        return pFVar8;
      }
      FVar7 = (ForElementType<FProperty_*>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
        FVar7 = local_f8.SecondaryData;
      }
      TVar2.Val = *(FProperty **)((longlong)FVar7 + (longlong)(int)uVar11 * 8);
      if (((TVar2.Val)->PropertyFlags & CPF_ExperimentalAlwaysOverriden) != CPF_None)
      goto LAB_14210bff3;
      pFVar9 = FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_118,TVar2);
      this_00 = &param_2->SubPropertyNodes;
      pFVar10 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
                FindByKey<FOverriddenPropertyNodeID>(this_00,pFVar9);
      if (pFVar10 == (FOverriddenPropertyNode *)0x0) {
        if (param_2->Operation == None) {
          param_2->Operation = Modified;
        }
        iVar5 = (param_2->SubPropertyNodes).ArrayNum;
        piVar1 = &(param_2->SubPropertyNodes).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&this_00->AllocatorInstance,piVar1);
        }
        (param_2->SubPropertyNodes).ArrayNum = iVar5 + 1;
        pFVar10 = (FOverriddenPropertyNode *)
                  ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
        FOverriddenPropertyPath::FOverriddenPropertyPath
                  ((FOverriddenPropertyPath *)pFVar10,&pFVar9->Path);
        (pFVar10->NodeID).Object.WeakPtr = (pFVar9->Object).WeakPtr;
        pFVar10->Operation = None;
        (pFVar10->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->SubPropertyNodes).ArrayNum = 0;
        (pFVar10->SubPropertyNodes).ArrayMax = 0;
      }
      if (local_118.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Path.Path.AllocatorInstance.Data);
      }
      param_2 = pFVar10;
      pFVar10 = (FOverriddenPropertyNode *)(ulonglong)(uVar11 + 1);
      iVar5 = local_b0;
    }
    if (((int)uVar11 < 0) || (iVar5 <= (int)uVar11)) {
      if (param_1 == Replace) {
        if (param_2->Operation != None) {
          param_2->Operation = None;
        }
        iVar5 = (param_2->SubPropertyNodes).ArrayNum;
        if (iVar5 != 0) {
          DestructItems<FOverriddenPropertyNode,int>
                    ((FOverriddenPropertyNode *)(param_2->SubPropertyNodes).AllocatorInstance.Data,
                     iVar5);
          piVar1 = &(param_2->SubPropertyNodes).ArrayMax;
          (param_2->SubPropertyNodes).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,0,&(param_2->SubPropertyNodes).AllocatorInstance,0,piVar1);
          }
        }
      }
      pFVar8 = param_2;
      if (param_2->Operation != param_1) {
        param_2->Operation = param_1;
      }
    }
LAB_14210bff3:
    if (local_f8.SecondaryData != (ForElementType<FProperty_*>)0x0) {
      FMemory::Free((void *)local_f8.SecondaryData);
    }
  }
  return pFVar8;
}

// RestoreOverriddenPropertyOperation @ 14210c050

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::RestoreOverriddenPropertyOperation
          (FOverriddenPropertySet *this,EOverriddenPropertyOperation param_1,
          FArchiveSerializedPropertyChain *param_2,FProperty *param_3)

{
  FOverriddenPropertyNode *pFVar1;
  
  pFVar1 = RestoreOverriddenPropertyOperation(this,param_1,&this->RootNode,param_2,param_3);
  return pFVar1;
}

// RestoreOverriddenState @ 14210c080

void __thiscall
FOverriddenPropertySet::RestoreOverriddenState
          (FOverriddenPropertySet *this,FOverriddenPropertySet *param_1)

{
  this->bWasAdded = param_1->bWasAdded;
  return;
}

// RestoreSubObjectOperation @ 14210c0e0

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::RestoreSubObjectOperation
          (FOverriddenPropertySet *this,EOverriddenPropertyOperation param_1,
          FOverriddenPropertyNode *param_2,TNotNull<UObject_*> param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FOverriddenPropertyNode *pFVar5;
  FOverriddenPropertyNodeID local_28;
  
  FOverriddenPropertyNodeID::FOverriddenPropertyNodeID
            (&local_28,(TNotNull<UObject_const_*>)param_3.Val);
  pFVar5 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
           FindByKey<FOverriddenPropertyNodeID>(&param_2->SubPropertyNodes,&local_28);
  if (pFVar5 == (FOverriddenPropertyNode *)0x0) {
    if (param_2->Operation == None) {
      param_2->Operation = Modified;
    }
    iVar4 = (param_2->SubPropertyNodes).ArrayNum;
    piVar1 = &(param_2->SubPropertyNodes).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_2->SubPropertyNodes).AllocatorInstance,piVar1);
    }
    (param_2->SubPropertyNodes).ArrayNum = iVar4 + 1;
    pFVar5 = (FOverriddenPropertyNode *)
             ((param_2->SubPropertyNodes).AllocatorInstance.Data + (longlong)iVar4 * 0x38);
    FOverriddenPropertyPath::FOverriddenPropertyPath
              ((FOverriddenPropertyPath *)pFVar5,&local_28.Path);
    (pFVar5->NodeID).Object.WeakPtr = local_28.Object.WeakPtr;
    (pFVar5->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->SubPropertyNodes).ArrayNum = 0;
    (pFVar5->SubPropertyNodes).ArrayMax = 0;
    pFVar5->Operation = None;
  }
  if (pFVar5->Operation != param_1) {
    pFVar5->Operation = param_1;
  }
  if ((param_1 == Add) && (FOverridableManager::OverridableManager == (FOverridableManager *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverridableManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                       ,0x43,L"Expected the overridable manager to be created.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOverriddenPropertyNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
  }
  return pFVar5;
}

// RestoreSubPropertyOperation @ 14210c1f0

FOverriddenPropertyNode * __thiscall
FOverriddenPropertySet::RestoreSubPropertyOperation
          (FOverriddenPropertySet *this,EOverriddenPropertyOperation param_1,
          FOverriddenPropertyNode *param_2,FOverriddenPropertyNodeID *param_3)

{
  FOverriddenPropertyNode *pFVar1;
  
  pFVar1 = FOverriddenPropertyNode::FindOrAddNode(param_2,param_3,(bool *)0x0);
  if (pFVar1->Operation != param_1) {
    pFVar1->Operation = param_1;
  }
  return pFVar1;
}

// TryGetInstancedSubObjectValue @ 142117460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __thiscall
FOverriddenPropertySet::TryGetInstancedSubObjectValue
          (FOverriddenPropertySet *this,FObjectPropertyBase *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObjectBaseUtility *this_00;
  undefined8 *puVar3;
  UObject *pUVar4;
  undefined ***pppuVar5;
  undefined1 auStack_88 [32];
  UObjectBaseUtility *local_68 [2];
  code *local_58;
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 == (FObjectPropertyBase *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  else {
    this_00 = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x1f8))(param_1,param_2);
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<UObject_*_(__cdecl*)(UObject_*),UObject_*,UObject_*>::Call;
    pUVar4 = (UObject *)0x0;
    local_48 = &
               ___7__TFunction_OwnedObject_P6APEAVUObject__PEAV1__Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_40 = `FOverriddenPropertySet::TryGetInstancedSubObjectValue'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_30 = (undefined ***)0x0;
    if (((param_1->_padding_ & 0x2000000000000U) != 0) ||
       ((((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) != 0 &&
         (this_00 != (UObjectBaseUtility *)0x0)) &&
        (bVar2 = UObjectBaseUtility::IsIn(this_00,(this->Owner).field0_0x0.DebugPtr), bVar2)))) {
      local_68[0] = this_00;
      UE::Core::Private::Function::CheckCallable(local_58);
      pcVar1 = local_58;
      pppuVar5 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar5 = local_30;
      }
      puVar3 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
      if (pcVar1 == UE::Core::Private::Function::
                    TFunctionRefCaller<UObject_*_(__cdecl*)(UObject_*),UObject_*,UObject_*>::Call) {
        pUVar4 = (UObject *)(*(code *)*puVar3)(local_68[0]);
      }
      else {
        pUVar4 = (UObject *)(*pcVar1)(puVar3,local_68);
      }
    }
    if (local_58 != (code *)0x0) {
      pppuVar5 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar5 = local_30;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return pUVar4;
}

