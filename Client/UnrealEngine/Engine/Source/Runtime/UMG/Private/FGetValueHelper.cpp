// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 11

// GetValue @ 146926070

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<unsigned_char,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,uchar *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  longlong *plVar9;
  FProperty *this_00;
  FProperty *pFVar10;
  bool bVar11;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  this_00 = (FProperty *)0x0;
  if ((((*(byte *)FVar6.Container & 1) == 0) &&
      (pFVar10 = *(FProperty **)FVar6.Container, pFVar10 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    plVar9 = &pFVar10->_padding_;
    this_00 = pFVar10;
    if ((*(ulonglong *)(pFVar10->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_14692616d;
    this_00 = (FProperty *)pFVar10[1]._padding_;
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    plVar9 = (longlong *)&DAT_00000008;
LAB_14692616d:
    pFVar10 = this_00;
    if ((this_00 != (FProperty *)0x0) && ((*(uint *)(*plVar9 + 0x18) >> 0x11 & 1) != 0)) {
      bVar11 = *(char *)((longlong)&this_00[1]._padding_ + 3) != -1;
      goto LAB_146926109;
    }
  }
  pFVar1 = (FFieldClass *)this_00->_padding_;
  pFVar7 = FByteProperty::StaticClass();
  bVar11 = pFVar1 == pFVar7;
  this_00 = pFVar10;
LAB_146926109:
  if (bVar11) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if ((this_00 == (FProperty *)0x0) || ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0))
    {
      bVar11 = this_00->ElementSize == 1;
    }
    else {
      bVar11 = *(char *)((longlong)&this_00[1]._padding_ + 3) != -1;
    }
    if ((bVar11) && (iVar5 < this_00->ArrayDim)) {
      cVar4 = (**(code **)(this_00->_padding_ + 0x78))(this_00);
      if (cVar4 != '\0') {
        (**(code **)(this_00->_padding_ + 0x90))(this_00,param_1,param_3);
        *param_4 = this_00;
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,iVar5);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = this_00;
      return true;
    }
  }
  return false;
}

// GetValue @ 146926220

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<unsigned_char,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,uchar *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  longlong *plVar8;
  FProperty *pFVar9;
  void *pvVar10;
  FProperty *pFVar11;
  bool bVar12;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  pFVar9 = (FProperty *)0x0;
  if ((((*(byte *)FVar6.Container & 1) == 0) &&
      (pFVar11 = *(FProperty **)FVar6.Container, pFVar11 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0xf & 1) != 0)) {
    plVar8 = &pFVar11->_padding_;
    pFVar9 = pFVar11;
    if ((*(ulonglong *)(pFVar11->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_14692631d;
    pFVar9 = (FProperty *)pFVar11[1]._padding_;
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar8 = (longlong *)&DAT_00000008;
LAB_14692631d:
    pFVar11 = pFVar9;
    if ((pFVar9 != (FProperty *)0x0) && ((*(uint *)(*plVar8 + 0x18) >> 0x11 & 1) != 0)) {
      bVar12 = *(char *)((longlong)&pFVar9[1]._padding_ + 3) != -1;
      goto LAB_1469262b9;
    }
  }
  pFVar1 = (FFieldClass *)pFVar9->_padding_;
  pFVar7 = FByteProperty::StaticClass();
  bVar12 = pFVar1 == pFVar7;
  pFVar9 = pFVar11;
LAB_1469262b9:
  if (bVar12) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if ((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      bVar12 = pFVar9->ElementSize == 1;
    }
    else {
      bVar12 = *(char *)((longlong)&pFVar9[1]._padding_ + 3) != -1;
    }
    if ((bVar12) && (iVar5 < pFVar9->ArrayDim)) {
      cVar3 = (**(code **)(pFVar9->_padding_ + 0x78))(pFVar9);
      if (cVar3 != '\0') {
        (**(code **)(pFVar9->_padding_ + 0x90))(pFVar9,param_1,param_3);
        *param_4 = pFVar9;
        return true;
      }
      if (((iVar5 < 0) || (pFVar9->ArrayDim <= iVar5)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pvVar10 = (void *)((longlong)param_1 +
                        (longlong)pFVar9->Offset_Internal +
                        (longlong)iVar5 * (longlong)pFVar9->ElementSize);
      if (pvVar10 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar10);
        CallParentGetters(param_3,param_2,pvVar10);
      }
      *param_4 = pFVar9;
      return true;
    }
  }
  return false;
}

// GetValue @ 146926450

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<double,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,double *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  FProperty *this_00;
  bool bVar9;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  if (((((*(byte *)FVar6.Container & 1) != 0) ||
       (this_00 = *(FProperty **)FVar6.Container, this_00 == (FProperty *)0x0)) ||
      ((*(uint *)(this_00->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     this_00 = (FProperty *)0x0, bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  pFVar1 = (FFieldClass *)this_00->_padding_;
  pFVar7 = FDoubleProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if (((*(byte *)(this_00->_padding_ + 0x18) & 0x40) == 0) || (this_00 == (FProperty *)0x0)) {
      bVar9 = this_00->ElementSize == 8;
    }
    else {
      bVar9 = this_00->ElementSize == 1;
    }
    if ((bVar9) && (iVar5 < this_00->ArrayDim)) {
      cVar4 = (**(code **)(this_00->_padding_ + 0x78))(this_00);
      if (cVar4 != '\0') {
        (**(code **)(this_00->_padding_ + 0x90))(this_00,param_1,param_3);
        *param_4 = this_00;
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,iVar5);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = this_00;
      return true;
    }
  }
  return false;
}

// GetValue @ 1469265b0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<double,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,double *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  FProperty *pFVar9;
  bool bVar10;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  if (((((*(byte *)FVar6.Container & 1) != 0) ||
       (pFVar9 = *(FProperty **)FVar6.Container, pFVar9 == (FProperty *)0x0)) ||
      ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar9 = (FProperty *)0x0, bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (FFieldClass *)pFVar9->_padding_;
  pFVar7 = FDoubleProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if (((*(byte *)(pFVar9->_padding_ + 0x18) & 0x40) == 0) || (pFVar9 == (FProperty *)0x0)) {
      bVar10 = pFVar9->ElementSize == 8;
    }
    else {
      bVar10 = pFVar9->ElementSize == 1;
    }
    if ((bVar10) && (iVar5 < pFVar9->ArrayDim)) {
      cVar3 = (**(code **)(pFVar9->_padding_ + 0x78))(pFVar9);
      if (cVar3 != '\0') {
        (**(code **)(pFVar9->_padding_ + 0x90))(pFVar9,param_1,param_3);
        *param_4 = pFVar9;
        return true;
      }
      if (((iVar5 < 0) || (pFVar9->ArrayDim <= iVar5)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pvVar8 = (void *)((longlong)param_1 +
                       (longlong)pFVar9->Offset_Internal +
                       (longlong)iVar5 * (longlong)pFVar9->ElementSize);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = pFVar9;
      return true;
    }
  }
  return false;
}

// GetValue @ 146926790

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FLinearColor,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FLinearColor *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FProperty *pFVar7;
  void *pvVar8;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  if (((((*(byte *)FVar6.Container & 1) != 0) ||
       (pFVar7 = *(FProperty **)FVar6.Container, pFVar7 == (FProperty *)0x0)) ||
      ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar7 = (FProperty *)0x0, bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  bVar2 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(pFVar7);
  if (bVar2) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if ((pFVar7 == (FProperty *)0x0) || ((*(byte *)(pFVar7->_padding_ + 0x18) & 0x40) == 0)) {
      bVar2 = pFVar7->ElementSize == 0x10;
    }
    else {
      bVar2 = pFVar7->ElementSize == 1;
    }
    if ((bVar2) && (iVar5 < pFVar7->ArrayDim)) {
      cVar3 = (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
      if (cVar3 != '\0') {
        (**(code **)(pFVar7->_padding_ + 0x90))(pFVar7,param_1,param_3);
        *param_4 = pFVar7;
        return true;
      }
      if (((iVar5 < 0) || (pFVar7->ArrayDim <= iVar5)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pvVar8 = (void *)((longlong)param_1 +
                       (longlong)pFVar7->Offset_Internal +
                       (longlong)iVar5 * (longlong)pFVar7->ElementSize);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = pFVar7;
      return true;
    }
  }
  return false;
}

// GetValue @ 146926960

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FSlateBrush,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateBrush *param_3,FProperty **param_4)

{
  FProperty *this;
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this_00;
  FFieldVariant FVar6;
  UScriptStruct *pUVar7;
  void *pvVar8;
  bool bVar9;
  
  this_00 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this_00);
  FVar6 = FPropertyPathSegment::GetField(this_00);
  if ((((*(byte *)FVar6.Container & 1) == 0) &&
      (this = *(FProperty **)FVar6.Container, this != (FProperty *)0x0)) &&
     (uVar1 = *(ulonglong *)(this->_padding_ + 0x18), (uVar1 >> 0xf & 1) != 0)) {
    if ((uVar1 >> 0x14 & 1) != 0) {
      pUVar7 = FSlateBrush::StaticStruct();
      if ((UScriptStruct *)this[1]._padding_ == (UScriptStruct *)0x0) {
        bVar9 = pUVar7 == (UScriptStruct *)0x0;
      }
      else {
        bVar9 = (UScriptStruct *)this[1]._padding_ == pUVar7;
      }
      if (bVar9) {
        if (iVar5 == -1) {
          iVar5 = 0;
        }
        if ((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0) {
          bVar9 = this->ElementSize == 0xb0;
        }
        else {
          bVar9 = this->ElementSize == 1;
        }
        if ((bVar9) && (iVar5 < this->ArrayDim)) {
          cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
          if (cVar3 != '\0') {
            (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
            *param_4 = this;
            return true;
          }
          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar5);
          if (pvVar8 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
            CallParentGetters(param_3,param_2,pvVar8);
          }
          *param_4 = this;
          return true;
        }
      }
    }
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// GetValue @ 146926ae0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FSlateBrush,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FSlateBrush *param_3,FProperty **param_4)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  FPropertyPathSegment *this;
  FFieldVariant FVar7;
  UScriptStruct *pUVar8;
  void *pvVar9;
  bool bVar10;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar6 = FPropertyPathSegment::GetArrayIndex(this);
  FVar7 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar7.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar7.Container, pFVar1 != (FProperty *)0x0)) &&
     (uVar2 = *(ulonglong *)(pFVar1->_padding_ + 0x18), (uVar2 >> 0xf & 1) != 0)) {
    if ((uVar2 >> 0x14 & 1) != 0) {
      pUVar8 = FSlateBrush::StaticStruct();
      if ((UScriptStruct *)pFVar1[1]._padding_ == (UScriptStruct *)0x0) {
        bVar10 = pUVar8 == (UScriptStruct *)0x0;
      }
      else {
        bVar10 = (UScriptStruct *)pFVar1[1]._padding_ == pUVar8;
      }
      if (bVar10) {
        if (iVar6 == -1) {
          iVar6 = 0;
        }
        if ((*(byte *)(pFVar1->_padding_ + 0x18) & 0x40) == 0) {
          bVar10 = pFVar1->ElementSize == 0xb0;
        }
        else {
          bVar10 = pFVar1->ElementSize == 1;
        }
        if ((bVar10) && (iVar6 < pFVar1->ArrayDim)) {
          cVar4 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1);
          if (cVar4 != '\0') {
            (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1,param_3);
            *param_4 = pFVar1;
            return true;
          }
          if (((iVar6 < 0) || (pFVar1->ArrayDim <= iVar6)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pvVar9 = (void *)((longlong)param_1 +
                           (longlong)pFVar1->Offset_Internal +
                           (longlong)iVar6 * (longlong)pFVar1->ElementSize);
          if (pvVar9 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
            CallParentGetters(param_3,param_2,pvVar9);
          }
          *param_4 = pFVar1;
          return true;
        }
      }
    }
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetValue @ 146926cd0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FSlateColor,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateColor *param_3,FProperty **param_4)

{
  FProperty *this;
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this_00;
  FFieldVariant FVar6;
  UScriptStruct *pUVar7;
  void *pvVar8;
  bool bVar9;
  
  this_00 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this_00);
  FVar6 = FPropertyPathSegment::GetField(this_00);
  if ((((*(byte *)FVar6.Container & 1) == 0) &&
      (this = *(FProperty **)FVar6.Container, this != (FProperty *)0x0)) &&
     (uVar1 = *(ulonglong *)(this->_padding_ + 0x18), (uVar1 >> 0xf & 1) != 0)) {
    if ((uVar1 >> 0x14 & 1) != 0) {
      pUVar7 = FSlateColor::StaticStruct();
      if ((UScriptStruct *)this[1]._padding_ == (UScriptStruct *)0x0) {
        bVar9 = pUVar7 == (UScriptStruct *)0x0;
      }
      else {
        bVar9 = (UScriptStruct *)this[1]._padding_ == pUVar7;
      }
      if (bVar9) {
        if (iVar5 == -1) {
          iVar5 = 0;
        }
        if ((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0) {
          bVar9 = this->ElementSize == 0x14;
        }
        else {
          bVar9 = this->ElementSize == 1;
        }
        if ((bVar9) && (iVar5 < this->ArrayDim)) {
          cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
          if (cVar3 != '\0') {
            (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
            *param_4 = this;
            return true;
          }
          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar5);
          if (pvVar8 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
            CallParentGetters(param_3,param_2,pvVar8);
          }
          *param_4 = this;
          return true;
        }
      }
    }
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// GetValue @ 146926e40

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FSlateColor,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FSlateColor *param_3,FProperty **param_4)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  FPropertyPathSegment *this;
  FFieldVariant FVar7;
  UScriptStruct *pUVar8;
  void *pvVar9;
  bool bVar10;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar6 = FPropertyPathSegment::GetArrayIndex(this);
  FVar7 = FPropertyPathSegment::GetField(this);
  if ((((*(byte *)FVar7.Container & 1) == 0) &&
      (pFVar1 = *(FProperty **)FVar7.Container, pFVar1 != (FProperty *)0x0)) &&
     (uVar2 = *(ulonglong *)(pFVar1->_padding_ + 0x18), (uVar2 >> 0xf & 1) != 0)) {
    if ((uVar2 >> 0x14 & 1) != 0) {
      pUVar8 = FSlateColor::StaticStruct();
      if ((UScriptStruct *)pFVar1[1]._padding_ == (UScriptStruct *)0x0) {
        bVar10 = pUVar8 == (UScriptStruct *)0x0;
      }
      else {
        bVar10 = (UScriptStruct *)pFVar1[1]._padding_ == pUVar8;
      }
      if (bVar10) {
        if (iVar6 == -1) {
          iVar6 = 0;
        }
        if ((*(byte *)(pFVar1->_padding_ + 0x18) & 0x40) == 0) {
          bVar10 = pFVar1->ElementSize == 0x14;
        }
        else {
          bVar10 = pFVar1->ElementSize == 1;
        }
        if ((bVar10) && (iVar6 < pFVar1->ArrayDim)) {
          cVar4 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1);
          if (cVar4 != '\0') {
            (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1,param_3);
            *param_4 = pFVar1;
            return true;
          }
          if (((iVar6 < 0) || (pFVar1->ArrayDim <= iVar6)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pvVar9 = (void *)((longlong)param_1 +
                           (longlong)pFVar1->Offset_Internal +
                           (longlong)iVar6 * (longlong)pFVar1->ElementSize);
          if (pvVar9 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
            CallParentGetters(param_3,param_2,pvVar9);
          }
          *param_4 = pFVar1;
          return true;
        }
      }
    }
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetValue @ 146927020

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FText,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FText *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  FProperty *this_00;
  bool bVar9;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  if (((((*(byte *)FVar6.Container & 1) != 0) ||
       (this_00 = *(FProperty **)FVar6.Container, this_00 == (FProperty *)0x0)) ||
      ((*(uint *)(this_00->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     this_00 = (FProperty *)0x0, bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  pFVar1 = (FFieldClass *)this_00->_padding_;
  pFVar7 = FTextProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if (((*(byte *)(this_00->_padding_ + 0x18) & 0x40) == 0) || (this_00 == (FProperty *)0x0)) {
      bVar9 = this_00->ElementSize == 0x10;
    }
    else {
      bVar9 = this_00->ElementSize == 1;
    }
    if ((bVar9) && (iVar5 < this_00->ArrayDim)) {
      cVar4 = (**(code **)(this_00->_padding_ + 0x78))(this_00);
      if (cVar4 != '\0') {
        (**(code **)(this_00->_padding_ + 0x90))(this_00,param_1,param_3);
        *param_4 = this_00;
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,iVar5);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = this_00;
      return true;
    }
  }
  return false;
}

// GetValue @ 146927180

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FText,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FText *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  FPropertyPathSegment *this;
  FFieldVariant FVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  FProperty *pFVar9;
  bool bVar10;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar5 = FPropertyPathSegment::GetArrayIndex(this);
  FVar6 = FPropertyPathSegment::GetField(this);
  if (((((*(byte *)FVar6.Container & 1) != 0) ||
       (pFVar9 = *(FProperty **)FVar6.Container, pFVar9 == (FProperty *)0x0)) ||
      ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar9 = (FProperty *)0x0, bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (FFieldClass *)pFVar9->_padding_;
  pFVar7 = FTextProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if (((*(byte *)(pFVar9->_padding_ + 0x18) & 0x40) == 0) || (pFVar9 == (FProperty *)0x0)) {
      bVar10 = pFVar9->ElementSize == 0x10;
    }
    else {
      bVar10 = pFVar9->ElementSize == 1;
    }
    if ((bVar10) && (iVar5 < pFVar9->ArrayDim)) {
      cVar3 = (**(code **)(pFVar9->_padding_ + 0x78))(pFVar9);
      if (cVar3 != '\0') {
        (**(code **)(pFVar9->_padding_ + 0x90))(pFVar9,param_1,param_3);
        *param_4 = pFVar9;
        return true;
      }
      if (((iVar5 < 0) || (pFVar9->ArrayDim <= iVar5)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pvVar8 = (void *)((longlong)param_1 +
                       (longlong)pFVar9->Offset_Internal +
                       (longlong)iVar5 * (longlong)pFVar9->ElementSize);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = pFVar9;
      return true;
    }
  }
  return false;
}

