// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FCollisionFacade @ 143f88970

FCollisionFacade * __thiscall
GeometryCollection::Facades::FCollisionFacade::FCollisionFacade
          (FCollisionFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<bool> *pTVar4;
  FCollisionFacade *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  (this->IsCollisionEnabledAttribute).ConstCollection = param_1;
  (this->IsCollisionEnabledAttribute).Collection = param_1;
  (this->IsCollisionEnabledAttribute).Name = IsCollisionEnabledAttributeName;
  (this->IsCollisionEnabledAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->IsCollisionEnabledAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsCollisionEnabledAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>
                     (param_1,IsCollisionEnabledAttributeName,FGeometryCollection::VerticesGroup);
  (this->IsCollisionEnabledAttribute).AttributeArray = pTVar4;
  (this->IsCollisionEnabledAttribute).ConstAttributeArray = pTVar4;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCollisionFacade.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCollisionFacade *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((this->IsCollisionEnabledAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCollisionFacade *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->IsCollisionEnabledAttribute).Collection,
                     (this->IsCollisionEnabledAttribute).Name,
                     (this->IsCollisionEnabledAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<bool>::Add(&this->IsCollisionEnabledAttribute,MakePersistent,(FName)0x0);
    pTVar4 = (this->IsCollisionEnabledAttribute).AttributeArray;
    iVar7 = 0;
    if (0 < *(int *)&pTVar4->field_0x28) {
      do {
        if ((iVar7 < 0) || (*(int *)&pTVar4->field_0x28 <= iVar7)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FCollisionFacade *)(*pcVar1)();
            return pFVar5;
          }
        }
        puVar6 = &pTVar4->field_0x10;
        if (*(undefined1 **)&pTVar4->field_0x20 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&pTVar4->field_0x20;
        }
        iVar3 = iVar7;
        if (iVar7 < 0) {
          iVar3 = iVar7 + 0x1f;
        }
        iVar8 = iVar7 + 1;
        *(uint *)(puVar6 + (longlong)(iVar3 >> 5) * 4) =
             *(uint *)(puVar6 + (longlong)(iVar3 >> 5) * 4) & ~(1 << ((byte)iVar7 & 0x1f));
        iVar7 = iVar8;
      } while (iVar8 < *(int *)&pTVar4->field_0x28);
    }
    return this;
  }
  return this;
}

// FCollisionFacade @ 143f88b00

FCollisionFacade * __thiscall
GeometryCollection::Facades::FCollisionFacade::FCollisionFacade
          (FCollisionFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollisionFacade *pFVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->IsCollisionEnabledAttribute).ConstCollection = param_1;
  (this->IsCollisionEnabledAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IsCollisionEnabledAttribute).Name = IsCollisionEnabledAttributeName;
  (this->IsCollisionEnabledAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->IsCollisionEnabledAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsCollisionEnabledAttribute).DefaultGroupDependency.Number = 0;
  (this->IsCollisionEnabledAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_18 = IsCollisionEnabledAttributeName;
  local_10 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x06')) {
    pTVar1 = *(TManagedArray<bool> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<bool> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCollisionFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->IsCollisionEnabledAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->IsCollisionEnabledAttribute).ConstAttributeArray = (TManagedArray<bool> *)0x0;
  return this;
}

// DefineSchema @ 143fa9540

void __thiscall GeometryCollection::Facades::FCollisionFacade::DefineSchema(FCollisionFacade *this)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCollisionFacade.cpp"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->IsCollisionEnabledAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FManagedArrayCollection::HasAttribute
                    ((this->IsCollisionEnabledAttribute).Collection,
                     (this->IsCollisionEnabledAttribute).Name,
                     (this->IsCollisionEnabledAttribute).Group);
  if (!bVar3) {
    TManagedArrayAccessor<bool>::Add(&this->IsCollisionEnabledAttribute,MakePersistent,(FName)0x0);
    pTVar1 = (this->IsCollisionEnabledAttribute).AttributeArray;
    iVar6 = 0;
    if (0 < *(int *)&pTVar1->field_0x28) {
      do {
        if (((iVar6 < 0) || (*(int *)&pTVar1->field_0x28 <= iVar6)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar5 = &pTVar1->field_0x10;
        if (*(undefined1 **)&pTVar1->field_0x20 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&pTVar1->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        iVar7 = iVar6 + 1;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & ~(1 << ((byte)iVar6 & 0x1f));
        iVar6 = iVar7;
      } while (iVar7 < *(int *)&pTVar1->field_0x28);
    }
  }
  return;
}

// IsCollisionEnabled @ 143fb7700

bool __thiscall
GeometryCollection::Facades::FCollisionFacade::IsCollisionEnabled
          (FCollisionFacade *this,int param_1)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  pTVar1 = (this->IsCollisionEnabledAttribute).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<bool> *)0x0) && (-1 < param_1)) {
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar5) {
      if ((this->IsCollisionEnabledAttribute).ConstAttributeArray == (TManagedArray<bool> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pTVar1 = (this->IsCollisionEnabledAttribute).ConstAttributeArray;
      if (*(int *)&pTVar1->field_0x28 <= param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      puVar6 = *(undefined1 **)&pTVar1->field_0x20;
      if (*(undefined1 **)&pTVar1->field_0x20 == (undefined1 *)0x0) {
        puVar6 = &pTVar1->field_0x10;
      }
      return (*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0
      ;
    }
  }
  return false;
}

// IsValid @ 143fb7cb0

bool __thiscall GeometryCollection::Facades::FCollisionFacade::IsValid(FCollisionFacade *this)

{
  return (this->IsCollisionEnabledAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0;
}

// SetCollisionEnabled @ 143fc7f30

void __thiscall
GeometryCollection::Facades::FCollisionFacade::SetCollisionEnabled
          (FCollisionFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TManagedArray<bool> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCollisionFacade.cpp"
                       ,0x2d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((this->IsCollisionEnabledAttribute).AttributeArray == (TManagedArray<bool> *)0x0) ||
     ((this->IsCollisionEnabledAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ((this->IsCollisionEnabledAttribute).AttributeArray)->field_0x8 = 1;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pTVar4 = (this->IsCollisionEnabledAttribute).AttributeArray;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    iVar3 = *(int *)pFVar8;
    if ((this->IsCollisionEnabledAttribute).ConstAttributeArray == (TManagedArray<bool> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x3b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (-1 < iVar3) {
      iVar7 = (**(code **)(*(longlong *)(this->IsCollisionEnabledAttribute).ConstAttributeArray +
                          0x60))();
      if (iVar3 < iVar7) {
        if (*(int *)&pTVar4->field_0x28 <= iVar3) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puVar9 = &pTVar4->field_0x10;
        if (*(undefined1 **)&pTVar4->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&pTVar4->field_0x20;
        }
        iVar7 = iVar3;
        if (iVar3 < 0) {
          iVar7 = iVar3 + 0x1f;
        }
        *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) | 1 << ((byte)iVar3 & 0x1f);
      }
    }
    pFVar8 = pFVar8 + 4;
  }
  return;
}

