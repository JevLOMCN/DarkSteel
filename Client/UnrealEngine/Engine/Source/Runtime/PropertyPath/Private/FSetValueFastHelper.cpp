// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// SetValue @ 1444928d0

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<int>::SetValue
          (FCachedPropertyPath *param_1,int *param_2)

{
  EClassCastFlags EVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FPropertyPathSegment *pFVar9;
  FFieldClass *pFVar10;
  FFieldObjectUnion FVar11;
  FFieldObjectUnion FVar12;
  
  pFVar9 = FCachedPropertyPath::GetLastSegment(param_1);
  FVar12 = (FFieldObjectUnion)(pFVar9->Field).Container.Field;
  if (((ulonglong)FVar12 & 1) == 0) {
    if ((FVar12 != (FField *)0x0) &&
       (EVar1 = (*(FFieldClass **)((longlong)FVar12 + 8))->CastFlags, (EVar1 >> 0xf & 1) != 0)) {
      if (((EVar1 >> 0x15 & 1) != 0) && (pFVar9->ArrayIndex != -1)) {
        FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)((longlong)FVar12 + 0x78))->Field;
        if ((FVar11 != (FFieldObjectUnion)0x0) &&
           (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
            CASTCLASS_None)) {
          FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
        }
        pFVar3 = (FVar11.Field)->ClassPrivate;
        pFVar10 = FIntProperty::StaticClass();
        if (pFVar3 != pFVar10) {
          return false;
        }
        piVar4 = param_1->CachedAddress;
        pFVar2 = *(FField **)((longlong)FVar12 + 0x78);
        if (piVar4 == param_2) {
          return true;
        }
        if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) != 0) {
          memcpy(piVar4,param_2,(longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4));
          return true;
        }
        (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,piVar4,param_2,1);
        return true;
      }
      goto LAB_1444929e8;
    }
  }
  else if (((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe));
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  FVar12.Field = (FField *)0x0;
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_1444929e8:
  FVar11 = FVar12;
  if ((FVar12.Field != (FField *)0x0) &&
     (((FVar12.Field)->ClassPrivate->CastFlags & CASTCLASS_FEnumProperty) != CASTCLASS_None)) {
    FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar12.Unknown + 0x70))->Field;
  }
  pFVar3 = (FVar11.Field)->ClassPrivate;
  pFVar10 = FIntProperty::StaticClass();
  if (pFVar3 != pFVar10) {
    return false;
  }
  cVar8 = (**(code **)((FVar12.Field)->_padding_ + 0x70))(FVar12.Field);
  if (cVar8 == '\0') {
    piVar4 = param_1->CachedAddress;
    if (piVar4 != param_2) {
      if ((*(uint *)(FVar12.Unknown + 0x38) >> 0x1e & 1) == 0) {
        (**(code **)((FVar12.Field)->_padding_ + 0xf0))(FVar12.Field,piVar4,param_2,1);
      }
      else {
        memcpy(piVar4,param_2,(longlong)*(int *)(FVar12.Unknown + 0x34));
      }
    }
    CallParentSetters(param_1);
  }
  else {
    (**(code **)((FVar12.Field)->_padding_ + 0x88))(FVar12.Field,param_1->CachedContainer,param_2);
  }
  return true;
}

// SetValue @ 144492aa0

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<float>::SetValue
          (FCachedPropertyPath *param_1,float *param_2)

{
  FFieldClass *pFVar1;
  EClassCastFlags EVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar10 = (pFVar8->Field).Container.Field;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FField *)0x0) &&
       (EVar2 = pFVar10->ClassPrivate->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if (((EVar2 >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar1 = (pFVar10[2].Next)->ClassPrivate;
        pFVar9 = FFloatProperty::StaticClass();
        if (pFVar1 != pFVar9) {
          return false;
        }
        pfVar3 = param_1->CachedAddress;
        pFVar10 = pFVar10[2].Next;
        if (pfVar3 == param_2) {
          return true;
        }
        if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) != 0) {
          memcpy(pfVar3,param_2,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
          return true;
        }
        (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,pfVar3,param_2,1);
        return true;
      }
      goto LAB_144492b0f;
    }
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FField *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_144492b0f:
  pFVar1 = pFVar10->ClassPrivate;
  pFVar9 = FFloatProperty::StaticClass();
  if (pFVar1 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10);
  if (cVar7 == '\0') {
    pfVar3 = param_1->CachedAddress;
    if (pfVar3 != param_2) {
      if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) == 0) {
        (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,pfVar3,param_2,1);
      }
      else {
        memcpy(pfVar3,param_2,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
      }
    }
    CallParentSetters(param_1);
  }
  else {
    (**(code **)(pFVar10->_padding_ + 0x88))(pFVar10,param_1->CachedContainer,param_2);
  }
  return true;
}

// SetValue @ 144492c30

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<TObjectPtr<UPropertyPathTestObject>_>::SetValue
          (FCachedPropertyPath *param_1,TObjectPtr<UPropertyPathTestObject> *param_2)

{
  EClassCastFlags EVar1;
  TObjectPtr<UPropertyPathTestObject> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FField *pFVar8;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar8 = (pFVar7->Field).Container.Field;
  if (((ulonglong)pFVar8 & 1) == 0) {
    if ((pFVar8 == (FField *)0x0) ||
       (EVar1 = pFVar8->ClassPrivate->CastFlags, (EVar1 >> 0xf & 1) == 0)) goto LAB_144492c72;
    if ((EVar1 >> 0x15 & 1) != 0) {
      if (pFVar7->ArrayIndex != -1) {
        pFVar8 = pFVar8[2].Next;
        if (pFVar8 == (FField *)0x0) {
          return false;
        }
        if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x10 & 1) == 0) {
          return false;
        }
        pTVar2 = param_1->CachedAddress;
        if (pTVar2 == param_2) {
          return true;
        }
        if ((*(uint *)&pFVar8[1].ClassPrivate >> 0x1e & 1) != 0) {
          memcpy(pTVar2,param_2,(longlong)*(int *)((longlong)&pFVar8[1]._padding_ + 4));
          return true;
        }
        (**(code **)(pFVar8->_padding_ + 0xf0))(pFVar8,pTVar2,param_2,1);
        return true;
      }
      goto LAB_144492ca6;
    }
  }
  else {
    if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
    }
LAB_144492c72:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar8 = (FField *)0x0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pFVar8 == (FField *)0x0) {
    return false;
  }
LAB_144492ca6:
  if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x10 & 1) == 0) {
    return false;
  }
  cVar6 = (**(code **)(pFVar8->_padding_ + 0x70))(pFVar8);
  if (cVar6 == '\0') {
    pTVar2 = param_1->CachedAddress;
    if (pTVar2 != param_2) {
      if ((*(uint *)&pFVar8[1].ClassPrivate >> 0x1e & 1) != 0) {
        memcpy(pTVar2,param_2,(longlong)*(int *)((longlong)&pFVar8[1]._padding_ + 4));
        CallParentSetters(param_1);
        return true;
      }
      (**(code **)(pFVar8->_padding_ + 0xf0))(pFVar8,pTVar2,param_2,1);
    }
    CallParentSetters(param_1);
    return true;
  }
  (**(code **)(pFVar8->_padding_ + 0x88))(pFVar8,param_1->CachedContainer,param_2);
  return true;
}

// SetValue @ 144492e20

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<FPropertyPathTestStruct>::SetValue
          (FCachedPropertyPath *param_1,FPropertyPathTestStruct *param_2)

{
  UScriptStruct *pUVar1;
  EClassCastFlags EVar2;
  FField *pFVar3;
  FPropertyPathTestStruct *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FPropertyPathSegment *pFVar9;
  UPackage *pUVar10;
  FField *pFVar11;
  
  pFVar9 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar11 = (pFVar9->Field).Container.Field;
  if (((ulonglong)pFVar11 & 1) == 0) {
    if ((pFVar11 == (FField *)0x0) ||
       (EVar2 = pFVar11->ClassPrivate->CastFlags, (EVar2 >> 0xf & 1) == 0)) goto LAB_144492e67;
    if ((EVar2 >> 0x15 & 1) == 0) goto LAB_144492e92;
    if (pFVar9->ArrayIndex == -1) goto LAB_144492e9b;
    pFVar3 = pFVar11[2].Next;
    if ((pFVar3 == (FField *)0x0) || (((uint)(int)pFVar3->ClassPrivate->CastFlags >> 0x14 & 1) == 0)
       ) goto LAB_144493055;
    if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_PropertyPath();
      Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar10,
                           L"PropertyPathTestStruct");
    }
    pUVar1 = (UScriptStruct *)pFVar3[2].Owner.Container.Field;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar6 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
              (UScriptStruct *)0x0;
    }
    else {
      bVar6 = pUVar1 == Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
    }
    if (!bVar6) goto LAB_144493055;
    pFVar4 = param_1->CachedAddress;
    pFVar11 = pFVar11[2].Next;
    if (pFVar4 != param_2) {
      if ((*(uint *)&pFVar11[1].ClassPrivate >> 0x1e & 1) != 0) {
        memcpy(pFVar4,param_2,(longlong)*(int *)((longlong)&pFVar11[1]._padding_ + 4));
        return true;
      }
      (**(code **)(pFVar11->_padding_ + 0xf0))(pFVar11,pFVar4,param_2,1);
      return true;
    }
LAB_144493051:
    bVar6 = true;
  }
  else {
    if (((UObject *)((ulonglong)pFVar11 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar11 & 0xfffffffffffffffe));
    }
LAB_144492e67:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar11 = (FField *)0x0;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
LAB_144492e92:
    if (pFVar11 != (FField *)0x0) {
LAB_144492e9b:
      if (((uint)(int)pFVar11->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar10,
                               L"PropertyPathTestStruct");
        }
        pUVar1 = (UScriptStruct *)pFVar11[2].Owner.Container.Field;
        if (pUVar1 == (UScriptStruct *)0x0) {
          bVar6 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar6 = pUVar1 == Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton
          ;
        }
        if (bVar6) {
          cVar8 = (**(code **)(pFVar11->_padding_ + 0x70))(pFVar11);
          if (cVar8 != '\0') {
            (**(code **)(pFVar11->_padding_ + 0x88))(pFVar11,param_1->CachedContainer,param_2);
            return true;
          }
          pFVar4 = param_1->CachedAddress;
          if (pFVar4 != param_2) {
            if ((*(uint *)&pFVar11[1].ClassPrivate >> 0x1e & 1) != 0) {
              memcpy(pFVar4,param_2,(longlong)*(int *)((longlong)&pFVar11[1]._padding_ + 4));
              CallParentSetters(param_1);
              return true;
            }
            (**(code **)(pFVar11->_padding_ + 0xf0))(pFVar11,pFVar4,param_2,1);
          }
          CallParentSetters(param_1);
          goto LAB_144493051;
        }
      }
    }
LAB_144493055:
    bVar6 = false;
  }
  return bVar6;
}

// SetValue @ 144493080

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<PropertyPathHelpersInternal::FPropertyStructView>::
SetValue(FCachedPropertyPath *param_1,FPropertyStructView *param_2)

{
  EClassCastFlags EVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FField *pFVar8;
  uchar *_Src;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar8 = (pFVar7->Field).Container.Field;
  if (((ulonglong)pFVar8 & 1) == 0) {
    if ((pFVar8 == (FField *)0x0) ||
       (EVar1 = pFVar8->ClassPrivate->CastFlags, (EVar1 >> 0xf & 1) == 0)) goto LAB_1444930be;
    if ((EVar1 >> 0x15 & 1) != 0) {
      _Src = param_2->Memory;
      if (pFVar7->ArrayIndex != -1) {
        puVar2 = param_1->CachedAddress;
        pFVar8 = pFVar8[2].Next;
        if (puVar2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar8[1].ClassPrivate >> 0x1e & 1) != 0) {
          memcpy(puVar2,_Src,(longlong)*(int *)((longlong)&pFVar8[1]._padding_ + 4));
          return true;
        }
        (**(code **)(pFVar8->_padding_ + 0xf0))(pFVar8,puVar2,_Src,1);
        return true;
      }
      goto LAB_1444930ed;
    }
  }
  else {
    if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
    }
LAB_1444930be:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar8 = (FField *)0x0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  _Src = param_2->Memory;
LAB_1444930ed:
  cVar6 = (**(code **)(pFVar8->_padding_ + 0x70))(pFVar8);
  if (cVar6 == '\0') {
    puVar2 = param_1->CachedAddress;
    if (puVar2 != _Src) {
      if ((*(uint *)&pFVar8[1].ClassPrivate >> 0x1e & 1) == 0) {
        (**(code **)(pFVar8->_padding_ + 0xf0))(pFVar8,puVar2,_Src,1);
      }
      else {
        memcpy(puVar2,_Src,(longlong)*(int *)((longlong)&pFVar8[1]._padding_ + 4));
      }
    }
    CallParentSetters(param_1);
    return true;
  }
  (**(code **)(pFVar8->_padding_ + 0x88))(pFVar8,param_1->CachedContainer,_Src);
  return true;
}

// SetValue @ 144493210

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<FString>::SetValue
          (FCachedPropertyPath *param_1,FString *param_2)

{
  FFieldClass *pFVar1;
  EClassCastFlags EVar2;
  FString *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar10 = (pFVar8->Field).Container.Field;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FField *)0x0) &&
       (EVar2 = pFVar10->ClassPrivate->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if (((EVar2 >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar1 = (pFVar10[2].Next)->ClassPrivate;
        pFVar9 = FStrProperty::StaticClass();
        if (pFVar1 != pFVar9) {
          return false;
        }
        pFVar3 = param_1->CachedAddress;
        pFVar10 = pFVar10[2].Next;
        if (pFVar3 == param_2) {
          return true;
        }
        if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) != 0) {
          memcpy(pFVar3,param_2,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
          return true;
        }
        (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,pFVar3,param_2,1);
        return true;
      }
      goto LAB_14449327f;
    }
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FField *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14449327f:
  pFVar1 = pFVar10->ClassPrivate;
  pFVar9 = FStrProperty::StaticClass();
  if (pFVar1 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10);
  if (cVar7 == '\0') {
    pFVar3 = param_1->CachedAddress;
    if (pFVar3 != param_2) {
      if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) == 0) {
        (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,pFVar3,param_2,1);
      }
      else {
        memcpy(pFVar3,param_2,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
      }
    }
    CallParentSetters(param_1);
  }
  else {
    (**(code **)(pFVar10->_padding_ + 0x88))(pFVar10,param_1->CachedContainer,param_2);
  }
  return true;
}

// SetValue @ 1444933a0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<enum_EPropertyPathTestEnum>::SetValue
          (FCachedPropertyPath *param_1,EPropertyPathTestEnum *param_2)

{
  EClassCastFlags EVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  EPropertyPathTestEnum *pEVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FPropertyPathSegment *pFVar9;
  FFieldClass *pFVar10;
  FFieldObjectUnion FVar11;
  FFieldObjectUnion FVar12;
  
  pFVar9 = FCachedPropertyPath::GetLastSegment(param_1);
  FVar12 = (FFieldObjectUnion)(pFVar9->Field).Container.Field;
  if (((ulonglong)FVar12 & 1) == 0) {
    if ((FVar12 == (FField *)0x0) ||
       (EVar1 = (*(FFieldClass **)((longlong)FVar12 + 8))->CastFlags, (EVar1 >> 0xf & 1) == 0))
    goto LAB_1444933e4;
    if (((EVar1 >> 0x15 & 1) != 0) && (pFVar9->ArrayIndex != -1)) {
      FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)((longlong)FVar12 + 0x78))->Field;
      if (FVar11 != (FFieldObjectUnion)0x0) {
        if (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
            CASTCLASS_None) {
          if ((FVar11.Field != (FField *)0x0) &&
             (((uint)(int)(FVar11.Field)->ClassPrivate->CastFlags >> 0x11 & 1) != 0)) {
            bVar6 = *(char *)(FVar11.Unknown + 0x73) != -1;
            goto LAB_1444934a0;
          }
        }
        else {
          FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
        }
      }
      pFVar3 = (FVar11.Field)->ClassPrivate;
      pFVar10 = FByteProperty::StaticClass();
      bVar6 = pFVar3 == pFVar10;
LAB_1444934a0:
      if (!bVar6) {
        return false;
      }
      pEVar4 = param_1->CachedAddress;
      pFVar2 = *(FField **)((longlong)FVar12 + 0x78);
      if (pEVar4 == param_2) {
        return true;
      }
      if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) != 0) {
        memcpy(pEVar4,param_2,(longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4));
        return true;
      }
      (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,pEVar4,param_2,1);
      return true;
    }
  }
  else {
    if (((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe));
    }
LAB_1444933e4:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    FVar12.Field = (FField *)0x0;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if ((FVar12.Field == (FField *)0x0) ||
     (((FVar12.Field)->ClassPrivate->CastFlags & CASTCLASS_FEnumProperty) == CASTCLASS_None)) {
    FVar11 = FVar12;
    if ((FVar12.Field != (FField *)0x0) &&
       (((uint)(int)(FVar12.Field)->ClassPrivate->CastFlags >> 0x11 & 1) != 0)) {
      bVar6 = *(char *)(FVar12.Unknown + 0x73) != -1;
      goto LAB_14449354b;
    }
  }
  else {
    FVar11.Field = ((FFieldObjectUnion *)(FVar12.Unknown + 0x70))->Field;
  }
  pFVar3 = (FVar11.Field)->ClassPrivate;
  pFVar10 = FByteProperty::StaticClass();
  bVar6 = pFVar3 == pFVar10;
LAB_14449354b:
  if (!bVar6) {
    return false;
  }
  cVar8 = (**(code **)((FVar12.Field)->_padding_ + 0x70))(FVar12.Field);
  if (cVar8 == '\0') {
    pEVar4 = param_1->CachedAddress;
    if (pEVar4 != param_2) {
      if ((*(uint *)(FVar12.Unknown + 0x38) >> 0x1e & 1) == 0) {
        (**(code **)((FVar12.Field)->_padding_ + 0xf0))(FVar12.Field,pEVar4,param_2,1);
      }
      else {
        memcpy(pEVar4,param_2,(longlong)*(int *)(FVar12.Unknown + 0x34));
      }
    }
    CallParentSetters(param_1);
  }
  else {
    (**(code **)((FVar12.Field)->_padding_ + 0x88))(FVar12.Field,param_1->CachedContainer,param_2);
  }
  return true;
}

// SetValue @ 1444935e0

bool __cdecl
PropertyPathHelpersInternal::FSetValueFastHelper<bool>::SetValue
          (FCachedPropertyPath *param_1,bool *param_2)

{
  FFieldClass *pFVar1;
  EClassCastFlags EVar2;
  bool *_Dst;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FBoolProperty *this;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  this = (FBoolProperty *)(pFVar8->Field).Container.Field;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FBoolProperty *)0x0) &&
       (EVar2 = ((FFieldClass *)this->_padding_)->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if (((EVar2 >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar1 = ((FField *)this[1]._padding_)->ClassPrivate;
        pFVar9 = FBoolProperty::StaticClass();
        if (pFVar1 != pFVar9) {
          return false;
        }
        _Dst = param_1->CachedAddress;
        pFVar3 = (FField *)this[1]._padding_;
        if (_Dst == param_2) {
          return true;
        }
        if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,param_2,1);
          return true;
        }
        memcpy(_Dst,param_2,(longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4));
        return true;
      }
      goto LAB_14449365d;
    }
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  this = (FBoolProperty *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14449365d:
  pFVar1 = (FFieldClass *)this->_padding_;
  pFVar9 = FBoolProperty::StaticClass();
  if (pFVar1 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x70))(this);
  if (cVar7 == '\0') {
    if ((((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0x11 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx"),
       this = (FBoolProperty *)0x0, bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FBoolProperty::SetPropertyValue(this,param_1->CachedAddress,*param_2);
    CallParentSetters(param_1);
    return true;
  }
  (**(code **)(this->_padding_ + 0x88))(this,param_1->CachedContainer,param_2);
  return true;
}

