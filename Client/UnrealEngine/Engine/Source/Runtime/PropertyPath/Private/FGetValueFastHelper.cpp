// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 7

// GetValue @ 14448e5c0

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<int>::GetValue
          (FCachedPropertyPath *param_1,int *param_2,FProperty **param_3)

{
  FFieldClass *pFVar1;
  int *_Src;
  FField *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  FFieldClass **ppFVar9;
  FFieldObjectUnion FVar10;
  FFieldObjectUnion FVar11;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_1);
  FVar10 = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  if (((ulonglong)FVar10 & 1) == 0) {
    if ((FVar10 != (FField *)0x0) &&
       (((uint)(int)(*(FFieldClass **)((longlong)FVar10 + 8))->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = (FProperty *)FVar10;
      ppFVar9 = (FFieldClass **)((longlong)FVar10 + 8);
      if ((((uint)(int)(*ppFVar9)->CastFlags >> 0x15 & 1) != 0) && (pFVar7->ArrayIndex != -1)) {
        FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)((longlong)FVar10 + 0x78))->Field;
        if ((FVar11 != (FFieldObjectUnion)0x0) &&
           (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
            CASTCLASS_None)) {
          FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
        }
        pFVar1 = (FVar11.Field)->ClassPrivate;
        pFVar8 = FIntProperty::StaticClass();
        if (pFVar1 != pFVar8) {
          return false;
        }
        _Src = param_1->CachedAddress;
        pFVar2 = *(FField **)((longlong)FVar10 + 0x78);
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448e64c;
    }
  }
  else if (((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar9 = (FFieldClass **)&DAT_00000008;
  *param_3 = (FProperty *)0x0;
  FVar10.Field = (FField *)0x0;
LAB_14448e64c:
  if ((FVar10.Field != (FField *)0x0) &&
     (((*ppFVar9)->CastFlags & CASTCLASS_FEnumProperty) != CASTCLASS_None)) {
    FVar10 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar10.Unknown + 0x70))->Field;
  }
  pFVar1 = (FVar10.Field)->ClassPrivate;
  pFVar8 = FIntProperty::StaticClass();
  if (pFVar1 == pFVar8) {
    cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
    if (cVar6 == '\0') {
      CallParentGetters(param_2,param_1,param_1->CachedAddress);
      return true;
    }
    (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
    return true;
  }
  return false;
}

// GetValue @ 14448e790

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<float>::GetValue
          (FCachedPropertyPath *param_1,float *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  float *_Src;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FFieldClass **ppFVar10;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar1 = (FProperty *)(pFVar8->Field).Container.Field;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = pFVar1;
      ppFVar10 = (FFieldClass **)&pFVar1->_padding_;
      if ((((uint)(int)(*ppFVar10)->CastFlags >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar2 = ((FField *)pFVar1[1]._padding_)->ClassPrivate;
        pFVar9 = FFloatProperty::StaticClass();
        if (pFVar2 != pFVar9) {
          return false;
        }
        _Src = param_1->CachedAddress;
        pFVar3 = (FField *)pFVar1[1]._padding_;
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448e81a;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  *param_3 = (FProperty *)0x0;
  ppFVar10 = (FFieldClass **)&DAT_00000008;
LAB_14448e81a:
  pFVar2 = *ppFVar10;
  pFVar9 = FFloatProperty::StaticClass();
  if (pFVar2 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar7 == '\0') {
    CallParentGetters(param_2,param_1,param_1->CachedAddress);
    return true;
  }
  (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
  return true;
}

// GetValue @ 14448e910

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<TObjectPtr<UPropertyPathTestObject>_>::GetValue
          (FCachedPropertyPath *param_1,TObjectPtr<UPropertyPathTestObject> *param_2,
          FProperty **param_3)

{
  FField *pFVar1;
  TObjectPtr<UPropertyPathTestObject> *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass **ppFVar7;
  FProperty *pFVar8;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar8 = (FProperty *)(pFVar6->Field).Container.Field;
  if (((ulonglong)pFVar8 & 1) == 0) {
    if ((pFVar8 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar8->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = pFVar8;
      ppFVar7 = (FFieldClass **)&pFVar8->_padding_;
      if ((((uint)(int)(*ppFVar7)->CastFlags >> 0x15 & 1) != 0) && (pFVar6->ArrayIndex != -1)) {
        pFVar1 = (FField *)pFVar8[1]._padding_;
        if (pFVar1 == (FField *)0x0) {
          return false;
        }
        if (((uint)(int)pFVar1->ClassPrivate->CastFlags >> 0x10 & 1) == 0) {
          return false;
        }
        _Src = param_1->CachedAddress;
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar1[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448e99d;
    }
  }
  else if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  ppFVar7 = (FFieldClass **)&DAT_00000008;
  *param_3 = (FProperty *)0x0;
  pFVar8 = (FProperty *)0x0;
LAB_14448e99d:
  if ((pFVar8 != (FProperty *)0x0) && (((uint)(int)(*ppFVar7)->CastFlags >> 0x10 & 1) != 0)) {
    cVar5 = (**(code **)(pFVar8->_padding_ + 0x78))(pFVar8);
    if (cVar5 == '\0') {
      CallParentGetters(param_2,param_1,param_1->CachedAddress);
      return true;
    }
    (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
    return true;
  }
  return false;
}

// GetValue @ 14448eab0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FPropertyPathTestStruct>::GetValue
          (FCachedPropertyPath *param_1,FPropertyPathTestStruct *param_2,FProperty **param_3)

{
  FField *pFVar1;
  UScriptStruct *pUVar2;
  FPropertyPathTestStruct *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  UPackage *pUVar8;
  FFieldClass **ppFVar9;
  FProperty *pFVar10;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar10 = (FProperty *)(pFVar7->Field).Container.Field;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar10->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = pFVar10;
      ppFVar9 = (FFieldClass **)&pFVar10->_padding_;
      if ((((uint)(int)(*ppFVar9)->CastFlags >> 0x15 & 1) != 0) && (pFVar7->ArrayIndex != -1)) {
        pFVar1 = (FField *)pFVar10[1]._padding_;
        if (pFVar1 == (FField *)0x0) {
          return false;
        }
        if (((uint)(int)pFVar1->ClassPrivate->CastFlags >> 0x14 & 1) == 0) {
          return false;
        }
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar8,
                               L"PropertyPathTestStruct");
        }
        pUVar2 = (UScriptStruct *)pFVar1[2].Owner.Container.Field;
        if (pUVar2 == (UScriptStruct *)0x0) {
          bVar4 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar4 = pUVar2 == Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton
          ;
        }
        if (!bVar4) {
          return false;
        }
        _Src = param_1->CachedAddress;
        pFVar1 = (FField *)pFVar10[1]._padding_;
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar1[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448eb3b;
    }
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar9 = (FFieldClass **)&DAT_00000008;
  *param_3 = (FProperty *)0x0;
  pFVar10 = (FProperty *)0x0;
LAB_14448eb3b:
  if ((pFVar10 != (FProperty *)0x0) && (((uint)(int)(*ppFVar9)->CastFlags >> 0x14 & 1) != 0)) {
    if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_PropertyPath();
      Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar8,
                           L"PropertyPathTestStruct");
    }
    if (((FFieldObjectUnion *)(pFVar10 + 1))->Field == (FField *)0x0) {
      bVar4 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
              (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)((FFieldObjectUnion *)(pFVar10 + 1))->Field ==
              Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
    }
    if (bVar4) {
      cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
      if (cVar6 == '\0') {
        CallParentGetters(param_2,param_1,param_1->CachedAddress);
        return true;
      }
      (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
      return true;
    }
  }
  return false;
}

// GetValue @ 14448ecf0

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<TEnumAsByte<enum_EPropertyPathTestEnum>_>::GetValue
          (FCachedPropertyPath *param_1,TEnumAsByte<EPropertyPathTestEnum> *param_2,
          FProperty **param_3)

{
  FFieldClass *pFVar1;
  TEnumAsByte<EPropertyPathTestEnum> *_Src;
  FField *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  FFieldClass **ppFVar9;
  FFieldObjectUnion FVar10;
  FFieldObjectUnion FVar11;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_1);
  FVar10 = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  if (((ulonglong)FVar10 & 1) == 0) {
    if ((FVar10 == (FField *)0x0) ||
       (((uint)(int)(*(FFieldClass **)((longlong)FVar10 + 8))->CastFlags >> 0xf & 1) == 0))
    goto LAB_14448ed43;
    *param_3 = (FProperty *)FVar10;
    ppFVar9 = (FFieldClass **)((longlong)FVar10 + 8);
    if (((uint)(int)(*ppFVar9)->CastFlags >> 0x15 & 1) == 0) goto LAB_14448ed7c;
    if (pFVar7->ArrayIndex != -1) {
      FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)((longlong)FVar10 + 0x78))->Field;
      if (FVar11 != (FFieldObjectUnion)0x0) {
        if (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
            CASTCLASS_None) {
          if ((FVar11.Field != (FField *)0x0) &&
             (((uint)(int)(FVar11.Field)->ClassPrivate->CastFlags >> 0x11 & 1) != 0)) {
            bVar4 = *(char *)(FVar11.Unknown + 0x73) != -1;
            goto LAB_14448ee52;
          }
        }
        else {
          FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
        }
      }
      pFVar1 = (FVar11.Field)->ClassPrivate;
      pFVar8 = FByteProperty::StaticClass();
      bVar4 = pFVar1 == pFVar8;
LAB_14448ee52:
      if (!bVar4) {
        return false;
      }
      _Src = param_1->CachedAddress;
      pFVar2 = *(FField **)((longlong)FVar10 + 0x78);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) == 0) {
        (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4));
      return true;
    }
LAB_14448ed84:
    if (((*ppFVar9)->CastFlags & CASTCLASS_FEnumProperty) == CASTCLASS_None) {
      if (((uint)(int)(*ppFVar9)->CastFlags >> 0x11 & 1) != 0) {
        bVar4 = *(char *)(FVar10.Unknown + 0x73) != -1;
        goto LAB_14448edae;
      }
    }
    else {
      FVar10 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar10.Unknown + 0x70))->Field;
    }
  }
  else {
    if (((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe));
    }
LAB_14448ed43:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    ppFVar9 = (FFieldClass **)&DAT_00000008;
    *param_3 = (FProperty *)0x0;
    FVar10.Field = (FField *)0x0;
LAB_14448ed7c:
    if (FVar10.Field != (FField *)0x0) goto LAB_14448ed84;
  }
  pFVar1 = (FVar10.Field)->ClassPrivate;
  pFVar8 = FByteProperty::StaticClass();
  bVar4 = pFVar1 == pFVar8;
LAB_14448edae:
  if (!bVar4) {
    return false;
  }
  cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar6 == '\0') {
    CallParentGetters(param_2,param_1,param_1->CachedAddress);
    return true;
  }
  (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
  return true;
}

// GetValue @ 14448ef10

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FString>::GetValue
          (FCachedPropertyPath *param_1,FString *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  FString *_Src;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FFieldClass **ppFVar10;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar1 = (FProperty *)(pFVar8->Field).Container.Field;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = pFVar1;
      ppFVar10 = (FFieldClass **)&pFVar1->_padding_;
      if ((((uint)(int)(*ppFVar10)->CastFlags >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar2 = ((FField *)pFVar1[1]._padding_)->ClassPrivate;
        pFVar9 = FStrProperty::StaticClass();
        if (pFVar2 != pFVar9) {
          return false;
        }
        _Src = param_1->CachedAddress;
        pFVar3 = (FField *)pFVar1[1]._padding_;
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448ef9a;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  *param_3 = (FProperty *)0x0;
  ppFVar10 = (FFieldClass **)&DAT_00000008;
LAB_14448ef9a:
  pFVar2 = *ppFVar10;
  pFVar9 = FStrProperty::StaticClass();
  if (pFVar2 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar7 == '\0') {
    CallParentGetters(param_2,param_1,param_1->CachedAddress);
    return true;
  }
  (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
  return true;
}

// GetValue @ 14448f090

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<bool>::GetValue
          (FCachedPropertyPath *param_1,bool *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  bool *_Src;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  FFieldClass **ppFVar10;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_1);
  pFVar1 = (FProperty *)(pFVar8->Field).Container.Field;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      *param_3 = pFVar1;
      ppFVar10 = (FFieldClass **)&pFVar1->_padding_;
      if ((((uint)(int)(*ppFVar10)->CastFlags >> 0x15 & 1) != 0) && (pFVar8->ArrayIndex != -1)) {
        pFVar2 = ((FField *)pFVar1[1]._padding_)->ClassPrivate;
        pFVar9 = FBoolProperty::StaticClass();
        if (pFVar2 != pFVar9) {
          return false;
        }
        _Src = param_1->CachedAddress;
        pFVar3 = (FField *)pFVar1[1]._padding_;
        if (param_2 == _Src) {
          return true;
        }
        if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,param_2,_Src,1);
          return true;
        }
        memcpy(param_2,_Src,(longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4));
        return true;
      }
      goto LAB_14448f11a;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  *param_3 = (FProperty *)0x0;
  ppFVar10 = (FFieldClass **)&DAT_00000008;
LAB_14448f11a:
  pFVar2 = *ppFVar10;
  pFVar9 = FBoolProperty::StaticClass();
  if (pFVar2 != pFVar9) {
    return false;
  }
  cVar7 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar7 == '\0') {
    CallParentGetters(param_2,param_1,param_1->CachedAddress);
    return true;
  }
  (**(code **)((*param_3)->_padding_ + 0x90))(*param_3,param_1->CachedContainer,param_2);
  return true;
}

