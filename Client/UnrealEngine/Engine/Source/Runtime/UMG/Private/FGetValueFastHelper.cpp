// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// GetValue @ 146925450

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<unsigned_char>::GetValue
          (FCachedPropertyPath *param_1,uchar *param_2,FProperty **param_3)

{
  FFieldClass *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  FPropertyPathSegment *this;
  FFieldVariant FVar7;
  FFieldClass *pFVar8;
  uchar *_Src;
  void *pvVar9;
  longlong lVar10;
  FProperty *pFVar11;
  bool bVar12;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar7 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar7.Container & 1) == 0) &&
      (pFVar11 = *(FProperty **)FVar7.Container, pFVar11 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar11;
    if (((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar6 = FPropertyPathSegment::GetArrayIndex(this), iVar6 != -1)) {
      lVar10 = pFVar11[1]._padding_;
      if (lVar10 != 0) {
        if ((*(ulonglong *)(*(longlong *)(lVar10 + 8) + 0x18) & 0x1000000000000) == 0) {
          if ((lVar10 != 0) && ((*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) >> 0x11 & 1) != 0)) {
            bVar12 = *(char *)(lVar10 + 0x73) != -1;
            goto LAB_1469254fd;
          }
        }
        else {
          lVar10 = *(longlong *)(lVar10 + 0x70);
        }
      }
      pFVar1 = *(FFieldClass **)(lVar10 + 8);
      pFVar8 = FByteProperty::StaticClass();
      bVar12 = pFVar1 == pFVar8;
LAB_1469254fd:
      if (!bVar12) {
        return false;
      }
      plVar2 = (longlong *)pFVar11[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar2 + 0x34));
      return true;
    }
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
    *param_3 = (FProperty *)0x0;
  }
  pFVar11 = *param_3;
  if (pFVar11 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar11->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if ((pFVar11 != (FProperty *)0x0) && ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x11 & 1) != 0)
         ) {
        bVar12 = *(char *)((longlong)&pFVar11[1]._padding_ + 3) != -1;
        goto LAB_1469255d8;
      }
    }
    else {
      pFVar11 = (FProperty *)pFVar11[1]._padding_;
    }
  }
  pFVar1 = (FFieldClass *)pFVar11->_padding_;
  pFVar8 = FByteProperty::StaticClass();
  bVar12 = pFVar1 == pFVar8;
LAB_1469255d8:
  if (!bVar12) {
    return false;
  }
  cVar5 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar5 == '\0') {
    pvVar9 = FCachedPropertyPath::GetCachedAddress(param_1);
    CallParentGetters(param_2,param_1,pvVar9);
    return true;
  }
  pFVar11 = *param_3;
  pcVar3 = *(code **)(pFVar11->_padding_ + 0x90);
  pvVar9 = FCachedPropertyPath::GetCachedContainer(param_1);
  (*pcVar3)(pFVar11,pvVar9,param_2);
  return true;
}

// GetValue @ 146925660

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<double>::GetValue
          (FCachedPropertyPath *param_1,double *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  FPropertyPathSegment *this;
  FFieldVariant FVar9;
  FFieldClass *pFVar10;
  double *_Src;
  void *pvVar11;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar9 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar9.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar9.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar8 = FPropertyPathSegment::GetArrayIndex(this), iVar8 != -1)) {
      pFVar2 = *(FFieldClass **)(pFVar1[1]._padding_ + 8);
      pFVar10 = FDoubleProperty::StaticClass();
      if (pFVar2 != pFVar10) {
        return false;
      }
      plVar3 = (longlong *)pFVar1[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
      return true;
    }
  }
  else {
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
  }
  pFVar2 = (FFieldClass *)(*param_3)->_padding_;
  pFVar10 = FDoubleProperty::StaticClass();
  if (pFVar2 != pFVar10) {
    return false;
  }
  cVar7 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar7 == '\0') {
    pvVar11 = FCachedPropertyPath::GetCachedAddress(param_1);
    CallParentGetters(param_2,param_1,pvVar11);
    return true;
  }
  pFVar1 = *param_3;
  pcVar4 = *(code **)(pFVar1->_padding_ + 0x90);
  pvVar11 = FCachedPropertyPath::GetCachedContainer(param_1);
  (*pcVar4)(pFVar1,pvVar11,param_2);
  return true;
}

// GetValue @ 1469257f0

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<UObject_*>::GetValue
          (FCachedPropertyPath *param_1,UObject **param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldVariant FVar8;
  UObject **_Src;
  void *pvVar9;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar8 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar8.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar8.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar7 = FPropertyPathSegment::GetArrayIndex(this), iVar7 != -1)) {
      plVar2 = (longlong *)pFVar1[1]._padding_;
      if (plVar2 == (longlong *)0x0) {
        return false;
      }
      if ((*(uint *)(plVar2[1] + 0x18) >> 0x10 & 1) == 0) {
        return false;
      }
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar2 + 0x34));
      return true;
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *param_3 = (FProperty *)0x0;
  }
  pFVar1 = *param_3;
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
    cVar6 = (**(code **)(pFVar1->_padding_ + 0x78))();
    if (cVar6 == '\0') {
      pvVar9 = FCachedPropertyPath::GetCachedAddress(param_1);
      CallParentGetters(param_2,param_1,pvVar9);
      return true;
    }
    pFVar1 = *param_3;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
    pvVar9 = FCachedPropertyPath::GetCachedContainer(param_1);
    (*pcVar3)(pFVar1,pvVar9,param_2);
    return true;
  }
  return false;
}

// GetValue @ 146925990

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FLinearColor>::GetValue
          (FCachedPropertyPath *param_1,FLinearColor *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldVariant FVar8;
  FLinearColor *_Src;
  void *pvVar9;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar8 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar8.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar8.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar7 = FPropertyPathSegment::GetArrayIndex(this), iVar7 != -1)) {
      bVar4 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>
                        ((FProperty *)pFVar1[1]._padding_);
      if (!bVar4) {
        return false;
      }
      plVar2 = (longlong *)pFVar1[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar2 + 0x34));
      return true;
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *param_3 = (FProperty *)0x0;
  }
  bVar4 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(*param_3);
  if (!bVar4) {
    return false;
  }
  cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar6 == '\0') {
    pvVar9 = FCachedPropertyPath::GetCachedAddress(param_1);
    CallParentGetters(param_2,param_1,pvVar9);
    return true;
  }
  pFVar1 = *param_3;
  pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
  pvVar9 = FCachedPropertyPath::GetCachedContainer(param_1);
  (*pcVar3)(pFVar1,pvVar9,param_2);
  return true;
}

// GetValue @ 146925b20

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FSlateBrush>::GetValue
          (FCachedPropertyPath *param_1,FSlateBrush *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldVariant FVar8;
  UScriptStruct *pUVar9;
  FSlateBrush *_Src;
  void *pvVar10;
  bool bVar11;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar8 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar8.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar8.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar7 = FPropertyPathSegment::GetArrayIndex(this), iVar7 != -1)) {
      lVar2 = pFVar1[1]._padding_;
      if (lVar2 == 0) {
        return false;
      }
      if ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) == 0) {
        return false;
      }
      pUVar9 = FSlateBrush::StaticStruct();
      if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
        bVar11 = pUVar9 == (UScriptStruct *)0x0;
      }
      else {
        bVar11 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar9;
      }
      if (!bVar11) {
        return false;
      }
      plVar3 = (longlong *)pFVar1[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
      return true;
    }
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
    *param_3 = (FProperty *)0x0;
  }
  pFVar1 = *param_3;
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar9 = FSlateBrush::StaticStruct();
    if ((UScriptStruct *)pFVar1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar11 = pUVar9 == (UScriptStruct *)0x0;
    }
    else {
      bVar11 = (UScriptStruct *)pFVar1[1]._padding_ == pUVar9;
    }
    if (bVar11) {
      cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
      if (cVar6 == '\0') {
        pvVar10 = FCachedPropertyPath::GetCachedAddress(param_1);
        CallParentGetters(param_2,param_1,pvVar10);
        return true;
      }
      pFVar1 = *param_3;
      pcVar4 = *(code **)(pFVar1->_padding_ + 0x90);
      pvVar10 = FCachedPropertyPath::GetCachedContainer(param_1);
      (*pcVar4)(pFVar1,pvVar10,param_2);
      return true;
    }
  }
  return false;
}

// GetValue @ 146925d00

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FSlateColor>::GetValue
          (FCachedPropertyPath *param_1,FSlateColor *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldVariant FVar8;
  UScriptStruct *pUVar9;
  FSlateColor *_Src;
  void *pvVar10;
  bool bVar11;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar8 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar8.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar8.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar7 = FPropertyPathSegment::GetArrayIndex(this), iVar7 != -1)) {
      lVar2 = pFVar1[1]._padding_;
      if (lVar2 == 0) {
        return false;
      }
      if ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) == 0) {
        return false;
      }
      pUVar9 = FSlateColor::StaticStruct();
      if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
        bVar11 = pUVar9 == (UScriptStruct *)0x0;
      }
      else {
        bVar11 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar9;
      }
      if (!bVar11) {
        return false;
      }
      plVar3 = (longlong *)pFVar1[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
      return true;
    }
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
    *param_3 = (FProperty *)0x0;
  }
  pFVar1 = *param_3;
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar9 = FSlateColor::StaticStruct();
    if ((UScriptStruct *)pFVar1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar11 = pUVar9 == (UScriptStruct *)0x0;
    }
    else {
      bVar11 = (UScriptStruct *)pFVar1[1]._padding_ == pUVar9;
    }
    if (bVar11) {
      cVar6 = (**(code **)((*param_3)->_padding_ + 0x78))();
      if (cVar6 == '\0') {
        pvVar10 = FCachedPropertyPath::GetCachedAddress(param_1);
        CallParentGetters(param_2,param_1,pvVar10);
        return true;
      }
      pFVar1 = *param_3;
      pcVar4 = *(code **)(pFVar1->_padding_ + 0x90);
      pvVar10 = FCachedPropertyPath::GetCachedContainer(param_1);
      (*pcVar4)(pFVar1,pvVar10,param_2);
      return true;
    }
  }
  return false;
}

// GetValue @ 146925ee0

bool __cdecl
PropertyPathHelpersInternal::FGetValueFastHelper<FText>::GetValue
          (FCachedPropertyPath *param_1,FText *param_2,FProperty **param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  FPropertyPathSegment *this;
  FFieldVariant FVar9;
  FFieldClass *pFVar10;
  FText *_Src;
  void *pvVar11;
  
  this = FCachedPropertyPath::GetLastSegment(param_1);
  FVar9 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar9.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar9.Container, pFVar1 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    *param_3 = pFVar1;
    if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (iVar8 = FPropertyPathSegment::GetArrayIndex(this), iVar8 != -1)) {
      pFVar2 = *(FFieldClass **)(pFVar1[1]._padding_ + 8);
      pFVar10 = FTextProperty::StaticClass();
      if (pFVar2 != pFVar10) {
        return false;
      }
      plVar3 = (longlong *)pFVar1[1]._padding_;
      _Src = FCachedPropertyPath::GetCachedAddress(param_1);
      if (param_2 == _Src) {
        return true;
      }
      if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_2,_Src,1);
        return true;
      }
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
      return true;
    }
  }
  else {
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
  }
  pFVar2 = (FFieldClass *)(*param_3)->_padding_;
  pFVar10 = FTextProperty::StaticClass();
  if (pFVar2 != pFVar10) {
    return false;
  }
  cVar7 = (**(code **)((*param_3)->_padding_ + 0x78))();
  if (cVar7 == '\0') {
    pvVar11 = FCachedPropertyPath::GetCachedAddress(param_1);
    CallParentGetters(param_2,param_1,pvVar11);
    return true;
  }
  pFVar1 = *param_3;
  pcVar4 = *(code **)(pFVar1->_padding_ + 0x90);
  pvVar11 = FCachedPropertyPath::GetCachedContainer(param_1);
  (*pcVar4)(pFVar1,pvVar11,param_2);
  return true;
}

